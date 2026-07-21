
int FUN_006b91a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;

  iVar2 = 0;
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x40) == 0) {
    return -0x51;
  }
  local_14[1] = 0;
  local_14[0] = 0;
  local_30 = 0;
  local_34 = 0;
  local_14[2] = *(undefined4 *)(iVar1 + 0x18);
  local_8 = *(undefined4 *)(iVar1 + 0x1c);
  iVar1 = FUN_006b0460(param_2,param_2,local_14);
  if (iVar1 == 0) {
    param_2[3] = 0;
    param_2[2] = 0;
  }
  else {
    local_2c = param_2[2];
    local_28 = param_2[3];
    local_24 = *param_2;
    local_20 = param_2[1];
    local_1c = local_2c + local_24;
    local_18 = local_28 + local_20;
    iVar1 = 0;
    while( true ) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*(int *)param_1[0xf] + 0x14))
                        ((int *)param_1[0xf],&local_34,*(undefined4 *)(*param_1 + 0x40),&local_24,
                         0x1000000,0);
      if (iVar2 == 0) break;
      if (iVar2 == -0x7789fe3e) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)param_1[0xf] + 0x6c))((int *)param_1[0xf]);
        FUN_006cec40((AnonShape_006CEC40_BB23E716 *)*param_1);
      }
      else {
        if (((iVar2 != -0x7789ff60) && (iVar2 != -0x7789fe52)) || (iVar1 != 0)) break;
        Sleep(2);
      }
      iVar1 = iVar1 + 1;
      if (1 < iVar1) break;
    }
    if ((iVar2 == -0x7789ff60) || (iVar2 == -0x7789fe52)) {
      return 0;
    }
  }
  return iVar2;
}

