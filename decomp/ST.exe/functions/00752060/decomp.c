
/* [STPrototypeApplier] Propagated return.
   Evidence: 00752060 returns return of KERNEL32.DLL::_llseek @ 00752075 */

LONG FUN_00752060(RecoveredRecord_00752060_B3F98700 *param_1)

{
  LONG LVar1;

  /* ST_CALLSITE[0075206E]: CALL dword ptr [0x0085bb64] */
  LVar1 = _llseek(param_1->field_0032,0,1);
  return LVar1;
}

