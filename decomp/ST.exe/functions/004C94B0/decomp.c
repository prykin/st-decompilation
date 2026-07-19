
undefined4 FUN_004c94b0(void)

{
  code *pcVar1;
  int errorCode;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  int *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    switch(*(undefined4 *)((int)local_c + 0x361)) {
    case 1:
      uVar4 = thunk_FUN_004ceb00(local_c,*(undefined4 *)((int)local_c + 0x369));
      g_currentExceptionFrame = local_50.previous;
      return uVar4;
    case 2:
      uVar4 = thunk_FUN_004e2c30(local_c,*(uint *)((int)local_c + 0x369));
      g_currentExceptionFrame = local_50.previous;
      return uVar4;
    case 3:
      uVar4 = thunk_FUN_004ea830((int)local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar4;
    case 4:
      uVar4 = thunk_FUN_004d9c20((int)local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar4;
    case 5:
      local_8 = 1;
      uVar2 = thunk_FUN_004406c0(*(char *)((int)local_c + 0x23d));
      *(undefined4 *)((int)local_c + 0x241) =
           *(undefined4 *)
            (&DAT_007e4178 + ((uVar2 & 0xff) + *(int *)((int)local_c + 0x235) * 3) * 4);
      thunk_FUN_004cc900((int)local_c);
      g_currentExceptionFrame = local_50.previous;
      return 1;
    case 6:
      uVar4 = thunk_FUN_004de820(local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar4;
    default:
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    case 8:
      uVar4 = thunk_FUN_004ece40((int)local_c);
      g_currentExceptionFrame = local_50.previous;
      return uVar4;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_bproc_cpp_007ad3b4,0x291,0,errorCode,
                             &DAT_007a4ccc,s_TLOBaseTy__procResult_error_007ad3ec);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Artem_TLO_bproc_cpp_007ad3b4,0x292);
  return 0;
}

