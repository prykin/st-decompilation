
undefined4 __thiscall
MTaskTy::CreateBut(MTaskTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
                  undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
                  undefined4 param_8)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  undefined4 auStack_1cc [4];
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  InternalExceptionFrame IStack_50;
  MTaskTy *pMStack_c;
  undefined4 uStack_8;
  
  puVar5 = auStack_1cc;
  pMStack_c = this;
  for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uStack_8 = 0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    auStack_1cc[0] = param_2;
    auStack_1cc[1] = param_1;
    uStack_1bc = param_5;
    auStack_1cc[2] = param_3;
    auStack_1cc[3] = param_4;
    uStack_1ac = *(undefined4 *)(pMStack_c + 8);
    uStack_1a4 = param_7;
    uStack_1b8 = param_6;
    uStack_1a8 = 2;
    uStack_168 = 2;
    uStack_164 = param_8;
    uStack_16c = uStack_1ac;
    (**(code **)(**(int **)(pMStack_c + 0xc) + 8))(2,&uStack_8,0,auStack_1cc,0);
    g_currentExceptionFrame = IStack_50.previous;
    return uStack_8;
  }
  g_currentExceptionFrame = IStack_50.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x4a0,0,iVar4,&DAT_007a4ccc,
                             s_MTaskTy__CreateBut_007cdc74);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_task_obj_cpp_007cd994,0x4a0);
  return 0;
}

