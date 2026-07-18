
int __cdecl thunk_FUN_0055d730(int param_1,byte param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_48;
  undefined4 auStack_44 [16];
  
  uStack_48 = DAT_00858df8;
  DAT_00858df8 = &uStack_48;
  iVar2 = __setjmp3(auStack_44,0,unaff_EDI,unaff_ESI);
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
    DAT_00858df8 = (undefined4 *)uStack_48;
    DAT_00807560 = DAT_008032c4;
    DAT_008073c8 = DAT_008032bc;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_48;
  iVar3 = FUN_006ad4d0(s_E____titans_pal_tbl_CPP_007c959c,0x51,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  thunk_FUN_0055d910();
  FUN_006a5e40(iVar2,0,0x7c959c,0x55);
  return iVar2;
}

