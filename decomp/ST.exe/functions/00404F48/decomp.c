
void __thiscall STGroupC::RestoreGrpData(STGroupC *this,int param_1)

{
  code *pcVar1;
  STGroupC *pSVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  STGroupC *pSStack_c;
  int iStack_8;
  
  iStack_8 = param_1;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pSStack_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar5 = iStack_8;
  pSVar2 = pSStack_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x1d5,0,iVar3,&DAT_007a4ccc,
                               s_STGroupC__RestoreGrpData_007a5184);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_tc_grp_cpp_007a50a4,0x1d6);
    return;
  }
  *(undefined4 *)(pSStack_c + 0x20) = *(undefined4 *)(iStack_8 + 0x14);
  pSStack_c[0x24] = *(STGroupC *)(iStack_8 + 4);
  *(undefined2 *)(pSStack_c + 0x25) = *(undefined2 *)(iStack_8 + 0x18);
  *(undefined2 *)(pSStack_c + 0x27) = *(undefined2 *)(iStack_8 + 0x1a);
  *(undefined4 *)(pSStack_c + 0x31) = *(undefined4 *)(iStack_8 + 0x2c);
  *(undefined4 *)(pSStack_c + 0x35) = *(undefined4 *)(iStack_8 + 0x30);
  *(undefined4 *)(pSStack_c + 0x39) = *(undefined4 *)(iStack_8 + 0x34);
  if (*(int *)(iStack_8 + 0x1c) == -1) {
    *(undefined4 *)(pSStack_c + 0x29) = 0;
  }
  else {
    puVar4 = FUN_006b00c0((uint *)0x0,(uint *)(*(int *)(iStack_8 + 0x1c) + iStack_8),&LAB_004045c5);
    *(uint **)(pSVar2 + 0x29) = puVar4;
  }
  iVar3 = *(int *)(iVar5 + 0x24);
  if (iVar3 != -1) {
    puVar4 = FUN_006b00c0((uint *)0x0,(uint *)(iVar3 + iVar5),&LAB_004045c5);
    *(uint **)(pSVar2 + 0x2d) = puVar4;
    g_currentExceptionFrame = IStack_50.previous;
    return;
  }
  *(undefined4 *)(pSVar2 + 0x2d) = 0;
  g_currentExceptionFrame = IStack_50.previous;
  return;
}

