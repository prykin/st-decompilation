
int FUN_006767d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  byte local_150 [260];
  undefined4 *local_4c;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar1 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    wsprintfA((LPSTR)local_150,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079d6c0,
              &DAT_00807ddd,PTR_s_PL_LOG_0079d6c4);
    puVar2 = FUN_006f0ec0(0x345,local_150,2,0,0);
    local_8 = puVar2;
    wsprintfA((LPSTR)local_150,s__s_d_02d_007d2de8,PTR_DAT_0079d6c8,(uint)DAT_0080874e,DAT_0080c52a)
    ;
    FUN_006f13f0(0xc,(char *)local_150,(byte *)&DAT_0080c522,0x27f0,(undefined4 *)0x0,'\0',
                 (uint *)0x0);
    FUN_006f1170(puVar2);
    DAT_00858df8 = local_4c;
    return 0;
  }
  DAT_00858df8 = local_4c;
  FUN_006f1170(local_8);
  if (iVar1 < 0) {
    return iVar1;
  }
  return -1;
}

