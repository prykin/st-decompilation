#include "../../pseudocode_runtime.h"


void FUN_006bbf50(int *param_1,undefined4 param_2)

{
  int iVar1;

  if ((param_1[3] & 0x400U) != 0) {
    /* ST_CALLSITE[006BBF6D]: CALL dword ptr [ECX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (*(code *)**(undefined4 **)param_1[0xd])
                      ((undefined4 *)param_1[0xd],&DAT_0079fc78,&param_1);
    if ((iVar1 == 0) && (param_1 != nullptr)) {
      /* ST_CALLSITE[006BBF83]: CALL dword ptr [ECX + 0x10] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1 + 0x10))(param_1,1,param_2);
      if (param_1 != nullptr) {
        /* ST_CALLSITE[006BBF90]: CALL dword ptr [ECX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*param_1 + 8))(param_1);
      }
    }
  }
  return;
}

