
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=2; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

undefined4 __thiscall
VisibleClassTy::sub_0055AD00
          (VisibleClassTy *this,int param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint local_1c;
  int local_18;
  byte *local_10;
  byte *local_c;
  void **local_8;

  if (((this->field_0114 != 0) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    local_8 = &this->field_0054;
    local_1c = 0;
    local_10 = &g_bulkInitializedRecords_008087C7[0].field_0022;
    do {
      if ((local_1c != param_4) && (*local_10 != 0xff)) {
        if (DAT_00808a8f == '\0') {
          if ((char)param_4 == (char)local_1c) {
LAB_0055ae0a:
            iVar4 = 0;
          }
          else {
            uVar3 = param_4 & 0xff;
            uVar6 = local_1c & 0xff;
            bVar2 = g_playerRelationMatrix[uVar3][uVar6];
            if ((bVar2 == 0) && (g_playerRelationMatrix[uVar6][uVar3] == 0)) {
              iVar4 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar6][uVar3] == 0)) {
              iVar4 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar6][uVar3] == 1)) {
              iVar4 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[uVar6][uVar3] != 1)) goto LAB_0055ae0a;
              iVar4 = 2;
            }
          }
          bVar9 = iVar4 < 0;
        }
        else {
          bVar9 = g_bulkInitializedRecords_008087C7[local_1c & 0xff].field_0023 !=
                  g_bulkInitializedRecords_008087C7[param_4 & 0xff].field_0023;
        }
        if ((bVar9) && (*local_8 != nullptr)) {
          if (param_5 < 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_5 = 0;
          }
          iVar4 = -param_5 + param_1;
          iVar8 = -param_5 + param_2;
          pbVar5 = thunk_FUN_005532f0(param_5);
          local_18 = 0;
          local_c = pbVar5;
          if (0 < param_5 * 2 + 1) {
            do {
              iVar7 = 0;
              do {
                if ((((((pbVar5 == nullptr) || (local_c[iVar7] != 0)) &&
                      (iVar1 = iVar7 + iVar4, -1 < iVar1)) &&
                     ((iVar1 < this->field_0020 && (-1 < iVar8)))) &&
                    ((iVar8 < this->field_0024 &&
                     (((int)local_10 < 0x808a71 && (*local_8 != nullptr)))))) &&
                   (*(char *)((int)*local_8 + iVar4 + iVar7 + iVar8 * this->field_0020) != '\0')) {
                  return 1;
                }
                iVar7 = iVar7 + 1;
                iVar1 = param_5 * 2 + 1;
              } while (iVar7 < iVar1);
              local_18 = local_18 + 1;
              iVar8 = iVar8 + 1;
              local_c = local_c + iVar1;
            } while (local_18 < iVar1);
          }
        }
      }
      local_10 = local_10 + 0x51;
      local_1c = local_1c + 1;
      local_8 = local_8 + 1;
    } while ((int)local_10 < 0x808a71);
  }
  return 0;
}

