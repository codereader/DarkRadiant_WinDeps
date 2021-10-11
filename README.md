# DarkRadiant Windows Dependencies

This is a helper repository containing the headers, libraries and binaries needed to compile the code in the [DarkRadiant Repository](https://github.com/codereader/DarkRadiant) in Windows / Visual Studio.

Only DarkRadiant maintainers are supposed to work on this repository, folks trying to compile DarkRadiant from source just download the dependency package from the releases page and extract it to their cloned working copy:

https://github.com/codereader/DarkRadiant_WinDeps/releases/latest  

The dependencies package needs to be extracted into the main DarkRadiant
source directory, i.e. alongside the **include/** and **radiant/** directories.
Just drop the **windeps.7z** in the DarkRadiant folder and use 7-zip's "Extract to here".

## Original Sources

Where are all these files from?

- freetype - https://download.savannah.gnu.org/releases/freetype/
- FTGL - https://github.com/frankheckenbach/ftgl
- GLEW - https://github.com/nigels-com/glew
- libeigen - https://gitlab.com/libeigen/eigen
- libgit2 - https://github.com/libgit2/libgit2
- libjpeg - https://sourceforge.net/projects/libjpeg/
- libpng - http://www.libpng.org
- libsigc++ - https://github.com/libsigcplusplus/libsigcplusplus
- libvorbis - https://github.com/xiph/vorbis/
- libxml2 - http://xmlsoft.org/
- libzlib - https://zlib.net/
- Python - https://www.python.org
- win_iconv - https://github.com/win-iconv/win-iconv

Original licences apply.

## Linux / macOS

Linux and Mac users do NOT need anything from this repository, they grab their dependencies from their own package sources.

## More Information

A more detailed compilation guide can be found on The Dark Mod's wiki:

https://wiki.thedarkmod.com/index.php?title=DarkRadiant_-_Compilation_Guide

## Contact / Discussion

All discussion is ongoing primarily at [The Dark Mod Forums](https://forums.thedarkmod.com/index.php?/forum/51-darkradiant-feedback-and-development/), where you can get in touch with knowledgeable people 
and discuss changes or issues. 