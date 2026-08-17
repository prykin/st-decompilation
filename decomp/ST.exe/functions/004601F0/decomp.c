#include "../../pseudocode_runtime.h"


int __thiscall FUN_004601f0(void *this,int param_1)

{
  int iVar1;

  if (param_1 == 0) {
    STField<undefined4>(this,0xf4) = 0;
  }
  /* ST_CALLSITE[00460206]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
  iVar1 = STBoatC::sub_0045FF50(this,param_1);
  if ((iVar1 == 2) && (STField<int>(this,0xf4) == 1)) {
    /* ST_CALLSITE[0046021D]: CALL dword ptr [EAX + 0x20] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0x20))();
    STField<undefined4>(this,0xf4) = 0;
    iVar1 = 0;
  }
  return iVar1;
}

