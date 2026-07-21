
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void FUN_00753b80(AnonShape_00750F20_F8C16F98 *param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = *(undefined4 *)(param_1->field_000C + 0x24);
  }
  param_1->field_0010 = param_2;
  *(undefined4 *)(param_1->field_000C + 0x40 + param_3 * 8) =
       *(undefined4 *)(*(int *)(param_1->field_0008 + 0x34) + param_1->field_0010);
  return;
}

