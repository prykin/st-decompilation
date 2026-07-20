
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0070CAF0 -> 0070C9E0 @ 0070CAFF */

void __cdecl FUN_0070caf0(int param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0070c9e0(param_1,(char)param_3,(uint *)&param_3);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = (uint)param_3;
  return;
}

