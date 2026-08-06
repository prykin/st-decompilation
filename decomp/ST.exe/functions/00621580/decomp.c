#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004CEB00 -> 00621580 @ 004CEDDB; /TLOBaseTy+0x24 */

void __thiscall FUN_00621580(void *this,byte *param_1,int param_2)

{
  uint uVar1;
  int local_8;

  local_8 = 0;
  if ((byte *)(uint)DAT_0080874d != param_1) {
    return;
  }
  if ((STField<int>(this,0x10a) == 0) ||
     (uVar1 = thunk_FUN_00621640(this,param_2,&local_8), (int)uVar1 < 0)) {
    uVar1 = thunk_FUN_006216e0(this,param_2);
  }
  if ((local_8 != 0) && (-1 < (int)uVar1)) {
    if (10 < g_playSystem_00802A38->field_00E4 - STField<int>(this,0x106)) {
      thunk_FUN_00621780(this,uVar1);
      return;
    }
    STField<undefined1>(this,0x105) = 1;
  }
  return;
}

