
undefined4 thunk_FUN_00575a10(HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 ***pppuStack_60;
  undefined4 auStack_5c [16];
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_0079b118;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff8c;
  ExceptionList = &pvStack_14;
  DAT_00807618 = GetModuleHandleA(s_st_string_dll_007caafc);
  if (DAT_00807618 == (HMODULE)0x0) {
    ExceptionList = pvStack_14;
    return 0xffffffff;
  }
  puVar1 = (uint *)FUN_006b0140(100,DAT_00807618);
  FUN_0072f260(0,puVar1);
  FUN_006ad190(0x18,s_dbg_msg_rpt_007caaec,0);
  thunk_FUN_004e82b0();
  uStack_8 = 0;
  pppuStack_60 = DAT_00858df8;
  DAT_00858df8 = &pppuStack_60;
  iVar2 = __setjmp3(auStack_5c,2,FUN_0072da21,0);
  if (iVar2 == 0) {
    puStack_1c = &stack0xffffff8c;
    iVar2 = thunk_FUN_0056adc0(param_1,param_2,param_3,param_4);
    if (iVar2 != 1) {
      ExceptionList = pvStack_14;
      return 0;
    }
    FUN_006e4fc0();
    DAT_00858df8 = pppuStack_60;
  }
  else {
    DAT_00858df8 = pppuStack_60;
    puStack_1c = &stack0xffffff8c;
    if ((iVar2 != -0x5001fff6) &&
       ((iVar2 < -0x5001fff4 || (puStack_1c = &stack0xffffff8c, -0x5001fff3 < iVar2)))) {
      puStack_1c = &stack0xffffff8c;
      MessageBoxA(DAT_00806748,s_Internal_error_007caad8,s_Internal_error_007caad8,0);
    }
  }
  uStack_8 = 0xffffffff;
  if (DAT_0080fb76 == 0) {
    if (DAT_0080fb72 == 0) {
      ExceptionList = pvStack_14;
      return 0;
    }
    wsprintfA((LPSTR)&DAT_0080f33a,s__ssteditor_exe_007caac4,&DAT_00807680);
  }
  else {
    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_UPDATES__0079b114,
              &DAT_0080f126);
  }
  WinExec((LPCSTR)&DAT_0080f33a,1);
  ExceptionList = pvStack_14;
  return 0;
}

