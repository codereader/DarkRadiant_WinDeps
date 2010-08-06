#ifndef _GDK_GLEXT_CONFIG_H_
#define _GDK_GLEXT_CONFIG_H_

// greebo: this file seems to be necessary to compile gdkglextmm 
// and it was missing in the gtkglextmm package, so here it is
// The inclusion below is suggested as found here: http://mirex.mypage.sk/FILES/gtkglextmm-vs9.txt

#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>
#undef max 

#endif 
