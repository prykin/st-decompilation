#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __cdecl
FUN_006a1410(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined *param_6,
            undefined4 param_7)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  undefined2 local_8;

  local_c = 0;
  local_8 = 0;
  if (param_6 != nullptr) {
    /* ST_CALLSITE[006A1439]: CALL EAX */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (*(code *)param_6)(param_2,param_3,param_4,param_7);
  }
  iVar3 = thunk_FUN_006a1370(param_1,param_2,param_3,param_4,(int)&local_14);
  if (param_5 == 0xff) {
    iVar4 = (int)(short)iVar3;
    iVar3 = iVar4;
    if ((int)(iVar4 - (local_10 >> 8 & 0xf)) < iVar4) {
      do {
        if (param_6 != nullptr) {
          /* ST_CALLSITE[006A1490]: CALL EAX */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (*(code *)param_6)(param_2,param_3,iVar3,param_7);
        }
        if (-1 < param_2) {
          if ((((param_2 < *param_1) && (-1 < param_3)) && (param_3 < param_1[1])) &&
             ((-1 < iVar3 && (iVar3 < 6)))) {
            *(undefined2 *)
             ((int)param_1 + ((param_1[1] * iVar3 + param_3) * *param_1 + 2 + param_2) * 6) = 0;
          }
          if (((param_2 < *param_1) && (-1 < param_3)) &&
             ((param_3 < param_1[1] && ((-1 < iVar3 && (iVar3 < 6)))))) {
            *(undefined2 *)
             ((int)param_1 + ((param_1[1] * iVar3 + param_3) * *param_1 + param_2) * 6 + 10) = 0;
          }
          if ((((param_2 < *param_1) && (-1 < param_3)) && (param_3 < param_1[1])) &&
             ((-1 < iVar3 && (iVar3 < 6)))) {
            *(undefined2 *)
             ((int)param_1 + ((param_1[1] * iVar3 + param_3) * *param_1 + param_2) * 6 + 8) = 0;
          }
        }
        iVar3 = iVar3 + -1;
      } while ((int)(iVar4 - (local_10 >> 8 & 0xf)) < iVar3);
    }
    if ((local_10 & 0x1000) != 0) {
      local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(1));
      puVar1 = (undefined4 *)((int)param_1 + (*param_1 * param_3 + param_2) * 6 + 8);
      *puVar1 = local_c;
      *(undefined2 *)(puVar1 + 1) = 0x1100;
      return;
    }
  }
  else {
    local_c = local_14;
    if (param_5 == 0) {
      STPiece<2,2>(local_c) = (undefined2)(local_14 >> 0x10);
      local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(1));
    }
    else if (param_5 == 1) {
      local_c = local_14 & 0xffff;
    }
    puVar2 = (uint *)((int)param_1 + (*param_1 * param_3 + param_2) * 6 + 8);
    *puVar2 = local_c;
    *(undefined2 *)(puVar2 + 1) = (undefined2)local_10;
  }
  return;
}

