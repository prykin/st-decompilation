
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00572920(void *this,byte param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  LSTATUS LVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined *puVar8;
  byte local_158 [260];
  undefined4 *local_54;
  undefined4 local_50 [16];
  void *local_10;
  undefined4 local_c;
  HKEY local_8;
  
  local_c = 1;
  local_10 = this;
  if ((param_1 & 1) != 0) {
    LVar3 = RegOpenKeyA((HKEY)0x80000001,s_SOFTWARE_Ellipse_Studios_Submari_007ca46c,&local_8);
    if (LVar3 == 0) {
      RegSetValueExA(local_8,s_LastPlayer_007ca510,0,1,(BYTE *)((int)this + 0x785),0x40);
    }
    RegCloseKey(local_8);
    _DAT_008072f8 = 0;
    _DAT_008072fc = 0x82;
    uVar4 = 0;
    do {
      _DAT_008072f8 = _DAT_008072f8 + (uint)(byte)(&DAT_008072f8)[uVar4];
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x82);
    wsprintfA((LPSTR)local_158,s__s_s_s_007c6edc,(int)this + 0x28,PTR_s_SAVEGAME__0079b0cc,
              (int)this + 0x785);
    CreateDirectoryA((LPCSTR)local_158,(LPSECURITY_ATTRIBUTES)0x0);
    pbVar7 = local_158;
    puVar8 = &DAT_007ca69c;
    wsprintfA((LPSTR)pbVar7,&DAT_007ca69c,local_158,PTR_s_PL_LOG_0079b0d0);
    local_54 = DAT_00858df8;
    DAT_00858df8 = &local_54;
    iVar5 = __setjmp3(local_50,0,pbVar7,puVar8);
    if (iVar5 == 0) {
      puVar6 = FUN_006f0ec0(0x345,local_158,2,0,0);
      if (puVar6 != (undefined4 *)0x0) {
        FUN_006f13f0(0xc,PTR_s_OPTIONS_PLAYER_0079b0d4,&DAT_008072f8,0x82,(undefined4 *)0x0,'\0',
                     (uint *)0x0);
        pvVar1 = local_10;
        FUN_006f13f0(0xc,PTR_s_LASTLOG_0079b0e8,(byte *)((int)local_10 + 0x7c5),0x40,
                     (undefined4 *)0x0,'\0',(uint *)0x0);
        FUN_006f13f0(0xc,PTR_s_LASTPSW_0079b0ec,(byte *)((int)pvVar1 + 0x805),9,(undefined4 *)0x0,
                     '\0',(uint *)0x0);
        FUN_006f1170(puVar6);
      }
      DAT_00858df8 = local_54;
    }
    else {
      DAT_00858df8 = local_54;
      local_c = 0;
    }
  }
  uVar2 = local_c;
  if ((param_1 & 2) != 0) {
    LVar3 = RegOpenKeyA((HKEY)0x80000001,s_SOFTWARE_Ellipse_Studios_Submari_007ca330,&local_8);
    if (LVar3 == 0) {
      RegSetValueExA(local_8,s_Editor_007ca51c,0,3,(BYTE *)&DAT_008071f8,0x100);
    }
    RegCloseKey(local_8);
  }
  return uVar2;
}

