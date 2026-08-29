#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Unable to use type for symbol piVar16_mg0 */

void FUN_00413af0(STGroupBoatC *param_1,DArrayTy *param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  DArrayTy *pDVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  RuntimeRecord_007F4D3C_0014 *pRVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  STGameObjC *pSVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  int iVar7;
  int local_EAX_2487;
  uint uVar16;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int *extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int *extraout_EDX_00;
  int *piVar17;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int *extraout_EDX_01;
  uint uVar18;
  byte *puVar19;
  int aiStackY_a0 [8];
  int local_48;
  int local_40;
  int local_34;
  int local_30;
  uint local_28;
  uint local_20;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
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
  iVar6 = (uint)(ushort)param_1->field_0027 * -0x14;
  iVar9 = DAT_007f4d34 * DAT_007f4d30 * DAT_007f4d2c + 7;
  uVar18 = (int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3;
  *(undefined4 *)(&stack0xffffff80 + iVar6) = 0x413bc1;
  iVar9 = -(uVar18 + 3 & 0xfffffffc);
  puVar19 = (byte *)(&stack0xffffff84 + iVar9 + iVar6);
  memset(puVar19, 0, uVar18); /* compiler bulk-zero initialization */
  local_8 = 0xffffffff;
  iVar10 = DAT_007f4d30 * DAT_007f4d2c;
  DAT_007f4d24 = 0;
  g_bitset_007F4CFC = &stack0xffffff84 + iVar9 + iVar6;
  g_runtimeRecords_007F4D3C = (RuntimeRecord_007F4D3C_0014 *)(&stack0xffffff84 + iVar6);
  if ((ushort)param_1->field_0027 != DAT_007f4d4c) {
    DAT_007f4d4c = param_1->field_0029->count;
    local_28 = 0;
    g_bitset_007F4CFC = &stack0xffffff84 + iVar9 + iVar6;
    pbVar7 = &stack0xffffff84 + iVar9 + iVar6;
    g_runtimeRecords_007F4D3C = (RuntimeRecord_007F4D3C_0014 *)(&stack0xffffff84 + iVar6);
    pRVar8 = (RuntimeRecord_007F4D3C_0014 *)(&stack0xffffff84 + iVar6);
    if (0 < (int)DAT_007f4d4c) {
      do {
        g_runtimeRecords_007F4D3C = pRVar8;
        g_bitset_007F4CFC = pbVar7;
        pDVar4 = param_1->field_0029;
        if (local_28 < pDVar4->count) {
          psVar11 = DArrayAt<short>(pDVar4, local_28);
        }
        else {
          psVar11 = nullptr;
        }
        if (psVar11 == nullptr) break;
        if (*psVar11 != -1) {
          *(uint *)(&stack0xffffff80 + iVar9 + iVar6) =
               STReplaceLowWord((uint32_t)(psVar11), (uint16_t)(*psVar11));
          *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0x413c88;
          /* ST_CALLSITE[00413C83]: CALL 0x0040286f; direct=0040286F STGroupBoatC::sub_00423E70 */
          pSVar12 = STGroupBoatC::sub_00423E70
                              (param_1,*(ushort *)(&stack0xffffff80 + iVar9 + iVar6));
          if (pSVar12 != nullptr) {
            iVar15 = pSVar12->field_00C7;
            if (((((iVar15 < 0) || (g_pathingGrid.sizeX <= iVar15)) ||
                 (iVar14 = pSVar12->field_00CB, iVar14 < 0)) ||
                ((g_pathingGrid.sizeY <= iVar14 || (iVar5 = pSVar12->field_00CF, iVar5 < 0)))) ||
               (g_pathingGrid.sizeZ <= iVar5)) {
              sVar1 = pSVar12->field_0047;
              if (((-1 < sVar1) && (sVar1 < g_pathingGrid.sizeX)) &&
                 ((sVar2 = pSVar12->field_0049, -1 < sVar2 &&
                  (((sVar2 < g_pathingGrid.sizeY && (sVar3 = pSVar12->field_004B, -1 < sVar3)) &&
                   (sVar3 < g_pathingGrid.sizeZ)))))) {
                uVar16 = sVar3 * iVar10 + sVar2 * DAT_007f4d2c + (int)sVar1 ^ 7;
                STBitSet(g_bitset_007F4CFC, uVar16);
              }
            }
            else {
              uVar16 = iVar5 * iVar10 + iVar15 + iVar14 * DAT_007f4d2c ^ 7;
              STBitSet(g_bitset_007F4CFC, uVar16);
            }
            DAT_007f4d24 = DAT_007f4d24 + 1;
          }
        }
        local_28 = local_28 + 1;
        pbVar7 = g_bitset_007F4CFC;
        pRVar8 = g_runtimeRecords_007F4D3C;
      } while ((int)local_28 < (int)DAT_007f4d4c);
    }
  }
  *(uint *)(&stack0xffffff80 + iVar9 + iVar6) = (uint)(ushort)param_1->field_0027 * 0x1c;
  *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0x413d92;

  PTR_007f4d04 = Library::DKW::LIB::MemAlloc(*(uint *)(&stack0xffffff80 + iVar9 + iVar6));
  DAT_007f4d40 = 0;
  DAT_007f4cf8 = 0;
  local_30 = 0;
  local_34 = 0;
  local_40 = 0;
  DAT_007f4d48 = PTR_007f4d04;
  if ((param_1->field_004D == -2) || (param_1->field_004D == -3)) {
    local_48 = 0;
    local_28 = 0;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    piVar16_mg0 = extraout_EDX;
    if (param_1->field_0027 != 0) {
      do {
        if (local_28 < param_2->count) {
          puVar13 = DArrayAt<undefined2>(param_2, local_28);
        }
        else {
          puVar13 = nullptr;
        }
        *(uint *)(&stack0xffffff80 + iVar9 + iVar6) =
             STReplaceLowWord((uint32_t)(piVar16_mg0), (uint16_t)(*puVar13));
        *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0x413fdb;
        /* ST_CALLSITE[00413FD6]: CALL 0x0040286f; direct=0040286F STGroupBoatC::sub_00423E70 */
        pSVar12 = STGroupBoatC::sub_00423E70(param_1,*(ushort *)(&stack0xffffff80 + iVar9 + iVar6));
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        piVar16_mg0 = extraout_EDX_01;
        if (pSVar12 != nullptr) {
          pSVar12->field_00B7 = 0;
          if (0 < DAT_007f4d24) {
            iVar15 = pSVar12->field_00C7;
            if (((iVar15 < 0) || (g_pathingGrid.sizeX <= iVar15)) ||
               ((iVar14 = pSVar12->field_00CB, iVar14 < 0 ||
                (((g_pathingGrid.sizeY <= iVar14 || (iVar5 = pSVar12->field_00CF, iVar5 < 0)) ||
                 (g_pathingGrid.sizeZ <= iVar5)))))) {
              sVar1 = pSVar12->field_0047;
              if (((-1 < sVar1) && (sVar1 < g_pathingGrid.sizeX)) &&
                 ((sVar2 = pSVar12->field_0049, -1 < sVar2 &&
                  (((sVar2 < g_pathingGrid.sizeY && (sVar3 = pSVar12->field_004B, -1 < sVar3)) &&
                   (sVar3 < g_pathingGrid.sizeZ)))))) {
                local_20 = sVar2 * DAT_007f4d2c + sVar3 * iVar10 + (int)sVar1;
              }
            }
            else {
              local_20 = iVar5 * iVar10 + iVar15 + iVar14 * DAT_007f4d2c;
            }
            if ((g_bitset_007F4CFC[(int)(local_20 ^ 7) >> 3] >> ((local_20 ^ 7) & 7) & 1) != 0) {
              g_bitset_007F4CFC[(int)(local_20 ^ 7) >> 3] =
                   g_bitset_007F4CFC[(int)(local_20 ^ 7) >> 3] & ~('\x01' << ((local_20 ^ 7) & 7));
              DAT_007f4d24 = DAT_007f4d24 + -1;
            }
          }
          piVar17 = param_1->field_0059;
          iVar15 = local_48;
          if ((uint)(ushort)pSVar12->field_0032 != piVar17[local_48 * 4 + 6]) {
            iVar14 = local_48;
            do {
              iVar14 = iVar14 + 1;
              if (*piVar17 <= iVar14) {
                iVar14 = 0;
              }
              iVar15 = *piVar17;
            } while ((iVar14 != local_48) &&
                    (iVar15 = iVar14, (uint)(ushort)pSVar12->field_0032 != piVar17[iVar14 * 4 + 6]));
          }
          if (iVar15 < *piVar17) {
            PTR_007f4d04[DAT_007f4d40 * 7] = (int)pSVar12->field_0047;
            local_30 = local_30 + 2 + pSVar12->field_0047 * 4;
            PTR_007f4d04[DAT_007f4d40 * 7 + 1] = (int)pSVar12->field_0049;
            local_34 = local_34 + 2 + pSVar12->field_0049 * 4;
            PTR_007f4d04[DAT_007f4d40 * 7 + 2] = (int)pSVar12->field_004B;
            local_40 = local_40 + 2 + pSVar12->field_004B * 4;
            PTR_007f4d04[DAT_007f4d40 * 7 + 6] = local_28;
            if (param_1->field_004D == -3) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              g_runtimeRecords_007F4D3C[DAT_007f4d40].field_0000 =
                   *(int *)((int)param_1->field_0059 + iVar15 * 0x10 + 0xc);
              g_runtimeRecords_007F4D3C[DAT_007f4d40].field_0004 =
                   *(int *)((iVar15 + 1) * 0x10 + (int)param_1->field_0059);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              g_runtimeRecords_007F4D3C[DAT_007f4d40].field_0008 =
                   *(int *)((int)param_1->field_0059 + iVar15 * 0x10 + 0x14);
            }
            else {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              PTR_007f4d04[DAT_007f4d40 * 7 + 3] =
                   *(undefined4 *)((int)param_1->field_0059 + iVar15 * 0x10 + 0xc);
              PTR_007f4d04[DAT_007f4d40 * 7 + 4] =
                   *(undefined4 *)((iVar15 + 1) * 0x10 + (int)param_1->field_0059);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              PTR_007f4d04[DAT_007f4d40 * 7 + 5] =
                   *(undefined4 *)((int)param_1->field_0059 + iVar15 * 0x10 + 0x14);
            }
            local_48 = iVar15 + 1;
            piVar16_mg0 = param_1->field_0059;
            if (*piVar16_mg0 <= local_48) {
              local_48 = 0;
            }
            DAT_007f4d40 = DAT_007f4d40 + 1;
          }
          else {
            DAT_007f4cf8 = DAT_007f4cf8 + 1;
            PTR_007f4d04[((uint)(ushort)param_1->field_0027 - DAT_007f4cf8) * 7] =
                 (int)pSVar12->field_0047;
            PTR_007f4d04[((uint)(ushort)param_1->field_0027 - DAT_007f4cf8) * 7 + 1] =
                 (int)pSVar12->field_0049;
            PTR_007f4d04[((uint)(ushort)param_1->field_0027 - DAT_007f4cf8) * 7 + 2] =
                 (int)pSVar12->field_004B;
            piVar16_mg0 = PTR_007f4d04;
            PTR_007f4d04[((uint)(ushort)param_1->field_0027 - DAT_007f4cf8) * 7 + 6] = local_28;
          }
        }
        local_28 = local_28 + 1;
      } while ((int)local_28 < (int)(uint)(ushort)param_1->field_0027);
    }
  }
  else {
    local_28 = 0;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    piVar17 = extraout_EDX;
    if (param_1->field_0027 != 0) {
      do {
        if (local_28 < param_2->count) {
          puVar13 = DArrayAt<undefined2>(param_2, local_28);
        }
        else {
          puVar13 = nullptr;
        }
        *(uint *)(&stack0xffffff80 + iVar9 + iVar6) =
             STReplaceLowWord((uint32_t)(piVar17), (uint16_t)(*puVar13));
        *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0x413df5;
        /* ST_CALLSITE[00413DF0]: CALL 0x0040286f; direct=0040286F STGroupBoatC::sub_00423E70 */
        pSVar12 = STGroupBoatC::sub_00423E70(param_1,*(ushort *)(&stack0xffffff80 + iVar9 + iVar6));
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        piVar17 = extraout_EDX_00;
        if (pSVar12 != nullptr) {
          pSVar12->field_00B7 = 0;
          PTR_007f4d04[DAT_007f4d40 * 7] = (int)pSVar12->field_0047;
          local_30 = local_30 + 2 + pSVar12->field_0047 * 4;
          PTR_007f4d04[DAT_007f4d40 * 7 + 1] = (int)pSVar12->field_0049;
          local_34 = local_34 + 2 + pSVar12->field_0049 * 4;
          PTR_007f4d04[DAT_007f4d40 * 7 + 2] = (int)pSVar12->field_004B;
          local_40 = local_40 + 2 + pSVar12->field_004B * 4;
          piVar17 = (int *)(DAT_007f4d40 * 7);
          PTR_007f4d04[DAT_007f4d40 * 7 + 6] = local_28;
          if (0 < DAT_007f4d24) {
            iVar15 = pSVar12->field_00C7;
            if (((((iVar15 < 0) || (g_pathingGrid.sizeX <= iVar15)) ||
                 (iVar14 = pSVar12->field_00CB, iVar14 < 0)) ||
                ((g_pathingGrid.sizeY <= iVar14 || (iVar5 = pSVar12->field_00CF, iVar5 < 0)))) ||
               (g_pathingGrid.sizeZ <= iVar5)) {
              sVar1 = pSVar12->field_0047;
              if (((-1 < sVar1) && (sVar1 < g_pathingGrid.sizeX)) &&
                 ((sVar2 = pSVar12->field_0049, -1 < sVar2 &&
                  (((sVar2 < g_pathingGrid.sizeY && (sVar3 = pSVar12->field_004B, -1 < sVar3)) &&
                   (sVar3 < g_pathingGrid.sizeZ)))))) {
                local_20 = sVar2 * DAT_007f4d2c + sVar3 * iVar10 + (int)sVar1;
              }
            }
            else {
              local_20 = iVar5 * iVar10 + iVar15 + iVar14 * DAT_007f4d2c;
            }
            piVar17 = (int *)(local_20 ^ 7);
            if ((STBitTest(g_bitset_007F4CFC, piVar17)) != 0) {
              piVar17 = (int *)(local_20 ^ 7);
              STBitClear(g_bitset_007F4CFC, piVar17);
              DAT_007f4d24 = DAT_007f4d24 + -1;
            }
          }
          DAT_007f4d40 = DAT_007f4d40 + 1;
        }
        local_28 = local_28 + 1;
      } while ((int)local_28 < (int)(uint)(ushort)param_1->field_0027);
    }
  }
  if (DAT_007f4d24 < 0) {
    DAT_007f4d24 = 0;
  }
  DAT_007f4d20 = DAT_007f4d40;
  if (0 < DAT_007f4d40) {
    iVar10 = DAT_007f4d40 / 2;
    DAT_007f4d0c = (iVar10 + local_30) / DAT_007f4d40;
    DAT_007f4d10 = (local_34 + iVar10) / DAT_007f4d40;
    DAT_007f4d1c = (iVar10 + local_40) / DAT_007f4d40;
    *(int *)(&stack0xffffff80 + iVar9 + iVar6) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = param_3;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = DAT_007f4d10 >> 2;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = DAT_007f4d0c >> 2;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = 0x4143b1;

    DAT_007f4d08 = FUN_006ad0b0(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                                *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                                *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                                *(int *)(&stack0xffffff80 + iVar9 + iVar6));
    if (DAT_007f4d08 == 0x7f) {
      DAT_007f4d08 = 0;
    }
  }
  if (((param_1->field_004D != 0) && (((byte)param_1->field_0049 & 1) == 0)) &&
     (DAT_007f4d4c == (ushort)param_1->field_0027)) {
    *(int *)(&stack0xffffff80 + iVar9 + iVar6) = param_4 * 4 + 2;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = param_3 * 4 + 2;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = DAT_007f4d10;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = DAT_007f4d0c;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = 0x41440a;

    iVar7 = FUN_006db910(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                         *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                         *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                         *(int *)(&stack0xffffff80 + iVar9 + iVar6));
    iVar10 = ((iVar7 * 4 + 0x2d) / 0x5a) * 0x5a;
    iVar10 = STSignedDiv4(iVar10);
    param_1->field_0055 = iVar10;
    if (iVar10 == 0x168) {
      param_1->field_0055 = 0;
    }
  }
  *(int *)(&stack0xffffff80 + iVar9 + iVar6) = param_1->field_0055;
  *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0x41444f;

  DAT_007f4d28 = Library::DKW::STR::FUN_006db640(*(int *)(&stack0xffffff80 + iVar9 + iVar6));
  *(int *)(&stack0xffffff80 + iVar9 + iVar6) = param_1->field_0055;
  *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0x41445d;

  DAT_007f4d38 = FUN_006db6d0(*(int *)(&stack0xffffff80 + iVar9 + iVar6));
  iVar10 = param_1->field_004D;
  switch(iVar10) {
  case 1:
    *(undefined4 *)(&stack0xffffff80 + iVar9 + iVar6) = param_1->field_0051;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = 0x4145d6;

    thunk_FUN_0040e0f0(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                       *(int *)(&stack0xffffff80 + iVar9 + iVar6));
    break;
  case 2:
    *(undefined4 *)(&stack0xffffff80 + iVar9 + iVar6) = 0;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = param_1->field_0051;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = 0;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = param_5;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 8) = 0x4145eb;

    thunk_FUN_0040fc40(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                       *(int *)(&stack0xffffff80 + iVar9 + iVar6));
    break;
  case 3:
    *(int *)(&stack0xffffff80 + iVar9 + iVar6) = param_1->field_0055;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = param_1->field_0051;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = 0;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = param_5;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 8) = 0x414602;

    thunk_FUN_00411260(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                       *(uint *)(&stack0xffffff80 + iVar9 + iVar6));
    break;
  case 4:
  case 5:
    *(uint *)(&stack0xffffff80 + iVar9 + iVar6) = (uint)(iVar10 == 4);
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = param_1->field_0055;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_1->field_0051;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = 0;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = param_5;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 8) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 4) = 0x414622;

    thunk_FUN_00411e50(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 8),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                       *(uint *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                       *(int *)(&stack0xffffff80 + iVar9 + iVar6));
    break;
  case -10:
    *(undefined4 *)(&stack0xffffff80 + iVar9 + iVar6) = param_1->field_0051;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = 2;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = 0x414633;

    thunk_FUN_00410dc0(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                       *(int *)(&stack0xffffff80 + iVar9 + iVar6));
    break;
  default:
    *(undefined4 *)(&stack0xffffff80 + iVar9 + iVar6) = param_1->field_0051;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
    goto LAB_0041463f;
  case -3:
  case -2:
    if (DAT_007f4d20 < 1) {
      local_EAX_2487 = 0;
    }
    else {
      *(uint *)(&stack0xffffff80 + iVar9 + iVar6) = (uint)(iVar10 == -2);
      *(void **)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = param_1->field_0059;
      *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_1->field_0051;
      *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = param_1->field_0055;
      *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = 0;
      *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = param_5;
      *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 8) = param_4;
      *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 4) = param_3;
      *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6) = 0x4144ac;

      local_EAX_2487 =
           thunk_FUN_00412960(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 4),
                              *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 8),
                              *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc),
                              *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                              *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                              *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                              *(RecoveredRecordView_00412960_AA54A22A **)
                               ((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                              *(int *)(&stack0xffffff80 + iVar9 + iVar6));
    }
    if ((local_EAX_2487 != 0) || (DAT_007f4cf8 < 1)) break;
    DAT_007f4d48 = PTR_007f4d04 + ((uint)(ushort)param_1->field_0027 - DAT_007f4cf8) * 7;
    DAT_007f4d20 = DAT_007f4cf8;
    iVar10 = param_1->field_0055;
    if ((iVar10 < 0x152) && (0x17 < iVar10)) {
      if (iVar10 < 0x125) {
        if (iVar10 < 0xf8) {
          if (iVar10 < 0xcb) {
            if (iVar10 < 0x9e) {
              if (iVar10 < 0x71) {
                DAT_007f4d08 = (0x43 < iVar10) + 1;
                *(undefined4 *)(&stack0xffffff80 + iVar9 + iVar6) = 0;
                *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
                *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
              }
              else {
                DAT_007f4d08 = 3;
                *(undefined4 *)(&stack0xffffff80 + iVar9 + iVar6) = 0;
                *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
                *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
              }
            }
            else {
              DAT_007f4d08 = 4;
              *(undefined4 *)(&stack0xffffff80 + iVar9 + iVar6) = 0;
              *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
              *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
            }
          }
          else {
            DAT_007f4d08 = 5;
            *(undefined4 *)(&stack0xffffff80 + iVar9 + iVar6) = 0;
            *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
            *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
          }
        }
        else {
          DAT_007f4d08 = 6;
          *(undefined4 *)(&stack0xffffff80 + iVar9 + iVar6) = 0;
          *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
          *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
        }
      }
      else {
        DAT_007f4d08 = 7;
        *(undefined4 *)(&stack0xffffff80 + iVar9 + iVar6) = 0;
        *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
        *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
      }
    }
    else {
      DAT_007f4d08 = 0;
      *(undefined4 *)(&stack0xffffff80 + iVar9 + iVar6) = 0;
      *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
      *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
    }
LAB_0041463f:
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = 0x414646;

    thunk_FUN_00413050(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                       *(int *)(&stack0xffffff80 + iVar9 + iVar6));
  }
  param_1->field_0049 = param_1->field_0049 & 0xfffffffe;
  ExceptionList = local_14;
  return;
}

