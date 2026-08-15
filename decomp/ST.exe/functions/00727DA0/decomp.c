#include "../../pseudocode_runtime.h"


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
  bool bVar2;
  byte bVar3;
  int iVar5;
  uint uVar14;
  int iVar4;
  int local_EAX_936;
  uint uVar6;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_ECX;
  uint uVar7;
  undefined4 *puVar8;
  AnonShape_00727DA0_C4265AA0 *pAVar9;
  uint uVar10;
  AnonShape_00727DA0_C4265AA0 *pAVar11;
  uint uVar12;
  byte *pbVar13;
  int *piVar14;
  uint uVar15;
  undefined2 *puVar16;
  byte *pbVar17;
  AnonShape_00728170_7560EBA7 local_60;
  int local_38;
  AnonShape_00728170_E57D1DF1 local_34;
  int local_c;
  AnonReceiver_00727C80 *local_8;

  iVar5 = param_1->field_0028 + param_2 * 0x1c;
  puVar8 = (undefined4 *)
           ((uint)*(byte *)(param_1->field_0028 + 1 + param_2 * 0x1c) * 0x10 + param_3);
  DAT_008570a8 = *puVar8;
  DAT_008570ac = puVar8[1];
  DAT_008570b0 = puVar8[2];
  _DAT_008570b4 = puVar8[3];
  puVar8 = (undefined4 *)((uint)*(byte *)(iVar5 + 2) * 0x10 + param_3);
  DAT_008570b8 = *puVar8;
  DAT_008570bc = puVar8[1];
  DAT_008570c0 = puVar8[2];
  _DAT_008570c4 = puVar8[3];
  puVar8 = (undefined4 *)((uint)*(byte *)(iVar5 + 3) * 0x10 + param_3);
  DAT_008570c8 = *puVar8;
  DAT_008570cc = puVar8[1];
  DAT_008570d0 = puVar8[2];
  _DAT_008570d4 = puVar8[3];
  iVar5 = *(int *)&this->field_0x124;
  if (iVar5 == 2) {
    _DAT_008570f8 = (uint)(byte)(&this[1].field_0x150)[param_1->field_0008];
  }
  else if (iVar5 == 6) {
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
    _DAT_008570f8 = (iVar5 != 3) + 0xfe;
  }
  uVar6 = 0;
  pAVar11 = (AnonShape_00727DA0_C4265AA0 *)0x80000000;
  param_2 = 0;
  pAVar9 = (AnonShape_00727DA0_C4265AA0 *)0x7fff0000;
  param_1 = (AnonShape_00727DA0_C4265AA0 *)0x80000000;
  piVar14 = &DAT_008570ac;
  do {
    pAVar1 = (AnonShape_00727DA0_C4265AA0 *)*piVar14;
    if ((int)pAVar1 < (int)pAVar9) {
      pAVar9 = pAVar1;
      pAVar11 = param_1;
      param_2 = uVar6;
    }
    if ((int)pAVar11 < (int)pAVar1) {
      pAVar11 = pAVar1;
      DAT_00857070 = uVar6;
      param_1 = pAVar1;
    }
    piVar14 = piVar14 + 4;
    uVar6 = uVar6 + 1;
  } while ((int)piVar14 < 0x8570dc);
  if ((int)pAVar9 < (int)pAVar11) {
    DAT_00857098 = (int)pAVar9 >> 0x10;
    STPiece<0,4>(local_34) = 0xffffffff;
    local_8 = this;
    iVar5 = FUN_00727c80((int *)&local_34,param_2);
    if (iVar5 != 0) {
      STPiece<0,4>(local_60) = 1;
      iVar5 = FUN_00727c80((int *)&local_60,param_2);
      if (iVar5 != 0) {
        if (*(int *)&this->field_0x124 == 6) {
          iVar5 = *(int *)&this->field_0x28 * DAT_00857098;
          param_1 = (AnonShape_00727DA0_C4265AA0 *)(*(int *)&this->field_0xc + iVar5);
          param_2 = *(int *)&this->field_0x14 + iVar5 * 2;
          if (DAT_00857098 < *(int *)&this->field_0x3c) {
            do {
              uVar6 = local_34.field_001C;
              if (*(int *)&this->field_0x34 <= DAT_00857098) {
                uVar15 = local_34.field_0024 & 0xffff0000;
                uVar12 = (local_60.field_0024 & 0xffff0000) - uVar15;
                this = local_8;
                if (uVar12 != 0 && (int)uVar15 <= (int)(local_60.field_0024 & 0xffff0000)) {
                  DAT_00857068 = (int)(local_60.field_001C - local_34.field_001C) /
                                 (int)(uVar12 >> 0x10);
                  uVar12 = local_60.field_0024 & 0xffff0000;
                  if ((int)DAT_0085705c <= (int)(local_60.field_0024 & 0xffff0000)) {
                    uVar12 = DAT_0085705c;
                  }
                  if ((int)uVar15 < (int)DAT_008570dc) {
                    uVar14 = FUN_006db5f0(DAT_00857068,DAT_008570dc - uVar15);
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
                    pbVar17 = &param_1->field_0x0 + (uVar15 >> 0x10);
                    uVar7 = uVar12;
                    pbVar13 = pbVar17;
                    puVar16 = (undefined2 *)((uVar15 >> 0x10) * 2 + param_2);
                    do {
                      if ((*pbVar13 != 0xff) &&
                         (DAT_00857078 < (int)(*(int *)(puVar16 + -1) - uVar6))) {
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
              STPiece<4,4>(local_34) = STPiece<4,4>(local_34) + -1;
              if (STPiece<4,4>(local_34) == 0) {
                iVar5 = FUN_00727c80((int *)&local_34,STPiece<8,4>(local_34));
                if (iVar5 == 0) {
                  return;
                }
              }
              else {
                local_34.field_0024 = local_34.field_0024 + local_c;
                local_34.field_001C = local_34.field_001C + STPiece<32,4>(local_34);
              }
              STPiece<4,4>(local_60) = STPiece<4,4>(local_60) + -1;
              if (STPiece<4,4>(local_60) == 0) {
                iVar5 = FUN_00727c80((int *)&local_60,STPiece<8,4>(local_60));
                if (iVar5 == 0) {
                  return;
                }
              }
              else {
                local_60.field_0024 = local_60.field_0024 + local_38;
                local_60.field_001C = local_60.field_001C + STPiece<32,4>(local_60);
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
            iVar4 = FUN_00727d50((int *)&local_34);
          } while (((iVar4 != 0) &&
                   (local_EAX_936 = FUN_00727d50((int *)&local_60), local_EAX_936 != 0)) &&
                  (DAT_00857098 = DAT_00857098 + 1, DAT_00857098 < *(int *)&this->field_0x3c));
        }
      }
    }
  }
  return;
}

