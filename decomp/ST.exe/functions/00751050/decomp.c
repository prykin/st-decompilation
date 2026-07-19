
uint FUN_00751050(uint *param_1,ushort *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  int exceptionCode;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 local_48 [16];
  uint local_8;
  
  uVar1 = FUN_00753df0(param_1[1],1,param_3,param_4);
  pIVar2 = g_currentExceptionFrame;
  if ((uVar1 != 0xffffffff) && (param_2 != (ushort *)0x0)) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
    local_8 = uVar1;
    exceptionCode = __setjmp3(local_48,0,unaff_ESI,pIVar2);
    uVar1 = local_8;
    if (exceptionCode != 0) {
      g_currentExceptionFrame = pIVar2;
      FUN_00753ce0(param_1[1],local_8);
      RaiseInternalException(exceptionCode,0,s_E__DKW_DB_C_dblrput_c_007f2ae8,0x14);
      return 0xffffffff;
    }
    FUN_00753d90(*param_1,param_2,local_8);
    g_currentExceptionFrame = pIVar2;
  }
  return uVar1;
}

