// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include <dbghelp.h>
#include <psapi.h>
#include <shlwapi.h>

// C standard header files
#include <cassert>
#include <ctime>
#include <list>
#include <map>
#include <vector>

// 3rd-party dependency

#include <MurmurHash3.h>

#include <pugixml.hpp>
