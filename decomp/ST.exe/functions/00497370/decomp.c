#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00496CC0 -> 00497370 @ 00496D62; FUN_00496cc0 parameter param_5 */

undefined4 FUN_00497370(int param_1,int param_2,uint param_3,uint param_4,void *param_5)

{
  byte bVar1;
  dword dVar2;
  RecoveredRecord_0060CA20_1F95243D *pRVar3;
  int iVar3;
  int uVar4_mg3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  DArrayTy *pDVar15;
  bool bVar16;
  int aiStack_84 [4];
  uint uStack_74;
  uint local_60;
  char local_5c;
  undefined3 uStack_5b;
  dword local_44;
  int local_40;
  int *local_3c;
  byte *local_38;
  uint local_34;
  int local_30;
  uint local_28;
  int local_20;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  puStack_c = &DAT_00790718;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_28 = 0xffffffff;
  dVar2 = g_array_007FB270->count;
  local_44 = dVar2;
  uStack_74 = 0x4973c3;
  local_38 = &stack0xffffff90 + dVar2 * -0x18;
  aiStack_84[dVar2 * -6 + 4] = 0x4973de;
  local_1c = &stack0xffffff90 + dVar2 * -0x1c;
  local_3c = (int *)(&stack0xffffff90 + dVar2 * -0x1c);
  local_8 = 0xffffffff;
  local_30 = 0;
  local_40 = 0;
  local_34 = 0;
  ExceptionList = &local_14;
  if (0 < (int)dVar2) {
    puVar12 = &local_60 + dVar2 * -6;
    pDVar15 = g_array_007FB270;
    ExceptionList = &local_14;
    do {
      if (local_34 < pDVar15->count) {
        puVar13 = DArrayAt<uint>(pDVar15, local_34);
      }
      else {
        puVar13 = nullptr;
      }
      uVar10 = puVar13[2];
      if (uVar10 != param_3) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_5c = CONCAT31(uStack_5b,(char)uVar10);
        if (DAT_00808a8f == '\0') {
          if ((char)uVar10 == (char)param_3) {
LAB_004974ca:
            iVar9 = 0;
          }
          else {
            uVar10 = uVar10 & 0xff;
            uVar8 = param_3 & 0xff;
            bVar1 = g_playerRelationMatrix[uVar10][uVar8];
            if ((bVar1 == 0) && (g_playerRelationMatrix[uVar8][uVar10] == 0)) {
              iVar9 = -2;
            }
            else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar8][uVar10] == 0)) {
              iVar9 = -1;
            }
            else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar8][uVar10] == 1)) {
              iVar9 = 1;
            }
            else {
              if ((bVar1 != 1) || (g_playerRelationMatrix[uVar8][uVar10] != 1)) goto LAB_004974ca;
              iVar9 = 2;
            }
          }
          bVar16 = iVar9 < 0;
        }
        else {
          bVar16 = g_bulkInitializedRecords_008087C7[param_3 & 0xff].field_0023 !=
                   g_bulkInitializedRecords_008087C7[uVar10 & 0xff].field_0023;
        }
        if (bVar16) {
          aiStack_84[dVar2 * -7 + 4] = param_2 * 0xc9 + 100;
          aiStack_84[dVar2 * -7 + 3] = param_1 * 0xc9 + 100;
          aiStack_84[dVar2 * -7 + 2] = puVar13[1] * 0xc9 + 100;
          aiStack_84[dVar2 * -7 + 1] = *puVar13 * 0xc9 + 100;
          aiStack_84[dVar2 * -7] = 0x497515;

          iVar3 = FUN_006aced8(aiStack_84[dVar2 * -7 + 1],aiStack_84[dVar2 * -7 + 2],
                               aiStack_84[dVar2 * -7 + 3],aiStack_84[dVar2 * -7 + 4]);
          pDVar15 = g_array_007FB270;
          if (iVar3 < 0xbc7) {
            puVar14 = puVar12 + -4;
            memmove(puVar14, puVar13, 0x18); /* compiler REP MOVS byte copy */
            pRVar3 = (RecoveredRecord_0060CA20_1F95243D *)puVar12[1];
            aiStack_84[dVar2 * -7 + 4] = 0x497531;

            uVar4_mg3 = thunk_FUN_0060ca20(pRVar3);
            uVar10 = (uVar4_mg3 < 0) - 1 & uVar4_mg3;
            *puVar12 = uVar10;
            local_40 = local_40 + uVar10;
            local_30 = local_30 + 1;
            puVar12 = puVar12 + 6;
            pDVar15 = g_array_007FB270;
          }
        }
      }
      local_34 = local_34 + 1;
    } while ((int)local_34 < (int)local_44);
  }
  if (local_30 != 0) {
    aiStack_84[dVar2 * -7 + 4] = 0x497571;

    iVar4 = thunk_FUN_0060ca20(param_5);
    iVar7 = local_30;
    local_20 = local_30;
    iVar9 = iVar4 / local_30;
    if (iVar4 < local_40) {
      iVar6 = 0;
      piVar11 = local_3c;
      if (0 < local_30) {
        do {
          *piVar11 = iVar6;
          iVar6 = iVar6 + 1;
          piVar11 = piVar11 + 1;
        } while (iVar6 < local_30);
      }
      aiStack_84[dVar2 * -7 + 4] = local_30;
      aiStack_84[dVar2 * -7 + 3] = (int)local_3c;
      aiStack_84[dVar2 * -7 + 2] = (int)local_38;
      aiStack_84[dVar2 * -7 + 1] = 0x4975cf;
      thunk_FUN_004977c0(aiStack_84[dVar2 * -7 + 2],(int *)aiStack_84[dVar2 * -7 + 3],
                         aiStack_84[dVar2 * -7 + 4]);
      while (0 < iVar4) {
        iVar6 = local_30 - iVar7;
        if (iVar6 < local_30) {
          piVar11 = (int *)(local_38 + iVar6 * 0x18 + 0x10);
          iVar6 = local_30 - iVar6;
          do {
            iVar7 = *piVar11;
            if (iVar7 < iVar9) {
              *piVar11 = 0;
              local_20 = local_20 + -1;
            }
            else {
              *piVar11 = iVar7 - iVar9;
              iVar7 = iVar9;
            }
            local_40 = local_40 - iVar7;
            iVar4 = iVar4 - iVar7;
            piVar11 = piVar11 + 6;
            iVar6 = iVar6 + -1;
            iVar7 = local_20;
          } while (iVar6 != 0);
        }
        if (((iVar4 < 1) || (iVar7 < 1)) || (iVar9 = iVar4 / iVar7, iVar9 == 0)) {
          iVar4 = 0;
        }
      }
    }
    else {
      iVar4 = iVar4 - local_40;
      if (0 < local_30) {
        puVar5 = (undefined4 *)(local_38 + 0x10);
        iVar9 = local_30;
        do {
          *puVar5 = 0;
          puVar5 = puVar5 + 6;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    iVar9 = local_30;
    aiStack_84[dVar2 * -7 + 4] = 0x497638;

    iVar7 = thunk_FUN_0060ca20(param_5);
    aiStack_84[dVar2 * -7 + 4] = iVar7 - iVar4;
    aiStack_84[dVar2 * -7 + 3] = 0x497642;
    thunk_FUN_0060ca40(param_5,aiStack_84[dVar2 * -7 + 4]);
    if (0 < iVar9) {
      piVar11 = (int *)(local_38 + 0x10);
      do {
        pRVar3 = (RecoveredRecord_0060CA20_1F95243D *)piVar11[1];
        aiStack_84[dVar2 * -7 + 4] = 0x497656;

        iVar4 = thunk_FUN_0060ca20(pRVar3);
        if (iVar4 != *piVar11) {
          aiStack_84[dVar2 * -7 + 4] = 0x497661;

          iVar4 = thunk_FUN_0060ca20(pRVar3);
          aiStack_84[dVar2 * -7 + 4] = iVar4 - *piVar11;
          aiStack_84[dVar2 * -7 + 3] = 0x49766b;
          thunk_FUN_0060ca40(pRVar3,aiStack_84[dVar2 * -7 + 4]);
          aiStack_84[dVar2 * -7 + 4] = (int)pRVar3;
          aiStack_84[dVar2 * -7 + 3] = (int)param_5;
          aiStack_84[dVar2 * -7 + 2] = 0x497678;
          thunk_FUN_00497110((RecoveredRecordView_00497110_2502479B *)aiStack_84[dVar2 * -7 + 3],
                             (RecoveredRecordView_00497110_CEDB446E *)aiStack_84[dVar2 * -7 + 4]);
        }
        piVar11 = piVar11 + 6;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  aiStack_84[dVar2 * -7 + 4] = 0x497686;

  iVar9 = thunk_FUN_0060ca20(param_5);
  if (0 < iVar9) {
    local_28 = 1;
  }
  ExceptionList = local_14;
  return local_28;
}

