
int FUN_006bb9d0(AnonShape_006BB9D0_BD42D958 *param_1,int param_2,int param_3,int param_4,
                int param_5,int *param_6,undefined4 param_7,undefined4 param_8,uint param_9)

{
  int *piVar1;
  AnonShape_006BB9D0_BD42D958 *pAVar2;
  BOOL BVar3;
  int iVar4;
  tagRECT local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  RECT local_24;
  RECT local_14;
  
  pAVar2 = param_1;
  iVar4 = 0;
  if ((param_1->field_000C & 0x1100) == 0x100) {
    return 0;
  }
  if (param_1->field_0040 == 0) {
    return 0;
  }
  local_14.right = param_1->field_0018;
  local_2c = param_7;
  local_14.bottom = param_1->field_001C;
  local_28 = param_8;
  local_24.left = param_1->field_0010 + param_2;
  local_24.top = param_1->field_0014 + param_3;
  local_24.right = local_24.left + param_4;
  local_24.bottom = local_24.top + param_5;
  local_14.top = 0;
  local_14.left = 0;
  local_30 = 0;
  local_34 = 0;
  BVar3 = IntersectRect(&local_44,&local_24,&local_14);
  if (BVar3 != 0) {
    param_1 = (AnonShape_006BB9D0_BD42D958 *)0x0;
    while (piVar1 = (int *)pAVar2->field_0040,
          iVar4 = (**(code **)(*piVar1 + 0x14))
                            (piVar1,&local_44,param_6,&local_34,param_9 | 0x1000000,0), iVar4 != 0)
    {
      if (iVar4 == -0x7789fe3e) {
        (**(code **)(*param_6 + 0x6c))(param_6);
        FUN_006cec40((AnonShape_006CEC40_BB23E716 *)pAVar2);
      }
      else {
        if (((iVar4 != -0x7789ff60) && (iVar4 != -0x7789fe52)) ||
           (param_1 != (AnonShape_006BB9D0_BD42D958 *)0x0)) break;
        Sleep(2);
      }
      param_1 = (AnonShape_006BB9D0_BD42D958 *)&param_1->field_0x1;
      if (1 < (int)param_1) break;
    }
    if ((iVar4 == -0x7789ff60) || (iVar4 == -0x7789fe52)) {
      iVar4 = 0;
    }
  }
  return iVar4;
}

