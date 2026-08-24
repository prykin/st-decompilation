#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] diagnostic_residue_void.
   Evidence: every direct caller kills EAX before reading it and at least one callee return path
   consists of a machine-proven void diagnostic wrapper followed only by an epilogue; machine CFG
   audit: used=0, ignored=2, unknown=0 */

void __thiscall FUN_006e9490(void *this,uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;
  byte *pbVar3;

  if ((STField<uint *>(this,0x310) <= param_1) ||
     (puVar1 = (uint *)(STField<int>(this,0x31c) + (int)param_1 * 0x114), (*puVar1 & 0x8000) == 0
     )) {
    if (param_1 != (uint *)0xffffffff) {
      FUN_006e8c50("SprSetPlaneMask");
    }
    return;
  }
  if ((int)puVar1[0x25] <= param_2) {
    FUN_006e91a0("SprSetPlaneMask");
    return;
  }
  if (param_3 != 0) {
    puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
    *puVar2 = *puVar2 & 0xfff7;
    return;
  }
  pbVar3 = (byte *)(puVar1[0x29] + 2 + param_2 * 4);
  *pbVar3 = *pbVar3 | 8;
  return;
}

