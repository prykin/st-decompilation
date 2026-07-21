
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void FUN_00752cf0(AnonShape_006B5B10_E0D06CF1 *param_1,int param_2,int param_3,char param_4,
                 uint *param_5)

{
  uint uVar1;
  
  if (param_2 == 0) {
    param_2 = FUN_006b4fa0((int)param_1);
  }
  uVar1 = (uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc;
  FUN_00752a60((param_1->field_0008 + -1) * uVar1 + param_2,-uVar1,param_1->field_0004,
               param_1->field_0008,param_3,param_4,param_5);
  return;
}

