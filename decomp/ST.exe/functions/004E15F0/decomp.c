#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00465C60 -> 004E15F0 @ 004667FA; /STBoatC+0x18 | 00465C60 -> 004E15F0 @ 0046695D;
   /STBoatC+0x18 | 00465C60 -> 004E15F0 @ 0046813F; /STBoatC+0x18 | 00465C60 -> 004E15F0 @ 004682F0;
   /STBoatC+0x18 | 0046D450 -> 004E15F0 @ 0046D97D; /STBoatC+0x18 | 0046D450 -> 004E15F0 @ 0046DAFF;
   /STBoatC+0x18 */

undefined4 __thiscall FUN_004e15f0(void *this,uint param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;

  if (STField<int>(this,0x24) != STField<int>(this,0x23d)) {
    bVar2 = LookupRecordByte((char)STField<int>(this,0x23d));
    iVar1 = STField<int>(this,0x235);
    bVar3 = LookupRecordByte(STField<char>(this,0x24));
    if ((&DAT_007e1984)[(uint)bVar3 + (iVar1 * 3 + (uint)bVar2) * 3] == '\0') {
      return 0;
    }
  }
  if (STField<int>(this,0x4d8) != -1) {
    return 0;
  }
  STField<uint>(this,0x4d8) = param_1;
  return 1;
}

