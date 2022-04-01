== Notes about this folder ==

The winbuild folder contains all the sources needed to build the x64 dependency binaries
(x86 support has been dropped in October 2021).

There is a solution file for VC++ 2022:

	Visual Studio 2022: msvc/darkradiant_windeps.sln

The DarkRadiant_WinDeps folder contains two directories: windeps and winbuild.
The VC++ projects in the winbuild folder will place their binaries in the windeps folder, 
which you can copy and paste into your DarkRadiant folder to compile the editor.

== Compile Scripts (VC++ 2022) ==

For VC++ 2022 you can use the shell script in the winbuild folder: Open a VC++ 2022 Developer Command Prompt and head to the
winbuild directory, then call the batch file:

* build_all.x64.cmd => Compiles the 64 bit solution (Debug & Release versions).

== The PDB Files ==

If you're a Windows maintainer and intend to upload a new windeps file for release, be sure to save all the .pdbs you are 
generating during the build process, these are invaluable when it comes to debug crashdumps sent by users later down the road.

After compiling the winbuild solution, run the compress_windeps_pdbs.cmd files in the winbuild/ root folder, 
it will change directories to windeps and collect all .pdb files from the respective directories, 
compressing it into a .7z archive - which should be uploaded to the Github releases page.

Note: You'll need 7-zip installed on the system for the shell script to work.

--greebo (December 2011, some updates September 2012, July 2014, June 2016, July 2017, November 2019 and October 2021)