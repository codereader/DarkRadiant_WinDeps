






























 





















































































































































































































































































































































































































































































































































































































































































































































































.386
.MODEL FLAT, C

EXTRN ffi_closure_SYSV_inner:NEAR

_TEXT SEGMENT

ffi_call_win32 PROC NEAR,
    ffi_prep_args : NEAR PTR DWORD,
    ecif          : NEAR PTR DWORD,
    cif_bytes     : DWORD,
    cif_flags     : DWORD,
    rvalue        : NEAR PTR DWORD,
    fn            : NEAR PTR DWORD

        ;; Make room for all of the new args.
        mov  ecx, cif_bytes
        sub  esp, ecx

        mov  eax, esp

        ;; Place all of the ffi_prep_args in position
        push ecif
        push eax
        call ffi_prep_args

        ;; Return stack to previous state and call the function
        add  esp, 8

        call fn

        ;; cdecl:   we restore esp in the epilogue, so there's no need to
        ;;          remove the space we pushed for the args.
        ;; stdcall: the callee has already cleaned the stack.

        ;; Load ecx with the return type code
        mov  ecx, cif_flags

        ;; If the return value pointer is NULL, assume no return value.
        cmp  rvalue, 0
        jne  ca_jumptable

        ;; Even if there is no space for the return value, we are
        ;; obliged to handle floating-point values.
        cmp  ecx, 2
        jne  ca_epilogue
        fstp st(0)

        jmp  ca_epilogue

ca_jumptable:
        jmp  [ca_jumpdata + 4 * ecx]
ca_jumpdata:
        ;; Do not insert anything here between label and jump table.
        dd offset ca_epilogue       ;; 0
        dd offset ca_retint         ;; 1
        dd offset ca_retfloat       ;; 2
        dd offset ca_retdouble      ;; 3
        dd offset ca_retlongdouble  ;; 3
        dd offset ca_retint8        ;; 5
        dd offset ca_retint8        ;; 6
        dd offset ca_retint16       ;; 7
        dd offset ca_retint16       ;; 8
        dd offset ca_retint         ;; 9
        dd offset ca_retint         ;; 10
        dd offset ca_retint64       ;; 11
        dd offset ca_retint64       ;; 12
        dd offset ca_epilogue       ;; 13
        dd offset ca_retint         ;; 14
        dd offset ca_retint8        ;; (14 + 1)
        dd offset ca_retint16       ;; (14 + 2)
        dd offset ca_retint         ;; (14 + 3)

ca_retint8:
        ;; Load %ecx with the pointer to storage for the return value
        mov   ecx, rvalue
        mov   [ecx + 0], al
        jmp   ca_epilogue

ca_retint16:
        ;; Load %ecx with the pointer to storage for the return value
        mov   ecx, rvalue
        mov   [ecx + 0], ax
        jmp   ca_epilogue

ca_retint:
        ;; Load %ecx with the pointer to storage for the return value
        mov   ecx, rvalue
        mov   [ecx + 0], eax
        jmp   ca_epilogue

ca_retint64:
        ;; Load %ecx with the pointer to storage for the return value
        mov   ecx, rvalue
        mov   [ecx + 0], eax
        mov   [ecx + 4], edx
        jmp   ca_epilogue

ca_retfloat:
        ;; Load %ecx with the pointer to storage for the return value
        mov   ecx, rvalue
        fstp  DWORD PTR [ecx]
        jmp   ca_epilogue

ca_retdouble:
        ;; Load %ecx with the pointer to storage for the return value
        mov   ecx, rvalue
        fstp  QWORD PTR [ecx]
        jmp   ca_epilogue

ca_retlongdouble:
        ;; Load %ecx with the pointer to storage for the return value
        mov   ecx, rvalue
        fstp  TBYTE PTR [ecx]
        jmp   ca_epilogue

ca_epilogue:
        ;; Epilogue code is autogenerated.
        ret
ffi_call_win32 ENDP

ffi_closure_SYSV PROC NEAR FORCEFRAME
    ;; the ffi_closure ctx is passed in eax by the trampoline.

        sub  esp, 40
        lea  edx, [ebp - 24]
        mov  [ebp - 12], edx         ;; resp
        lea  edx, [ebp + 8]
        mov  [esp + 8], edx          ;; args
        lea  edx, [ebp - 12]
        mov  [esp + 4], edx          ;; &resp
        mov  [esp], eax              ;; closure
        call ffi_closure_SYSV_inner
        mov  ecx, [ebp - 12]

