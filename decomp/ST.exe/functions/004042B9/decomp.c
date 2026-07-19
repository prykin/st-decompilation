
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall thunk_FUN_00572920(void *this,byte param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  LSTATUS LVar3;
  uint uVar4;
  int iVar5;
  cMf32 *this_00;
  cMf32 *this_01;
  byte *pbVar6;
  undefined *puVar7;
  byte abStack_158 [260];
  InternalExceptionFrame IStack_54;
  void *pvStack_10;
  undefined4 uStack_c;
  HKEY pHStack_8;
  
  uStack_c = 1;
  pvStack_10 = this;
  if ((param_1 & 1) != 0) {
    LVar3 = RegOpenKeyA((HKEY)0x80000001,s_SOFTWARE_Ellipse_Studios_Submari_007ca46c,&pHStack_8);
    if (LVar3 == 0) {
      RegSetValueExA(pHStack_8,s_LastPlayer_007ca510,0,1,(BYTE *)((int)this + 0x785),0x40);
    }
    RegCloseKey(pHStack_8);
    _DAT_008072f8 = 0;
    _DAT_008072fc = 0x82;
    uVar4 = 0;
    do {
      _DAT_008072f8 = _DAT_008072f8 + (uint)(byte)(&DAT_008072f8)[uVar4];
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x82);
    wsprintfA((LPSTR)abStack_158,s__s_s_s_007c6edc,(int)this + 0x28,PTR_s_SAVEGAME__0079b0cc,
              (int)this + 0x785);
    CreateDirectoryA((LPCSTR)abStack_158,(LPSECURITY_ATTRIBUTES)0x0);
    pbVar6 = abStack_158;
    puVar7 = &DAT_007ca69c;
    wsprintfA((LPSTR)pbVar6,&DAT_007ca69c,abStack_158,PTR_s_PL_LOG_0079b0d0);
    IStack_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_54;
    iVar5 = Library::MSVCRT::__setjmp3(IStack_54.jumpBuffer,0,pbVar6,puVar7);
    if (iVar5 == 0) {
      this_00 = (cMf32 *)FUN_006f0ec0(0x345,abStack_158,2,0,0);
      if (this_00 != (cMf32 *)0x0) {
        cMf32::RecPut(this_00,0xc,PTR_s_OPTIONS_PLAYER_0079b0d4,&DAT_008072f8,0x82,(undefined4 *)0x0
                      ,'\0',(uint *)0x0);
        pvVar1 = pvStack_10;
        cMf32::RecPut(this_00,0xc,PTR_s_LASTLOG_0079b0e8,(byte *)((int)pvStack_10 + 0x7c5),0x40,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::RecPut(this_00,0xc,PTR_s_LASTPSW_0079b0ec,(byte *)((int)pvVar1 + 0x805),9,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::delete(this_01,(undefined4 *)this_00);
      }
      g_currentExceptionFrame = IStack_54.previous;
    }
    else {
      g_currentExceptionFrame = IStack_54.previous;
      uStack_c = 0;
    }
  }
  uVar2 = uStack_c;
  if ((param_1 & 2) != 0) {
    LVar3 = RegOpenKeyA((HKEY)0x80000001,s_SOFTWARE_Ellipse_Studios_Submari_007ca330,&pHStack_8);
    if (LVar3 == 0) {
      RegSetValueExA(pHStack_8,s_Editor_007ca51c,0,3,(BYTE *)&DAT_008071f8,0x100);
    }
    RegCloseKey(pHStack_8);
  }
  return uVar2;
}

