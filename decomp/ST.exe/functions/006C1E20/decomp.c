
void FUN_006c1e20(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;

  if ((DAT_008568b4 != 0) && (g_hThread_008568C0 != (HANDLE)0x0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
    if (DAT_008568c4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
      FUN_006b9890(&DAT_00854ff4);
      piVar3 = &DAT_00855004;
      do {
        if ((piVar3[-3] & 1U) != 0) {
          piVar3[-3] = piVar3[-3] & 8;
          piVar1 = (int *)*piVar3;
          if (piVar1 != (int *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*piVar1 + 0x48))(piVar1);
            piVar1 = (int *)piVar3[1];
            if (piVar1 != (int *)0x0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(*piVar1 + 8))(piVar1);
              piVar3[1] = 0;
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)*piVar3 + 8))((int *)*piVar3);
          }
          puVar4 = (uint *)(piVar3 + -3);
          for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
        }
        piVar3 = piVar3 + 0x31;
      } while ((int)piVar3 < 0x856884);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
      SuspendThread(g_hThread_008568C0);
      DAT_008568c4 = (uint)(DAT_008568c4 == 0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
  }
  return;
}

