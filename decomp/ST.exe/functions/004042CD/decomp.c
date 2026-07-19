
uint __cdecl thunk_FUN_0067fdf0(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  undefined4 unaff_ESI;
  undefined4 *puVar2;
  void *unaff_EDI;
  InternalExceptionFrame IStack_48;
  
  IStack_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_48;
  uVar1 = Library::MSVCRT::__setjmp3(IStack_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (uVar1 != 0) {
    g_currentExceptionFrame = IStack_48.previous;
    if (-1 < (int)uVar1) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  uVar1 = thunk_FUN_0067fc10(param_2);
  if ((int)uVar1 < 0) {
    uVar1 = thunk_FUN_0067fd20(param_1,(char *)param_2);
    g_currentExceptionFrame = IStack_48.previous;
    return uVar1;
  }
  if (uVar1 < *(uint *)(DAT_00848a38 + 0xc)) {
    puVar2 = (undefined4 *)(*(int *)(DAT_00848a38 + 8) * uVar1 + *(int *)(DAT_00848a38 + 0x1c));
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 == (undefined4 *)0x0) {
    RaiseInternalException(-2,DAT_007ed77c,s___ai_ai_script_v_inl_007d55d8,0x21a);
  }
  thunk_FUN_0064a800(puVar2);
  *puVar2 = param_1;
  g_currentExceptionFrame = IStack_48.previous;
  return uVar1;
}

