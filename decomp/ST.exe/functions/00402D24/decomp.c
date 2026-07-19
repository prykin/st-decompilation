
void thunk_FUN_004969f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined4 *puVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
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
  uStack_c = param_5;
  uStack_10 = param_4;
  uStack_14 = param_3;
  uStack_8 = param_6;
  uStack_1c = param_1;
  uStack_18 = param_2;
  Library::DKW::TBL::FUN_006ae1c0(DAT_007fb270,&uStack_1c);
  return;
}

