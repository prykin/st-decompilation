
undefined4 __fastcall FUN_00572ba0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  char *pcVar4;
  byte local_154 [260];
  undefined4 *local_50;
  undefined4 local_4c [16];
  int local_c;
  undefined4 local_8;
  
  pbVar3 = local_154;
  pcVar4 = s__s_s_s__s_007ca1ec;
  local_8 = 1;
  local_c = param_1;
  wsprintfA((LPSTR)pbVar3,s__s_s_s__s_007ca1ec,param_1 + 0x28,PTR_s_SAVEGAME__0079b0cc,
            param_1 + 0x785,PTR_s_PL_LOG_0079b0d0);
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar1 = __setjmp3(local_4c,0,pbVar3,pcVar4);
  if (iVar1 == 0) {
    puVar2 = FUN_006f0ec0(0x345,local_154,2,0,0);
    iVar1 = local_c;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_006f13f0(0xc,PTR_s_AIKEYS_PLAYER_0079b0dc,(byte *)(local_c + 0xd86),0x28,(undefined4 *)0x0
                   ,'\0',(uint *)0x0);
      FUN_006f13f0(0xc,PTR_s_ACCKEYS_PLAYER_0079b0d8,(byte *)(iVar1 + 0x80e),400,(undefined4 *)0x0,
                   '\0',(uint *)0x0);
      FUN_006f13f0(0xc,PTR_s_SYSKEYS_PLAYER_0079b0e0,(byte *)(iVar1 + 0x99e),0x140,(undefined4 *)0x0
                   ,'\0',(uint *)0x0);
      FUN_006f13f0(0xc,PTR_s_MOUKEYS_PLAYER_0079b0e4,(byte *)(iVar1 + 0xc1e),0x78,(undefined4 *)0x0,
                   '\0',(uint *)0x0);
      FUN_006f1170(puVar2);
    }
    DAT_00858df8 = local_50;
    return local_8;
  }
  DAT_00858df8 = local_50;
  return 0;
}

