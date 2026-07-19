
int __cdecl FUN_0055d730(int param_1,byte param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = __setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    DAT_008032b4 = FUN_00717fc0(param_1,PTR_s_PLT_PAUSE_0079af70,param_2,1);
    DAT_008032b8 = FUN_00717fc0(param_1,PTR_s_PLT_EXPLITE_0079af74,param_2,1);
    DAT_008032bc = FUN_00717fc0(param_1,PTR_s_PLT_SHAD30_0079af78,param_2,1);
    DAT_008032c0 = FUN_00717fc0(param_1,PTR_s_PLT_SHAD40_0079af7c,param_2,1);
    DAT_008032c4 = FUN_00717fc0(param_1,PTR_s_PLT_SHAD60_0079af80,param_2,1);
    DAT_008032c8 = FUN_00717fc0(param_1,PTR_s_PLT_FOG_0079af84,param_2,1);
    DAT_008032cc = FUN_00717fc0(param_1,PTR_s_PLT_NUCL_0079af8c,param_2,1);
    DAT_008032d0 = FUN_00717fc0(param_1,PTR_s_PLT_GLOW_0079af90,param_2,1);
    DAT_008032d4 = FUN_00717fc0(param_1,PTR_s_PLT_DKD_0079af94,param_2,1);
    DAT_008073cc = DAT_008032c0;
    g_currentExceptionFrame = local_48.previous;
    DAT_00807560 = DAT_008032c4;
    DAT_008073c8 = DAT_008032bc;
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = ReportDebugMessage(s_E____titans_pal_tbl_CPP_007c959c,0x51,0,iVar2,&DAT_007a4ccc,
                             s_LoadGamePlt_007c95b8);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  thunk_FUN_0055d910();
  RaiseInternalException(iVar2,0,s_E____titans_pal_tbl_CPP_007c959c,0x55);
  return iVar2;
}

