
undefined4 __fastcall FUN_00572ba0(int param_1)

{
  int iVar1;
  cMf32 *this;
  cMf32 *this_00;
  byte *pbVar2;
  char *pcVar3;
  byte local_154 [260];
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 local_8;
  
  pbVar2 = local_154;
  pcVar3 = s__s_s_s__s_007ca1ec;
  local_8 = 1;
  local_c = param_1;
  wsprintfA((LPSTR)pbVar2,s__s_s_s__s_007ca1ec,param_1 + 0x28,PTR_s_SAVEGAME__0079b0cc,
            param_1 + 0x785,PTR_s_PL_LOG_0079b0d0);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar1 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,pbVar2,pcVar3);
  if (iVar1 == 0) {
    this = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,local_154,2,0,0);
    iVar1 = local_c;
    if (this != (cMf32 *)0x0) {
      cMf32::RecPut(this,0xc,PTR_s_AIKEYS_PLAYER_0079b0dc,(byte *)(local_c + 0xd86),0x28,
                    (undefined4 *)0x0,'\0',(uint *)0x0);
      cMf32::RecPut(this,0xc,PTR_s_ACCKEYS_PLAYER_0079b0d8,(byte *)(iVar1 + 0x80e),400,
                    (undefined4 *)0x0,'\0',(uint *)0x0);
      cMf32::RecPut(this,0xc,PTR_s_SYSKEYS_PLAYER_0079b0e0,(byte *)(iVar1 + 0x99e),0x140,
                    (undefined4 *)0x0,'\0',(uint *)0x0);
      cMf32::RecPut(this,0xc,PTR_s_MOUKEYS_PLAYER_0079b0e4,(byte *)(iVar1 + 0xc1e),0x78,
                    (undefined4 *)0x0,'\0',(uint *)0x0);
      cMf32::delete(this_00,this);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

