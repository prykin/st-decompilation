
undefined4 __fastcall thunk_FUN_004df100(int param_1)

{
  uint *puVar1;
  int iStack_8;
  
  if (*(int *)(&DAT_007f580e + *(int *)(param_1 + 0x24) * 0xa62) == 0) {
    iStack_8 = param_1;
    puVar1 = FUN_006ae290((uint *)0x0,10,4,10);
    *(uint **)(&DAT_007f580e + *(int *)(param_1 + 0x24) * 0xa62) = puVar1;
  }
  iStack_8 = param_1;
  FUN_006ae1c0(*(uint **)(&DAT_007f580e + *(int *)(param_1 + 0x24) * 0xa62),&iStack_8);
  return 0;
}

