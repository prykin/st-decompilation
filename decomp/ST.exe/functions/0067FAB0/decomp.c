#include "../../pseudocode_runtime.h"


uint __cdecl FUN_0067fab0(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;

  uVar1 = thunk_FUN_0067f950(param_1);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if ((uVar1 < g_array_00848A30->count) &&
     (puVar2 = DArrayAt<undefined4>(g_array_00848A30, uVar1),
     puVar2 != nullptr)) {
    *puVar2 = param_2;
    return uVar1;
  }
  return 0xfffffffc;
}

