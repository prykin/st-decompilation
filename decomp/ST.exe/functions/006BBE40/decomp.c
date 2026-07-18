
void FUN_006bbe40(int *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_5c;
  
  bVar1 = false;
  local_5c = 0;
  local_70 = 0;
  local_80[0] = 0x7c;
  while( true ) {
    iVar2 = (**(code **)(*param_1 + 100))(param_1,0,local_80,param_4 | 1,0);
    if (((iVar2 != -0x7789ff60) && (iVar2 != -0x7789fe52)) || (bVar1)) break;
    Sleep(2);
    bVar1 = true;
  }
  if (iVar2 == 0) {
    *param_2 = local_5c;
    *param_3 = local_70;
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

