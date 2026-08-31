#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__RecoveredReceiver_00727C80.cpp

// 00727DA0 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00727C80::FUN_00727da0
#line 4 "decomp/ST.exe/functions/00727DA0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00727C80.
   Evidence: incoming_receiver_captures=1; receiver_accesses=11; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=4; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

void __thiscall
st::fn_00727DA0
          (RecoveredReceiver_00727C80 *this,AnonShape_00727DA0_C4265AA0 *param_1,uint param_2,
          int param_3)

{
  int param_2_after_write;

  AnonShape_00727DA0_C4265AA0 *pAVar1;
  bool bVar2;
  byte bVar3;
  int iVar5;
  int uVar14;
  int iVar4;
  int local_EAX_936;
  uint uVar6;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_ECX;
  uint uVar7;
  uint *puVar8;
  AnonShape_00727DA0_C4265AA0 *pAVar9;
  uint uVar10;
  AnonShape_00727DA0_C4265AA0 *pAVar11;
  uint uVar12;
  byte *pbVar13;
  int *piVar14;
  uint uVar15;
  ushort *puVar16;
  byte *pbVar17;
  AnonShape_00728170_7560EBA7 local_60;
  int local_38;
  AnonShape_00728170_E57D1DF1 local_34;
  int local_c;
  RecoveredReceiver_00727C80 *local_8;

  iVar5 = param_1->field_0028 + param_2 * 0x1c;
  puVar8 = (undefined4 *)
           ((uint)*(byte *)(param_1->field_0028 + 1 + param_2 * 0x1c) * 0x10 + param_3);
  DAT_008570a8 = *puVar8;
  DAT_008570ac = puVar8[1];
  DAT_008570b0 = puVar8[2];
  _DAT_008570b4 = puVar8[3];
  puVar8 = (undefined4 *)((uint)STField<byte>(iVar5,0x2) * 0x10 + param_3);
  DAT_008570b8 = *puVar8;
  DAT_008570bc = puVar8[1];
  DAT_008570c0 = puVar8[2];
  _DAT_008570c4 = puVar8[3];
  puVar8 = (undefined4 *)((uint)STField<byte>(iVar5,0x3) * 0x10 + param_3);
  DAT_008570c8 = *puVar8;
  DAT_008570cc = puVar8[1];
  DAT_008570d0 = puVar8[2];
  _DAT_008570d4 = puVar8[3];
  iVar5 = this->field_0124;
  if (iVar5 == 2) {
    _DAT_008570f8 = (uint)(byte)(&this[1].field_0x150)[param_1->field_0008];
  }
  else if (iVar5 == 6) {
    _DAT_008570f8 = param_2;
    DAT_008570a0 = '\x01' << ((byte)(this->field_00A8 << 1) & 0x1f);
    DAT_008570d8 = param_1->field_003C;
    DAT_00857078 = st::storage_bit_cast<int>(static_cast<uint32_t>(this->field_02E4 + ((int)this->field_02E4 >> 0x1f & 3U))) >> 2;
    if (DAT_00857078 < 0x20000) {
      DAT_00857078 = 0x20000;
    }
  }
  else {
    _DAT_008570f8 = (iVar5 != 3) + 0xfe;
  }
  uVar6 = 0;
  pAVar11 = (AnonShape_00727DA0_C4265AA0 *)0x80000000;
  param_2_after_write = 0; /* compiler stack-slot lifetime split */
  pAVar9 = (AnonShape_00727DA0_C4265AA0 *)0x7fff0000;
  AnonShape_00727DA0_C4265AA0 * param_1_after_write = (AnonShape_00727DA0_C4265AA0 *)0x80000000; /* compiler stack-slot lifetime split */
  piVar14 = reinterpret_cast<int *>(&DAT_008570ac);
  do {
    pAVar1 = (AnonShape_00727DA0_C4265AA0 *)*piVar14;
    if ((int)pAVar1 < (int)pAVar9) {
      pAVar9 = pAVar1;
      pAVar11 = param_1_after_write;
      param_2_after_write = uVar6;
    }
    if ((int)pAVar11 < (int)pAVar1) {
      pAVar11 = pAVar1;
      DAT_00857070 = uVar6;
      param_1_after_write = pAVar1;
    }
    piVar14 = piVar14 + 4;
    uVar6 = uVar6 + 1;
  } while ((int)piVar14 < 0x8570dc);
  if ((int)pAVar9 < (int)pAVar11) {
    DAT_00857098 = (int)pAVar9 >> 0x10;
    local_34.field_0000 = 0xffffffff;
    local_8 = this;

    iVar5 = st::fn_00727C80(reinterpret_cast<int *>(&local_34),param_2_after_write);
    if (iVar5 != 0) {
      local_60.field_0000 = 1;

      iVar5 = st::fn_00727C80(reinterpret_cast<int *>(&local_60),param_2_after_write);
      if (iVar5 != 0) {
        if (this->field_0124 == 6) {
          iVar5 = this->field_0028 * DAT_00857098;
          param_1_after_write = (AnonShape_00727DA0_C4265AA0 *)(this->field_000C + iVar5);
          param_2_after_write = this->field_0014 + iVar5 * 2;
          if (DAT_00857098 < this->field_003C) {
            do {
              uVar6 = local_34.field_001C;
              if (this->field_0034 <= DAT_00857098) {
                uVar15 = local_34.field_0024 & 0xffff0000;
                uVar12 = (local_60.field_0024 & 0xffff0000) - uVar15;
                this = local_8;
                if (uVar12 != 0 && (int)uVar15 <= st::storage_bit_cast<int>(static_cast<uint32_t>(local_60.field_0024 & 0xffff0000))) {
                  DAT_00857068 = st::storage_bit_cast<int>(static_cast<uint32_t>(local_60.field_001C - local_34.field_001C)) /
                                 st::storage_bit_cast<int>(static_cast<uint32_t>(uVar12 >> 0x10));
                  uVar12 = local_60.field_0024 & 0xffff0000;
                  if ((int)DAT_0085705c <= st::storage_bit_cast<int>(static_cast<uint32_t>(local_60.field_0024 & 0xffff0000))) {
                    uVar12 = DAT_0085705c;
                  }
                  if ((int)uVar15 < (int)DAT_008570dc) {

                    uVar14 = st::fn_006DB5F0(DAT_00857068,DAT_008570dc - uVar15);
                    uVar6 = uVar6 + uVar14;
                    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                    uVar12 = extraout_ECX;
                    uVar15 = DAT_008570dc;
                  }
                  iVar5 = DAT_008570d8;
                  bVar3 = DAT_008570a0;
                  this = local_8;
                  if (uVar12 - uVar15 != 0 && (int)uVar15 <= (int)uVar12) {
                    uVar12 = uVar12 - uVar15 >> 0x10;
                    pbVar17 = &param_1_after_write->field_0x0 + (uVar15 >> 0x10);
                    uVar7 = uVar12;
                    pbVar13 = pbVar17;
                    puVar16 = (undefined2 *)((uVar15 >> 0x10) * 2 + param_2_after_write);
                    do {
                      if ((*pbVar13 != 0xff) &&
                         (DAT_00857078 < st::storage_bit_cast<int>(static_cast<uint32_t>(*(int *)(puVar16 + -1) - uVar6)))) {
                        *(byte *)(iVar5 + (uint)*pbVar13) =
                             *(byte *)(iVar5 + (uint)*pbVar13) | bVar3;
                      }
                      uVar10 = uVar6 + DAT_00857068;
                      pbVar13 = pbVar13 + 1;
                      *puVar16 = (short)(uVar6 >> 0x10);
                      uVar15 = uVar7 - 1;
                      bVar2 = 0 < (int)uVar7;
                      uVar7 = uVar15;
                      uVar6 = uVar10;
                      puVar16 = puVar16 + 1;
                    } while (uVar15 != 0 && bVar2);
                    bVar3 = DAT_008570f8;
                    do {
                      *pbVar17 = bVar3;
                      pbVar17 = pbVar17 + 1;
                      uVar6 = uVar12 - 1;
                      bVar2 = 0 < (int)uVar12;
                      uVar12 = uVar6;
                    } while (uVar6 != 0 && bVar2);
                  }
                }
              }
              local_34.field_0004 = local_34.field_0004 - 1;
              if (local_34.field_0004 == 0) {

                iVar5 = st::fn_00727C80(reinterpret_cast<int *>(&local_34),STPiece<8,4>(local_34));
                if (iVar5 == 0) {
                  return;
                }
              }
              else {
                local_34.field_0024 = local_34.field_0024 + local_c;
                local_34.field_001C = local_34.field_001C + STPiece<32,4>(local_34);
              }
              local_60.field_0004 = local_60.field_0004 - 1;
              if (local_60.field_0004 == 0) {

                iVar5 = st::fn_00727C80(reinterpret_cast<int *>(&local_60),STPiece<8,4>(local_60));
                if (iVar5 == 0) {
                  return;
                }
              }
              else {
                local_60.field_0024 = local_60.field_0024 + local_38;
                local_60.field_001C = local_60.field_001C + STPiece<32,4>(local_60);
              }
              DAT_00857098 = DAT_00857098 + 1;
              param_1_after_write = reinterpret_cast<AnonShape_00727DA0_C4265AA0 *>((&param_1_after_write->field_0x0 + this->field_0028));
              param_2_after_write = param_2_after_write + this->field_0028 * 2;
            } while (DAT_00857098 < this->field_003C);
            return;
          }
        }
        else if (DAT_00857098 < this->field_003C) {
          do {
            if (this->field_0034 <= DAT_00857098) {
              st::fn_00728170(&local_34,&local_60);
            }

            iVar4 = st::fn_00727D50(reinterpret_cast<int *>(&local_34));
          } while (((iVar4 != 0) &&

                   (local_EAX_936 = st::fn_00727D50(reinterpret_cast<int *>(&local_60)), local_EAX_936 != 0)) &&
                  (DAT_00857098 = DAT_00857098 + 1, DAT_00857098 < this->field_003C));
        }
      }
    }
  }
  return;
}

