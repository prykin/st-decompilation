#include "../../pseudocode_runtime.h"


void __thiscall FUN_00424620(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *this_00;
  uint index;
  uint uVar3;

  uVar2 = param_1;
  uVar1 = *(uint *)(STField<int>(this,0x29) + 0xc);
  if (((param_1 & 1) != 0) && ((STField<uint>(this,0x35) & 1) != 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) & 0xfffffffe;
  }
  if (((param_1 & 2) != 0) && ((STField<uint>(this,0x35) & 2) != 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) & 0xfffffffd;
  }
  if (((param_1 & 4) != 0) && ((STField<uint>(this,0x35) & 4) != 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) & 0xfffffffb;
  }
  if (((param_1 & 8) != 0) && ((STField<uint>(this,0x35) & 8) != 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) & 0xfffffff7;
  }
  if (((param_1 & 0x10) != 0) && ((STField<uint>(this,0x35) & 0x10) != 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) & 0xffffffef;
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
        (*this_00->vtable[1].vfunc_30)(this_00,(char)uVar2);
      }
      uVar3 = uVar3 + 1;
      index = uVar3 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

