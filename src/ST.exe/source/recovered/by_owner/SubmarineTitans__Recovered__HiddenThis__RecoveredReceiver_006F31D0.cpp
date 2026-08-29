#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__RecoveredReceiver_006F31D0.cpp

// 006F31D0 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_006F31D0::sub_006F31D0
#line 4 "decomp/ST.exe/functions/006F31D0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_006F31D0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=72; incoming_edx_uses=0; calls=7;
   ecx_pointer_setup=7; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=1; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_006F31D0.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_006F31D0];
   agreed_this_calls=2; incoming_this_accesses=42; incoming_edx_uses=0;
   incoming_stack_parameter_uses=149; direct_non_thunk_callers=2; incoming_ecx_receiver_callers=2;
   attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_006F31D0
          (RecoveredReceiver_006F31D0 *this,uint param_1,int param_2,uint param_3,uint param_4)

{
  short *psVar1;
  ushort uVar2;
  uint pAVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint pAVar8;
  uint pAVar9;
  byte *puVar10;
  byte *pbVar17;
  uint *puVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  uint pAVar16;
  byte *pbVar18;
  uint *puVar19;
  byte *pbVar20;
  int local_70;
  byte *local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  AnonShape_006F31D0_0BFF23DC *local_58;
  ushort *local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  AnonShape_006F31D0_08EF59F4 *local_34;
  byte *local_30;
  uint *local_2c;
  uint local_28;
  RecoveredReceiver_006F31D0 *local_24;
  uint local_20;
  byte *local_1c;
  ushort *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint *local_8;

  local_40 = 0;
  local_20 = 0;
  local_30 = nullptr;
  local_3c = 0;
  local_5c = param_1 * 0x68;
  puVar19 = *(uint **)(this->field_0330 + local_5c + 100);
  puVar19[0xf] = puVar19[0x19];
  puVar19[0x10] = puVar19[0x1a];
  puVar19[0x11] = puVar19[0x1b];
  puVar19[0x12] = puVar19[0x1c];
  local_2c = puVar19;
  local_24 = this;
  if ((this->field_0000 != nullptr) && (param_4 == 0)) {
    st::fn_006B5F80(st::pointer_boundary_cast<int *>(this->field_0000),this->field_0020 + puVar19[0x19],this->field_0024 + puVar19[0x1a],
                 puVar19[0x1b],puVar19[0x1c]);
  }
  uVar7 = puVar19[4];
  if (((puVar19[1] & 0x80) == 0) && (((puVar19[1] & 0x20) == 0 || (puVar19[7] != 0xffffffff)))) {
LAB_006f32f9:
    local_38 = 1;
    iVar13 = (int)(puVar19[0x19] - this->field_02C8) / this->field_02C0;
    iVar4 = (int)((puVar19[0x19] - this->field_02C8) + -1 + puVar19[0x1b]) / this->field_02C0;
    iVar5 = (int)(puVar19[0x1a] - this->field_02CC) / this->field_02C4;
    iVar6 = (int)((puVar19[0x1c] - this->field_02CC) + -1 + puVar19[0x1a]) / this->field_02C4;
    iVar12 = this->field_02B0 + this->field_02B8 * iVar5 * 2;
    if (iVar5 <= iVar6) {
      local_38 = 1;
      local_44 = ((iVar6 - iVar5) + 1);
      do {
        if (iVar13 <= iVar4) {
          local_54 = (ushort *)(iVar12 + iVar13 * 2);
          iVar5 = (iVar4 - iVar13) + 1;
          do {
            if ((int)(uint)*local_54 < (int)uVar7) {
              local_38 = 0;
            }
            local_54 = local_54 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar12 = iVar12 + this->field_02B8 * 2;
        local_44 = ((int)local_44 + -1);
      } while (local_44 != 0);
      local_44 = 0;
      if (local_38 == 0) {
        if (param_2 < 1) {
          local_38 = (-(uint)(param_4 != 0) & 0x180000) + 0x80000 & *puVar19;
        }
        else {
          local_38 = (-(uint)(param_4 != 0) & 0x300000) + 0x100000 & *puVar19;
        }
      }
    }
  }
  else {
    local_38 = 1;
    if ((-1 < (int)puVar19[9]) && (-1 < (int)puVar19[10])) {
      iVar12 = st::storage_bit_cast<int>(static_cast<uint32_t>(this->field_02F0 * puVar19[9])) / 100 + puVar19[0x15];
      iVar13 = st::storage_bit_cast<int>(static_cast<uint32_t>(this->field_02F4 * puVar19[10])) / 100 + puVar19[0x16];
      if ((((iVar12 < 0) || (iVar13 < 0)) || (this->field_0028 <= iVar12)) ||
         ((this->field_002C <= iVar13 ||
          ((int)(uint)*(ushort *)(this->field_0014 + (this->field_0028 * iVar13 + iVar12) * 2) <
           (int)uVar7)))) goto LAB_006f32f9;
    }
  }
  local_28 = 0;
  if ((local_38 == 0) && ((puVar19[1] & 0x10000) != 0)) {
    local_28 = puVar19[0x2e];
  }
  uVar15 = puVar19[0xe];
  local_48 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = uVar7;
  if ((int)param_3 < 0) {
    local_50 = (int)uVar15 >> 2;
    if (param_2 == 0) {
      param_1 = uVar7 + puVar19[0xb];
      uVar15 = uVar15 - local_50;
    }
    else if (param_2 == 1) {
      local_48 = (uVar15 - local_50);
      uVar15 = puVar19[0xc];
      goto LAB_006f34a4;
    }
  }
  else if (param_2 == 0) {
    local_50 = param_3;
    uVar15 = puVar19[0xb];
LAB_006f34a4:
    param_1 = uVar7 + uVar15;
    uVar15 = local_50;
  }
  else if (param_2 == 1) {
    local_48 = param_3;
    param_1 = uVar7 + puVar19[0xc];
    uVar15 = uVar15 - param_3;
  }
  local_50 = uVar15;
  if (param_4 == 0) {
    if ((this->field_0144 == 0) || (this->field_0158 == 0)) {
      local_20 = puVar19[0x2d];
    }
    else if (this->field_016C < (int)uVar7) {
      local_20 = (uVar7 & 0x7f00) + this->field_0158;
    }
  }
  else if ((this->field_0144 == 0) || (this->field_0158 == 0)) {
    local_40 = this->field_027C;
  }
  else {
    iVar13 = this->field_0278;
    iVar12 = (int)((uVar7 - this->field_016C) * iVar13) / (this->field_0170 - this->field_016C);
    if (iVar12 < 0) {
      local_40 = this->field_027C;
    }
    else {
      if (iVar13 <= iVar12) {
        iVar12 = iVar13 + -1;
      }
      local_40 = this->field_027C + iVar12 * 0x100;
    }
  }
  local_60 = *(uint *)(this->field_0330 + local_5c) & 2;
  local_4c = puVar19[0x25] - 1;
  if (-1 < (int)local_4c) {
LAB_006f3562:
    psVar1 = (short *)(puVar19[0x29] + local_4c * 4);
    uVar2 = psVar1[1];
    if (((uVar2 & 0xc000) == 0xc000) && ((local_60 != 0 || ((uVar2 & 0x80) != 0)))) {
      if ((uVar2 & 1) == 0) {
        iVar12 = *(int *)(puVar19[0x28] + 4 + local_4c * 8);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (((iVar12 != 0) && (param_4 == (uVar2 & 4) >> 2)) &&
           (local_54 = reinterpret_cast<ushort *>((this->field_0330 + local_5c)), *(int *)(local_54 + 0xc) != 0)) {
          local_34 = *(AnonShape_006F31D0_08EF59F4 **)(iVar12 + *psVar1 * 4);
          local_64 = (int)local_34->field_0014;
          pbVar14 = (byte *)(int)local_34->field_0012;
          if (((DAT_00857030 == 0) || ((puVar19[1] & 4) != 0)) ||
             ((*(byte *)(puVar19[0x29] + 2 + local_4c * 4) & 2) != 0)) {
            if (((int)local_48 < (int)local_34->field_0014 + (int)local_34->field_0010) &&
               (puVar10 = (byte *)local_48 + local_50, (int)local_34->field_0010 <= (int)puVar10
               )) {
              local_70 = puVar19[0x13] + (int)local_34->field_000E;
              local_68 = (int)local_34->field_0012;
              if (param_2 < 0) {
                local_6c = (undefined1 *)(puVar19[0x14] + (int)local_34->field_0010);
                local_64 = (int)local_34->field_0014;
              }
              else {
                pAVar8 = (int)local_34->field_0010;
                pAVar16 = local_48;
                if ((int)local_48 <= (int)pAVar8) {
                  pAVar16 = pAVar8;
                }
                if ((int)((byte *)pAVar8 + local_34->field_0014) <= (int)puVar10) {
                  puVar10 = (byte *)pAVar8 + local_34->field_0014;
                }
                local_6c = (byte *)pAVar16 + puVar19[0x14];
                local_64 = (int)puVar10 - (int)pAVar16;
              }
              goto LAB_006f397a;
            }
          }
          else {
            pAVar8 = (int)local_34->field_0010;
            pAVar16 = st::machine_word_boundary_cast<uint>(((byte *)pAVar8 + local_34->field_0014));
            if (((int)local_48 < (int)pAVar16) &&
               (pAVar9 = st::machine_word_boundary_cast<uint>((AnonShape_006F31D0_0BFF23DC *)((byte *)local_48 + local_50)),
               (int)pAVar8 <= (int)pAVar9)) {
              if (param_2 < 0) {
                pAVar9 = ((int)local_34->field_0010 + (int)local_34->field_0014);
                local_58 = st::pointer_boundary_cast<AnonShape_006F31D0_0BFF23DC *>(pAVar8);
                pAVar16 = (int)local_34->field_0010;
                pAVar3 = ((int)local_34->field_0014 + (int)local_34->field_0010);
              }
              else {
                local_58 = st::pointer_boundary_cast<AnonShape_006F31D0_0BFF23DC *>(local_48);
                if ((int)local_48 <= (int)pAVar8) {
                  local_58 = st::pointer_boundary_cast<AnonShape_006F31D0_0BFF23DC *>(pAVar8);
                }
                if ((int)pAVar16 <= (int)pAVar9) {
                  pAVar9 = pAVar16;
                }
                local_44 = pAVar9;
                pAVar16 = st::machine_word_boundary_cast<uint>(local_58);
                pAVar3 = pAVar9;
                if ((int)pAVar9 < (int)pAVar8) {
                  pAVar9 = pAVar8;
                  local_44 = pAVar8;
                  pAVar3 = pAVar8;
                }
              }
              local_c = (int)pAVar16 % DAT_00857008;
              local_64 = ((int)pAVar3 / DAT_00857008) * 2;
              iVar12 = (int)pAVar9 % DAT_00857008;
              local_10 = (int)local_34->field_000E % DAT_00857008;
              iVar13 = ((int)local_34->field_0012 + (int)local_34->field_000E) % DAT_00857008;
              uVar7 = local_c;
              uVar15 = local_10;
              if (DAT_00857008 != 5) {
                iVar13 = iVar13 + 1;
                iVar12 = iVar12 + 1;
                uVar7 = local_c + 1;
                uVar15 = local_10 + 1;
              }
              local_64 = local_64 + (iVar12 >> 1);
              local_68 = (((int)local_34->field_0012 + (int)local_34->field_000E) / DAT_00857008) *
                         2 + (iVar13 >> 1);
              local_70 = ((int)local_34->field_000E / DAT_00857008) * 2 + ((int)uVar15 >> 1);
              iVar12 = ((int)local_58 / DAT_00857008) * 2 + ((int)uVar7 >> 1);
              local_68 = local_68 - local_70;
              local_64 = local_64 - iVar12;
              local_70 = local_70 + puVar19[0x15];
              local_6c = (undefined1 *)(iVar12 + puVar19[0x16]);
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_006f397a:
              local_58 = *(AnonShape_006F31D0_0BFF23DC **)(local_54 + 0xc);
              if ((int)local_58 < 5) {
                if ((*(byte *)(puVar19[0x29] + 2 + local_4c * 4) & 0xc0) == 0xc0) {
                  puVar11 = reinterpret_cast<uint *>((local_54 + 4));
                  local_60 = 1;
                }
                else {
                  local_58 = nullptr;
                  puVar11 = reinterpret_cast<uint *>((local_54 + 0x10));
                }
              }
              else {
                puVar11 = puVar19 + 0x19;
              }
              if (local_4c == puVar19[0x23]) {
                DAT_00856fe8 = local_70;
                _DAT_00856ff0 = local_68;
                _DAT_00856ff4 = local_64;
                PTR_00856fe4 = reinterpret_cast<AnonShape_GLOBAL_00856FE4_DDA5DC8B *>(local_34);
                _DAT_00856fec = st::machine_word_boundary_cast<undefined4>(local_6c);
                DAT_0085700c = st::machine_word_boundary_cast<undefined4>(pbVar14);
              }
              if (((*(byte *)(puVar19[0x29] + 3 + local_4c * 4) & 0x20) == 0) ||
                 (local_54 = (ushort *)0x1, (int)puVar19[0x23] <= (int)local_4c)) {
                local_54 = nullptr;
              }
              _DAT_00857000 = (undefined1)(st::machine_word_boundary_cast<uint>(local_30));
              do {

                iVar12 = st::fn_006B0460(reinterpret_cast<int *>(&DAT_00856fd0),&local_70,reinterpret_cast<int *>(puVar11));
                if (iVar12 == 1) {
                  if (local_54 != nullptr) {

                    iVar12 = st::fn_006B0460(reinterpret_cast<int *>(&DAT_00856fd0),reinterpret_cast<int *>(&DAT_00856fd0),reinterpret_cast<int *>(&DAT_00856fe8));
                    goto LAB_006f3a58;
                  }
LAB_006f3a60:
                  pbVar20 = (byte *)((this->field_0024 + DAT_00856fd4) * DAT_00857028 +
                                     this->field_0020 + DAT_00856fd0 + DAT_00857004);
                  iVar12 = this->field_0028 * DAT_00856fd4;
                  local_30 = (byte *)(this->field_000C + iVar12 + DAT_00856fd0);
                  local_8 = (uint *)(this->field_0014 + (iVar12 + DAT_00856fd0) * 2);
                  if (((DAT_00857030 == 0) || ((puVar19[1] & 4) != 0)) ||
                     ((*(byte *)(puVar19[0x29] + 2 + local_4c * 4) & 2) != 0)) {
                    local_1c = (byte *)(DAT_00856fd0 - local_70);
                    local_18 = (ushort *)((DAT_00856fd4 - local_34->field_0010) - puVar19[0x14]);
                    local_44 = puVar19[0x30];
                    if (local_44 != 0) {
                      local_3c = (DAT_00856fd4 - puVar19[0x14]) * puVar19[0x2f] + (int)local_44;
                    }
                    if ((int)local_18 < 1) {
                      pbVar17 = &local_34[1].field_0x0 + ((byte)local_34->field_0xd >> 1 & 0xe);
                    }
                    else {
                      pbVar17 = st::fn_006CFE10(reinterpret_cast<RecoveredRecord_006CFE10_B59F6D2D *>(local_34),
                                             (int)local_18);
                    }
                    uVar2 = *(ushort *)(local_2c[0x29] + 2 + local_4c * 4);
                    local_44 = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_4c)), (uint16_t)(uVar2));
                    if ((uVar2 & 0x100) == 0) {
                      if ((uVar2 & 0x10) == 0) {
                        if ((local_3c == 0) || ((uVar2 & 8) != 0)) {
                          if (local_54 == nullptr) {
                            if ((uVar2 & 4) == 0) {
                              if (DAT_00856fd8 == st::machine_word_boundary_cast<undefined4>(pbVar14)) {
                                if (local_38 == 0) {
                                  if (local_20 == 0) {
                                    if (local_28 == 0) {
                                      st::fn_006F4E70(pbVar20,DAT_00857028,local_8,
                                                   this->field_0028 << 1,param_1,pbVar17,
                                                   st::pointer_boundary_cast<byte *>(DAT_00856fd8),DAT_00856fdc);
                                    }
                                    else {
                                      st::fn_006F4FE0(pbVar20,DAT_00857028,local_8,this->field_0028 * 2
                                                   ,param_1,pbVar17,(int)DAT_00856fd8,DAT_00856fdc,
                                                   local_30,this->field_0028,local_28);
                                    }
                                  }
                                  else if (local_28 == 0) {
                                    st::fn_006F5760(pbVar20,DAT_00857028,local_8,this->field_0028 << 1,
                                                 param_1,pbVar17,(int)DAT_00856fd8,DAT_00856fdc,
                                                 local_20);
                                  }
                                  else {

                                    st::fn_006F5920(pbVar20,DAT_00857028,local_8,this->field_0028 * 2,
                                                 param_1,pbVar17,(int)DAT_00856fd8,DAT_00856fdc,
                                                 local_20,local_30,this->field_0028,local_28);
                                  }
                                }
                                else if (local_20 == 0) {
                                  st::fn_006D25E0(pbVar20,DAT_00857028,pbVar17,(int)DAT_00856fd8,
                                               DAT_00856fdc);
                                }
                                else {
                                  st::fn_006F5BD0(pbVar20,DAT_00857028,pbVar17,(int)DAT_00856fd8,
                                               DAT_00856fdc,local_20);
                                }
                              }
                              else if (local_38 == 0) {
                                if (local_20 == 0) {
                                  if (local_28 == 0) {
                                    st::fn_006F5240(pbVar20,DAT_00857028,local_8,this->field_0028 << 1,
                                                 param_1,pbVar17,(int)pbVar14,(int)local_1c,
                                                 st::pointer_boundary_cast<byte *>(DAT_00856fd8),DAT_00856fdc);
                                  }
                                  else {
                                    st::fn_006F5430(pbVar20,DAT_00857028,local_8,this->field_0028 * 2,
                                                 param_1,pbVar17,(int)pbVar14,(int)local_1c,
                                                 (uint)DAT_00856fd8,DAT_00856fdc,local_30,
                                                 this->field_0028,local_28);
                                  }
                                }
                                else if (local_28 == 0) {
                                  st::fn_006F5D80(pbVar20,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                               this->field_0028 << 1,param_1,pbVar17,(int)pbVar14,
                                               (int)local_1c,(int)DAT_00856fd8,DAT_00856fdc,local_20
                                              );
                                }
                                else {
                                  st::fn_006F6020(pbVar20,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                               this->field_0028 * 2,param_1,pbVar17,(int)pbVar14,
                                               (int)local_1c,(int)DAT_00856fd8,DAT_00856fdc,local_20
                                               ,local_30,this->field_0028,local_28);
                                }
                              }
                              else if (local_20 == 0) {
                                st::fn_006D26D0(pbVar20,DAT_00857028,pbVar17,(int)pbVar14,(int)local_1c
                                             ,(uint)DAT_00856fd8,DAT_00856fdc);
                              }
                              else {
                                st::fn_006F8660(reinterpret_cast<undefined4 *>(pbVar20),DAT_00857028,pbVar17,(int)pbVar14
                                             ,(int)local_1c,(uint)DAT_00856fd8,DAT_00856fdc,local_20
                                            );
                              }
                            }
                            else if (local_40 != 0) {
                              if (DAT_00856fd8 == st::machine_word_boundary_cast<undefined4>(pbVar14)) {
                                if (local_38 == 0) {
                                  st::fn_006F5C60(pbVar20,DAT_00857028,local_30,this->field_0028,
                                               reinterpret_cast<ushort *>(local_8),this->field_0028 * 2,param_1,
                                               pbVar17,(int)DAT_00856fd8,DAT_00856fdc,local_40);
                                }
                                else {
                                  st::fn_006F85A0(pbVar20,DAT_00857028,local_30,this->field_0028,
                                               pbVar17,(int)DAT_00856fd8,DAT_00856fdc,local_40);
                                }
                              }
                              else if (local_38 == 0) {
                                st::fn_006F7D10(pbVar20,DAT_00857028,local_30,this->field_0028,
                                             reinterpret_cast<ushort *>(local_8),this->field_0028 * 2,param_1,pbVar17,
                                             (int)pbVar14,(int)local_1c,(int)DAT_00856fd8,
                                             DAT_00856fdc,local_40);
                              }
                              else {
                                st::fn_006F88A0(pbVar20,DAT_00857028,local_30,this->field_0028,pbVar17,
                                             (int)pbVar14,(int)local_1c,(int)DAT_00856fd8,
                                             DAT_00856fdc,local_40);
                              }
                            }
                          }
                          else {
                            local_44 = (DAT_00856fd0 - DAT_00856fe8);
                            iVar12 = (DAT_00856fd4 - PTR_00856fe4->field_0010) - local_2c[0x14];
                            if (iVar12 < 1) {
                              local_30 = &PTR_00856fe4[1].field_0x4 +
                                         ((byte)PTR_00856fe4->field_0xd >> 1 & 0xe);
                            }
                            else {
                              local_30 = st::fn_006CFE10(reinterpret_cast<RecoveredRecord_006CFE10_B59F6D2D *>(PTR_00856fe4),iVar12);
                            }
                            if (local_38 != 0) {
                              param_1 = 0;
                            }
                            if (DAT_00856fd8 == st::machine_word_boundary_cast<undefined4>(pbVar14)) {
                              local_1c = nullptr;
                            }
                            if (DAT_00856fd8 == DAT_0085700c) {
                              local_44 = 0;
                            }
                            if (local_20 == 0) {
                              st::fn_006F72F0(pbVar20,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                           this->field_0028 << 1,param_1,pbVar17,(int)pbVar14,
                                           (int)local_1c,(int)DAT_00856fd8,DAT_00856fdc,local_30,
                                           (uint)DAT_0085700c,(int)local_44);
                            }
                            else {
                              st::fn_006F77E0(pbVar20,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                           this->field_0028 << 1,param_1,pbVar17,(int)pbVar14,
                                           (int)local_1c,(int)DAT_00856fd8,DAT_00856fdc,local_30,
                                           (uint)DAT_0085700c,(int)local_44,local_20);
                            }
                          }
                        }
                        else {
                          if (local_38 != 0) {
                            param_1 = 0;
                          }
                          if (DAT_00856fd8 == st::machine_word_boundary_cast<undefined4>(pbVar14)) {
                            local_1c = nullptr;
                          }
                          if ((uVar2 & 4) == 0) {
                            if (local_20 == 0) {
                              if (local_28 == 0) {
                                st::fn_006F6330(pbVar20,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                             this->field_0028 << 1,param_1,pbVar17,(int)pbVar14,
                                             (int)local_1c,(int)DAT_00856fd8,DAT_00856fdc,local_3c,
                                             local_2c[0x2f],(byte *)(int)local_34->field_000E);
                              }
                              else {
                                st::fn_006F66C0(pbVar20,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                             this->field_0028 * 2,param_1,pbVar17,(int)pbVar14,
                                             (int)local_1c,(int)DAT_00856fd8,DAT_00856fdc,local_3c,
                                             local_2c[0x2f],(byte *)(int)local_34->field_000E,
                                             local_30,this->field_0028,local_28);
                              }
                            }
                            else if (local_28 == 0) {
                              st::fn_006F6AE0(pbVar20,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                           this->field_0028 << 1,param_1,pbVar17,(int)pbVar14,
                                           (int)local_1c,(int)DAT_00856fd8,DAT_00856fdc,local_3c,
                                           local_2c[0x2f],(byte *)(int)local_34->field_000E,local_20
                                          );
                            }
                            else {
                              st::fn_006F6EA0(pbVar20,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                           this->field_0028 * 2,param_1,pbVar17,(int)pbVar14,
                                           (int)local_1c,(int)DAT_00856fd8,DAT_00856fdc,local_3c,
                                           local_2c[0x2f],(byte *)(int)local_34->field_000E,local_20
                                           ,local_30,this->field_0028,local_28);
                            }
                          }
                          else if (local_40 != 0) {
                            st::fn_006F81D0(pbVar20,DAT_00857028,local_30,this->field_0028,
                                         reinterpret_cast<ushort *>(local_8),this->field_0028 * 2,param_1,pbVar17,
                                         (int)pbVar14,(int)local_1c,(int)DAT_00856fd8,DAT_00856fdc,
                                         local_40,local_3c,local_2c[0x2f],
                                         (byte *)(int)local_34->field_000E);
                          }
                        }
                      }
                      else {
                        local_44 = local_2c[0x2c];
                        if (local_44 != 0) {
                          if (local_38 != 0) {
                            param_1 = 0;
                          }
                          if (DAT_00856fd8 == st::machine_word_boundary_cast<undefined4>(pbVar14)) {
                            local_1c = nullptr;
                          }
                          st::fn_006F7FC0(pbVar20,DAT_00857028,reinterpret_cast<ushort *>(local_8),this->field_0028 << 1,
                                       param_1,pbVar17,(int)pbVar14,(int)local_1c,(int)DAT_00856fd8,
                                       DAT_00856fdc,(int)local_44);
                        }
                      }
                    }
                    else {
                      if (local_38 != 0) {
                        param_1 = 0;
                      }
                      if (DAT_00856fd8 == st::machine_word_boundary_cast<undefined4>(pbVar14)) {
                        local_1c = nullptr;
                      }
                      st::fn_007068D0(pbVar20,DAT_00857028,reinterpret_cast<ushort *>(local_8),this->field_0028 << 1,
                                   param_1,pbVar17,(int)pbVar14,(int)local_1c,local_2c[0x26],
                                   local_2c[0x27],(int)DAT_00856fd8,DAT_00856fdc);
                    }
                  }
                  else {
                    pbVar18 = st::pointer_boundary_cast<byte *>(DAT_00856fd8 + (DAT_00856fd0 - puVar19[0x15]));
                    if (DAT_00857008 == 3) {
                      uVar7 = (uint)pbVar18 & 1;
                    }
                    else {
                      uVar7 = (-(uint)(((uint)pbVar18 & 1) != 0) & 3) - 1;
                    }
                    local_44 = (DAT_00856fd0 - puVar19[0x15]);
                    iVar12 = ((int)pbVar18 / 2) * DAT_00857008 + (uVar7 - (int)local_34->field_000E);
                    if (DAT_00857008 == 3) {
                      local_10 = ((uint)local_44 & 1) << 1;
                    }
                    else {
                      local_10 = ((uint)local_44 & 1) << 1 | 1;
                    }
                    iVar13 = ((int)local_44 / 2) * DAT_00857008 +
                             (local_10 - (int)local_34->field_000E);
                    uVar7 = (DAT_00856fdc - local_2c[0x16]) + DAT_00856fd4;
                    if (DAT_00857008 == 3) {
                      uVar15 = uVar7 & 1;
                    }
                    else {
                      uVar15 = (-(uint)((uVar7 & 1) != 0) & 3) - 1;
                    }
                    iVar4 = ((int)uVar7 / 2) * DAT_00857008 + (uVar15 - (int)local_34->field_0010);
                    local_18 = (ushort *)(DAT_00856fd4 - local_2c[0x16]);
                    if (DAT_00857008 == 3) {
                      local_c = ((uint)local_18 & 1) << 1;
                    }
                    else {
                      local_c = ((uint)local_18 & 1) << 1 | 1;
                    }
                    local_14 = ((int)local_18 / 2) * DAT_00857008 +
                               (local_c - (int)local_34->field_0010);
                    if (local_2c[0x30] != 0) {
                      local_3c = local_2c[0x2f] * (int)local_18 + local_2c[0x30];
                    }
                    local_1c = pbVar20;
                    if (local_14 < 1) {
                      local_18 = reinterpret_cast<ushort *>((&local_34[1].field_0x0 + ((byte)local_34->field_0xd >> 1 & 0xe)));
                    }
                    else {
                      local_18 = reinterpret_cast<ushort *>(st::fn_006CFE10(reinterpret_cast<RecoveredRecord_006CFE10_B59F6D2D *>(local_34),local_14
                                             ));
                    }
                    uVar2 = *(ushort *)(local_2c[0x29] + 2 + local_4c * 4);
                    if ((uVar2 & 0x100) == 0) {
                      if ((uVar2 & 0x10) == 0) {
                        if ((local_3c == 0) || ((uVar2 & 8) != 0)) {
                          if (local_54 == nullptr) {
                            if ((uVar2 & 4) == 0) {
                              if (local_38 == 0) {
                                if (local_20 == 0) {
                                  if (DAT_00857008 == 3) {
                                    if (local_28 == 0) {
                                      st::fn_006F8AB0(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                                   local_24->field_0028 << 1,param_1,
                                                   reinterpret_cast<byte *>(local_18),(int)pbVar14,iVar13,
                                                   iVar12 - iVar13,iVar4 - local_14,local_10,local_c
                                                  );
                                    }
                                    else {
                                      st::fn_006F8F00(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                                   local_24->field_0028 * 2,param_1,reinterpret_cast<byte *>(local_18)
                                                   ,(int)pbVar14,iVar13,iVar12 - iVar13,
                                                   iVar4 - local_14,local_10,local_c,local_30,
                                                   local_24->field_0028,local_28);
                                    }
                                  }
                                  else if (local_28 == 0) {
                                    st::fn_006F94D0(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                                 local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),
                                                 (int)pbVar14,iVar13,iVar12 - iVar13,
                                                 iVar4 - local_14,local_10,local_c);
                                  }
                                  else {
                                    st::fn_006F9AD0(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                                 local_24->field_0028 * 2,param_1,local_18,
                                                 (int)pbVar14,iVar13,iVar12 - iVar13,
                                                 iVar4 - local_14,local_10,local_c,local_30,
                                                 local_24->field_0028,local_28);
                                  }
                                }
                                else if (DAT_00857008 == 3) {
                                  if (local_28 == 0) {
                                    st::fn_006FA280(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                                 local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),
                                                 (int)pbVar14,iVar13,iVar12 - iVar13,
                                                 iVar4 - local_14,local_10,local_c,local_20);
                                  }
                                  else {
                                    st::fn_006FA7A0(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                                 local_24->field_0028 * 2,param_1,reinterpret_cast<byte *>(local_18),
                                                 (int)pbVar14,iVar13,iVar12 - iVar13,
                                                 iVar4 - local_14,local_10,local_c,local_20,local_30
                                                 ,local_24->field_0028,local_28);
                                  }
                                }
                                else if (local_28 == 0) {
                                  st::fn_006FADC0(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                               local_24->field_0028 << 1,param_1,local_18,
                                               (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                               local_10,local_c,local_20);
                                }
                                else {
                                  st::fn_006FB4A0(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                               local_24->field_0028 * 2,param_1,reinterpret_cast<byte *>(local_18),
                                               (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                               local_10,local_c,local_20,local_30,
                                               local_24->field_0028,local_28);
                                }
                              }
                              else if (local_20 == 0) {
                                if (DAT_00857008 == 3) {
                                  st::fn_00704E70(local_1c,DAT_00857028,reinterpret_cast<byte *>(local_18),(int)pbVar14,
                                               iVar13,iVar12 - iVar13,iVar4 - local_14,local_10,
                                               local_c);
                                }
                                else {
                                  st::fn_00705180(local_1c,DAT_00857028,reinterpret_cast<byte *>(local_18),(int)pbVar14,
                                               iVar13,iVar12 - iVar13,iVar4 - local_14,local_10,
                                               local_c);
                                }
                              }
                              else if (DAT_00857008 == 3) {
                                st::fn_007055D0(local_1c,DAT_00857028,reinterpret_cast<byte *>(local_18),(int)pbVar14,
                                             iVar13,iVar12 - iVar13,iVar4 - local_14,local_10,
                                             local_c,local_20);
                              }
                              else {
                                st::fn_007059A0(local_1c,DAT_00857028,reinterpret_cast<byte *>(local_18),(int)pbVar14,
                                             iVar13,iVar12 - iVar13,iVar4 - local_14,local_10,
                                             local_c,local_20);
                              }
                            }
                            else if (local_40 != 0) {
                              if (local_38 == 0) {
                                iVar5 = local_24->field_0028;
                                if (DAT_00857008 == 3) {
                                  st::fn_00702510(local_1c,DAT_00857028,local_30,iVar5,
                                               reinterpret_cast<ushort *>(local_8),iVar5 * 2,param_1,reinterpret_cast<byte *>(local_18),
                                               (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                               local_10,local_c,local_40);
                                }
                                else {
                                  st::fn_00702A30(local_1c,DAT_00857028,local_30,iVar5,
                                               reinterpret_cast<ushort *>(local_8),iVar5 * 2,param_1,reinterpret_cast<byte *>(local_18),
                                               (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                               local_10,local_c,local_40);
                                }
                              }
                              else if (DAT_00857008 == 3) {
                                st::fn_00705ED0(local_1c,DAT_00857028,local_30,local_24->field_0028,
                                             reinterpret_cast<byte *>(local_18),(int)pbVar14,iVar13,iVar12 - iVar13,
                                             iVar4 - local_14,local_10,local_c,local_40);
                              }
                              else {
                                st::fn_00706340(local_1c,DAT_00857028,local_30,local_24->field_0028,
                                             reinterpret_cast<byte *>(local_18),(int)pbVar14,iVar13,iVar12 - iVar13,
                                             iVar4 - local_14,local_10,local_c,local_40);
                              }
                            }
                          }
                          else {
                            local_44 = (((int)local_34->field_000E - (int)PTR_00856fe4->field_000E)
                                       + iVar13);
                            iVar5 = ((int)local_34->field_0010 - (int)PTR_00856fe4->field_0010) +
                                    local_14;
                            if (iVar5 < 1) {
                              pbVar20 = &PTR_00856fe4[1].field_0x4 +
                                        ((byte)PTR_00856fe4->field_0xd >> 1 & 0xe);
                            }
                            else {
                              pbVar20 = st::fn_006CFE10(reinterpret_cast<RecoveredRecord_006CFE10_B59F6D2D *>(PTR_00856fe4),iVar5);
                            }
                            if (local_38 != 0) {
                              param_1 = 0;
                            }
                            if (local_20 == 0) {
                              if (DAT_00857008 == 3) {
                                st::fn_00700190(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                             local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),
                                             (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                             local_10,local_c,pbVar20,(int)DAT_0085700c,
                                             (int)local_44);
                              }
                              else {
                                st::fn_00700920(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                             local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),
                                             (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                             local_10,local_c,pbVar20,(int)DAT_0085700c,
                                             (int)local_44);
                              }
                            }
                            else if (DAT_00857008 == 3) {
                              st::fn_007012F0(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                           local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),
                                           (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                           local_10,local_c,pbVar20,(int)DAT_0085700c,(int)local_44,
                                           local_20);
                            }
                            else {
                              st::fn_00701AD0(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                           local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),
                                           (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                           local_10,local_c,pbVar20,(int)DAT_0085700c,(int)local_44,
                                           local_20);
                            }
                          }
                        }
                        else {
                          if (local_38 != 0) {
                            param_1 = 0;
                          }
                          if ((uVar2 & 4) == 0) {
                            if (local_20 == 0) {
                              if (DAT_00857008 == 3) {
                                if (local_28 == 0) {
                                  st::fn_006FBD40(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                               local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),
                                               (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                               local_10,local_c,local_3c,local_2c[0x2f],
                                               (int)local_44);
                                }
                                else {
                                  st::fn_006FC3E0(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                               local_24->field_0028 * 2,param_1,reinterpret_cast<byte *>(local_18),
                                               (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                               local_10,local_c,local_3c,local_2c[0x2f],
                                               (int)local_44,local_30,local_24->field_0028,local_28);
                                }
                              }
                              else if (local_28 == 0) {
                                st::fn_006FCB30(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                             local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),
                                             (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                             local_10,local_c,local_3c,local_2c[0x2f],(int)local_44);
                              }
                              else {
                                st::fn_006FD430(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                             local_24->field_0028 * 2,param_1,reinterpret_cast<byte *>(local_18),
                                             (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                             local_10,local_c,local_3c,local_2c[0x2f],(int)local_44,
                                             local_30,local_24->field_0028,local_28);
                              }
                            }
                            else if (DAT_00857008 == 3) {
                              if (local_28 == 0) {
                                st::fn_006FDEA0(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                             local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),
                                             (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                             local_10,local_c,local_3c,local_2c[0x2f],(int)local_44,
                                             local_20);
                              }
                              else {
                                st::fn_006FE570(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                             local_24->field_0028 * 2,param_1,reinterpret_cast<byte *>(local_18),
                                             (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                             local_10,local_c,local_3c,local_2c[0x2f],(int)local_44,
                                             local_20,local_30,local_24->field_0028,local_28);
                              }
                            }
                            else if (local_28 == 0) {
                              st::fn_006FED50(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                           local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),
                                           (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                           local_10,local_c,local_3c,local_2c[0x2f],(int)local_44,
                                           local_20);
                            }
                            else {
                              st::fn_006FF690(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                           local_24->field_0028 * 2,param_1,reinterpret_cast<byte *>(local_18),
                                           (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                           local_10,local_c,local_3c,local_2c[0x2f],(int)local_44,
                                           local_20,local_30,local_24->field_0028,local_28);
                            }
                          }
                          else if (local_40 != 0) {
                            iVar5 = local_24->field_0028;
                            if (DAT_00857008 == 3) {
                              st::fn_00703D40(local_1c,DAT_00857028,local_30,iVar5,reinterpret_cast<ushort *>(local_8),
                                           iVar5 * 2,param_1,reinterpret_cast<byte *>(local_18),(int)pbVar14,iVar13,
                                           iVar12 - iVar13,iVar4 - local_14,local_10,local_c,
                                           local_40,local_3c,local_2c[0x2f],(int)local_44);
                            }
                            else {
                              st::fn_00704460(local_1c,DAT_00857028,local_30,iVar5,reinterpret_cast<ushort *>(local_8),
                                           iVar5 * 2,param_1,reinterpret_cast<byte *>(local_18),(int)pbVar14,iVar13,
                                           iVar12 - iVar13,iVar4 - local_14,local_10,local_c,
                                           local_40,local_3c,local_2c[0x2f],(int)local_44);
                            }
                          }
                        }
                      }
                      else {
                        uVar7 = local_2c[0x2c];
                        if (uVar7 != 0) {
                          if (local_38 != 0) {
                            param_1 = 0;
                          }
                          if (DAT_00857008 == 3) {
                            st::fn_00703160(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                         local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),
                                         (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                         local_10,local_c,uVar7);
                          }
                          else {
                            st::fn_00703650(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                         local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),
                                         (int)pbVar14,iVar13,iVar12 - iVar13,iVar4 - local_14,
                                         local_10,local_c,uVar7);
                          }
                        }
                      }
                    }
                    else {
                      if (local_38 != 0) {
                        param_1 = 0;
                      }
                      if (DAT_00857008 == 3) {
                        st::fn_00706E30(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                     local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),(int)pbVar14
                                     ,iVar13,local_2c[0x26],local_2c[0x27],iVar12 - iVar13,
                                     iVar4 - local_14,local_10,local_c,(int)DAT_00856fd8,
                                     DAT_00856fdc);
                      }
                      else {
                        st::fn_00707810(local_1c,DAT_00857028,reinterpret_cast<ushort *>(local_8),
                                     local_24->field_0028 << 1,param_1,reinterpret_cast<byte *>(local_18),(int)pbVar14
                                     ,iVar13,local_2c[0x26],local_2c[0x27],iVar12 - iVar13,
                                     iVar4 - local_14,local_10,local_c,(int)DAT_00856fd8,
                                     DAT_00856fdc);
                      }
                    }
                  }
                }
                else {
LAB_006f3a58:
                  if (iVar12 != 0) goto LAB_006f3a60;
                }
                puVar19 = local_2c;
                this = local_24;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (*(int *)(local_24->field_0330 + local_5c + 0x18) <= (int)&local_58->field_0x1)
                goto LAB_006f4dec;
                puVar11 = reinterpret_cast<uint *>((local_24->field_0330 +
                                  local_5c + (int)&local_58->field_0x3 * 0x10));
                local_58 = reinterpret_cast<AnonShape_006F31D0_0BFF23DC *>(reinterpret_cast<byte *>(local_58) + 0x1);
              } while( true );
            }
          }
        }
      }
      else {
        uVar7 = (uint)*psVar1;
        iVar12 = uVar7 * 0x68;
        pbVar14 = this->field_0330 + iVar12;
        local_58 = *(AnonShape_006F31D0_0BFF23DC **)(pbVar14 + 100);
        if ((((local_58->field_0008 == 0) && ((local_58->field_0002 & 1) != 0)) &&
            ((param_4 == 0 || (local_58->field_0090 != 0)))) &&
           (((*(uint *)(pbVar14 + 4) & 0x8040) == 0x40 && ((*pbVar14 & 3) != 0)))) {
          if (param_2 < 0) {
LAB_006f3635:
            uVar15 = 0xffffffff;
            iVar13 = -1;
LAB_006f363d:
            st::fn_006F31D0(this,uVar7,iVar13,uVar15,param_4);
            if (param_4 != 0) {
              **(uint **)(this->field_0330 + iVar12 + 100) =
                   **(uint **)(this->field_0330 + iVar12 + 100) & 0xffffff7f;
            }
            **(uint **)(this->field_0330 + iVar12 + 100) =
                 **(uint **)(this->field_0330 + iVar12 + 100) & 0xffffff7d | 1;
          }
          else {
            local_18 = (ushort *)(local_58->field_0050 - puVar19[0x14]);
            if (param_2 == 0) {
              uVar15 = local_50 - (int)local_18;
              if ((int)local_18 < (int)local_50) {
                if (local_58->field_0038 + (int)local_18 <= (int)local_50) goto LAB_006f3635;
                iVar13 = 0;
                goto LAB_006f363d;
              }
            }
            else if ((param_2 == 1) &&
                    (uVar15 = (int)local_48 - (int)local_18,
                    (int)local_48 < local_58->field_0038 + (int)local_18)) {
              if ((int)local_18 < (int)local_48) {
                iVar13 = 1;
              }
              else {
                uVar15 = 0xffffffff;
                iVar13 = -1;
              }
              st::fn_006F31D0(this,uVar7,iVar13,uVar15,param_4);
              if (param_4 != 0) {
                **(uint **)(this->field_0330 + iVar12 + 100) =
                     **(uint **)(this->field_0330 + iVar12 + 100) & 0xffffff7f;
              }
              **(uint **)(this->field_0330 + iVar12 + 100) =
                   **(uint **)(this->field_0330 + iVar12 + 100) & 0xffffff7d | 1;
            }
          }
        }
      }
    }
    goto LAB_006f4df8;
  }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_006f4e0c:
  if (4 < *(int *)(this->field_0330 + local_5c + 0x18)) {
    if (param_4 != 0) {
      *puVar19 = *puVar19 | ((0 < param_2) - 1 & 0xffe00000) + 0x400000;
      return;
    }
    *puVar19 = *puVar19 | ((0 < param_2) - 1 & 0xfff80000) + 0x100000;
  }
  return;
LAB_006f4dec:
  local_30 = reinterpret_cast<byte *>(static_cast<uintptr_t>(_DAT_00857000));
LAB_006f4df8:
  local_4c = local_4c - 1;
  if ((int)local_4c < 0) goto code_r0x006f4e05;
  goto LAB_006f3562;
code_r0x006f4e05:
  if (local_30 != nullptr) {
    return;
  }
  goto LAB_006f4e0c;
}