// 007282B0 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00727C80::FUN_007282b0
#line 4 "decomp/ST.exe/functions/007282B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00727C80.
   Evidence: incoming_receiver_captures=1; receiver_accesses=7; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=4; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

void __thiscall
st::fn_007282B0
          (RecoveredReceiver_00727C80 *this,AnonShape_007282B0_AFD740A9 *param_1,uint param_2,
          int param_3)

{
  byte *pbVar1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  RecoveredRecord_007285D0_033BCCA5 local_60;
  int local_38;
  RecoveredRecord_007285D0_B1C1C37A local_34;
  int local_c;
  RecoveredReceiver_00727C80 *local_8;

  pbVar1 = (byte *)(param_1->field_0028 + param_2 * 0x1c);
  puVar3 = (undefined4 *)((uint)pbVar1[1] * 0x10 + param_3);
  DAT_008570a8 = *puVar3;
  DAT_008570ac = puVar3[1];
  DAT_008570b0 = puVar3[2];
  _DAT_008570b4 = puVar3[3];
  puVar3 = (undefined4 *)((uint)pbVar1[2] * 0x10 + param_3);
  DAT_008570b8 = *puVar3;
  DAT_008570bc = puVar3[1];
  DAT_008570c0 = puVar3[2];
  _DAT_008570c4 = puVar3[3];
  puVar3 = (undefined4 *)((uint)pbVar1[3] * 0x10 + param_3);
  DAT_008570c8 = *puVar3;
  DAT_008570cc = puVar3[1];
  DAT_008570d0 = puVar3[2];
  _DAT_008570d4 = puVar3[3];
  if ((*(byte *)(param_1->field_003C + param_2) & DAT_0085706c) == 0) {
    _DAT_008570f8 = 0xff;
  }
  else {
    _DAT_008570f8 = (int)param_1->field_0008 << 1;
    if ((*pbVar1 & 0x20) == 0) {
      _DAT_008570f8 = ((int)param_1->field_0008 - (uint)param_1->field_0048) * 2 + 1;
      if ((*(byte *)(param_1->field_003C + param_2) & DAT_00857058) == 0) {
        _DAT_008570f8 = _DAT_008570f8 | 0x80;
      }
      else {
        _DAT_008570f8 = _DAT_008570f8 | (param_2 & 3) << 4;
      }
      iVar4 = param_1->field_0020;
      fVar2 = *(float *)(iVar4 + (uint)pbVar1[1] * 0xc);
      if (*(float *)(iVar4 + (uint)pbVar1[2] * 0xc) < fVar2) {
        fVar2 = *(float *)(iVar4 + (uint)pbVar1[2] * 0xc);
      }
      if (*(float *)(iVar4 + (uint)pbVar1[3] * 0xc) < fVar2) {
        fVar2 = *(float *)(iVar4 + (uint)pbVar1[3] * 0xc);
      }
      if (_DAT_007904f8 < fVar2) {
        _DAT_008570f8 = _DAT_008570f8 | 0x40;
      }
    }
    else {
      if ((param_1->field_0048 != 0) &&
         ((double)*(float *)(param_1->field_0020 + 8 + (uint)pbVar1[1] * 0xc) <=
          -(this->field_00D0 * _DAT_007901c0))) {
        _DAT_008570f8 = ((int)param_1->field_0008 - (uint)param_1->field_0048) * 2;
      }
      if ((*(byte *)(param_1->field_003C + param_2) & DAT_00857058) == 0) {
        _DAT_008570f8 = _DAT_008570f8 | 0x80;
      }
    }
  }
  iVar4 = DAT_008570cc;
  iVar5 = DAT_008570cc;
  if (DAT_008570bc < DAT_008570ac) {
    if (DAT_008570cc < DAT_008570bc) {
      iVar6 = 2;
    }
    else {
      iVar6 = 1;
      iVar4 = DAT_008570bc;
      if (DAT_008570ac <= DAT_008570cc) {
        DAT_00857070 = 2;
        goto LAB_007284f0;
      }
    }
    DAT_00857070 = 0;
    iVar5 = DAT_008570ac;
  }
  else {
    if (DAT_008570cc < DAT_008570ac) {
      iVar6 = 2;
    }
    else {
      iVar6 = 0;
      iVar4 = DAT_008570ac;
      if (DAT_008570bc <= DAT_008570cc) {
        DAT_00857070 = 2;
        goto LAB_007284f0;
      }
    }
    DAT_00857070 = 1;
    iVar5 = DAT_008570bc;
  }
LAB_007284f0:
  if (iVar4 < iVar5) {
    DAT_00857098 = iVar4 >> 0x10;
    local_34.field_0000 = 0xffffffff;
    local_8 = this;

    iVar4 = st::fn_00727C80(reinterpret_cast<int *>(&local_34),iVar6);
    if (iVar4 != 0) {
      local_60.field_0000 = 1;

      iVar4 = st::fn_00727C80(reinterpret_cast<int *>(&local_60),iVar6);
      if ((iVar4 != 0) && (DAT_00857098 < this->field_003C)) {
        do {
          if (this->field_0034 <= DAT_00857098) {
            st::fn_007285D0(&local_34,&local_60);
          }
          local_34.field_0004 = local_34.field_0004 - 1;
          if ((int)local_34.field_0004 < 1) {

            iVar4 = st::fn_00727C80(reinterpret_cast<int *>(&local_34),STPiece<8,4>(local_34));
            if (iVar4 == 0) {
              return;
            }
          }
          else {
            local_34.field_0024 = local_34.field_0024 + local_c;
          }
          local_60.field_0004 = local_60.field_0004 - 1;
          if ((int)local_60.field_0004 < 1) {

            iVar4 = st::fn_00727C80(reinterpret_cast<int *>(&local_60),STPiece<8,4>(local_60));
            if (iVar4 == 0) {
              return;
            }
          }
          else {
            local_60.field_0024 = local_60.field_0024 + local_38;
          }
          DAT_00857098 = DAT_00857098 + 1;
        } while (DAT_00857098 < this->field_003C);
      }
    }
  }
  return;
}
