#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00496CC0 -> 00497370 @ 00496D62; FUN_00496cc0 parameter param_5 */

undefined4 FUN_00497370(int param_1,int param_2,uint param_3,uint param_4,void *param_5)

{
  byte bVar1;
  dword dVar2;
  AnonShape_00497110_465BC742 *this;
  int iVar3;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  DArrayTy *pDVar14;
  bool bVar15;
  uint local_60;
  char local_5c;
  undefined3 uStack_5b;
  dword local_44;
  int local_40;
  int *local_3c;
  undefined1 *local_38;
  uint local_34;
  int local_30;
  undefined4 local_28;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  pDVar14 = g_array_007FB270;
  puStack_c = &DAT_00790718;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff90;
  local_28 = 0xffffffff;
  dVar2 = g_array_007FB270->count;
  local_8 = 0;
  ExceptionList = &local_14;
  local_44 = dVar2;
  Library::MSVCRT::FUN_0072da40();
  local_38 = &stack0xffffff90;
  local_1c = &stack0xffffff90;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  local_30 = 0;
  local_40 = 0;
  local_34 = 0;
  local_3c = (int *)&stack0xffffff90;
  local_1c = &stack0xffffff90;
  if (0 < (int)dVar2) {
    puVar11 = &local_60;
    local_3c = (int *)&stack0xffffff90;
    local_1c = &stack0xffffff90;
    do {
      if (local_34 < pDVar14->count) {
        puVar12 = DArrayAt<uint>(pDVar14, local_34);
      }
      else {
        puVar12 = nullptr;
      }
      uVar3 = puVar12[2];
      if (uVar3 != param_3) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_5c = CONCAT31(uStack_5b,(char)uVar3);
        if (DAT_00808a8f == '\0') {
          if ((char)uVar3 == (char)param_3) {
LAB_004974ca:
            iVar9 = 0;
          }
          else {
            uVar3 = uVar3 & 0xff;
            uVar8 = param_3 & 0xff;
            bVar1 = g_playerRelationMatrix[uVar3][uVar8];
            if ((bVar1 == 0) && (g_playerRelationMatrix[uVar8][uVar3] == 0)) {
              iVar9 = -2;
            }
            else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar8][uVar3] == 0)) {
              iVar9 = -1;
            }
            else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar8][uVar3] == 1)) {
              iVar9 = 1;
            }
            else {
              if ((bVar1 != 1) || (g_playerRelationMatrix[uVar8][uVar3] != 1)) goto LAB_004974ca;
              iVar9 = 2;
            }
          }
          bVar15 = iVar9 < 0;
        }
        else {
          bVar15 = g_bulkInitializedRecords_008087C7[param_3 & 0xff].field_0023 !=
                   g_bulkInitializedRecords_008087C7[uVar3 & 0xff].field_0023;
        }
        if ((bVar15) &&
           (iVar3 = FUN_006aced8(*puVar12 * 0xc9 + 100,puVar12[1] * 0xc9 + 100,param_1 * 0xc9 + 100,
                                 param_2 * 0xc9 + 100), pDVar14 = g_array_007FB270, iVar3 < 0xbc7))
        {
          puVar13 = puVar11 + -4;
          memmove(puVar13, puVar12, 0x18); /* compiler REP MOVS byte copy */
          uVar3 = thunk_FUN_0060ca20(puVar11[1]);
          uVar3 = ((int)uVar3 < 0) - 1 & uVar3;
          *puVar11 = uVar3;
          local_40 = local_40 + uVar3;
          local_30 = local_30 + 1;
          puVar11 = puVar11 + 6;
          pDVar14 = g_array_007FB270;
        }
      }
      local_34 = local_34 + 1;
    } while ((int)local_34 < (int)local_44);
  }
  if (local_30 != 0) {
    iVar4 = thunk_FUN_0060ca20((int)param_5);
    iVar7 = local_30;
    local_20 = local_30;
    iVar9 = iVar4 / local_30;
    if (iVar4 < local_40) {
      iVar6 = 0;
      piVar10 = local_3c;
      if (0 < local_30) {
        do {
          *piVar10 = iVar6;
          iVar6 = iVar6 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar6 < local_30);
      }
      thunk_FUN_004977c0((int)local_38,local_3c,local_30);
      while (0 < iVar4) {
        iVar6 = local_30 - iVar7;
        if (iVar6 < local_30) {
          piVar10 = (int *)(local_38 + iVar6 * 0x18 + 0x10);
          iVar6 = local_30 - iVar6;
          do {
            iVar7 = *piVar10;
            if (iVar7 < iVar9) {
              *piVar10 = 0;
              local_20 = local_20 + -1;
            }
            else {
              *piVar10 = iVar7 - iVar9;
              iVar7 = iVar9;
            }
            local_40 = local_40 - iVar7;
            iVar4 = iVar4 - iVar7;
            piVar10 = piVar10 + 6;
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
    iVar7 = thunk_FUN_0060ca20((int)param_5);
    thunk_FUN_0060ca40(param_5,iVar7 - iVar4);
    if (0 < iVar9) {
      piVar10 = (int *)(local_38 + 0x10);
      do {
        this = (AnonShape_00497110_465BC742 *)piVar10[1];
        iVar4 = thunk_FUN_0060ca20((int)this);
        if (iVar4 != *piVar10) {
          iVar4 = thunk_FUN_0060ca20((int)this);
          thunk_FUN_0060ca40(this,iVar4 - *piVar10);
          thunk_FUN_00497110(param_5,this);
        }
        piVar10 = piVar10 + 6;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  iVar9 = thunk_FUN_0060ca20((int)param_5);
  if (0 < iVar9) {
    local_28 = 1;
  }
  ExceptionList = local_14;
  return local_28;
}

