
undefined4 FUN_00672930(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00811944;
  DAT_00811944 = param_1;
  PTR_thunk_FUN_00673160_007d2d1c = &LAB_00402928;
  if (param_1 == 0) {
    PTR_thunk_FUN_00673160_007d2d1c = thunk_FUN_00673160;
  }
  return uVar1;
}

