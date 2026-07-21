
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

int FUN_00757450(AnonShape_00753C80_4C8E695D *param_1,int param_2)

{
  short sVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1->field_0008 + 0x34) + param_1->field_0010;
  if (param_2 == -1) {
    *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = 0;
    return 0;
  }
  if (param_2 < *(short *)(iVar2 + 8)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sVar1 = *(short *)(param_1->field_000C + 0x34);
    if (sVar1 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(param_1->field_000C + 8))(iVar2 + 0x18 + param_2);
    }
    else {
      iVar2 = (int)sVar1;
    }
    param_2 = param_2 + 8 + iVar2;
  }
  *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = param_2;
  return param_2;
}

