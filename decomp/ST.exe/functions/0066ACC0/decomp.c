#include "../../pseudocode_runtime.h"


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
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::FUN_0066acc0
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
  local_EAX_54 = Library::MSVCRT::__setjmp3(local_260.jumpBuffer,0);
  this_00 = local_64;
  if (local_EAX_54 != 0) {
    g_currentExceptionFrame = local_260.previous;
    if (local_14 != nullptr) {
      FreeAndNull(&local_14);
    }
    if (0 < local_EAX_54) {
      local_EAX_54 = -0x6b;
    }
    if (param_3 != nullptr) {
      *param_3 = local_EAX_54;
    }
    return nullptr;
  }
  Library::MSVCRT::_strncpy(&local_64->field_0x4,&DAT_008016a0,0x7f);
  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
  cVar3 = *param_1;
  local_ECX_128 = param_1;
  for (iVar13 = 0; (cVar3 != '\a' && (iVar13 < param_2)); iVar13 = iVar13 + 1) {
    cVar3 = local_ECX_128[5];
    local_ECX_128 = local_ECX_128 + 5;
  }
  if (iVar13 != param_2) {
    RaiseInternalException
              (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_interp.cpp",0x152);
  }
  iVar13 = (int)*(short *)(param_1 + param_2 * 5 + 1);
  if (iVar13 < 0x7f7) {
    if (iVar13 == 0x7f6) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          pcVar27 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (pcVar27 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,pcVar27,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_8 < 0xf);
      if ((param_1[0xf] != '\x06') && (param_1[0xf] != '\x03')) {
        local_EAX_9641 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_9641 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_9641,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_c = (char *)0x4;
      if (4 < param_2) {
        local_8 = (AiFltClassTy *)0x14;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_9737 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_9737 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_9737,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_9848 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_9848 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_9848,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      iVar12 = sub_00668F50(this_00,(char *)local_8,uVar14,puVar24);
      DAT_00811980 = 0;
      if (0 < iVar12) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        do {
          uVar35 = 0;
          pcVar33 = thunk_FUN_00677ed0;
          pcVar31 = local_10;
          sVar4 = (*this_00->vtable->slot_00)();
          sVar8 = (short)pcVar31;
          pcVar31 = local_18;
          sVar5 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar31;
          pbVar19 = local_2c;
          sVar6 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pbVar19;
          pbVar19 = local_1c;
          uVar23 = (*this_00->vtable->slot_00)();
          uVar23 = (*this_00->vtable->slot_00)(local_24,uVar23);
          uVar23 = (*this_00->vtable->slot_00)(local_30,uVar23);
          uVar23 = (*this_00->vtable->slot_08)(local_28,uVar23);
          sVar7 = (*this_00->vtable->slot_00)(local_c,uVar23);
          _EnumRCCont(*(short *)ppAVar29,sVar7,pbVar19,sVar6,sVar9,sVar5,sVar10,sVar4,sVar8,pcVar33,
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
              local_EAX_3786 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (local_EAX_3786 != nullptr) {
                Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_3786,0x7f);
              }
              *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
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
          local_EAX_3939 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_3939 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_3939,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_EAX_4005 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
        if (local_EAX_4005 != 1) {
          local_EAX_4024 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_4024 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_4024,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_8 = local_50[0];
        local_EAX_4096 = sub_00668F50(this_00,local_c,0,(uint *)local_50);
        if (local_EAX_4096 != 1) {
          local_EAX_4115 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_4115 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_4115,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_14 = Library::DKW::LIB::MemAllocClear(4);
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
            local_10 = nullptr;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                local_EAX_2265 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_2265 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_2265,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
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
            local_EAX_2395 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_2395 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_2395,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          puVar24 = (uint *)FUN_006c49b0(local_c);
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
              local_10 = nullptr;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  local_EAX_2083 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (local_EAX_2083 != nullptr) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_2083,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            iVar13 = (*this_00->vtable->slot_00)(param_1);
            iVar17 = (*this_00->vtable->slot_00)(param_1 + 5);
            local_14 = Library::DKW::LIB::MemAllocClear(4);
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
                  local_10 = nullptr;
                  do {
                    if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                      local_EAX_1650 =
                           thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                      if (local_EAX_1650 != nullptr) {
                        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_1650,0x7f);
                      }
                      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                      RaiseInternalException
                                (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
                    }
                    local_c = local_c + 1;
                    local_10 = local_10 + 5;
                  } while ((int)local_c < param_2);
                }
                local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
                if (((int)local_8 < 0) || (3 < (int)local_8)) {
                  local_EAX_1753 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (local_EAX_1753 != nullptr) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_1753,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
                }
                pAVar16 = (AiFltClassTy *)(*this_00->vtable->slot_28)(local_8);
                goto LAB_0066d630;
              }
              goto cf_common_exit_00670456;
            }
            local_c = nullptr;
            if (0 < param_2) {
              local_10 = nullptr;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  local_EAX_1859 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (local_EAX_1859 != nullptr) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_1859,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
            if (((int)local_8 < 0) || (0x20 < (int)local_8)) {
              local_EAX_1962 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (local_EAX_1962 != nullptr) {
                Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_1962,0x7f);
              }
              *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
            }
            local_14 = Library::DKW::LIB::MemAllocClear(4);
            uVar14 = (*this_00->vtable->slot_24)(local_8);
            *local_14 = uVar14;
          }
          goto cf_common_exit_00670431;
        }
        if (iVar13 == 0x7d2) {
          local_c = nullptr;
          if (0 < param_2) {
            local_10 = nullptr;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                local_EAX_1401 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_1401 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_1401,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
          if (((int)local_8 < 0) || (0xff < (int)local_8)) {
            local_EAX_1506 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_1506 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_1506,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = (&DAT_0080e43b)[(int)local_8];
          goto cf_common_exit_00670431;
        }
        if (iVar13 < 0x7d1) {
          if (iVar13 == 2000) {
            local_c = nullptr;
            if (0 < param_2) {
              local_10 = nullptr;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  local_EAX_452 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (local_EAX_452 != nullptr) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_452,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
            local_10 = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
            local_c = nullptr;
            if ((local_8 == (AiFltClassTy *)0x9) &&
               (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
              iVar13 = (*this_00->vtable->slot_2C)(local_10);
              local_c = (char *)(uint)(iVar13 == 0);
              local_14 = Library::DKW::LIB::MemAllocClear(4);
              *local_14 = (uint)local_c;
            }
            else {
              local_EAX_627 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
              if (local_EAX_627 == 1) {
                if (g_allPlayers_007FA174 == nullptr) {
                  pAVar15 = nullptr;
                }
                else {
                  pAVar15 = thunk_FUN_004357f0((char)local_50[0]);
                }
                if (pAVar15 != nullptr) {
                  iVar13 = (*pAVar15->vtable_at_1c->vfunc_2C)
                                     ((AiPlrClassTy *)&pAVar15->vtable_at_1c,(short)local_10);
                  local_c = (char *)(uint)(iVar13 == 0);
                  local_14 = Library::DKW::LIB::MemAllocClear(4);
                  *local_14 = (uint)local_c;
                  goto cf_common_exit_00670431;
                }
                local_8 = local_50[0];
                local_EAX_723 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_723 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_723,0x7f);
                }
                *(AiFltClassTy **)&this_00->field_0x84 = local_8;
              }
              else {
                local_EAX_781 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_781 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_781,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              }
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
              local_14 = Library::DKW::LIB::MemAllocClear(4);
              *local_14 = (uint)local_c;
            }
          }
          else {
            if ((iVar13 < 800) || (0x321 < iVar13)) goto cf_common_exit_00670456;
            local_c = nullptr;
            if (0 < param_2) {
              local_10 = nullptr;
              do {
                if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                  local_EAX_315 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (local_EAX_315 != nullptr) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_315,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
                }
                local_c = (char *)((int)local_c + 1);
                local_10 = local_10 + 5;
              } while ((int)local_c < param_2);
            }
            local_14 = Library::DKW::LIB::MemAllocClear(4);
            uVar14 = (*this_00->vtable->slot_00)(param_1);
            *local_14 = uVar14;
          }
          goto cf_common_exit_00670431;
        }
        if (iVar13 != 0x7d1) {
cf_common_exit_00670456:
          local_EAX_22423 = thunk_FUN_00674af0(iVar13);
          if (local_EAX_22423 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_22423,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x77,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          g_currentExceptionFrame = local_260.previous;
          return local_14;
        }
        local_c = nullptr;
        if (0 < param_2) {
          local_10 = nullptr;
          do {
            if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
              local_EAX_901 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
              if (local_EAX_901 != nullptr) {
                Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_901,0x7f);
              }
              *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
              RaiseInternalException
                        (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
            }
            local_c = (char *)((int)local_c + 1);
            local_10 = local_10 + 5;
          } while ((int)local_c < param_2);
        }
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
        local_10 = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
        if (((int)local_10 < 0) || (0xff < (int)local_10)) {
          local_EAX_1018 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_1018 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_1018,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = nullptr;
        if ((local_8 == (AiFltClassTy *)0x9) &&
           (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
          local_c = (char *)(*this_00->vtable->slot_1C)(local_10);
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = (uint)local_c;
          goto cf_common_exit_00670431;
        }
        local_EAX_1146 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
        if (local_EAX_1146 != 1) {
          local_EAX_1291 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          goto joined_r0x0066b1d2;
        }
        if (g_allPlayers_007FA174 == nullptr) {
          pAVar15 = nullptr;
        }
        else {
          pAVar15 = thunk_FUN_004357f0((char)local_50[0]);
        }
        if (pAVar15 != nullptr) {
          local_c = (char *)(*pAVar15->vtable_at_1c->vfunc_1C)
                                      ((AiPlrClassTy *)&pAVar15->vtable_at_1c,(short)local_10);
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = (uint)local_c;
          goto cf_common_exit_00670431;
        }
        local_8 = local_50[0];
        local_EAX_1234 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_1234 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_1234,0x7f);
        }
LAB_0066b1ad:
        *(AiFltClassTy **)&this_00->field_0x84 = local_8;
LAB_0066b1fb:
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = (uint)local_c;
      }
      else {
        switch(iVar13) {
        case 0x7d7:
          uVar14 = (*this_00->vtable->slot_18)();
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          if (uVar14 == 8) {
            uVar14 = 0xff;
          }
          *local_14 = uVar14;
          break;
        default:
          goto cf_common_exit_00670456;
        case 0x7da:
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = g_playSystem_00802A38->field_00E4 / 0x19;
          break;
        case 0x7dc:
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = g_playSystem_00802A38->field_00E4;
          break;
        case 0x7dd:
          local_c = nullptr;
          if (0 < param_2) {
            local_10 = nullptr;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                local_EAX_2671 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_2671 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_2671,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
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
            local_14 = Library::DKW::LIB::MemAllocClear(4);
            *local_14 = (uint)local_c;
            break;
          }
          local_EAX_2822 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
          if (local_EAX_2822 == 1) {
            if (g_allPlayers_007FA174 == nullptr) {
              pAVar15 = nullptr;
            }
            else {
              pAVar15 = thunk_FUN_004357f0((char)local_50[0]);
            }
            if (pAVar15 != nullptr) {
              local_c = (char *)(*pAVar15->vtable_at_1c->vfunc_14)
                                          ((AiPlrClassTy *)&pAVar15->vtable_at_1c);
              local_14 = Library::DKW::LIB::MemAllocClear(4);
              *local_14 = (uint)local_c;
              break;
            }
            local_8 = local_50[0];
            local_EAX_2906 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_2906 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_2906,0x7f);
            }
            goto LAB_0066b1ad;
          }
          local_EAX_1291 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
joined_r0x0066b1d2:
          if (local_EAX_1291 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_1291,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          goto LAB_0066b1fb;
        case 0x7de:
          local_c = nullptr;
          if (0 < param_2) {
            local_10 = nullptr;
            do {
              if ((local_10[(int)param_1] != '\x04') && (local_10[(int)param_1] != '\x01')) {
                local_EAX_3000 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_3000 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_3000,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_10 = local_10 + 5;
            } while ((int)local_c < param_2);
          }
          local_c = (char *)(*this_00->vtable->slot_00)(param_1);
          if (((local_c == (char *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) ||
             (local_c == (char *)0xff)) {
            local_EAX_3120 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_3120 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_3120,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_EAX_3187 = sub_00668F50(this_00,local_c,0,(uint *)local_50);
          if (local_EAX_3187 != 1) {
            local_EAX_3206 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_3206 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_3206,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_1d = '\0';
          local_8 = nullptr;
          if (g_cPanel_00801688 != nullptr) {
            thunk_FUN_004f91a0(g_cPanel_00801688,(byte)local_50[0],&local_1d,(int *)&local_8);
          }
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = ~-(uint)(local_1d != '\x01') & (uint)local_8;
          break;
        case 0x7e4:
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          if ((DAT_008087a0 == '\x03') || (DAT_008087a0 == '\b')) {
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
                local_EAX_3437 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                if (local_EAX_3437 != nullptr) {
                  Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_3437,0x7f);
                }
                *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                RaiseInternalException
                          (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
              }
              local_c = (char *)((int)local_c + 1);
              local_8 = (AiFltClassTy *)&local_8->field_0x5;
            } while ((int)local_c < param_2);
          }
          local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
          if (((local_8 == (AiFltClassTy *)0x9) &&
              (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) ||
             (local_8 == (AiFltClassTy *)0xff)) {
            local_EAX_3557 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_3557 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_3557,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_EAX_3624 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
          if (local_EAX_3624 != 1) {
            local_EAX_3643 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_3643 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_3643,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_14 = Library::DKW::LIB::MemAllocClear(4);
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
            local_EAX_4446 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_4446 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_4446,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_c = (char *)(*this_00->vtable->slot_00)(param_1);
      if (((local_c == (char *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) ||
         (local_c == (char *)0xff)) {
        local_EAX_4567 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_4567 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_4567,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      if (local_c == (char *)0x8) {
        local_c = (char *)(uint)DAT_0080874d;
      }
      pcVar31 = local_c;
      if (local_c == (char *)0x9) {
        pcVar31 = (char *)(*this_00->vtable->slot_18)();
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
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
            local_EAX_4751 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_4751 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_4751,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      uVar14 = (*this_00->vtable->slot_00)(param_1);
      uVar28 = 0;
      if (DAT_00808a8f == '\0') {
LAB_0066bff3:
        local_14 = Library::DKW::LIB::MemAllocClear(4);
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
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = 0;
      }
      break;
    case 0x7e9:
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)(DAT_00808a8f != '\0');
      break;
    case 0x7ea:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_4997 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_4997 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_4997,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)
          ) || (local_8 == (AiFltClassTy *)0xff)) {
        local_EAX_5116 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_5116 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_5116,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_EAX_5183 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
      if (local_EAX_5183 != 1) {
        local_EAX_5202 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_5202 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_5202,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)(byte)local_50[0][0x32cd].field_0x268;
      break;
    case 0x7eb:
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)DAT_0080874d;
      break;
    case 0x7ec:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_5345 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_5345 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_5345,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)
          ) || (local_8 == (AiFltClassTy *)0xff)) {
        local_EAX_5465 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_5465 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_5465,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_EAX_5532 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
      if (local_EAX_5532 != 1) {
        local_EAX_5551 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_5551 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_5551,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)g_bulkInitializedRecords_008087C7[(int)local_50[0]].field_0021;
      break;
    case 0x7ed:
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)(DAT_00808a94 != '\0');
      break;
    case 0x7ee:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_5703 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_5703 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_5703,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_5813 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_5813 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_5813,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      local_EAX_5889 = sub_00668F50(this_00,(char *)local_8,uVar14,puVar24);
      DAT_00811980 = 0;
      if (0 < local_EAX_5889) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        do {
          puVar34 = nullptr;
          puVar24 = nullptr;
          pcVar33 = thunk_FUN_006771e0;
          pcVar31 = local_10;
          sVar4 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar31;
          pcVar31 = local_18;
          sVar5 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pcVar31;
          pbVar19 = local_2c;
          sVar6 = (*this_00->vtable->slot_00)();
          sVar7 = (short)pbVar19;
          pbVar19 = local_1c;
          pbVar18 = (byte *)(*this_00->vtable->slot_00)();
          cVar3 = (char)pbVar19;
          pcVar31 = local_24;
          uVar23 = (*this_00->vtable->slot_00)();
          uVar23 = (*this_00->vtable->slot_00)(local_30,uVar23);
          uVar23 = (*this_00->vtable->slot_00)(local_28,uVar23);
          uVar14 = (*this_00->vtable->slot_00)(local_c,0x3fffffff,0,uVar23);
          _EnumPlObj(*ppAVar29,uVar14,(uint)pcVar31,pbVar18,cVar3,sVar6,sVar7,sVar5,sVar9,sVar4,
                     sVar10,pcVar33,puVar24,puVar34);
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
            local_EAX_6126 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_6126 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_6126,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_6237 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_6237 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_6237,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      local_EAX_6313 = sub_00668F50(this_00,(char *)local_8,uVar14,puVar24);
      DAT_00811980 = 0;
      if (0 < local_EAX_6313) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        do {
          puVar34 = nullptr;
          puVar24 = nullptr;
          pcVar33 = thunk_FUN_006771e0;
          pcVar31 = local_10;
          sVar4 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar31;
          pcVar31 = local_18;
          sVar5 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pcVar31;
          pbVar19 = local_2c;
          sVar6 = (*this_00->vtable->slot_00)();
          sVar7 = (short)pbVar19;
          pbVar19 = local_1c;
          pbVar18 = (byte *)(*this_00->vtable->slot_00)();
          cVar3 = (char)pbVar19;
          uVar23 = (*this_00->vtable->slot_00)(local_24);
          uVar23 = (*this_00->vtable->slot_00)(local_30,uVar23);
          uVar23 = (*this_00->vtable->slot_00)(local_28,uVar23);
          uVar14 = (*this_00->vtable->slot_00)(local_c,0,uVar23);
          _EnumPlObj(*ppAVar29,0,uVar14,pbVar18,cVar3,sVar6,sVar7,sVar5,sVar9,sVar4,sVar10,pcVar33,
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
          local_EAX_6537 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_6537 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_6537,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_8 < 10);
      if ((param_1[10] != '\x06') && (param_1[10] != '\x03')) {
        local_EAX_6625 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_6625 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_6625,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_c = (char *)0x3;
      if (3 < param_2) {
        local_8 = (AiFltClassTy *)0xf;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_6722 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_6722 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_6722,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_6832 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_6832 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_6832,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      local_EAX_6908 = sub_00668F50(this_00,(char *)local_8,uVar14,puVar24);
      DAT_00811980 = 0;
      if (0 < local_EAX_6908) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = (byte *)(param_1 + 0x23);
        local_1c = (byte *)(param_1 + 0x1e);
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        do {
          puVar34 = nullptr;
          puVar24 = nullptr;
          pcVar33 = thunk_FUN_006771e0;
          pcVar31 = local_10;
          sVar4 = (*this_00->vtable->slot_00)();
          sVar10 = (short)pcVar31;
          pcVar31 = local_18;
          sVar5 = (*this_00->vtable->slot_00)();
          sVar9 = (short)pcVar31;
          pbVar19 = local_2c;
          sVar6 = (*this_00->vtable->slot_00)();
          sVar7 = (short)pbVar19;
          pbVar19 = local_1c;
          uVar23 = (*this_00->vtable->slot_00)();
          cVar3 = (char)pbVar19;
          uVar23 = (*this_00->vtable->slot_00)(local_24,uVar23);
          uVar23 = (*this_00->vtable->slot_00)(local_30,uVar23);
          uVar23 = (*this_00->vtable->slot_00)(local_28,uVar23);
          pbVar19 = (byte *)(*this_00->vtable->slot_08)(local_c,uVar23);
          _EnumPlObj(*ppAVar29,0,0x3fffffff,pbVar19,cVar3,sVar6,sVar7,sVar5,sVar9,sVar4,sVar10,
                     pcVar33,puVar24,puVar34);
          ppAVar29 = ppAVar29 + 1;
          local_EAX_6908 = local_EAX_6908 + -1;
        } while (local_EAX_6908 != 0);
      }
cf_common_exit_0066DF5E:
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = DAT_00811980;
      break;
    case 0x7f1:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_7146 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_7146 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_7146,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_7257 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_7257 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_7257,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      pcVar31 = (char *)sub_00668F50(this_00,(char *)local_8,uVar14,puVar24);
      local_10 = nullptr;
      if (0 < (int)pcVar31) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          local_18 = pcVar31;
          puVar20 = (byte *)thunk_FUN_0043e420(local_4f0,*(char *)&local_8->vtable);
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
              local_10 = (char *)((int)local_10 + iVar17);
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
          pcVar31 = local_18 + -1;
          local_18 = pcVar31;
        } while (pcVar31 != nullptr);
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)local_10;
      break;
    case 0x7f2:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_7783 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_7783 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_7783,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_7894 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_7894 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_7894,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      pcVar31 = (char *)sub_00668F50(this_00,(char *)local_8,uVar14,puVar24);
      local_10 = nullptr;
      if (0 < (int)pcVar31) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          local_18 = pcVar31;
          puVar20 = (byte *)thunk_FUN_0043e420(local_3b8,*(char *)&local_8->vtable);
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
              local_10 = (char *)((int)local_10 + iVar17);
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
          pcVar31 = local_18 + -1;
          local_18 = pcVar31;
        } while (pcVar31 != nullptr);
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)local_10;
      break;
    case 0x7f3:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_8420 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_8420 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_8420,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_8531 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_8531 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_8531,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      pcVar31 = (char *)sub_00668F50(this_00,(char *)local_8,uVar14,puVar24);
      local_10 = nullptr;
      if (0 < (int)pcVar31) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          local_18 = pcVar31;
          puVar20 = (byte *)thunk_FUN_0043e420(local_628,*(char *)&local_8->vtable);
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
              local_10 = (char *)((int)local_10 + iVar17);
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
          pcVar31 = local_18 + -1;
          local_18 = pcVar31;
        } while (pcVar31 != nullptr);
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)local_10;
      break;
    case 0x7f4:
      local_c = nullptr;
      if (0 < param_2) {
        local_8 = nullptr;
        do {
          if ((param_1[(int)&local_8->vtable] != '\x04') &&
             (param_1[(int)&local_8->vtable] != '\x01')) {
            local_EAX_9060 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_9060 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_9060,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = local_c + 1;
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
      {
        local_EAX_9171 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_9171 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_9171,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      puVar24 = (uint *)(param_1 + 5);
      uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
      pAVar16 = (AiFltClassTy *)sub_00668F50(this_00,(char *)local_8,uVar14,puVar24);
      pcVar31 = nullptr;
      if (0 < (int)pAVar16) {
        local_c = param_1 + 10;
        ppAVar29 = local_50;
        local_8 = pAVar16;
        do {
          GVar21 = (*this_00->vtable->slot_00)(local_c);
          local_EAX_9288 = thunk_FUN_00677700((int)*ppAVar29,GVar21);
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
            local_EAX_9350 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_9350 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_9350,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          local_c = (char *)((int)local_c + 1);
          local_8 = (AiFltClassTy *)&local_8->field_0x5;
        } while ((int)local_c < param_2);
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x1e);
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar23);
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar23);
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0xf,uVar23);
      pcVar31 = param_1 + 10;
      iVar13 = (*this_00->vtable->slot_00)(pcVar31,uVar23);
      pcVar26 = param_1 + 5;
      iVar17 = (*this_00->vtable->slot_00)();
      GVar22 = (*this_00->vtable->slot_00)();
      uVar12 = thunk_FUN_006777d0(GVar22,(int)param_1,iVar17,pcVar26,iVar13,(int)pcVar31);
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
        local_EAX_11025 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_11025 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_11025,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0xf);
    if ((param_1[0xf] != '\x06') && (param_1[0xf] != '\x03')) {
      local_EAX_11114 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_11114 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_11114,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x4;
    if (4 < param_2) {
      local_8 = (AiFltClassTy *)0x14;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_11210 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_11210 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_11210,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_11321 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_11321 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_11321,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    puVar24 = (uint *)(param_1 + 5);
    uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
    local_EAX_11396 = sub_00668F50(this_00,(char *)local_8,uVar14,puVar24);
    DAT_00811980 = 0;
    if (0 < local_EAX_11396) {
      local_10 = param_1 + 0x2d;
      local_18 = param_1 + 0x28;
      local_2c = (byte *)(param_1 + 0x23);
      local_1c = (byte *)(param_1 + 0x1e);
      local_24 = param_1 + 0x19;
      local_30 = param_1 + 0x14;
      local_28 = param_1 + 0xf;
      local_c = param_1 + 10;
      ppAVar29 = local_50;
      do {
        uVar35 = 0;
        pcVar33 = thunk_FUN_00677ef0;
        pcVar31 = local_10;
        sVar4 = (*this_00->vtable->slot_00)();
        sVar8 = (short)pcVar31;
        pcVar31 = local_18;
        sVar5 = (*this_00->vtable->slot_00)();
        sVar10 = (short)pcVar31;
        pbVar19 = local_2c;
        sVar6 = (*this_00->vtable->slot_00)();
        sVar9 = (short)pbVar19;
        pbVar19 = local_1c;
        uVar23 = (*this_00->vtable->slot_00)();
        uVar23 = (*this_00->vtable->slot_00)(local_24,uVar23);
        uVar23 = (*this_00->vtable->slot_00)(local_30,uVar23);
        uVar23 = (*this_00->vtable->slot_08)(local_28,uVar23);
        sVar7 = (*this_00->vtable->slot_00)(local_c,uVar23);
        _EnumRCCont(*(short *)ppAVar29,sVar7,pbVar19,sVar6,sVar9,sVar5,sVar10,sVar4,sVar8,pcVar33,
                    uVar35);
        ppAVar29 = ppAVar29 + 1;
        local_EAX_11396 = local_EAX_11396 + -1;
      } while (local_EAX_11396 != 0);
    }
    goto cf_common_exit_0066DF5E;
  case 0x7f8:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_11604 = thunk_FUN_00674af0(iVar13);
      if (local_EAX_11604 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_11604,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      local_EAX_11679 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_11679 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_11679,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_11776 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_11776 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_11776,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x23,thunk_FUN_00678200,0);
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
    _EnumArt(sVar8,pbVar19,sVar4,sVar10,sVar6,sVar9,sVar5,sVar7,pcVar31,uVar23);
    goto cf_common_exit_0066DCED;
  case 0x7f9:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_11977 = thunk_FUN_00674af0(iVar13);
      if (local_EAX_11977 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_11977,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      local_EAX_12051 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_12051 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_12051,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_12148 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_12148 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_12148,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x23,thunk_FUN_00678870,0);
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
    _EnumDest(pbVar19,cVar3,sVar10,sVar9,sVar4,sVar7,sVar5,sVar6,pcVar31,uVar23);
    goto cf_common_exit_0066DCED;
  case 0x7fa:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        local_EAX_12381 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_12381 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_12381,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x14);
    if ((param_1[0x14] != '\x06') && (param_1[0x14] != '\x03')) {
      local_EAX_12470 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_12470 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_12470,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x5;
    if (5 < param_2) {
      local_8 = (AiFltClassTy *)0x19;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_12566 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_12566 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_12566,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_12677 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_12677 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_12677,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    puVar24 = (uint *)(param_1 + 5);
    uVar14 = (*this_00->vtable->slot_00)(puVar24,local_50);
    local_EAX_12752 = sub_00668F50(this_00,(char *)local_8,uVar14,puVar24);
    DAT_00811980 = 0;
    if (0 < local_EAX_12752) {
      local_8 = (AiFltClassTy *)(param_1 + 0x32);
      local_10 = param_1 + 0x2d;
      local_18 = param_1 + 0x28;
      local_2c = (byte *)(param_1 + 0x23);
      local_1c = (byte *)(param_1 + 0x1e);
      local_24 = param_1 + 0x19;
      local_30 = param_1 + 0x14;
      local_28 = param_1 + 0xf;
      local_c = param_1 + 10;
      ppAVar29 = local_50;
      do {
        uVar35 = 0;
        pcVar33 = thunk_FUN_00678560;
        pAVar16 = local_8;
        sVar4 = (*this_00->vtable->slot_00)();
        sVar8 = (short)pAVar16;
        pcVar31 = local_10;
        sVar5 = (*this_00->vtable->slot_00)();
        sVar10 = (short)pcVar31;
        pcVar31 = local_18;
        sVar6 = (*this_00->vtable->slot_00)();
        sVar9 = (short)pcVar31;
        pbVar19 = local_2c;
        cVar3 = (*this_00->vtable->slot_00)();
        uVar23 = (*this_00->vtable->slot_00)(local_1c);
        uVar23 = (*this_00->vtable->slot_00)(local_24,uVar23);
        uVar23 = (*this_00->vtable->slot_08)(local_30,uVar23);
        uVar23 = (*this_00->vtable->slot_00)(local_28,uVar23);
        sVar7 = (*this_00->vtable->slot_00)(local_c,uVar23);
        _EnumMines((int)*ppAVar29,sVar7,cVar3,pbVar19,sVar6,sVar9,sVar5,sVar10,sVar4,sVar8,pcVar33,
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
          local_EAX_10821 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_10821 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_10821,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    DAT_00811980 = 0;
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x1e,thunk_FUN_00677bc0,0);
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar23);
    uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar23);
    pcVar31 = param_1 + 0xf;
    sVar6 = (*this_00->vtable->slot_00)();
    sVar5 = sVar4 + 10;
    sVar7 = (*this_00->vtable->slot_00)();
    sVar4 = sVar4 + 5;
    sVar9 = (*this_00->vtable->slot_00)();
    sVar10 = (*this_00->vtable->slot_00)();
    _EnumRCField(sVar10,(short)param_1,sVar9,sVar4,sVar7,sVar5,sVar6,pcVar31,uVar23);
cf_common_exit_0066DCED:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = DAT_00811980;
    break;
  case 0x7fc:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_13016 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_13016 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_13016,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_c = (char *)0xffffffff;
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    local_10 = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
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
      local_EAX_13578 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_13578 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_13578,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)local_c;
    break;
  default:
    goto cf_common_exit_00670456;
  case 0x80c:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_13666 = thunk_FUN_00674af0(iVar13);
      if (local_EAX_13666 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_13666,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      local_EAX_13740 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_13740 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_13740,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_13837 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_13837 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_13837,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_13947 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_13947 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_13947,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_10 = nullptr;
    local_EAX_14021 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_14021 == 1) {
      puVar34 = nullptr;
      puVar24 = nullptr;
      pcVar33 = thunk_FUN_00677200;
      sVar10 = -1;
      sVar9 = -1;
      sVar7 = -1;
      sVar6 = 0;
      sVar5 = 0;
      sVar4 = 0;
      cVar3 = -1;
      pbVar19 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
      local_EAX_14081 =
           _EnumPlObj(local_50[0],0,0x3fffffff,pbVar19,cVar3,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,
                      pcVar33,puVar24,puVar34);
      if ((local_EAX_14081 == -1) && (g_fish_00811984 != nullptr)) {
        local_10 = (char *)0x1;
        iVar13 = (*this_00->vtable->slot_00)(param_1 + 10);
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 0xf);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0x14);
        iVar17 = (*this_00->vtable->slot_00)(param_1 + 0x19);
        if ((-1 < iVar13) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          STFishC::sub_004162B0(g_fish_00811984,&local_5a,&local_52,&local_58);
          (*this_00->vtable->slot_20)(iVar13,(int)local_5a);
          (*this_00->vtable->slot_20)(local_8,(int)local_52);
          (*this_00->vtable->slot_20)(local_c,(int)local_58);
        }
        if (-1 < iVar17) {
          uVar23 = (*g_fish_00811984->vtable->vfunc_11C)();
          (*this_00->vtable->slot_20)(iVar17,uVar23);
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = (uint)local_10;
          break;
        }
      }
    }
    else {
      local_EAX_14310 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_14310 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_14310,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)local_10;
    break;
  case 0x80d:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_14397 = thunk_FUN_00674af0(iVar13);
      if (local_EAX_14397 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_14397,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      local_EAX_14471 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_14471 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_14471,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_14568 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_14568 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_14568,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_14678 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_14678 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_14678,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_10 = nullptr;
    local_EAX_14752 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_14752 == 1) {
      uVar23 = 0;
      pcVar33 = thunk_FUN_00677f20;
      sVar10 = -1;
      sVar9 = -1;
      sVar7 = -1;
      sVar6 = 0;
      sVar5 = 0;
      sVar4 = 0;
      pbVar19 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
      local_EAX_14803 =
           _EnumRCCont((short)local_50[0],0,pbVar19,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,pcVar33,
                       uVar23);
      if ((local_EAX_14803 == -1) && (g_fish_00811984 != nullptr)) {
        local_10 = (char *)0x1;
        iVar13 = (*this_00->vtable->slot_00)(param_1 + 10);
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 0xf);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0x14);
        iVar17 = (*this_00->vtable->slot_00)(param_1 + 0x19);
        if ((-1 < iVar13) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          STFishC::sub_004162F0(g_fish_00811984,&local_5c,&local_56,&local_54);
          (*this_00->vtable->slot_20)(iVar13,(int)local_5c);
          (*this_00->vtable->slot_20)(local_8,(int)local_56);
          (*this_00->vtable->slot_20)(local_c,(int)local_54);
        }
        if (-1 < iVar17) {
          uVar23 = (*g_fish_00811984->vtable->vfunc_11C)();
          (*this_00->vtable->slot_20)(iVar17,uVar23);
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = (uint)local_10;
          break;
        }
      }
    }
    else {
      local_EAX_15032 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_15032 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_15032,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)local_10;
    break;
  case 0x80e:
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      local_EAX_15119 = thunk_FUN_00674af0(iVar13);
      if (local_EAX_15119 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_15119,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_15215 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_15215 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_15215,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    uVar23 = 0;
    pcVar33 = thunk_FUN_00678220;
    puVar34 = (undefined *)0xffffffff;
    sVar9 = -1;
    sVar7 = -1;
    sVar6 = 0;
    local_10 = nullptr;
    sVar5 = 0;
    sVar4 = 0;
    temp_3ffc6253af = param_1;
    pbVar19 = (byte *)(*this_00->vtable->slot_08)();
    local_EAX_15327 =
         _EnumArt(0,pbVar19,(short)temp_3ffc6253af,sVar4,sVar5,sVar6,sVar7,sVar9,puVar34,pcVar33);
    if ((local_EAX_15327 == -1) && (g_fish_00811984 != nullptr)) {
      local_10 = (char *)0x1;
      iVar13 = (*this_00->vtable->slot_00)(param_1 + 5,uVar23);
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 10);
      local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0xf);
      iVar17 = (*this_00->vtable->slot_00)(param_1 + 0x14);
      if ((-1 < iVar13) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
        STFishC::sub_004162F0
                  (g_fish_00811984,&local_60,&local_5e,(undefined2 *)((int)&local_28 + 2));
        (*this_00->vtable->slot_20)(iVar13,(int)local_60);
        (*this_00->vtable->slot_20)(local_8,(int)local_5e);
        (*this_00->vtable->slot_20)(local_c,(int)STPiece<2,2>(local_28));
      }
      if (-1 < iVar17) {
        uVar23 = (*g_fish_00811984->vtable->vfunc_11C)();
        (*this_00->vtable->slot_20)(iVar17,uVar23);
      }
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)local_10;
    break;
  case 0x80f:
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      local_EAX_15560 = thunk_FUN_00674af0(iVar13);
      if (local_EAX_15560 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_15560,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_15656 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_15656 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_15656,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    uVar23 = 0;
    pcVar33 = thunk_FUN_00678890;
    puVar34 = (undefined *)0xffffffff;
    sVar10 = -1;
    sVar9 = -1;
    sVar7 = 0;
    sVar6 = 0;
    local_10 = nullptr;
    sVar5 = 0;
    sVar4 = -1;
    temp_3fd8761c8d = param_1;
    pbVar19 = (byte *)(*this_00->vtable->slot_08)();
    local_EAX_15768 =
         _EnumDest(pbVar19,(char)temp_3fd8761c8d,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,puVar34,
                   pcVar33);
    if ((local_EAX_15768 == -1) && (g_fish_00811984 != nullptr)) {
      local_10 = (char *)0x1;
      iVar13 = (*this_00->vtable->slot_00)(param_1 + 5,uVar23);
      local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 10);
      local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0xf);
      iVar17 = (*this_00->vtable->slot_00)(param_1 + 0x14);
      if ((-1 < iVar13) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
        STFishC::sub_004162B0
                  (g_fish_00811984,(short *)((int)&local_30 + 2),(short *)((int)&local_24 + 2),
                   (short *)((int)&local_1c + 2));
        (*this_00->vtable->slot_20)(iVar13,(int)STPiece<2,2>(local_30));
        (*this_00->vtable->slot_20)(local_8,(int)STPiece<2,2>(local_24));
        (*this_00->vtable->slot_20)(local_c,(int)STPiece<2,2>(local_1c));
      }
      if (-1 < iVar17) {
        uVar23 = (*g_fish_00811984->vtable->vfunc_11C)();
        (*this_00->vtable->slot_20)(iVar17,uVar23);
      }
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)local_10;
    break;
  case 0x810:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_16001 = thunk_FUN_00674af0(iVar13);
      if (local_EAX_16001 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_16001,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((param_1[5] != '\x06') && (param_1[5] != '\x03')) {
      local_EAX_16075 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_16075 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_16075,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x2;
    if (2 < param_2) {
      local_8 = (AiFltClassTy *)0xa;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_16172 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_16172 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_16172,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_16282 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_16282 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_16282,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_1c = nullptr;
    local_EAX_16356 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_16356 == 1) {
      uVar23 = 0;
      pcVar33 = thunk_FUN_00678580;
      sVar10 = -1;
      sVar9 = -1;
      sVar7 = -1;
      sVar6 = 0;
      sVar5 = 0;
      sVar4 = 0;
      pbVar19 = (byte *)(*this_00->vtable->slot_08)(param_1 + 5);
      local_EAX_16409 =
           _EnumMines((int)local_50[0],0,-1,pbVar19,sVar4,sVar5,sVar6,sVar7,sVar9,sVar10,pcVar33,
                      uVar23);
      if ((local_EAX_16409 == -1) && (g_fish_00811984 != nullptr)) {
        local_1c = (byte *)0x1;
        iVar13 = (*this_00->vtable->slot_00)(param_1 + 10);
        local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 0xf);
        local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 0x14);
        iVar17 = (*this_00->vtable->slot_00)(param_1 + 0x19);
        if ((-1 < iVar13) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          STFishC::sub_004162B0
                    (g_fish_00811984,(short *)((int)&local_2c + 2),(short *)((int)&local_18 + 2),
                     (short *)((int)&local_10 + 2));
          (*this_00->vtable->slot_20)(iVar13,(int)STPiece<2,2>(local_2c));
          (*this_00->vtable->slot_20)(local_8,(int)STPiece<2,2>(local_18));
          (*this_00->vtable->slot_20)(local_c,(int)STPiece<2,2>(local_10));
        }
        if (-1 < iVar17) {
          uVar23 = (*g_fish_00811984->vtable->vfunc_11C)();
          (*this_00->vtable->slot_20)(iVar17,uVar23);
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = (uint)local_1c;
          break;
        }
      }
    }
    else {
      local_EAX_16638 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_16638 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_16638,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
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
          local_EAX_16747 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_16747 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_16747,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_c = (char *)(*this_00->vtable->slot_00)(param_1);
    if ((local_c == (char *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_16857 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_16857 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_16857,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_8 = nullptr;
    local_EAX_16931 = sub_00668F50(this_00,local_c,0,(uint *)local_50);
    if (local_EAX_16931 == 1) {
      if (*(short *)(param_1 + param_2 * 5 + 1) == 0x816) {
        thunk_FUN_004e6f00((int)local_50[0]);
      }
      else if (*(short *)(param_1 + param_2 * 5 + 1) != 0x817) {
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = (uint)local_8;
        break;
      }
      local_8 = (AiFltClassTy *)thunk_FUN_004e6fe0((int)local_50[0]);
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)local_8;
    }
    else {
      local_EAX_17038 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17038 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_17038,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      local_14 = Library::DKW::LIB::MemAllocClear(4);
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
          local_EAX_18228 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_18228 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_18228,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((int)local_8 < 0) || (0x9a < (int)local_8)) {
      local_EAX_18333 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_18333 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_18333,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
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
          local_EAX_17148 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_17148 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_17148,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_10 = (char *)(*this_00->vtable->slot_00)(param_1);
    local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1 + 10);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      local_EAX_17282 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17282 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_17282,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((local_10 == (char *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_17364 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17364 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_17364,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_18 = nullptr;
    local_EAX_17437 = sub_00668F50(this_00,local_10,0,(uint *)local_50);
    pAVar16 = local_8;
    pcVar31 = local_c;
    if (local_EAX_17437 == 1) {
      sVar4 = *(short *)(param_1 + param_2 * 5 + 1);
      if (sVar4 == 0x819) {
        iVar13 = thunk_FUN_004e60d0((int)local_50[0],(int)local_c);
        bVar2 = (int)local_8 <= iVar13;
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = (uint)bVar2;
        break;
      }
      if (sVar4 == 0x81b) {
        local_EAX_17589 = thunk_FUN_004e5990((int)local_50[0],(uint)local_c,(int)local_8);
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = (uint)(local_EAX_17589 != 0);
        break;
      }
      if (sVar4 == 0x81c) {
        local_EAX_17500 = thunk_FUN_004e5cc0((int)local_50[0],(uint)local_c,(int)local_8);
        if ((local_EAX_17500 == 0) &&
           (iVar13 = thunk_FUN_004e7f20((int)local_50[0],(int)pcVar31,(int)pAVar16), iVar13 == 0)) {
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = 0;
        }
        else {
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = 1;
        }
        break;
      }
    }
    else {
      local_EAX_17673 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17673 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_17673,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    uVar14 = (uint)local_18;
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = uVar14;
    break;
  case 0x81a:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_17782 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_17782 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_17782,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    local_c = (char *)(*this_00->vtable->slot_00)(param_1 + 5);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      local_EAX_17900 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17900 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_17900,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8)) {
      local_EAX_17982 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17982 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_17982,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_10 = nullptr;
    local_EAX_18055 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_18055 == 1) {
      local_EAX_18079 = thunk_FUN_004e5f90((int)local_50[0],(uint)local_c);
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = (uint)(local_EAX_18079 != 0);
    }
    else {
      local_EAX_18118 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_18118 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_18118,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      uVar14 = (uint)local_10;
      local_14 = Library::DKW::LIB::MemAllocClear(4);
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
          local_EAX_18450 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_18450 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_18450,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_c = (char *)(*this_00->vtable->slot_00)(param_1);
    iVar13 = (*this_00->vtable->slot_00)(param_1 + 5);
    local_8 = (AiFltClassTy *)(iVar13 + -1);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      local_EAX_18572 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_18572 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_18572,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if (((int)local_8 < 0) || (3 < (int)local_c)) {
      local_EAX_18649 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_18649 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_18649,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = *(uint *)(&DAT_007e481c + (int)(&local_8->vtable + (int)local_c) * 4);
    break;
  case 0x82a:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_18749 = thunk_FUN_00674af0(iVar13);
      if (local_EAX_18749 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_18749,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x1;
    if (1 < param_2) {
      local_8 = (AiFltClassTy *)0x5;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x06') && (param_1[(int)&local_8->vtable] != '\x03')
           ) {
          local_EAX_18846 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_18846 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_18846,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_18965 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_18965 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_18965,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_EAX_19032 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_19032 != 1) {
      local_EAX_19051 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_19051 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_19051,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    uVar23 = (*this_00->vtable->slot_08)(param_1 + 10);
    pbVar18 = (byte *)(param_1 + 5);
    pbVar19 = (byte *)(*this_00->vtable->slot_08)(pbVar18,uVar23);
    local_EAX_19136 = thunk_FUN_0066ab60((byte)local_50[0],pbVar19,pbVar18);
    local_14 = Library::DKW::LIB::MemAllocClear(4);
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
        local_EAX_19205 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_19205 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_19205,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x14);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_19319 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_19319 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_19319,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_EAX_19386 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_19386 != 1) {
      local_EAX_19405 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_19405 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_19405,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    this_01 = (AnonReceiver_0065DA50 *)thunk_FUN_0066ac80((char)local_50[0],uVar11);
    pAVar16 = local_50[0];
    pcVar31 = local_c;
    if (this_01 != nullptr) {
      cVar3 = (char)param_1 + '\x0f';
      uVar23 = (*this_00->vtable->slot_00)();
      iVar13 = (*this_00->vtable->slot_00)(param_1 + 10,uVar23);
      pcVar31 = (char *)AnonReceiver_0065DA50::thunk_FUN_0065da50(this_01,iVar13,cVar3);
      pAVar16 = local_50[0];
      local_c = pcVar31;
    }
    goto joined_r0x006703e6;
  case 0x82c:
    local_8 = nullptr;
    do {
      if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01'))
      {
        local_EAX_19584 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_19584 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_19584,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x14);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_19697 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_19697 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_19697,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_EAX_19764 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_19764 != 1) {
      local_EAX_19783 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_19783 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_19783,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    pAVar25 = (AiFltClassTy *)thunk_FUN_0066ac80((char)local_50[0],uVar11);
    pAVar16 = local_50[0];
    pcVar31 = local_c;
    if (pAVar25 != nullptr) {
      cVar3 = (char)param_1 + '\x0f';
      uVar23 = (*this_00->vtable->slot_00)();
      uVar32 = (*this_00->vtable->slot_00)(param_1 + 10,uVar23);
      pcVar31 = (char *)thunk_FUN_0065dc00(pAVar25,(int)((ulonglong)uVar32 >> 0x20),(uint)uVar32,
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
        local_EAX_19936 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_19936 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_19936,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 10);
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_20049 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_20049 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_20049,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_EAX_20116 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_20116 != 1) {
      local_EAX_20135 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_20135 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_20135,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    local_EAX_20210 = thunk_FUN_0066ac80((char)local_50[0],uVar11);
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
        local_EAX_20309 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_20309 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_20309,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x19);
    if ((param_1[0x19] != '\x06') && (param_1[0x19] != '\x03')) {
      local_EAX_20398 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_20398 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_20398,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0x6;
    if (6 < param_2) {
      local_8 = (AiFltClassTy *)0x1e;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_20495 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_20495 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_20495,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_20615 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_20615 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_20615,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_EAX_20682 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_20682 != 1) {
      local_EAX_20701 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_20701 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_20701,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    pAVar25 = (AiFltClassTy *)thunk_FUN_0066ac80((char)local_50[0],uVar11);
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
      pcVar31 = (char *)thunk_FUN_0065dd30(pAVar25,(int)((ulonglong)uVar32 >> 0x20),(uint)uVar32,
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
        local_EAX_20943 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_20943 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_20943,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      local_8 = (AiFltClassTy *)&local_8->field_0x5;
    } while ((int)local_8 < 0x23);
    if ((param_1[0x23] != '\x06') && (param_1[0x23] != '\x03')) {
      local_EAX_21031 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21031 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_21031,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_21131 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21131 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_21131,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_EAX_21198 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_21198 != 1) {
      local_EAX_21217 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21217 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_21217,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_8 = nullptr;
    puVar24 = (uint *)(*this_00->vtable->slot_00)(param_1 + 0xf,local_280);
    pcVar31 = param_1 + 10;
    pcVar26 = (char *)(*this_00->vtable->slot_00)();
    local_EAX_21310 = sub_00668F50(this_00,pcVar26,(uint)pcVar31,puVar24);
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
    local_EAX_21372 = thunk_FUN_0066ac80((char)local_50[0],uVar11);
    pcVar31 = local_c;
    if (local_EAX_21372 != 0) {
      pbVar19 = (byte *)(param_1 + 0x23);
      cVar3 = (*this_00->vtable->slot_08)();
      pcVar31 = param_1 + 0x1e;
      uVar23 = (*this_00->vtable->slot_00)();
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0x19,uVar23);
      uVar32 = (*this_00->vtable->slot_00)(param_1 + 0x14,uVar23);
      pcVar31 = (char *)thunk_FUN_0065e070(local_EAX_21372,(int)((ulonglong)uVar32 >> 0x20),
                                           (uint)local_8,(uint)uVar32,(uint)pcVar31,cVar3,pbVar19);
      local_c = pcVar31;
    }
LAB_0066fbc1:
    if ((int)pcVar31 < 0) {
      Library::MSVCRT::_strncpy(&this_00->field_0x4,&DAT_008016a0,0x7f);
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
          local_EAX_21485 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_21485 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_21485,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_21605 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21605 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_21605,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_EAX_21671 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_21671 != 1) {
      local_EAX_21690 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21690 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_21690,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    local_8 = (AiFltClassTy *)thunk_FUN_0066ac80((char)local_50[0],uVar11);
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
      AiFltClassTy::GetAiMess(local_8,local_1d0);
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
          local_EAX_21955 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_21955 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_21955,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = (char *)((int)local_c + 1);
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_22075 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_22075 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_22075,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_EAX_22142 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_22142 != 1) {
      local_EAX_22161 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_22161 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_22161,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_c = (char *)0xffffffff;
    uVar11 = (*this_00->vtable->slot_00)(param_1 + 5);
    pAVar27 = (AnonShape_0065E360_B94C37CB *)thunk_FUN_0066ac80((char)local_50[0],uVar11);
    pAVar16 = local_50[0];
    pcVar31 = local_c;
    if (pAVar27 != nullptr) {
      iVar13 = (*this_00->vtable->slot_00)(param_1 + 0x19);
      pcVar31 = param_1 + 0x14;
      uVar23 = (*this_00->vtable->slot_00)();
      uVar23 = (*this_00->vtable->slot_00)(param_1 + 0xf,uVar23);
      uVar32 = (*this_00->vtable->slot_00)(param_1 + 10,uVar23);
      pcVar31 = (char *)thunk_FUN_0065e450(pAVar27,(int)((ulonglong)uVar32 >> 0x20),
                                           (Global_sub_0065E450_param_3Enum)uVar32,(int)pcVar31,
                                           iVar13);
      pAVar16 = local_50[0];
      local_c = pcVar31;
    }
joined_r0x006703e6:
    if ((int)pcVar31 < 0) {
      Library::MSVCRT::_strncpy(&this_00->field_0x4,&DAT_008016a0,0x7f);
      *(AiFltClassTy **)&this_00->field_0x84 = pAVar16;
LAB_0067041b:
      RaiseInternalException(-0xaa,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
cf_common_exit_00670425:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)pcVar31;
    break;
  case 0x848:
    local_c = nullptr;
    if (0 < param_2) {
      local_8 = nullptr;
      do {
        if ((param_1[(int)&local_8->vtable] != '\x04') && (param_1[(int)&local_8->vtable] != '\x01')
           ) {
          local_EAX_10183 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_10183 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_10183,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        local_c = local_c + 1;
        local_8 = (AiFltClassTy *)&local_8->field_0x5;
      } while ((int)local_c < param_2);
    }
    local_8 = (AiFltClassTy *)(*this_00->vtable->slot_00)(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) && (iVar13 = (*this_00->vtable->slot_18)(), iVar13 == 8))
       || (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_10303 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_10303 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_10303,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_EAX_10370 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_10370 != 1) {
      local_EAX_10389 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_10389 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_10389,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    iVar13 = 0;
    local_10 = (char *)(uint)DAT_00808aaf;
    local_8 = nullptr;
    if (local_10 != nullptr) {
      local_c = &DAT_00808af5;
      do {
        if (((AiFltClassTy *)(uint)(byte)local_c[-1] == local_50[0]) && (*local_c != '\0')) {
          local_8 = (AiFltClassTy *)(&DAT_00808ab0 + iVar13 * 0x27);
          break;
        }
        iVar13 = iVar13 + 1;
        local_c = local_c + 0x9c;
      } while (iVar13 < (int)local_10);
    }
    pAVar16 = local_8;
    if (local_8 == nullptr) {
      local_EAX_10550 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_10550 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_10550,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      pAVar16 = local_8;
    }
LAB_0066d630:
    puVar24 = (uint *)FUN_006c49b0((char *)pAVar16);
    if (param_3 == nullptr) {
      g_currentExceptionFrame = local_260.previous;
      return puVar24;
    }
    *param_3 = 3;
    g_currentExceptionFrame = local_260.previous;
    return puVar24;
  case 0x849:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = DAT_00808a90 >> 8 & 0xff;
    break;
  case 0x84a:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = DAT_00808a90 & 0xff;
    break;
  case 0x84b:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)DAT_00808a9b;
    break;
  case 0x84c:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = DAT_00808a90 >> 0x10 & 0xff;
    break;
  case 0x84d:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
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

