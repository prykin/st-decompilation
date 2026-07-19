
void __thiscall FrmPanelTy::PaintBut(FrmPanelTy *this,int param_1,char *param_2)

{
  code *pcVar1;
  FrmPanelTy *pFVar2;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  void *unaff_ESI;
  int *piVar6;
  InternalExceptionFrame *pIVar7;
  undefined4 auStack_58 [16];
  int iStack_18;
  FrmPanelTy *pFStack_14;
  int iStack_10;
  ushort *puStack_c;
  uint uStack_8;
  
  pIVar7 = g_currentExceptionFrame;
  puStack_c = (ushort *)0x0;
  piVar6 = *(int **)(param_1 + 0x18);
  iStack_18 = *piVar6 - *(int *)(this + 0x3c);
  if (*(int *)(this + 0x5c) == 0) {
    iStack_10 = piVar6[1] - DAT_00806734;
  }
  else {
    iStack_10 = piVar6[1] - *(int *)(this + 0x44);
  }
  uStack_8 = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa4;
  pFStack_14 = this;
  iVar3 = __setjmp3(auStack_58,0,unaff_ESI,pIVar7);
  pFVar2 = pFStack_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = pIVar7;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_frmpanel_cpp_007c2958,0x8f,0,iVar3,&DAT_007a4ccc
                               ,s_FrmPanelTy__PaintBut_007c2ac4);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_frmpanel_cpp_007c2958,0x8f);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    uStack_8 = 0;
    break;
  case 1:
    uStack_8 = (uint)(pFStack_14[*(int *)(param_1 + 0x10) + -0xbf04] != (FrmPanelTy)0x0);
    break;
  case 2:
  case 3:
    uStack_8 = 1;
  }
  iVar3 = 1;
  piVar6 = (int *)0x0;
  pCVar4 = FUN_006f2c00(param_2,1,uStack_8);
  puStack_c = FUN_006f1ce0(1,pCVar4,piVar6,iVar3);
  thunk_FUN_00540760(*(undefined4 **)(pFVar2 + 0x68),iStack_18,iStack_10,'\x01',(byte *)puStack_c);
  cMf32::RecMemFree(DAT_00806790,(uint *)&puStack_c);
  FUN_006b3640(DAT_008075a8,*(uint *)(pFVar2 + 0x60),0xffffffff,*(uint *)(pFVar2 + 0x3c),
               *(uint *)(pFVar2 + 0x44));
  g_currentExceptionFrame = pIVar7;
  return;
}

