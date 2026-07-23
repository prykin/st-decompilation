
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_006A0470(CGenerate *this)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  byte local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar6 = *this->field_0008 * 0x28;
  this->field_5703 = iVar6;
  iVar2 = this->field_0008[1] * 0x28;
  this->field_5707 = iVar2;
  puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(iVar6 * iVar2);
  uVar7 = this->field_5703 * this->field_5707;
  this->field_56FF = puVar3;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_10 = 0;
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  piVar4 = this->field_0008;
  if (0 < *piVar4) {
    local_8 = 0;
    do {
      iVar2 = 0;
      local_c = 0;
      if (0 < piVar4[1]) {
        do {
          iVar6 = 0;
          do {
            piVar4 = this->field_0008;
            iVar9 = (piVar4[1] * iVar6 + local_c) * *piVar4 + local_10;
            if (((*(short *)((int)piVar4 + (iVar9 * 3 + 6) * 2) != 0) &&
                (uVar1 = *(ushort *)((int)piVar4 + iVar9 * 6 + 0xc), (uVar1 & 0xf00) != 0)) &&
               (uVar1 != 0x1100)) {
              if ((uVar1 & 0x2000) == 0x2000) {
                uVar8 = (uVar1 & 0xf00) >> 8;
                local_14 = (byte)uVar1;
                pcVar5 = (char *)thunk_FUN_00692530(&this->field_0x1c03,
                                                    (uint)(local_14 >> 4) * 0xf + -0xe +
                                                    (uint)(local_14 & 0xf),(iVar6 - uVar8) + 1,uVar8
                                                   );
                if (pcVar5 != (char *)0x0) {
                  uVar11 = this->field_5707;
                  iVar9 = this->field_5703;
                  iVar10 = this->field_56FF;
LAB_006a05f8:
                  thunk_FUN_006a2e50(iVar10,local_8,iVar2,iVar9,uVar11,pcVar5,0x28,0x28);
                }
              }
              else {
                uVar8 = uVar1 >> 8 & 0xf;
                pcVar5 = (char *)thunk_FUN_00692570(&this->field_0x1c03,(uVar1 & 0xff) - 1,
                                                    (iVar6 - uVar8) + 1,uVar8);
                if (pcVar5 != (char *)0x0) {
                  iVar9 = this->field_5703;
                  uVar11 = this->field_5707;
                  iVar10 = this->field_56FF;
                  goto LAB_006a05f8;
                }
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 6);
          local_c = local_c + 1;
          iVar2 = iVar2 + 0x28;
        } while (local_c < this->field_0008[1]);
      }
      piVar4 = this->field_0008;
      local_10 = local_10 + 1;
      local_8 = local_8 + 0x28;
    } while (local_10 < *piVar4);
  }
  return;
}

