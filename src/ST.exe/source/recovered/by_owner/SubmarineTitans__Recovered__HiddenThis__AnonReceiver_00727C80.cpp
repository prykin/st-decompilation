#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__AnonReceiver_00727C80.cpp

// 00727DA0 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00727C80::FUN_00727da0
#line 4 "decomp/ST.exe/functions/00727DA0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00727C80.
   Evidence: incoming_receiver_captures=1; receiver_accesses=11; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=4; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

void __thiscall
st::fn_00727DA0
          (AnonReceiver_00727C80 *this,AnonShape_00727DA0_C4265AA0 *param_1,uint param_2,int param_3
          )

{
  AnonShape_00727DA0_C4265AA0 *pAVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
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
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = 0;
  pAVar8 = (AnonShape_00727DA0_C4265AA0 *)0x7fff0000;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (AnonShape_00727DA0_C4265AA0 *)0x80000000;
  piVar13 = &DAT_008570ac;
  do {
    pAVar1 = (AnonShape_00727DA0_C4265AA0 *)*piVar13;
    if ((int)pAVar1 < (int)pAVar8) {
      pAVar8 = pAVar1;
      pAVar10 = param_1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = uVar5;
    }
    if ((int)pAVar10 < (int)pAVar1) {
      pAVar10 = pAVar1;
      DAT_00857070 = uVar5;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = pAVar1;
    }
    piVar13 = piVar13 + 4;
    uVar5 = uVar5 + 1;
  } while ((int)piVar13 < 0x8570dc);
  if ((int)pAVar8 < (int)pAVar10) {
    DAT_00857098 = (int)pAVar8 >> 0x10;
    STPiece<0,4>(local_34) = 0xffffffff;
    local_8 = this;
    iVar4 = st::fn_00727C80((int *)&local_34,param_2);
    if (iVar4 != 0) {
      STPiece<0,4>(local_60) = 1;
      iVar4 = st::fn_00727C80((int *)&local_60,param_2);
      if (iVar4 != 0) {
        if (*(int *)&this->field_0x124 == 6) {
          iVar4 = *(int *)&this->field_0x28 * DAT_00857098;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (AnonShape_00727DA0_C4265AA0 *)(*(int *)&this->field_0xc + iVar4);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
                    uVar14 = st::fn_006DB5F0(DAT_00857068,DAT_008570dc - uVar14);
                    uVar5 = uVar5 + uVar14;
                    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                    uVar11 = extraout_ECX;
                    uVar14 = DAT_008570dc;
                  }
                  iVar4 = DAT_008570d8;
                  bVar3 = DAT_008570a0;
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
                             *(byte *)(iVar4 + (uint)*pbVar12) | bVar3;
                      }
                      uVar9 = uVar5 + DAT_00857068;
                      pbVar12 = pbVar12 + 1;
                      *puVar15 = (short)(uVar5 >> 0x10);
                      uVar14 = uVar6 - 1;
                      bVar2 = 0 < (int)uVar6;
                      uVar6 = uVar14;
                      uVar5 = uVar9;
                      puVar15 = puVar15 + 1;
                    } while (uVar14 != 0 && bVar2);
                    bVar3 = DAT_008570f8;
                    do {
                      *pbVar16 = bVar3;
                      pbVar16 = pbVar16 + 1;
                      uVar5 = uVar11 - 1;
                      bVar2 = 0 < (int)uVar11;
                      uVar11 = uVar5;
                    } while (uVar5 != 0 && bVar2);
                  }
                }
              }
              STPiece<4,4>(local_34) = STPiece<4,4>(local_34) + -1;
              if (STPiece<4,4>(local_34) == 0) {
                iVar4 = st::fn_00727C80((int *)&local_34,STPiece<8,4>(local_34));
                if (iVar4 == 0) {
                  return;
                }
              }
              else {
                local_34.field_0024 = local_34.field_0024 + local_c;
                local_34.field_001C = local_34.field_001C + STPiece<32,4>(local_34);
              }
              STPiece<4,4>(local_60) = STPiece<4,4>(local_60) + -1;
              if (STPiece<4,4>(local_60) == 0) {
                iVar4 = st::fn_00727C80((int *)&local_60,STPiece<8,4>(local_60));
                if (iVar4 == 0) {
                  return;
                }
              }
              else {
                local_60.field_0024 = local_60.field_0024 + local_38;
                local_60.field_001C = local_60.field_001C + STPiece<32,4>(local_60);
              }
              DAT_00857098 = DAT_00857098 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = (AnonShape_00727DA0_C4265AA0 *)
                        (&param_1->field_0x0 + *(int *)&this->field_0x28);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_2 = param_2 + *(int *)&this->field_0x28 * 2;
            } while (DAT_00857098 < *(int *)&this->field_0x3c);
            return;
          }
        }
        else if (DAT_00857098 < *(int *)&this->field_0x3c) {
          do {
            if (*(int *)&this->field_0x34 <= DAT_00857098) {
              st::fn_00728170(&local_34,&local_60);
            }
            iVar4 = st::fn_00727D50((int *)&local_34);
          } while (((iVar4 != 0) && (iVar4 = st::fn_00727D50((int *)&local_60), iVar4 != 0)) &&
                  (DAT_00857098 = DAT_00857098 + 1, DAT_00857098 < *(int *)&this->field_0x3c));
        }
      }
    }
  }
  return;
}

// 007282B0 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00727C80::FUN_007282b0
#line 4 "decomp/ST.exe/functions/007282B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00727C80.
   Evidence: incoming_receiver_captures=1; receiver_accesses=7; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=4; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

void __thiscall
st::fn_007282B0
          (AnonReceiver_00727C80 *this,AnonShape_007282B0_AFD740A9 *param_1,uint param_2,int param_3
          )

{
  byte *pbVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_60;
  int local_5c;
  int local_58;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_10;
  int local_c;
  AnonReceiver_00727C80 *local_8;

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
          -(*(double *)&this->field_0xd0 * _DAT_007901c0))) {
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
    local_34 = -1;
    local_8 = this;
    iVar4 = st::fn_00727C80(&local_34,iVar6);
    if (iVar4 != 0) {
      local_60 = 1;
      iVar4 = st::fn_00727C80(&local_60,iVar6);
      if ((iVar4 != 0) && (DAT_00857098 < *(int *)&this->field_0x3c)) {
        do {
          if (*(int *)&this->field_0x34 <= DAT_00857098) {
            st::fn_007285D0((int)&local_34,(int)&local_60);
          }
          local_30 = local_30 + -1;
          if (local_30 < 1) {
            iVar4 = st::fn_00727C80(&local_34,local_2c);
            if (iVar4 == 0) {
              return;
            }
          }
          else {
            local_10 = local_10 + local_c;
          }
          local_5c = local_5c + -1;
          if (local_5c < 1) {
            iVar4 = st::fn_00727C80(&local_60,local_58);
            if (iVar4 == 0) {
              return;
            }
          }
          else {
            local_3c = local_3c + local_38;
          }
          DAT_00857098 = DAT_00857098 + 1;
        } while (DAT_00857098 < *(int *)&this->field_0x3c);
      }
    }
  }
  return;
}

