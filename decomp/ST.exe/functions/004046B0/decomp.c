
undefined4 __fastcall thunk_FUN_00572ba0(int param_1)

{
  int iVar1;
  cMf32 *this;
  cMf32 *this_00;
  byte *pbVar2;
  char *pcVar3;
  byte abStack_154 [260];
  InternalExceptionFrame IStack_50;
  int iStack_c;
  undefined4 uStack_8;
  
  pbVar2 = abStack_154;
  pcVar3 = s__s_s_s__s_007ca1ec;
  uStack_8 = 1;
  iStack_c = param_1;
  wsprintfA((LPSTR)pbVar2,s__s_s_s__s_007ca1ec,param_1 + 0x28,PTR_s_SAVEGAME__0079b0cc,
            param_1 + 0x785,PTR_s_PL_LOG_0079b0d0);
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  iVar1 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,pbVar2,pcVar3);
  if (iVar1 == 0) {
    this = (cMf32 *)FUN_006f0ec0(0x345,abStack_154,2,0,0);
    iVar1 = iStack_c;
    if (this != (cMf32 *)0x0) {
      cMf32::RecPut(this,0xc,PTR_s_AIKEYS_PLAYER_0079b0dc,(byte *)(iStack_c + 0xd86),0x28,
                    (undefined4 *)0x0,'\0',(uint *)0x0);
      cMf32::RecPut(this,0xc,PTR_s_ACCKEYS_PLAYER_0079b0d8,(byte *)(iVar1 + 0x80e),400,
                    (undefined4 *)0x0,'\0',(uint *)0x0);
      cMf32::RecPut(this,0xc,PTR_s_SYSKEYS_PLAYER_0079b0e0,(byte *)(iVar1 + 0x99e),0x140,
                    (undefined4 *)0x0,'\0',(uint *)0x0);
      cMf32::RecPut(this,0xc,PTR_s_MOUKEYS_PLAYER_0079b0e4,(byte *)(iVar1 + 0xc1e),0x78,
                    (undefined4 *)0x0,'\0',(uint *)0x0);
      cMf32::delete(this_00,(undefined4 *)this);
    }
    g_currentExceptionFrame = IStack_50.previous;
    return uStack_8;
  }
  g_currentExceptionFrame = IStack_50.previous;
  return 0;
}

