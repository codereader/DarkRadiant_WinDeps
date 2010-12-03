msbuild win_iconv\vcproj\win_iconv.sln /p:configuration=debug /p:platform=Win32  /m
msbuild win_iconv\vcproj\win_iconv.sln /p:configuration=release /p:platform=Win32  /m

msbuild libxml2\vcproj\libxml2.sln /p:configuration=debug /p:platform=Win32  /m
msbuild libxml2\vcproj\libxml2.sln /p:configuration=release /p:platform=Win32  /m

msbuild gtksourceview\vcproj\libgtksourceview.sln /p:configuration=debug /p:platform=Win32  /m
msbuild gtksourceview\vcproj\libgtksourceview.sln /p:configuration=release /p:platform=Win32  /m

msbuild gtkglext\MSVC_Net2010\gdkglext.sln /p:configuration=debug /p:platform=Win32  /m
msbuild gtkglext\MSVC_Net2010\gdkglext.sln /p:configuration=release /p:platform=Win32  /m
