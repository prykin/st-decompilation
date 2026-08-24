#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] repair_false_machine_eax_return.
   Evidence: the earlier machine return was admitted only because a self-zeroing XOR/SUB was
   misclassified as reading the call result; every resolved caller now proves an exact EAX kill;
   machine CFG audit: used=0, ignored=3, unknown=0 */

void __thiscall FUN_00672af0(void *this,byte param_1)

{
  uint uVar1;

  uVar1 = FUN_006c8950(STReplaceLowWord((uint32_t)(this), (uint16_t)((undefined2)DAT_007d2d24)),0x1000,param_1
                      );
  DAT_007d2d24 = uVar1 & 0xffff;
  return;
}

