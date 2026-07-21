
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006C5A10 -> 006CE6C0 @ 006C5A60 */

undefined4 * FUN_006ce6c0(ushort *param_1,uint param_2,ushort param_3)

{
  uint uVar1;
  ushort *puVar2;

  if (param_2 != 0) {
    puVar2 = param_1;
    for (uVar1 = param_2 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(uint *)puVar2 = CONCAT22(param_3,param_3);
      puVar2 = puVar2 + 2;
    }
    for (uVar1 = (uint)((param_2 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = param_3;
      puVar2 = puVar2 + 1;
    }
    return (undefined4 *)param_1;
  }
  return (undefined4 *)param_1;
}

