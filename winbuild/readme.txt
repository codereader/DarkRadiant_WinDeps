== Notes about this folder ==

The winbuild folder contains all the sources needed to build the Win32/Win64 dependency binaries.

There is a solution file for VC++ 2017:

	Visual Studio 2017: msvc/darkradiant_windeps.sln

The solutions work best when the winbuild folder is checked out as subfolder to the trunk/darkradiant working copy, 
next to your w32deps/w64deps directories, as indicated on the wiki:

1. Get TortoiseGit or GitHub Windows
2. Right-click your C:\Games (or likewise) folder and select Git Clone...
3. Enter https://github.com/codereader/DarkRadiant_WinDeps.git and it will suggest to clone it to  
   C:\Games\DarkRadiant\DarkRadiant_WinDeps, which is ok.

The DarkRadiant_WinDeps folder contains three directories: w32deps, w64deps and winbuild.
The VC++ projects in the winbuild folder will place their binaries in the corresponding location 
in the w32deps/w64deps folders, which is where you can pick them up and drop them into your
DarkRadiant folder to compile the editor itself.

== Compile Scripts (VC++ 2017) ==

For VC++ 2017 you can use the shell script in the winbuild folder. Open a VC++ 2017 Developer Command Prompt and head to the
winbuild directory, then call the batch file corresponding to your compiler version.

* build_all.x86.cmd => Compiles the 32 bit solution (Debug & Release versions).
* build_all.x64.cmd => Compiles the 64 bit solution (Debug & Release versions).

The 32 bit shell scripts will place the *.lib and .dll files directly into your w32deps folder, the 64 bit ones put their files into w64deps.

== The PDB Files ==

If you're a Windows maintainer and intend to upload a new w32deps/w64deps set for release, be sure to save all the .pdbs you are 
generating during the build process, these are invaluable when it comes to debug crashdumps sent by users later down the road.

After compiling the winbuild solution, run the compress_windeps_pdbs.cmd files in the winbuild/ root folder, 
it will change directories to w32deps and w64deps and collect all .pdb files from the respective directories, 
compressing it into a .7z archive - which should be uploaded to some FTP and linked from the wiki, ideally.

Note: You'll need 7-zip installed on the system for the shell script to work.

--greebo (December 2011, some updates September 2012, July 2014, June 2016 and July 2017)