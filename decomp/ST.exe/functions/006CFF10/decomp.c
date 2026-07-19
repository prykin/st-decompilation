
int FUN_006cff10(int *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                uint param_7,uint param_8,uint param_9)

{
  uint *puVar1;
  undefined4 unaff_ESI;
  int exceptionCode;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  int *local_c;
  uint *local_8;
  
  local_c = param_1;
  if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  local_8 = FUN_006aac10(0x69);
  if (local_8 == (uint *)0x0) {
    exceptionCode = -2;
  }
  else {
    local_8[3] = param_8;
    local_8[4] = param_9;
    local_8[1] = param_4;
    local_8[2] = param_5;
    local_8[5] = 0x50;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    exceptionCode = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar1 = local_8;
    if (exceptionCode == 0) {
      exceptionCode =
           FUN_006b2330((uint)local_c,local_8,param_3,0x6d0020,param_6,param_7,(uint)local_8);
      if (exceptionCode != 0) {
        RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddsprmsg_c_007ee1b4,0x3f);
      }
      *param_2 = *puVar1;
      g_currentExceptionFrame = local_50.previous;
    }
    else {
      g_currentExceptionFrame = local_50.previous;
      FUN_006a5e90(local_8);
    }
  }
  if ((*(uint *)(*local_c + 8) & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(*local_c + 0x4f0));
  }
  return exceptionCode;
}

