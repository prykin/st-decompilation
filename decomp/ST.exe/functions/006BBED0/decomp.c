#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=3, ignored=0, unknown=0 */

undefined4 FUN_006bbed0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_5c;

  bVar1 = false;
  local_5c = 0;
  local_70 = 0;
  local_80[0] = 0x7c;
  while( true ) {
    /* ST_CALLSITE[006BBEFA]: CALL dword ptr [EAX + 0x64] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*param_1 + 100))(param_1,param_4,local_80,0x21,0);
    if (((iVar2 != -0x7789ff60) && (iVar2 != -0x7789fe52)) || (bVar1)) break;
    /* ST_CALLSITE[006BBF11]: CALL dword ptr [0x0085bc6c] */
    Sleep(2);
    bVar1 = true;
  }
  if (iVar2 == 0) {
    *param_2 = local_5c;
    *param_3 = local_70;
    return 0;
  }
  *param_2 = 0;
  *param_3 = 0;
  return iVar2;
}

