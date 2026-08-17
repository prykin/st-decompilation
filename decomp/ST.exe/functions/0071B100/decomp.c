#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0071B100 -> EXTERNAL:000000C5 @ 0071B120

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0071B100 -> EXTERNAL:000000C3 @ 0071B17B | 0071B100 -> EXTERNAL:000000C5 @ 0071B120 */

int __cdecl FUN_0071b100(HKEY hKey,PHKEY phkResult)

{
  PHKEY lpSubKey;
  LSTATUS LVar1;
  int iVar2;
  undefined1 local_108 [260];

  lpSubKey = phkResult;
  if ((phkResult != (PHKEY)0x0) && (*(char *)phkResult != '\0')) {
    /* ST_CALLSITE[0071B120]: CALL dword ptr [0x0085b958] */
    LVar1 = RegOpenKeyA(hKey,(LPCSTR)phkResult,(PHKEY)&phkResult);
    if (LVar1 == 0) {
      while( true ) {
        local_108[0] = '\0';
        /* ST_CALLSITE[0071B149]: CALL ESI */
        LVar1 = RegEnumKeyA((HKEY)phkResult,0,local_108,0x104);
        if (LVar1 != 0) break;
        iVar2 = FUN_0071b100((HKEY)phkResult,(PHKEY)local_108);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      /* ST_CALLSITE[0071B170]: CALL dword ptr [0x0085b968] */
      RegCloseKey((HKEY)phkResult);
    }
    /* ST_CALLSITE[0071B17B]: CALL dword ptr [0x0085b950] */
    LVar1 = RegDeleteKeyA(hKey,(LPCSTR)lpSubKey);
    return LVar1;
  }
  return 0;
}

