
uint __thiscall STManRub3C::AddNewRub3(STManRub3C *this,int *param_1)

{
  code *pcVar1;
  STManRub3C *pSVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar8;
  InternalExceptionFrame IStack_74;
  int aiStack_30 [4];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_10;
  STManRub3C *pSStack_c;
  int *piStack_8;
  
  uStack_10 = 0xffffffff;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  piStack_8 = param_1;
  IStack_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_74;
  pSStack_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  piVar3 = piStack_8;
  pSVar2 = pSStack_c;
  if (iVar4 == 0) {
    if (*(int *)(pSStack_c + *piStack_8 * 4 + 0x30) == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x20,10);
      *(uint **)(pSVar2 + *piVar3 * 4 + 0x30) = puVar5;
    }
    if (*(int *)(pSVar2 + *piVar3 * 4 + 0x30) != 0) {
      piVar8 = aiStack_30;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      iStack_20 = piVar3[4];
      iStack_18 = piVar3[6];
      iStack_1c = piVar3[5];
      aiStack_30[1] = piVar3[1];
      aiStack_30[2] = piVar3[2];
      aiStack_30[3] = piVar3[3];
      uVar6 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pSVar2 + *piVar3 * 4 + 0x30),aiStack_30);
      g_currentExceptionFrame = IStack_74.previous;
      return uVar6;
    }
    g_currentExceptionFrame = IStack_74.previous;
    return uStack_10;
  }
  g_currentExceptionFrame = IStack_74.previous;
  iVar7 = ReportDebugMessage(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x86,0,iVar4,&DAT_007a4ccc,
                             s_STManRub3C__AddNewRub3_007d142c);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  RaiseInternalException(iVar4,0,s_E____titans_nick_to_rab3m_cpp_007d13ec,0x88);
  return 0xffff;
}

