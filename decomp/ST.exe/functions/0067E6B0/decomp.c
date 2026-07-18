
LPSTR __cdecl FUN_0067e6b0(int param_1)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar3 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_48;
    iVar5 = FUN_006ad4d0(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1fd,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      pCVar4 = (LPSTR)(*pcVar1)();
      return pCVar4;
    }
    FUN_006a5e40(iVar3,0,0x7d2fa4,0x1fe);
    return (LPSTR)0x0;
  }
  if (param_1 == 0) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7d2fa4,0x1fa);
  }
  puVar2 = PTR_s_OPPONENT_0079d728;
  iVar3 = 0;
  do {
    pCVar4 = FUN_006f2c00(puVar2,3,iVar3);
    iVar5 = FUN_006f21c0(0xc,pCVar4);
    if (iVar5 != 0) {
      DAT_00858df8 = (undefined4 *)local_48;
      return pCVar4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x7ffffff0);
  DAT_00858df8 = (undefined4 *)local_48;
  return (LPSTR)0x0;
}

