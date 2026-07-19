
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bproc.cpp
   TLOBaseTy::procResult */

undefined4 __thiscall TLOBaseTy::procResult(TLOBaseTy *this)

{
  code *pcVar1;
  TLOBaseTy *pTVar2;
  int errorCode;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  TLOBaseTy *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pTVar2 = local_c;
  if (errorCode == 0) {
    switch(*(undefined4 *)&local_c->field_0x361) {
    case 1:
      uVar5 = thunk_FUN_004ceb00(local_c,*(undefined4 *)&local_c->field_0x369);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    case 2:
      uVar5 = thunk_FUN_004e2c30(local_c,*(uint *)&local_c->field_0x369);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    case 3:
      uVar5 = thunk_FUN_004ea830((int)local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    case 4:
      uVar5 = thunk_FUN_004d9c20((int)local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    case 5:
      local_8 = 1;
      uVar3 = thunk_FUN_004406c0(local_c->field_023D);
      *(undefined4 *)&pTVar2->field_0x241 =
           *(undefined4 *)(&DAT_007e4178 + ((uVar3 & 0xff) + *(int *)&pTVar2->field_0x235 * 3) * 4);
      thunk_FUN_004cc900((int)pTVar2);
      g_currentExceptionFrame = local_50.previous;
      return 1;
    case 6:
      uVar5 = thunk_FUN_004de820((int *)local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    default:
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    case 8:
      uVar5 = thunk_FUN_004ece40((int)local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar5;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Artem_TLO_bproc_cpp_007ad3b4,0x291,0,errorCode,
                             &DAT_007a4ccc,s_TLOBaseTy__procResult_error_007ad3ec);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Artem_TLO_bproc_cpp_007ad3b4,0x292);
  return 0;
}

