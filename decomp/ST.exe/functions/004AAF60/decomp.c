
void FUN_004aaf60(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = DAT_0080743c & 0xff;
    if (uVar1 == 0) {
      return;
    }
    if (uVar1 != 1) {
      if (uVar1 != 2) goto LAB_004aafa0;
      thunk_FUN_004a9c80(0);
    }
    thunk_FUN_004a9c80(0);
  }
  else if (param_1 != 1) {
    if (param_1 != 2) {
      return;
    }
    goto LAB_004aafc2;
  }
LAB_004aafa0:
  uVar1 = DAT_0080743c & 0xff;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  else {
    if (uVar1 == 1) {
      return;
    }
    if (uVar1 != 2) goto LAB_004aafc2;
    iVar2 = 0;
  }
  thunk_FUN_004a9c80(iVar2);
LAB_004aafc2:
  if ((DAT_0080743c & 0xff) == 0) {
    thunk_FUN_004a9c80(1);
    thunk_FUN_004a9c80(1);
  }
  else if ((DAT_0080743c & 0xff) == 1) {
    thunk_FUN_004a9c80(1);
    return;
  }
  return;
}

