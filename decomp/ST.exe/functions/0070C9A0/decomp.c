
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

undefined1 __cdecl FUN_0070c9a0(AnonShape_006B5B10_E0D06CF1 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_006b4fa0((int)param_1);
  return *(undefined1 *)
          (((uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
           ((param_1->field_0008 - param_3) + -1) + param_2 + iVar1);
}

