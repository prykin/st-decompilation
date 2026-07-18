
void __cdecl FUN_00675d30(short param_1,short param_2,short param_3,short param_4,short *param_5)

{
  short sVar1;
  
  *param_5 = param_1 - param_4;
  param_5[1] = param_2 - param_4;
  param_5[2] = param_3 - param_4;
  if ((short)(param_3 - param_4) < 0) {
    param_5[2] = 0;
  }
  sVar1 = param_4 * 2 + 1;
  param_5[3] = sVar1;
  param_5[5] = sVar1;
  param_5[4] = sVar1;
  if (5 < sVar1) {
    param_5[5] = 5;
  }
  thunk_FUN_006756d0(param_5,param_5 + 1,param_5 + 3,param_5 + 4);
  return;
}

