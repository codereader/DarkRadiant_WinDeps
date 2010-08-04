== Notes about this folder ==

The winbuild folder contains all the sources needed to build the Win32/Win64 dependency binaries, like gtkmm, gtkglextmm, etc. 

There should be VC++ project files in each of the subdirectories, which work best when the winbuild folder is checked out as subfolder
to the trunk/darkradiant working copy, next to your w32deps/w64deps directories, as indicated on the wiki:

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

This way, the VC++ projects place their binaries in the correct location in the w32deps/w64deps folder and you can compile
DarkRadiant right off the bat.

More detailed instructions when I've found some more time. :)
--greebo