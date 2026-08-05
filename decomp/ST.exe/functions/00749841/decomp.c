
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

int FUN_00749841(RecoveredSourceFamily_dibcopy *param_1)

{
  int iVar1;

  iVar1 = param_1->field_0008;
  if (iVar1 < 0) {
    iVar1 = -((param_1->field_0004 * (uint)param_1->field_000E + 0x1f >> 3 & 0x1ffffffc) * iVar1);
  }
  else {
    iVar1 = (param_1->field_0004 * (uint)param_1->field_000E + 0x1f >> 3 & 0x1ffffffc) * iVar1;
  }
  return iVar1;
}

