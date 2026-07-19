
void __thiscall STAppC::CloseGameDBs(STAppC *this)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  cMf32 *extraout_ECX_02;
  cMf32 *extraout_ECX_03;
  cMf32 *extraout_ECX_04;
  cMf32 *pcVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_48;
  
  IStack_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_48;
  errorCode = __setjmp3(IStack_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    pcVar3 = extraout_ECX;
    if (DAT_0080678c != 0) {
      FUN_0070a300(&DAT_0080678c);
      pcVar3 = extraout_ECX_00;
    }
    cMf32::delete(pcVar3,DAT_00806788);
    DAT_00806788 = (undefined4 *)0x0;
    if (DAT_00806794 != 0) {
      FUN_0070a300(&DAT_00806794);
    }
    cMf32::delete(DAT_00806790,(undefined4 *)DAT_00806790);
    DAT_00806790 = (cMf32 *)0x0;
    pcVar3 = extraout_ECX_01;
    if (DAT_0080677c != 0) {
      FUN_0070a300(&DAT_0080677c);
      pcVar3 = extraout_ECX_02;
    }
    cMf32::delete(pcVar3,DAT_00806778);
    DAT_00806778 = (undefined4 *)0x0;
    pcVar3 = extraout_ECX_03;
    if (DAT_00806774 != 0) {
      FUN_0070a300(&DAT_00806774);
      pcVar3 = extraout_ECX_04;
    }
    cMf32::delete(pcVar3,DAT_00806770);
    DAT_00806770 = (undefined4 *)0x0;
    if (DAT_0080676c != 0) {
      FUN_0070a300(&DAT_0080676c);
    }
    cMf32::delete(DAT_00806768,(undefined4 *)DAT_00806768);
    DAT_00806768 = (cMf32 *)0x0;
    g_currentExceptionFrame = IStack_48.previous;
    return;
  }
  g_currentExceptionFrame = IStack_48.previous;
  iVar2 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x417,0,errorCode,&DAT_007a4ccc,
                             s_STAppC__CloseGameDBs_007ca174);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_tapp_cpp_007ca0c8,0x417);
  return;
}

