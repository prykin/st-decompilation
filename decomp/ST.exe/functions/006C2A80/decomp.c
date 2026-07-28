
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 006C2A80 @ 0056B28E

   [STPrototypeApplier] Propagated return.
   Evidence: 006C2A80 returns zeroed full register at 006C2AAD @ 006C2AB1

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0056ADC0 -> 006C2A80 @ 0056B28E; data at 0080759C */

uint FUN_006c2a80(int *param_1,DDXContext *param_2)

{
  undefined4 *puVar1;

  *param_1 = 0;
  puVar1 = Library::DKW::LIB::FUN_006aac10(0xb8);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xfffffffe;
  }
  puVar1[1] = param_2;
  *param_1 = (int)puVar1;
  return 0;
}

