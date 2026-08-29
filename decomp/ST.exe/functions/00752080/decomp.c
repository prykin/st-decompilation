
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00752080 -> EXTERNAL:0000000E @ 00752090

   [STPrototypeApplier] Propagated return.
   Evidence: 00752080 returns return of KERNEL32.DLL::_llseek @ 00752097 */

LONG FUN_00752080(RecoveredRecord_00752080_C15D4E0F *param_1,LONG lOffset)

{
  LONG LVar1;

  /* ST_CALLSITE[00752090]: CALL dword ptr [0x0085bb64] */
  LVar1 = _llseek(param_1->field_0032,lOffset,0);
  return LVar1;
}

