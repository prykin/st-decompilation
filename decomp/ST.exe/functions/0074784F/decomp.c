
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

undefined4 FUN_0074784f(AnonShape_00747822_A1E67AF6 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1->field_000C + 0x14))();
  param_1->field_0010 = uVar1;
  uVar1 = (**(code **)(*param_1->field_000C + 0x18))();
  param_1->field_0004 = 0;
  param_1->field_0008 = uVar1;
  return 0;
}

