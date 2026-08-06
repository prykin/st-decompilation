#include "../../pseudocode_runtime.h"


void __thiscall FUN_00424530(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *this_00;
  uint index;
  uint uVar3;

  uVar2 = param_1;
  uVar1 = *(uint *)(STField<int>(this,0x29) + 0xc);
  if (((param_1 & 1) != 0) && ((STField<uint>(this,0x35) & 1) == 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) | 1;
  }
  if (((param_1 & 2) != 0) && ((STField<uint>(this,0x35) & 2) == 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) | 2;
  }
  if (((param_1 & 4) != 0) && ((STField<uint>(this,0x35) & 4) == 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) | 4;
  }
  if (((param_1 & 8) != 0) && ((STField<uint>(this,0x35) & 8) == 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) | 8;
  }
  if (((param_1 & 0x10) != 0) && ((STField<uint>(this,0x35) & 0x10) == 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) | 0x10;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement(STField<DArrayTy *>(this,0x29),index,&param_1);
      if ((ushort)param_1 != 0xffff) {
        this_00 = STAllPlayersC::GetObjPtr
                            (g_allPlayers_007FA174,STField<char>(this,0x24),(ushort)param_1,
                             CASE_1);
        this_00->vfunc_100((char)uVar2);
      }
      uVar3 = uVar3 + 1;
      index = uVar3 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

