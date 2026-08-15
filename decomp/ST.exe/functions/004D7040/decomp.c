#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004d7040(int *param_1)

{
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar1;
  longlong lVar6;
  int local_8;

  iVar2 = thunk_FUN_004e60d0(param_1[9],0x4e);
  if (3 < iVar2) {
    iVar2 = 3;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar3 = (**(code **)(*param_1 + 0x2c))();
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  if ((iVar3 < 0x32) || (iVar3 = (**(code **)(*param_1 + 0x2c))(), 0x73 < iVar3)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*param_1 + 0x2c))();
    if (iVar3 < 1) {
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*param_1 + 0x2c))();
    if (0x28 < iVar3) {
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*param_1 + 0x2c))();
    local_8 = *(int *)(&DAT_007e0a90 + (iVar2 + iVar3 * 4) * 4);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*param_1 + 0x2c))();
    iVar2 = *(int *)(&DAT_007e06dc + iVar2 * 4);
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*param_1 + 0x2c))();
    local_8 = *(int *)(&DAT_007e3518 + (iVar2 + -200 + iVar3 * 4) * 4);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*param_1 + 0x2c))();
    iVar2 = *(int *)(&DAT_007e27ec + iVar2 * 4);
  }
  local_8 = local_8 / 0x5dc;
  if ((local_8 != 0) && (iVar2 != 0)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*param_1 + 0xc4))();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    if ((iVar3 != 0) && (iVar4 = (**(code **)(*param_1 + 0x7c))(), iVar4 < 100)) {
      iVar4 = thunk_FUN_004e60d0(param_1[9],0x66);
      if (iVar4 != 0) {
        iVar2 = iVar2 + (uint)(iVar2 * 10) / 100;
      }
      lVar6 = FUN_006b12cc(100);
      iVar4 = (int)lVar6;
      lVar6 = FUN_006b12cc(iVar3);
      iVar5 = (int)lVar6;
      lVar6 = FUN_006b12cc(iVar2);
      iVar2 = FUN_006b12bc((int)lVar6,iVar5,iVar4);
      lVar6 = FUN_006b12cc(0x5dc);
      iVar2 = FUN_006b12a8((int)lVar6,iVar2);
      iVar1 = FUN_006b1280(iVar2);
      if ((uint)(STField<int>(param_1,0x119) + iVar1) < g_playSystem_00802A38->field_00E4) {
        iVar2 = *param_1;
        STField<uint>(param_1,0x119) = g_playSystem_00802A38->field_00E4;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar4 = (**(code **)(iVar2 + 0x78))();
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(iVar2 + 0x80))(iVar4 + local_8);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*param_1 + 200))(iVar3 + -1);
      }
    }
    return 0;
  }
  return 0;
}

