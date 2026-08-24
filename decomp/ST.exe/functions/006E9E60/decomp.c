#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] diagnostic_residue_void.
   Evidence: every direct caller kills EAX before reading it and at least one callee return path
   consists of a machine-proven void diagnostic wrapper followed only by an epilogue; machine CFG
   audit: used=0, ignored=1, unknown=0 */

void __thiscall FUN_006e9e60(void *this,uint *param_1,uint param_2)

{
  uint *puVar1;
  ushort *puVar2;

  if ((param_1 < STField<uint *>(this,0x310)) &&
     (puVar1 = (uint *)(STField<int>(this,0x31c) + (int)param_1 * 0x114), (*puVar1 & 0x8000) != 0
     )) {
    if (puVar1[0x28] != 0) {
      if (puVar1[0x25] <= param_2) {
        FUN_006e91a0("SprPlaneHide1");
        return;
      }
      if (*(int *)(puVar1[0x28] + 4 + param_2 * 8) != 0) {
        puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
        *puVar2 = *puVar2 & 0x7fff;
        return;
      }
    }
  }
  else if (param_1 != (uint *)0xffffffff) {
    FUN_006e8c50("SprPlaneHide1");
  }
  return;
}

