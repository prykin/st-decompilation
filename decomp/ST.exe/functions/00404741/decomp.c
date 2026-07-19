
void __thiscall AiTactClassTy::InitDistrObj(AiTactClassTy *this)

{
  code *pcVar1;
  AiTactClassTy *this_00;
  int errorCode;
  uint *puVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  AiTactClassTy *pAStack_c;
  uint *puStack_8;
  
  puStack_8 = (uint *)0x0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pAStack_c = this;
  errorCode = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pAStack_c;
  if (errorCode == 0) {
    puVar2 = thunk_FUN_00676170(*(undefined4 *)(pAStack_c + 0x24));
    puStack_8 = puVar2;
    GiveObjByClaim(this_00,(int)puVar2);
    GiveObjByFltType(this_00,(int)puVar2);
    if (puVar2 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar2);
    }
    g_currentExceptionFrame = IStack_50.previous;
    return;
  }
  g_currentExceptionFrame = IStack_50.previous;
  if (puStack_8 != (uint *)0x0) {
    FUN_006ae110((byte *)puStack_8);
    puStack_8 = (uint *)0x0;
  }
  iVar3 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x2a8,0,errorCode,&DAT_007a4ccc,
                             s_AiTactClassTy__InitDistrObj_007d582c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x2a9);
  return;
}

