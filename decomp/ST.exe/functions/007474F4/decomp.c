#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 007474F4 -> EXTERNAL:000000D0 @ 0074752A */

uint FUN_007474f4(LPVOID *ppv)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;

  /* ST_CALLSITE[00747501]: CALL dword ptr [EAX + 0x20] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar1 = (undefined4 *)(**(code **)((int)ppv[-4] + 0x20))();
  if (puVar1 == nullptr) {
    uVar3 = 1;
  }
  else {
    /* ST_CALLSITE[00747512]: CALL dword ptr [0x0085c0d0] */
    CoInitialize((LPVOID)0x0);
    /* ST_CALLSITE[0074752A]: CALL dword ptr [0x0085c0e4] */
    uVar2 = CoCreateInstance((IID *)&DAT_007a1b00,(LPUNKNOWN)0x0,1,(IID *)&DAT_007a1b10,&ppv);
    if (-1 < (int)uVar2) {
      uVar2 = FUN_00749708(puVar1,(int *)ppv,0);
      /* ST_CALLSITE[00747549]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)((int)*ppv + 8))(ppv);
    }
    /* ST_CALLSITE[0074754C]: CALL dword ptr [0x0085c0d4] */
    CoFreeUnusedLibraries();
    /* ST_CALLSITE[00747552]: CALL dword ptr [0x0085c0e0] */
    CoUninitialize();
    uVar3 = -(uint)(uVar2 != 0x80070002) & uVar2;
  }
  return uVar3;
}

