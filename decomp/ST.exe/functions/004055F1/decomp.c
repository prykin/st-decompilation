
undefined4 __thiscall HoloTy::NextFas(HoloTy *this)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar6;
  undefined4 auStack_4c [16];
  HoloTy *pHStack_c;
  undefined4 uStack_8;
  
  pIVar6 = g_currentExceptionFrame;
  uStack_8 = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  pHStack_c = this;
  iVar3 = __setjmp3(auStack_4c,0,unaff_ESI,pIVar6);
  if (iVar3 != 0) {
    g_currentExceptionFrame = pIVar6;
    iVar4 = ReportDebugMessage(s_E____titans_Start_hologram_cpp_007cc674,0xc1,0,iVar3,&DAT_007a4ccc,
                               s_HoloTy__NextFas_007cc6f0);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_hologram_cpp_007cc674,0xc1);
    return uStack_8;
  }
  uVar1 = *(uint *)(pHStack_c + 3);
  if (-1 < (int)uVar1) {
    iVar3 = *(int *)(pHStack_c + 0x17);
    if (pHStack_c[2] == (HoloTy)0x0) {
      if (iVar3 < *(int *)(pHStack_c + 0x13) + -2) {
        *(int *)(pHStack_c + 0x17) = iVar3 + 1;
        uStack_8 = 1;
        FUN_006b35d0(DAT_008075a8,uVar1);
      }
    }
    else if (0 < iVar3) {
      *(int *)(pHStack_c + 0x17) = iVar3 + -1;
      uStack_8 = 1;
      FUN_006b35d0(DAT_008075a8,uVar1);
      g_currentExceptionFrame = pIVar6;
      return uStack_8;
    }
  }
  g_currentExceptionFrame = pIVar6;
  return uStack_8;
}

