#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __thiscall
FUN_0062d2d0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
            int param_6)

{
  int iVar2;
  uint uVar3;
  int iVar1;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint local_78 [7];
  uint uStack_5c;
  int *local_4c [2];
  int aiStack_44 [5];
  int local_30;
  uint local_2c;
  uint local_24;
  uint local_20;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  puStack_c = &DAT_0079d088;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_2c = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((this != (void *)0xffffffd0) && (iVar2 = *(int *)((int)this + param_1 * 4 + 0x30), iVar2 != 0)
     ) {
    iVar2 = STField<int>(iVar2,0xC);
    uStack_5c = 0x62d333;
    local_1c = &stack0xffffffa8 + iVar2 * -0x28;
    local_8 = 0xffffffff;
    local_24 = 0xffffffff;
    if (param_6 == 0) {
      aiStack_44[3] = (int)g_worldGrid.sizeY * (int)g_worldGrid.sizeX;
    }
    else {
      aiStack_44[3] = 4;
    }
    local_30 = aiStack_44[3];
    local_20 = 0xffffffff;
    uVar5 = 0;
    ExceptionList = &local_14;
    if (0 < iVar2) {
      local_4c[0] = aiStack_44 + iVar2 * -10 + 4;
      ExceptionList = &local_14;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar4 = *(int *)((int)this + param_1 * 4 + 0x30);
        if (uVar5 < STField<uint>(iVar4,0xC)) {
          piVar6 = (int *)(STField<int>(iVar4,0x8) * uVar5 + STField<int>(iVar4,0x1C));
        }
        else {
          piVar6 = nullptr;
        }
        local_78[iVar2 * -10 + 7] = piVar6[2];
        local_78[iVar2 * -10 + 6] = piVar6[1];
        local_78[iVar2 * -10 + 5] = param_3;
        local_78[iVar2 * -10 + 4] = param_2;
        local_78[iVar2 * -10 + 3] = 0x62d3b3;
        iVar1 = FUN_006acf90(local_78[iVar2 * -10 + 4],local_78[iVar2 * -10 + 5],
                             local_78[iVar2 * -10 + 6],local_78[iVar2 * -10 + 7]);
        if (iVar1 < aiStack_44[3]) {
          local_24 = uVar5;
          aiStack_44[3] = iVar1;
        }
        if ((piVar6[7] == 0) && (iVar1 < local_30)) {
          local_30 = iVar1;
          local_20 = uVar5;
        }
        piVar7 = local_4c[0] + -9;
        memmove(piVar7, piVar6, 0x20); /* compiler REP MOVS byte copy */
        local_4c[0][-1] = iVar1;
        *local_4c[0] = 0;
        uVar5 = uVar5 + 1;
        local_4c[0] = local_4c[0] + 10;
      } while ((int)uVar5 < iVar2);
    }
    uVar3 = local_20;
    uVar5 = local_24;
    iVar4 = iVar2 * -0x28 + -0x58;
    if ((int)local_20 < 0) {
      if ((int)local_24 < 0) {
        ExceptionList = local_14;
        return local_2c;
      }
      iVar4 = local_24 * 0x28 + iVar4;
      *param_5 = aiStack_44[iVar2 * -10 + local_24 * 10 + -4];
      param_5[1] = *(int *)(&stack0xffffffb0 + iVar4 + 0x58);
      param_5[2] = (int)local_4c[iVar2 * -10 + local_24 * 10];
      param_5[3] = aiStack_44[iVar2 * -10 + local_24 * 10];
      local_78[iVar2 * -10 + 7] = 1;
      local_78[iVar2 * -10 + 6] = uVar5;
      local_78[iVar2 * -10 + 5] = aiStack_44[iVar2 * -10 + uVar5 * 10];
      local_78[iVar2 * -10 + 4] = (uint)local_4c[iVar2 * -10 + uVar5 * 10];
      local_78[iVar2 * -10 + 3] = *(undefined4 *)(&stack0xffffffb0 + iVar4 + 0x58);
      local_78[iVar2 * -10 + 2] = aiStack_44[iVar2 * -10 + uVar5 * 10 + -4];
    }
    else {
      iVar4 = local_20 * 0x28 + iVar4;
      *param_5 = aiStack_44[iVar2 * -10 + local_20 * 10 + -4];
      param_5[1] = *(int *)(&stack0xffffffb0 + iVar4 + 0x58);
      param_5[2] = (int)local_4c[iVar2 * -10 + local_20 * 10];
      param_5[3] = aiStack_44[iVar2 * -10 + local_20 * 10];
      local_78[iVar2 * -10 + 7] = 1;
      local_78[iVar2 * -10 + 6] = uVar3;
      local_78[iVar2 * -10 + 5] = aiStack_44[iVar2 * -10 + uVar3 * 10];
      local_78[iVar2 * -10 + 4] = (uint)local_4c[iVar2 * -10 + uVar3 * 10];
      local_78[iVar2 * -10 + 3] = *(undefined4 *)(&stack0xffffffb0 + iVar4 + 0x58);
      local_78[iVar2 * -10 + 2] = aiStack_44[iVar2 * -10 + uVar3 * 10 + -4];
    }
    local_78[iVar2 * -10 + 1] = param_1;
    local_78[iVar2 * -10] = 0x62d442;
    thunk_FUN_0062d120(this,local_78[iVar2 * -10 + 1],local_78[iVar2 * -10 + 2],
                       local_78[iVar2 * -10 + 3],local_78[iVar2 * -10 + 4],local_78[iVar2 * -10 + 5]
                       ,local_78[iVar2 * -10 + 6],local_78[iVar2 * -10 + 7]);
    local_2c = 1;
  }
  ExceptionList = local_14;
  return local_2c;
}

