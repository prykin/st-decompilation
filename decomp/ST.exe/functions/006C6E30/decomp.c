#include "../../pseudocode_runtime.h"


int FUN_006c6e30(AnonShape_006C6E30_3C2F0429 *param_1)

{
  undefined1 *slotStorage;
  AnonShape_006C6E30_3C2F0429 *pAVar1;
  int iVar2;
  int *piVar3;
  AnonShape_006C6E30_3C2F0429 *pAVar4;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  byte local_8;

  slotStorage = &param_1->field_0x2a;
  FreeAndNull(slotStorage);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (*(code *)param_1->field_0042)(param_1,&local_10,9);
  if (iVar2 == 9) {
    param_1->field_001A = (int)local_10;
    param_1->field_001E = (int)local_e;
    param_1->field_0026 = (int)local_a;
    param_1->field_0022 = (int)local_c;
    if ((local_8 & 0x80) == 0) {
      param_1->field_0019 = param_1->field_0010;
    }
    else {
      param_1->field_0019 = local_8 & 7;
      pAVar1 = (AnonShape_006C6E30_3C2F0429 *)((1 << (local_8 & 7) + 1) * 3);
      piVar3 = FUN_006bfb70((int)pAVar1);
      *(int **)slotStorage = piVar3;
      if (piVar3 == nullptr) {
        return -2;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      pAVar4 = (AnonShape_006C6E30_3C2F0429 *)(*(code *)param_1->field_0042)(param_1,piVar3,pAVar1);
      if (pAVar4 != pAVar1) {
        FreeAndNull(slotStorage);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = pAVar4;
        if (-1 < (int)pAVar4) {
          param_1 = (AnonShape_006C6E30_3C2F0429 *)0xfffffffb;
        }
        return (int)param_1;
      }
    }
    param_1->field_0018 = (local_8 & 0x40) == 0x40;
    iVar2 = 0;
  }
  else if (-1 < iVar2) {
    return -5;
  }
  return iVar2;
}

