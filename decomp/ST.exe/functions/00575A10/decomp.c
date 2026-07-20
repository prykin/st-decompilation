
undefined4 FUN_00575a10(HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  InternalExceptionFrame local_60;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079b118;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff8c;
  ExceptionList = &local_14;
  HINSTANCE_00807618 = GetModuleHandleA(s_st_string_dll_007caafc);
  if (HINSTANCE_00807618 == (HMODULE)0x0) {
    ExceptionList = local_14;
    return 0xffffffff;
  }
  puVar1 = (uint *)FUN_006b0140(100,HINSTANCE_00807618);
  Library::MSVCRT::FUN_0072f260(0,puVar1);
  FUN_006ad190(0x18,s_dbg_msg_rpt_007caaec,0);
  thunk_FUN_004e82b0();
  local_8 = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar2 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,2,Library::MSVCRT::FUN_0072da21,0);
  if (iVar2 == 0) {
    local_1c = &stack0xffffff8c;
    iVar2 = STAppC::InitApp((STAppC *)&DAT_00807620,param_1,param_2,param_3,param_4);
    if (iVar2 != 1) {
      ExceptionList = local_14;
      return 0;
    }
    AppClassTy::RunApp((AppClassTy *)&DAT_00807620);
    g_currentExceptionFrame = local_60.previous;
  }
  else {
    g_currentExceptionFrame = local_60.previous;
    local_1c = &stack0xffffff8c;
    if ((iVar2 != -0x5001fff6) &&
       ((iVar2 < -0x5001fff4 || (local_1c = &stack0xffffff8c, -0x5001fff3 < iVar2)))) {
      local_1c = &stack0xffffff8c;
      MessageBoxA(g_hWnd_00806748,s_Internal_error_007caad8,s_Internal_error_007caad8,0);
    }
  }
  local_8 = 0xffffffff;
  if (DAT_0080fb76 == 0) {
    if (DAT_0080fb72 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    wsprintfA((LPSTR)&DAT_0080f33a,s__ssteditor_exe_007caac4,&DAT_00807680);
  }
  else {
    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_UPDATES__0079b114,
              &DAT_0080f126);
  }
  WinExec((LPCSTR)&DAT_0080f33a,1);
  ExceptionList = local_14;
  return 0;
}

