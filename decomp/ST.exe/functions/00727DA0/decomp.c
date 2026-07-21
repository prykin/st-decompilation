
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00727C80.
   Evidence: incoming_receiver_captures=1; receiver_accesses=11; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=4; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00727C80::FUN_00727da0
          (AnonReceiver_00727C80 *this,AnonShape_00727DA0_C4265AA0 *param_1,uint param_2,int param_3
          )

{
  AnonShape_00727DA0_C4265AA0 *pAVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar5;
  uint extraout_ECX;
  uint uVar6;
  undefined4 *puVar7;
  AnonShape_00727DA0_C4265AA0 *pAVar8;
  uint uVar9;
  AnonShape_00727DA0_C4265AA0 *pAVar10;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  uint uVar14;
  undefined2 *puVar15;
  byte *pbVar16;
  AnonShape_00728170_7560EBA7 local_60;
  int local_38;
  AnonShape_00728170_E57D1DF1 local_34;
  int local_c;
  AnonReceiver_00727C80 *local_8;
  
  iVar4 = param_1->field_0028 + param_2 * 0x1c;
  puVar7 = (undefined4 *)
           ((uint)*(byte *)(param_1->field_0028 + 1 + param_2 * 0x1c) * 0x10 + param_3);
  DAT_008570a8 = *puVar7;
  DAT_008570ac = puVar7[1];
  DAT_008570b0 = puVar7[2];
  _DAT_008570b4 = puVar7[3];
  puVar7 = (undefined4 *)((uint)*(byte *)(iVar4 + 2) * 0x10 + param_3);
  DAT_008570b8 = *puVar7;
  DAT_008570bc = puVar7[1];
  DAT_008570c0 = puVar7[2];
  _DAT_008570c4 = puVar7[3];
  puVar7 = (undefined4 *)((uint)*(byte *)(iVar4 + 3) * 0x10 + param_3);
  DAT_008570c8 = *puVar7;
  DAT_008570cc = puVar7[1];
  DAT_008570d0 = puVar7[2];
  _DAT_008570d4 = puVar7[3];
  iVar4 = *(int *)&this->field_0x124;
  if (iVar4 == 2) {
    _DAT_008570f8 = (uint)(byte)(&this[1].field_0x150)[param_1->field_0008];
  }
  else if (iVar4 == 6) {
    _DAT_008570f8 = param_2;
    DAT_008570a0 = '\x01' << ((byte)(*(int *)&this->field_0xa8 << 1) & 0x1f);
    DAT_008570d8 = param_1->field_003C;
    DAT_00857078 = (int)(*(int *)&this->field_0x2e4 + (*(int *)&this->field_0x2e4 >> 0x1f & 3U)) >>
                   2;
    if (DAT_00857078 < 0x20000) {
      DAT_00857078 = 0x20000;
    }
  }
  else {
    _DAT_008570f8 = (iVar4 != 3) + 0xfe;
  }
  uVar5 = 0;
  pAVar10 = (AnonShape_00727DA0_C4265AA0 *)0x80000000;
  param_2 = 0;
  pAVar8 = (AnonShape_00727DA0_C4265AA0 *)0x7fff0000;
  param_1 = (AnonShape_00727DA0_C4265AA0 *)0x80000000;
  piVar13 = &DAT_008570ac;
  do {
    pAVar1 = (AnonShape_00727DA0_C4265AA0 *)*piVar13;
    if ((int)pAVar1 < (int)pAVar8) {
      pAVar8 = pAVar1;
      pAVar10 = param_1;
      param_2 = uVar5;
    }
    if ((int)pAVar10 < (int)pAVar1) {
      pAVar10 = pAVar1;
      DAT_00857070 = uVar5;
      param_1 = pAVar1;
    }
    piVar13 = piVar13 + 4;
    uVar5 = uVar5 + 1;
  } while ((int)piVar13 < 0x8570dc);
  if ((int)pAVar8 < (int)pAVar10) {
    DAT_00857098 = (int)pAVar8 >> 0x10;
    local_34._0_4_ = 0xffffffff;
    local_8 = this;
    iVar4 = FUN_00727c80((int *)&local_34,param_2);
    if (iVar4 != 0) {
      local_60._0_4_ = 1;
      iVar4 = FUN_00727c80((int *)&local_60,param_2);
      if (iVar4 != 0) {
        if (*(int *)&this->field_0x124 == 6) {
          iVar4 = *(int *)&this->field_0x28 * DAT_00857098;
          param_1 = (AnonShape_00727DA0_C4265AA0 *)(*(int *)&this->field_0xc + iVar4);
          param_2 = *(int *)&this->field_0x14 + iVar4 * 2;
          if (DAT_00857098 < *(int *)&this->field_0x3c) {
            do {
              uVar5 = local_34.field_001C;
              if (*(int *)&this->field_0x34 <= DAT_00857098) {
                uVar14 = local_34.field_0024 & 0xffff0000;
                uVar11 = (local_60.field_0024 & 0xffff0000) - uVar14;
                this = local_8;
                if (uVar11 != 0 && (int)uVar14 <= (int)(local_60.field_0024 & 0xffff0000)) {
                  DAT_00857068 = (int)(local_60.field_001C - local_34.field_001C) /
                                 (int)(uVar11 >> 0x10);
                  uVar11 = local_60.field_0024 & 0xffff0000;
                  if ((int)DAT_0085705c <= (int)(local_60.field_0024 & 0xffff0000)) {
                    uVar11 = DAT_0085705c;
                  }
                  if ((int)uVar14 < (int)DAT_008570dc) {
                    uVar14 = FUN_006db5f0(DAT_00857068,DAT_008570dc - uVar14);
                    uVar5 = uVar5 + uVar14;
                    uVar11 = extraout_ECX;
                    uVar14 = DAT_008570dc;
                  }
                  iVar4 = DAT_008570d8;
                  bVar2 = DAT_008570a0;
                  this = local_8;
                  if (uVar11 - uVar14 != 0 && (int)uVar14 <= (int)uVar11) {
                    uVar11 = uVar11 - uVar14 >> 0x10;
                    pbVar16 = &param_1->field_0x0 + (uVar14 >> 0x10);
                    uVar6 = uVar11;
                    pbVar12 = pbVar16;
                    puVar15 = (undefined2 *)((uVar14 >> 0x10) * 2 + param_2);
                    do {
                      if ((*pbVar12 != 0xff) &&
                         (DAT_00857078 < (int)(*(int *)(puVar15 + -1) - uVar5))) {
                        *(byte *)(iVar4 + (uint)*pbVar12) =
                             *(byte *)(iVar4 + (uint)*pbVar12) | bVar2;
                      }
                      uVar9 = uVar5 + DAT_00857068;
                      pbVar12 = pbVar12 + 1;
                      *puVar15 = (short)(uVar5 >> 0x10);
                      uVar14 = uVar6 - 1;
                      bVar3 = 0 < (int)uVar6;
                      uVar6 = uVar14;
                      uVar5 = uVar9;
                      puVar15 = puVar15 + 1;
                    } while (uVar14 != 0 && bVar3);
                    bVar2 = DAT_008570f8;
                    do {
                      *pbVar16 = bVar2;
                      pbVar16 = pbVar16 + 1;
                      uVar5 = uVar11 - 1;
                      bVar3 = 0 < (int)uVar11;
                      uVar11 = uVar5;
                    } while (uVar5 != 0 && bVar3);
                  }
                }
              }
              local_34._4_4_ = local_34._4_4_ + -1;
              if (local_34._4_4_ == 0) {
                iVar4 = FUN_00727c80((int *)&local_34,local_34._8_4_);
                if (iVar4 == 0) {
                  return;
                }
              }
              else {
                local_34.field_0024 = local_34.field_0024 + local_c;
                local_34.field_001C = local_34.field_001C + local_34._32_4_;
              }
              local_60._4_4_ = local_60._4_4_ + -1;
              if (local_60._4_4_ == 0) {
                iVar4 = FUN_00727c80((int *)&local_60,local_60._8_4_);
                if (iVar4 == 0) {
                  return;
                }
              }
              else {
                local_60.field_0024 = local_60.field_0024 + local_38;
                local_60.field_001C = local_60.field_001C + local_60._32_4_;
              }
              DAT_00857098 = DAT_00857098 + 1;
              param_1 = (AnonShape_00727DA0_C4265AA0 *)
                        (&param_1->field_0x0 + *(int *)&this->field_0x28);
              param_2 = param_2 + *(int *)&this->field_0x28 * 2;
            } while (DAT_00857098 < *(int *)&this->field_0x3c);
            return;
          }
        }
        else if (DAT_00857098 < *(int *)&this->field_0x3c) {
          do {
            if (*(int *)&this->field_0x34 <= DAT_00857098) {
              FUN_00728170(&local_34,&local_60);
            }
            bVar3 = FUN_00727d50((int *)&local_34);
          } while (((CONCAT31(extraout_var,bVar3) != 0) &&
                   (bVar3 = FUN_00727d50((int *)&local_60), CONCAT31(extraout_var_00,bVar3) != 0))
                  && (DAT_00857098 = DAT_00857098 + 1, DAT_00857098 < *(int *)&this->field_0x3c));
        }
      }
    }
  }
  return;
}

