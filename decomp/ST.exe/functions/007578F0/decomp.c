
void FUN_007578f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_8;
  
  piVar3 = param_1;
  local_8 = 0;
  if (0 < *(int *)((int)param_1 + 0x136)) {
    param_1 = (int *)((int)param_1 + 0x13a);
    do {
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0x4c) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10);
        if (((iVar2 < 0) || (3 < iVar2)) || (piVar3[iVar2 + 0x27] == 0)) {
          RaiseInternalException(0x33,DAT_007ed77c,s_E__DKW_JPG_C_jdinput_c_007f2d98,0xed);
        }
        puVar4 = (undefined4 *)(**(code **)*piVar3)(piVar3,1,0x84);
        puVar6 = (undefined4 *)piVar3[iVar2 + 0x27];
        puVar7 = puVar4;
        for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined4 **)(iVar1 + 0x4c) = puVar4;
      }
      local_8 = local_8 + 1;
      param_1 = param_1 + 1;
    } while (local_8 < *(int *)((int)piVar3 + 0x136));
  }
  return;
}

