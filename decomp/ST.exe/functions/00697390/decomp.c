
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=3; incoming_this_accesses=12;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_00697390(CGenerate *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  int local_60 [9];
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;

  puVar5 = this->field_584F;
  for (iVar2 = (this->field_582F & 0xfffffff) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar5[0] = 0xffff;
    puVar5[1] = 0xffff;
    puVar5 = puVar5 + 2;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar5 = 0xff;
    puVar5 = (ushort *)((int)puVar5 + 1);
  }
  uVar4 = this->field_582F;
  pbVar6 = this->field_584B;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6 = pbVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar6 = 0;
    pbVar6 = pbVar6 + 1;
  }
  sub_006948E0(this,this->field_5833);
  iVar2 = 0;
  do {
    local_10 = 0;
    if (0 < (int)this->field_582F) {
      do {
        iVar7 = local_10;
        local_18 = sub_00696400(this,local_10,(int)local_60);
        local_20 = iVar7 % this->field_5833;
        local_1c = iVar7 / this->field_5833;
        local_8 = 0;
        local_14 = 0;
        if (local_18 < 1) {
LAB_00697505:
          iVar1 = sub_00698CA0(this,local_20,local_1c,iVar2,(int *)(local_3c + 3),
                               (int *)(local_3c + 2),&local_2c);
          uVar4 = sub_00695C10(this,iVar2,local_3c[2],local_3c[3],iVar1,local_2c);
          sub_00695F70(this,uVar4,iVar7,iVar2);
        }
        else {
          local_c = local_60;
          do {
            iVar7 = *local_c;
            local_28 = (uint)(short)this->field_584F[iVar2 * this->field_582F + iVar7];
            if (-1 < (int)local_28) {
              local_24 = iVar7 % this->field_5833;
              iVar1 = thunk_FUN_00696eb0(this->field_0008,local_20,local_1c,local_24,
                                         iVar7 / this->field_5833,iVar2,0);
              iVar7 = local_8;
              if (iVar1 != 0) {
                bVar8 = local_8 == 1;
                local_3c[local_8] = local_28;
                if (bVar8) {
                  if (local_3c[0] != local_3c[1]) {
                    local_8 = 2;
                    goto LAB_006974d2;
                  }
                }
                else {
                  local_8 = iVar7 + 1;
                  if (local_8 == 2) break;
                }
              }
            }
            local_14 = local_14 + 1;
            local_c = local_c + 1;
          } while (local_14 < local_18);
          iVar7 = local_10;
          if (local_8 == 0) goto LAB_00697505;
LAB_006974d2:
          iVar7 = local_10;
          sub_00695F70(this,local_3c[0],local_10,iVar2);
          if ((local_8 == 2) && (local_3c[0] != local_3c[1])) {
            uVar4 = local_3c[1];
            uVar3 = local_3c[0];
            if ((int)local_3c[0] < (int)local_3c[1]) {
              uVar4 = local_3c[0];
              uVar3 = local_3c[1];
            }
            thunk_FUN_006961b0(this,uVar4,uVar3,iVar2,1);
          }
        }
        local_10 = iVar7 + 1;
      } while (local_10 < (int)this->field_582F);
    }
    iVar2 = iVar2 + 1;
    if (5 < iVar2) {
      return;
    }
  } while( true );
}

