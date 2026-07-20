
int FUN_006bc580(AnonShape_006BC580_F6F161A5 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = param_2[2] + local_14;
  local_8 = param_2[3] + local_10;
  iVar2 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1->field_0044 + 0x14))
                      (param_1->field_0044,&local_14,param_1->field_0040,&local_14,0x1000000,0);
    if (iVar1 == 0) break;
    if (iVar1 == -0x7789fe3e) {
      FUN_006cec40((AnonShape_006CEC40_BB23E716 *)param_1);
    }
    else {
      if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (iVar2 != 0)) break;
      Sleep(2);
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) break;
  }
  if ((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) {
    return iVar1;
  }
  return 0;
}

