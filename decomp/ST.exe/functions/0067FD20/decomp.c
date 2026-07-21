
uint __cdecl FUN_0067fd20(undefined4 param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  InternalExceptionFrame local_4c;
  undefined4 local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  uVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (uVar1 == 0) {
    local_8 = param_1;
    uVar1 = Library::DKW::TBL::FUN_006ae1c0((uint *)PTR_00848a38,&local_8);
    uVar2 = Library::DKW::TBL::FUN_006b5aa0(DAT_00848a3c,param_2);
    if (uVar1 != uVar2) {
      RaiseInternalException(-2,g_overwriteContext_007ED77C,s___ai_ai_script_v_inl_007d55d8,0x203);
    }
    g_currentExceptionFrame = local_4c.previous;
    return uVar1;
  }
  g_currentExceptionFrame = local_4c.previous;
  if (-1 < (int)uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

