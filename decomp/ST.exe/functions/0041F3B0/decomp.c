
void __fastcall FUN_0041f3b0(int *param_1)

{
  STT3DSprC *pSVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_EDI;
  
  iVar2 = *(int *)((int)param_1 + 0x221);
  if (iVar2 == -1) {
    return;
  }
  if (iVar2 == 1) {
    *(undefined4 *)((int)param_1 + 0x221) = 0;
    return;
  }
  if (iVar2 == 2) {
    if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0) {
      return;
    }
    if (*(int *)((int)param_1 + 0x225) == 0) {
      STSprGameObjC::LoadLifeFrame((STSprGameObjC *)param_1,unaff_EDI);
      iVar2 = thunk_FUN_004acd30((void *)((int)param_1 + 0x1d5),'\x01');
      *(int *)((int)param_1 + 0x225) = iVar2 + -1;
    }
    uVar3 = (**(code **)(*param_1 + 0x7c))();
    if (1 < (int)uVar3) {
      uVar3 = (int)(uVar3 * *(int *)((int)param_1 + 0x225)) / 100;
    }
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
    uVar4 = thunk_FUN_004ac910(pSVar1,'\x01');
    if (uVar3 != uVar4) {
      STT3DSprC::SetCurFase(pSVar1,'\x01',uVar3);
      STT3DSprC::ShowCurFase(pSVar1,'\x01');
    }
    iVar2 = param_1[8];
    if ((((iVar2 == 0x14) || (iVar2 == 1000)) || (iVar2 == 0x172)) || (iVar2 == 0x1a4)) {
      iVar2 = (**(code **)(*param_1 + 0x2c))();
    }
    else {
      if (iVar2 != 0x3e9) goto LAB_0041f51a;
      iVar2 = *(int *)((int)param_1 + 0x259);
    }
    if (((iVar2 != -1) && (iVar2 = (**(code **)(*param_1 + 0xc))(), iVar2 == 3)) &&
       ((param_1[8] != 0x172 && (param_1[8] != 0x1a4)))) {
      uVar3 = (**(code **)(*param_1 + 0xc4))();
      if (1 < (int)uVar3) {
        uVar3 = (int)(uVar3 * *(int *)((int)param_1 + 0x225)) / 100;
      }
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      uVar4 = thunk_FUN_004ac910(pSVar1,'\x02');
      if (uVar3 != uVar4) {
        STT3DSprC::SetCurFase(pSVar1,'\x02',uVar3);
        STT3DSprC::ShowCurFase(pSVar1,'\x02');
      }
    }
LAB_0041f51a:
    *(int *)((int)param_1 + 0x221) = *(int *)((int)param_1 + 0x221) + -1;
    return;
  }
  if (iVar2 != 0) {
    return;
  }
  pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
  STT3DSprC::SetCurFase(pSVar1,'\x01',0);
  STT3DSprC::ShowCurFase(pSVar1,'\x01');
  iVar2 = param_1[8];
  if (((iVar2 == 0x14) || (iVar2 == 1000)) || ((iVar2 == 0x172 || (iVar2 == 0x1a4)))) {
    iVar2 = (**(code **)(*param_1 + 0x2c))();
  }
  else {
    if (iVar2 != 0x3e9) goto LAB_0041f5a0;
    iVar2 = *(int *)((int)param_1 + 0x259);
  }
  if ((iVar2 != -1) && (iVar2 = (**(code **)(*param_1 + 0xc))(), iVar2 == 3)) {
    STT3DSprC::SetCurFase(pSVar1,'\x02',0);
    STT3DSprC::ShowCurFase(pSVar1,'\x02');
  }
LAB_0041f5a0:
  *(int *)((int)param_1 + 0x221) = *(int *)((int)param_1 + 0x221) + -1;
  return;
}

