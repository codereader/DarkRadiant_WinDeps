== Notes about this folder ==

The winbuild folder contains all the sources needed to build the Win32/Win64 dependency binaries, like gtkmm, gtkglextmm, etc. 

There should be VC++ project files in each of the subdirectories (e.g. MSVC_Net2010 for VC++ 2010), 
which work best when the winbuild folder is checked out as subfolder to the trunk/darkradiant working copy, 
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

== Compile Scripts / Compile order for gtkmm ==

For VC++ 2010 you can use the shell script in the winbuild folder. Open a VC++ 2010 Command Prompt and head to the
winbuild directory, then call the rebuild_all.x86.cmd file (for building the 32 bits libraries, release & debug).

For other VC++ versions, you'll need to build stuff on your own. Use this build order (http://live.gnome.org/gtkmm/MSWindows/BuildingGtkmm)

 1. libsigc++
 2. glibmm
 3. cairomm
 4. pangomm
 5. gtkmm
 6. win_iconv
 7. libxml2
 8. gtksourceview
 9. gtksourceviewmm
10. gtkglextmm

More detailed instructions when I've found some more time. :)
--greebo