#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=2, ignored=5, unknown=0 */

ushort * __thiscall FUN_0067bf60(void *this,char param_1,uint param_2)

{
  ushort *puVar1;

  puVar1 = thunk_FUN_0067bd00(STField<DArrayTy *>(this,0x6ad),param_2);
  if (puVar1 != nullptr) {
    if (param_1 != -1) {
      if (param_1 == '\0') {
        puVar1[0xd] = puVar1[0xd] + 1;
        return puVar1;
      }
      if (param_1 != '\x01') {
        return puVar1;
      }
    }
    if (0 < (short)puVar1[0xd]) {
      puVar1[0xd] = puVar1[0xd] - 1;
    }
  }
  return puVar1;
}

