
undefined4 __fastcall thunk_FUN_004c2f70(int param_1)

{
  int iVar1;
  void *pvStack_8;
  
  pvStack_8 = (void *)0x0;
  if ((*(int *)(&DAT_007951b4 + *(int *)(param_1 + 0x235) * 4) != 0) &&
     (*(int *)(param_1 + 0x408) != 0)) {
    iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0x40c),(int *)&pvStack_8);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x21d) != 0) {
        thunk_FUN_0060a430(pvStack_8,1);
        return 0;
      }
      thunk_FUN_0060a470(pvStack_8);
    }
  }
  return 0;
}

