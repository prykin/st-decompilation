
int FUN_0074706a(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;

  iVar2 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)(param_1 + -0xc);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (**(code **)(*(int *)(param_1 + -0xc) + 0x18))();
    param_1 = 0;
    if (0 < iVar3) {
      do {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        piVar4 = (int *)(**(code **)(*piVar1 + 0x1c))(param_1);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((piVar4[6] != 0) && (iVar5 = (**(code **)(*piVar4 + 0x18))(), iVar5 < 0)) &&
           (-1 < local_8)) {
          local_8 = iVar5;
        }
        param_1 = param_1 + 1;
      } while (param_1 < iVar3);
    }
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  LeaveCriticalSection(lpCriticalSection);
  return local_8;
}

