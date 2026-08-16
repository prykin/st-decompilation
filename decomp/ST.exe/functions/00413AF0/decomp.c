#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Unable to use type for symbol piVar16_mg0 */

void FUN_00413af0(void *param_1,DArrayTy *param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  RuntimeRecord_007F4D3C_0014 *pRVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  STGameObjC *pSVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  int iVar7;
  int local_EAX_2487;
  uint uVar15;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int *extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int *extraout_EDX_00;
  int *piVar16;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int *extraout_EDX_01;
  uint uVar17;
  byte *puVar18;
  int aiStackY_a0 [8];
  int local_48;
  int local_40;
  int local_34;
  int local_30;
  uint local_28;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  undefined4 *piVar16_mg0;

  local_8 = 0xffffffff;
  puStack_c = &DAT_00790090;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  PTR_007f4d04 = nullptr;
  PTR_007f4cf0 = g_pathingGrid.cells;
  DAT_007f4d2c = (int)g_pathingGrid.sizeX;
  DAT_007f4d30 = (int)g_pathingGrid.sizeY;
  DAT_007f4d34 = (int)g_pathingGrid.sizeZ;
  if ((PTR_007f4d50 == nullptr) || (ExceptionList = &local_14, PTR_007f4d54 == nullptr)) {
    aiStackY_a0[7] = 0x413b6b;
    ExceptionList = &local_14;
    FUN_00414980(4000);
  }
  iVar5 = (uint)STField<ushort>(param_1,0x27) * -0x14;
  iVar8 = DAT_007f4d34 * DAT_007f4d30 * DAT_007f4d2c + 7;
  uVar17 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
  *(undefined4 *)(&stack0xffffff80 + iVar5) = 0x413bc1;
  iVar8 = -(uVar17 + 3 & 0xfffffffc);
  puVar18 = (byte *)(&stack0xffffff84 + iVar8 + iVar5);
  memset(puVar18, 0, uVar17); /* compiler bulk-zero initialization */
  local_8 = 0xffffffff;
  iVar9 = DAT_007f4d30 * DAT_007f4d2c;
  DAT_007f4d24 = 0;
  g_bitset_007F4CFC = &stack0xffffff84 + iVar8 + iVar5;
  g_runtimeRecords_007F4D3C = (RuntimeRecord_007F4D3C_0014 *)(&stack0xffffff84 + iVar5);
  if (STField<ushort>(param_1,0x27) != DAT_007f4d4c) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DAT_007f4d4c = *(uint *)(STField<int>(param_1,0x29) + 0xc);
    local_28 = 0;
    g_bitset_007F4CFC = &stack0xffffff84 + iVar8 + iVar5;
    pbVar6 = &stack0xffffff84 + iVar8 + iVar5;
    g_runtimeRecords_007F4D3C = (RuntimeRecord_007F4D3C_0014 *)(&stack0xffffff84 + iVar5);
    pRVar7 = (RuntimeRecord_007F4D3C_0014 *)(&stack0xffffff84 + iVar5);
    if (0 < (int)DAT_007f4d4c) {
      do {
        g_runtimeRecords_007F4D3C = pRVar7;
        g_bitset_007F4CFC = pbVar6;
        iVar14 = STField<int>(param_1,0x29);
        if (local_28 < *(uint *)(iVar14 + 0xc)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          psVar10 = (short *)(*(int *)(iVar14 + 8) * local_28 + *(int *)(iVar14 + 0x1c));
        }
        else {
          psVar10 = nullptr;
        }
        if (psVar10 == nullptr) break;
        if (*psVar10 != -1) {
          *(uint *)(&stack0xffffff80 + iVar8 + iVar5) =
               STReplaceLowWord((uint32_t)(psVar10), (uint16_t)(*psVar10));
          *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0x413c88;
          pSVar11 = thunk_FUN_00423e70(param_1,*(ushort *)(&stack0xffffff80 + iVar8 + iVar5));
          if (pSVar11 != nullptr) {
            iVar14 = pSVar11->field_00C7;
            if (((((iVar14 < 0) || (g_pathingGrid.sizeX <= iVar14)) ||
                 (iVar13 = pSVar11->field_00CB, iVar13 < 0)) ||
                ((g_pathingGrid.sizeY <= iVar13 || (iVar4 = pSVar11->field_00CF, iVar4 < 0)))) ||
               (g_pathingGrid.sizeZ <= iVar4)) {
              sVar1 = pSVar11->field_0047;
              if (((-1 < sVar1) && (sVar1 < g_pathingGrid.sizeX)) &&
                 ((sVar2 = pSVar11->field_0049, -1 < sVar2 &&
                  (((sVar2 < g_pathingGrid.sizeY && (sVar3 = pSVar11->field_004B, -1 < sVar3)) &&
                   (sVar3 < g_pathingGrid.sizeZ)))))) {
                uVar15 = sVar3 * iVar9 + sVar2 * DAT_007f4d2c + (int)sVar1 ^ 7;
                STBitSet(g_bitset_007F4CFC, uVar15);
              }
            }
            else {
              uVar15 = iVar4 * iVar9 + iVar14 + iVar13 * DAT_007f4d2c ^ 7;
              STBitSet(g_bitset_007F4CFC, uVar15);
            }
            DAT_007f4d24 = DAT_007f4d24 + 1;
          }
        }
        local_28 = local_28 + 1;
        pbVar6 = g_bitset_007F4CFC;
        pRVar7 = g_runtimeRecords_007F4D3C;
      } while ((int)local_28 < (int)DAT_007f4d4c);
    }
  }
  *(uint *)(&stack0xffffff80 + iVar8 + iVar5) = (uint)STField<ushort>(param_1,0x27) * 0x1c;
  *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0x413d92;
  PTR_007f4d04 = Library::DKW::LIB::MemAlloc(*(uint *)(&stack0xffffff80 + iVar8 + iVar5));
  DAT_007f4d40 = 0;
  DAT_007f4cf8 = 0;
  local_30 = 0;
  local_34 = 0;
  local_40 = 0;
  DAT_007f4d48 = PTR_007f4d04;
  if ((STField<int>(param_1,0x4d) == -2) || (STField<int>(param_1,0x4d) == -3)) {
    local_48 = 0;
    local_28 = 0;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    piVar16_mg0 = extraout_EDX;
    if (STField<short>(param_1,0x27) != 0) {
      do {
        if (local_28 < param_2->count) {
          puVar12 = DArrayAt<undefined2>(param_2, local_28);
        }
        else {
          puVar12 = nullptr;
        }
        *(uint *)(&stack0xffffff80 + iVar8 + iVar5) =
             STReplaceLowWord((uint32_t)(piVar16_mg0), (uint16_t)(*puVar12));
        *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0x413fdb;
        pSVar11 = thunk_FUN_00423e70(param_1,*(ushort *)(&stack0xffffff80 + iVar8 + iVar5));
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        piVar16_mg0 = extraout_EDX_01;
        if (pSVar11 != nullptr) {
          pSVar11->field_00B7 = 0;
          if (0 < DAT_007f4d24) {
            iVar14 = pSVar11->field_00C7;
            if (((iVar14 < 0) || (g_pathingGrid.sizeX <= iVar14)) ||
               ((iVar13 = pSVar11->field_00CB, iVar13 < 0 ||
                (((g_pathingGrid.sizeY <= iVar13 || (iVar4 = pSVar11->field_00CF, iVar4 < 0)) ||
                 (g_pathingGrid.sizeZ <= iVar4)))))) {
              sVar1 = pSVar11->field_0047;
              if (((-1 < sVar1) && (sVar1 < g_pathingGrid.sizeX)) &&
                 ((sVar2 = pSVar11->field_0049, -1 < sVar2 &&
                  (((sVar2 < g_pathingGrid.sizeY && (sVar3 = pSVar11->field_004B, -1 < sVar3)) &&
                   (sVar3 < g_pathingGrid.sizeZ)))))) {
                local_20 = sVar2 * DAT_007f4d2c + sVar3 * iVar9 + (int)sVar1;
              }
            }
            else {
              local_20 = iVar4 * iVar9 + iVar14 + iVar13 * DAT_007f4d2c;
            }
            if ((g_bitset_007F4CFC[(int)(local_20 ^ 7) >> 3] >> ((local_20 ^ 7) & 7) & 1) != 0) {
              g_bitset_007F4CFC[(int)(local_20 ^ 7) >> 3] =
                   g_bitset_007F4CFC[(int)(local_20 ^ 7) >> 3] & ~('\x01' << ((local_20 ^ 7) & 7));
              DAT_007f4d24 = DAT_007f4d24 + -1;
            }
          }
          piVar16 = STField<int *>(param_1,0x59);
          iVar14 = local_48;
          if ((uint)(ushort)pSVar11->field_0032 != piVar16[local_48 * 4 + 6]) {
            iVar13 = local_48;
            do {
              iVar13 = iVar13 + 1;
              if (*piVar16 <= iVar13) {
                iVar13 = 0;
              }
              iVar14 = *piVar16;
            } while ((iVar13 != local_48) &&
                    (iVar14 = iVar13, (uint)(ushort)pSVar11->field_0032 != piVar16[iVar13 * 4 + 6]));
          }
          if (iVar14 < *piVar16) {
            PTR_007f4d04[DAT_007f4d40 * 7] = (int)pSVar11->field_0047;
            local_30 = local_30 + 2 + pSVar11->field_0047 * 4;
            PTR_007f4d04[DAT_007f4d40 * 7 + 1] = (int)pSVar11->field_0049;
            local_34 = local_34 + 2 + pSVar11->field_0049 * 4;
            PTR_007f4d04[DAT_007f4d40 * 7 + 2] = (int)pSVar11->field_004B;
            local_40 = local_40 + 2 + pSVar11->field_004B * 4;
            PTR_007f4d04[DAT_007f4d40 * 7 + 6] = local_28;
            if (STField<int>(param_1,0x4d) == -3) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              g_runtimeRecords_007F4D3C[DAT_007f4d40].field_0000 =
                   *(int *)(STField<int>(param_1,0x59) + 0xc + iVar14 * 0x10);
              g_runtimeRecords_007F4D3C[DAT_007f4d40].field_0004 =
                   *(int *)((iVar14 + 1) * 0x10 + STField<int>(param_1,0x59));
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              g_runtimeRecords_007F4D3C[DAT_007f4d40].field_0008 =
                   *(int *)(STField<int>(param_1,0x59) + 0x14 + iVar14 * 0x10);
            }
            else {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              PTR_007f4d04[DAT_007f4d40 * 7 + 3] =
                   *(undefined4 *)(STField<int>(param_1,0x59) + 0xc + iVar14 * 0x10);
              PTR_007f4d04[DAT_007f4d40 * 7 + 4] =
                   *(undefined4 *)((iVar14 + 1) * 0x10 + STField<int>(param_1,0x59));
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              PTR_007f4d04[DAT_007f4d40 * 7 + 5] =
                   *(undefined4 *)(STField<int>(param_1,0x59) + 0x14 + iVar14 * 0x10);
            }
            local_48 = iVar14 + 1;
            piVar16_mg0 = STField<int *>(param_1,0x59);
            if (*piVar16_mg0 <= local_48) {
              local_48 = 0;
            }
            DAT_007f4d40 = DAT_007f4d40 + 1;
          }
          else {
            DAT_007f4cf8 = DAT_007f4cf8 + 1;
            PTR_007f4d04[((uint)STField<ushort>(param_1,0x27) - DAT_007f4cf8) * 7] =
                 (int)pSVar11->field_0047;
            PTR_007f4d04[((uint)STField<ushort>(param_1,0x27) - DAT_007f4cf8) * 7 + 1] =
                 (int)pSVar11->field_0049;
            PTR_007f4d04[((uint)STField<ushort>(param_1,0x27) - DAT_007f4cf8) * 7 + 2] =
                 (int)pSVar11->field_004B;
            piVar16_mg0 = PTR_007f4d04;
            PTR_007f4d04[((uint)STField<ushort>(param_1,0x27) - DAT_007f4cf8) * 7 + 6] = local_28
            ;
          }
        }
        local_28 = local_28 + 1;
      } while ((int)local_28 < (int)(uint)STField<ushort>(param_1,0x27));
    }
  }
  else {
    local_28 = 0;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    piVar16 = extraout_EDX;
    if (STField<short>(param_1,0x27) != 0) {
      do {
        if (local_28 < param_2->count) {
          puVar12 = DArrayAt<undefined2>(param_2, local_28);
        }
        else {
          puVar12 = nullptr;
        }
        *(uint *)(&stack0xffffff80 + iVar8 + iVar5) =
             STReplaceLowWord((uint32_t)(piVar16), (uint16_t)(*puVar12));
        *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0x413df5;
        pSVar11 = thunk_FUN_00423e70(param_1,*(ushort *)(&stack0xffffff80 + iVar8 + iVar5));
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        piVar16 = extraout_EDX_00;
        if (pSVar11 != nullptr) {
          pSVar11->field_00B7 = 0;
          PTR_007f4d04[DAT_007f4d40 * 7] = (int)pSVar11->field_0047;
          local_30 = local_30 + 2 + pSVar11->field_0047 * 4;
          PTR_007f4d04[DAT_007f4d40 * 7 + 1] = (int)pSVar11->field_0049;
          local_34 = local_34 + 2 + pSVar11->field_0049 * 4;
          PTR_007f4d04[DAT_007f4d40 * 7 + 2] = (int)pSVar11->field_004B;
          local_40 = local_40 + 2 + pSVar11->field_004B * 4;
          piVar16 = (int *)(DAT_007f4d40 * 7);
          PTR_007f4d04[DAT_007f4d40 * 7 + 6] = local_28;
          if (0 < DAT_007f4d24) {
            iVar14 = pSVar11->field_00C7;
            if (((((iVar14 < 0) || (g_pathingGrid.sizeX <= iVar14)) ||
                 (iVar13 = pSVar11->field_00CB, iVar13 < 0)) ||
                ((g_pathingGrid.sizeY <= iVar13 || (iVar4 = pSVar11->field_00CF, iVar4 < 0)))) ||
               (g_pathingGrid.sizeZ <= iVar4)) {
              sVar1 = pSVar11->field_0047;
              if (((-1 < sVar1) && (sVar1 < g_pathingGrid.sizeX)) &&
                 ((sVar2 = pSVar11->field_0049, -1 < sVar2 &&
                  (((sVar2 < g_pathingGrid.sizeY && (sVar3 = pSVar11->field_004B, -1 < sVar3)) &&
                   (sVar3 < g_pathingGrid.sizeZ)))))) {
                local_20 = sVar2 * DAT_007f4d2c + sVar3 * iVar9 + (int)sVar1;
              }
            }
            else {
              local_20 = iVar4 * iVar9 + iVar14 + iVar13 * DAT_007f4d2c;
            }
            piVar16 = (int *)(local_20 ^ 7);
            if ((STBitTest(g_bitset_007F4CFC, piVar16)) != 0) {
              piVar16 = (int *)(local_20 ^ 7);
              STBitClear(g_bitset_007F4CFC, piVar16);
              DAT_007f4d24 = DAT_007f4d24 + -1;
            }
          }
          DAT_007f4d40 = DAT_007f4d40 + 1;
        }
        local_28 = local_28 + 1;
      } while ((int)local_28 < (int)(uint)STField<ushort>(param_1,0x27));
    }
  }
  if (DAT_007f4d24 < 0) {
    DAT_007f4d24 = 0;
  }
  DAT_007f4d20 = DAT_007f4d40;
  if (0 < DAT_007f4d40) {
    iVar9 = DAT_007f4d40 / 2;
    DAT_007f4d0c = (iVar9 + local_30) / DAT_007f4d40;
    DAT_007f4d10 = (local_34 + iVar9) / DAT_007f4d40;
    DAT_007f4d1c = (iVar9 + local_40) / DAT_007f4d40;
    *(int *)(&stack0xffffff80 + iVar8 + iVar5) = param_4;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = param_3;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = DAT_007f4d10 >> 2;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14) = DAT_007f4d0c >> 2;
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10) = 0x4143b1;
    DAT_007f4d08 = FUN_006ad0b0(*(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14),
                                *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18),
                                *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c),
                                *(int *)(&stack0xffffff80 + iVar8 + iVar5));
    if (DAT_007f4d08 == 0x7f) {
      DAT_007f4d08 = 0;
    }
  }
  if (((STField<int>(param_1,0x4d) != 0) && ((STField<byte>(param_1,0x49) & 1) == 0)) &&
     (DAT_007f4d4c == STField<ushort>(param_1,0x27))) {
    *(int *)(&stack0xffffff80 + iVar8 + iVar5) = param_4 * 4 + 2;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = param_3 * 4 + 2;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = DAT_007f4d10;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14) = DAT_007f4d0c;
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10) = 0x41440a;
    iVar7 = FUN_006db910(*(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14),
                         *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18),
                         *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c),
                         *(int *)(&stack0xffffff80 + iVar8 + iVar5));
    iVar9 = ((iVar7 * 4 + 0x2d) / 0x5a) * 0x5a;
    iVar9 = STSignedDiv4(iVar9);
    STField<int>(param_1,0x55) = iVar9;
    if (iVar9 == 0x168) {
      STField<undefined4>(param_1,0x55) = 0;
    }
  }
  *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = STField<undefined4>(param_1,0x55);
  *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0x41444f;
  DAT_007f4d28 = Library::DKW::STR::FUN_006db640(*(int *)(&stack0xffffff80 + iVar8 + iVar5));
  *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = STField<undefined4>(param_1,0x55);
  *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0x41445d;
  DAT_007f4d38 = FUN_006db6d0(*(int *)(&stack0xffffff80 + iVar8 + iVar5));
  iVar9 = STField<int>(param_1,0x4d);
  switch(iVar9) {
  case 1:
    *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = STField<undefined4>(param_1,0x51);
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = param_5;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14) = param_4;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0xc) = 0x4145d6;
    thunk_FUN_0040e0f0(*(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c),
                       *(int *)(&stack0xffffff80 + iVar8 + iVar5));
    break;
  case 2:
    *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = 0;
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = STField<undefined4>(param_1,0x51);
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = 0;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14) = param_5;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10) = param_4;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0xc) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 8) = 0x4145eb;
    thunk_FUN_0040fc40(*(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0xc),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c),
                       *(int *)(&stack0xffffff80 + iVar8 + iVar5));
    break;
  case 3:
    *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = STField<undefined4>(param_1,0x55);
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = STField<undefined4>(param_1,0x51);
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = 0;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14) = param_5;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10) = param_4;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0xc) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 8) = 0x414602;
    thunk_FUN_00411260(*(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0xc),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c),
                       *(uint *)(&stack0xffffff80 + iVar8 + iVar5));
    break;
  case 4:
  case 5:
    *(uint *)(&stack0xffffff80 + iVar8 + iVar5) = (uint)(iVar9 == 4);
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = STField<undefined4>(param_1,0x55);
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = STField<undefined4>(param_1,0x51);
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14) = 0;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10) = param_5;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0xc) = param_4;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 8) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 4) = 0x414622;
    thunk_FUN_00411e50(*(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 8),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0xc),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18),
                       *(uint *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c),
                       *(int *)(&stack0xffffff80 + iVar8 + iVar5));
    break;
  case -10:
    *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = STField<undefined4>(param_1,0x51);
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0;
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = 2;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14) = param_4;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0xc) = 0x414633;
    thunk_FUN_00410dc0(*(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c),
                       *(int *)(&stack0xffffff80 + iVar8 + iVar5));
    break;
  default:
    *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = STField<undefined4>(param_1,0x51);
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = param_5;
    goto LAB_0041463f;
  case -3:
  case -2:
    if (DAT_007f4d20 < 1) {
      local_EAX_2487 = 0;
    }
    else {
      *(uint *)(&stack0xffffff80 + iVar8 + iVar5) = (uint)(iVar9 == -2);
      *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) =
           STField<undefined4>(param_1,0x59);
      *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) =
           STField<undefined4>(param_1,0x51);
      *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14) =
           STField<undefined4>(param_1,0x55);
      *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10) = 0;
      *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0xc) = param_5;
      *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 8) = param_4;
      *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 4) = param_3;
      *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5) = 0x4144ac;
      local_EAX_2487 =
           thunk_FUN_00412960(*(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 4),
                              *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 8),
                              *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0xc),
                              *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10),
                              *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14),
                              *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18),
                              *(AnonShape_00412960_B35D15BC **)
                               ((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c),
                              *(int *)(&stack0xffffff80 + iVar8 + iVar5));
    }
    if ((local_EAX_2487 != 0) || (DAT_007f4cf8 < 1)) break;
    DAT_007f4d48 = PTR_007f4d04 + ((uint)STField<ushort>(param_1,0x27) - DAT_007f4cf8) * 7;
    DAT_007f4d20 = DAT_007f4cf8;
    iVar9 = STField<int>(param_1,0x55);
    if ((iVar9 < 0x152) && (0x17 < iVar9)) {
      if (iVar9 < 0x125) {
        if (iVar9 < 0xf8) {
          if (iVar9 < 0xcb) {
            if (iVar9 < 0x9e) {
              if (iVar9 < 0x71) {
                DAT_007f4d08 = (0x43 < iVar9) + 1;
                *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = 0;
                *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0;
                *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = param_5;
              }
              else {
                DAT_007f4d08 = 3;
                *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = 0;
                *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0;
                *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = param_5;
              }
            }
            else {
              DAT_007f4d08 = 4;
              *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = 0;
              *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0;
              *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = param_5;
            }
          }
          else {
            DAT_007f4d08 = 5;
            *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = 0;
            *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0;
            *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = param_5;
          }
        }
        else {
          DAT_007f4d08 = 6;
          *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = 0;
          *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0;
          *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = param_5;
        }
      }
      else {
        DAT_007f4d08 = 7;
        *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = 0;
        *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0;
        *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = param_5;
      }
    }
    else {
      DAT_007f4d08 = 0;
      *(undefined4 *)(&stack0xffffff80 + iVar8 + iVar5) = 0;
      *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c) = 0;
      *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18) = param_5;
    }
LAB_0041463f:
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14) = param_4;
    *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar8 + iVar5 + 0xc) = 0x414646;
    thunk_FUN_00413050(*(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar8 + iVar5 + 0x1c),
                       *(int *)(&stack0xffffff80 + iVar8 + iVar5));
  }
  STField<uint>(param_1,0x49) = STField<uint>(param_1,0x49) & 0xfffffffe;
  ExceptionList = local_14;
  return;
}