cs_jumptable:
        jmp  [cs_jumpdata + 4 * eax]
cs_jumpdata:
        ;; Do not insert anything here between the label and jump table.
        dd offset cs_epilogue       ;; 0
        dd offset cs_retint         ;; 1
        dd offset cs_retfloat       ;; 2
        dd offset cs_retdouble      ;; 3
        dd offset cs_retlongdouble  ;; 3
        dd offset cs_retint8        ;; 5
        dd offset cs_retint8        ;; 6
        dd offset cs_retint16       ;; 7
        dd offset cs_retint16       ;; 8
        dd offset cs_retint         ;; 9
        dd offset cs_retint         ;; 10
        dd offset cs_retint64       ;; 11
        dd offset cs_retint64       ;; 12
        dd offset cs_retstruct      ;; 13
        dd offset cs_retint         ;; 14
        dd offset cs_retint8        ;; (14 + 1)
        dd offset cs_retint16       ;; (14 + 2)
        dd offset cs_retint         ;; (14 + 3)

cs_retint8:
        mov   al, [ecx]
        jmp   cs_epilogue

cs_retint16:
        mov   ax, [ecx]
        jmp   cs_epilogue

cs_retint:
        mov   eax, [ecx]
        jmp   cs_epilogue

cs_retint64:
        mov   eax, [ecx + 0]
        mov   edx, [ecx + 4]
        jmp   cs_epilogue

cs_retfloat:
        fld   DWORD PTR [ecx]
        jmp   cs_epilogue

cs_retdouble:
        fld   QWORD PTR [ecx]
        jmp   cs_epilogue

cs_retlongdouble:
        fld   TBYTE PTR [ecx]
        jmp   cs_epilogue

cs_retstruct:
        ;; Caller expects us to pop struct return value pointer hidden arg.
        ;; Epilogue code is autogenerated.
        ret	4

cs_epilogue:
        ;; Epilogue code is autogenerated.
        ret
ffi_closure_SYSV ENDP



















































































ffi_closure_STDCALL PROC NEAR FORCEFRAME
    ;; the ffi_closure ctx is passed in eax by the trampoline.

        sub  esp, 40
        lea  edx, [ebp - 24]
        mov  [ebp - 12], edx         ;; resp
        lea  edx, [ebp + 12]         ;; account for stub return address on stack
        mov  [esp + 8], edx          ;; args
        lea  edx, [ebp - 12]
        mov  [esp + 4], edx          ;; &resp
        mov  [esp], eax              ;; closure
        call ffi_closure_SYSV_inner
        mov  ecx, [ebp - 12]

cd_jumptable:
        jmp  [cd_jumpdata + 4 * eax]
cd_jumpdata:
        ;; Do not insert anything here between the label and jump table.
        dd offset cd_epilogue       ;; 0
        dd offset cd_retint         ;; 1
        dd offset cd_retfloat       ;; 2
        dd offset cd_retdouble      ;; 3
        dd offset cd_retlongdouble  ;; 3
        dd offset cd_retint8        ;; 5
        dd offset cd_retint8        ;; 6
        dd offset cd_retint16       ;; 7
        dd offset cd_retint16       ;; 8
        dd offset cd_retint         ;; 9
        dd offset cd_retint         ;; 10
        dd offset cd_retint64       ;; 11
        dd offset cd_retint64       ;; 12
        dd offset cd_epilogue       ;; 13
        dd offset cd_retint         ;; 14
        dd offset cd_retint8        ;; (14 + 1)
        dd offset cd_retint16       ;; (14 + 2)
        dd offset cd_retint         ;; (14 + 3)

cd_retint8:
        mov   al, [ecx]
        jmp   cd_epilogue

cd_retint16:
        mov   ax, [ecx]
        jmp   cd_epilogue

cd_retint:
        mov   eax, [ecx]
        jmp   cd_epilogue

cd_retint64:
        mov   eax, [ecx + 0]
        mov   edx, [ecx + 4]
        jmp   cd_epilogue

cd_retfloat:
        fld   DWORD PTR [ecx]
        jmp   cd_epilogue

cd_retdouble:
        fld   QWORD PTR [ecx]
        jmp   cd_epilogue

cd_retlongdouble:
        fld   TBYTE PTR [ecx]
        jmp   cd_epilogue

cd_epilogue:
        ;; Epilogue code is autogenerated.
        ret
ffi_closure_STDCALL ENDP

_TEXT ENDS
END





































































































































































































































































































































































































































































































































































































































































































