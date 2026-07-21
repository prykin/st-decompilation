
void FUN_006bb980(AnonShape_006BB980_E41494A1 *param_1)

{
  if (param_1->field_0474 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1->field_0040 + 0x80))(param_1->field_0040,0);
    param_1->field_0474 = 0;
    param_1->field_0478 = 0;
    if ((param_1->field_0008 & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&param_1[1].field_0x74);
    }
  }
  return;
}

