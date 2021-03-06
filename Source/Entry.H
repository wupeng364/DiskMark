#ifndef _ENTRY_H
#define _ENTRY_H
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "../NSWFL/NSWFL.h"

using namespace NSWFL::Memory;
extern MemoryPool gMem;

extern HINSTANCE ghAppInstance;

extern char gsAppCopyRight[64];
extern char gsFileVersion[32];
extern char gsTitleCaption[64];
extern char gsRegistryKey[255];

extern char gsLastChunkSize[1024];
extern char gsLastIOS[1024];
extern char gsLastIterations[1024];

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif
