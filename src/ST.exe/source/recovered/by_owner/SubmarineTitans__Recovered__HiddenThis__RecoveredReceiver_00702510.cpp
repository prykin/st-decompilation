#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__RecoveredReceiver_00702510.cpp

// 00708D10 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00702510::FUN_00708d10
#line 4 "decomp/ST.exe/functions/00708D10/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00702510.
   Evidence: incoming_receiver_captures=1; receiver_accesses=27; incoming_edx_uses=0; calls=5;
   ecx_pointer_setup=5; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[32];
   expected_stack=32; receiver_family_members=3; adopt_untyped_existing_thiscall

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_00708D10
          (RecoveredReceiver_00702510 *this,int param_1,int param_2,
          AnonShape_00708D10_69880022 *param_3,int param_4,int param_5,uint param_6,int param_7,
          int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  ushort *puVar9;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  byte *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint *local_20;
  int local_1c;
  uint local_18;
  RecoveredReceiver_00702510 *local_14;
  byte *local_10;
  uint local_c;
  byte *local_8;

  local_1c = 0;
  if (param_8 != 0) {
    iVar7 = this->field_0278;
    iVar1 = (int)((param_6 - this->field_016C) * iVar7) / (this->field_0170 - this->field_016C);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (iVar7 <= iVar1) {
      iVar1 = iVar7 + -1;
    }
    local_1c = this->field_027C + iVar1 * 0x100;
  }
  local_68 = this->field_0030;
  local_64 = this->field_0034;
  local_60 = this->field_0038 - local_68;
  local_5c = this->field_003C - local_64;
  local_10 = (byte *)(int)param_3->field_0012;
  DAT_00857008 = 1;
  DAT_00856fc8 = 1;
  iVar1 = this->field_02F0;
  if (iVar1 != 100) {
    if (iVar1 == 0x43) {
      DAT_00857008 = 3;
    }
    else {
      if (iVar1 != 0x28) goto LAB_00708dda;
      DAT_00857008 = 5;
    }
    DAT_00856fc8 = 2;
  }
LAB_00708dda:
  local_34 = (int)param_3->field_0010;
  if (param_7 == 0) {
    local_28 = (int)param_3->field_0014;
  }
  else {
    local_28 = (param_3->field_0014 + 1) / 2;
  }
  local_30 = 0;
  local_14 = this;
  while( true ) {
    if (local_30 == 1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + param_7;
    }
    if (DAT_00856fc8 == DAT_00857008) {
      local_48 = (int)param_3->field_000E;
      local_40 = (int)param_3->field_0012;
      local_3c = local_28;
      local_44 = local_34;
    }
    else {
      local_18 = local_34 % DAT_00857008;
      local_2c = (local_34 + local_28) % DAT_00857008;
      local_c = (int)param_3->field_000E % DAT_00857008;
      local_24 = (int)param_3->field_000E + (int)param_3->field_0012;
      iVar7 = local_24 % DAT_00857008;
      uVar6 = local_18;
      uVar5 = local_c;
      iVar1 = local_2c;
      if (DAT_00857008 != 5) {
        iVar7 = iVar7 + 1;
        uVar6 = local_18 + 1;
        uVar5 = local_c + 1;
        iVar1 = local_2c + 1;
      }
      local_3c = ((local_34 + local_28) / DAT_00857008) * 2 + (iVar1 >> 1);
      local_40 = (local_24 / DAT_00857008) * 2 + (iVar7 >> 1);
      local_48 = ((int)param_3->field_000E / DAT_00857008) * 2 + ((int)uVar5 >> 1);
      local_44 = (local_34 / DAT_00857008) * 2 + ((int)uVar6 >> 1);
      local_40 = local_40 - local_48;
      local_3c = local_3c - local_44;
    }
    local_44 = local_44 + param_5;
    local_48 = local_48 + param_4;

    iVar1 = st::fn_006B0460(&local_58,&local_48,&local_68);
    if (iVar1 != 0) {
      local_24 = 1;
      iVar7 = (local_58 - this->field_02C8) / this->field_02C0;
      local_2c = (int)(local_50 + local_58 + (-1 - this->field_02C8)) / this->field_02C0;
      iVar2 = (local_54 - this->field_02CC) / this->field_02C4;
      iVar3 = ((local_4c - this->field_02CC) + -1 + local_54) / this->field_02C4;
      iVar1 = this->field_02B0 + this->field_02B8 * iVar2 * 2;
      if (iVar2 <= iVar3) {
        local_18 = (iVar3 - iVar2) + 1;
        do {
          if (iVar7 <= local_2c) {
            puVar9 = (ushort *)(iVar1 + iVar7 * 2);
            iVar2 = (local_2c - iVar7) + 1;
            do {
              if ((int)(uint)*puVar9 < (int)param_6) {
                local_24 = 0;
              }
              puVar9 = puVar9 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          iVar1 = iVar1 + this->field_02B8 * 2;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      pbVar8 = (byte *)(local_54 * param_2 + local_58 + param_1);
      local_20 = (uint *)(this->field_0014 + (this->field_0028 * local_54 + local_58) * 2);
      local_18 = local_58 - local_48;
      if (DAT_00856fc8 == DAT_00857008) {
        iVar1 = (local_54 - param_3->field_0010) - param_5;
        if (iVar1 < 1) {
          local_8 = &param_3[1].field_0x0 + ((byte)param_3->field_0xd >> 1 & 0xe);
        }
        else {
          local_8 = st::fn_006CFE10(reinterpret_cast<RecoveredRecord_006CFE10_B59F6D2D *>(param_3),iVar1);
        }
        if (param_8 == 0) {
          if (local_50 == local_10) {
            if (local_24 == 0) {
              st::fn_006F4E70(pbVar8,param_2,local_20,this->field_0028 << 1,param_6,local_8,local_50,
                           local_4c);
            }
            else {
              st::fn_006D25E0(pbVar8,param_2,local_8,(int)local_50,local_4c);
            }
          }
          else if (local_24 == 0) {
            st::fn_006F5240(pbVar8,param_2,local_20,this->field_0028 << 1,param_6,local_8,(int)local_10
                         ,local_18,local_50,local_4c);
          }
          else {
            st::fn_006D26D0(pbVar8,param_2,local_8,(int)local_10,local_18,(uint)local_50,local_4c);
          }
        }
        else if (local_50 == local_10) {
          if (local_24 == 0) {
            st::fn_006F5C60(pbVar8,param_2,pbVar8,param_2,reinterpret_cast<ushort *>(local_20),this->field_0028 << 1,
                         param_6,local_8,(int)local_50,local_4c,local_1c);
          }
          else {
            st::fn_006F85A0(pbVar8,param_2,pbVar8,param_2,local_8,(int)local_50,local_4c,local_1c);
          }
        }
        else if (local_24 == 0) {
          st::fn_006F7D10(pbVar8,param_2,pbVar8,param_2,reinterpret_cast<ushort *>(local_20),this->field_0028 << 1,
                       param_6,local_8,(int)local_10,local_18,(int)local_50,local_4c,local_1c);
        }
        else {
          st::fn_006F88A0(pbVar8,param_2,pbVar8,param_2,local_8,(int)local_10,local_18,(int)local_50,
                       local_4c,local_1c);
        }
      }
      else {
        pbVar4 = local_50 + (local_58 - param_4);
        if (DAT_00857008 == 3) {
          uVar6 = (uint)pbVar4 & 1;
        }
        else {
          uVar6 = (-(uint)(((uint)pbVar4 & 1) != 0) & 3) - 1;
        }
        iVar1 = ((int)pbVar4 / 2) * DAT_00857008 + (uVar6 - (int)param_3->field_000E);
        uVar6 = local_58 - param_4;
        if (DAT_00857008 == 3) {
          local_c = (uVar6 & 1) << 1;
        }
        else {
          local_c = (uVar6 & 1) << 1 | 1;
        }
        local_38 = ((int)uVar6 / 2) * DAT_00857008 + (local_c - (int)param_3->field_000E);
        uVar6 = (local_4c - param_5) + local_54;
        if (DAT_00857008 == 3) {
          uVar5 = uVar6 & 1;
        }
        else {
          uVar5 = (-(uint)((uVar6 & 1) != 0) & 3) - 1;
        }
        iVar7 = ((int)uVar6 / 2) * DAT_00857008 + (uVar5 - (int)param_3->field_0010);
        uVar6 = local_54 - param_5;
        if (DAT_00857008 == 3) {
          local_18 = (uVar6 & 1) << 1;
        }
        else {
          local_18 = (uVar6 & 1) << 1 | 1;
        }
        local_2c = ((int)uVar6 / 2) * DAT_00857008 + (local_18 - (int)param_3->field_0010);
        if (local_2c < 1) {
          local_8 = &param_3[1].field_0x0 + ((byte)param_3->field_0xd >> 1 & 0xe);
        }
        else {
          local_8 = st::fn_006CFE10(reinterpret_cast<RecoveredRecord_006CFE10_B59F6D2D *>(param_3),local_2c);
        }
        if (param_8 == 0) {
          if (local_24 == 0) {
            if (DAT_00857008 == 3) {
              st::fn_006F8AB0(pbVar8,param_2,reinterpret_cast<ushort *>(local_20),local_14->field_0028 << 1,param_6,
                           local_8,(int)local_10,local_38,iVar1 - local_38,iVar7 - local_2c,local_c,
                           local_18);
              this = local_14;
            }
            else {
              st::fn_006F94D0(pbVar8,param_2,reinterpret_cast<ushort *>(local_20),local_14->field_0028 << 1,param_6,
                           local_8,(int)local_10,local_38,iVar1 - local_38,iVar7 - local_2c,local_c,
                           local_18);
              this = local_14;
            }
          }
          else if (DAT_00857008 == 3) {
            st::fn_00704E70(pbVar8,param_2,local_8,(int)local_10,local_38,iVar1 - local_38,
                         iVar7 - local_2c,local_c,local_18);
            this = local_14;
          }
          else {
            st::fn_00705180(pbVar8,param_2,local_8,(int)local_10,local_38,iVar1 - local_38,
                         iVar7 - local_2c,local_c,local_18);
            this = local_14;
          }
        }
        else if (local_24 == 0) {
          if (DAT_00857008 == 3) {
            st::fn_00702510(pbVar8,param_2,pbVar8,param_2,reinterpret_cast<ushort *>(local_20),local_14->field_0028 << 1,
                         param_6,local_8,(int)local_10,local_38,iVar1 - local_38,iVar7 - local_2c,
                         local_c,local_18,local_1c);
            this = local_14;
          }
          else {
            st::fn_00702A30(pbVar8,param_2,pbVar8,param_2,reinterpret_cast<ushort *>(local_20),local_14->field_0028 << 1,
                         param_6,local_8,(int)local_10,local_38,iVar1 - local_38,iVar7 - local_2c,
                         local_c,local_18,local_1c);
            this = local_14;
          }
        }
        else if (DAT_00857008 == 3) {
          st::fn_00705ED0(pbVar8,param_2,pbVar8,param_2,local_8,(int)local_10,local_38,iVar1 - local_38
                       ,iVar7 - local_2c,local_c,local_18,local_1c);
          this = local_14;
        }
        else {
          st::fn_00706340(pbVar8,param_2,pbVar8,param_2,local_8,(int)local_10,local_38,iVar1 - local_38
                       ,iVar7 - local_2c,local_c,local_18,local_1c);
          this = local_14;
        }
      }
    }
    if ((param_7 == 0) || (local_30 != 0)) break;
    local_34 = local_34 + local_28;
    local_28 = param_3->field_0014 - local_28;
    local_30 = 1;
  }
  return;
}
