#include "../../pseudocode_runtime.h"


void FUN_006c2050(void)

{
  int *piVar1;
  void **ppvVar2;

  if (PTR_008568b4 != nullptr) {
    /* ST_CALLSITE[006C206C]: CALL ESI */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
    /* ST_CALLSITE[006C2073]: CALL ESI */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    FUN_006b9890(&DAT_00854ff4);
    if (g_hThread_008568C0 != (HANDLE)0x0) {
      /* ST_CALLSITE[006C208A]: CALL dword ptr [0x0085bb6c] */
      TerminateThread(g_hThread_008568C0,0);
      g_hThread_008568C0 = (HANDLE)0x0;
    }
    /* ST_CALLSITE[006C20A1]: CALL ESI */
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
    /* ST_CALLSITE[006C20A8]: CALL ESI */
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    ppvVar2 = &PTR_00855008;
    do {
      if (((uint)ppvVar2[-4] & 1) != 0) {
        ppvVar2[-4] = (void *)((uint)ppvVar2[-4] & 0xfffffff7);
        piVar1 = ppvVar2[-1];
        if (piVar1 != nullptr) {
          /* ST_CALLSITE[006C20C5]: CALL dword ptr [ECX + 0x48] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*piVar1 + 0x48))(piVar1);
          piVar1 = *ppvVar2;
          if (piVar1 != nullptr) {
            /* ST_CALLSITE[006C20D1]: CALL dword ptr [EDX + 0x8] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*piVar1 + 8))(piVar1);
            *ppvVar2 = nullptr;
          }
          /* ST_CALLSITE[006C20DC]: CALL dword ptr [ECX + 0x8] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*(int *)ppvVar2[-1] + 8))(ppvVar2[-1]);
        }
      }
      ppvVar2 = ppvVar2 + 0x31;
    } while ((int)ppvVar2 < 0x856888);
    if (PTR_008568b8 != nullptr) {
      /* ST_CALLSITE[006C20FA]: CALL dword ptr [EDX + 0x48] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*PTR_008568b8 + 0x48))(PTR_008568b8);
      /* ST_CALLSITE[006C2105]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*PTR_008568b8 + 8))(PTR_008568b8);
      PTR_008568b8 = nullptr;
    }
    /* ST_CALLSITE[006C2116]: CALL dword ptr [EDX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*PTR_008568b4 + 8))(PTR_008568b4);
    PTR_008568b4 = nullptr;
    DAT_00856878 = 0;
    FreeAndNull(&g_lpBuffer_008568B0);
  }
  return;
}

