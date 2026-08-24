#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005A1920 -> 006C7BB0 @ 005A1C39 */

undefined1 * FUN_006c7bb0(int *param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  byte *puVar2;
  byte *puVar3;
  int iVar4;

  iVar1 = STField<int>(param_1,0x1a);
  iVar4 = STField<int>(param_1,0x1e);
  if (param_2 == nullptr) {
    param_2 = Library::DKW::LIB::MemAlloc(iVar1 * 4);
    if (param_2 == nullptr) {
      return nullptr;
    }
  }
  if (iVar1 == 2) {
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[6] = 0xff;
    param_2[5] = 0xff;
    param_2[4] = 0xff;
    param_2[7] = 0;
  }
  else if (0 < iVar1) {
    puVar2 = param_2 + 2;
    puVar3 = (undefined1 *)(iVar4 + 2);
    iVar4 = iVar1;
    do {
      puVar2[-2] = puVar3[-2];
      puVar2[-1] = puVar3[-1];
      *puVar2 = *puVar3;
      puVar2[1] = 0;
      puVar2 = puVar2 + 4;
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + 3;
    } while (iVar4 != 0);
  }
  if (param_3 != nullptr) {
    *param_3 = iVar1;
  }
  return param_2;
}

