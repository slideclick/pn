// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers

// Windows Header Files:
#include <windows.h>
#include <tchar.h>

#include <assert.h>
#define ATLASSERT assert

#include <string>

typedef std::basic_string<TCHAR> tstring;

#define PN_NO_CSTRING

#ifdef CUSTOMSCHEME_EXPORTS
#define EXPORT __declspec(dllexport)
#else
#define EXPORT __declspec(dllimport)
#endif