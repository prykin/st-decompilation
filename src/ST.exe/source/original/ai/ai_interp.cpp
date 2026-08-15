#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_interp.cpp

// 0066ACC0 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::FUN_0066acc0
#line 4 "decomp/ST.exe/functions/0066ACC0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_interp.cpp
   Diagnostic line evidence: 338 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970.
   Evidence: incoming_receiver_captures=1; receiver_accesses=37; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=5; single_call_corroborated_by_receiver_family */

uint * __thiscall
st::fn_0066ACC0
          (AnonReceiver_0064A970 *this,char *param_1,int param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  AnonReceiver_0064A970 *this_00;
  char cVar3;
  short sVar4;
  int local_EAX_54;
  int iVar13;
  char *local_EAX_315;
  uint uVar14;
  char *local_EAX_452;
  int local_EAX_627;
  AiPlrClassTy *pAVar15;
  char *local_EAX_723;
  char *local_EAX_781;
  char *local_EAX_901;
  char *local_EAX_1018;
  int local_EAX_1146;
  char *local_EAX_1234;
  char *local_EAX_1291;
  char *local_EAX_1401;
  char *local_EAX_1506;
  char *local_EAX_1650;
  char *local_EAX_1753;
  AiFltClassTy *pAVar16;
  char *local_EAX_1859;
  char *local_EAX_1962;
  char *local_EAX_2083;
  int iVar17;
  char *local_EAX_2265;
  char *local_EAX_2395;
  char *local_EAX_2671;
  int local_EAX_2822;
  char *local_EAX_2906;
  char *local_EAX_3000;
  char *local_EAX_3120;
  int local_EAX_3187;
  char *local_EAX_3206;
  char *local_EAX_3437;
  char *local_EAX_3557;
  int local_EAX_3624;
  char *local_EAX_3643;
  char *local_EAX_3786;
  char *local_EAX_3939;
  int local_EAX_4005;
  char *local_EAX_4024;
  int local_EAX_4096;
  char *local_EAX_4115;
  char *local_EAX_4446;
  char *local_EAX_4567;
  char *local_EAX_4751;
  char *local_EAX_4997;
  char *local_EAX_5116;
  int local_EAX_5183;
  char *local_EAX_5202;
  char *local_EAX_5345;
  char *local_EAX_5465;
  int local_EAX_5532;
  char *local_EAX_5551;
  char *local_EAX_5703;
  char *local_EAX_5813;
  int local_EAX_5889;
  char *local_EAX_6126;
  char *local_EAX_6237;
  int local_EAX_6313;
  byte *pbVar18;
  char *local_EAX_6537;
  char *local_EAX_6625;
  char *local_EAX_6722;
  char *local_EAX_6832;
  int local_EAX_6908;
  byte *pbVar19;
  char *local_EAX_7146;
  char *local_EAX_7257;
  char *local_EAX_7783;
  char *local_EAX_7894;
  char *local_EAX_8420;
  char *local_EAX_8531;
  byte *puVar20;
  char *local_EAX_9060;
  char *local_EAX_9171;
  Global_sub_00677700_param_2Enum GVar21;
  int local_EAX_9288;
  char *local_EAX_9350;
  Global_sub_006777D0_param_1Enum GVar22;
  int uVar12;
  char *pcVar27;
  char *local_EAX_9641;
  char *local_EAX_9737;
  char *local_EAX_9848;
  int iVar12;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar23;
  char *local_EAX_10183;
  char *local_EAX_10303;
  int local_EAX_10370;
  char *local_EAX_10389;
  char *local_EAX_10550;
  uint *puVar24;
  char *local_EAX_10821;
  char *local_EAX_11025;
  char *local_EAX_11114;
  char *local_EAX_11210;
  char *local_EAX_11321;
  int local_EAX_11396;
  char *local_EAX_11604;
  char *local_EAX_11679;
  char *local_EAX_11776;
  short sVar8;
  char *local_EAX_11977;
  char *local_EAX_12051;
  char *local_EAX_12148;
  char *local_EAX_12381;
  char *local_EAX_12470;
  char *local_EAX_12566;
  char *local_EAX_12677;
  int local_EAX_12752;
  char *local_EAX_13016;
  char *local_EAX_13578;
  char *local_EAX_13666;
  char *local_EAX_13740;
  char *local_EAX_13837;
  char *local_EAX_13947;
  int local_EAX_14021;
  int local_EAX_14081;
  char *local_EAX_14310;
  char *local_EAX_14397;
  char *local_EAX_14471;
  char *local_EAX_14568;
  char *local_EAX_14678;
  int local_EAX_14752;
  int local_EAX_14803;
  char *local_EAX_15032;
  char *local_EAX_15119;
  char *local_EAX_15215;
  int local_EAX_15327;
  char *local_EAX_15560;
  char *local_EAX_15656;
  int local_EAX_15768;
  char *local_EAX_16001;
  char *local_EAX_16075;
  char *local_EAX_16172;
  char *local_EAX_16282;
  int local_EAX_16356;
  int local_EAX_16409;
  char *local_EAX_16638;
  char *local_EAX_16747;
  char *local_EAX_16857;
  int local_EAX_16931;
  char *local_EAX_17038;
  char *local_EAX_17148;
  char *local_EAX_17282;
  char *local_EAX_17364;
  int local_EAX_17437;
  int local_EAX_17500;
  int local_EAX_17589;
  char *local_EAX_17673;
  char *local_EAX_17782;
  char *local_EAX_17900;
  char *local_EAX_17982;
  int local_EAX_18055;
  int local_EAX_18079;
  char *local_EAX_18118;
  char *local_EAX_18228;
  char *local_EAX_18333;
  char *local_EAX_18450;
  char *local_EAX_18572;
  char *local_EAX_18649;
  char *local_EAX_18749;
  char *local_EAX_18846;
  char *local_EAX_18965;
  int local_EAX_19032;
  char *local_EAX_19051;
  int local_EAX_19136;
  char *local_EAX_19205;
  char *local_EAX_19319;
  int local_EAX_19386;
  char *local_EAX_19405;
  AnonReceiver_0065DA50 *this_01;
  char *local_EAX_19584;
  char *local_EAX_19697;
  int local_EAX_19764;
  char *local_EAX_19783;
  char *local_EAX_19936;
  char *local_EAX_20049;
  int local_EAX_20116;
  char *local_EAX_20135;
  int local_EAX_20210;
  char *local_EAX_20309;
  char *local_EAX_20398;
  char *local_EAX_20495;
  char *local_EAX_20615;
  int local_EAX_20682;
  char *local_EAX_20701;
  short sVar9;
  short sVar10;
  AiFltClassTy *pAVar25;
  char *local_EAX_20943;
  char *local_EAX_21031;
  char *local_EAX_21131;
  int local_EAX_21198;
  char *local_EAX_21217;
  char *pcVar26;
  int local_EAX_21310;
  int local_EAX_21372;
  char *local_EAX_21485;
  char *local_EAX_21605;
  int local_EAX_21671;
  char *local_EAX_21690;
  char *local_EAX_21955;
  char *local_EAX_22075;
  int local_EAX_22142;
  char *local_EAX_22161;
  ushort uVar11;
  AnonShape_0065E360_B94C37CB *pAVar27;
  char *local_EAX_22423;
  char *local_ECX_128;
  uint uVar28;
  AiFltClassTy **ppAVar29;
  byte *puVar30;
  char *pcVar31;
  undefined8 uVar32;
  code *pcVar33;
  undefined *puVar34;
  undefined4 uVar35;
  undefined4 local_628 [78];
  undefined4 local_4f0 [78];
  undefined4 local_3b8 [78];
  undefined4 local_280 [8];
  InternalExceptionFrame local_260;
  undefined4 local_21c;
  undefined2 local_218;
  undefined4 local_214;
  undefined2 local_210;
  undefined1 local_1de;
  uint local_1d0 [2];
  char local_1c8;
  undefined4 *local_1c6;
  undefined4 local_19c [9];
  int local_178;
  int local_174;
  int local_170;
  int local_168;
  int local_164;
  int local_160;
  int local_158;
  int local_154;
  int local_150;
  int local_148;
  int local_144;
  int local_140;
  int local_138;
  int local_134;
  int local_130;
  int local_128;
  int local_124;
  int local_120;
  int local_118;
  int local_114;
  int local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_70;
  AnonReceiver_0064A970 *local_64;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  AiFltClassTy *local_50 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_1d;
  undefined4 local_1c;
  undefined4 local_18;
  uint *local_14;
  undefined4 local_10;
  char *local_c;
  AiFltClassTy *local_8;
  char *temp_3fd8761c8d;
  char *temp_3ffc6253af;
  char *pcVar25;

  local_14 = nullptr;
  local_260.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_260;
  local_64 = this;
  local_EAX_54 = st::fn_0072D7F0(local_260.jumpBuffer,0);
  this_00 = local_64;
  if (local_EAX_54 != 0) {
    g_currentExceptionFrame = local_260.previous;
    if (local_14 != nullptr) {
      st::fn_006AB060(&local_14);
    }
    if (0 < local_EAX_54) {
      local_EAX_54 = -0x6b;
    }
    if (param_3 != nullptr) {
      *param_3 = local_EAX_54;
    }
    return nullptr;
  }
  st::fn_0072E340(st::pointer_boundary_cast<char *>(&local_64->field_0x4),&CHAR_00h_008016a0,0x7f);
  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
  cVar3 = *param_1;
  local_ECX_128 = param_1;
  for (iVar13 = 0; (cVar3 != '\a' && (iVar13 < param_2)); iVar13 = iVar13 + 1) {
    cVar3 = local_ECX_128[5];
    local_ECX_128 = local_ECX_128 + 5;
  }
  if (iVar13 != param_2) {
    st::fn_006A5E40
              (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_interp.cpp"),0x152);
  }
  iVar13 = (int)*(short *)(param_1 + param_2 * 5 + 1);
  if (iVar13 < 0x7f7) {
    if (iVar13 == 0x7f6) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_8 < 0xf);
      if ((param_1[0xf] != '\x06') && (param_1[0xf] != '\x03')) {
        local_EAX_9641 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_9641 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_9641,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      local_c = (char *)0x4;
      if (4 < param_2) {
        local_8 = (AiFltClassTy *)0x14;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_9737 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_9737 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_9737,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_9848 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_9848 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_9848,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      iVar12 = st::fn_004016B8(this_00,(char *)local_8,uVar14,puVar24);
      DAT_00811980 = 0;
      if (0 < iVar12) {
        local_10 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x2d);
        local_18 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x28);
        local_2c = st::machine_word_boundary_cast<undefined4>((byte *)(param_1 + 0x23));
        local_1c = st::machine_word_boundary_cast<undefined4>((byte *)(param_1 + 0x1e));
        local_24 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x19);
        local_30 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x14);
        local_28 = st::machine_word_boundary_cast<undefined4>(param_1 + 0xf);
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        do {
          uVar35 = 0;
          pcVar33 = st::pointer_boundary_cast<code *>(st::fn_00405628);
          pcVar31 = st::pointer_boundary_cast<char *>(local_10);
          sVar4 = (*this_00->vtable->slot_00)();
          sVar8 = (short)pcVar31;
          pcVar31 = st::pointer_boundary_cast<char *>(local_18);
          sVar5 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar31;
          pbVar19 = st::pointer_boundary_cast<byte *>(local_2c);
          sVar6 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pbVar19;
          pbVar19 = st::pointer_boundary_cast<byte *>(local_1c);
          uVar23 = (*this_00->vtable->slot_00)();
          uVar23 = (*this_00->vtable->slot_00)(local_24,uVar23);
          uVar23 = (*this_00->vtable->slot_00)(local_30,uVar23);
          uVar23 = (*this_00->vtable->slot_08)(local_28,uVar23);
          sVar7 = (*this_00->vtable->slot_00)(local_c,uVar23);
          st::fn_00403882(*(short *)ppAVar29,sVar7,pbVar19,sVar6,sVar9,sVar5,sVar10,sVar4,sVar8,st::pointer_boundary_cast<undefined *>(pcVar33),
                      uVar35);
          ppAVar29 = ppAVar29 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      goto cf_common_exit_0066DF5E;
    }
    if (iVar13 < 0x7e7) {
      if (iVar13 == 0x7e6) {
        local_c = nullptr;
        if (0 < param_2) {
          local_8 = nullptr;
          do {
            if ((param_1[(int)&local_8->vtable] != '\x04') &&
               (param_1[(int)&local_8->vtable] != '\x01')) {
              local_EAX_3786 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (local_EAX_3786 != nullptr) {
                st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_3786,0x7f);
              }
              *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              st::fn_006A5E40
                        (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
            }
            local_c = (char *)((int)local_c + 1);
            local_8 = (AiFltClassTy *)&local_8->field_0x5;
          } while ((int)local_c < param_2);
        }
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
        iVar13 = (*this_00->vtable->slot_18)();
        if ((((iVar13 == 8) && ((local_8 == (AiFltClassTy *)0x9 || (local_c == (char *)0x9)))) ||
            (local_8 == (AiFltClassTy *)0xff)) || (local_c == (char *)0xff)) {
          local_EAX_3939 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_3939 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_3939,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_EAX_4005 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
        if (local_EAX_4005 != 1) {
          local_EAX_4024 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_4024 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_4024,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_8 = local_50[0];
        local_EAX_4096 = st::fn_004016B8(this_00,local_c,0,(uint *)local_50);
        if (local_EAX_4096 != 1) {
          local_EAX_4115 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_4115 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_4115,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
        if (DAT_00808a8f != '\0') {
          *local_14 = (uint)(g_bulkInitializedRecords_008087C7[(uint)local_8 & 0xff].field_0023 !=
                            g_bulkInitializedRecords_008087C7[(uint)local_50[0] & 0xff].field_0023);
          goto cf_common_exit_00670431;
        }
        if ((char)local_50[0] == (char)local_8) {
LAB_0066bdcc:
          iVar13 = 0;
        }
        else {
          uVar14 = (uint)local_50[0] & 0xff;
          uVar28 = (uint)local_8 & 0xff;
          bVar1 = g_playerRelationMatrix[uVar14][uVar28];
          if ((bVar1 == 0) && (g_playerRelationMatrix[uVar28][uVar14] == 0)) {
            iVar13 = -2;
          }
          else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar28][uVar14] == 0)) {
            iVar13 = -1;
          }
          else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar28][uVar14] == 1)) {
            iVar13 = 1;
          }
          else {
            if ((bVar1 != 1) || (g_playerRelationMatrix[uVar28][uVar14] != 1)) goto LAB_0066bdcc;
            iVar13 = 2;
          }
        }
        *local_14 = (uint)(iVar13 < 0);
        goto cf_common_exit_00670431;
      }
      if (iVar13 < 0x7d7) {
        if (iVar13 == 0x7d6) {
          local_c = nullptr;
          if (0 < param_2) {
            local_10 = 0;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                local_EAX_2265 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_2265 != nullptr) {
                  st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_2265,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                st::fn_006A5E40
                          (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          iVar13 = (*this_00->vtable->slot_00)(param_1);
          if ((g_dArray_0080C4C7 == nullptr) ||
             ((int)g_dArray_0080C4C7->elementSize <= iVar13)) {
            local_c = nullptr;
          }
          else {
            local_c = *(char **)(g_dArray_0080C4C7->growCapacity + iVar13 * 4);
          }
          if (local_c == nullptr) {
            local_EAX_2395 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_2395 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_2395,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          puVar24 = (uint *)st::fn_006C49B0(local_c);
          if (param_3 == nullptr) {
            g_currentExceptionFrame = local_260.previous;
            return puVar24;
          }
          *param_3 = 3;
          g_currentExceptionFrame = local_260.previous;
          return puVar24;
        }
        if (0x7d2 < iVar13) {
          if (iVar13 == 0x7d3) {
            local_c = nullptr;
            if (0 < param_2) {
              local_10 = 0;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  local_EAX_2083 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (local_EAX_2083 != nullptr) {
                    st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_2083,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  st::fn_006A5E40
                            (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            iVar13 = (*this_00->vtable->slot_00)(param_1);
            iVar17 = (*this_00->vtable->slot_00)(param_1 + 5);
            local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
            if (iVar17 < iVar13) {
              uVar14 = (*this_00->vtable->slot_10)(iVar17,iVar13);
              *local_14 = uVar14;
            }
            else {
              uVar14 = (*this_00->vtable->slot_10)(iVar13,iVar17);
              *local_14 = uVar14;
            }
          }
          else {
            if (iVar13 != 0x7d4) {
              if (iVar13 == 0x7d5) {
                local_c = nullptr;
                if (0 < param_2) {
                  local_10 = 0;
                  do {
                    if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                      local_EAX_1650 =
                           st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
                      if (local_EAX_1650 != nullptr) {
                        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_1650,0x7f);
                      }
                      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                      st::fn_006A5E40
                                (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
                    }
                    local_c = local_c + 1;
                    local_10 = local_10 + 5;
                  } while ((int)local_c < param_2);
                }
                local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
                if (((int)local_8 < 0) || (3 < (int)local_8)) {
                  local_EAX_1753 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (local_EAX_1753 != nullptr) {
                    st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_1753,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  st::fn_006A5E40
                            (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
                }
                pAVar16 = (AiFltClassTy *)(*this_00->vtable->slot_28)(local_8);
                goto LAB_0066d630;
              }
              goto cf_common_exit_00670456;
            }
            local_c = nullptr;
            if (0 < param_2) {
              local_10 = 0;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  local_EAX_1859 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (local_EAX_1859 != nullptr) {
                    st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_1859,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  st::fn_006A5E40
                            (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
            if (((int)local_8 < 0) || (0x20 < (int)local_8)) {
              local_EAX_1962 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (local_EAX_1962 != nullptr) {
                st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_1962,0x7f);
              }
              *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              st::fn_006A5E40
                        (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
            }
            local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
            uVar14 = (*this_00->vtable->slot_24)(local_8);
            *local_14 = uVar14;
          }
          goto cf_common_exit_00670431;
        }
        if (iVar13 == 0x7d2) {
          local_c = nullptr;
          if (0 < param_2) {
            local_10 = 0;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                local_EAX_1401 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_1401 != nullptr) {
                  st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_1401,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                st::fn_006A5E40
                          (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
          if (((int)local_8 < 0) || (0xff < (int)local_8)) {
            local_EAX_1506 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_1506 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_1506,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          *local_14 = (&DAT_0080e43b)[(int)local_8];
          goto cf_common_exit_00670431;
        }
        if (iVar13 < 0x7d1) {
          if (iVar13 == 2000) {
            local_c = nullptr;
            if (0 < param_2) {
              local_10 = 0;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  local_EAX_452 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (local_EAX_452 != nullptr) {
                    st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_452,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  st::fn_006A5E40
                            (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
            local_10 = st::machine_word_boundary_cast<undefined4>((char *)(*this_00->vtable->slot_00)(param_1 + 5));
            local_c = nullptr;
            if ((local_8 == (AiFltClassTy *)0x9) &&
               (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
              iVar13 = (*this_00->vtable->slot_2C)(local_10);
              local_c = (char *)(uint)(iVar13 == 0);
              local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
              *local_14 = (uint)local_c;
            }
            else {
              local_EAX_627 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
              if (local_EAX_627 == 1) {
                if (g_allPlayers_007FA174 == nullptr) {
                  pAVar15 = nullptr;
                }
                else {
                  pAVar15 = st::fn_00401DC5((char)local_50[0]);
                }
                if (pAVar15 != nullptr) {
                  iVar13 = (*pAVar15->vtable_at_1c->vfunc_2C)
                                     ((AiPlrClassTy *)&pAVar15->vtable_at_1c,(short)local_10);
                  local_c = (char *)(uint)(iVar13 == 0);
                  local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
                  *local_14 = (uint)local_c;
                  goto cf_common_exit_00670431;
                }
                local_8 = local_50[0];
                local_EAX_723 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_723 != nullptr) {
                  st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_723,0x7f);
                }
                *(AiFltClassTy **)&this_00->field_0x84 = local_8;
              }
              else {
                local_EAX_781 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_781 != nullptr) {
                  st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_781,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              }
              st::fn_006A5E40
                        (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
              local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
              *local_14 = (uint)local_c;
            }
          }
          else {
            if ((iVar13 < 800) || (0x321 < iVar13)) goto cf_common_exit_00670456;
            local_c = nullptr;
            if (0 < param_2) {
              local_10 = 0;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  local_EAX_315 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (local_EAX_315 != nullptr) {
                    st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_315,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  st::fn_006A5E40
                            (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
            uVar14 = (*this_00->vtable->slot_00)(param_1);
            *local_14 = uVar14;
          }
          goto cf_common_exit_00670431;
        }
        if (iVar13 != 0x7d1) {
cf_common_exit_00670456:
          local_EAX_22423 = st::fn_004057DB(iVar13);
          if (local_EAX_22423 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_22423,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x77,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          g_currentExceptionFrame = local_260.previous;
          return local_14;
        }
        local_c = nullptr;
        if (0 < param_2) {
          local_10 = 0;
          do {
            if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
              local_EAX_901 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (local_EAX_901 != nullptr) {
                st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_901,0x7f);
              }
              *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              st::fn_006A5E40
                        (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
            }
            local_c = (char *)((int)local_c + 1);
            local_10 = local_10 + 5;
          } while ((int)local_c < param_2);
        }
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
        local_10 = st::machine_word_boundary_cast<undefined4>((char *)(*this_00->vtable->slot_00)(param_1 + 5));
        if (((int)local_10 < 0) || (0xff < (int)local_10)) {
          local_EAX_1018 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_1018 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_1018,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = nullptr;
        if ((local_8 == (AiFltClassTy *)0x9) &&
           (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
          local_c = (char *)(*this_00->vtable->slot_1C)(local_10);
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          *local_14 = (uint)local_c;
          goto cf_common_exit_00670431;
        }
        local_EAX_1146 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
        if (local_EAX_1146 != 1) {
          local_EAX_1291 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          goto joined_r0x0066b1d2;
        }
        if (g_allPlayers_007FA174 == nullptr) {
          pAVar15 = nullptr;
        }
        else {
          pAVar15 = st::fn_00401DC5((char)local_50[0]);
        }
        if (pAVar15 != nullptr) {
          local_c = (char *)(*pAVar15->vtable_at_1c->vfunc_1C)
                                      ((AiPlrClassTy *)&pAVar15->vtable_at_1c,(short)local_10);
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          *local_14 = (uint)local_c;
          goto cf_common_exit_00670431;
        }
        local_8 = local_50[0];
        local_EAX_1234 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_1234 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_1234,0x7f);
        }
LAB_0066b1ad:
        *(AiFltClassTy **)&this_00->field_0x84 = local_8;
LAB_0066b1fb:
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
        *local_14 = (uint)local_c;
      }
      else {
        switch(iVar13) {
        case 0x7d7:
          uVar14 = (*this_00->vtable->slot_18)();
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          if (uVar14 == 8) {
            uVar14 = 0xff;
          }
          *local_14 = uVar14;
          break;
        default:
          goto cf_common_exit_00670456;
        case 0x7da:
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          *local_14 = st::machine_word_boundary_cast<uint>(g_playSystem_00802A38->field_00E4 / 0x19);
          break;
        case 0x7dc:
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          *local_14 = g_playSystem_00802A38->field_00E4;
          break;
        case 0x7dd:
          local_c = nullptr;
          if (0 < param_2) {
            local_10 = 0;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                local_EAX_2671 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_2671 != nullptr) {
                  st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_2671,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                st::fn_006A5E40
                          (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
          local_c = nullptr;
          if ((local_8 == (AiFltClassTy *)0x9) &&
             (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
            local_c = (char *)(*this_00->vtable->slot_14)();
            local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
            *local_14 = (uint)local_c;
            break;
          }
          local_EAX_2822 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
          if (local_EAX_2822 == 1) {
            if (g_allPlayers_007FA174 == nullptr) {
              pAVar15 = nullptr;
            }
            else {
              pAVar15 = st::fn_00401DC5((char)local_50[0]);
            }
            if (pAVar15 != nullptr) {
              local_c = (char *)(*pAVar15->vtable_at_1c->vfunc_14)
                                          ((AiPlrClassTy *)&pAVar15->vtable_at_1c);
              local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
              *local_14 = (uint)local_c;
              break;
            }
            local_8 = local_50[0];
            local_EAX_2906 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_2906 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_2906,0x7f);
            }
            goto LAB_0066b1ad;
          }
          local_EAX_1291 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
joined_r0x0066b1d2:
          if (local_EAX_1291 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_1291,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          goto LAB_0066b1fb;
        case 0x7de:
          local_c = nullptr;
          if (0 < param_2) {
            local_10 = 0;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                local_EAX_3000 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_3000 != nullptr) {
                  st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_3000,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                st::fn_006A5E40
                          (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_c = (char *)(*this_00->vtable->slot_00)(param_1);
          if (((local_c == (char *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) ||
             (local_c == (char *)0xff)) {
            local_EAX_3120 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_3120 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_3120,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_EAX_3187 = st::fn_004016B8(this_00,local_c,0,(uint *)local_50);
          if (local_EAX_3187 != 1) {
            local_EAX_3206 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_3206 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_3206,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_1d = '\0';
          local_8 = nullptr;
          if (g_cPanel_00801688 != nullptr) {
            st::fn_004032F1(g_cPanel_00801688,(byte)local_50[0],st::pointer_boundary_cast<undefined1 *>(&local_1d),(int *)&local_8);
          }
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          *local_14 = ~-(uint)(local_1d != '\x01') & (uint)local_8;
          break;
        case 0x7e4:
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          if (((char)DAT_008087a0 == '\x03') || ((char)DAT_008087a0 == '\b')) {
            *local_14 = _DAT_00807340 & 0xff;
          }
          else {
            *local_14 = 0;
          }
          break;
        case 0x7e5:
          local_c = nullptr;
          if (0 < param_2) {
            local_8 = nullptr;
            do {
              if ((param_1[(int)&local_8->vtable] != '\x04') &&
                 (param_1[(int)&local_8->vtable] != '\x01')) {
                local_EAX_3437 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_3437 != nullptr) {
                  st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_3437,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                st::fn_006A5E40
                          (-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_8 = (AiFltClassTy *)&local_8->field_0x5;
            } while ((int)local_c < param_2);
          }
          local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
          if (((local_8 == (AiFltClassTy *)0x9) &&
              (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) ||
             (local_8 == (AiFltClassTy *)0xff)) {
            local_EAX_3557 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_3557 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_3557,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_EAX_3624 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
          if (local_EAX_3624 != 1) {
            local_EAX_3643 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_3643 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_3643,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          if (DAT_00808a8f != '\0') {
            *local_14 = (uint)g_bulkInitializedRecords_008087C7[(int)local_50[0]].field_0023;
            break;
          }
          goto LAB_0066bb5e;
        }
      }
      goto cf_common_exit_00670431;
    }
    switch(iVar13) {
    case 0x7e7:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_4446 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_4446 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_4446,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_c = (char *)(*this_00->vtable->slot_00)(param_1);
      if (((local_c == (char *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) ||
         (local_c == (char *)0xff)) {
        local_EAX_4567 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_4567 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_4567,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      if (local_c == (char *)0x8) {
        local_c = (char *)(uint)DAT_0080874d;
      }
      pcVar31 = local_c;
      if (local_c == (char *)0x9) {
        pcVar31 = (char *)(*this_00->vtable->slot_18)();
      }
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      if ((pcVar31 < 8) &&
         ((g_playSystem_00802A38 == nullptr ||
          (g_bulkInitializedRecords_008087C7[(int)pcVar31].field_0022 < 8)))) {
        *local_14 = 1;
        break;
      }
LAB_0066bb5e:
      *local_14 = 0;
      break;
    case 0x7e8:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_4751 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_4751 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_4751,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      uVar14 = (*this_00->vtable->slot_00)(param_1);
      uVar28 = 0;
      if (DAT_00808a8f == '\0') {
LAB_0066bff3:
        local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
        *local_14 = uVar28;
      }
      else {
        pbVar19 = &g_bulkInitializedRecords_008087C7[0].field_0023;
        do {
          if (((g_playSystem_00802A38 == nullptr) || (pbVar19[-1] < 8)) &&
             (*pbVar19 == uVar14)) {
            uVar28 = 1;
            goto LAB_0066bff3;
          }
          pbVar19 = pbVar19 + 0x51;
        } while ((int)pbVar19 < 0x808a72);
        local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
        *local_14 = 0;
      }
      break;
    case 0x7e9:
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      *local_14 = (uint)(DAT_00808a8f != '\0');
      break;
    case 0x7ea:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_4997 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_4997 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_4997,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)
          ) || (local_8 == (AiFltClassTy *)0xff)) {
        local_EAX_5116 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_5116 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_5116,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      local_EAX_5183 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
      if (local_EAX_5183 != 1) {
        local_EAX_5202 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_5202 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_5202,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      *local_14 = (uint)(byte)local_50[0][0x32cd].field_0x268;
      break;
    case 0x7eb:
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      *local_14 = (uint)DAT_0080874d;
      break;
    case 0x7ec:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_5345 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_5345 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_5345,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)
          ) || (local_8 == (AiFltClassTy *)0xff)) {
        local_EAX_5465 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_5465 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_5465,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      local_EAX_5532 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
      if (local_EAX_5532 != 1) {
        local_EAX_5551 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_5551 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_5551,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      *local_14 = (uint)g_bulkInitializedRecords_008087C7[(int)local_50[0]].field_0021;
      break;
    case 0x7ed:
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      *local_14 = (uint)(DAT_00808a94 != '\0');
      break;
    case 0x7ee:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_5703 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_5703 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_5703,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_5813 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_5813 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_5813,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      local_EAX_5889 = st::fn_004016B8(this_00,(char *)local_8,uVar14,puVar24);
      DAT_00811980 = 0;
      if (0 < local_EAX_5889) {
        local_10 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x2d);
        local_18 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x28);
        local_2c = st::machine_word_boundary_cast<undefined4>((byte *)(param_1 + 0x23));
        local_1c = st::machine_word_boundary_cast<undefined4>((byte *)(param_1 + 0x1e));
        local_24 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x19);
        local_30 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x14);
        local_28 = st::machine_word_boundary_cast<undefined4>(param_1 + 0xf);
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        do {
          puVar34 = nullptr;
          puVar24 = nullptr;
          pcVar33 = st::pointer_boundary_cast<code *>(st::fn_00401E8D);
          pcVar31 = st::pointer_boundary_cast<char *>(local_10);
          sVar4 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar31;
          pcVar31 = st::pointer_boundary_cast<char *>(local_18);
          sVar5 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pcVar31;
          pbVar19 = st::pointer_boundary_cast<byte *>(local_2c);
          sVar6 = (*this_00->vtable->slot_00)();
          sVar7 = (short)pbVar19;
          pbVar19 = st::pointer_boundary_cast<byte *>(local_1c);
          pbVar18 = (byte *)(*this_00->vtable->slot_00)();
          cVar3 = (char)pbVar19;
          pcVar31 = st::pointer_boundary_cast<char *>(local_24);
          uVar23 = (*this_00->vtable->slot_00)();
          uVar23 = (*this_00->vtable->slot_00)(local_30,uVar23);
          uVar23 = (*this_00->vtable->slot_00)(local_28,uVar23);
          uVar14 = (*this_00->vtable->slot_00)(local_c,0x3fffffff,0,uVar23);
          st::fn_004012F8(st::machine_word_boundary_cast<undefined4>(*ppAVar29),uVar14,(uint)pcVar31,pbVar18,cVar3,sVar6,sVar7,sVar5,sVar9,sVar4,
                     sVar10,st::pointer_boundary_cast<undefined *>(pcVar33),puVar24,puVar34);
          ppAVar29 = ppAVar29 + 1;
          local_EAX_5889 = local_EAX_5889 + -1;
        } while (local_EAX_5889 != 0);
      }
      goto cf_common_exit_0066DF5E;
    case 0x7ef:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_6126 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_6126 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_6126,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_6237 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_6237 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_6237,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      local_EAX_6313 = st::fn_004016B8(this_00,(char *)local_8,uVar14,puVar24);
      DAT_00811980 = 0;
      if (0 < local_EAX_6313) {
        local_10 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x2d);
        local_18 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x28);
        local_2c = st::machine_word_boundary_cast<undefined4>((byte *)(param_1 + 0x23));
        local_1c = st::machine_word_boundary_cast<undefined4>((byte *)(param_1 + 0x1e));
        local_24 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x19);
        local_30 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x14);
        local_28 = st::machine_word_boundary_cast<undefined4>(param_1 + 0xf);
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        do {
          puVar34 = nullptr;
          puVar24 = nullptr;
          pcVar33 = st::pointer_boundary_cast<code *>(st::fn_00401E8D);
          pcVar31 = st::pointer_boundary_cast<char *>(local_10);
          sVar4 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar31;
          pcVar31 = st::pointer_boundary_cast<char *>(local_18);
          sVar5 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pcVar31;
          pbVar19 = st::pointer_boundary_cast<byte *>(local_2c);
          sVar6 = (*this_00->vtable->slot_00)();
          sVar7 = (short)pbVar19;
          pbVar19 = st::pointer_boundary_cast<byte *>(local_1c);
          pbVar18 = (byte *)(*this_00->vtable->slot_00)();
          cVar3 = (char)pbVar19;
          uVar23 = (*this_00->vtable->slot_00)(local_24);
          uVar23 = (*this_00->vtable->slot_00)(local_30,uVar23);
          uVar23 = (*this_00->vtable->slot_00)(local_28,uVar23);
          uVar14 = (*this_00->vtable->slot_00)(local_c,0,uVar23);
          st::fn_004012F8(st::machine_word_boundary_cast<undefined4>(*ppAVar29),0,uVar14,pbVar18,cVar3,sVar6,sVar7,sVar5,sVar9,sVar4,sVar10,st::pointer_boundary_cast<undefined *>(pcVar33),
                     puVar24,puVar34);
          ppAVar29 = ppAVar29 + 1;
          local_EAX_6313 = local_EAX_6313 + -1;
        } while (local_EAX_6313 != 0);
      }
      goto cf_common_exit_0066DF5E;
    case 0x7f0:
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_6537 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_6537 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_6537,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_8 < 10);
      if ((param_1[10] != '\x06') && (param_1[10] != '\x03')) {
        local_EAX_6625 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_6625 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_6625,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      local_c = (char *)0x3;
      if (3 < param_2) {
        local_8 = (AiFltClassTy *)0xf;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_6722 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_6722 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_6722,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_6832 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_6832 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_6832,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      local_EAX_6908 = st::fn_004016B8(this_00,(char *)local_8,uVar14,puVar24);
      DAT_00811980 = 0;
      if (0 < local_EAX_6908) {
        local_10 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x2d);
        local_18 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x28);
        local_2c = st::machine_word_boundary_cast<undefined4>((byte *)(param_1 + 0x23));
        local_1c = st::machine_word_boundary_cast<undefined4>((byte *)(param_1 + 0x1e));
        local_24 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x19);
        local_30 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x14);
        local_28 = st::machine_word_boundary_cast<undefined4>(param_1 + 0xf);
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        do {
          puVar34 = nullptr;
          puVar24 = nullptr;
          pcVar33 = st::pointer_boundary_cast<code *>(st::fn_00401E8D);
          pcVar31 = st::pointer_boundary_cast<char *>(local_10);
          sVar4 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar31;
          pcVar31 = st::pointer_boundary_cast<char *>(local_18);
          sVar5 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pcVar31;
          pbVar19 = st::pointer_boundary_cast<byte *>(local_2c);
          sVar6 = (*this_00->vtable->slot_00)();
          sVar7 = (short)pbVar19;
          pbVar19 = st::pointer_boundary_cast<byte *>(local_1c);
          uVar23 = (*this_00->vtable->slot_00)();
          cVar3 = (char)pbVar19;
          uVar23 = (*this_00->vtable->slot_00)(local_24,uVar23);
          uVar23 = (*this_00->vtable->slot_00)(local_30,uVar23);
          uVar23 = (*this_00->vtable->slot_00)(local_28,uVar23);
          pbVar19 = (byte *)(*this_00->vtable->slot_08)(local_c,uVar23);
          st::fn_004012F8(st::machine_word_boundary_cast<undefined4>(*ppAVar29),0,0x3fffffff,pbVar19,cVar3,sVar6,sVar7,sVar5,sVar9,sVar4,sVar10,
                     st::pointer_boundary_cast<undefined *>(pcVar33),puVar24,puVar34);
          ppAVar29 = ppAVar29 + 1;
          local_EAX_6908 = local_EAX_6908 + -1;
        } while (local_EAX_6908 != 0);
      }
cf_common_exit_0066DF5E:
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      *local_14 = DAT_00811980;
      break;
    case 0x7f1:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_7146 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_7146 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_7146,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_7257 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_7257 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_7257,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      pcVar31 = (char *)st::fn_004016B8(this_00,(char *)local_8,uVar14,puVar24);
      local_10 = 0;
      if (0 < (int)pcVar31) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          local_18 = st::machine_word_boundary_cast<undefined4>(pcVar31);
          puVar20 = (byte *)(st::fn_004044E4(local_4f0,*(char *)&local_8->vtable));
          pcVar31 = local_c;
          puVar30 = (byte *)(local_19c);
          memmove(puVar30, puVar20, 0x138); /* compiler REP MOVS byte copy */
          uVar14 = (*this_00->vtable->slot_00)(pcVar31);
          iVar13 = 0;
          do {
            uVar28 = 1 << ((byte)iVar13 & 0x1f) & uVar14;
            if (uVar28 < 0x101) {
              iVar17 = local_74;
              if (uVar28 != 0x100) {
                switch(uVar28) {
                case 1:
                  iVar17 = local_f4;
                  break;
                case 2:
                  iVar17 = local_e4;
                  break;
                default:
                  goto cf_continue_loop_0066CACD;
                case 4:
                  iVar17 = local_d4;
                  break;
                case 8:
                  iVar17 = local_c4;
                  break;
                case 0x10:
                  iVar17 = local_b4;
                  break;
                case 0x20:
                  iVar17 = local_a4;
                  break;
                case 0x40:
                  iVar17 = local_94;
                  break;
                case 0x80:
                  iVar17 = local_84;
                }
              }
cf_common_join_0066CACB:
              local_10 = st::machine_word_boundary_cast<undefined4>((char *)((int)local_10 + iVar17));
            }
            else {
              if (0x100000 < uVar28) {
                iVar17 = local_124;
                if (((uVar28 != 0x200000) && (iVar17 = local_114, uVar28 != 0x400000)) &&
                   (iVar17 = local_104, uVar28 != 0x800000)) goto cf_continue_loop_0066CACD;
                goto cf_common_join_0066CACB;
              }
              iVar17 = local_134;
              if (uVar28 == 0x100000) goto cf_common_join_0066CACB;
              if (uVar28 < 0x40001) {
                iVar17 = local_174;
                if (((uVar28 == 0x40000) || (iVar17 = local_154, uVar28 == 0x10000)) ||
                   (iVar17 = local_144, uVar28 == 0x20000)) goto cf_common_join_0066CACB;
              }
              else {
                iVar17 = local_164;
                if (uVar28 == 0x80000) goto cf_common_join_0066CACB;
              }
            }
cf_continue_loop_0066CACD:
            iVar13 = iVar13 + 1;
          } while (iVar13 < 0x20);
          local_8 = (AiFltClassTy *)&local_8->field_0x4;
          pcVar31 = st::pointer_boundary_cast<char *>(local_18 + -1);
          local_18 = st::machine_word_boundary_cast<undefined4>(pcVar31);
        } while (pcVar31 != nullptr);
      }
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      *local_14 = (uint)local_10;
      break;
    case 0x7f2:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_7783 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_7783 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_7783,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_7894 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_7894 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_7894,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      pcVar31 = (char *)st::fn_004016B8(this_00,(char *)local_8,uVar14,puVar24);
      local_10 = 0;
      if (0 < (int)pcVar31) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          local_18 = st::machine_word_boundary_cast<undefined4>(pcVar31);
          puVar20 = (byte *)(st::fn_004044E4(local_3b8,*(char *)&local_8->vtable));
          pcVar31 = local_c;
          puVar30 = (byte *)(local_19c);
          memmove(puVar30, puVar20, 0x138); /* compiler REP MOVS byte copy */
          uVar14 = (*this_00->vtable->slot_00)(pcVar31);
          iVar13 = 0;
          do {
            uVar28 = 1 << ((byte)iVar13 & 0x1f) & uVar14;
            if (uVar28 < 0x101) {
              iVar17 = local_70;
              if (uVar28 != 0x100) {
                switch(uVar28) {
                case 1:
                  iVar17 = local_f0;
                  break;
                case 2:
                  iVar17 = local_e0;
                  break;
                default:
                  goto cf_continue_loop_0066CD4A;
                case 4:
                  iVar17 = local_d0;
                  break;
                case 8:
                  iVar17 = local_c0;
                  break;
                case 0x10:
                  iVar17 = local_b0;
                  break;
                case 0x20:
                  iVar17 = local_a0;
                  break;
                case 0x40:
                  iVar17 = local_90;
                  break;
                case 0x80:
                  iVar17 = local_80;
                }
              }
cf_common_join_0066CD48:
              local_10 = st::machine_word_boundary_cast<undefined4>((char *)((int)local_10 + iVar17));
            }
            else {
              if (0x100000 < uVar28) {
                iVar17 = local_120;
                if (((uVar28 != 0x200000) && (iVar17 = local_110, uVar28 != 0x400000)) &&
                   (iVar17 = local_100, uVar28 != 0x800000)) goto cf_continue_loop_0066CD4A;
                goto cf_common_join_0066CD48;
              }
              iVar17 = local_130;
              if (uVar28 == 0x100000) goto cf_common_join_0066CD48;
              if (uVar28 < 0x40001) {
                iVar17 = local_170;
                if (((uVar28 == 0x40000) || (iVar17 = local_150, uVar28 == 0x10000)) ||
                   (iVar17 = local_140, uVar28 == 0x20000)) goto cf_common_join_0066CD48;
              }
              else {
                iVar17 = local_160;
                if (uVar28 == 0x80000) goto cf_common_join_0066CD48;
              }
            }
cf_continue_loop_0066CD4A:
            iVar13 = iVar13 + 1;
          } while (iVar13 < 0x20);
          local_8 = (AiFltClassTy *)&local_8->field_0x4;
          pcVar31 = st::pointer_boundary_cast<char *>(local_18 + -1);
          local_18 = st::machine_word_boundary_cast<undefined4>(pcVar31);
        } while (pcVar31 != nullptr);
      }
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      *local_14 = (uint)local_10;
      break;
    case 0x7f3:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_8420 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_8420 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_8420,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_8531 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_8531 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_8531,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      pcVar31 = (char *)st::fn_004016B8(this_00,(char *)local_8,uVar14,puVar24);
      local_10 = 0;
      if (0 < (int)pcVar31) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          local_18 = st::machine_word_boundary_cast<undefined4>(pcVar31);
          puVar20 = (byte *)(st::fn_004044E4(local_628,*(char *)&local_8->vtable));
          pcVar31 = local_c;
          puVar30 = (byte *)(local_19c);
          memmove(puVar30, puVar20, 0x138); /* compiler REP MOVS byte copy */
          uVar14 = (*this_00->vtable->slot_00)(pcVar31);
          iVar13 = 0;
          do {
            uVar28 = 1 << ((byte)iVar13 & 0x1f) & uVar14;
            if (uVar28 < 0x101) {
              iVar17 = local_78;
              if (uVar28 != 0x100) {
                switch(uVar28) {
                case 1:
                  iVar17 = local_f8;
                  break;
                case 2:
                  iVar17 = local_e8;
                  break;
                default:
                  goto cf_continue_loop_0066CFCA;
                case 4:
                  iVar17 = local_d8;
                  break;
                case 8:
                  iVar17 = local_c8;
                  break;
                case 0x10:
                  iVar17 = local_b8;
                  break;
                case 0x20:
                  iVar17 = local_a8;
                  break;
                case 0x40:
                  iVar17 = local_98;
                  break;
                case 0x80:
                  iVar17 = local_88;
                }
              }
cf_common_join_0066CFC8:
              local_10 = st::machine_word_boundary_cast<undefined4>((char *)((int)local_10 + iVar17));
            }
            else {
              if (0x100000 < uVar28) {
                iVar17 = local_128;
                if (((uVar28 != 0x200000) && (iVar17 = local_118, uVar28 != 0x400000)) &&
                   (iVar17 = local_108, uVar28 != 0x800000)) goto cf_continue_loop_0066CFCA;
                goto cf_common_join_0066CFC8;
              }
              iVar17 = local_138;
              if (uVar28 == 0x100000) goto cf_common_join_0066CFC8;
              if (uVar28 < 0x40001) {
                iVar17 = local_178;
                if (((uVar28 == 0x40000) || (iVar17 = local_158, uVar28 == 0x10000)) ||
                   (iVar17 = local_148, uVar28 == 0x20000)) goto cf_common_join_0066CFC8;
              }
              else {
                iVar17 = local_168;
                if (uVar28 == 0x80000) goto cf_common_join_0066CFC8;
              }
            }
cf_continue_loop_0066CFCA:
            iVar13 = iVar13 + 1;
          } while (iVar13 < 0x20);
          local_8 = (AiFltClassTy *)&local_8->field_0x4;
          pcVar31 = st::pointer_boundary_cast<char *>(local_18 + -1);
          local_18 = st::machine_word_boundary_cast<undefined4>(pcVar31);
        } while (pcVar31 != nullptr);
      }
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      *local_14 = (uint)local_10;
      break;
    case 0x7f4:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_9060 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_9060 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_9060,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_9171 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_9171 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_9171,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      pAVar16 = (AiFltClassTy *)st::fn_004016B8(this_00,(char *)local_8,uVar14,puVar24);
      pcVar31 = nullptr;
      if (0 < (int)pAVar16) {
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        local_8 = pAVar16;
        do {
          GVar21 = (*this_00->vtable->slot_00)(local_c);
          local_EAX_9288 = st::fn_004021FD((int)*ppAVar29,GVar21);
          pcVar31 = pcVar31 + local_EAX_9288;
          ppAVar29 = ppAVar29 + 1;
          local_8 = (AiFltClassTy *)((int)&local_8[-1].field_0284 + 3);
        } while (local_8 != nullptr);
        local_8 = nullptr;
      }
      goto cf_common_exit_00670425;
    case 0x7f5:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_9350 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_9350 != nullptr) {
              st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_9350,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x1e);
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar23);
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar23);
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0xf,uVar23);
      pcVar31 = param_1 + 10;
      iVar13 = (*this_00->vtable->slot_00)(pcVar31,uVar23);
      pcVar26 = param_1 + 5;
      iVar17 = (*this_00->vtable->slot_00)();
      GVar22 = (*this_00->vtable->slot_00)();
      uVar12 = st::fn_00403440(GVar22,(int)param_1,iVar17,st::machine_word_boundary_cast<undefined4>(pcVar26),iVar13,(int)pcVar31);
      *local_14 = uVar12;
      break;
    default:
      goto cf_common_exit_00670456;
    }
    goto cf_common_exit_00670431;
  }
  sVar4 = (short)param_1;
  switch(iVar13) {
  case 0x7f7:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        local_EAX_11025 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_11025 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_11025,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0xf);
    if ((param_1[0xf] != '\x06') && (param_1[0xf] != '\x03')) {
      local_EAX_11114 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_11114 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_11114,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0x4;
    if (4 < param_2) {
      local_8 = (AiFltClassTy *)0x14;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_11210 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_11210 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_11210,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_11321 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_11321 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_11321,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    puVar24 = (uint *)(param_1 + 5);
    uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
    local_EAX_11396 = st::fn_004016B8(this_00,(char *)local_8,uVar14,puVar24);
    DAT_00811980 = 0;
    if (0 < local_EAX_11396) {
      local_10 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x2d);
      local_18 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x28);
      local_2c = st::machine_word_boundary_cast<undefined4>((byte *)(param_1 + 0x23));
      local_1c = st::machine_word_boundary_cast<undefined4>((byte *)(param_1 + 0x1e));
      local_24 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x19);
      local_30 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x14);
      local_28 = st::machine_word_boundary_cast<undefined4>(param_1 + 0xf);
      local_c = param_1 + 10;
      ppAVar29 = local_50;
      do {
        uVar35 = 0;
        pcVar33 = st::pointer_boundary_cast<code *>(st::fn_004050FB);
        pcVar31 = st::pointer_boundary_cast<char *>(local_10);
        sVar4 = (*this_00->vtable->slot_00)();
        sVar8 = (short)pcVar31;
        pcVar31 = st::pointer_boundary_cast<char *>(local_18);
        sVar5 = (*this_00->vtable->slot_00)();
        sVar10 = (short)pcVar31;
        pbVar19 = st::pointer_boundary_cast<byte *>(local_2c);
        sVar6 = (*this_00->vtable->slot_00)();
        sVar9 = (short)pbVar19;
        pbVar19 = st::pointer_boundary_cast<byte *>(local_1c);
        uVar23 = (*this_00->vtable->slot_00)();
        uVar23 = (*this_00->vtable->slot_00)(local_24,uVar23);
        uVar23 = (*this_00->vtable->slot_00)(local_30,uVar23);
        uVar23 = (*this_00->vtable->slot_08)(local_28,uVar23);
        sVar7 = (*this_00->vtable->slot_00)(local_c,uVar23);
        st::fn_00403882(*(short *)ppAVar29,sVar7,pbVar19,sVar6,sVar9,sVar5,sVar10,sVar4,sVar8,st::pointer_boundary_cast<undefined *>(pcVar33),
                    uVar35);
        ppAVar29 = ppAVar29 + 1;
        local_EAX_11396 = local_EAX_11396 + -1;
      } while (local_EAX_11396 != 0);
    }
    goto cf_common_exit_0066DF5E;
  case 0x7f8:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_11604 = st::fn_004057DB(iVar13);
      if (local_EAX_11604 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_11604,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      local_EAX_11679 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_11679 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_11679,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_11776 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_11776 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_11776,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x23,st::fn_00402BCB,0);
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x1e,uVar23);
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar23);
    pcVar31 = param_1 + 0x14;
    sVar7 = (*this_00->vtable->slot_00)();
    sVar5 = sVar4 + 0xf;
    sVar9 = (*this_00->vtable->slot_00)();
    sVar6 = sVar4 + 10;
    sVar10 = (*this_00->vtable->slot_00)();
    sVar4 = sVar4 + 5;
    pbVar19 = (byte *)(*this_00->vtable->slot_08)();
    sVar8 = (*this_00->vtable->slot_00)(param_1);
    st::fn_00402932(sVar8,pbVar19,sVar4,sVar10,sVar6,sVar9,sVar5,sVar7,st::pointer_boundary_cast<undefined *>(pcVar31),uVar23);
    goto cf_common_exit_0066DCED;
  case 0x7f9:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_11977 = st::fn_004057DB(iVar13);
      if (local_EAX_11977 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_11977,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      local_EAX_12051 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_12051 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_12051,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_12148 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_12148 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_12148,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x23,st::fn_00403D50,0);
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x1e,uVar23);
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar23);
    pcVar31 = param_1 + 0x14;
    sVar6 = (*this_00->vtable->slot_00)();
    sVar5 = sVar4 + 0xf;
    sVar7 = (*this_00->vtable->slot_00)();
    sVar4 = sVar4 + 10;
    sVar9 = (*this_00->vtable->slot_00)();
    pcVar25 = param_1;
    cVar3 = (*this_00->vtable->slot_00)();
    sVar10 = (short)pcVar25;
    pbVar19 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
    st::fn_004013F2(pbVar19,cVar3,sVar10,sVar9,sVar4,sVar7,sVar5,sVar6,st::pointer_boundary_cast<undefined *>(pcVar31),uVar23);
    goto cf_common_exit_0066DCED;
  case 0x7fa:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        local_EAX_12381 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_12381 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_12381,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x14);
    if ((param_1[0x14] != '\x06') && (param_1[0x14] != '\x03')) {
      local_EAX_12470 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_12470 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_12470,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0x5;
    if (5 < param_2) {
      local_8 = (AiFltClassTy *)0x19;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_12566 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_12566 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_12566,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_12677 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_12677 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_12677,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    puVar24 = (uint *)(param_1 + 5);
    uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
    local_EAX_12752 = st::fn_004016B8(this_00,(char *)local_8,uVar14,puVar24);
    DAT_00811980 = 0;
    if (0 < local_EAX_12752) {
      local_8 = (AiFltClassTy *)(param_1 + 0x32);
      local_10 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x2d);
      local_18 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x28);
      local_2c = st::machine_word_boundary_cast<undefined4>((byte *)(param_1 + 0x23));
      local_1c = st::machine_word_boundary_cast<undefined4>((byte *)(param_1 + 0x1e));
      local_24 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x19);
      local_30 = st::machine_word_boundary_cast<undefined4>(param_1 + 0x14);
      local_28 = st::machine_word_boundary_cast<undefined4>(param_1 + 0xf);
      local_c = param_1 + 10;
      ppAVar29 = local_50;
      do {
        uVar35 = 0;
        pcVar33 = st::pointer_boundary_cast<code *>(st::fn_004027A7);
        pAVar16 = local_8;
        sVar4 = (*this_00->vtable->slot_00)();
        sVar8 = (short)pAVar16;
        pcVar31 = st::pointer_boundary_cast<char *>(local_10);
        sVar5 = (*this_00->vtable->slot_00)();
        sVar10 = (short)pcVar31;
        pcVar31 = st::pointer_boundary_cast<char *>(local_18);
        sVar6 = (*this_00->vtable->slot_00)();
        sVar9 = (short)pcVar31;
        pbVar19 = st::pointer_boundary_cast<byte *>(local_2c);
        cVar3 = (*this_00->vtable->slot_00)();
        uVar23 = (*this_00->vtable->slot_00)(local_1c);
        uVar23 = (*this_00->vtable->slot_00)(local_24,uVar23);
        uVar23 = (*this_00->vtable->slot_08)(local_30,uVar23);
        uVar23 = (*this_00->vtable->slot_00)(local_28,uVar23);
        sVar7 = (*this_00->vtable->slot_00)(local_c,uVar23);
        st::fn_00403675((int)*ppAVar29,sVar7,cVar3,pbVar19,sVar6,sVar9,sVar5,sVar10,sVar4,sVar8,st::pointer_boundary_cast<undefined *>(pcVar33),
                   uVar35);
        ppAVar29 = ppAVar29 + 1;
        local_EAX_12752 = local_EAX_12752 + -1;
      } while (local_EAX_12752 != 0);
    }
    goto cf_common_exit_0066DF5E;
  case 0x7fb:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_10821 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_10821 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_10821,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x1e,st::fn_00401F7D,0);
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar23);
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar23);
    pcVar31 = param_1 + 0xf;
    sVar6 = (*this_00->vtable->slot_00)();
    sVar5 = sVar4 + 10;
    sVar7 = (*this_00->vtable->slot_00)();
    sVar4 = sVar4 + 5;
    sVar9 = (*this_00->vtable->slot_00)();
    sVar10 = (*this_00->vtable->slot_00)();
    st::fn_00404142(sVar10,(short)param_1,sVar9,sVar4,sVar7,sVar5,sVar6,st::pointer_boundary_cast<undefined *>(pcVar31),uVar23);
