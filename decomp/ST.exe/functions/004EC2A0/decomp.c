
undefined4 __fastcall FUN_004ec2a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(uint *)(param_1 + 0x1f1) & 0x4000) != 0) &&
     (((iVar1 = *(int *)(param_1 + 0x4d0), iVar1 == 3 || (iVar1 == 4)) || (iVar1 == 5)))) {
    if (*(int *)(*(int *)(param_1 + 0x1f5) + 0x154) < *(int *)(*(int *)(param_1 + 0x1f5) + 0x158)) {
      iVar1 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\t');
      if (iVar1 < *(int *)(*(int *)(param_1 + 0x1f5) + 0x154) + 2) {
        return 0;
      }
    }
    else {
      iVar1 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\t');
      if (*(int *)(*(int *)(param_1 + 0x1f5) + 0x154) + -2 < iVar1) {
        return 0;
      }
    }
    uVar2 = thunk_FUN_004ab050();
    iVar1 = 0;
    switch(uVar2) {
    case 0:
      iVar1 = DAT_0079aa90;
      break;
    case 1:
      iVar1 = DAT_0079aa94;
      break;
    case 2:
      iVar1 = DAT_0079aa98;
      break;
    case 3:
      iVar1 = DAT_0079aa9c;
    }
    thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xe,iVar1,iVar1,'\0');
    thunk_FUN_004abe40(*(void **)(param_1 + 0x5ff),'\x0e',iVar1);
    thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
  }
  return 0;
}

