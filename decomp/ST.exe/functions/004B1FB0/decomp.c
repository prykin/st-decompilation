
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004B1FB0_param_1Enum. Cases:
   CASE_5E=94;CASE_61=97;CASE_DC=220;CASE_DD=221;CASE_DE=222 */

undefined4 __cdecl
FUN_004b1fb0(Global_sub_004B1FB0_param_1Enum param_1,int *param_2,int *param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  int iVar1;
  Global_sub_004B1FB0_param_1Enum GVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_1c;
  STFishC *local_18;
  int local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0xe2) {
    if (param_2 != (int *)0x0) {
      *param_2 = 1;
    }
    iVar1 = param_7 + param_5;
    iVar4 = 0;
    for (; param_5 < iVar1; param_5 = param_5 + 1) {
      if ((-1 < param_5) && (param_5 < SHORT_007fb242)) {
        for (iVar3 = param_4; iVar3 < param_6 + param_4; iVar3 = iVar3 + 1) {
          if ((-1 < iVar3) && (iVar3 < SHORT_007fb240)) {
            iVar4 = iVar4 + (uint)*(byte *)(SHORT_007fb240 * param_5 + DAT_007fa168 + iVar3);
          }
        }
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar4;
      return 0;
    }
  }
  else if (DAT_007fa150 != 0) {
    *(undefined4 *)(DAT_007fa150 + 4) = 0;
    iVar4 = FUN_006b1190(DAT_007fa150,&local_18);
    while (-1 < iVar4) {
      if (((local_18 != (STFishC *)0x0) &&
          (GVar2 = (*local_18->vtable->slot_2C)(), GVar2 == param_1)) &&
         (((STFishC::sub_004162B0(local_18,&local_8,&local_6,&local_a), param_4 < 0 ||
           (((param_5 < 0 || (param_6 < 0)) || (param_7 < 0)))) ||
          ((((param_4 <= local_8 && ((int)local_8 < param_6 + param_4)) && (param_5 <= local_6)) &&
           ((int)local_6 < param_7 + param_5)))))) {
        local_1c = local_1c + 1;
        if (((local_8 < 0) || (SHORT_007fb240 <= local_8)) ||
           ((local_6 < 0 ||
            (((SHORT_007fb242 <= local_6 || (local_a < 0)) || (SHORT_007fb244 <= local_a)))))) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = *(int **)(DAT_007fb248 +
                            ((int)SHORT_007fb246 * (int)local_a + (int)SHORT_007fb240 * (int)local_6
                            + (int)local_8) * 8);
        }
        switch(param_1) {
        case CASE_5E:
        case CASE_DD:
          local_10 = 0x39;
          break;
        case CASE_61:
          local_10 = 0xe0;
          break;
        case CASE_DC:
          local_10 = 0x38;
          break;
        case CASE_DE:
          local_10 = 0x4f;
        }
        if (((piVar5 == (int *)0x0) || (piVar5[8] != 1000)) ||
           (iVar4 = (**(code **)(*piVar5 + 0x2c))(), iVar4 != local_10)) {
          local_14 = local_14 + *(int *)&local_18->field_0x259;
        }
        else {
          iVar4 = (**(code **)(*piVar5 + 0x88))(0);
          local_14 = local_14 + iVar4;
        }
      }
      iVar4 = FUN_006b1190(DAT_007fa150,&local_18);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = local_1c;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_14;
    }
  }
  return 0;
}

