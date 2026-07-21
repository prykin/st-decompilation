
void __fastcall FUN_006d6090(AnonShape_006D6090_8F63898D *param_1)

{
  int iVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;

  if (param_1 == (AnonShape_006D6090_8F63898D *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)&param_1->field_0x10;
  }
  EnterCriticalSection(lpCriticalSection);
  iVar1 = param_1->field_002C;
  while (iVar1 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(int *)(param_1->field_005C + 0x310) == 0) &&
       (piVar2 = (int *)param_1->field_0064, piVar2 != (int *)0x0)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1->field_0064 = 0;
    }
    piVar2 = (int *)param_1->field_0028;
    if (piVar2 != (int *)0x0) {
      param_1->field_0028 = piVar2[7];
      param_1->field_002C = param_1->field_002C + -1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar2 + 0x54))(1);
    }
    iVar1 = param_1->field_002C;
  }
  param_1->field_003C = 0;
  param_1->field_0064 = 0;
  param_1->field_006C = 0;
  param_1->field_0068 = 0;
  param_1->field_0070 = 0;
  LeaveCriticalSection(lpCriticalSection);
  return;
}

