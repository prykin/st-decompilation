
uint __thiscall
VisibleClassTy::VisHoleCreate
          (VisibleClassTy *this,int param_1,int param_2,undefined *param_3,uint param_4,
          undefined *param_5,undefined4 param_6)

{
  uint *puVar1;
  code *pcVar2;
  VisibleClassTy *this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar6;
  InternalExceptionFrame IStack_6c;
  int aiStack_28 [2];
  undefined *puStack_20;
  undefined *puStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  VisibleClassTy *pVStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  if ((*(int *)(this + 0x114) != 0) && (-1 < (int)param_5)) {
    IStack_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_6c;
    pVStack_c = this;
    iVar3 = Library::MSVCRT::__setjmp3(IStack_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = pVStack_c;
    if (iVar3 == 0) {
      puVar1 = *(uint **)(pVStack_c + 0xf4);
      if (puVar1 != (uint *)0x0) {
        piVar6 = aiStack_28;
        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
        aiStack_28[1] = param_2;
        aiStack_28[0] = param_1;
        uStack_18 = param_4;
        puStack_20 = param_3;
        uStack_10 = param_6;
        puStack_1c = param_5;
        uStack_14 = *(undefined4 *)(this_00 + 0x108);
        uStack_8 = Library::DKW::TBL::FUN_006ae1c0(puVar1,aiStack_28);
        thunk_FUN_00558dc0(this_00,aiStack_28[0],aiStack_28[1],puStack_20,uStack_18,puStack_1c,-6,
                           0xffffffff);
      }
      g_currentExceptionFrame = IStack_6c.previous;
      return uStack_8;
    }
    g_currentExceptionFrame = IStack_6c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0x3f0,0,iVar3,&DAT_007a4ccc,
                               s_VisibleClassTy__VisHoleCreate_er_007c9464);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    RaiseInternalException(iVar3,0,s_E____titans_grig_visible_cpp_007c92cc,0x3f1);
  }
  return 0xffffffff;
}

