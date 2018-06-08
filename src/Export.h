#pragma once

#ifdef WIN32
#ifdef VSDocks_Export
#define VSDOCKS_EXPORT _declspec(dllexport)
#else
#define VSDOCKS_EXPORT _declspec(dllimport)
#endif
#else
#define VSDOCKS_EXPORT
#endif
