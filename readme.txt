== Notes about this folder ==

The winbuild folder contains all the sources needed to build the Win32/Win64 dependency binaries, like gtkmm, gtkglextmm, etc. 

There is one solution file which contains all the projects needed to build the GTK+ stack from scratch in VC++ 2010,
it's called darkradiant_windeps.sln.

Some additional projects are remaining for libvorbis and a few others, there is a MSVC_Net2010 folder in them 
containing the solution.

The solutions work best when the winbuild folder is checked out as subfolder to the trunk/darkradiant working copy, 
next to your w32deps/w64deps directories, as indicated on the wiki:

1. Get TortoiseSVN
2. Right-click your C:\Games (or likewise) folder and select SVN Checkout...
3. Check out the URL https://darkradiant.svn.sourceforge.net/svnroot/darkradiant/trunk/darkradiant to C:\Games\DarkRadiant
4. Right-click your C:\Games folder >> SVN Checkout...
5. Select https://darkradiant.svn.sourceforge.net/svnroot/darkradiant/trunk/w32deps to C:\Games\DarkRadiant\w32deps (Note: manually type in 
   this folder, Tortoise will suggest something like C:\Games\w32deps, which is not enough.)
6. For Win64 targets: Right-click your C:\Games folder >> SVN Checkout...
7. For Win64 targets: Select https://darkradiant.svn.sourceforge.net/svnroot/darkradiant/trunk/w64deps to C:\Games\DarkRadiant\w64deps

Finally, to check out the winbuild folder:
8. Right-click your C:\Games folder >> SVN Checkout...
7. Select https://darkradiant.svn.sourceforge.net/svnroot/darkradiant/trunk/winbuild to C:\Games\DarkRadiant\winbuild

The folder structure should then look like this:

 C:\Games\DarkRadiant
 C:\Games\DarkRadiant\w32deps
 C:\Games\DarkRadiant\w64deps [optional for x64 builds]
 C:\Games\DarkRadiant\winbuild

This way, the VC++ projects place their binaries in the correct location in the w32deps/w64deps folder and you can compile
DarkRadiant right off the bat.

== Compile Scripts (VC++ 2010) ==

For VC++ 2010 you can use the shell script in the winbuild folder. Open a VC++ 2010 Command Prompt and head to the
winbuild directory, then call the batch file corresponding to your compiler version.

* build_all.x86.cmd => Compiles the 32 bit GTK stack, including gtksourceviewmm and gtkglextmm (Debug & Release versions).
* build_all.x64.cmd => Compiles the 64 bit GTK stack, including gtksourceviewmm and gtkglextmm (Debug & Release versions).
* build_c_libs.x86.cmd => Compiles all 32 bit C-libraries like win_iconv, libxml2, gtkglext and gtksourceview (Debug & Release versions).
* build_c_libs.x64.cmd => Compiles all 64 bit C-libraries like win_iconv, libxml2, gtkglext and gtksourceview (Debug & Release versions).

The 32 bit shell scripts will place the *.lib and .dll files directly into your w32deps folder, the 64 bit ones put their files into w64deps.

--greebo (December 2011)