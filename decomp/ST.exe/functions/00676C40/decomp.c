#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] repair_false_machine_eax_return.
   Evidence: the earlier machine return was admitted only because a self-zeroing XOR/SUB was
   misclassified as reading the call result; every resolved caller now proves an exact EAX kill;
   machine CFG audit: used=0, ignored=8, unknown=0 */

void __cdecl FUN_00676c40(DArrayTy *param_1,callback_00676C40_p1 *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  void *arg_1;
  int iVar4;
  void *arg_2;
  uint uVar5;

  uVar3 = param_1->count;
  if (1 < uVar3) {
    do {
      bVar2 = false;
      uVar5 = 0;
      if ((int)(uVar3 - 1) < 1) {
        return;
      }
      do {
        if (uVar5 < uVar3) {
          arg_2 = DArrayAt<void>(param_1, uVar5);
        }
        else {
          arg_2 = nullptr;
        }
        uVar1 = uVar5 + 1;
        if (uVar1 < uVar3) {
          arg_1 = DArrayAt<void>(param_1, uVar1);
        }
        else {
          arg_1 = nullptr;
        }
        /* ST_CALLSITE[00676C88]: CALL dword ptr [EBP + 0xc] */
        iVar4 = (*param_2)(arg_1,arg_2);
        if (0 < iVar4) {
          FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)param_1,uVar5,uVar1);
          bVar2 = true;
        }
        uVar3 = param_1->count;
        uVar5 = uVar1;
      } while ((int)uVar1 < (int)(uVar3 - 1));
    } while (bVar2);
  }
  return;
}

