
undefined4 __thiscall FUN_00750469(void *this,uint param_1,int param_2,int *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  int iVar3;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  EnterCriticalSection(lpCriticalSection);
  iVar3 = 0;
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x40)) {
    iVar2 = FUN_0074ded7(*(int *)((int)this + 0x38));
  }
  if (0 < *(int *)((int)this + 0x28)) {
    iVar3 = FUN_0074ded7(*(int *)((int)this + 0x20));
  }
  if ((iVar3 == 0) ||
     (iVar1 = FUN_0074fea4(this,*(uint *)(iVar3 + 0x18),*(int *)(iVar3 + 0x1c),0), iVar1 == 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) <= param_2)) &&
       ((*(int *)(iVar2 + 0x1c) < param_2 || (*(uint *)(iVar2 + 0x18) <= param_1)))) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)(iVar3 + 0xc) + 4))(iVar3 + 0xc);
      *param_3 = iVar2;
      goto LAB_0075051f;
    }
    if ((*(int *)((int)this + 100) == 0) || (iVar3 == 0)) {
LAB_0075052c:
      LeaveCriticalSection(lpCriticalSection);
      return 0x80040216;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)((int)this + 0x6c) + param_2 + (uint)CARRY4(*(uint *)((int)this + 0x68),param_1)
    ;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((iVar2 < *(int *)(iVar3 + 0x1c)) ||
       ((iVar2 <= *(int *)(iVar3 + 0x1c) &&
        (*(uint *)((int)this + 0x68) + param_1 < *(uint *)(iVar3 + 0x18))))) goto LAB_0075052c;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)(iVar3 + 0xc) + 4))(iVar3 + 0xc);
  }
  *param_3 = iVar3;
LAB_0075051f:
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

