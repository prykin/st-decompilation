
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
VisibleClassTy::sub_0055B1C0
          (VisibleClassTy *this,int param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte *local_c;
  byte **local_8;

  if (((this->field_0114 != 0) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    uVar2 = 0;
    local_8 = this->field_0094;
    local_c = &g_bulkInitializedRecords_008087C7[0].field_0022;
    do {
      if ((uVar2 != param_4) && (*local_c != 0xff)) {
        if (DAT_00808a8f == '\0') {
          if ((char)param_4 == (char)uVar2) {
LAB_0055b2ce:
            iVar4 = 0;
          }
          else {
            uVar3 = param_4 & 0xff;
            uVar5 = uVar2 & 0xff;
            bVar1 = g_playerRelationMatrix[uVar3][uVar5];
            if ((bVar1 == 0) && (g_playerRelationMatrix[uVar5][uVar3] == 0)) {
              iVar4 = -2;
            }
            else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar5][uVar3] == 0)) {
              iVar4 = -1;
            }
            else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar5][uVar3] == 1)) {
              iVar4 = 1;
            }
            else {
              if ((bVar1 != 1) || (g_playerRelationMatrix[uVar5][uVar3] != 1)) goto LAB_0055b2ce;
              iVar4 = 2;
            }
          }
          bVar6 = iVar4 < 0;
        }
        else {
          bVar6 = g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023 !=
                  g_bulkInitializedRecords_008087C7[param_4 & 0xff].field_0023;
        }
        if (bVar6) {
          if ((((*local_8 != nullptr) && (-1 < param_1)) && (param_1 < this->field_0020)) &&
             (((-1 < param_2 && (param_2 < this->field_0024)) &&
              (((int)local_c < 0x808a71 && ((*local_8)[param_1 + this->field_0020 * param_2] != 0)))
              ))) {
            return 1;
          }
        }
      }
      local_c = local_c + 0x51;
      uVar2 = uVar2 + 1;
      local_8 = local_8 + 1;
    } while ((int)local_c < 0x808a71);
  }
  return 0;
}

