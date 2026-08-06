#include "../../pseudocode_runtime.h"


void __fastcall FUN_00679600(AnonShape_00679600_B8E418A8 *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  AnonShape_0068FD00_A5257008 *pAVar10;
  bool bVar11;
  int local_1a8;
  undefined4 local_1a4 [87];
  AnonShape_0068FD00_A5257008 local_48 [3];
  uint local_14;
  byte *local_10;
  byte local_c;
  undefined3 uStack_b;
  AnonShape_00679600_B8E418A8 *local_8;

  local_14 = param_1->field_0640;
  if (8 < local_14) {
    param_1->field_0640 = 0xff;
  }
  if (param_1->field_0640 == 8) {
    param_1->field_0640 = (uint)DAT_0080874d;
  }
  local_8 = param_1;
  if (param_1->field_0644 != '\x01') goto cf_common_exit_0067989B;
  uVar4 = param_1->field_0640;
  uVar8 = param_1->field_05D7;
  if ((uVar4 != uVar8) && (uVar4 != 0xff)) {
    cVar2 = (char)uVar4;
    local_10 = (byte *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(cVar2));
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_c = CONCAT31(uStack_b,(char)uVar8);
    if (DAT_00808a8f == '\0') {
      if (cVar2 == (char)uVar8) {
LAB_0067971a:
        iVar7 = 0;
      }
      else {
        uVar4 = uVar4 & 0xff;
        uVar8 = uVar8 & 0xff;
        bVar1 = g_playerRelationMatrix[uVar4][uVar8];
        if ((bVar1 == 0) && (g_playerRelationMatrix[uVar8][uVar4] == 0)) {
          iVar7 = -2;
        }
        else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar8][uVar4] == 0)) {
          iVar7 = -1;
        }
        else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar8][uVar4] == 1)) {
          iVar7 = 1;
        }
        else {
          if ((bVar1 != 1) || (g_playerRelationMatrix[uVar8][uVar4] != 1)) goto LAB_0067971a;
          iVar7 = 2;
        }
      }
      bVar11 = iVar7 < 0;
    }
    else {
      bVar11 = g_bulkInitializedRecords_008087C7[uVar8 & 0xff].field_0023 !=
               g_bulkInitializedRecords_008087C7[uVar4 & 0xff].field_0023;
    }
    if ((bVar11) && (sVar3 = thunk_FUN_0043e460(cVar2), param_1 = local_8, sVar3 != 0))
    goto cf_common_exit_0067989B;
  }
  iVar7 = 0;
  piVar9 = &local_1a8;
  local_10 = &g_bulkInitializedRecords_008087C7[0].field_0022;
  param_1 = local_8;
  do {
    uVar4 = (uint)*local_10;
    if ((uVar4 != 0xff) && (uVar8 = param_1->field_05D7, uVar4 != uVar8)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_c = CONCAT31(uStack_b,(byte)uVar8);
      if (DAT_00808a8f == '\0') {
        if (*local_10 == (byte)uVar8) {
          iVar5 = 0;
        }
        else {
          uVar8 = uVar8 & 0xff;
          bVar1 = g_playerRelationMatrix[uVar4][uVar8];
          if ((bVar1 == 0) && (g_playerRelationMatrix[uVar8][uVar4] == 0)) {
            iVar5 = -2;
            param_1 = local_8;
          }
          else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar8][uVar4] == 0)) {
            iVar5 = -1;
            param_1 = local_8;
          }
          else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar8][uVar4] == 1)) {
            iVar5 = 1;
            param_1 = local_8;
          }
          else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar8][uVar4] == 1)) {
            iVar5 = 2;
            param_1 = local_8;
          }
          else {
            iVar5 = 0;
            param_1 = local_8;
          }
        }
        bVar11 = iVar5 < 0;
      }
      else {
        bVar11 = g_bulkInitializedRecords_008087C7[uVar8 & 0xff].field_0023 !=
                 g_bulkInitializedRecords_008087C7[uVar4].field_0023;
        param_1 = local_8;
      }
      if (bVar11) {
        piVar9[1] = uVar4;
        iVar7 = iVar7 + 1;
        *piVar9 = (-(uint)(*(char *)(g_bulkInitializedRecords_008087C7 + uVar4) != '\0') &
                  0xffffffa6) + 100;
        piVar9 = piVar9 + 0xb;
      }
    }
    local_10 = local_10 + 0x51;
  } while ((int)local_10 < 0x808a71);
  if (iVar7 < 1) {
    param_1->field_0640 = 0xff;
  }
  else {
    iVar6 = thunk_FUN_00423220(&param_1->field_0xa4,&local_1a8,iVar7);
    param_1->field_0640 = local_1a4[iVar6 * 0xb];
  }
cf_common_exit_0067989B:
  uVar4 = param_1->field_0640;
  if (uVar4 != local_14) {
    pAVar10 = local_48;
    for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pAVar10 = 0;
      pAVar10 = (AnonShape_0068FD00_A5257008 *)&pAVar10->field_0x4;
    }
    STPiece<4,4>(local_48[0]) = param_1->field_06FE;
    STPiece<0,4>(local_48[0]) = 0x6a;
    STPiece<8,4>(local_48[0]) = uVar4;
    AiPlrClassTy::sub_0067A020((AiPlrClassTy *)param_1,local_48,-1);
    AiPlrClassTy::sub_0067C110((AiPlrClassTy *)param_1);
  }
  return;
}

