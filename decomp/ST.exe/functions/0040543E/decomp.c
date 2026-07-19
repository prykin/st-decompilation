
uint __thiscall
STManRub3C::AddNewColl3(STManRub3C *this,int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  STManRub3C *pSVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_60;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  STManRub3C *pSStack_c;
  int iStack_8;
  
  uStack_10 = 0xffffffff;
  iStack_8 = 0;
  IStack_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_60;
  pSStack_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_60.previous;
    iVar7 = ReportDebugMessage(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x24d,0,iVar3,&DAT_007a4ccc,
                               s_STManRub3C__AddNewColl3_007d1464);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    RaiseInternalException(iVar3,0,s_E____titans_nick_to_rab3m_cpp_007d13ec,0x24f);
    return 0xffff;
  }
  if (*(int *)(pSStack_c + param_1 * 4 + 0x70) == 0) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
    *(uint **)(pSVar2 + param_1 * 4 + 0x70) = puVar4;
  }
  else {
    iVar3 = *(int *)(*(int *)(pSStack_c + param_1 * 4 + 0x70) + 0xc);
    uVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar7 = *(int *)(pSStack_c + param_1 * 4 + 0x70);
        if (uVar6 < *(uint *)(iVar7 + 0xc)) {
          piVar5 = (int *)(*(int *)(iVar7 + 8) * uVar6 + *(int *)(iVar7 + 0x1c));
        }
        else {
          piVar5 = (int *)0x0;
        }
        if ((piVar5 != (int *)0x0) && (*piVar5 == param_2)) {
          iStack_8 = 1;
          piVar5[1] = param_3;
          piVar5[2] = param_4;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar3);
    }
  }
  puVar4 = *(uint **)(pSVar2 + param_1 * 4 + 0x70);
  if ((puVar4 != (uint *)0x0) && (iStack_8 == 0)) {
    iStack_1c = param_2;
    iStack_18 = param_3;
    iStack_14 = param_4;
    uVar6 = Library::DKW::TBL::FUN_006ae1c0(puVar4,&iStack_1c);
    g_currentExceptionFrame = IStack_60.previous;
    return uVar6;
  }
  g_currentExceptionFrame = IStack_60.previous;
  return uStack_10;
}

