
undefined4 __cdecl FUN_0067f0f0(char *param_1,uint param_2)

{
  int iVar1;
  InternalExceptionFrame local_48;

  iVar1 = thunk_FUN_0067ee70(param_2);
  if (iVar1 != 0) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    iVar1 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
    if (iVar1 == 0) {
      Library::DKW::TBL::FUN_006b6020((uint *)PTR_00848a1c,param_2,param_1);
      g_currentExceptionFrame = local_48.previous;
      return 1;
    }
    g_currentExceptionFrame = local_48.previous;
  }
  return 0;
}

