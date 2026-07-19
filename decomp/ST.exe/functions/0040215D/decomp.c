
int __thiscall AiFltClassTy::InitData(AiFltClassTy *this,undefined4 *param_1)

{
  code *pcVar1;
  AiFltClassTy *pAVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  AiFltClassTy *pAVar7;
  void *unaff_EDI;
  AiFltClassTy *pAVar8;
  InternalExceptionFrame IStack_50;
  AiFltClassTy *pAStack_c;
  int iStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pAStack_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar2 = pAStack_c;
  if (iVar3 == 0) {
    if (pAStack_c == (AiFltClassTy *)0x0) {
      pAVar8 = (AiFltClassTy *)0x0;
    }
    else {
      pAVar8 = pAStack_c + 0x20;
    }
    puVar6 = param_1;
    for (iVar3 = 0x98; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pAVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      pAVar8 = pAVar8 + 4;
    }
    pAVar8 = pAStack_c + 0x20b;
    *(undefined4 *)(pAStack_c + 0x20) = 900;
    pAStack_c[0x38] = (AiFltClassTy)0x1;
    iStack_8 = 7;
    pAVar7 = pAVar8;
    do {
      if (*(int *)pAVar7 != 0) {
        iVar3 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(pAVar7 + 4) + 0x25f + (int)param_1));
        *(int *)pAVar7 = iVar3;
      }
      pAVar7 = pAVar7 + 0xc;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
    if (*(int *)pAVar8 == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x2c,10);
      *(uint **)pAVar8 = puVar4;
    }
    if (*(int *)(pAVar2 + 0x217) == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0x34,10);
      *(uint **)(pAVar2 + 0x217) = puVar4;
    }
    if (*(int *)(pAVar2 + 0x223) == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
      *(uint **)(pAVar2 + 0x223) = puVar4;
    }
    if (*(int *)(pAVar2 + 0x22f) == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
      *(uint **)(pAVar2 + 0x22f) = puVar4;
    }
    if (*(int *)(pAVar2 + 0x23b) == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
      *(uint **)(pAVar2 + 0x23b) = puVar4;
    }
    g_currentExceptionFrame = IStack_50.previous;
    return 0;
  }
  g_currentExceptionFrame = IStack_50.previous;
  thunk_FUN_0065d480((int)pAStack_c);
  iVar5 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0x31,0,iVar3,&DAT_007a4ccc,
                             s_AiFltClassTy__InitData_007d2ba0);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0x32);
  return iVar3;
}

