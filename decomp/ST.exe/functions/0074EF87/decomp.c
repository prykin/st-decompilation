
int __thiscall FUN_0074ef87(void *this,int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,&local_c,&local_14);
  if (iVar1 < 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined4 *)((int)this + 0x38) = local_c;
    *(undefined4 *)((int)this + 0x3c) = local_8;
    *(undefined4 *)((int)this + 0x40) = local_14;
    *(undefined4 *)((int)this + 0x44) = local_10;
    LeaveCriticalSection(lpCriticalSection);
    iVar1 = 0;
  }
  return iVar1;
}

