#include "../../pseudocode_runtime.h"


void FUN_006c2050(void)

{
  int *piVar1;
  void **ppvVar2;

  if (DAT_008568b4 != nullptr) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    FUN_006b9890(&DAT_00854ff4);
    if (g_hThread_008568C0 != (HANDLE)0x0) {
      TerminateThread(g_hThread_008568C0,0);
      g_hThread_008568C0 = (HANDLE)0x0;
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    ppvVar2 = &PTR_00855008;
    do {
      if (((uint)ppvVar2[-4] & 1) != 0) {
        ppvVar2[-4] = (void *)((uint)ppvVar2[-4] & 0xfffffff7);
        piVar1 = ppvVar2[-1];
        if (piVar1 != nullptr) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*piVar1 + 0x48))(piVar1);
          piVar1 = *ppvVar2;
          if (piVar1 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*piVar1 + 8))(piVar1);
            *ppvVar2 = nullptr;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*(int *)ppvVar2[-1] + 8))(ppvVar2[-1]);
        }
      }
      ppvVar2 = ppvVar2 + 0x31;
    } while ((int)ppvVar2 < 0x856888);
    if (DAT_008568b8 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*DAT_008568b8 + 0x48))(DAT_008568b8);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*DAT_008568b8 + 8))(DAT_008568b8);
      DAT_008568b8 = nullptr;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*DAT_008568b4 + 8))(DAT_008568b4);
    DAT_008568b4 = nullptr;
    DAT_00856878 = 0;
    FreeAndNull(&g_lpBuffer_008568B0);
  }
  return;
}

