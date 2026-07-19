
uint * __thiscall STGroupC::GetGroupContent(STGroupC *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  int errorCode;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  uint uVar7;
  InternalExceptionFrame IStack_5c;
  uint uStack_18;
  uint uStack_14;
  STGroupC *pSStack_10;
  uint *puStack_c;
  short sStack_6;
  
  uStack_18 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  uVar6 = 0;
  puStack_c = (uint *)0x0;
  uStack_14 = 0;
  IStack_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_5c;
  pSStack_10 = this;
  errorCode = Library::MSVCRT::__setjmp3(IStack_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    puStack_c = Library::DKW::TBL::FUN_006ae290
                          ((uint *)0x0,(uint)*(ushort *)(pSStack_10 + 0x27),2,1);
    uVar2 = uStack_18;
    if (uStack_18 != 0) {
      uVar5 = 0;
      uVar7 = uStack_14;
      do {
        FUN_006acc70(*(int *)(pSStack_10 + 0x29),uVar5,(undefined4 *)&sStack_6);
        if (sStack_6 != -1) {
          Library::DKW::TBL::FUN_006ae140(puStack_c,uVar7 & 0xffff,(undefined4 *)&sStack_6);
          uVar7 = uVar7 + 1;
          uStack_14 = uVar7;
        }
        uVar6 = uVar6 + 1;
        uVar5 = uVar6 & 0xffff;
      } while (uVar5 < uVar2);
    }
    g_currentExceptionFrame = IStack_5c.previous;
    return puStack_c;
  }
  g_currentExceptionFrame = IStack_5c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x52,0,errorCode,&DAT_007a4ccc,
                             s_STGroupC__GetGroupContent_007a50c8);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (uint *)(*pcVar1)();
    return puVar4;
  }
  RaiseInternalException(errorCode,0,s_E____titans_wlad_tc_grp_cpp_007a50a4,0x53);
  return puStack_c;
}

