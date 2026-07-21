
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0075FEE0 -> 00759F30 @ 0075FF24 */

void FUN_00759f30(undefined4 *param_1,AnonShape_0075FEE0_E0ABA202 *param_2)

{
  uint uVar1;

  for (uVar1 = (uint)param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  for (uVar1 = (uint)param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}

