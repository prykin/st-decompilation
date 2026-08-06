#include "../../pseudocode_runtime.h"


void FUN_00496cc0(int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,void *param_6
                 )

{
  uint uVar1;
  uint uVar2;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;

  uVar1 = param_3;
  uVar2 = thunk_FUN_00496a90(param_1,param_2,param_3,param_4,param_5,&param_3);
  pvVar2 = param_6;
  if ((int)uVar2 < 0) {
    iVar3 = thunk_FUN_00497370(param_1,param_2,uVar1,param_5,param_6);
    if (0 < iVar3) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = thunk_FUN_004969f0(param_1,param_2,uVar1,param_4,param_5,pvVar2,0xffffffff);
      if ((&DAT_007fb24c)[uVar1] == 0) {
        puVar4 = Library::DKW::LIB::MemAlloc
                           ((int)g_pathingScratchGrid.sizeY * (int)g_pathingScratchGrid.sizeX);
        iVar3 = (int)g_pathingScratchGrid.sizeY;
        iVar6 = (int)g_pathingScratchGrid.sizeX;
        (&DAT_007fb24c)[uVar1] = puVar4;
        for (uVar5 = (uint)(iVar3 * iVar6) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (uVar5 = iVar3 * iVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
      }
      thunk_FUN_00496b30(param_5,uVar1,1);
    }
  }
  else if (param_3 != 0) {
    if (uVar2 < g_array_007FB270->count) {
      pvVar2 = DArrayAt<void>(g_array_007FB270, uVar2);
    }
    else {
      pvVar2 = nullptr;
    }
    thunk_FUN_00496b30(uVar2,STField<int>(pvVar2,8),0);
    thunk_FUN_004969f0(param_1,param_2,uVar1,param_4,param_5,param_6,uVar2);
    thunk_FUN_00496b30(uVar2,uVar1,1);
    return;
  }
  return;
}

