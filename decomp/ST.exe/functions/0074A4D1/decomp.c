
uint __thiscall FUN_0074a4d1(void *this,undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_retaddr;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(*(int *)this + 0x98))(param_1);
  if ((int)uVar1 < 0) {
    return -(uint)(uVar1 != 0x8004022b) & uVar1;
  }
  if (*(int *)((int)this + 0x14) == 1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x50))();
    *(undefined4 *)((int)this + 0xb4) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    if (*(int *)((int)this + 0x14) == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
      return 0;
    }
    *(undefined4 *)((int)this + 0xb4) = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
    /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x34))(unaff_retaddr);
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    SetEvent(*(HANDLE *)((int)this + 0x5c));
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*(int *)this + 0x2c))();
  if (iVar2 < 0) {
    *(undefined4 *)((int)this + 0xb4) = 0;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x50))();
    *(undefined4 *)((int)this + 0xb4) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    if (*(int *)((int)this + 0x14) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0xa8))(*(undefined4 *)((int)this + 0x6c));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x70))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x60))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x6c))();
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  }
  return 0;
}

