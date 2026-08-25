#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] diagnostic_residue_void.
   Evidence: every direct caller kills EAX before reading it and at least one callee return path
   consists of a machine-proven void diagnostic wrapper followed only by an epilogue; machine CFG
   audit: used=0, ignored=16, unknown=0 */

void __thiscall FUN_006ea340(void *this,uint param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;

  if (param_1 < STField<uint>(this,0x310)) {
    iVar2 = STField<int>(this,0x31c);
    iVar1 = iVar2 + param_1 * 0x114;
    if ((*(uint *)(iVar2 + param_1 * 0x114) & 0x8000) != 0) {
      if (((-1 < param_2) && (param_2 < (int)STField<uint>(this,0x310))) &&
         ((*(uint *)(iVar2 + param_2 * 0x114) & 0x8000) != 0)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(uint *)(iVar2 + param_2 * 0x114 + 0x94) <= param_3) {
          FUN_006e91a0("SprSetLevPlane");
          return;
        }
        STField<int>(iVar1,0x1C) = param_2;
        STField<uint>(iVar1,0x20) = param_3;
        STField<uint>(iVar1,0x4) = STField<uint>(iVar1,0x4) & 0xffffffcf | 0x40;
        return;
      }
      goto LAB_006ea3ca;
    }
  }
  if (param_1 == 0xffffffff) {
    return;
  }
LAB_006ea3ca:
  FUN_006e8c50("SprSetLevPlane");
  return;
}

