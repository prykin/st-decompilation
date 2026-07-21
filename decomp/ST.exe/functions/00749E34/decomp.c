
undefined4 FUN_00749e34(AnonShape_00749E34_D5356433 *param_1)

{
  undefined1 *this;
  int *piVar1;

  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if (param_1->field_0008 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1->field_006C + 0x18) == 0) {
      param_1->field_0008 = 0;
    }
    else {
      FUN_0074706a((int)param_1);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar1 = *(int **)(param_1->field_006C + 0x9c);
      if (piVar1 != (int *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 0x18))(piVar1);
      }
      this = &param_1[-1].field_0x64;
      FUN_0074a81d(this,1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x80))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x28))(0);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 100))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x6c))();
      SetEvent(param_1->field_0050);
      FUN_00749d5f((int)this);
      param_1->field_0054 = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return 0;
}

