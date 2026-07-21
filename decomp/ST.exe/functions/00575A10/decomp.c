
undefined4 FUN_00575a10(HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char *resourceString;
  int iVar1;
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
  HINSTANCE_00807618 = GetModuleHandleA("st_string.dll");
  if (HINSTANCE_00807618 == (HMODULE)0x0) {
    ExceptionList = local_14;
    return 0xffffffff;
  }
  resourceString = LoadResourceString(100,HINSTANCE_00807618);
  Library::MSVCRT::FUN_0072f260(0,resourceString);
  FUN_006ad190(0x18,"dbg_msg.rpt",0);
  thunk_FUN_004e82b0();
  local_8 = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar1 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,2,Library::MSVCRT::FUN_0072da21,0);
  if (iVar1 == 0) {
    local_1c = &stack0xffffff8c;
    iVar1 = STAppC::InitApp((STAppC *)&DAT_00807620,param_1,param_2,param_3,param_4);
    if (iVar1 != 1) {
      ExceptionList = local_14;
      return 0;
    }
    AppClassTy::RunApp((AppClassTy *)&DAT_00807620);
    g_currentExceptionFrame = local_60.previous;
  }
  else {
    g_currentExceptionFrame = local_60.previous;
    local_1c = &stack0xffffff8c;
    if ((iVar1 != -0x5001fff6) &&
       ((iVar1 < -0x5001fff4 || (local_1c = &stack0xffffff8c, -0x5001fff3 < iVar1)))) {
      local_1c = &stack0xffffff8c;
      MessageBoxA(g_hWnd_00806748,"Internal error","Internal error",0);
    }
  }
  local_8 = 0xffffffff;
  if (DAT_0080fb76 == 0) {
    if (DAT_0080fb72 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    wsprintfA((LPSTR)&DAT_0080f33a,"%ssteditor.exe",&DAT_00807680);
  }
  else {
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&DAT_00807680,PTR_s_UPDATES__0079b114,
              &DAT_0080f126);
  }
  WinExec((LPCSTR)&DAT_0080f33a,1);
  ExceptionList = local_14;
  return 0;
}

