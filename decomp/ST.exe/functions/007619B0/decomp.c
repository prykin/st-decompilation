#include "../../pseudocode_runtime.h"


/* Library Function - Multiple Matches With Different Base Names
    __wremove
    _remove

   Library: Visual Studio */

int __cdecl FID_conflict__remove(char *_Filename)

{
  BOOL BVar1;
  int iVar2;
  uint local_8;
  /* ST_CALLSITE[007619B8]: CALL dword ptr [0x0085bce8] */
  BVar1 = DeleteFileA(_Filename);
  if (BVar1 == 0) {
    /* ST_CALLSITE[007619C2]: CALL dword ptr [0x0085bbcc] */
    local_8 = GetLastError();
  }
  else {
    local_8 = 0;
  }
  if (local_8 == 0) {
    iVar2 = 0;
  }
  else {
    Library::MSVCRT::__dosmaperr(local_8);
    iVar2 = -1;
  }
  return iVar2;
}

