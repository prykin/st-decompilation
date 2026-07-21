
int FUN_00749ec2(AnonShape_00749EC2_C411FB81 *param_1)

{
  AnonShape_00749EC2_C411FB81 *lpCriticalSection;
  undefined1 *this;
  int *piVar1;
  int iVar2;
  int iVar3;

  lpCriticalSection = param_1 + 1;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = param_1->field_0008;
  if (iVar2 != 1) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1->field_006C + 0x18) != 0) {
      iVar3 = FUN_007470e5((AnonShape_007470E5_0A8F5E67 *)param_1);
      if (iVar3 < 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return iVar3;
      }
      this = &param_1[-1].field_0x64;
      FUN_0074a81d(this,1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x80))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x28))(1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x6c))();
      FUN_0074a760((int)this);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar1 = *(int **)(param_1->field_006C + 0x9c);
      if (piVar1 != (int *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 0x14))(piVar1);
      }
      if (iVar2 == 0) {
        param_1->field_0054 = 0;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0x70))();
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*(int *)this + 0x30))(iVar2);
      goto LAB_00749f79;
    }
    param_1->field_0008 = 1;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*(int *)&param_1[-1].field_0x64 + 0x30))(1);
LAB_00749f79:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar2;
}

