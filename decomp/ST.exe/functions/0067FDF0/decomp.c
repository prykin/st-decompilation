
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00683C70 -> 0067FDF0 @ 00689D7E */

uint __cdecl FUN_0067fdf0(int *param_1,byte *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  uVar1 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (uVar1 != 0) {
    g_currentExceptionFrame = local_48.previous;
    if (-1 < (int)uVar1) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  uVar1 = thunk_FUN_0067fc10(param_2);
  if ((int)uVar1 < 0) {
    uVar1 = thunk_FUN_0067fd20(param_1,(char *)param_2);
    g_currentExceptionFrame = local_48.previous;
    return uVar1;
  }
  if (uVar1 < PTR_00848a38->count) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_00848a38, uVar1) (runtime stride) */
    puVar2 = (undefined4 *)(PTR_00848a38->elementSize * uVar1 + (int)PTR_00848a38->data);
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 == (undefined4 *)0x0) {
    RaiseInternalException(-2,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x21a);
  }
  thunk_FUN_0064a800(puVar2);
  *puVar2 = param_1;
  g_currentExceptionFrame = local_48.previous;
  return uVar1;
}

