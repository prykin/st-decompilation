
/* [STPrototypeApplier] Propagated return.
   Evidence: 0067F5B0 returns zeroed full register at 0067F5C7 @ 0067F5CA */

uint __cdecl FUN_0067f5b0(byte *param_1)

{
  uint *puVar1;

  puVar1 = (uint *)thunk_FUN_0067f4f0(param_1);
  if (puVar1 != (uint *)0x0) {
    return *puVar1;
  }
  return 0;
}

