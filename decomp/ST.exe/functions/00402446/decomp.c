
undefined4 __thiscall
CGenerate::CteateField
          (CGenerate *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6)

{
  code *pcVar1;
  CGenerate *pCVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  undefined4 uStack_c;
  CGenerate *pCStack_8;
  
  uStack_c = 0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pCStack_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_8;
  if (iVar3 == 0) {
    iVar3 = param_1 * param_2;
    *(int *)(pCStack_8 + 0x582f) = iVar3;
    *(int *)(pCStack_8 + 0x5833) = param_1;
    *(undefined4 *)(pCStack_8 + 0x583f) = 0;
    *(undefined4 *)(pCStack_8 + 0x5843) = param_4;
    *(int *)(pCStack_8 + 0x5837) = iVar3 / param_1;
    *(undefined4 *)(pCStack_8 + 0x583b) = param_5;
    *(undefined4 *)(pCStack_8 + 0x5847) = param_3;
    iVar3 = Library::DKW::LIB::FUN_006aac70(iVar3);
    *(int *)(pCVar2 + 0x584b) = iVar3;
    iVar3 = Library::DKW::LIB::FUN_006aac70
                      (*(int *)(pCVar2 + 0x582f) * ((-(uint)(param_6 != 0) & 7) + 1) * 2);
    *(int *)(pCVar2 + 0x584f) = iVar3;
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x1d,10);
    *(uint **)(pCVar2 + 0x5853) = puVar4;
    g_currentExceptionFrame = IStack_50.previous;
    if (((*(int *)(pCVar2 + 0x584b) == 0) || (*(int *)(pCVar2 + 0x584f) == 0)) ||
       (uVar5 = 1, *(int *)(pCVar2 + 0x5853) == 0)) {
      return uStack_c;
    }
  }
  else {
    g_currentExceptionFrame = IStack_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Maps_gen_map_cpp_007d85fc,0x330,0,iVar3,&DAT_007a4ccc,
                               s_CGenerate__CteateField_007d8620);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Maps_gen_map_cpp_007d85fc,0x332);
    uVar5 = 0xffff;
  }
  return uVar5;
}

