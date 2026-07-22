
void __fastcall FUN_00679600(AnonShape_00679600_B8E418A8 *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  AnonShape_0068FD00_A5257008 *pAVar9;
  bool bVar10;
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
  uVar7 = param_1->field_05D7;
  if ((uVar4 != uVar7) && (uVar4 != 0xff)) {
    cVar2 = (char)uVar4;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10 = (byte *)CONCAT31(local_10._1_3_,cVar2);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_c = CONCAT31(uStack_b,(char)uVar7);
    if (DAT_00808a8f == '\0') {
      if (cVar2 == (char)uVar7) {
LAB_0067971a:
        iVar6 = 0;
      }
      else {
        uVar4 = uVar4 & 0xff;
        uVar7 = uVar7 & 0xff;
        bVar1 = g_playerRelationMatrix[uVar4][uVar7];
        if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar4] == 0)) {
          iVar6 = -2;
        }
        else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar4] == 0)) {
          iVar6 = -1;
        }
        else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar4] == 1)) {
          iVar6 = 1;
        }
        else {
          if ((bVar1 != 1) || (g_playerRelationMatrix[uVar7][uVar4] != 1)) goto LAB_0067971a;
          iVar6 = 2;
        }
      }
      bVar10 = iVar6 < 0;
    }
    else {
      bVar10 = (&DAT_008087ea)[(uVar7 & 0xff) * 0x51] != (&DAT_008087ea)[(uVar4 & 0xff) * 0x51];
    }
    if ((bVar10) && (sVar3 = thunk_FUN_0043e460(cVar2), param_1 = local_8, sVar3 != 0))
    goto cf_common_exit_0067989B;
  }
  iVar6 = 0;
  piVar8 = &local_1a8;
  local_10 = &DAT_008087e9;
  param_1 = local_8;
  do {
    uVar4 = (uint)*local_10;
    if ((uVar4 != 0xff) && (uVar7 = param_1->field_05D7, uVar4 != uVar7)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_c = CONCAT31(uStack_b,(byte)uVar7);
      if (DAT_00808a8f == '\0') {
        if (*local_10 == (byte)uVar7) {
          iVar5 = 0;
        }
        else {
          uVar7 = uVar7 & 0xff;
          bVar1 = g_playerRelationMatrix[uVar4][uVar7];
          if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar4] == 0)) {
            iVar5 = -2;
            param_1 = local_8;
          }
          else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar4] == 0)) {
            iVar5 = -1;
            param_1 = local_8;
          }
          else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar4] == 1)) {
            iVar5 = 1;
            param_1 = local_8;
          }
          else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar4] == 1)) {
            iVar5 = 2;
            param_1 = local_8;
          }
          else {
            iVar5 = 0;
            param_1 = local_8;
          }
        }
        bVar10 = iVar5 < 0;
      }
      else {
        bVar10 = (&DAT_008087ea)[(uVar7 & 0xff) * 0x51] != (&DAT_008087ea)[uVar4 * 0x51];
        param_1 = local_8;
      }
      if (bVar10) {
        piVar8[1] = uVar4;
        iVar6 = iVar6 + 1;
        *piVar8 = (-(uint)(*(char *)((int)&DAT_008087c4 + uVar4 * 0x51 + 3) != '\0') & 0xffffffa6) +
                  100;
        piVar8 = piVar8 + 0xb;
      }
    }
    local_10 = local_10 + 0x51;
  } while ((int)local_10 < 0x808a71);
  if (iVar6 < 1) {
    param_1->field_0640 = 0xff;
  }
  else {
    iVar6 = thunk_FUN_00423220(&param_1->field_0xa4,&local_1a8,iVar6);
    param_1->field_0640 = local_1a4[iVar6 * 0xb];
  }
cf_common_exit_0067989B:
  uVar4 = param_1->field_0640;
  if (uVar4 != local_14) {
    pAVar9 = local_48;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pAVar9 = 0;
      pAVar9 = (AnonShape_0068FD00_A5257008 *)&pAVar9->field_0x4;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_48[0]._4_4_ = param_1->field_06FE;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_48[0]._0_4_ = 0x6a;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_48[0]._8_4_ = uVar4;
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006799B0::thunk_FUN_0067a020
              ((AnonReceiver_006799B0 *)param_1,local_48,-1);
    AiPlrClassTy::sub_0067C110((AiPlrClassTy *)param_1);
  }
  return;
}

