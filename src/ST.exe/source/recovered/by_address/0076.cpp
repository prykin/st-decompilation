#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0076.cpp

// 00760100 FUN_00760100
#line 4 "decomp/ST.exe/functions/00760100/decomp.c"
void st::fn_00760100(AnonShape_00760100_BE153D7B *param_1,int param_2,int *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  AnonShape_0075FEE0_E0ABA202 *pAVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  AnonShape_0075FEE0_E0ABA202 *pAVar14;
  short *psVar15;
  int *piVar16;
  int iVar17;
  int local_28;
  int local_1c;
  int local_18;
  int local_c;

  iVar2 = param_1->field_01BA;
  iVar3 = param_1->field_0070;
  pAVar4 = (AnonShape_0075FEE0_E0ABA202 *)param_1->field_0068;
  iVar5 = param_1->field_0132;
  if (0 < param_4) {
    local_28 = param_4;
    iVar11 = param_2 - (int)param_3;
    piVar16 = param_3;
    do {
      st::fn_00759F30((undefined4 *)*piVar16,pAVar4);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = 0;
      if (0 < iVar3) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (int *)(iVar2 + 0x44);
        do {
          pcVar13 = (char *)*piVar16;
          pbVar12 = (byte *)(*(int *)(iVar11 + (int)piVar16) + param_4);
          if (*(int *)(iVar2 + 0x54) == 0) {
            iVar17 = 1;
            psVar15 = (short *)*param_3;
            local_1c = iVar3;
          }
          else {
            pcVar13 = pcVar13 + (int)&pAVar4[-1].field_0x1bf;
            pbVar12 = pbVar12 + (int)&pAVar4[-1].field_0x1bf * iVar3;
            iVar17 = -1;
            psVar15 = (short *)(*param_3 + 2 + (int)pAVar4 * 2);
            local_1c = -iVar3;
          }
          iVar6 = *(int *)(*(int *)(iVar2 + 0x18) + param_4 * 4);
          iVar7 = *(int *)(*(int *)(iVar2 + 0x10) + param_4 * 4);
          iVar8 = 0;
          local_c = 0;
          STPiece<0,2>(local_c) = 0;
          local_18 = 0;
          for (pAVar14 = pAVar4; pAVar14 != nullptr;
              pAVar14 = (AnonShape_0075FEE0_E0ABA202 *)&pAVar14[-1].field_0x1bf) {
            uVar9 = (uint)*(byte *)((uint)*pbVar12 + iVar5 + (psVar15[iVar17] + 8 + iVar8 >> 4));
            bVar1 = *(byte *)(uVar9 + iVar6);
            *pcVar13 = *pcVar13 + bVar1;
            iVar10 = uVar9 - *(byte *)((uint)bVar1 + iVar7);
            *psVar15 = (short)local_c + (short)iVar10 * 3;
            local_c = local_18 + iVar10 * 5;
            iVar8 = iVar10 * 7;
            pbVar12 = pbVar12 + local_1c;
            pcVar13 = pcVar13 + iVar17;
            psVar15 = psVar15 + iVar17;
            local_18 = iVar10;
          }
          *psVar15 = (short)local_c;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = param_4 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + 1;
        } while (param_4 < iVar3);
      }
      *(uint *)(iVar2 + 0x54) = (uint)(*(int *)(iVar2 + 0x54) == 0);
      piVar16 = piVar16 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  return;
}

// 007602E0 FUN_007602e0
#line 4 "decomp/ST.exe/functions/007602E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 007602E0 -> 006A3BE0 @ 007602E7

   [STPrototypeApplier] Propagated return.
   Evidence: 007602E0 returns return of FUN_006a3be0 @ 007602F0 */

int * st::fn_007602E0(undefined4 param_1,uint param_2)

{
  int *piVar1;

  piVar1 = st::fn_00402B21(param_2);
  return piVar1;
}

// 00760300 FUN_00760300
#line 4 "decomp/ST.exe/functions/00760300/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00760300 -> 006A4950 @ 00760307 */

void st::fn_00760300(undefined4 param_1,int *param_2)

{
  st::fn_00405D8A(param_2);
  return;
}

// 00760320 FUN_00760320
#line 4 "decomp/ST.exe/functions/00760320/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00760320 -> 006A3BE0 @ 00760327

   [STPrototypeApplier] Propagated return.
   Evidence: 00760320 returns return of FUN_006a3be0 @ 00760330 */

int * st::fn_00760320(undefined4 param_1,uint param_2)

{
  int *piVar1;

  piVar1 = st::fn_00402B21(param_2);
  return piVar1;
}

// 00760340 FUN_00760340
#line 4 "decomp/ST.exe/functions/00760340/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00760340 -> 006A4950 @ 00760347 */

void st::fn_00760340(undefined4 param_1,int *param_2)

{
  st::fn_00405D8A(param_2);
  return;
}

// 00760360 FUN_00760360
#line 4 "decomp/ST.exe/functions/00760360/decomp.c"
undefined4 st::fn_00760360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}

