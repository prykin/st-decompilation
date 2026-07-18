
void FUN_004969f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined4 *puVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (-1 < (int)param_7) {
    if (param_7 < DAT_007fb270[3]) {
      puVar1 = (undefined4 *)(DAT_007fb270[2] * param_7 + DAT_007fb270[7]);
    }
    else {
      puVar1 = (undefined4 *)0x0;
    }
    puVar1[3] = param_4;
    puVar1[2] = param_3;
    *puVar1 = param_1;
    puVar1[1] = param_2;
    return;
  }
  local_c = param_5;
  local_10 = param_4;
  local_14 = param_3;
  local_8 = param_6;
  local_1c = param_1;
  local_18 = param_2;
  FUN_006ae1c0(DAT_007fb270,&local_1c);
  return;
}

