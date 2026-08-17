#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00725C20 -> EXTERNAL:00000006 @ 00725C39 */

undefined4 __cdecl FUN_00725c20(LPCSTR lpPathName,undefined4 param_2,char param_3)

{
  if (param_3 != '\0') {
    if (param_3 == '\x02') {
      /* ST_CALLSITE[00725C39]: CALL dword ptr [0x0085bb44] */
      RemoveDirectoryA(lpPathName);
    }
    return 0;
  }
  /* ST_CALLSITE[00725C4A]: CALL dword ptr [0x0085bbbc] */
  SetFileAttributesA(lpPathName,0);
  /* ST_CALLSITE[00725C51]: CALL dword ptr [0x0085bce8] */
  DeleteFileA(lpPathName);
  return 0;
}

