
void thunk_FUN_004d8530(int param_1)

{
  int iVar1;
  int iStack_8;
  
  if (DAT_007fa150 != 0) {
    *(undefined4 *)(DAT_007fa150 + 4) = 0;
    iVar1 = FUN_006b1190(DAT_007fa150,&iStack_8);
    if (-1 < iVar1) {
      while (iStack_8 != param_1) {
        iVar1 = FUN_006b1190(DAT_007fa150,&iStack_8);
        if (iVar1 < 0) {
          return;
        }
      }
      FUN_006b0c70(DAT_007fa150,*(int *)(DAT_007fa150 + 4) - 1);
    }
  }
  return;
}

