#include "../../pseudocode_runtime.h"


uint FUN_0069c710(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;

  iVar3 = param_3;
  uVar4 = 0xffffffff;
  if (param_3 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar4 = Library::DKW::TBL::DArrayAppend(*(DArrayTy **)(param_3 + 0xc),&param_2);
    if (-1 < (int)uVar4) {
      pbVar1 = (byte *)(param_1 + 1 + param_2 * 0xe);
      bVar2 = *pbVar1;
      if ((bVar2 & 4) == 0) {
        if ((bVar2 & 8) != 0) {
          STField<int>(iVar3,0x8) = STField<int>(iVar3,0x8) + 1;
        }
      }
      else {
        STField<int>(iVar3,0x4) = STField<int>(iVar3,0x4) + 1;
        if ((*pbVar1 & 8) != 0) {
          STField<int>(iVar3,0x8) = STField<int>(iVar3,0x8) + 1;
          return uVar4;
        }
      }
    }
  }
  return uVar4;
}

