
undefined4 __fastcall thunk_FUN_004d0670(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = 0;
  if ((*(int *)(param_1 + 0x4d0) == 3) || (*(int *)(param_1 + 0x4d0) == 2)) {
    if (*(int *)(*(int *)(param_1 + 0x1f5) + 0x154) < *(int *)(*(int *)(param_1 + 0x1f5) + 0x158)) {
      iVar2 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\t');
      if (iVar2 < *(int *)(*(int *)(param_1 + 0x1f5) + 0x154) + 2) {
        return 0;
      }
    }
    else {
      iVar2 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\t');
      if (*(int *)(*(int *)(param_1 + 0x1f5) + 0x154) + -2 < iVar2) {
        return 0;
      }
    }
    uVar3 = thunk_FUN_004ab050();
    iVar2 = 0;
    switch(uVar3) {
    case 0:
      iVar4 = *(int *)(&DAT_007a90b8 + *(int *)(param_1 + 0x369) * 0x10);
      iVar2 = DAT_007a9438;
      break;
    case 1:
      iVar4 = *(int *)(&DAT_007a90bc + *(int *)(param_1 + 0x369) * 0x10);
      iVar2 = DAT_007a943c;
      break;
    case 2:
      iVar4 = *(int *)(&DAT_007a90c0 + *(int *)(param_1 + 0x369) * 0x10);
      iVar2 = DAT_007a9440;
      break;
    case 3:
      iVar4 = *(int *)(&DAT_007a90c4 + *(int *)(param_1 + 0x369) * 0x10);
      iVar2 = DAT_007a9444;
    }
    thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xe,iVar4,iVar4,'\0');
    thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xc,iVar4,iVar4,'\0');
    thunk_FUN_004abe40(*(void **)(param_1 + 0x5ff),'\x0e',iVar4);
    thunk_FUN_004abe40(*(void **)(param_1 + 0x5ff),'\f',iVar4);
    thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    thunk_FUN_004ac1a0(0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
    iVar4 = -1;
    pcVar5 = (char *)((int)&DAT_007a9440 + *(int *)(param_1 + 0x369) * 6 + 2);
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xd,iVar2,iVar2,'\0');
      thunk_FUN_004abe40(*(void **)(param_1 + 0x5ff),'\r',iVar2);
      thunk_FUN_004ac1a0(0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
    }
  }
  return 0;
}