cf_common_exit_0066DCED:
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = DAT_00811980;
    break;
  case 0x7fc:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_13016 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_13016 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_13016,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_c = (char *)0xffffffff;
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    local_10 = st::machine_word_boundary_cast<undefined4>((char *)(*this_00->vtable->slot_00)(param_1 + 5));
    iVar13 = (*this_00->vtable->slot_00)(param_1 + 10);
    switch(local_8) {
    case (AiFltClassTy *)0xdc:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar13) && (iVar13 < 4)) {
          local_c = *(char **)(&DAT_00854350 + (iVar13 + (int)local_10 * 3) * 4);
        }
      }
      else {
        if (((int)local_10 < 1) || (0x28 < (int)local_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_c = *(char **)(&DAT_00854428 + (int)local_10 * 4);
        }
      }
      break;
    case (AiFltClassTy *)0xdd:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar13) && (iVar13 < 4)) {
          local_c = *(char **)(&DAT_007e19f4 + (iVar13 + (int)local_10 * 3) * 4);
        }
      }
      else {
        if (((int)local_10 < 1) || (0x28 < (int)local_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_c = *(char **)(&DAT_007e055c + (int)local_10 * 4);
        }
      }
      break;
    case (AiFltClassTy *)0xde:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar13) && (iVar13 < 4)) {
          local_c = *(char **)(&DAT_007e22a0 + (iVar13 + (int)local_10 * 3) * 4);
        }
      }
      else {
        if (((int)local_10 < 1) || (0x28 < (int)local_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_c = *(char **)(&DAT_007e079c + (int)local_10 * 4);
        }
      }
      break;
    default:
      local_c = nullptr;
      break;
    case (AiFltClassTy *)0xe2:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar13) && (iVar13 < 4)) {
          local_c = *(char **)(&DAT_007e2f04 + (iVar13 + (int)local_10 * 3) * 4);
        }
      }
      else {
        if (((int)local_10 < 1) || (0x28 < (int)local_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_c = *(char **)(&DAT_007e09dc + (int)local_10 * 4);
        }
      }
    }
    if ((int)local_c < 0) {
      local_EAX_13578 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_13578 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_13578,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = (uint)local_c;
    break;
  default:
    goto cf_common_exit_00670456;
  case 0x80c:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_13666 = st::fn_004057DB(iVar13);
      if (local_EAX_13666 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_13666,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      local_EAX_13740 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_13740 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_13740,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_13837 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_13837 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_13837,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_13947 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_13947 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_13947,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_10 = 0;
    local_EAX_14021 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_14021 == 1) {
      puVar34 = nullptr;
      puVar24 = nullptr;
      pcVar33 = st::pointer_boundary_cast<code *>(st::fn_00402BA3);
      sVar10 = -1;
      sVar9 = -1;
      sVar7 = -1;
      sVar6 = 0;
      sVar5 = 0;
      sVar4 = 0;
      cVar3 = -1;
      pbVar19 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
      local_EAX_14081 =
           st::fn_004012F8(st::machine_word_boundary_cast<undefined4>(local_50[0]),0,0x3fffffff,pbVar19,cVar3,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,
                      st::pointer_boundary_cast<undefined *>(pcVar33),puVar24,puVar34);
      if ((local_EAX_14081 == -1) && (g_fish_00811984 != nullptr)) {
        local_10 = st::machine_word_boundary_cast<undefined4>((char *)0x1);
        iVar13 = (*this_00->vtable->slot_00)(param_1 + 10);
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 0xf);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0x14);
        iVar17 = (*this_00->vtable->slot_00)(param_1 + 0x19);
        if ((-1 < iVar13) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          st::fn_004018C5(g_fish_00811984,&local_5a,&local_52,&local_58);
          (*this_00->vtable->slot_20)(iVar13,(int)local_5a);
          (*this_00->vtable->slot_20)(local_8,(int)local_52);
          (*this_00->vtable->slot_20)(local_c,(int)local_58);
        }
        if (-1 < iVar17) {
          uVar23 = g_fish_00811984->vfunc_11C();
          (*this_00->vtable->slot_20)(iVar17,uVar23);
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          *local_14 = (uint)local_10;
          break;
        }
      }
    }
    else {
      local_EAX_14310 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_14310 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_14310,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = (uint)local_10;
    break;
  case 0x80d:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_14397 = st::fn_004057DB(iVar13);
      if (local_EAX_14397 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_14397,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      local_EAX_14471 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_14471 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_14471,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_14568 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_14568 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_14568,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_14678 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_14678 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_14678,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_10 = 0;
    local_EAX_14752 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_14752 == 1) {
      uVar23 = 0;
      pcVar33 = st::pointer_boundary_cast<code *>(st::fn_00402CA2);
      sVar10 = -1;
      sVar9 = -1;
      sVar7 = -1;
      sVar6 = 0;
      sVar5 = 0;
      sVar4 = 0;
      pbVar19 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
      local_EAX_14803 =
           st::fn_00403882((short)local_50[0],0,pbVar19,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,st::pointer_boundary_cast<undefined *>(pcVar33),
                       uVar23);
      if ((local_EAX_14803 == -1) && (g_fish_00811984 != nullptr)) {
        local_10 = st::machine_word_boundary_cast<undefined4>((char *)0x1);
        iVar13 = (*this_00->vtable->slot_00)(param_1 + 10);
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 0xf);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0x14);
        iVar17 = (*this_00->vtable->slot_00)(param_1 + 0x19);
        if ((-1 < iVar13) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          st::fn_00405F0B(g_fish_00811984,&local_5c,&local_56,&local_54);
          (*this_00->vtable->slot_20)(iVar13,(int)local_5c);
          (*this_00->vtable->slot_20)(local_8,(int)local_56);
          (*this_00->vtable->slot_20)(local_c,(int)local_54);
        }
        if (-1 < iVar17) {
          uVar23 = g_fish_00811984->vfunc_11C();
          (*this_00->vtable->slot_20)(iVar17,uVar23);
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          *local_14 = (uint)local_10;
          break;
        }
      }
    }
    else {
      local_EAX_15032 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_15032 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_15032,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = (uint)local_10;
    break;
  case 0x80e:
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      local_EAX_15119 = st::fn_004057DB(iVar13);
      if (local_EAX_15119 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_15119,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_15215 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_15215 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_15215,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    uVar23 = 0;
    pcVar33 = st::pointer_boundary_cast<code *>(st::fn_0040188E);
    puVar34 = (undefined *)0xffffffff;
    sVar9 = -1;
    sVar7 = -1;
    sVar6 = 0;
    local_10 = 0;
    sVar5 = 0;
    sVar4 = 0;
    temp_3ffc6253af = param_1;
    pbVar19 = (byte *)(*this_00->vtable->slot_08)();
    local_EAX_15327 =
         st::fn_00402932(0,pbVar19,(short)temp_3ffc6253af,sVar4,sVar5,sVar6,sVar7,sVar9,puVar34,st::machine_word_boundary_cast<undefined4>(pcVar33));
    if ((local_EAX_15327 == -1) && (g_fish_00811984 != nullptr)) {
      local_10 = st::machine_word_boundary_cast<undefined4>((char *)0x1);
      iVar13 = (*this_00->vtable->slot_00)(param_1 + 5,uVar23);
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 10);
      local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0xf);
      iVar17 = (*this_00->vtable->slot_00)(param_1 + 0x14);
      if ((-1 < iVar13) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
        st::fn_00405F0B(g_fish_00811984,&local_60,&local_5e,(short *)((int)&local_28 + 2));
        (*this_00->vtable->slot_20)(iVar13,(int)local_60);
        (*this_00->vtable->slot_20)(local_8,(int)local_5e);
        (*this_00->vtable->slot_20)(local_c,(int)STPiece<2,2>(local_28));
      }
      if (-1 < iVar17) {
        uVar23 = g_fish_00811984->vfunc_11C();
        (*this_00->vtable->slot_20)(iVar17,uVar23);
      }
    }
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = (uint)local_10;
    break;
  case 0x80f:
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      local_EAX_15560 = st::fn_004057DB(iVar13);
      if (local_EAX_15560 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_15560,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_15656 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_15656 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_15656,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    uVar23 = 0;
    pcVar33 = st::pointer_boundary_cast<code *>(st::fn_00404C73);
    puVar34 = (undefined *)0xffffffff;
    sVar10 = -1;
    sVar9 = -1;
    sVar7 = 0;
    sVar6 = 0;
    local_10 = 0;
    sVar5 = 0;
    sVar4 = -1;
    temp_3fd8761c8d = param_1;
    pbVar19 = (byte *)(*this_00->vtable->slot_08)();
    local_EAX_15768 =
         st::fn_004013F2(pbVar19,(char)temp_3fd8761c8d,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,puVar34,
                   st::machine_word_boundary_cast<undefined4>(pcVar33));
    if ((local_EAX_15768 == -1) && (g_fish_00811984 != nullptr)) {
      local_10 = st::machine_word_boundary_cast<undefined4>((char *)0x1);
      iVar13 = (*this_00->vtable->slot_00)(param_1 + 5,uVar23);
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 10);
      local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0xf);
      iVar17 = (*this_00->vtable->slot_00)(param_1 + 0x14);
      if ((-1 < iVar13) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
        st::fn_004018C5
                  (g_fish_00811984,(short *)((int)&local_30 + 2),(short *)((int)&local_24 + 2),
                   (short *)((int)&local_1c + 2));
        (*this_00->vtable->slot_20)(iVar13,(int)STPiece<2,2>(local_30));
        (*this_00->vtable->slot_20)(local_8,(int)STPiece<2,2>(local_24));
        (*this_00->vtable->slot_20)(local_c,(int)STPiece<2,2>(local_1c));
      }
      if (-1 < iVar17) {
        uVar23 = g_fish_00811984->vfunc_11C();
        (*this_00->vtable->slot_20)(iVar17,uVar23);
      }
    }
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = (uint)local_10;
    break;
  case 0x810:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_16001 = st::fn_004057DB(iVar13);
      if (local_EAX_16001 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_16001,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      local_EAX_16075 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_16075 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_16075,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_16172 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_16172 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_16172,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_16282 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_16282 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_16282,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_1c = 0;
    local_EAX_16356 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_16356 == 1) {
      uVar23 = 0;
      pcVar33 = st::pointer_boundary_cast<code *>(st::fn_0040446C);
      sVar10 = -1;
      sVar9 = -1;
      sVar7 = -1;
      sVar6 = 0;
      sVar5 = 0;
      sVar4 = 0;
      pbVar19 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
      local_EAX_16409 =
           st::fn_00403675((int)local_50[0],0,-1,pbVar19,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,st::pointer_boundary_cast<undefined *>(pcVar33),
                      uVar23);
      if ((local_EAX_16409 == -1) && (g_fish_00811984 != nullptr)) {
        local_1c = st::machine_word_boundary_cast<undefined4>((byte *)0x1);
        iVar13 = (*this_00->vtable->slot_00)(param_1 + 10);
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 0xf);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0x14);
        iVar17 = (*this_00->vtable->slot_00)(param_1 + 0x19);
        if ((-1 < iVar13) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          st::fn_004018C5
                    (g_fish_00811984,(short *)((int)&local_2c + 2),(short *)((int)&local_18 + 2),
                     (short *)((int)&local_10 + 2));
          (*this_00->vtable->slot_20)(iVar13,(int)STPiece<2,2>(local_2c));
          (*this_00->vtable->slot_20)(local_8,(int)STPiece<2,2>(local_18));
          (*this_00->vtable->slot_20)(local_c,(int)STPiece<2,2>(local_10));
        }
        if (-1 < iVar17) {
          uVar23 = g_fish_00811984->vfunc_11C();
          (*this_00->vtable->slot_20)(iVar17,uVar23);
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          *local_14 = (uint)local_1c;
          break;
        }
      }
    }
    else {
      local_EAX_16638 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_16638 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_16638,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = (uint)local_1c;
    break;
  case 0x816:
  case 0x817:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_16747 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_16747 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_16747,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_c = (char *)(*this_00->vtable->slot_00)(param_1);
    if ((local_c == (char *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_16857 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_16857 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_16857,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_8 = nullptr;
    local_EAX_16931 = st::fn_004016B8(this_00,local_c,0,(uint *)local_50);
    if (local_EAX_16931 == 1) {
      if (*(short *)(param_1 + param_2 * 5 + 1) == 0x816) {
        st::fn_004017BC((int)local_50[0]);
      }
      else if (*(short *)(param_1 + param_2 * 5 + 1) != 0x817) {
        local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
        *local_14 = (uint)local_8;
        break;
      }
      local_8 = (AiFltClassTy *)st::fn_00402F7C((int)local_50[0]);
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      *local_14 = (uint)local_8;
    }
    else {
      local_EAX_17038 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17038 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_17038,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      *local_14 = (uint)local_8;
    }
    break;
  case 0x818:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_18228 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_18228 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_18228,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((int)local_8 < 0) || (0x9a < (int)local_8)) {
      local_EAX_18333 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_18333 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_18333,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = (uint)*(byte *)((int)&local_8[0x3006].field_00A7 + 1);
    break;
  case 0x819:
  case 0x81b:
  case 0x81c:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_17148 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_17148 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_17148,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_10 = st::machine_word_boundary_cast<undefined4>((char *)(*this_00->vtable->slot_00)(param_1));
    local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 10);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      local_EAX_17282 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17282 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_17282,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    if ((local_10 == (char *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_17364 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17364 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_17364,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_18 = 0;
    local_EAX_17437 = st::fn_004016B8(this_00,st::pointer_boundary_cast<char *>(local_10),0,(uint *)local_50);
    pAVar16 = local_8;
    pcVar31 = local_c;
    if (local_EAX_17437 == 1) {
      sVar4 = *(short *)(param_1 + param_2 * 5 + 1);
      if (sVar4 == 0x819) {
        iVar13 = st::fn_0040186B((int)local_50[0],(int)local_c);
        bVar2 = (int)local_8 <= iVar13;
        local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
        *local_14 = (uint)bVar2;
        break;
      }
      if (sVar4 == 0x81b) {
        local_EAX_17589 = st::fn_00405579((int)local_50[0],(uint)local_c,(int)local_8);
        local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
        *local_14 = (uint)(local_EAX_17589 != 0);
        break;
      }
      if (sVar4 == 0x81c) {
        local_EAX_17500 = st::fn_00403F8F((int)local_50[0],(uint)local_c,(int)local_8);
        if ((local_EAX_17500 == 0) &&
           (iVar13 = st::fn_00402342((int)local_50[0],(int)pcVar31,(int)pAVar16), iVar13 == 0)) {
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          *local_14 = 0;
        }
        else {
          local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
          *local_14 = 1;
        }
        break;
      }
    }
    else {
      local_EAX_17673 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17673 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_17673,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    uVar14 = (uint)local_18;
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = uVar14;
    break;
  case 0x81a:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_17782 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_17782 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_17782,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      local_EAX_17900 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17900 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_17900,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_17982 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17982 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_17982,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_10 = 0;
    local_EAX_18055 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_18055 == 1) {
      local_EAX_18079 = st::fn_00401E1F((int)local_50[0],(uint)local_c);
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      *local_14 = (uint)(local_EAX_18079 != 0);
    }
    else {
      local_EAX_18118 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_18118 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_18118,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      uVar14 = (uint)local_10;
      local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
      *local_14 = uVar14;
    }
    break;
  case 0x81d:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_18450 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_18450 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_18450,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_c = (char *)(*this_00->vtable->slot_00)(param_1);
    iVar13 = (*this_00->vtable->slot_00)(param_1 + 5);
    local_8 = (AiFltClassTy *)(iVar13 + -1);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      local_EAX_18572 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_18572 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_18572,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    if (((int)local_8 < 0) || (3 < (int)local_c)) {
      local_EAX_18649 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_18649 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_18649,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = *(uint *)(&DAT_007e481c + (int)(&local_8->vtable + (int)local_c) * 4);
    break;
  case 0x82a:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_18749 = st::fn_004057DB(iVar13);
      if (local_EAX_18749 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_18749,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x06') && (param_1[(int)&local_8->vtable] != '\x03')
           ) {
          local_EAX_18846 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_18846 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_18846,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_18965 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_18965 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_18965,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_EAX_19032 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_19032 != 1) {
      local_EAX_19051 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_19051 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_19051,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    uVar23 = (*this_00->vtable->slot_08)(param_1 + 10);
    pbVar18 = (byte *)(param_1 + 5);
    pbVar19 = (byte *)(*this_00->vtable->slot_08)(pbVar18,uVar23);
    local_EAX_19136 = st::fn_004057F9((byte)local_50[0],pbVar19,pbVar18);
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    if (local_EAX_19136 == 0) {
      *local_14 = 0xffffffff;
    }
    else {
      *local_14 = (uint)*(ushort *)(local_EAX_19136 + 0x7d);
    }
    break;
  case 0x82b:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        local_EAX_19205 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_19205 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_19205,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x14);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_19319 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_19319 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_19319,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_EAX_19386 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_19386 != 1) {
      local_EAX_19405 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_19405 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_19405,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    this_01 = (AnonReceiver_0065DA50 *)st::fn_00402496((char)local_50[0],uVar11);
    pAVar16 = local_50[0];
    pcVar31 = local_c;
    if (this_01 != nullptr) {
      cVar3 = (char)param_1 + '\x0f';
      uVar23 = (*this_00->vtable->slot_00)();
      iVar13 = (*this_00->vtable->slot_00)(param_1 + 10,uVar23);
      pcVar31 = (char *)st::fn_00404A20(this_01,iVar13,cVar3);
      pAVar16 = local_50[0];
      local_c = pcVar31;
    }
    goto joined_r0x006703e6;
  case 0x82c:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        local_EAX_19584 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_19584 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_19584,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x14);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_19697 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_19697 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_19697,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_EAX_19764 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_19764 != 1) {
      local_EAX_19783 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_19783 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_19783,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    pAVar25 = (AiFltClassTy *)st::fn_00402496((char)local_50[0],uVar11);
    pAVar16 = local_50[0];
    pcVar31 = local_c;
    if (pAVar25 != nullptr) {
      cVar3 = (char)param_1 + '\x0f';
      uVar23 = (*this_00->vtable->slot_00)();
      uVar32 = (*this_00->vtable->slot_00)(param_1 + 10,uVar23);
      pcVar31 = (char *)st::fn_004041BF(pAVar25,(int)((ulonglong)uVar32 >> 0x20),(uint)uVar32,
                                           cVar3);
      pAVar16 = local_50[0];
      local_c = pcVar31;
    }
    goto joined_r0x006703e6;
  case 0x82d:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        local_EAX_19936 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_19936 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_19936,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 10);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_20049 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_20049 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_20049,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_EAX_20116 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_20116 != 1) {
      local_EAX_20135 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_20135 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_20135,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    local_EAX_20210 = st::fn_00402496((char)local_50[0],uVar11);
    pcVar31 = (char *)0xffffffff;
    if (local_EAX_20210 != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar31 = *(char **)(local_EAX_20210 + 0xeb);
    }
    goto LAB_0066fbc1;
  case 0x82e:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        local_EAX_20309 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_20309 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_20309,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x19);
    if ((param_1[0x19] != '\x06') && (param_1[0x19] != '\x03')) {
      local_EAX_20398 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_20398 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_20398,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0x6;
    if (6 < param_2) {
      local_8 = (AiFltClassTy *)0x1e;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_20495 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_20495 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_20495,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_20615 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_20615 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_20615,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_EAX_20682 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_20682 != 1) {
      local_EAX_20701 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_20701 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_20701,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    pAVar25 = (AiFltClassTy *)st::fn_00402496((char)local_50[0],uVar11);
    pAVar16 = local_50[0];
    pcVar31 = local_c;
    if (pAVar25 != nullptr) {
      sVar5 = sVar4 + 0x37;
      sVar7 = (*this_00->vtable->slot_00)();
      sVar6 = sVar4 + 0x32;
      sVar9 = (*this_00->vtable->slot_00)();
      sVar4 = sVar4 + 0x2d;
      sVar10 = (*this_00->vtable->slot_00)();
      pbVar19 = (byte *)(param_1 + 0x28);
      cVar3 = (*this_00->vtable->slot_00)();
      pcVar31 = param_1 + 0x23;
      uVar23 = (*this_00->vtable->slot_00)();
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x1e,uVar23);
      uVar23 = (*this_00->vtable->slot_08)(param_1 + 0x19,uVar23);
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar23);
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0xf,uVar23);
      uVar32 = (*this_00->vtable->slot_00)(param_1 + 10,uVar23);
      pcVar31 = (char *)st::fn_00401F0A(pAVar25,(int)((ulonglong)uVar32 >> 0x20),(uint)uVar32,
                                           (uint)pcVar31,cVar3,pbVar19,sVar10,sVar4,sVar9,sVar6,
                                           sVar7,sVar5);
      pAVar16 = local_50[0];
      local_c = pcVar31;
    }
    goto joined_r0x006703e6;
  case 0x82f:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        local_EAX_20943 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_20943 != nullptr) {
          st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_20943,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x23);
    if ((param_1[0x23] != '\x06') && (param_1[0x23] != '\x03')) {
      local_EAX_21031 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21031 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_21031,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_21131 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21131 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_21131,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_EAX_21198 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_21198 != 1) {
      local_EAX_21217 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21217 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_21217,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_8 = nullptr;
    puVar24 = (uint *)(*this_00->vtable->slot_00)(param_1 + 0xf,local_280);
    pcVar31 = param_1 + 10;
    pcVar26 = (char *)(*this_00->vtable->slot_00)();
    local_EAX_21310 = st::fn_004016B8(this_00,pcVar26,(uint)pcVar31,puVar24);
    if (0 < local_EAX_21310) {
      puVar20 = (byte *)(local_280);
      do {
        uVar23 = *puVar20;
        puVar20 = (byte *)(puVar20 + 1);
        local_EAX_21310 = local_EAX_21310 + -1;
        local_8 = (AiFltClassTy *)((uint)local_8 | 1 << ((byte)uVar23 & 0x1f));
      } while (local_EAX_21310 != 0);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    local_EAX_21372 = st::fn_00402496((char)local_50[0],uVar11);
    pcVar31 = local_c;
    if (local_EAX_21372 != 0) {
      pbVar19 = (byte *)(param_1 + 0x23);
      cVar3 = (*this_00->vtable->slot_08)();
      pcVar31 = param_1 + 0x1e;
      uVar23 = (*this_00->vtable->slot_00)();
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar23);
      uVar32 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar23);
      pcVar31 = (char *)st::fn_00405C13(local_EAX_21372,(int)((ulonglong)uVar32 >> 0x20),
                                           (uint)local_8,(uint)uVar32,(uint)pcVar31,cVar3,pbVar19);
      local_c = pcVar31;
    }
LAB_0066fbc1:
    if ((int)pcVar31 < 0) {
      st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),&CHAR_00h_008016a0,0x7f);
      *(AiFltClassTy **)&this_00->field_0x84 = local_50[0];
      goto LAB_0067041b;
    }
    goto cf_common_exit_00670425;
  case 0x830:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_21485 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_21485 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_21485,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_21605 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21605 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_21605,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_EAX_21671 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_21671 != 1) {
      local_EAX_21690 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21690 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_21690,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    local_8 = (AiFltClassTy *)st::fn_00402496((char)local_50[0],uVar11);
    pAVar16 = local_50[0];
    pcVar31 = (char *)0xffffffff;
    if (local_8 != nullptr) {
      memset(&local_21c, 0, 0x4a); /* compiler bulk-zero initialization */
      iVar13 = 0;
      local_21c = (*this_00->vtable->slot_00)(param_1 + 10);
      memset(local_1d0, 0, 0x34); /* compiler bulk-zero initialization */
      iVar13 = 0;
      local_1c6 = &local_21c;
      local_218 = 0xffff;
      local_214 = 0xfffffff0;
      local_210 = 0xffff;
      local_1de = 1;
      local_1d0[0] = 0x68;
      st::fn_00401555(local_8,local_1d0);
      pAVar16 = local_50[0];
      pcVar31 = (char *)(uint)('\0' < local_1c8);
    }
    goto joined_r0x006703e6;
  case 0x831:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_21955 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_21955 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_21955,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_22075 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_22075 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_22075,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_EAX_22142 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_22142 != 1) {
      local_EAX_22161 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_22161 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_22161,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    pAVar27 = (AnonShape_0065E360_B94C37CB *)st::fn_00402496((char)local_50[0],uVar11);
    pAVar16 = local_50[0];
    pcVar31 = local_c;
    if (pAVar27 != nullptr) {
      iVar13 = (*this_00->vtable->slot_00)(param_1 + 0x19);
      pcVar31 = param_1 + 0x14;
      uVar23 = (*this_00->vtable->slot_00)();
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0xf,uVar23);
      uVar32 = (*this_00->vtable->slot_00)(param_1 + 10,uVar23);
      pcVar31 = (char *)st::fn_004047EB(pAVar27,(int)((ulonglong)uVar32 >> 0x20),
                                           (Global_sub_0065E450_param_3Enum)uVar32,(int)pcVar31,
                                           iVar13);
      pAVar16 = local_50[0];
      local_c = pcVar31;
    }
