#include "../../pseudocode_runtime.h"


void FUN_006da4f0(ushort *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 uint *param_7)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ushort *puVar6;
  uint local_14;
  uint local_10;
  int local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_7 == nullptr) {
    local_10 = 0xf800;
    local_14 = 0x7e0;
    uVar1 = 0x1f;
  }
  else {
    local_10 = *param_7;
    local_14 = param_7[1];
    uVar1 = param_7[2];
  }
  iVar3 = -1;
  uint param_7_after_write = 0xffffffff; /* compiler stack-slot lifetime split */
  local_8 = -1;
  bVar2 = 0xff;
  if (local_10 == 0xf800) {
    param_7_after_write = 0;
  }
  else if (local_10 == 0x7c00) {
    param_7_after_write = 0x1;
  }
  if (local_14 == 0x7e0) {
    local_8 = 5;
  }
  else if (local_14 == 0x3e0) {
    local_8 = 6;
  }
  if (uVar1 == 0x1f) {
    iVar3 = 0xb;
    bVar2 = 0xb;
  }
  if (param_7_after_write == 0xffffffff) {
    STPiece<0,1>(param_7_after_write) = 0;
    for (uVar4 = local_10; (uVar4 & 0x8000) == 0; uVar4 = uVar4 << 1) {
      STPiece<0,1>(param_7_after_write) = (byte)param_7_after_write + 1;
    }
  }
  if (local_8 == -1) {
    STPiece<0,1>(local_8) = 0;
    for (uVar4 = local_14; (uVar4 & 0x8000) == 0; uVar4 = uVar4 << 1) {
      STPiece<0,1>(local_8) = (byte)local_8 + 1;
    }
  }
  if (iVar3 == -1) {
    bVar2 = 0;
    for (uVar4 = uVar1; (uVar4 & 0x8000) == 0; uVar4 = uVar4 << 1) {
      bVar2 = bVar2 + 1;
    }
  }
  if (0 < param_6) {
    do {
      iVar3 = param_5;
      pbVar5 = param_3;
      puVar6 = param_1;
      if (0 < param_5) {
        do {
          param_1 = puVar6 + 1;
          param_3 = pbVar5 + 3;
          iVar3 = iVar3 + -1;
          *puVar6 = (ushort)((int)((uint)pbVar5[2] << 8) >> ((byte)param_7_after_write & 0x1f)) &
                    (ushort)local_10 |
                    (ushort)((int)((uint)pbVar5[1] << 8) >> ((byte)local_8 & 0x1f)) &
                    (ushort)local_14 |
                    (ushort)((int)((uint)*pbVar5 << 8) >> (bVar2 & 0x1f)) & (ushort)uVar1;
          pbVar5 = param_3;
          puVar6 = param_1;
        } while (iVar3 != 0);
      }
      param_1 = (ushort *)((int)param_1 + param_2 + param_5 * -2);
      param_3 = param_3 + param_4 + param_5 * -3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}

