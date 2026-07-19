
undefined4 __cdecl FUN_006809f0(uint *param_1)

{
  void *unaff_ESI;
  InternalExceptionFrame *pIVar1;
  undefined4 local_58 [16];
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  byte *local_8;
  
  pIVar1 = g_currentExceptionFrame;
  local_c = 0;
  local_8 = (byte *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa4;
  local_14 = __setjmp3(local_58,0,unaff_ESI,pIVar1);
  if (local_14 == 0) {
    local_18 = param_1[2];
    local_10 = local_14;
    local_8 = (byte *)FUN_006c8910(param_1,(int *)&local_c);
    thunk_FUN_00680890(0x17,local_8,local_c,&local_18);
    if (local_8 != (byte *)0x0) {
      FUN_006ab060(&local_8);
    }
    g_currentExceptionFrame = pIVar1;
    return 1;
  }
  g_currentExceptionFrame = pIVar1;
  if (local_8 != (byte *)0x0) {
    FUN_006ab060(&local_8);
  }
  RaiseInternalException(local_14,0,s_E____titans_ai_ai_script_cpp_007d5604,0x124);
  return 0;
}

