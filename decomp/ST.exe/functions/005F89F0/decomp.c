#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_005f89f0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;

  uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar2;
  uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar1;
  iVar4 = ((uVar2 >> 0x10) % 5 + STField<int>(this,0x27d)) - param_1;
  iVar5 = ((uVar1 >> 0x10) % 5 + STField<int>(this,0x281)) - param_1;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (g_worldGrid.sizeX <= iVar4) {
    iVar4 = g_worldGrid.sizeX + -1;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (g_worldGrid.sizeY <= iVar5) {
    iVar5 = g_worldGrid.sizeY + -1;
  }
  auto param_1_after_write = STField<int>(this,0x285); /* compiler stack-slot lifetime split */
  while( true ) {
    sVar6 = (short)iVar4;
    sVar7 = (short)iVar5;
    sVar8 = (short)param_1_after_write;
    iVar3 = thunk_FUN_004961b0(sVar6,sVar7,sVar8);
    if ((iVar3 != 0) &&
       (((((sVar6 < 0 || (g_worldGrid.sizeX <= sVar6)) || (sVar7 < 0)) ||
         ((g_worldGrid.sizeY <= sVar7 || (sVar8 < 0)))) ||
        ((g_worldGrid.sizeZ <= sVar8 ||
         (STGridAt3D(g_worldGrid, sVar6, sVar7, sVar8).objects[0] == nullptr)))))) break;
    param_1_after_write = param_1_after_write + 1;
    if ((4 < param_1_after_write) || (STField<int>(this,0x285) + 2 < param_1_after_write)) break;
  }
  if ((-1 < param_1_after_write) && (param_1_after_write < 5)) {
    STField<int>(this,0x295) = iVar5;
    STField<int>(this,0x291) = iVar4;
    STField<int>(this,0x299) = param_1_after_write;
    return 1;
  }
  return 0;
}

