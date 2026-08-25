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
  int local_EAX_54;
  int iVar4;
  char *local_EAX_315;
  uint uVar5;
  char *local_EAX_452;
  int local_EAX_627;
  AiPlrClassTy *pAVar6;
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
  AiFltClassTy *pAVar7;
  char *local_EAX_1859;
  char *local_EAX_1962;
  char *local_EAX_2083;
  int iVar8;
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
  char *local_EAX_6537;
  char *local_EAX_6625;
  char *local_EAX_6722;
  char *local_EAX_6832;
  int local_EAX_6908;
  char *local_EAX_7146;
  char *local_EAX_7257;
  char *local_EAX_7783;
  char *local_EAX_7894;
  char *local_EAX_8420;
  char *local_EAX_8531;
  byte *puVar9;
  char *local_EAX_9060;
  char *local_EAX_9171;
  Global_sub_00677700_param_2Enum GVar10;
  int local_EAX_9288;
  char *local_EAX_9350;
  Global_sub_006777D0_param_1Enum GVar11;
  int uVar12;
  char *pcVar27;
  char *local_EAX_9641;
  char *local_EAX_9737;
  char *local_EAX_9848;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  char *local_EAX_10183;
  char *local_EAX_10303;
  int local_EAX_10370;
  char *local_EAX_10389;
  char *local_EAX_10550;
  uint *puVar15;
  char *local_EAX_10821;
  char *local_EAX_11025;
  char *local_EAX_11114;
  char *local_EAX_11210;
  char *local_EAX_11321;
  int local_EAX_11396;
  char *local_EAX_11604;
  char *local_EAX_11679;
  char *local_EAX_11776;
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
  byte *pbVar16;
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
  AiFltClassTy *pAVar17;
  char *local_EAX_20943;
  char *local_EAX_21031;
  char *local_EAX_21131;
  int local_EAX_21198;
  char *local_EAX_21217;
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
  AnonShape_0065E360_B94C37CB *pAVar18;
  char *local_EAX_22423;
  char *local_ECX_128;
  uint uVar19;
  AiFltClassTy **ppAVar20;
  byte *puVar21;
  char *pcVar22;
  ulonglong uVar23;
  char *pcVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  code *pcVar31;
  undefined *puVar32;
  uint uVar33;
  undefined4 local_628 [78];
  undefined4 local_4f0 [78];
  undefined4 local_3b8 [78];
  uint local_280 [8];
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
  Library::MSVCRT::_strncpy(&local_64->field_0x4,&CHAR_00h_008016a0,0x7f);
  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
  cVar3 = *param_1;
  local_ECX_128 = param_1;
  for (iVar4 = 0; (cVar3 != '\a' && (iVar4 < param_2)); iVar4 = iVar4 + 1) {
    cVar3 = local_ECX_128[5];
    local_ECX_128 = local_ECX_128 + 5;
  }
  if (iVar4 != param_2) {
    RaiseInternalException
              (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_interp.cpp",0x152);
  }
  iVar4 = (int)*(short *)(param_1 + param_2 * 5 + 1);
  if (iVar4 < 0x7f7) {
    if (iVar4 == 0x7f6) {
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
      /* ST_CALLSITE[0066D319]: CALL dword ptr [EAX] */
      local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) &&
         /* ST_CALLSITE[0066D327]: CALL dword ptr [EDX + 0x18] */
         (iVar4 = this_00->slot_18(), iVar4 == 8)) {
        local_EAX_9848 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_9848 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_9848,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      ppAVar20 = local_50;
      /* ST_CALLSITE[0066D37A]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar5 = this_00->slot_00(param_1 + 5);
      /* ST_CALLSITE[0066D383]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
      iVar12 = sub_00668F50(this_00,(char *)local_8,uVar5,(uint *)ppAVar20);
      DAT_00811980 = 0;
      if (0 < iVar12) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = param_1 + 0x23;
        local_1c = param_1 + 0x1e;
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar20 = local_50;
        do {
          uVar33 = 0;
          pcVar31 = thunk_FUN_00677ed0;
          /* ST_CALLSITE[0066D3DE]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_10);
          sVar30 = (short)uVar13;
          /* ST_CALLSITE[0066D3E9]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_18);
          sVar29 = (short)uVar13;
          /* ST_CALLSITE[0066D3F4]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_2c);
          sVar28 = (short)uVar13;
          /* ST_CALLSITE[0066D3FF]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_1c);
          sVar27 = (short)uVar13;
          /* ST_CALLSITE[0066D40A]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_24);
          sVar26 = (short)uVar13;
          /* ST_CALLSITE[0066D415]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_30);
          sVar25 = (short)uVar13;
          /* ST_CALLSITE[0066D420]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          pbVar14 = (byte *)this_00->slot_08(local_28);
          /* ST_CALLSITE[0066D42C]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_c);
          /* ST_CALLSITE[0066D433]: CALL 0x00403882; direct=00403882 _EnumRCCont */
          _EnumRCCont(*(short *)ppAVar20,(short)uVar13,pbVar14,sVar25,sVar26,sVar27,sVar28,sVar29,
                      sVar30,pcVar31,uVar33);
          ppAVar20 = ppAVar20 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      goto cf_common_exit_0066DF5E;
    }
    if (iVar4 < 0x7e7) {
      if (iVar4 == 0x7e6) {
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
        /* ST_CALLSITE[0066BBDA]: CALL dword ptr [EDX] */
        local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
        /* ST_CALLSITE[0066BBE7]: CALL dword ptr [EAX] */
        local_c = (char *)this_00->slot_00(param_1 + 5);
        /* ST_CALLSITE[0066BBF0]: CALL dword ptr [EDX + 0x18] */
        iVar4 = this_00->slot_18();
        if ((((iVar4 == 8) && ((local_8 == (AiFltClassTy *)0x9 || (local_c == (char *)0x9)))) ||
            (local_8 == (AiFltClassTy *)0xff)) || (local_c == (char *)0xff)) {
          local_EAX_3939 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          if (local_EAX_3939 != nullptr) {
            Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_3939,0x7f);
          }
          *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        /* ST_CALLSITE[0066BC65]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
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
        /* ST_CALLSITE[0066BCC0]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
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
          iVar4 = 0;
        }
        else {
          uVar5 = (uint)local_50[0] & 0xff;
          uVar19 = (uint)local_8 & 0xff;
          bVar1 = g_playerRelationMatrix[uVar5][uVar19];
          if ((bVar1 == 0) && (g_playerRelationMatrix[uVar19][uVar5] == 0)) {
            iVar4 = -2;
          }
          else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar19][uVar5] == 0)) {
            iVar4 = -1;
          }
          else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar19][uVar5] == 1)) {
            iVar4 = 1;
          }
          else {
            if ((bVar1 != 1) || (g_playerRelationMatrix[uVar19][uVar5] != 1)) goto LAB_0066bdcc;
            iVar4 = 2;
          }
        }
        *local_14 = (uint)(iVar4 < 0);
        goto cf_common_exit_00670431;
      }
      if (iVar4 < 0x7d7) {
        if (iVar4 == 0x7d6) {
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
          /* ST_CALLSITE[0066B5E8]: CALL dword ptr [EDX] */
          iVar4 = this_00->slot_00(param_1);
          if ((g_dArray_0080C4C7 == nullptr) ||
             ((int)g_dArray_0080C4C7->elementSize <= iVar4)) {
            local_c = nullptr;
          }
          else {
            local_c = *(char **)(g_dArray_0080C4C7->growCapacity + iVar4 * 4);
          }
          if (local_c == nullptr) {
            local_EAX_2395 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_2395 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_2395,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          puVar15 = (uint *)FUN_006c49b0(local_c);
          if (param_3 == nullptr) {
            g_currentExceptionFrame = local_260.previous;
            return puVar15;
          }
          *param_3 = 3;
          g_currentExceptionFrame = local_260.previous;
          return puVar15;
        }
        if (0x7d2 < iVar4) {
          if (iVar4 == 0x7d3) {
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
            /* ST_CALLSITE[0066B532]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
            iVar4 = this_00->slot_00(param_1);
            /* ST_CALLSITE[0066B53E]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
            iVar8 = this_00->slot_00(param_1 + 5);
            local_14 = Library::DKW::LIB::MemAllocClear(4);
            if (iVar8 < iVar4) {
              /* ST_CALLSITE[0066B569]: CALL dword ptr [EAX + 0x10]; [STIndirectCallsiteApplier] exact slot 0x10; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4;/undefined4 */
              uVar5 = this_00->slot_10(iVar8,iVar4);
              *local_14 = uVar5;
            }
            else {
              /* ST_CALLSITE[0066B556]: CALL dword ptr [EDX + 0x10]; [STIndirectCallsiteApplier] exact slot 0x10; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4;/undefined4 */
              uVar5 = this_00->slot_10(iVar4,iVar8);
              *local_14 = uVar5;
            }
          }
          else {
            if (iVar4 != 0x7d4) {
              if (iVar4 == 0x7d5) {
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
                /* ST_CALLSITE[0066B382]: CALL dword ptr [EDX] */
                local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
                if (((int)local_8 < 0) || (3 < (int)local_8)) {
                  local_EAX_1753 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
                  if (local_EAX_1753 != nullptr) {
                    Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_1753,0x7f);
                  }
                  *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
                  RaiseInternalException
                            (-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
                }
                /* ST_CALLSITE[0066B3D7]: CALL dword ptr [EDX + 0x28]; [STIndirectCallsiteApplier] exact slot 0x28; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
                pAVar7 = (AiFltClassTy *)this_00->slot_28(local_8);
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
            /* ST_CALLSITE[0066B453]: CALL dword ptr [EAX] */
            local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
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
            /* ST_CALLSITE[0066B4B3]: CALL dword ptr [EDX + 0x24]; [STIndirectCallsiteApplier] exact slot 0x24; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
            uVar5 = this_00->slot_24(local_8);
            *local_14 = uVar5;
          }
          goto cf_common_exit_00670431;
        }
        if (iVar4 == 0x7d2) {
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
          /* ST_CALLSITE[0066B289]: CALL dword ptr [EDX] */
          local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
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
        if (iVar4 < 0x7d1) {
          if (iVar4 == 2000) {
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
            /* ST_CALLSITE[0066AED3]: CALL dword ptr [EDX] */
            local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
            /* ST_CALLSITE[0066AEE0]: CALL dword ptr [EAX] */
            local_10 = (char *)this_00->slot_00(param_1 + 5);
            local_c = nullptr;
            if ((local_8 == (AiFltClassTy *)0x9) &&
               /* ST_CALLSITE[0066AEF8]: CALL dword ptr [EDX + 0x18] */
               (iVar4 = this_00->slot_18(), iVar4 == 8)) {
              /* ST_CALLSITE[0066AF08]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
              iVar4 = this_00->slot_2C(local_10);
              local_c = (char *)(uint)(iVar4 == 0);
              local_14 = Library::DKW::LIB::MemAllocClear(4);
              *local_14 = (uint)local_c;
            }
            else {
              /* ST_CALLSITE[0066AF33]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
              local_EAX_627 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
              if (local_EAX_627 == 1) {
                if (g_allPlayers_007FA174 == nullptr) {
                  pAVar6 = nullptr;
                }
                else {
                  pAVar6 = thunk_FUN_004357f0((char)local_50[0]);
                }
                if (pAVar6 != nullptr) {
                  /* ST_CALLSITE[0066AF65]: CALL dword ptr [EAX + 0x2c] */
                  iVar4 = (*pAVar6->vtable_at_1c->vfunc_2C)
                                    ((AiPlrClassTy *)&pAVar6->vtable_at_1c,(short)local_10);
                  local_c = (char *)(uint)(iVar4 == 0);
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
            if ((iVar4 < 800) || (0x321 < iVar4)) goto cf_common_exit_00670456;
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
            /* ST_CALLSITE[0066AE55]: CALL dword ptr [EDX] */
            uVar5 = this_00->slot_00(param_1);
            *local_14 = uVar5;
          }
          goto cf_common_exit_00670431;
        }
        if (iVar4 != 0x7d1) {
cf_common_exit_00670456:
          local_EAX_22423 = thunk_FUN_00674af0(iVar4);
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
        /* ST_CALLSITE[0066B094]: CALL dword ptr [EDX] */
        local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
        /* ST_CALLSITE[0066B0A1]: CALL dword ptr [EAX] */
        local_10 = (char *)this_00->slot_00(param_1 + 5);
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
           /* ST_CALLSITE[0066B104]: CALL dword ptr [EAX + 0x18] */
           (iVar4 = this_00->slot_18(), iVar4 == 8)) {
          /* ST_CALLSITE[0066B114]: CALL dword ptr [EDX + 0x1c]; [STIndirectCallsiteApplier] exact slot 0x1C; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          local_c = (char *)this_00->slot_1C(local_10);
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          *local_14 = (uint)local_c;
          goto cf_common_exit_00670431;
        }
        /* ST_CALLSITE[0066B13A]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
        local_EAX_1146 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
        if (local_EAX_1146 != 1) {
          local_EAX_1291 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
          goto joined_r0x0066b1d2;
        }
        if (g_allPlayers_007FA174 == nullptr) {
          pAVar6 = nullptr;
        }
        else {
          pAVar6 = thunk_FUN_004357f0((char)local_50[0]);
        }
        if (pAVar6 != nullptr) {
          /* ST_CALLSITE[0066B169]: CALL dword ptr [EDX + 0x1c] */
          local_c = (char *)(*pAVar6->vtable_at_1c->vfunc_1C)
                                      ((AiPlrClassTy *)&pAVar6->vtable_at_1c,(short)local_10);
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
        switch(iVar4) {
        case 0x7d7:
          /* ST_CALLSITE[0066B6A8]: CALL dword ptr [EAX + 0x18] */
          uVar5 = this_00->slot_18();
          local_14 = Library::DKW::LIB::MemAllocClear(4);
          if (uVar5 == 8) {
            uVar5 = 0xff;
          }
          *local_14 = uVar5;
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
          /* ST_CALLSITE[0066B77F]: CALL dword ptr [EDX] */
          local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
          local_c = nullptr;
          if ((local_8 == (AiFltClassTy *)0x9) &&
             /* ST_CALLSITE[0066B794]: CALL dword ptr [EAX + 0x18] */
             (iVar4 = this_00->slot_18(), iVar4 == 8)) {
            /* ST_CALLSITE[0066B7A0]: CALL dword ptr [EDX + 0x14]; [STIndirectCallsiteApplier] exact slot 0x14; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970 */
            local_c = (char *)this_00->slot_14();
            local_14 = Library::DKW::LIB::MemAllocClear(4);
            *local_14 = (uint)local_c;
            break;
          }
          /* ST_CALLSITE[0066B7C6]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
          local_EAX_2822 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
          if (local_EAX_2822 == 1) {
            if (g_allPlayers_007FA174 == nullptr) {
              pAVar6 = nullptr;
            }
            else {
              pAVar6 = thunk_FUN_004357f0((char)local_50[0]);
            }
            if (pAVar6 != nullptr) {
              /* ST_CALLSITE[0066B7F1]: CALL dword ptr [EAX + 0x14] */
              local_c = (char *)(*pAVar6->vtable_at_1c->vfunc_14)
                                          ((AiPlrClassTy *)&pAVar6->vtable_at_1c);
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
          /* ST_CALLSITE[0066B8C8]: CALL dword ptr [EDX] */
          local_c = (char *)this_00->slot_00(param_1);
          if (((local_c == (char *)0x9) &&
              /* ST_CALLSITE[0066B8D6]: CALL dword ptr [EAX + 0x18] */
              (iVar4 = this_00->slot_18(), iVar4 == 8)) ||
             (local_c == (char *)0xff)) {
            local_EAX_3120 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_3120 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_3120,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          /* ST_CALLSITE[0066B933]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
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
          /* ST_CALLSITE[0066BA7D]: CALL dword ptr [EDX] */
          local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
          if (((local_8 == (AiFltClassTy *)0x9) &&
              /* ST_CALLSITE[0066BA8B]: CALL dword ptr [EAX + 0x18] */
              (iVar4 = this_00->slot_18(), iVar4 == 8)) ||
             (local_8 == (AiFltClassTy *)0xff)) {
            local_EAX_3557 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
            if (local_EAX_3557 != nullptr) {
              Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_3557,0x7f);
            }
            *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          /* ST_CALLSITE[0066BAE8]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
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
    switch(iVar4) {
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
      /* ST_CALLSITE[0066BE6E]: CALL dword ptr [EAX] */
      local_c = (char *)this_00->slot_00(param_1);
      /* ST_CALLSITE[0066BE7C]: CALL dword ptr [EDX + 0x18] */
      if (((local_c == (char *)0x9) && (iVar4 = this_00->slot_18(), iVar4 == 8))
         || (local_c == (char *)0xff)) {
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
      pcVar22 = local_c;
      if (local_c == (char *)0x9) {
        /* ST_CALLSITE[0066BEE8]: CALL dword ptr [EDX + 0x18] */
        pcVar22 = (char *)this_00->slot_18();
      }
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      if ((pcVar22 < 8) &&
         ((g_playSystem_00802A38 == nullptr ||
          (g_bulkInitializedRecords_008087C7[(int)pcVar22].field_0022 < 8)))) {
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
      /* ST_CALLSITE[0066BF9F]: CALL dword ptr [EDX] */
      uVar5 = this_00->slot_00(param_1);
      uVar19 = 0;
      if (DAT_00808a8f == '\0') {
LAB_0066bff3:
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = uVar19;
      }
      else {
        pbVar14 = &g_bulkInitializedRecords_008087C7[0].field_0023;
        do {
          if (((g_playSystem_00802A38 == nullptr) || (pbVar14[-1] < 8)) &&
             (*pbVar14 == uVar5)) {
            uVar19 = 1;
            goto LAB_0066bff3;
          }
          pbVar14 = pbVar14 + 0x51;
        } while ((int)pbVar14 < 0x808a72);
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
      /* ST_CALLSITE[0066C094]: CALL dword ptr [EDX] */
      local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
      if (((local_8 == (AiFltClassTy *)0x9) &&
          /* ST_CALLSITE[0066C0A2]: CALL dword ptr [EAX + 0x18] */
          (iVar4 = this_00->slot_18(), iVar4 == 8)) ||
         (local_8 == (AiFltClassTy *)0xff)) {
        local_EAX_5116 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_5116 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_5116,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      /* ST_CALLSITE[0066C0FF]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
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
      /* ST_CALLSITE[0066C1F1]: CALL dword ptr [EDX] */
      local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
      if (((local_8 == (AiFltClassTy *)0x9) &&
          /* ST_CALLSITE[0066C1FF]: CALL dword ptr [EAX + 0x18] */
          (iVar4 = this_00->slot_18(), iVar4 == 8)) ||
         (local_8 == (AiFltClassTy *)0xff)) {
        local_EAX_5465 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_5465 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_5465,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      /* ST_CALLSITE[0066C25C]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
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
      /* ST_CALLSITE[0066C356]: CALL dword ptr [EDX] */
      local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) &&
         /* ST_CALLSITE[0066C364]: CALL dword ptr [EAX + 0x18] */
         (iVar4 = this_00->slot_18(), iVar4 == 8)) {
        local_EAX_5813 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_5813 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_5813,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      ppAVar20 = local_50;
      /* ST_CALLSITE[0066C3B8]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar5 = this_00->slot_00(param_1 + 5);
      /* ST_CALLSITE[0066C3C1]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
      local_EAX_5889 = sub_00668F50(this_00,(char *)local_8,uVar5,(uint *)ppAVar20);
      DAT_00811980 = 0;
      if (0 < local_EAX_5889) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = param_1 + 0x23;
        local_1c = param_1 + 0x1e;
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar20 = local_50;
        do {
          puVar32 = nullptr;
          puVar15 = nullptr;
          pcVar31 = thunk_FUN_006771e0;
          /* ST_CALLSITE[0066C41E]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_10);
          sVar30 = (short)uVar13;
          /* ST_CALLSITE[0066C429]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_18);
          sVar29 = (short)uVar13;
          /* ST_CALLSITE[0066C434]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_2c);
          sVar28 = (short)uVar13;
          /* ST_CALLSITE[0066C43F]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_1c);
          sVar27 = (short)uVar13;
          /* ST_CALLSITE[0066C44A]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_24);
          sVar26 = (short)uVar13;
          /* ST_CALLSITE[0066C455]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_30);
          sVar25 = (short)uVar13;
          /* ST_CALLSITE[0066C460]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_28);
          cVar3 = (char)uVar13;
          pbVar14 = nullptr;
          uVar19 = 0x3fffffff;
          /* ST_CALLSITE[0066C472]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar5 = this_00->slot_00(local_c);
          /* ST_CALLSITE[0066C478]: CALL 0x004012f8; direct=004012F8 _EnumPlObj */
          _EnumPlObj(*ppAVar20,uVar5,uVar19,pbVar14,cVar3,sVar25,sVar26,sVar27,sVar28,sVar29,sVar30,
                     pcVar31,puVar15,puVar32);
          ppAVar20 = ppAVar20 + 1;
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
      /* ST_CALLSITE[0066C4FE]: CALL dword ptr [EDX] */
      local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) &&
         /* ST_CALLSITE[0066C50C]: CALL dword ptr [EAX + 0x18] */
         (iVar4 = this_00->slot_18(), iVar4 == 8)) {
        local_EAX_6237 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_6237 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_6237,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      ppAVar20 = local_50;
      /* ST_CALLSITE[0066C560]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar5 = this_00->slot_00(param_1 + 5);
      /* ST_CALLSITE[0066C569]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
      local_EAX_6313 = sub_00668F50(this_00,(char *)local_8,uVar5,(uint *)ppAVar20);
      DAT_00811980 = 0;
      if (0 < local_EAX_6313) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = param_1 + 0x23;
        local_1c = param_1 + 0x1e;
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar20 = local_50;
        do {
          puVar32 = nullptr;
          puVar15 = nullptr;
          pcVar31 = thunk_FUN_006771e0;
          /* ST_CALLSITE[0066C5C6]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_10);
          sVar30 = (short)uVar13;
          /* ST_CALLSITE[0066C5D1]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_18);
          sVar29 = (short)uVar13;
          /* ST_CALLSITE[0066C5DC]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_2c);
          sVar28 = (short)uVar13;
          /* ST_CALLSITE[0066C5E7]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_1c);
          sVar27 = (short)uVar13;
          /* ST_CALLSITE[0066C5F2]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_24);
          sVar26 = (short)uVar13;
          /* ST_CALLSITE[0066C5FD]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_30);
          sVar25 = (short)uVar13;
          /* ST_CALLSITE[0066C608]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_28);
          cVar3 = (char)uVar13;
          pbVar14 = nullptr;
          /* ST_CALLSITE[0066C615]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar5 = this_00->slot_00(local_c);
          /* ST_CALLSITE[0066C61D]: CALL 0x004012f8; direct=004012F8 _EnumPlObj */
          _EnumPlObj(*ppAVar20,0,uVar5,pbVar14,cVar3,sVar25,sVar26,sVar27,sVar28,sVar29,sVar30,
                     pcVar31,puVar15,puVar32);
          ppAVar20 = ppAVar20 + 1;
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
      /* ST_CALLSITE[0066C751]: CALL dword ptr [EDX] */
      local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) &&
         /* ST_CALLSITE[0066C75F]: CALL dword ptr [EAX + 0x18] */
         (iVar4 = this_00->slot_18(), iVar4 == 8)) {
        local_EAX_6832 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_6832 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_6832,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      ppAVar20 = local_50;
      /* ST_CALLSITE[0066C7B3]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar5 = this_00->slot_00(param_1 + 5);
      /* ST_CALLSITE[0066C7BC]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
      local_EAX_6908 = sub_00668F50(this_00,(char *)local_8,uVar5,(uint *)ppAVar20);
      DAT_00811980 = 0;
      if (0 < local_EAX_6908) {
        local_10 = param_1 + 0x2d;
        local_18 = param_1 + 0x28;
        local_2c = param_1 + 0x23;
        local_1c = param_1 + 0x1e;
        local_24 = param_1 + 0x19;
        local_30 = param_1 + 0x14;
        local_28 = param_1 + 0xf;
        local_c = param_1 + 10;
        ppAVar20 = local_50;
        do {
          puVar32 = nullptr;
          puVar15 = nullptr;
          pcVar31 = thunk_FUN_006771e0;
          /* ST_CALLSITE[0066C819]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_10);
          sVar30 = (short)uVar13;
          /* ST_CALLSITE[0066C824]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_18);
          sVar29 = (short)uVar13;
          /* ST_CALLSITE[0066C82F]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_2c);
          sVar28 = (short)uVar13;
          /* ST_CALLSITE[0066C83A]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_1c);
          sVar27 = (short)uVar13;
          /* ST_CALLSITE[0066C845]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_24);
          sVar26 = (short)uVar13;
          /* ST_CALLSITE[0066C850]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_30);
          sVar25 = (short)uVar13;
          /* ST_CALLSITE[0066C85B]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          uVar13 = this_00->slot_00(local_28);
          cVar3 = (char)uVar13;
          /* ST_CALLSITE[0066C866]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
          pbVar14 = (byte *)this_00->slot_08(local_c);
          /* ST_CALLSITE[0066C874]: CALL 0x004012f8; direct=004012F8 _EnumPlObj */
          _EnumPlObj(*ppAVar20,0,0x3fffffff,pbVar14,cVar3,sVar25,sVar26,sVar27,sVar28,sVar29,sVar30,
                     pcVar31,puVar15,puVar32);
          ppAVar20 = ppAVar20 + 1;
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
      /* ST_CALLSITE[0066C8FA]: CALL dword ptr [EDX] */
      local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) &&
         /* ST_CALLSITE[0066C908]: CALL dword ptr [EAX + 0x18] */
         (iVar4 = this_00->slot_18(), iVar4 == 8)) {
        local_EAX_7257 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_7257 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_7257,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      ppAVar20 = local_50;
      /* ST_CALLSITE[0066C95C]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar5 = this_00->slot_00(param_1 + 5);
      /* ST_CALLSITE[0066C965]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
      pcVar22 = (char *)sub_00668F50(this_00,(char *)local_8,uVar5,(uint *)ppAVar20);
      local_10 = nullptr;
      if (0 < (int)pcVar22) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          uVar13 = STReplaceLowByte((uint32_t)(pcVar22), (uint8_t)(*(char *)&local_8->vtable));
          local_18 = pcVar22;
          puVar9 = (byte *)(thunk_FUN_0043e420(local_4f0,*(char *)&local_8->vtable));
          pcVar22 = local_c;
          puVar21 = (byte *)(local_19c);
          memmove(puVar21, puVar9, 0x138); /* compiler REP MOVS byte copy */
          /* ST_CALLSITE[0066C9B7]: CALL dword ptr [EDX] */
          uVar5 = this_00->slot_00(uVar13,pcVar22);
          iVar4 = 0;
          do {
            uVar19 = 1 << ((byte)iVar4 & 0x1f) & uVar5;
            if (uVar19 < 0x101) {
              iVar8 = local_74;
              if (uVar19 != 0x100) {
                switch(uVar19) {
                case 1:
                  iVar8 = local_f4;
                  break;
                case 2:
                  iVar8 = local_e4;
                  break;
                default:
                  goto cf_continue_loop_0066CACD;
                case 4:
                  iVar8 = local_d4;
                  break;
                case 8:
                  iVar8 = local_c4;
                  break;
                case 0x10:
                  iVar8 = local_b4;
                  break;
                case 0x20:
                  iVar8 = local_a4;
                  break;
                case 0x40:
                  iVar8 = local_94;
                  break;
                case 0x80:
                  iVar8 = local_84;
                }
              }
cf_common_join_0066CACB:
              local_10 = (char *)((int)local_10 + iVar8);
            }
            else {
              if (0x100000 < uVar19) {
                iVar8 = local_124;
                if (((uVar19 != 0x200000) && (iVar8 = local_114, uVar19 != 0x400000)) &&
                   (iVar8 = local_104, uVar19 != 0x800000)) goto cf_continue_loop_0066CACD;
                goto cf_common_join_0066CACB;
              }
              iVar8 = local_134;
              if (uVar19 == 0x100000) goto cf_common_join_0066CACB;
              if (uVar19 < 0x40001) {
                iVar8 = local_174;
                if (((uVar19 == 0x40000) || (iVar8 = local_154, uVar19 == 0x10000)) ||
                   (iVar8 = local_144, uVar19 == 0x20000)) goto cf_common_join_0066CACB;
              }
              else {
                iVar8 = local_164;
                if (uVar19 == 0x80000) goto cf_common_join_0066CACB;
              }
            }
cf_continue_loop_0066CACD:
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x20);
          local_8 = (AiFltClassTy *)&local_8->field_0x4;
          pcVar22 = local_18 + -1;
          local_18 = pcVar22;
        } while (pcVar22 != nullptr);
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
      /* ST_CALLSITE[0066CB77]: CALL dword ptr [EDX] */
      local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) &&
         /* ST_CALLSITE[0066CB85]: CALL dword ptr [EAX + 0x18] */
         (iVar4 = this_00->slot_18(), iVar4 == 8)) {
        local_EAX_7894 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_7894 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_7894,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      ppAVar20 = local_50;
      /* ST_CALLSITE[0066CBD9]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar5 = this_00->slot_00(param_1 + 5);
      /* ST_CALLSITE[0066CBE2]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
      pcVar22 = (char *)sub_00668F50(this_00,(char *)local_8,uVar5,(uint *)ppAVar20);
      local_10 = nullptr;
      if (0 < (int)pcVar22) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          uVar13 = STReplaceLowByte((uint32_t)(pcVar22), (uint8_t)(*(char *)&local_8->vtable));
          local_18 = pcVar22;
          puVar9 = (byte *)(thunk_FUN_0043e420(local_3b8,*(char *)&local_8->vtable));
          pcVar22 = local_c;
          puVar21 = (byte *)(local_19c);
          memmove(puVar21, puVar9, 0x138); /* compiler REP MOVS byte copy */
          /* ST_CALLSITE[0066CC34]: CALL dword ptr [EDX] */
          uVar5 = this_00->slot_00(uVar13,pcVar22);
          iVar4 = 0;
          do {
            uVar19 = 1 << ((byte)iVar4 & 0x1f) & uVar5;
            if (uVar19 < 0x101) {
              iVar8 = local_70;
              if (uVar19 != 0x100) {
                switch(uVar19) {
                case 1:
                  iVar8 = local_f0;
                  break;
                case 2:
                  iVar8 = local_e0;
                  break;
                default:
                  goto cf_continue_loop_0066CD4A;
                case 4:
                  iVar8 = local_d0;
                  break;
                case 8:
                  iVar8 = local_c0;
                  break;
                case 0x10:
                  iVar8 = local_b0;
                  break;
                case 0x20:
                  iVar8 = local_a0;
                  break;
                case 0x40:
                  iVar8 = local_90;
                  break;
                case 0x80:
                  iVar8 = local_80;
                }
              }
cf_common_join_0066CD48:
              local_10 = (char *)((int)local_10 + iVar8);
            }
            else {
              if (0x100000 < uVar19) {
                iVar8 = local_120;
                if (((uVar19 != 0x200000) && (iVar8 = local_110, uVar19 != 0x400000)) &&
                   (iVar8 = local_100, uVar19 != 0x800000)) goto cf_continue_loop_0066CD4A;
                goto cf_common_join_0066CD48;
              }
              iVar8 = local_130;
              if (uVar19 == 0x100000) goto cf_common_join_0066CD48;
              if (uVar19 < 0x40001) {
                iVar8 = local_170;
                if (((uVar19 == 0x40000) || (iVar8 = local_150, uVar19 == 0x10000)) ||
                   (iVar8 = local_140, uVar19 == 0x20000)) goto cf_common_join_0066CD48;
              }
              else {
                iVar8 = local_160;
                if (uVar19 == 0x80000) goto cf_common_join_0066CD48;
              }
            }
cf_continue_loop_0066CD4A:
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x20);
          local_8 = (AiFltClassTy *)&local_8->field_0x4;
          pcVar22 = local_18 + -1;
          local_18 = pcVar22;
        } while (pcVar22 != nullptr);
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
      /* ST_CALLSITE[0066CDF4]: CALL dword ptr [EDX] */
      local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) &&
         /* ST_CALLSITE[0066CE02]: CALL dword ptr [EAX + 0x18] */
         (iVar4 = this_00->slot_18(), iVar4 == 8)) {
        local_EAX_8531 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_8531 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_8531,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      ppAVar20 = local_50;
      /* ST_CALLSITE[0066CE56]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar5 = this_00->slot_00(param_1 + 5);
      /* ST_CALLSITE[0066CE5F]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
      pcVar22 = (char *)sub_00668F50(this_00,(char *)local_8,uVar5,(uint *)ppAVar20);
      local_10 = nullptr;
      if (0 < (int)pcVar22) {
        local_c = param_1 + 10;
        local_8 = (AiFltClassTy *)local_50;
        do {
          uVar13 = STReplaceLowByte((uint32_t)(pcVar22), (uint8_t)(*(char *)&local_8->vtable));
          local_18 = pcVar22;
          puVar9 = (byte *)(thunk_FUN_0043e420(local_628,*(char *)&local_8->vtable));
          pcVar22 = local_c;
          puVar21 = (byte *)(local_19c);
          memmove(puVar21, puVar9, 0x138); /* compiler REP MOVS byte copy */
          /* ST_CALLSITE[0066CEB1]: CALL dword ptr [EDX] */
          uVar5 = this_00->slot_00(uVar13,pcVar22);
          iVar4 = 0;
          do {
            uVar19 = 1 << ((byte)iVar4 & 0x1f) & uVar5;
            if (uVar19 < 0x101) {
              iVar8 = local_78;
              if (uVar19 != 0x100) {
                switch(uVar19) {
                case 1:
                  iVar8 = local_f8;
                  break;
                case 2:
                  iVar8 = local_e8;
                  break;
                default:
                  goto cf_continue_loop_0066CFCA;
                case 4:
                  iVar8 = local_d8;
                  break;
                case 8:
                  iVar8 = local_c8;
                  break;
                case 0x10:
                  iVar8 = local_b8;
                  break;
                case 0x20:
                  iVar8 = local_a8;
                  break;
                case 0x40:
                  iVar8 = local_98;
                  break;
                case 0x80:
                  iVar8 = local_88;
                }
              }
cf_common_join_0066CFC8:
              local_10 = (char *)((int)local_10 + iVar8);
            }
            else {
              if (0x100000 < uVar19) {
                iVar8 = local_128;
                if (((uVar19 != 0x200000) && (iVar8 = local_118, uVar19 != 0x400000)) &&
                   (iVar8 = local_108, uVar19 != 0x800000)) goto cf_continue_loop_0066CFCA;
                goto cf_common_join_0066CFC8;
              }
              iVar8 = local_138;
              if (uVar19 == 0x100000) goto cf_common_join_0066CFC8;
              if (uVar19 < 0x40001) {
                iVar8 = local_178;
                if (((uVar19 == 0x40000) || (iVar8 = local_158, uVar19 == 0x10000)) ||
                   (iVar8 = local_148, uVar19 == 0x20000)) goto cf_common_join_0066CFC8;
              }
              else {
                iVar8 = local_168;
                if (uVar19 == 0x80000) goto cf_common_join_0066CFC8;
              }
            }
cf_continue_loop_0066CFCA:
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x20);
          local_8 = (AiFltClassTy *)&local_8->field_0x4;
          pcVar22 = local_18 + -1;
          local_18 = pcVar22;
        } while (pcVar22 != nullptr);
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
      /* ST_CALLSITE[0066D074]: CALL dword ptr [EDX] */
      local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
      if ((local_8 == (AiFltClassTy *)0x9) &&
         /* ST_CALLSITE[0066D082]: CALL dword ptr [EAX + 0x18] */
         (iVar4 = this_00->slot_18(), iVar4 == 8)) {
        local_EAX_9171 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
        if (local_EAX_9171 != nullptr) {
          Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_9171,0x7f);
        }
        *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
        RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      ppAVar20 = local_50;
      /* ST_CALLSITE[0066D0D6]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar5 = this_00->slot_00(param_1 + 5);
      /* ST_CALLSITE[0066D0DF]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
      pAVar7 = (AiFltClassTy *)sub_00668F50(this_00,(char *)local_8,uVar5,(uint *)ppAVar20);
      pcVar22 = nullptr;
      if (0 < (int)pAVar7) {
        local_c = param_1 + 10;
        ppAVar20 = local_50;
        local_8 = pAVar7;
        do {
          /* ST_CALLSITE[0066D102]: CALL dword ptr [EAX] */
          GVar10 = this_00->slot_00(local_c);
          local_EAX_9288 = thunk_FUN_00677700((int)*ppAVar20,GVar10);
          pcVar22 = pcVar22 + local_EAX_9288;
          ppAVar20 = ppAVar20 + 1;
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
      /* ST_CALLSITE[0066D1A3]: CALL dword ptr [EDX] */
      uVar13 = this_00->slot_00(param_1 + 0x1e);
      /* ST_CALLSITE[0066D1AE]: CALL dword ptr [EDX] */
      uVar13 = this_00->slot_00(param_1 + 0x19,uVar13);
      /* ST_CALLSITE[0066D1B9]: CALL dword ptr [EDX] */
      uVar13 = this_00->slot_00(param_1 + 0x14,uVar13);
      /* ST_CALLSITE[0066D1C4]: CALL dword ptr [EDX] */
      uVar13 = this_00->slot_00(param_1 + 0xf,uVar13);
      pcVar22 = param_1 + 10;
      /* ST_CALLSITE[0066D1CF]: CALL dword ptr [EDX] */
      iVar4 = this_00->slot_00(pcVar22,uVar13);
      pcVar24 = param_1 + 5;
      /* ST_CALLSITE[0066D1DA]: CALL dword ptr [EDX] */
      iVar8 = this_00->slot_00();
      /* ST_CALLSITE[0066D1E2]: CALL dword ptr [EDX] */
      GVar11 = this_00->slot_00();
      uVar12 = thunk_FUN_006777d0(GVar11,(int)param_1,iVar8,pcVar24,iVar4,(int)pcVar22);
      *local_14 = uVar12;
      break;
    default:
      goto cf_common_exit_00670456;
    }
    goto cf_common_exit_00670431;
  }
  switch(static_cast<uint32_t>(STRawWord(iVar4))) {
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
    /* ST_CALLSITE[0066D8DA]: CALL dword ptr [EAX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) &&
       /* ST_CALLSITE[0066D8E8]: CALL dword ptr [EDX + 0x18] */
       (iVar4 = this_00->slot_18(), iVar4 == 8)) {
      local_EAX_11321 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_11321 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_11321,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    ppAVar20 = local_50;
    /* ST_CALLSITE[0066D93B]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar5 = this_00->slot_00(param_1 + 5);
    /* ST_CALLSITE[0066D944]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
    local_EAX_11396 = sub_00668F50(this_00,(char *)local_8,uVar5,(uint *)ppAVar20);
    DAT_00811980 = 0;
    if (0 < local_EAX_11396) {
      local_10 = param_1 + 0x2d;
      local_18 = param_1 + 0x28;
      local_2c = param_1 + 0x23;
      local_1c = param_1 + 0x1e;
      local_24 = param_1 + 0x19;
      local_30 = param_1 + 0x14;
      local_28 = param_1 + 0xf;
      local_c = param_1 + 10;
      ppAVar20 = local_50;
      do {
        uVar33 = 0;
        pcVar31 = thunk_FUN_00677ef0;
        /* ST_CALLSITE[0066D99F]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_10);
        sVar30 = (short)uVar13;
        /* ST_CALLSITE[0066D9AA]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_18);
        sVar29 = (short)uVar13;
        /* ST_CALLSITE[0066D9B5]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_2c);
        sVar28 = (short)uVar13;
        /* ST_CALLSITE[0066D9C0]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_1c);
        sVar27 = (short)uVar13;
        /* ST_CALLSITE[0066D9CB]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_24);
        sVar26 = (short)uVar13;
        /* ST_CALLSITE[0066D9D6]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_30);
        sVar25 = (short)uVar13;
        /* ST_CALLSITE[0066D9E1]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        pbVar14 = (byte *)this_00->slot_08(local_28);
        /* ST_CALLSITE[0066D9ED]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_c);
        /* ST_CALLSITE[0066D9F4]: CALL 0x00403882; direct=00403882 _EnumRCCont */
        _EnumRCCont(*(short *)ppAVar20,(short)uVar13,pbVar14,sVar25,sVar26,sVar27,sVar28,sVar29,
                    sVar30,pcVar31,uVar33);
        ppAVar20 = ppAVar20 + 1;
        local_EAX_11396 = local_EAX_11396 + -1;
      } while (local_EAX_11396 != 0);
    }
    goto cf_common_exit_0066DF5E;
  case 0x7f8:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_11604 = thunk_FUN_00674af0(iVar4);
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
    /* ST_CALLSITE[0066DB24]: CALL dword ptr [EDX] */
    uVar13 = this_00->slot_00(param_1 + 0x23,thunk_FUN_00678200,0);
    /* ST_CALLSITE[0066DB2F]: CALL dword ptr [EDX] */
    uVar13 = this_00->slot_00(param_1 + 0x1e,uVar13);
    /* ST_CALLSITE[0066DB3A]: CALL dword ptr [EDX] */
    uVar13 = this_00->slot_00(param_1 + 0x19,uVar13);
    pcVar22 = param_1 + 0x14;
    /* ST_CALLSITE[0066DB45]: CALL dword ptr [EDX] */
    puVar32 = (undefined *)this_00->slot_00(pcVar22,uVar13);
    sVar28 = (short)param_1;
    sVar30 = sVar28 + 0xf;
    /* ST_CALLSITE[0066DB50]: CALL dword ptr [EDX] */
    uVar13 = this_00->slot_00();
    sVar27 = (short)uVar13;
    sVar29 = sVar28 + 10;
    /* ST_CALLSITE[0066DB5B]: CALL dword ptr [EDX] */
    uVar13 = this_00->slot_00();
    sVar26 = (short)uVar13;
    sVar28 = sVar28 + 5;
    /* ST_CALLSITE[0066DB66]: CALL dword ptr [EDX + 0x8] */
    uVar13 = this_00->slot_08();
    sVar25 = (short)uVar13;
    /* ST_CALLSITE[0066DB6F]: CALL dword ptr [EDX] */
    uVar13 = this_00->slot_00();
    /* ST_CALLSITE[0066DB72]: CALL 0x00402932; direct=00402932 _EnumArt */
    _EnumArt((short)uVar13,(byte *)param_1,sVar25,sVar28,sVar26,sVar29,sVar27,sVar30,puVar32,pcVar22
            );
    goto cf_common_exit_0066DCED;
  case 0x7f9:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_11977 = thunk_FUN_00674af0(iVar4);
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
    uVar33 = 0;
    pcVar31 = thunk_FUN_00678870;
    /* ST_CALLSITE[0066DC97]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 0x23);
    sVar30 = (short)uVar13;
    /* ST_CALLSITE[0066DCA2]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 0x1e);
    sVar29 = (short)uVar13;
    /* ST_CALLSITE[0066DCAD]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 0x19);
    sVar28 = (short)uVar13;
    /* ST_CALLSITE[0066DCB8]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 0x14);
    sVar27 = (short)uVar13;
    /* ST_CALLSITE[0066DCC3]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 0xf);
    sVar26 = (short)uVar13;
    /* ST_CALLSITE[0066DCCE]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 10);
    sVar25 = (short)uVar13;
    /* ST_CALLSITE[0066DCD6]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1);
    cVar3 = (char)uVar13;
    /* ST_CALLSITE[0066DCE1]: CALL dword ptr [EAX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    pbVar14 = (byte *)this_00->slot_08(param_1 + 5);
    /* ST_CALLSITE[0066DCE5]: CALL 0x004013f2; direct=004013F2 _EnumDest */
    _EnumDest(pbVar14,cVar3,sVar25,sVar26,sVar27,sVar28,sVar29,sVar30,pcVar31,uVar33);
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
    /* ST_CALLSITE[0066DE26]: CALL dword ptr [EAX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) &&
       /* ST_CALLSITE[0066DE34]: CALL dword ptr [EDX + 0x18] */
       (iVar4 = this_00->slot_18(), iVar4 == 8)) {
      local_EAX_12677 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_12677 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_12677,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    ppAVar20 = local_50;
    /* ST_CALLSITE[0066DE87]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar5 = this_00->slot_00(param_1 + 5);
    /* ST_CALLSITE[0066DE90]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
    local_EAX_12752 = sub_00668F50(this_00,(char *)local_8,uVar5,(uint *)ppAVar20);
    DAT_00811980 = 0;
    if (0 < local_EAX_12752) {
      local_8 = (AiFltClassTy *)(param_1 + 0x32);
      local_10 = param_1 + 0x2d;
      local_18 = param_1 + 0x28;
      local_2c = param_1 + 0x23;
      local_1c = param_1 + 0x1e;
      local_24 = param_1 + 0x19;
      local_30 = param_1 + 0x14;
      local_28 = param_1 + 0xf;
      local_c = param_1 + 10;
      ppAVar20 = local_50;
      do {
        uVar33 = 0;
        pcVar31 = thunk_FUN_00678560;
        /* ST_CALLSITE[0066DEF1]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_8);
        sVar30 = (short)uVar13;
        /* ST_CALLSITE[0066DEFC]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_10);
        sVar29 = (short)uVar13;
        /* ST_CALLSITE[0066DF07]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_18);
        sVar28 = (short)uVar13;
        /* ST_CALLSITE[0066DF12]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_2c);
        sVar27 = (short)uVar13;
        /* ST_CALLSITE[0066DF1D]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_1c);
        sVar26 = (short)uVar13;
        /* ST_CALLSITE[0066DF28]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_24);
        sVar25 = (short)uVar13;
        /* ST_CALLSITE[0066DF33]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        pbVar14 = (byte *)this_00->slot_08(local_30);
        /* ST_CALLSITE[0066DF3F]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_28);
        cVar3 = (char)uVar13;
        /* ST_CALLSITE[0066DF4A]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
        uVar13 = this_00->slot_00(local_c);
        /* ST_CALLSITE[0066DF50]: CALL 0x00403675; direct=00403675 _EnumMines */
        _EnumMines((int)*ppAVar20,(short)uVar13,cVar3,pbVar14,sVar25,sVar26,sVar27,sVar28,sVar29,
                   sVar30,pcVar31,uVar33);
        ppAVar20 = ppAVar20 + 1;
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
    uVar33 = 0;
    pcVar31 = thunk_FUN_00677bc0;
    /* ST_CALLSITE[0066D769]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 0x1e);
    sVar30 = (short)uVar13;
    /* ST_CALLSITE[0066D774]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 0x19);
    sVar29 = (short)uVar13;
    /* ST_CALLSITE[0066D77F]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 0x14);
    sVar28 = (short)uVar13;
    /* ST_CALLSITE[0066D78A]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 0xf);
    sVar27 = (short)uVar13;
    /* ST_CALLSITE[0066D795]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 10);
    sVar26 = (short)uVar13;
    /* ST_CALLSITE[0066D7A0]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 5);
    sVar25 = (short)uVar13;
    /* ST_CALLSITE[0066D7A8]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1);
    /* ST_CALLSITE[0066D7AB]: CALL 0x00404142; direct=00404142 _EnumRCField */
    _EnumRCField((short)uVar13,sVar25,sVar26,sVar27,sVar28,sVar29,sVar30,pcVar31,uVar33);
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
    /* ST_CALLSITE[0066DFEF]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    /* ST_CALLSITE[0066DFFC]: CALL dword ptr [EAX] */
    local_10 = (char *)this_00->slot_00(param_1 + 5);
    /* ST_CALLSITE[0066E009]: CALL dword ptr [EDX] */
    iVar4 = this_00->slot_00(param_1 + 10);
    switch(local_8) {
    case 0xdc:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar4) && (iVar4 < 4)) {
          local_c = *(char **)(&DAT_00854350 + (iVar4 + (int)local_10 * 3) * 4);
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
    case 0xdd:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar4) && (iVar4 < 4)) {
          local_c = *(char **)(&DAT_007e19f4 + (iVar4 + (int)local_10 * 3) * 4);
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
    case 0xde:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar4) && (iVar4 < 4)) {
          local_c = *(char **)(&DAT_007e22a0 + (iVar4 + (int)local_10 * 3) * 4);
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
    case 0xe2:
      if (((int)local_10 < 0x32) || (0x73 < (int)local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((0 < iVar4) && (iVar4 < 4)) {
          local_c = *(char **)(&DAT_007e2f04 + (iVar4 + (int)local_10 * 3) * 4);
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
      local_EAX_13666 = thunk_FUN_00674af0(iVar4);
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
    /* ST_CALLSITE[0066E31C]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) &&
       /* ST_CALLSITE[0066E32A]: CALL dword ptr [EAX + 0x18] */
       (iVar4 = this_00->slot_18(), iVar4 == 8)) {
      local_EAX_13947 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_13947 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_13947,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_10 = nullptr;
    /* ST_CALLSITE[0066E385]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
    local_EAX_14021 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_14021 == 1) {
      puVar32 = nullptr;
      puVar15 = nullptr;
      pcVar31 = thunk_FUN_00677200;
      sVar25 = -1;
      sVar26 = -1;
      sVar27 = -1;
      sVar28 = 0;
      sVar29 = 0;
      sVar30 = 0;
      cVar3 = -1;
      /* ST_CALLSITE[0066E3B2]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      pbVar14 = (byte *)this_00->slot_08(param_1 + 5);
      /* ST_CALLSITE[0066E3C1]: CALL 0x004012f8; direct=004012F8 _EnumPlObj */
      local_EAX_14081 =
           _EnumPlObj(local_50[0],0,0x3fffffff,pbVar14,cVar3,sVar30,sVar29,sVar28,sVar27,sVar26,
                      sVar25,pcVar31,puVar15,puVar32);
      if ((local_EAX_14081 == -1) && (g_fish_00811984 != nullptr)) {
        local_10 = (char *)0x1;
        /* ST_CALLSITE[0066E3EE]: CALL dword ptr [EDX] */
        iVar4 = this_00->slot_00(param_1 + 10);
        /* ST_CALLSITE[0066E3FA]: CALL dword ptr [EDX] */
        local_8 = (AiFltClassTy *)this_00->slot_00(param_1 + 0xf);
        /* ST_CALLSITE[0066E407]: CALL dword ptr [EDX] */
        local_c = (char *)this_00->slot_00(param_1 + 0x14);
        /* ST_CALLSITE[0066E414]: CALL dword ptr [EDX] */
        iVar8 = this_00->slot_00(param_1 + 0x19);
        if ((-1 < iVar4) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          /* ST_CALLSITE[0066E43C]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0(g_fish_00811984,&local_5a,&local_52,&local_58);
          /* ST_CALLSITE[0066E44B]: CALL dword ptr [EAX + 0x20] */
          this_00->slot_20(iVar4,(int)local_5a);
          /* ST_CALLSITE[0066E45B]: CALL dword ptr [EDX + 0x20]; [STIndirectCallsiteApplier] exact slot 0x20; mode=dispatch; signature=__thiscall;/void;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4;/undefined4 */
          this_00->slot_20(local_8,(int)local_52);
          /* ST_CALLSITE[0066E46B]: CALL dword ptr [EDX + 0x20] */
          this_00->slot_20(local_c,(int)local_58);
        }
        if (-1 < iVar8) {
          /* ST_CALLSITE[0066E47A]: CALL dword ptr [EDX + 0x11c] */
          uVar13 = g_fish_00811984->vfunc_11C();
          /* ST_CALLSITE[0066E486]: CALL dword ptr [EDX + 0x20] */
          this_00->slot_20(iVar8,uVar13);
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
      local_EAX_14397 = thunk_FUN_00674af0(iVar4);
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
    /* ST_CALLSITE[0066E5F7]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) &&
       /* ST_CALLSITE[0066E605]: CALL dword ptr [EAX + 0x18] */
       (iVar4 = this_00->slot_18(), iVar4 == 8)) {
      local_EAX_14678 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_14678 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_14678,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_10 = nullptr;
    /* ST_CALLSITE[0066E660]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
    local_EAX_14752 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_14752 == 1) {
      uVar13 = 0;
      pcVar31 = thunk_FUN_00677f20;
      sVar25 = -1;
      sVar26 = -1;
      sVar27 = -1;
      sVar28 = 0;
      sVar29 = 0;
      sVar30 = 0;
      /* ST_CALLSITE[0066E689]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      pbVar14 = (byte *)this_00->slot_08(param_1 + 5);
      /* ST_CALLSITE[0066E693]: CALL 0x00403882; direct=00403882 _EnumRCCont */
      local_EAX_14803 =
           _EnumRCCont((short)local_50[0],0,pbVar14,sVar30,sVar29,sVar28,sVar27,sVar26,sVar25,
                       pcVar31,uVar13);
      if ((local_EAX_14803 == -1) && (g_fish_00811984 != nullptr)) {
        local_10 = (char *)0x1;
        /* ST_CALLSITE[0066E6C0]: CALL dword ptr [EDX] */
        iVar4 = this_00->slot_00(param_1 + 10);
        /* ST_CALLSITE[0066E6CC]: CALL dword ptr [EDX] */
        local_8 = (AiFltClassTy *)this_00->slot_00(param_1 + 0xf);
        /* ST_CALLSITE[0066E6D9]: CALL dword ptr [EDX] */
        local_c = (char *)this_00->slot_00(param_1 + 0x14);
        /* ST_CALLSITE[0066E6E6]: CALL dword ptr [EDX] */
        iVar8 = this_00->slot_00(param_1 + 0x19);
        if ((-1 < iVar4) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          /* ST_CALLSITE[0066E70E]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
          STFishC::sub_004162F0(g_fish_00811984,&local_5c,&local_56,&local_54);
          /* ST_CALLSITE[0066E71D]: CALL dword ptr [EAX + 0x20] */
          this_00->slot_20(iVar4,(int)local_5c);
          /* ST_CALLSITE[0066E72D]: CALL dword ptr [EDX + 0x20]; [STIndirectCallsiteApplier] exact slot 0x20; mode=dispatch; signature=__thiscall;/void;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4;/undefined4 */
          this_00->slot_20(local_8,(int)local_56);
          /* ST_CALLSITE[0066E73D]: CALL dword ptr [EDX + 0x20] */
          this_00->slot_20(local_c,(int)local_54);
        }
        if (-1 < iVar8) {
          /* ST_CALLSITE[0066E74C]: CALL dword ptr [EDX + 0x11c] */
          uVar13 = g_fish_00811984->vfunc_11C();
          /* ST_CALLSITE[0066E758]: CALL dword ptr [EDX + 0x20] */
          this_00->slot_20(iVar8,uVar13);
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
      local_EAX_15119 = thunk_FUN_00674af0(iVar4);
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
    uVar13 = 0;
    pcVar31 = thunk_FUN_00678220;
    sVar25 = -1;
    sVar26 = -1;
    sVar27 = -1;
    sVar28 = 0;
    local_10 = nullptr;
    sVar29 = 0;
    sVar30 = 0;
    /* ST_CALLSITE[0066E899]: CALL dword ptr [EAX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    pbVar14 = (byte *)this_00->slot_08(param_1);
    /* ST_CALLSITE[0066E89F]: CALL 0x00402932; direct=00402932 _EnumArt */
    local_EAX_15327 = _EnumArt(0,pbVar14,sVar30,sVar29,sVar28,sVar27,sVar26,sVar25,pcVar31,uVar13);
    if ((local_EAX_15327 == -1) && (g_fish_00811984 != nullptr)) {
      local_10 = (char *)0x1;
      /* ST_CALLSITE[0066E8CC]: CALL dword ptr [EDX] */
      iVar4 = this_00->slot_00(param_1 + 5);
      /* ST_CALLSITE[0066E8D8]: CALL dword ptr [EDX] */
      local_8 = (AiFltClassTy *)this_00->slot_00(param_1 + 10);
      /* ST_CALLSITE[0066E8E5]: CALL dword ptr [EDX] */
      local_c = (char *)this_00->slot_00(param_1 + 0xf);
      /* ST_CALLSITE[0066E8F2]: CALL dword ptr [EDX] */
      iVar8 = this_00->slot_00(param_1 + 0x14);
      if ((-1 < iVar4) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
        /* ST_CALLSITE[0066E91A]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
        STFishC::sub_004162F0(g_fish_00811984,&local_60,&local_5e,(short *)((int)&local_28 + 2));
        /* ST_CALLSITE[0066E929]: CALL dword ptr [EAX + 0x20] */
        this_00->slot_20(iVar4,(int)local_60);
        /* ST_CALLSITE[0066E939]: CALL dword ptr [EDX + 0x20]; [STIndirectCallsiteApplier] exact slot 0x20; mode=dispatch; signature=__thiscall;/void;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4;/undefined4 */
        this_00->slot_20(local_8,(int)local_5e);
        /* ST_CALLSITE[0066E949]: CALL dword ptr [EDX + 0x20] */
        this_00->slot_20(local_c,(int)STPiece<2,2>(local_28));
      }
      if (-1 < iVar8) {
        /* ST_CALLSITE[0066E958]: CALL dword ptr [EDX + 0x11c] */
        uVar13 = g_fish_00811984->vfunc_11C();
        /* ST_CALLSITE[0066E964]: CALL dword ptr [EDX + 0x20] */
        this_00->slot_20(iVar8,uVar13);
      }
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)local_10;
    break;
  case 0x80f:
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      local_EAX_15560 = thunk_FUN_00674af0(iVar4);
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
    uVar13 = 0;
    pcVar31 = thunk_FUN_00678890;
    sVar25 = -1;
    sVar26 = -1;
    sVar27 = -1;
    sVar28 = 0;
    sVar29 = 0;
    local_10 = nullptr;
    sVar30 = 0;
    cVar3 = -1;
    /* ST_CALLSITE[0066EA54]: CALL dword ptr [EAX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    pbVar14 = (byte *)this_00->slot_08(param_1);
    /* ST_CALLSITE[0066EA58]: CALL 0x004013f2; direct=004013F2 _EnumDest */
    local_EAX_15768 =
         _EnumDest(pbVar14,cVar3,sVar30,sVar29,sVar28,sVar27,sVar26,sVar25,pcVar31,uVar13);
    if ((local_EAX_15768 == -1) && (g_fish_00811984 != nullptr)) {
      local_10 = (char *)0x1;
      /* ST_CALLSITE[0066EA85]: CALL dword ptr [EDX] */
      iVar4 = this_00->slot_00(param_1 + 5);
      /* ST_CALLSITE[0066EA91]: CALL dword ptr [EDX] */
      local_8 = (AiFltClassTy *)this_00->slot_00(param_1 + 10);
      /* ST_CALLSITE[0066EA9E]: CALL dword ptr [EDX] */
      local_c = (char *)this_00->slot_00(param_1 + 0xf);
      /* ST_CALLSITE[0066EAAB]: CALL dword ptr [EDX] */
      iVar8 = this_00->slot_00(param_1 + 0x14);
      if ((-1 < iVar4) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
        /* ST_CALLSITE[0066EAD3]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        STFishC::sub_004162B0
                  (g_fish_00811984,(short *)((int)&local_30 + 2),(short *)((int)&local_24 + 2),
                   (short *)((int)&local_1c + 2));
        /* ST_CALLSITE[0066EAE2]: CALL dword ptr [EAX + 0x20] */
        this_00->slot_20(iVar4,(int)STPiece<2,2>(local_30));
        /* ST_CALLSITE[0066EAF2]: CALL dword ptr [EDX + 0x20]; [STIndirectCallsiteApplier] exact slot 0x20; mode=dispatch; signature=__thiscall;/void;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4;/undefined4 */
        this_00->slot_20(local_8,(int)STPiece<2,2>(local_24));
        /* ST_CALLSITE[0066EB02]: CALL dword ptr [EDX + 0x20] */
        this_00->slot_20(local_c,(int)STPiece<2,2>(local_1c));
      }
      if (-1 < iVar8) {
        /* ST_CALLSITE[0066EB11]: CALL dword ptr [EDX + 0x11c] */
        uVar13 = g_fish_00811984->vfunc_11C();
        /* ST_CALLSITE[0066EB1D]: CALL dword ptr [EDX + 0x20] */
        this_00->slot_20(iVar8,uVar13);
      }
    }
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)local_10;
    break;
  case 0x810:
    if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
      local_EAX_16001 = thunk_FUN_00674af0(iVar4);
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
    /* ST_CALLSITE[0066EC3B]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if ((local_8 == (AiFltClassTy *)0x9) &&
       /* ST_CALLSITE[0066EC49]: CALL dword ptr [EAX + 0x18] */
       (iVar4 = this_00->slot_18(), iVar4 == 8)) {
      local_EAX_16282 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_16282 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_16282,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_1c = nullptr;
    /* ST_CALLSITE[0066ECA4]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
    local_EAX_16356 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_16356 == 1) {
      uVar13 = 0;
      pcVar31 = thunk_FUN_00678580;
      sVar25 = -1;
      sVar26 = -1;
      sVar27 = -1;
      sVar28 = 0;
      sVar29 = 0;
      sVar30 = 0;
      /* ST_CALLSITE[0066ECCD]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      pbVar14 = (byte *)this_00->slot_08(param_1 + 5);
      /* ST_CALLSITE[0066ECD9]: CALL 0x00403675; direct=00403675 _EnumMines */
      local_EAX_16409 =
           _EnumMines((int)local_50[0],0,-1,pbVar14,sVar30,sVar29,sVar28,sVar27,sVar26,sVar25,
                      pcVar31,uVar13);
      if ((local_EAX_16409 == -1) && (g_fish_00811984 != nullptr)) {
        local_1c = (char *)0x1;
        /* ST_CALLSITE[0066ED06]: CALL dword ptr [EDX] */
        iVar4 = this_00->slot_00(param_1 + 10);
        /* ST_CALLSITE[0066ED12]: CALL dword ptr [EDX] */
        local_8 = (AiFltClassTy *)this_00->slot_00(param_1 + 0xf);
        /* ST_CALLSITE[0066ED1F]: CALL dword ptr [EDX] */
        local_c = (char *)this_00->slot_00(param_1 + 0x14);
        /* ST_CALLSITE[0066ED2C]: CALL dword ptr [EDX] */
        iVar8 = this_00->slot_00(param_1 + 0x19);
        if ((-1 < iVar4) || ((-1 < (int)local_8 || (-1 < (int)local_c)))) {
          /* ST_CALLSITE[0066ED54]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0
                    (g_fish_00811984,(short *)((int)&local_2c + 2),(short *)((int)&local_18 + 2),
                     (short *)((int)&local_10 + 2));
          /* ST_CALLSITE[0066ED63]: CALL dword ptr [EAX + 0x20] */
          this_00->slot_20(iVar4,(int)STPiece<2,2>(local_2c));
          /* ST_CALLSITE[0066ED73]: CALL dword ptr [EDX + 0x20]; [STIndirectCallsiteApplier] exact slot 0x20; mode=dispatch; signature=__thiscall;/void;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4;/undefined4 */
          this_00->slot_20(local_8,(int)STPiece<2,2>(local_18));
          /* ST_CALLSITE[0066ED83]: CALL dword ptr [EDX + 0x20] */
          this_00->slot_20(local_c,(int)STPiece<2,2>(local_10));
        }
        if (-1 < iVar8) {
          /* ST_CALLSITE[0066ED92]: CALL dword ptr [EDX + 0x11c] */
          uVar13 = g_fish_00811984->vfunc_11C();
          /* ST_CALLSITE[0066ED9E]: CALL dword ptr [EDX + 0x20] */
          this_00->slot_20(iVar8,uVar13);
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
    /* ST_CALLSITE[0066EE7A]: CALL dword ptr [EDX] */
    local_c = (char *)this_00->slot_00(param_1);
    /* ST_CALLSITE[0066EE88]: CALL dword ptr [EAX + 0x18] */
    if ((local_c == (char *)0x9) && (iVar4 = this_00->slot_18(), iVar4 == 8)) {
      local_EAX_16857 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_16857 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_16857,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_8 = nullptr;
    /* ST_CALLSITE[0066EEE3]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
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
    /* ST_CALLSITE[0066F444]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
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
    /* ST_CALLSITE[0066F00C]: CALL dword ptr [EDX] */
    local_10 = (char *)this_00->slot_00(param_1);
    /* ST_CALLSITE[0066F019]: CALL dword ptr [EAX] */
    local_c = (char *)this_00->slot_00(param_1 + 5);
    /* ST_CALLSITE[0066F026]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1 + 10);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      local_EAX_17282 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17282 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_17282,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_CALLSITE[0066F083]: CALL dword ptr [EDX + 0x18] */
    if ((local_10 == (char *)0x9) && (iVar4 = this_00->slot_18(), iVar4 == 8)) {
      local_EAX_17364 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17364 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_17364,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_18 = nullptr;
    /* ST_CALLSITE[0066F0DD]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
    local_EAX_17437 = sub_00668F50(this_00,local_10,0,(uint *)local_50);
    pAVar7 = local_8;
    pcVar22 = local_c;
    if (local_EAX_17437 == 1) {
      sVar30 = *(short *)(param_1 + param_2 * 5 + 1);
      if (sVar30 == 0x819) {
        iVar4 = thunk_FUN_004e60d0((int)local_50[0],(int)local_c);
        bVar2 = (int)local_8 <= iVar4;
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = (uint)bVar2;
        break;
      }
      if (sVar30 == 0x81b) {
        local_EAX_17589 = thunk_FUN_004e5990((int)local_50[0],(uint)local_c,(int)local_8);
        local_14 = Library::DKW::LIB::MemAllocClear(4);
        *local_14 = (uint)(local_EAX_17589 != 0);
        break;
      }
      if (sVar30 == 0x81c) {
        local_EAX_17500 = thunk_FUN_004e5cc0((int)local_50[0],(uint)local_c,(int)local_8);
        if ((local_EAX_17500 == 0) &&
           (iVar4 = thunk_FUN_004e7f20((int)local_50[0],(int)pcVar22,(int)pAVar7), iVar4 == 0)) {
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
    uVar5 = (uint)local_18;
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = uVar5;
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
    /* ST_CALLSITE[0066F286]: CALL dword ptr [EAX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    /* ST_CALLSITE[0066F293]: CALL dword ptr [EDX] */
    local_c = (char *)this_00->slot_00(param_1 + 5);
    if (((int)local_c < 0) || (0x9a < (int)local_c)) {
      local_EAX_17900 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17900 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_17900,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    if ((local_8 == (AiFltClassTy *)0x9) &&
       /* ST_CALLSITE[0066F2ED]: CALL dword ptr [EDX + 0x18] */
       (iVar4 = this_00->slot_18(), iVar4 == 8)) {
      local_EAX_17982 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_17982 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_17982,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    local_10 = nullptr;
    /* ST_CALLSITE[0066F347]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
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
      uVar5 = (uint)local_10;
      local_14 = Library::DKW::LIB::MemAllocClear(4);
      *local_14 = uVar5;
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
    /* ST_CALLSITE[0066F522]: CALL dword ptr [EDX] */
    local_c = (char *)this_00->slot_00(param_1);
    /* ST_CALLSITE[0066F52F]: CALL dword ptr [EAX] */
    iVar4 = this_00->slot_00(param_1 + 5);
    local_8 = (AiFltClassTy *)(iVar4 + -1);
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
      local_EAX_18749 = thunk_FUN_00674af0(iVar4);
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
    /* ST_CALLSITE[0066F6AD]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) &&
        /* ST_CALLSITE[0066F6BB]: CALL dword ptr [EAX + 0x18] */
        (iVar4 = this_00->slot_18(), iVar4 == 8)) ||
       (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_18965 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_18965 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_18965,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_CALLSITE[0066F718]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
    local_EAX_19032 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_19032 != 1) {
      local_EAX_19051 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_19051 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_19051,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_CALLSITE[0066F76A]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    pbVar14 = (byte *)this_00->slot_08(param_1 + 10);
    /* ST_CALLSITE[0066F776]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    pbVar16 = (byte *)this_00->slot_08(param_1 + 5);
    local_EAX_19136 = thunk_FUN_0066ab60((byte)local_50[0],pbVar16,pbVar14);
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    if (local_EAX_19136 == 0) {
      *local_14 = 0xffffffff;
    }
    else {
      *local_14 = (uint)STField<ushort>(local_EAX_19136,0x7D);
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
    /* ST_CALLSITE[0066F80F]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) &&
        /* ST_CALLSITE[0066F81D]: CALL dword ptr [EAX + 0x18] */
        (iVar4 = this_00->slot_18(), iVar4 == 8)) ||
       (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_19319 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_19319 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_19319,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_CALLSITE[0066F87A]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
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
    /* ST_CALLSITE[0066F8D3]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 5);
    this_01 = (AnonReceiver_0065DA50 *)thunk_FUN_0066ac80((char)local_50[0],(ushort)uVar13);
    pAVar7 = local_50[0];
    pcVar22 = local_c;
    if (this_01 != nullptr) {
      /* ST_CALLSITE[0066F8EF]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar13 = this_00->slot_00(param_1 + 0xf);
      cVar3 = (char)uVar13;
      /* ST_CALLSITE[0066F8FA]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      iVar4 = this_00->slot_00(param_1 + 10);
      pcVar22 = (char *)AnonReceiver_0065DA50::thunk_FUN_0065da50(this_01,iVar4,cVar3);
      pAVar7 = local_50[0];
      local_c = pcVar22;
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
    /* ST_CALLSITE[0066F989]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) &&
        /* ST_CALLSITE[0066F997]: CALL dword ptr [EAX + 0x18] */
        (iVar4 = this_00->slot_18(), iVar4 == 8)) ||
       (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_19697 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_19697 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_19697,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_CALLSITE[0066F9F4]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
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
    /* ST_CALLSITE[0066FA4D]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 5);
    pAVar17 = (AiFltClassTy *)thunk_FUN_0066ac80((char)local_50[0],(ushort)uVar13);
    pAVar7 = local_50[0];
    pcVar22 = local_c;
    if (pAVar17 != nullptr) {
      /* ST_CALLSITE[0066FA6D]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar13 = this_00->slot_00(param_1 + 0xf);
      cVar3 = (char)uVar13;
      /* ST_CALLSITE[0066FA78]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/ulonglong;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar23 = this_00->slot_00(param_1 + 10);
      pcVar22 = (char *)thunk_FUN_0065dc00(pAVar17,(int)(uVar23 >> 0x20),(uint)uVar23,cVar3);
      pAVar7 = local_50[0];
      local_c = pcVar22;
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
    /* ST_CALLSITE[0066FAE9]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) &&
        /* ST_CALLSITE[0066FAF7]: CALL dword ptr [EAX + 0x18] */
        (iVar4 = this_00->slot_18(), iVar4 == 8)) ||
       (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_20049 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_20049 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_20049,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_CALLSITE[0066FB54]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
    local_EAX_20116 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_20116 != 1) {
      local_EAX_20135 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_20135 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_20135,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_CALLSITE[0066FBA9]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 5);
    local_EAX_20210 = thunk_FUN_0066ac80((char)local_50[0],(ushort)uVar13);
    pcVar22 = (char *)0xffffffff;
    if (local_EAX_20210 != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar22 = *(char **)(local_EAX_20210 + 0xeb);
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
    /* ST_CALLSITE[0066FD1F]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) &&
        /* ST_CALLSITE[0066FD2D]: CALL dword ptr [EAX + 0x18] */
        (iVar4 = this_00->slot_18(), iVar4 == 8)) ||
       (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_20615 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_20615 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_20615,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_CALLSITE[0066FD8A]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
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
    /* ST_CALLSITE[0066FDE3]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 5);
    pAVar17 = (AiFltClassTy *)thunk_FUN_0066ac80((char)local_50[0],(ushort)uVar13);
    pAVar7 = local_50[0];
    pcVar22 = local_c;
    if (pAVar17 != nullptr) {
      /* ST_CALLSITE[0066FE03]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar13 = this_00->slot_00(param_1 + 0x37);
      sVar30 = (short)uVar13;
      /* ST_CALLSITE[0066FE0E]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar13 = this_00->slot_00(param_1 + 0x32);
      sVar29 = (short)uVar13;
      /* ST_CALLSITE[0066FE19]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar13 = this_00->slot_00(param_1 + 0x2d);
      sVar28 = (short)uVar13;
      /* ST_CALLSITE[0066FE24]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar13 = this_00->slot_00(param_1 + 0x28);
      sVar27 = (short)uVar13;
      /* ST_CALLSITE[0066FE2F]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar13 = this_00->slot_00(param_1 + 0x23);
      sVar26 = (short)uVar13;
      /* ST_CALLSITE[0066FE3A]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar13 = this_00->slot_00(param_1 + 0x1e);
      sVar25 = (short)uVar13;
      /* ST_CALLSITE[0066FE45]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      pbVar14 = (byte *)this_00->slot_08(param_1 + 0x19);
      /* ST_CALLSITE[0066FE51]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar13 = this_00->slot_00(param_1 + 0x14);
      cVar3 = (char)uVar13;
      /* ST_CALLSITE[0066FE5C]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar5 = this_00->slot_00(param_1 + 0xf);
      /* ST_CALLSITE[0066FE67]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/ulonglong;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar23 = this_00->slot_00(param_1 + 10);
      pcVar22 = (char *)thunk_FUN_0065dd30(pAVar17,(int)(uVar23 >> 0x20),(uint)uVar23,uVar5,cVar3,
                                           pbVar14,sVar25,sVar26,sVar27,sVar28,sVar29,sVar30);
      pAVar7 = local_50[0];
      local_c = pcVar22;
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
    /* ST_CALLSITE[0066FF23]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) &&
        /* ST_CALLSITE[0066FF31]: CALL dword ptr [EAX + 0x18] */
        (iVar4 = this_00->slot_18(), iVar4 == 8)) ||
       (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_21131 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21131 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_21131,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_CALLSITE[0066FF8E]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
    local_EAX_21198 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_21198 != 1) {
      local_EAX_21217 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21217 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_21217,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    puVar15 = local_280;
    local_8 = nullptr;
    /* ST_CALLSITE[0066FFEE]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar5 = this_00->slot_00(param_1 + 0xf);
    /* ST_CALLSITE[0066FFF9]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    pcVar22 = (char *)this_00->slot_00(param_1 + 10);
    /* ST_CALLSITE[0066FFFE]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
    local_EAX_21310 = sub_00668F50(this_00,pcVar22,uVar5,puVar15);
    if (0 < local_EAX_21310) {
      puVar15 = local_280;
      do {
        uVar5 = *puVar15;
        puVar15 = puVar15 + 1;
        local_EAX_21310 = local_EAX_21310 + -1;
        local_8 = (AiFltClassTy *)((uint)local_8 | 1 << ((byte)uVar5 & 0x1f));
      } while (local_EAX_21310 != 0);
    }
    local_c = (char *)0xffffffff;
    /* ST_CALLSITE[00670033]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 5);
    local_EAX_21372 = thunk_FUN_0066ac80((char)local_50[0],(ushort)uVar13);
    pcVar22 = local_c;
    if (local_EAX_21372 != 0) {
      /* ST_CALLSITE[0067004F]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      pbVar14 = (byte *)this_00->slot_08(param_1 + 0x23);
      /* ST_CALLSITE[0067005B]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar13 = this_00->slot_00(param_1 + 0x1e);
      cVar3 = (char)uVar13;
      /* ST_CALLSITE[00670066]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar5 = this_00->slot_00(param_1 + 0x19);
      /* ST_CALLSITE[00670071]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/ulonglong;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar23 = this_00->slot_00(param_1 + 0x14);
      pcVar22 = (char *)thunk_FUN_0065e070(local_EAX_21372,(int)(uVar23 >> 0x20),(uint)local_8,
                                           (uint)uVar23,uVar5,cVar3,pbVar14);
      local_c = pcVar22;
    }
LAB_0066fbc1:
    if ((int)pcVar22 < 0) {
      Library::MSVCRT::_strncpy(&this_00->field_0x4,&CHAR_00h_008016a0,0x7f);
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
    /* ST_CALLSITE[006700FD]: CALL dword ptr [EAX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) &&
        /* ST_CALLSITE[0067010B]: CALL dword ptr [EDX + 0x18] */
        (iVar4 = this_00->slot_18(), iVar4 == 8)) ||
       (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_21605 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21605 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_21605,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_CALLSITE[00670167]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
    local_EAX_21671 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_21671 != 1) {
      local_EAX_21690 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_21690 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_21690,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_CALLSITE[006701BB]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 5);
    local_8 = (AiFltClassTy *)thunk_FUN_0066ac80((char)local_50[0],(ushort)uVar13);
    pAVar7 = local_50[0];
    pcVar22 = (char *)0xffffffff;
    if (local_8 != nullptr) {
      memset(&local_21c, 0, 0x4a); /* compiler bulk-zero initialization */
      iVar4 = 0;
      /* ST_CALLSITE[006701ED]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      local_21c = this_00->slot_00(param_1 + 10);
      memset(local_1d0, 0, 0x34); /* compiler bulk-zero initialization */
      iVar4 = 0;
      local_1c6 = &local_21c;
      local_218 = 0xffff;
      local_214 = 0xfffffff0;
      local_210 = 0xffff;
      local_1de = 1;
      local_1d0[0] = 0x68;
      /* ST_CALLSITE[00670247]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
      AiFltClassTy::GetAiMess(local_8,local_1d0);
      pAVar7 = local_50[0];
      pcVar22 = (char *)(uint)('\0' < local_1c8);
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
    /* ST_CALLSITE[006702D3]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) &&
        /* ST_CALLSITE[006702E1]: CALL dword ptr [EAX + 0x18] */
        (iVar4 = this_00->slot_18(), iVar4 == 8)) ||
       (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_22075 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_22075 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_22075,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_CALLSITE[0067033E]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
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
    /* ST_CALLSITE[00670397]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
    uVar13 = this_00->slot_00(param_1 + 5);
    pAVar18 = (AnonShape_0065E360_B94C37CB *)thunk_FUN_0066ac80((char)local_50[0],(ushort)uVar13);
    pAVar7 = local_50[0];
    pcVar22 = local_c;
    if (pAVar18 != nullptr) {
      /* ST_CALLSITE[006703B3]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      this_00->slot_00(param_1 + 0x19);
      /* ST_CALLSITE[006703BE]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      iVar4 = this_00->slot_00(param_1 + 0x14);
      /* ST_CALLSITE[006703C9]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      iVar8 = this_00->slot_00(param_1 + 0xf);
      /* ST_CALLSITE[006703D4]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/ulonglong;pointer:/SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970;/undefined4 */
      uVar23 = this_00->slot_00(param_1 + 10);
      pcVar22 = (char *)thunk_FUN_0065e450(pAVar18,(int)(uVar23 >> 0x20),
                                           (Global_sub_0065E450_param_3Enum)uVar23,iVar8,iVar4);
      pAVar7 = local_50[0];
      local_c = pcVar22;
    }
joined_r0x006703e6:
    if ((int)pcVar22 < 0) {
      Library::MSVCRT::_strncpy(&this_00->field_0x4,&CHAR_00h_008016a0,0x7f);
      *(AiFltClassTy **)&this_00->field_0x84 = pAVar7;
LAB_0067041b:
      RaiseInternalException(-0xaa,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
cf_common_exit_00670425:
    local_14 = Library::DKW::LIB::MemAllocClear(4);
    *local_14 = (uint)pcVar22;
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
    /* ST_CALLSITE[0066D4D7]: CALL dword ptr [EDX] */
    local_8 = (AiFltClassTy *)this_00->slot_00(param_1);
    if (((local_8 == (AiFltClassTy *)0x9) &&
        /* ST_CALLSITE[0066D4E5]: CALL dword ptr [EAX + 0x18] */
        (iVar4 = this_00->slot_18(), iVar4 == 8)) ||
       (local_8 == (AiFltClassTy *)0xff)) {
      local_EAX_10303 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_10303 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_10303,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    /* ST_CALLSITE[0066D542]: CALL 0x004016b8; direct=004016B8 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::sub_00668F50 */
    local_EAX_10370 = sub_00668F50(this_00,(char *)local_8,0,(uint *)local_50);
    if (local_EAX_10370 != 1) {
      local_EAX_10389 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_10389 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_10389,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    iVar4 = 0;
    local_10 = (char *)(uint)DAT_00808aaf;
    local_8 = nullptr;
    if (local_10 != nullptr) {
      local_c = &DAT_00808af5;
      do {
        if (((AiFltClassTy *)(uint)(byte)local_c[-1] == local_50[0]) && (*local_c != '\0')) {
          local_8 = (AiFltClassTy *)(&CHAR_00h_00808ab0 + iVar4 * 0x9c);
          break;
        }
        iVar4 = iVar4 + 1;
        local_c = local_c + 0x9c;
      } while (iVar4 < (int)local_10);
    }
    pAVar7 = local_8;
    if (local_8 == nullptr) {
      local_EAX_10550 = thunk_FUN_00674af0((int)*(short *)(param_1 + param_2 * 5 + 1));
      if (local_EAX_10550 != nullptr) {
        Library::MSVCRT::_strncpy(&this_00->field_0x4,local_EAX_10550,0x7f);
      }
      *(undefined4 *)&this_00->field_0x84 = 0xffffffff;
      RaiseInternalException(-0x78,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      pAVar7 = local_8;
    }
LAB_0066d630:
    puVar15 = (uint *)FUN_006c49b0((char *)pAVar7);
    if (param_3 == nullptr) {
      g_currentExceptionFrame = local_260.previous;
      return puVar15;
    }
    *param_3 = 3;
    g_currentExceptionFrame = local_260.previous;
    return puVar15;
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

