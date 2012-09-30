== Notes about this folder ==

The winbuild folder contains all the sources needed to build the Win32/Win64 dependency binaries, like gtkmm, gtkglextmm, etc. 

There is a solution file for VC++ 2010 and another for VC++ 2012 which contains all the projects needed to build the GTK+ stack 
from scratch, they are called msvc2010/darkradiant_windeps.sln and msvc2012/darkradiant_windeps.sln:

	Visual Studio 2012: msvc2012/darkradiant_windeps.sln
	Visual Studio 2010: msvc2010/darkradiant_windeps.sln

The solutions work best when the winbuild folder is checked out as subfolder to the trunk/darkradiant working copy, 
next to your w32deps/w64deps directories, as indicated on the wiki:

1. Get TortoiseSVN and Git
2. Right-click your C:\Games (or likewise) folder and select SVN Checkout...
3. Using git, Check out the URL git://github.com/orbweaver/DarkRadiant.git to C:\Games\DarkRadiant
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
 C:\Games\DarkRadiant\w64deps [optional, for x64 builds only]
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

This script can probably be updated to compile the VC++ 2012 solution rather easily, but this isn't done yet.

== The PDB Files ==

If you're a Windows maintainer and intend to upload a new w32deps/w64deps set to SVN, be sure to save all the .pdbs you are 
generating during the build process, these are invaluable when it comes to debug crashdumps sent by users later down the road.

After compiling the winbuild solution, run the compress_w32deps_pdbs.cmd / compress_w64deps_pdbs.cmd files in the winbuild/ root 
folder, it will change directories to w32deps and w64deps and collect all .pdb files from the respective directories, 
compressing it into a .7z archive - which should be uploaded to some FTP and linked from the wiki, ideally. 

Note: You'll need 7-zip installed on the system for the shell script to work.

--greebo (December 2011, some updates September 2012)