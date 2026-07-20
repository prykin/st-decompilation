
undefined4 __fastcall FUN_004d0670(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  uVar5 = 0;
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
    uVar4 = 0;
    switch(uVar3) {
    case 0:
      uVar5 = *(uint *)(&DAT_007a90b8 + *(int *)(param_1 + 0x369) * 0x10);
      uVar4 = DAT_007a9438;
      break;
    case 1:
      uVar5 = *(uint *)(&DAT_007a90bc + *(int *)(param_1 + 0x369) * 0x10);
      uVar4 = DAT_007a943c;
      break;
    case 2:
      uVar5 = *(uint *)(&DAT_007a90c0 + *(int *)(param_1 + 0x369) * 0x10);
      uVar4 = DAT_007a9440;
      break;
    case 3:
      uVar5 = *(uint *)(&DAT_007a90c4 + *(int *)(param_1 + 0x369) * 0x10);
      uVar4 = DAT_007a9444;
    }
    thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xe,uVar5,uVar5,'\0');
    thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xc,uVar5,uVar5,'\0');
    STT3DSprC::SetCurFase(*(STT3DSprC **)(param_1 + 0x5ff),'\x0e',uVar5);
    STT3DSprC::SetCurFase(*(STT3DSprC **)(param_1 + 0x5ff),'\f',uVar5);
    STT3DSprC::StartShow(*(STT3DSprC **)(param_1 + 0x5ff),0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    STT3DSprC::StartShow(*(STT3DSprC **)(param_1 + 0x5ff),0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
    iVar2 = -1;
    pcVar6 = (char *)((int)&DAT_007a9440 + *(int *)(param_1 + 0x369) * 6 + 2);
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xd,uVar4,uVar4,'\0');
      STT3DSprC::SetCurFase(*(STT3DSprC **)(param_1 + 0x5ff),'\r',uVar4);
      STT3DSprC::StartShow
                (*(STT3DSprC **)(param_1 + 0x5ff),0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
    }
  }
  return 0;
}

