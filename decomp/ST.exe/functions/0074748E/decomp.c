#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0074748E -> EXTERNAL:000000D0 @ 007474C3 */

undefined4 FUN_0074748e(LPVOID *ppv)

{
  undefined4 *puVar1;
  HRESULT HVar2;
  undefined4 uVar3;

  /* ST_CALLSITE[0074749B]: CALL dword ptr [EAX + 0x20] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar1 = (undefined4 *)(**(code **)((int)ppv[-4] + 0x20))();
  if (puVar1 == nullptr) {
    uVar3 = 1;
  }
  else {
    /* ST_CALLSITE[007474AB]: CALL dword ptr [0x0085c0d0] */
    CoInitialize((LPVOID)0x0);
    /* ST_CALLSITE[007474C3]: CALL dword ptr [0x0085c0e4] */
    HVar2 = CoCreateInstance((IID *)&DAT_007a1b00,(LPUNKNOWN)0x0,1,(IID *)&DAT_007a1b10,&ppv);
    if (-1 < HVar2) {
      FUN_00749708(puVar1,(int *)ppv,1);
      /* ST_CALLSITE[007474DE]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)((int)*ppv + 8))(ppv);
    }
    /* ST_CALLSITE[007474E1]: CALL dword ptr [0x0085c0d4] */
    CoFreeUnusedLibraries();
    /* ST_CALLSITE[007474E7]: CALL dword ptr [0x0085c0e0] */
    CoUninitialize();
    uVar3 = 0;
  }
  return uVar3;
}

