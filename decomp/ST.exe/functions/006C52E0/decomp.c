
int FUN_006c52e0(AnonShape_006C52E0_B18BC6D0 *param_1,int param_2,undefined4 param_3,int param_4,
                undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_28;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_28 = param_5;
  uVar2 = 0;
  local_78[0] = 100;
  if (param_1->field_0498 == 7) {
    uVar2 = 0x20000;
    local_70 = 0x5a0049;
  }
  local_14 = param_2;
  local_c = param_2 + 1;
  local_8 = param_4 + 1;
  uVar3 = 0;
  local_10 = param_3;
  while( true ) {
    iVar1 = (**(code **)(*param_1->field_0040 + 0x14))
                      (param_1->field_0040,&local_14,0,0,uVar2 | 0x1000400,local_78);
    if (iVar1 == 0) break;
    if (iVar1 == -0x7789fe3e) {
      FUN_006cec40((AnonShape_006CEC40_BB23E716 *)param_1);
    }
    else {
      if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (uVar3 != 0)) break;
      Sleep(2);
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) break;
  }
  if ((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) {
    return iVar1;
  }
  return 0;
}

