
void FUN_006b50c0(int param_1,int param_2,int param_3,uint param_4,undefined4 *param_5,int param_6)

{
  undefined4 *puVar1;
  
  if (0x100 < (int)param_4) {
    param_4 = 0;
  }
  puVar1 = FUN_006d10f0(param_1,param_2,param_3,param_4,param_6);
  if (((puVar1 != (undefined4 *)0x0) && (param_4 != 0)) && (param_5 != (undefined4 *)0x0)) {
    puVar1 = puVar1 + 10;
    for (; param_4 != 0; param_4 = param_4 - 1) {
      *puVar1 = *param_5;
      param_5 = param_5 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}

