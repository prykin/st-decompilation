#include "../../pseudocode_runtime.h"


undefined4 FUN_006c1f90(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint local_8;
  local_8 = 0;
  if (PTR_008568b4 == nullptr) {
    return 0xffffffcc;
  }
  if ((param_1 < 0) || (0x1f < param_1)) {
    return 0xfffffffc;
  }
  /* ST_CALLSITE[006C1FC3]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  piVar1 = DAT_00854ff4;
  if (DAT_00854ff4 != nullptr) {
    do {
      if (piVar1[0xe] < 0) {
        piVar2 = (int *)*piVar1;

        FUN_006b98c0((int *)&DAT_00854ff4,piVar1);
        FUN_006a5e90((short *)piVar1);
      }
      else {
        if ((piVar1[0xd] <= param_1) && (param_1 <= piVar1[0xe])) {
          local_8 = 1;
          break;
        }
        piVar2 = (int *)*piVar1;
      }
      piVar1 = piVar2;
      if (piVar2 == nullptr) {
        /* ST_CALLSITE[006C2005]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
        return 0;
      }
    } while( true );
  }
  /* ST_CALLSITE[006C2023]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  return local_8;
}

