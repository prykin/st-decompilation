#include "../../pseudocode_runtime.h"


void FUN_006c1ba0(int param_1)

{
  int *piVar1;
  int *piVar2;

  if (DAT_008568b4 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    if ((-1 < param_1) && (param_1 < 0x20)) {
      if ((*(uint *)(&DAT_00854ff8 + param_1 * 0xc4) & 1) != 0) {
        *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) =
             *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) & 0xfffffff7;
        piVar1 = (int *)(&DAT_00855004)[param_1 * 0x31];
        if (piVar1 != (int *)0x0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*piVar1 + 0x48))(piVar1);
          piVar1 = (int *)(&DAT_00855008)[param_1 * 0x31];
          if (piVar1 != (int *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*piVar1 + 8))(piVar1);
            (&DAT_00855008)[param_1 * 0x31] = 0;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)(&DAT_00855004)[param_1 * 0x31] + 8))
                    ((int *)(&DAT_00855004)[param_1 * 0x31]);
          piVar1 = DAT_00854ff4;
          while (piVar1 != (int *)0x0) {
            if ((piVar1[0xe] < 0) || ((piVar1[0xd] <= param_1 && (param_1 <= piVar1[0xe])))) {
              piVar2 = (int *)*piVar1;
              FUN_006b98c0((int *)&DAT_00854ff4,piVar1);
              FUN_006a5e90((short *)piVar1);
              piVar1 = piVar2;
            }
            else {
              piVar1 = (int *)*piVar1;
            }
          }
        }
        memset((uint *)(&DAT_00854ff8 + param_1 * 0xc4), 0, 0xc4); /* compiler bulk-zero initialization */
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  }
  return;
}

