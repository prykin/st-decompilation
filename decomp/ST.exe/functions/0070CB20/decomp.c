#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 8.
   Evidence: 0070CB20 -> EXTERNAL:000000B2 @ 0070CD54 */

uint __cdecl
FUN_0070cb20(uint param_1,int param_2,int *param_3,int param_4,int param_5,byte param_6,byte param_7
            ,int param_8,HPALETTE h,uint param_10,int param_11)

{
  byte bVar1;
  int iVar2;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  UINT UVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint local_54 [15];
  uint local_18;
  uint *local_14;
  int local_10;
  int *local_c;
  int local_8;

  local_8 = 0;
  local_10 = 0x10;
  local_18 = 0;
  if (param_10 == 0x800000) {
    local_10 = 4;
  }
  else if (param_10 == 0x1000000) {
    local_10 = 0x20;
  }
  local_14 = local_54;
  param_10 = 0;
  local_c = &DAT_007f014c;
  do {
    iVar6 = local_c[-1] + param_1;
    iVar10 = *local_c + param_2;
    if ((((-1 < iVar6) && (iVar6 < param_4)) && (-1 < iVar10)) && (iVar10 < param_5)) {
      iVar2 = FUN_006b4fa0(param_3);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      bVar1 = *(byte *)(((uint)STField<ushort>(param_3,0xe) * param_3[1] + 0x1f >> 3 & 0x1ffffffc
                        ) * ((param_3[2] - iVar10) + -1) + iVar6 + iVar2);
      if (bVar1 != param_7) {
        uVar2 = (uint)bVar1;
        local_14[-1] = param_10;
        bVar1 = *(byte *)(param_8 + 5 + uVar2 * 4);
        *local_14 = (uint)*(byte *)(param_8 + 4 + uVar2 * 4);
        local_14[1] = (uint)bVar1;
        local_14[2] = (uint)*(byte *)(param_8 + 6 + uVar2 * 4);
        local_8 = local_8 + 1;
        local_14 = local_14 + 4;
      }
    }
    local_c = local_c + 3;
    param_10 = param_10 + 1;
  } while ((int)local_c < 0x7f017c);
  if (local_8 < 1) {
    return 0xffffffff;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (uint)param_6;
  uVar2 = (uint)param_6;
  iVar6 = (4 - local_8) * local_10;
  iVar10 = (uint)*(byte *)(param_8 + 4 + uVar2 * 4) * iVar6;
  _param_7 = (uint)*(byte *)(param_8 + 5 + uVar2 * 4) * iVar6;
  param_10 = (uint)*(byte *)(param_8 + 6 + uVar2 * 4) * iVar6;
  if (0 < local_8) {
    param_3 = &DAT_007f0150;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_8 = local_8;
    puVar7 = local_54 + 1;
    do {
      iVar8 = *param_3;
      iVar10 = iVar10 + puVar7[-1] * iVar8;
      _param_7 = _param_7 + iVar8 * *puVar7;
      iVar6 = iVar6 + iVar8;
      param_10 = param_10 + puVar7[1] * iVar8;
      param_3 = param_3 + 3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = param_8 + -1;
      puVar7 = puVar7 + 4;
    } while (param_8 != 0);
  }
  iVar8 = iVar6;
  if (iVar6 == 0) {
    iVar8 = 1;
  }
  uVar2 = iVar10 / iVar8;
  iVar10 = iVar6;
  if (iVar6 == 0) {
    iVar10 = 1;
  }
  uVar3 = _param_7 / iVar10;
  if (iVar6 == 0) {
    iVar6 = 1;
  }
  uVar4 = (int)param_10 / iVar6;
  if (((uVar2 == 0) && (uVar3 == 0)) && (uVar4 == 0)) {
    return 0;
  }
  uVar9 = local_18;
  if (param_11 != 0) {
    uVar9 = ((uVar2 & 0x3f) << 6 | uVar3 & 0x3f) << 6 | uVar4 & 0x3f;
    bVar1 = *(byte *)(uVar9 + param_11);
    if (bVar1 != 0) {
      return (uint)bVar1;
    }
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  UVar5 = GetNearestPaletteIndex(h,(uint)CONCAT11((char)uVar4,(char)uVar3) << 8 | uVar2 & 0xff);
  if (UVar5 != 0xffffffff) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = UVar5 & 0xff;
    if (param_11 != 0) {
      *(char *)(uVar9 + param_11) = (char)UVar5;
    }
  }
  return param_1;
}

