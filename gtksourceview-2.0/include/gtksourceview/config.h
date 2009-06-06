#ifndef GTK_SOURCE_VIEW_CONFIG_H_
#define GTK_SOURCE_VIEW_CONFIG_H_

#ifdef DR_GTK_SOURCEVIEW_DLL
#define GTKSOURCEVIEW_DLL_EXPORT __declspec(dllexport)  
#else
#define GTKSOURCEVIEW_DLL_EXPORT 
#endif

#endif /* GTK_SOURCE_VIEW_CONFIG_H_ */
