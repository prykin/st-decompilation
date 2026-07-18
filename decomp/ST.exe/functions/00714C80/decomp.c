
undefined4 __fastcall FUN_00714c80(int *param_1)

{
  undefined4 uVar1;
  undefined4 local_50 [19];
  
  uVar1 = 0;
  if ((param_1[0x16] != 0) && (*param_1 != 0)) {
    FUN_007108b0(local_50);
    FUN_007109f0((void *)*param_1,param_1 + 4);
    if (&stack0x00000000 != (undefined1 *)0x8) {
      uVar1 = *(undefined4 *)(*param_1 + 0x72);
    }
    FUN_007109f0((void *)*param_1,local_50);
    return uVar1;
  }
  return 0;
}

