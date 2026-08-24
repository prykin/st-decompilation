#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00761960 -> EXTERNAL:00000058 @ 0076196C

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00761960 -> EXTERNAL:00000058 @ 0076196C */

undefined4 __cdecl FUN_00761960(LPCSTR lpExistingFileName,LPCSTR lpNewFileName)

{
  BOOL BVar1;
  uint uVar2;
  undefined4 local_8;

  /* ST_CALLSITE[0076196C]: CALL dword ptr [0x0085bc8c] */
  BVar1 = MoveFileA(lpExistingFileName,lpNewFileName);
  if (BVar1 == 0) {
    /* ST_CALLSITE[00761976]: CALL dword ptr [0x0085bbcc] */
    local_8 = GetLastError();
  }
  else {
    local_8 = 0;
  }
  if (local_8 == 0) {
    uVar2 = 0;
  }
  else {
    Library::MSVCRT::__dosmaperr(local_8);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

