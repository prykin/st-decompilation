#include "../../pseudocode_runtime.h"


void __thiscall FUN_005801c0(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  AnonShape_004E0250_5A3B9236 *pAVar4;

  /* ST_CALLSITE[005801D4]: CALL 0x00402973; direct=00402973 STResourceC::SetResource */
  STResourceC::SetResource(this,STField<int>(this,0x259) - param_1,1);
  if (STField<int>(this,0x25d) == 1) {
    sVar1 = STField<short>(this,0x245);
    sVar2 = STField<short>(this,0x24d);
    sVar3 = STField<short>(this,0x249);
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
       (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
      pAVar4 = nullptr;
    }
    else {
      pAVar4 = (AnonShape_004E0250_5A3B9236 *)
               STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    if (pAVar4->field_0018 == STField<int>(this,0x269)) {
      thunk_FUN_004e0250(pAVar4);
    }
  }
  return;
}

