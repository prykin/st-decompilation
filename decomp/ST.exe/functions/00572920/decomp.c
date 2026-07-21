
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00572920(void *this,byte param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  LSTATUS LVar3;
  uint uVar4;
  int iVar5;
  cMf32 *this_00;
  cMf32 *this_01;
  byte local_158 [260];
  InternalExceptionFrame local_54;
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
    wsprintfA((LPSTR)local_158,&DAT_007ca69c,local_158,PTR_s_PL_LOG_0079b0d0);
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    if (iVar5 == 0) {
      this_00 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,local_158,2,0,0);
      if (this_00 != (cMf32 *)0x0) {
        cMf32::RecPut(this_00,0xc,PTR_s_OPTIONS_PLAYER_0079b0d4,&DAT_008072f8,0x82,(undefined4 *)0x0
                      ,'\0',(uint *)0x0);
        pvVar1 = local_10;
        cMf32::RecPut(this_00,0xc,PTR_s_LASTLOG_0079b0e8,(byte *)((int)local_10 + 0x7c5),0x40,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::RecPut(this_00,0xc,PTR_s_LASTPSW_0079b0ec,(byte *)((int)pvVar1 + 0x805),9,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::delete(this_01,this_00);
      }
      g_currentExceptionFrame = local_54.previous;
    }
    else {
      g_currentExceptionFrame = local_54.previous;
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

