
int FUN_0074862e(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  LPVOID *ppvVar2;

  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x30);
    EnterCriticalSection(lpCriticalSection);
    ppvVar2 = (LPVOID *)(param_1 + 4);
    if ((*ppvVar2 == (LPVOID)0x0) && (iVar1 = Library::MSVCRT::FUN_00746b90(ppvVar2), iVar1 < 0)) {
      LeaveCriticalSection(lpCriticalSection);
      return iVar1;
    }
    *param_2 = *ppvVar2;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)*ppvVar2 + 4))(*ppvVar2);
    LeaveCriticalSection(lpCriticalSection);
    iVar1 = 0;
  }
  return iVar1;
}