// 00760390 FUN_00760390
#line 4 "decomp/ST.exe/functions/00760390/decomp.c"
undefined4 st::fn_00760390(void)

{
  return 0;
}

// 007603A0 FUN_007603a0
#line 1 "decomp/ST.exe/functions/007603A0/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_007603A0(void)

{
  return;
}

// 007603B0 FUN_007603b0
#line 4 "decomp/ST.exe/functions/007603B0/decomp.c"
void st::fn_007603B0(int *param_1,AnonShape_007603B0_DAA8AD99 *param_2,int *param_3,int *param_4,
                 int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_134 [64];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  AnonNested_007603B0_0050_0992C9A2 *local_14;
  int *local_10;
  int local_c;
  int local_8;

  local_14 = param_2->field_0050;
  iVar6 = STField<int>(param_1,0x132) + 0x80;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = local_134;
  local_2c = iVar6;
  local_10 = param_3;
  local_1c = 8;
  do {
    local_8 = local_10[0x28];
    local_c = local_10[0x18];
    local_30 = local_10[8];
    if ((((((local_30 == 0 && local_10[0x10] == 0) && local_c == 0) && local_10[0x20] == 0) &&
         local_8 == 0) && local_10[0x30] == 0) && local_10[0x38] == 0) {
      iVar3 = *local_10 * local_14->field_0000 * 4;
      *param_1 = iVar3;
      param_1[8] = iVar3;
      param_1[0x10] = iVar3;
      param_1[0x18] = iVar3;
      param_1[0x20] = iVar3;
      param_1[0x28] = iVar3;
      param_1[0x30] = iVar3;
      param_1[0x38] = iVar3;
      local_14 = (AnonNested_007603B0_0050_0992C9A2 *)&local_14->field_0x4;
    }
    else {
      iVar3 = st::machine_word_boundary_cast<int>(local_14->field_00C0 * local_10[0x30]);
      iVar4 = st::machine_word_boundary_cast<int>(local_14->field_0040 * local_10[0x10]);
      iVar6 = (iVar3 + iVar4) * 0x1151;
      iVar2 = iVar6 + iVar3 * -0x3b21;
      iVar6 = iVar6 + iVar4 * 0x187e;
      iVar4 = *local_10 * local_14->field_0000;
      iVar7 = st::machine_word_boundary_cast<int>(local_14->field_0080 * local_10[0x20]);
      iVar10 = (iVar7 + iVar4) * 0x2000;
      iVar3 = iVar10 + iVar6;
      local_28 = iVar10 - iVar6;
      iVar6 = (iVar4 - iVar7) * 0x2000;
      iVar7 = st::machine_word_boundary_cast<int>(local_14->field_0060 * local_c);
      local_24 = iVar6 + iVar2;
      iVar10 = st::machine_word_boundary_cast<int>(local_14->field_00E0 * local_10[0x38]);
      local_30 = st::machine_word_boundary_cast<int>(local_14->field_0020 * local_30);
      local_8 = st::machine_word_boundary_cast<int>(local_14->field_00A0 * local_8);
      local_20 = iVar6 - iVar2;
      local_34 = iVar3;
      local_c = (local_30 + local_8 + iVar10 + iVar7) * 0x25a1;
      iVar4 = (iVar10 + local_30) * -0x1ccd;
      iVar6 = (local_8 + iVar7) * -0x5203;
      iVar9 = local_c + (iVar10 + iVar7) * -0x3ec5;
      local_c = local_c + (local_30 + local_8) * -0xc7c;
      iVar10 = iVar10 * 0x98e + iVar4 + iVar9;
      iVar2 = local_8 * 0x41b3 + local_c + iVar6;
      local_8 = iVar7 * 0x6254 + iVar9 + iVar6;
      iVar4 = local_c + local_30 * 0x300b + iVar4;
      *param_1 = iVar3 + 0x400 + iVar4 >> 0xb;
      param_1[0x38] = (iVar3 - iVar4) + 0x400 >> 0xb;
      param_1[0x30] = (local_24 - local_8) + 0x400 >> 0xb;
      param_1[0x28] = (local_20 - iVar2) + 0x400 >> 0xb;
      param_1[0x18] = local_28 + 0x400 + iVar10 >> 0xb;
      param_1[0x10] = local_20 + 0x400 + iVar2 >> 0xb;
      param_1[8] = local_24 + 0x400 + local_8 >> 0xb;
      param_1[0x20] = (local_28 - iVar10) + 0x400 >> 0xb;
      local_14 = (AnonNested_007603B0_0050_0992C9A2 *)&local_14->field_0x4;
      iVar6 = local_2c;
    }
    local_10 = local_10 + 1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 + 1;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  piVar8 = local_134;
  local_10 = param_4;
  local_18 = 8;
  do {
    iVar3 = piVar8[7];
    iVar4 = piVar8[2];
    local_14 = (AnonNested_007603B0_0050_0992C9A2 *)piVar8[5];
    iVar10 = piVar8[4];
    puVar5 = (undefined1 *)(*local_10 + param_5);
    iVar2 = piVar8[6];
    local_1c = piVar8[3];
    iVar7 = piVar8[1];
    if ((((((iVar7 == 0 && iVar4 == 0) && local_1c == 0) && iVar10 == 0) &&
         local_14 == nullptr) && iVar2 == 0) && iVar3 == 0) {
      uVar1 = *(undefined1 *)((*piVar8 + 0x10 >> 5 & 0x3ffU) + iVar6);
      *puVar5 = uVar1;
      puVar5[1] = uVar1;
      puVar5[2] = uVar1;
      puVar5[3] = uVar1;
      puVar5[4] = uVar1;
      puVar5[5] = uVar1;
      puVar5[6] = uVar1;
      puVar5[7] = uVar1;
    }
    else {
      iVar6 = (iVar2 + iVar4) * 0x1151;
      iVar2 = iVar6 + iVar2 * -0x3b21;
      iVar6 = iVar6 + iVar4 * 0x187e;
      iVar9 = (*piVar8 + iVar10) * 0x2000;
      local_20 = (*piVar8 - iVar10) * 0x2000;
      iVar4 = iVar9 + iVar6;
      iVar9 = iVar9 - iVar6;
      local_24 = local_20 + iVar2;
      local_20 = local_20 - iVar2;
      local_c = ((int)local_14 + iVar7 + iVar3 + local_1c) * 0x25a1;
      iVar6 = (iVar3 + iVar7) * -0x1ccd;
      local_8 = ((int)local_14 + local_1c) * -0x5203;
      iVar10 = local_c + (iVar3 + local_1c) * -0x3ec5;
      local_c = local_c + ((int)local_14 + iVar7) * -0xc7c;
      local_28 = iVar3 * 0x98e + iVar6 + iVar10;
      iVar3 = (int)local_14 * 0x41b3 + local_c + local_8;
      local_8 = local_1c * 0x6254 + iVar10 + local_8;
      iVar6 = local_c + piVar8[1] * 0x300b + iVar6;
      *puVar5 = *(undefined1 *)((iVar4 + 0x20000 + iVar6 >> 0x12 & 0x3ffU) + local_2c);
      puVar5[7] = *(undefined1 *)(((iVar4 - iVar6) + 0x20000 >> 0x12 & 0x3ffU) + local_2c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar5[1] = *(undefined1 *)((local_24 + 0x20000 + local_8 >> 0x12 & 0x3ffU) + local_2c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar5[6] = *(undefined1 *)(((local_24 - local_8) + 0x20000 >> 0x12 & 0x3ffU) + local_2c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar5[2] = *(undefined1 *)((local_20 + 0x20000 + iVar3 >> 0x12 & 0x3ffU) + local_2c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar5[5] = *(undefined1 *)(((local_20 - iVar3) + 0x20000 >> 0x12 & 0x3ffU) + local_2c);
      puVar5[3] = *(undefined1 *)((iVar9 + 0x20000 + local_28 >> 0x12 & 0x3ffU) + local_2c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar5[4] = *(undefined1 *)(((iVar9 - local_28) + 0x20000 >> 0x12 & 0x3ffU) + local_2c);
      iVar6 = local_2c;
    }
    piVar8 = piVar8 + 8;
    local_18 = local_18 + -1;
    local_10 = local_10 + 1;
  } while (local_18 != 0);
  return;
}

// 00760970 FUN_00760970
#line 4 "decomp/ST.exe/functions/00760970/decomp.c"
void st::fn_00760970(int param_1,AnonShape_00760970_DF0E462C *param_2,int *param_3,int *param_4,
                 int param_5)

{
  undefined1 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  AnonNested_00760970_0050_3C80E9C1 *pAVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_128 [8];
  int local_108 [8];
  int local_e8 [8];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  int local_68 [8];
  int local_48 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;

  pAVar4 = param_2->field_0050;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar10 = *(int *)(param_1 + 0x132) + 0x80;
  piVar2 = local_128;
  local_28 = iVar10;
  local_10 = (int *)0x8;
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      iVar11 = *param_3 * pAVar4->field_0000;
      *piVar2 = iVar11;
      piVar2[8] = iVar11;
      piVar2[0x10] = iVar11;
      piVar2[0x18] = iVar11;
      piVar2[0x20] = iVar11;
      piVar2[0x28] = iVar11;
      piVar2[0x30] = iVar11;
      piVar2[0x38] = iVar11;
    }
    else {
      iVar10 = st::machine_word_boundary_cast<int>(pAVar4->field_0080 * param_3[0x20]);
      iVar7 = *param_3 * pAVar4->field_0000;
      iVar11 = st::machine_word_boundary_cast<int>(pAVar4->field_00C0 * param_3[0x30]);
      iVar8 = st::machine_word_boundary_cast<int>(pAVar4->field_0040 * param_3[0x10]);
      iVar9 = iVar10 + iVar7;
      iVar7 = iVar7 - iVar10;
      iVar10 = iVar11 + iVar8;
      iVar12 = ((iVar8 - iVar11) * 0x16a >> 8) - iVar10;
      iVar11 = iVar10 + iVar9;
      local_1c = iVar9 - iVar10;
      iVar8 = iVar7 - iVar12;
      local_24 = iVar12 + iVar7;
      iVar9 = st::machine_word_boundary_cast<int>(pAVar4->field_0060 * param_3[0x18]);
      iVar10 = st::machine_word_boundary_cast<int>(pAVar4->field_00E0 * param_3[0x38]);
      iVar7 = st::machine_word_boundary_cast<int>(pAVar4->field_00A0 * param_3[0x28]);
      local_8 = st::machine_word_boundary_cast<int>(pAVar4->field_0020 * param_3[8]);
      local_14 = iVar9 + iVar7;
      iVar7 = iVar7 - iVar9;
      iVar9 = iVar10 + local_8;
      local_8 = local_8 - iVar10;
      iVar10 = iVar9 + local_14;
      local_c = (local_8 + iVar7) * 0x1d9 >> 8;
      iVar7 = ((iVar7 * -0x29d >> 8) - iVar10) + local_c;
      iVar9 = ((iVar9 - local_14) * 0x16a >> 8) - iVar7;
      int scalar_local_18 = ((local_8 * 0x115 >> 8) - local_c) + iVar9; /* split integer lifetime from pointer-typed SSA storage */
      *piVar2 = iVar10 + iVar11;
      piVar2[0x38] = iVar11 - iVar10;
      piVar2[0x30] = local_24 - iVar7;
      piVar2[8] = iVar7 + local_24;
      piVar2[0x28] = iVar8 - iVar9;
      piVar2[0x10] = iVar9 + iVar8;
      piVar2[0x20] = scalar_local_18 + local_1c;
      piVar2[0x18] = local_1c - scalar_local_18;
      iVar10 = local_28;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = param_3 + 1;
    pAVar4 = (AnonNested_00760970_0050_3C80E9C1 *)&pAVar4->field_0x4;
    piVar2 = piVar2 + 1;
    local_10 = (int *)((int)local_10 + -1);
  } while (local_10 != nullptr);
  local_18 = local_128;
  local_10 = param_4;
  local_20 = 8;
  do {
    iVar11 = local_18[7];
    iVar9 = local_18[1];
    iVar7 = local_18[6];
    puVar3 = (undefined1 *)(*local_10 + param_5);
    iVar8 = local_18[2];
    iVar12 = local_18[5];
    local_8 = iVar9;
    local_c = iVar12;
    iVar5 = local_18[4];
    local_28 = local_18[3];
    if ((((((iVar9 == 0 && iVar8 == 0) && local_28 == 0) && iVar5 == 0) && iVar12 == 0) &&
        iVar7 == 0) && iVar11 == 0) {
      uVar1 = *(undefined1 *)((*local_18 >> 5 & 0x3ffU) + iVar10);
      *puVar3 = uVar1;
      puVar3[1] = uVar1;
      puVar3[2] = uVar1;
      puVar3[3] = uVar1;
      puVar3[4] = uVar1;
      puVar3[5] = uVar1;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
    }
    else {
      local_1c = *local_18 + iVar5;
      iVar5 = *local_18 - iVar5;
      iVar6 = iVar7 + iVar8;
      iVar7 = ((iVar8 - iVar7) * 0x16a >> 8) - iVar6;
      iVar13 = iVar6 + local_1c;
      local_1c = local_1c - iVar6;
      local_24 = iVar7 + iVar5;
      iVar5 = iVar5 - iVar7;
      local_14 = local_28 + iVar12;
      local_8 = iVar9 - iVar11;
      iVar7 = iVar11 + iVar9 + local_14;
      local_c = (local_8 + (iVar12 - local_28)) * 0x1d9 >> 8;
      iVar8 = (((iVar12 - local_28) * -0x29d >> 8) - iVar7) + local_c;
      iVar11 = (((iVar11 + iVar9) - local_14) * 0x16a >> 8) - iVar8;
      iVar9 = ((local_8 * 0x115 >> 8) - local_c) + iVar11;
      *puVar3 = *(undefined1 *)((iVar7 + iVar13 >> 5 & 0x3ffU) + iVar10);
      puVar3[7] = *(undefined1 *)((iVar13 - iVar7 >> 5 & 0x3ffU) + iVar10);
      puVar3[1] = *(undefined1 *)((iVar8 + local_24 >> 5 & 0x3ffU) + iVar10);
      puVar3[6] = *(undefined1 *)((local_24 - iVar8 >> 5 & 0x3ffU) + iVar10);
      puVar3[2] = *(undefined1 *)((iVar11 + iVar5 >> 5 & 0x3ffU) + iVar10);
      puVar3[5] = *(undefined1 *)((iVar5 - iVar11 >> 5 & 0x3ffU) + iVar10);
      puVar3[4] = *(undefined1 *)((iVar9 + local_1c >> 5 & 0x3ffU) + iVar10);
      puVar3[3] = *(undefined1 *)((local_1c - iVar9 >> 5 & 0x3ffU) + iVar10);
    }
    local_18 = local_18 + 8;
    local_20 = local_20 + -1;
    local_10 = local_10 + 1;
  } while (local_20 != 0);
  return;
}

// 00760DF0 FUN_00760df0
#line 4 "decomp/ST.exe/functions/00760DF0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00760DF0(int param_1,AnonShape_00760DF0_41372EAE *param_2,int *param_3,int *param_4,
                 int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  AnonNested_00760DF0_0050_4F781EBD *pAVar9;
  undefined1 *puVar10;
  longlong lVar11;
  float local_120 [16];
  float local_e0 [8];
  float local_c0 [8];
  float local_a0 [8];
  float local_80 [8];
  float local_60 [8];
  float local_40 [8];
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  pAVar9 = param_2->field_0050;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar8 = *(int *)(param_1 + 0x132) + 0x80;
  pfVar7 = local_120;
  local_1c = 1.12104e-44;
  do {
    local_c = (float)param_3[0x38];
    local_18 = (float)param_3[0x10];
    local_8 = (float)param_3[0x28];
    local_20 = param_3[8];
    fVar1 = (float)*param_3 * pAVar9->field_0000;
    if ((((((local_20 == 0 && local_18 == 0.0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         local_8 == 0.0) && param_3[0x30] == 0) && local_c == 0.0) {
      *pfVar7 = fVar1;
      pfVar7[8] = fVar1;
      pfVar7[0x10] = fVar1;
      pfVar7[0x18] = fVar1;
      pfVar7[0x20] = fVar1;
      pfVar7[0x28] = fVar1;
      pfVar7[0x30] = fVar1;
      pfVar7[0x38] = fVar1;
    }
    else {
      fVar4 = (float)(int)local_18 * pAVar9->field_0040;
      fVar3 = (float)param_3[0x20] * pAVar9->field_0080;
      fVar5 = (float)param_3[0x30] * pAVar9->field_00C0;
      fVar2 = fVar3 + fVar1;
      fVar1 = fVar1 - fVar3;
      fVar3 = fVar5 + fVar4;
      fVar4 = (fVar4 - fVar5) * _DAT_007a22b0 - fVar3;
      local_18 = fVar3 + fVar2;
      local_10 = fVar2 - fVar3;
      local_14 = fVar4 + fVar1;
      fVar1 = fVar1 - fVar4;
      fVar5 = (float)local_20 * pAVar9->field_0020;
      fVar2 = (float)param_3[0x18] * pAVar9->field_0060;
      fVar3 = (float)(int)local_8 * pAVar9->field_00A0;
      fVar4 = (float)(int)local_c * pAVar9->field_00E0;
      local_c = fVar3 + fVar2;
      fVar3 = fVar3 - fVar2;
      fVar6 = fVar4 + fVar5;
      fVar5 = fVar5 - fVar4;
      fVar2 = fVar6 + local_c;
      fVar4 = (fVar5 + fVar3) * _DAT_007a22ac;
      fVar3 = (fVar4 - fVar3 * _DAT_007a22a8) - fVar2;
      fVar6 = (fVar6 - local_c) * _DAT_007a22b0 - fVar3;
      local_8 = (fVar5 * _DAT_007a22a4 - fVar4) + fVar6;
      *pfVar7 = fVar2 + local_18;
      pfVar7[0x38] = local_18 - fVar2;
      pfVar7[8] = fVar3 + local_14;
      pfVar7[0x30] = local_14 - fVar3;
      pfVar7[0x10] = fVar6 + fVar1;
      pfVar7[0x28] = fVar1 - fVar6;
      pfVar7[0x20] = local_8 + local_10;
      pfVar7[0x18] = local_10 - local_8;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = param_3 + 1;
    pAVar9 = (AnonNested_00760DF0_0050_4F781EBD *)&pAVar9->field_0x4;
    pfVar7 = pfVar7 + 1;
    local_1c = (float)((int)local_1c + -1);
  } while (local_1c != 0.0);
  pfVar7 = local_120 + 2;
  local_14 = 1.12104e-44;
  do {
    puVar10 = (undefined1 *)(param_5 + *param_4);
    local_18 = *pfVar7 + pfVar7[4] + pfVar7[2] + pfVar7[-2];
    local_10 = (pfVar7[-2] - pfVar7[2]) -
               ((*pfVar7 - pfVar7[4]) * _DAT_007a22b0 - (*pfVar7 + pfVar7[4]));
    local_1c = pfVar7[-1] - pfVar7[5];
    local_c = (local_1c + (pfVar7[3] - pfVar7[1])) * _DAT_007a22ac;
    local_8 = (local_1c * _DAT_007a22a4 - local_c) +
              (((pfVar7[5] + pfVar7[-1]) - (pfVar7[3] + pfVar7[1])) * _DAT_007a22b0 -
              ((local_c - (pfVar7[3] - pfVar7[1]) * _DAT_007a22a8) -
              (pfVar7[5] + pfVar7[-1] + pfVar7[3] + pfVar7[1])));
    lVar11 = st::fn_0072E288();
    *puVar10 = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = st::fn_0072E288();
    puVar10[7] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = st::fn_0072E288();
    puVar10[1] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = st::fn_0072E288();
    puVar10[6] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = st::fn_0072E288();
    puVar10[2] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = st::fn_0072E288();
    puVar10[5] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = st::fn_0072E288();
    puVar10[4] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = st::fn_0072E288();
    pfVar7 = pfVar7 + 8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = param_4 + 1;
    local_14 = (float)((int)local_14 + -1);
    puVar10[3] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
  } while (local_14 != 0.0);
  return;
}

// 007611C0 FUN_007611c0
#line 4 "decomp/ST.exe/functions/007611C0/decomp.c"
void st::fn_007611C0(int param_1,AnonShape_007611C0_0B5C7A2E *param_2,int *param_3,int *param_4,
                 int param_5)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  AnonShape_007611C0_979BF099 AVar4;
  int iVar5;
  int iVar6;
  AnonShape_007611C0_979BF099 *pAVar7;
  int iVar8;
  AnonNested_007611C0_0050_9F22CF38 *pAVar9;
  int iVar10;
  int iVar11;
  int local_a0 [8];
  AnonShape_007611C0_979BF099 local_80 [24];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  AnonShape_007611C0_979BF099 *local_10;
  int local_c;
  int local_8;

  pAVar9 = param_2->field_0050;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = *(int *)(param_1 + 0x132) + 0x80;
  local_c = 8;
  pAVar7 = local_80;
  piVar2 = param_3 + 0x30;
  do {
    if (local_c != 4) {
      local_20 = piVar2[-0x28];
      local_18 = piVar2[-0x18];
      if (((((local_20 == 0 && local_18 == 0) && piVar2[-8] == 0) && piVar2[8] == 0) &&
          piVar2[-0x20] == 0) && *piVar2 == 0) {
        AVar4 = (AnonShape_007611C0_979BF099)(piVar2[-0x30] * pAVar9->field_0000 * 4);
        pAVar7[-8] = AVar4;
        *pAVar7 = AVar4;
        pAVar7[8] = AVar4;
        pAVar7[0x10] = AVar4;
      }
      else {
        iVar3 = st::machine_word_boundary_cast<int>(piVar2[-0x30] * pAVar9->field_0000 * 0x4000);
        iVar5 = st::machine_word_boundary_cast<int>(pAVar9->field_0040 * piVar2[-0x20] * 0x3b21 + pAVar9->field_00C0 * *piVar2 * -0x187e
        );
        iVar6 = iVar5 + iVar3;
        iVar8 = st::machine_word_boundary_cast<int>(pAVar9->field_00E0 * piVar2[8]);
        local_1c = iVar3 - iVar5;
        local_18 = st::machine_word_boundary_cast<int>(pAVar9->field_0060 * local_18);
        iVar3 = st::machine_word_boundary_cast<int>(pAVar9->field_00A0 * piVar2[-8]);
        local_20 = st::machine_word_boundary_cast<int>(pAVar9->field_0020 * local_20);
        iVar5 = iVar3 * 0x2e75 + local_18 * -0x4587 + local_20 * 0x21f9 + iVar8 * -0x6c2;
        iVar3 = local_20 * 0x5203 + local_18 * 0x1ccd + iVar3 * -0x133e + iVar8 * -0x1050;
        pAVar7[-8] = (AnonShape_007611C0_979BF099)(iVar6 + 0x800 + iVar3 >> 0xc);
        pAVar7[0x10] = (AnonShape_007611C0_979BF099)((iVar6 - iVar3) + 0x800 >> 0xc);
        pAVar7[8] = (AnonShape_007611C0_979BF099)((local_1c - iVar5) + 0x800 >> 0xc);
        *pAVar7 = (AnonShape_007611C0_979BF099)(local_1c + 0x800 + iVar5 >> 0xc);
      }
    }
    pAVar9 = (AnonNested_007611C0_0050_9F22CF38 *)&pAVar9->field_0x4;
    piVar2 = piVar2 + 1;
    pAVar7 = pAVar7 + 1;
    local_c = local_c + -1;
    local_10 = pAVar7;
  } while (0 < local_c);
  piVar2 = local_a0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = param_4;
  local_8 = 4;
  do {
    local_c = piVar2[3];
    iVar6 = piVar2[1];
    local_10 = (AnonShape_007611C0_979BF099 *)(param_5 + *param_3);
    iVar3 = piVar2[7];
    iVar5 = piVar2[5];
    if (((((iVar6 == 0 && piVar2[2] == 0) && local_c == 0) && iVar5 == 0) && piVar2[6] == 0) &&
        iVar3 == 0) {
      uVar1 = *(undefined1 *)((*piVar2 + 0x10 >> 5 & 0x3ffU) + local_14);
      *(undefined1 *)local_10 = uVar1;
      local_10->field_0001 = uVar1;
      local_10->field_0002 = uVar1;
      local_10->field_0003 = uVar1;
    }
    else {
      iVar10 = st::machine_word_boundary_cast<int>(piVar2[2] * 0x3b21 + piVar2[6] * -0x187e);
      iVar8 = iVar10 + *piVar2 * 0x4000;
      iVar10 = *piVar2 * 0x4000 - iVar10;
      iVar11 = iVar5 * 0x2e75 + local_c * -0x4587 + iVar6 * 0x21f9 + iVar3 * -0x6c2;
      iVar6 = iVar6 * 0x5203 + local_c * 0x1ccd + iVar5 * -0x133e + iVar3 * -0x1050;
      *(undefined1 *)local_10 =
           *(undefined1 *)((iVar8 + 0x40000 + iVar6 >> 0x13 & 0x3ffU) + local_14);
      local_10->field_0003 =
           *(undefined1 *)(((iVar8 - iVar6) + 0x40000 >> 0x13 & 0x3ffU) + local_14);
      local_10->field_0001 =
           *(undefined1 *)((iVar10 + 0x40000 + iVar11 >> 0x13 & 0x3ffU) + local_14);
      local_10->field_0002 =
           *(undefined1 *)(((iVar10 - iVar11) + 0x40000 >> 0x13 & 0x3ffU) + local_14);
    }
    piVar2 = piVar2 + 8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = param_3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

// 00761550 FUN_00761550
#line 4 "decomp/ST.exe/functions/00761550/decomp.c"
void st::fn_00761550(int *param_1,int param_2,int param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_4c [16];
  int local_c;
  int local_8;

  local_8 = STField<int>(param_1,0x132) + 0x80;
  piVar4 = (int *)(param_3 + 0x60);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar6 = (int *)(*(int *)(param_2 + 0x50) + 0x60);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = 8;
  piVar7 = local_4c;
  do {
    if (((param_2 != 6) && (param_2 != 4)) && (param_2 != 2)) {
      if (((piVar4[0x20] == 0 && piVar4[0x10] == 0) && piVar4[-0x10] == 0) && *piVar4 == 0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar2 = *(int *)((param_3 - (int)local_4c) + (int)piVar7) * piVar6[-0x18] * 4;
        *piVar7 = iVar2;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar2 = *(int *)((param_3 - (int)local_4c) + (int)piVar7) * piVar6[-0x18] * 0x8000;
        local_c = st::machine_word_boundary_cast<int>(piVar6[0x10] * piVar4[0x10] * 0x1b37);
        iVar5 = local_c + piVar6[0x20] * piVar4[0x20] * -0x1712 +
                piVar6[-0x10] * piVar4[-0x10] * 0x73fc + *piVar6 * *piVar4 * -0x28ba;
        *piVar7 = iVar5 + 0x1000 + iVar2 >> 0xd;
        iVar2 = (iVar2 - iVar5) + 0x1000 >> 0xd;
      }
      piVar7[8] = iVar2;
    }
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = param_2 + -1;
  } while (0 < param_2);
  piVar4 = local_4c;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = param_4;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = 2;
  do {
    puVar3 = (undefined1 *)(param_5 + *param_1);
    if (((piVar4[1] == 0 && piVar4[3] == 0) && piVar4[5] == 0) && piVar4[7] == 0) {
      uVar1 = *(undefined1 *)((*piVar4 + 0x10 >> 5 & 0x3ffU) + local_8);
      *puVar3 = uVar1;
      puVar3[1] = uVar1;
    }
    else {
      iVar5 = *piVar4;
      iVar2 = st::machine_word_boundary_cast<int>(piVar4[5] * 0x1b37 + piVar4[3] * -0x28ba + piVar4[7] * -0x1712 + piVar4[1] * 0x73fc);
      *puVar3 = *(undefined1 *)((iVar2 + 0x80000 + iVar5 * 0x8000 >> 0x14 & 0x3ffU) + local_8);
      puVar3[1] = *(undefined1 *)(((iVar5 * 0x8000 - iVar2) + 0x80000 >> 0x14 & 0x3ffU) + local_8);
    }
    piVar4 = piVar4 + 8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 + 1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

// 00761770 FUN_00761770
#line 4 "decomp/ST.exe/functions/00761770/decomp.c"
void st::fn_00761770(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  *(undefined1 *)(*param_4 + param_5) =
       *(undefined1 *)
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        ((**(int **)(param_2 + 0x50) * *param_3 + 4 >> 3 & 0x3ffU) + 0x80 +
        *(int *)(param_1 + 0x132));
  return;
}

// 00761960 FUN_00761960
#line 4 "decomp/ST.exe/functions/00761960/decomp.c"
undefined4 __cdecl st::fn_00761960(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 local_8;

  BVar1 = st::external_00000058(param_1,param_2);
  if (BVar1 == 0) {
    local_8 = st::external_00000028();
  }
  else {
    local_8 = 0;
  }
  if (local_8 == 0) {
    uVar2 = 0;
  }
  else {
    st::fn_00740BF0(local_8);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// 007619B0 FID_conflict:_remove
#line 4 "decomp/ST.exe/functions/007619B0/decomp.c"
/* Library Function - Multiple Matches With Different Base Names
    __wremove
    _remove

   Library: Visual Studio */

int __cdecl st::fn_007619B0(char *_Filename)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;

  BVar1 = st::external_0000006F(_Filename);
  if (BVar1 == 0) {
    local_8 = st::external_00000028();
  }
  else {
    local_8 = 0;
  }
  if (local_8 == 0) {
    iVar2 = 0;
  }
  else {
    st::fn_00740BF0(local_8);
    iVar2 = -1;
  }
  return iVar2;
}

// 00761A00 FUN_00761a00
#line 4 "decomp/ST.exe/functions/00761A00/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00761A00 -> 007619B0 @ 00761A07

   [STPrototypeApplier] Propagated return.
   Evidence: 00761A00 returns return of FID_conflict:_remove @ 00761A10 */

int __cdecl st::fn_00761A00(char *filename)

{
  int iVar1;

  iVar1 = FID_conflict__remove(filename);
  return iVar1;
}