joined_r0x006703e6:
    if ((int)pcVar31 < 0) {
      st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),&CHAR_00h_008016a0,0x7f);
      *(AiFltClassTy **)&this_00->field_0x84 = pAVar16;
LAB_0067041b:
      st::fn_006A5E40(-0xaa,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
cf_common_exit_00670425:
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = (uint)pcVar31;
    break;
  case 0x848:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_10183 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_10183 != nullptr) {
            st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_10183,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_10303 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_10303 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_10303,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    local_EAX_10370 = st::fn_004016B8(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_10370 != 1) {
      local_EAX_10389 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_10389 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_10389,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
    }
    iVar13 = 0;
    local_10 = st::machine_word_boundary_cast<undefined4>((char *)(uint)DAT_00808aaf);
    local_8 = nullptr;
    if (local_10 != nullptr) {
      local_c = st::pointer_boundary_cast<char *>(&DAT_00808af5);
      do {
        if (((AiFltClassTy *)(uint)(byte)local_c[-1] == local_50[0]) && (*local_c != '\0')) {
          local_8 = (AiFltClassTy *)(&CHAR_00h_00808ab0 + iVar13 * 0x9c);
          break;
        }
        iVar13 = iVar13 + 1;
        local_c = local_c + 0x9c;
      } while (iVar13 < (int)local_10);
    }
    pAVar16 = local_8;
    if (local_8 == nullptr) {
      local_EAX_10550 = st::fn_004057DB((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_10550 != nullptr) {
        st::fn_0072E340(st::pointer_boundary_cast<char *>(&this_00->field_0x4),local_EAX_10550,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      st::fn_006A5E40(-0x78,g_overwriteContext_007ED77C,st::mutable_c_string(".\\ai\\ai_erc.h"),0x79);
      pAVar16 = local_8;
    }
LAB_0066d630:
    puVar24 = (uint *)st::fn_006C49B0((char *)pAVar16);
    if (param_3 == nullptr) {
      g_currentExceptionFrame = local_260.previous;
      return puVar24;
    }
    *param_3 = 3;
    g_currentExceptionFrame = local_260.previous;
    return puVar24;
  case 0x849:
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = DAT_00808a90 >> 8 & 0xff;
    break;
  case 0x84a:
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = DAT_00808a90 & 0xff;
    break;
  case 0x84b:
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = (uint)DAT_00808a9b;
    break;
  case 0x84c:
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = DAT_00808a90 >> 0x10 & 0xff;
    break;
  case 0x84d:
    local_14 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(4));
    *local_14 = DAT_00808a90 >> 0x18;
  }
cf_common_exit_00670431:
  if (param_3 == nullptr) {
    g_currentExceptionFrame = local_260.previous;
    return local_14;
  }
  *param_3 = 1;
  g_currentExceptionFrame = local_260.previous;
  return local_14;
}

// 00671F10 FUN_00671f10
#line 4 "decomp/ST.exe/functions/00671F10/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_interp.cpp
   Diagnostic line evidence: 1342 | 1356 | 1369 | 1374 | 1388 | 1392 | 1413 | 1419 (metadata/report
   site, not the function definition)
   [STSourceProvenanceApplier end] */

float * st::fn_00671F10(int param_1,int *param_2,int *param_3)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  float fVar6;
  int iVar7;
  short *psVar8;
  float10 fVar9;
  int *piVar10;
  InternalExceptionFrame local_70;
  undefined1 local_2c;
  float local_2b;
  AnonReceiver_0064A970 *local_24;
  float local_20;
  int local_1c;
  float *local_18;
  int local_14;
  int local_10;
  AnonShape_00683780_11EA4E23 *local_c;
  float *local_8;

  local_18 = nullptr;
  local_8 = nullptr;
  local_c = nullptr;
  local_10 = 0;
  local_14 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar3 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (local_8 != nullptr) {
      st::fn_006AB060(&local_8);
    }
    if (local_18 != nullptr) {
      st::fn_006AB060(&local_18);
    }
    st::fn_0040193D(st::pointer_boundary_cast<undefined4 *>(&local_c));
    if (0 < iVar3) {
      iVar3 = -0x6b;
    }
    if (param_2 != nullptr) {
      *param_2 = iVar3;
    }
    return nullptr;
  }
  st::fn_0072E340(st::pointer_boundary_cast<char *>(&local_24->field_0x4),&CHAR_00h_008016a0,0x7f);
  *(undefined4 *)&local_24->field_0x84 = 0xffffffff;
  local_c = (AnonShape_00683780_11EA4E23 *)st::fn_0040213F(10);
  local_20 = 0.0;
  psVar8 = (short *)(param_1 + 1);
  do {
    while( true ) {
      if ((*(char *)((int)psVar8 + -1) == '\a') && (*psVar8 == 0x1d)) {
        if (local_c->field_0004 != 1) {
          st::fn_006A5E40
                    (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_interp.cpp"),0x570
                    );
        }
        if (param_3 != nullptr) {
          *param_3 = (int)local_20 + 1;
        }
        puVar2 = (undefined1 *)local_c->field_0008;
        switch(*puVar2) {
        case 1:
        case 4:
          fVar6 = (float)(*local_24->vtable->slot_00)(puVar2);
          local_18 = st::pointer_boundary_cast<float *>(st::fn_006AAC10(4));
          *local_18 = fVar6;
          if (param_2 != nullptr) {
            *param_2 = 1;
          }
          break;
        case 2:
        case 5:
          fVar9 = (float10)(*local_24->vtable->slot_04)(puVar2);
          local_20 = (float)fVar9;
          local_18 = st::pointer_boundary_cast<float *>(st::fn_006AAC10(4));
          *local_18 = local_20;
          if (param_2 != nullptr) {
            *param_2 = 2;
          }
          break;
        case 3:
        case 6:
          fVar6 = (float)(*local_24->vtable->slot_08)(puVar2);
          if (fVar6 == 0.0) {
            st::fn_006A5E40
                      (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_interp.cpp"),
                       0x585);
          }
          local_18 = st::pointer_boundary_cast<float *>(st::fn_006AAC10(4));
          *local_18 = fVar6;
          if (param_2 != nullptr) {
            *param_2 = 3;
          }
          break;
        default:
          st::fn_006A5E40
                    (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_interp.cpp"),0x58b
                    );
        }
        st::fn_0040193D(st::pointer_boundary_cast<undefined4 *>(&local_c));
        g_currentExceptionFrame = local_70.previous;
        return local_18;
      }
      st::fn_00402149((int *)local_c,(undefined4 *)((int)psVar8 + -1));
      if (*(char *)((int)psVar8 + -1) == '\a') break;
cf_continue_loop_006721A4:
      local_20 = (float)((int)local_20 + 1);
      psVar8 = (short *)((int)psVar8 + 5);
    }
    iVar7 = (local_c->field_0004 - (int)psVar8[1]) + -1;
    if (iVar7 < 0) {
      st::fn_006A5E40
                (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_interp.cpp"),0x53e);
    }
    if ((local_10 == 0) && (local_14 == 0)) {
      iVar4 = st::fn_004038AF((int)*psVar8);
      if ((iVar4 < 0) || (iVar4 = st::fn_004016B3((int)*psVar8), iVar4 != 0)) {
        iVar4 = (int)psVar8[1];
        piVar10 = &local_1c;
        pcVar5 = st::fn_00403779(local_c,iVar7);
        local_8 = st::fn_00401604(pcVar5,iVar4,piVar10);
      }
      else {
        iVar4 = (int)psVar8[1];
        piVar10 = &local_1c;
        pcVar5 = st::fn_00403779(local_c,iVar7);
        local_8 = (float *)st::fn_00402545(local_24,pcVar5,iVar4,piVar10);
      }
    }
    else {
      local_1c = 1;
      local_8 = st::pointer_boundary_cast<float *>(st::fn_006AAC10(4));
      *local_8 = (float)(uint)(local_10 == 0);
    }
    if (local_8 == nullptr) {
      st::fn_006A5E40
                (local_1c,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_interp.cpp"),0x56c);
      goto cf_continue_loop_006721A4;
    }
    iVar7 = st::fn_00405D17(local_c,iVar7);
    if (iVar7 == 0) {
      st::fn_006A5E40
                (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_interp.cpp"),0x54c);
    }
    if (local_1c == 1) {
      local_2c = 1;
      local_2b = *local_8;
    }
    else if (local_1c == 2) {
      local_2c = 2;
      local_2b = *local_8;
    }
    else if (local_1c == 3) {
      iVar7 = (*local_24->vtable->slot_0C)(local_8);
      if (iVar7 < 0) {
        st::fn_006A5E40
                  (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_interp.cpp"),0x559);
      }
      local_2c = 3;
      local_2b = (float)STReplaceLowWord((uint32_t)(local_2b), (uint16_t)((short)iVar7));
    }
    else {
      st::fn_006A5E40
                (-0x6b,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_interp.cpp"),0x55e);
    }
    st::fn_00402149((int *)local_c,(undefined4 *)&local_2c);
    st::fn_006AB060(&local_8);
    sVar1 = *psVar8;
    if (((sVar1 == 800) && (local_2b == 0.0)) && (local_14 == 0)) {
      local_10 = local_10 + 1;
    }
    if ((sVar1 == 3) && (0 < local_10)) {
      local_10 = local_10 + -1;
    }
    if (((sVar1 == 0x321) && (local_2b == 1.4013e-45)) && (local_10 == 0)) {
      local_14 = local_14 + 1;
    }
    if ((sVar1 != 0x34) || (local_14 < 1)) goto cf_continue_loop_006721A4;
    local_14 = local_14 + -1;
    local_20 = (float)((int)local_20 + 1);
    psVar8 = (short *)((int)psVar8 + 5);
  } while( true );
}

