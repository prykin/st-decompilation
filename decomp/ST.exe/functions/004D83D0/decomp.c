#include "../../pseudocode_runtime.h"


undefined4 FUN_004d83d0(undefined1 param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  if (DAT_007fa168 == nullptr) {
    DAT_007fa168 = Library::DKW::LIB::MemAlloc((int)g_worldGrid.planeStride);
  }
  if (param_2 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
  }
  if (param_3 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
  }
  if ((int)g_worldGrid.sizeX < (int)(param_4 + param_2)) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = g_worldGrid.sizeX - param_2;
  }
  if ((int)g_worldGrid.sizeY < param_3 + param_5) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = g_worldGrid.sizeY - param_3;
  }
  iVar1 = param_3 + param_5;
  if (iVar1 <= param_3) {
    return 0;
  }
  do {
    puVar3 = (undefined4 *)((int)DAT_007fa168 + param_2 + g_worldGrid.sizeX * param_3);
    for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = CONCAT22(CONCAT11(param_1,param_1),CONCAT11(param_1,param_1));
      puVar3 = puVar3 + 1;
    }
    param_3 = param_3 + 1;
    for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = param_1;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  } while (param_3 < iVar1);
  return 0;
}

