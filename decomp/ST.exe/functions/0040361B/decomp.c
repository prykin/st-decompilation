
undefined4 __thiscall
MMObjTy::CreateSprBut
          (MMObjTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
          ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
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
  MMObjTy *pMStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pMStack_c = this;
  iVar2 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar5 = auStack_1cc;
    for (iVar2 = 0x5f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
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
  iVar3 = ReportDebugMessage(s_E____titans_Start_mmenuobj_cpp_007cca38,0x47,0,iVar2,&DAT_007a4ccc,
                             s_MMObjTy__CreateSprBut_007cca78);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Start_mmenuobj_cpp_007cca38,0x47);
  return 0;
}

