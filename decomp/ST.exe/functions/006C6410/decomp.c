
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006B94E0 -> 006C6410 @ 006B9577 */

int FUN_006c6410(AnonShape_006B94E0_A7E74DF0 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;

  iVar1 = param_1->field_04A0;
  uVar2 = *(uint *)&param_1->field_0x49c & 0xfffffffe;
  param_1->field_04A0 = param_2;
  *(uint *)&param_1->field_0x49c = uVar2;
  if (param_2 != -1) {
    *(uint *)&param_1->field_0x49c = uVar2 | 1;
  }
  return iVar1;
}

