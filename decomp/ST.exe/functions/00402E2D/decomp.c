
void __thiscall HelpPanelTy::BackBut(HelpPanelTy *this,void *param_1)

{
  HelpPanelTy HVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  HelpPanelTy *pHVar5;
  InternalExceptionFrame IStack_50;
  HelpPanelTy *pHStack_c;
  undefined4 uStack_8;
  
  if (this[0x1a1] != this[0x1a2]) {
    IStack_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_50;
    pHStack_c = this;
    iVar3 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = pHStack_c;
    if (iVar3 == 0) {
      if (*(int *)(pHStack_c + 0x178) != 0) {
        *(undefined4 *)(pHStack_c + 0x28) = 0x4202;
        *(undefined2 *)(pHStack_c + 0x2c) = 0;
        *(undefined2 *)(pHStack_c + 0x2e) = 2;
        *(int *)(pHStack_c + 0x30) = *(int *)(pHStack_c + 0x178);
        if (DAT_00802a30 != (undefined4 *)0x0) {
          (**(code **)*DAT_00802a30)(pHStack_c + 0x18);
        }
      }
      HVar1 = this_00[0x1a2];
      if (HVar1 != (HelpPanelTy)0x0) {
        if (HVar1 == (HelpPanelTy)0x6) {
          TTreeProc(this_00,*(uint *)(this_00 + 0x1ab),'\0');
          PutToSHlp(this_00,(int)unaff_EDI);
          g_currentExceptionFrame = IStack_50.previous;
          return;
        }
        if (HVar1 != (HelpPanelTy)0xa) {
          g_currentExceptionFrame = IStack_50.previous;
          return;
        }
      }
      this_00[0x1a1] = HVar1;
      *(undefined4 *)(this_00 + 0x1a3) = uStack_8;
      FUN_006b55f0(*(undefined4 **)(this_00 + 0x68),0,0x21,0x16,*(int *)(this_00 + 0x1dc),0,0x21,
                   0x16,0x1b8,0x118);
      CreateList(this_00);
      if (this_00[0x1a2] == (HelpPanelTy)0x0) {
        uStack_8 = *(undefined4 *)(this_00 + 0x1b7);
      }
      else {
        uStack_8 = *(undefined4 *)(this_00 + 0x1bf);
      }
      if (*(int *)(this_00 + 0x19c) != 0) {
        pHVar5 = this_00 + 0x18;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pHVar5 = 0;
          pHVar5 = pHVar5 + 4;
        }
        *(undefined4 *)(this_00 + 0x28) = 0x22;
        *(short *)(this_00 + 0x2c) = (short)uStack_8;
        *(undefined2 *)(this_00 + 0x30) = 1;
        *(undefined2 *)(this_00 + 0x32) = 1;
        FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x19c),(undefined4 *)(this_00 + 0x18));
      }
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    g_currentExceptionFrame = IStack_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x2b3,0,iVar3,&DAT_007a4ccc
                               ,s_HelpPanelTy__BackBut_007c3a80);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x2b3);
  }
  return;
}

