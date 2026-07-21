
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006A55D0 -> EXTERNAL:00000023 @ 006A55E1 | 006A56B0 -> 006A55D0 @ 006A56EA */

undefined4 __cdecl FUN_006a55d0(void *param_1,UINT_PTR ucb,int param_3)

{
  BOOL BVar1;

  if ((param_1 == (void *)0x0) || (BVar1 = IsBadReadPtr(param_1,ucb), BVar1 != 0)) {
    return 0;
  }
  if ((param_3 != 0) && (BVar1 = IsBadWritePtr(param_1,ucb), BVar1 != 0)) {
    return 0;
  }
  return 1;
}

