
undefined4 __fastcall FUN_00572ba0(int param_1)

{
  int iVar1;
  cMf32 *this;
  byte local_154 [260];
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 local_8;

  local_8 = 1;
  local_c = param_1;
  wsprintfA((LPSTR)local_154,"%s%s%s\\%s",param_1 + 0x28,PTR_s_SAVEGAME__0079b0cc,
            param_1 + 0x785,PTR_s_PL_LOG_0079b0d0);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar1 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar1 == 0) {
    this = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,local_154,2,0,0);
    iVar1 = local_c;
    if (this != nullptr) {
      cMf32::RecPut(this,0xc,PTR_s_AIKEYS_PLAYER_0079b0dc,(byte *)(local_c + 0xd86),0x28,
                    nullptr,'\0',nullptr);
      cMf32::RecPut(this,0xc,PTR_s_ACCKEYS_PLAYER_0079b0d8,(byte *)(iVar1 + 0x80e),400,
                    nullptr,'\0',nullptr);
      cMf32::RecPut(this,0xc,PTR_s_SYSKEYS_PLAYER_0079b0e0,(byte *)(iVar1 + 0x99e),0x140,
                    nullptr,'\0',nullptr);
      cMf32::RecPut(this,0xc,PTR_s_MOUKEYS_PLAYER_0079b0e4,(byte *)(iVar1 + 0xc1e),0x78,
                    nullptr,'\0',nullptr);
      cMf32::delete(this);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

