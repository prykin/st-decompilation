#include "../../pseudocode_runtime.h"


void __thiscall FUN_00690450(void *this,short param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  iVar2 = STField<int>(this,0xa5);
  if (0 < STField<int>(iVar2,0xC)) {
    bVar4 = STField<int>(iVar2,0xC) != 0;
    do {
      if ((((bVar4) && (iVar2 = STField<int>(iVar2,0x8) * uVar3 + STField<int>(iVar2,0x1C), iVar2 != 0))
          && (puVar1 = *(undefined4 **)(iVar2 + 4), puVar1 != nullptr)) &&
         ((STField<short>(puVar1,0x7b) == param_1 && (puVar1 != nullptr)))) {
        /* ST_CALLSITE[00690497]: CALL dword ptr [EDX] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)*puVar1)(param_2);
      }
      iVar2 = STField<int>(this,0xa5);
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < STField<uint>(iVar2,0xC);
    } while ((int)uVar3 < (int)STField<uint>(iVar2,0xC));
  }
  return;
}

