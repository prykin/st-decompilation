#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x0074dc1c) */

undefined8 FUN_0074da81(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  longlong lVar13;
  longlong local_14;

  uVar7 = param_2;
  if ((int)param_2 < 0) {
    bVar12 = param_1 != 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = -param_1;
    uVar7 = -(param_2 + bVar12);
  }
  uVar8 = param_3;
  if ((int)param_3 < 0) {
    uVar8 = -param_3;
  }
  uVar3 = param_4;
  if ((int)param_4 < 0) {
    uVar3 = -param_4;
  }
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  bVar12 = (bool)((int)param_3 < 0 ^ bVar2);
  local_14 = Library::MSVCRT::__allmul(param_1,0,uVar8,0);
  uVar6 = 0;
  if (uVar7 != 0) {
    lVar13 = Library::MSVCRT::__allmul(uVar7,0,uVar8,0);
    lVar1 = lVar13 + ((ulonglong)local_14 >> 0x20);
    uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14 = CONCAT44((int)lVar1,(uint)local_14);
  }
  if (param_5 != 0) {
    uVar7 = (int)param_5 >> 0x1f;
    if (bVar12) {
      uVar7 = -(uVar7 + (param_5 != 0));
      bVar13 = (int)param_5 < 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = -param_5;
    }
    else {
      bVar13 = -1 < (int)param_5;
    }
    bVar10 = CARRY4((uint)local_14,param_5);
    uVar4 = (uint)local_14 + param_5;
    bVar11 = CARRY4(STPiece<4,4>(local_14),uVar7);
    uVar7 = STPiece<4,4>(local_14) + uVar7;
    uVar8 = bVar10 + uVar7;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14 = CONCAT44(uVar8,uVar4);
    uVar6 = uVar6 + (uint)bVar11 + (uint)CARRY4((uint)bVar10,uVar7) + (bVar13 - 1);
    if ((int)uVar6 < 0) {
      bVar12 = !bVar12;
      uVar4 = ~uVar4;
      iVar5 = uVar4 + 1;
      iVar9 = ~uVar8 + (uint)(0xfffffffe < uVar4);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_14 = CONCAT44(iVar9,iVar5);
      uVar6 = ~uVar6 + (uint)(iVar5 == 0 && iVar9 == 0);
    }
  }
  if ((int)param_4 < 0) {
    bVar12 = !bVar12;
  }
  if (uVar6 < uVar3) {
    if ((uVar6 == 0) && (STPiece<4,4>(local_14) < uVar3)) {
      iVar5 = 0;
    }
    else {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar5 = (int)(CONCAT44(uVar6,STPiece<4,4>(local_14)) / (ulonglong)uVar3);
      if (&stack0x00000000 != (undefined1 *)0x10) {
                    /* WARNING: Ignoring partial resolution of indirect */
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        STPiece<4,4>(local_14) = (int)(CONCAT44(uVar6,STPiece<4,4>(local_14)) % (ulonglong)uVar3);
      }
    }
    iVar9 = (int)((ulonglong)local_14 / (ulonglong)uVar3);
    if (bVar12) {
      bVar12 = iVar9 != 0;
      iVar9 = -iVar9;
      iVar5 = -(iVar5 + (uint)bVar12);
    }
  }
  else if (bVar12) {
    iVar9 = 0;
    iVar5 = -0x80000000;
  }
  else {
    iVar9 = -1;
    iVar5 = 0x7fffffff;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT44(iVar5,iVar9);
}

