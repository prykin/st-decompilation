
uint __cdecl thunk_FUN_0067fd20(undefined4 param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 auStack_48 [16];
  undefined4 uStack_8;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  uVar1 = __setjmp3(auStack_48,0,unaff_ESI,pIVar3);
  if (uVar1 == 0) {
    uStack_8 = param_1;
    uVar1 = FUN_006ae1c0(DAT_00848a38,&uStack_8);
    uVar2 = FUN_006b5aa0(DAT_00848a3c,param_2);
    if (uVar1 != uVar2) {
      RaiseInternalException(-2,DAT_007ed77c,s___ai_ai_script_v_inl_007d55d8,0x203);
    }
    g_currentExceptionFrame = pIVar3;
    return uVar1;
  }
  g_currentExceptionFrame = pIVar3;
  if (-1 < (int)uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

