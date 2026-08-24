#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=2, ignored=0, unknown=0 */

int FUN_0054cbb0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;

  iVar4 = 0;
  iVar1 = -4;
  if (DAT_007c8238 != 0) {
    puVar3 = &DAT_007c8238;
    iVar2 = DAT_007c8238;
    while (iVar2 != param_1) {
      iVar2 = puVar3[2];
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + 1;
      if (iVar2 == 0) {
        return iVar1;
      }
    }
    if (param_2 != nullptr) {
      *param_2 = *(undefined4 *)(iVar4 * 8 + 0x7c823c);
    }
    iVar1 = 0;
  }
  return iVar1;
}

