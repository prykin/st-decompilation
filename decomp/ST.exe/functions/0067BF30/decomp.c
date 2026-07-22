
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067BFD0 -> 0067BF30 @ 0067C068 */

int __fastcall FUN_0067bf30(AiPlrClassTy *param_1)

{
  uint uVar1;

  uVar1 = *(int *)&param_1->field_0xa4 * 0x41c64e6d + 0x3039;
  *(uint *)&param_1->field_0xa4 = uVar1;
  return (uVar1 >> 0x10 & 1) + 1;
}

