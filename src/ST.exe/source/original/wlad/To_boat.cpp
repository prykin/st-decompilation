#include "st/generated.hpp"
// Generated translation unit: source/original/wlad/To_boat.cpp

// 0044E980 STBoatC::GetVisualInfo
#line 4 "decomp/ST.exe/functions/0044E980/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetVisualInfo

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_GetVisualInfo_param_2Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0044C130 -> 0044E980 @ 0044C194 | 0044C130 -> 0044E980 @ 0044C1F7 | 0044C130 ->
   0044E980 @ 0044C25A

   [STCallsiteConventionApplier] __cdecl inferred from all-caller stack cleanup. Evidence: all 3
   callers reclaim stack arguments [28] matching the explicit parameter width; no explicit ECX
   pointer receiver setup observed; incidental ECX observations ignored (live=3, scalar=0)

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0044C130 -> 0044E980 @ 0044C194; STAllPlayersC::GetTOBJImage parameter param_1 */

void __cdecl
st::fn_0044E980
          (int param_1,STBoatC_GetVisualInfo_param_2Enum param_2,int param_3,undefined4 *param_4,
          char *param_5,undefined1 *param_6,STAllPlayersC_GetTOBJImage_param_2Enum *param_7)

{
  char cVar1;
  int iVar3;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar7_mg9;
  char *pcVar6_mg4;

  *param_4 = PTR_0080677c;
  *param_5 = '\0';
  *param_6 = 0x1d;
  *param_7 = 0;
  if ((param_3 != 0xe) && (param_3 != 0xc)) {
    if (param_3 == 0xd) {
      if (param_2 == CASE_B) {
        uVar3 = 0xffffffff;
        pcVar6 = &CHAR_l_007a9e94;
        do {
          pcVar7 = pcVar6;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar6 = pcVar7 + -uVar3;
        memmove(param_5, pcVar6, uVar3); /* compiler REP MOVS byte copy */
        return;
      }
      if (param_2 == CASE_16) {
        uVar3 = 0xffffffff;
        pcVar6 = &CHAR_p_007a9e9c;
        do {
          pcVar7 = pcVar6;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar6 = pcVar7 + -uVar3;
        memmove(param_5, pcVar6, uVar3); /* compiler REP MOVS byte copy */
        return;
      }
      if (param_2 == CASE_23) {
        uVar3 = 0xffffffff;
        pcVar6 = &CHAR_g_007a9ea4;
        do {
          pcVar7 = pcVar6;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar6 = pcVar7 + -uVar3;
        memmove(param_5, pcVar6, uVar3); /* compiler REP MOVS byte copy */
        return;
      }
    }
    *param_4 = 0;
    return;
  }
  switch(param_2) {
  case CASE_1:
    pcVar6 = &DAT_007a9e8c;
    break;
  case CASE_2:
    pcVar6 = &DAT_007a9e84;
    break;
  case CASE_3:
    pcVar6 = &DAT_007a9e7c;
    break;
  case CASE_4:
    pcVar6 = &DAT_007a9e74;
    break;
  case CASE_5:
    pcVar6 = &DAT_007a9e6c;
    break;
  case CASE_6:
    pcVar6 = &DAT_007a9e64;
    break;
  case CASE_7:
    pcVar6 = &DAT_007a9e5c;
    break;
  case CASE_8:
    pcVar6 = &DAT_007a9e54;
    break;
  case CASE_9:
    pcVar6 = &DAT_007a9e50;
    break;
  case CASE_A:
    pcVar6 = &DAT_007a9e48;
    break;
  case CASE_B:
    pcVar6 = &CHAR_l_007a9e40;
    break;
  case CASE_C:
    pcVar6 = &DAT_007a9e38;
    break;
  case CASE_D:
    pcVar6 = &DAT_007a9e30;
    break;
  case CASE_E:
    pcVar6 = &DAT_007a9e28;
    break;
  case CASE_F:
    pcVar6 = &DAT_007a9e20;
    break;
  case CASE_10:
    pcVar6 = &DAT_007a9e18;
    break;
  case CASE_11:
    pcVar6 = &DAT_007a9e10;
    break;
  case CASE_12:
    pcVar6 = &DAT_007a9e08;
    break;
  case CASE_13:
    pcVar6 = &DAT_007a9e00;
    break;
  case CASE_14:
    pcVar6 = &DAT_007a9df8;
    break;
  case CASE_15:
    pcVar6 = &DAT_007a9df4;
    break;
  case CASE_16:
    pcVar6 = &CHAR_p_007a9dec;
    break;
  case CASE_17:
    pcVar6 = &DAT_007a9de4;
    break;
  case CASE_18:
    pcVar6 = &DAT_007a9ddc;
    break;
  case CASE_19:
    pcVar6 = &DAT_007a9dd8;
    break;
  case CASE_1A:
    pcVar6 = &DAT_007a9dd4;
    break;
  case CASE_1B:
    pcVar6 = &DAT_007a9dd0;
    break;
  case CASE_1C:
    pcVar6 = &DAT_007a9dcc;
    break;
  case CASE_1D:
    pcVar6 = &DAT_007a9dc8;
    break;
  case CASE_1E:
    pcVar6 = &DAT_007a9dc4;
    break;
  case CASE_1F:
    pcVar6 = &DAT_007a9dc0;
    break;
  case CASE_20:
    pcVar6 = &DAT_007a9dbc;
    break;
  case CASE_21:
    pcVar6 = &DAT_007a9db8;
    break;
  case CASE_22:
    pcVar6 = &DAT_007a9db4;
    break;
  case CASE_23:
    pcVar6 = &CHAR_g_007a9db0;
    break;
  case CASE_24:
    pcVar6 = &DAT_007a9dac;
    break;
  case CASE_25:
    pcVar6 = &DAT_007a9da4;
    break;
  case CASE_26:
    pcVar6 = &DAT_007a9d9c;
    break;
  case CASE_27:
    pcVar6 = &DAT_007a9d94;
    break;
  case CASE_28:
    pcVar6 = &CHAR_f_007a9d8c;
    break;
  default:
    *param_4 = 0;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x12e,0,0,"%s",
                               "STBoatC::GetVisualInfo BODY_LEVEL");
    if (iVar3 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar3 = 0xffffffff;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar6_mg4 = param_5;
  memmove(pcVar6_mg4, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  uVar4 = 0;
  if (param_3 != 0xc) {
    return;
  }
  uVar3 = 0xffffffff;
  pcVar6 = &CHAR_0_007a9d88;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar5 = -1;
  do {
    pcVar7_mg9 = param_5;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7_mg9 = param_5 + 1;
    cVar1 = *param_5;
    param_5 = pcVar7_mg9;
  } while (cVar1 != '\0');
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = pcVar7_mg9 + -1;
  memmove(pcVar7, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  return;
}

// 0044EE30 STBoatC::GetMessage
#line 4 "decomp/ST.exe/functions/0044EE30/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetMessage

   [STSwitchEnumApplier] Switch target field_0459 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0459State. Cases:
   CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_74=116;CASE_75=117;CASE_76=118;CASE_77=119;CASE_78=120;CASE_79=121;CASE_7A=122;CASE_7B=123

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23

   [STSwitchEnumApplier] Switch target field_06F3 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F3State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004024EB|0044EE30; family_names=STBoatC::GetMessage; ret4=21;
   direct_offsets={10:6,14:14,18:35,1c:30} */

int __thiscall st::fn_0044EE30(STBoatC *this,STMessage *message)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  STMessageId SVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  STBoatC *this_00;
  int local_EAX_60;
  int iVar14;
  int local_EAX_595;
  dword dVar15;
  uint uVar17;
  undefined4 uVar18;
  dword dVar19;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int local_EAX_5256;
  int local_EAX_5399;
  STGroupBoatC *pSVar21_mg4;
  int local_EAX_5934;
  uint local_EAX_5967;
  DArrayTy *pDVar20;
  STGroupBoatC *pSVar21_mg5;
  uint local_EAX_6122;
  int local_EAX_6464;
  int local_EAX_6595;
  int local_EAX_6651;
  undefined4 *puVar21;
  uint local_EAX_7866;
  int local_EAX_8444;
  int local_EAX_10750;
  int local_EAX_10813;
  int local_EAX_10888;
  int local_EAX_12188;
  int local_EAX_13626;
  int local_EAX_15012;
  int local_EAX_16398;
  int local_EAX_16460;
  int local_EAX_17823;
  int local_EAX_19186;
  int local_EAX_20549;
  int local_EAX_21912;
  int local_EAX_23275;
  int local_EAX_24638;
  int local_EAX_26001;
  int local_EAX_26064;
  int local_EAX_27439;
  int local_EAX_27502;
  int local_EAX_28888;
  int local_EAX_28950;
  int local_EAX_30313;
  int local_EAX_30376;
  int local_EAX_31751;
  int local_EAX_31814;
  int local_EAX_33262;
  int local_EAX_34625;
  int local_EAX_34688;
  int local_EAX_36063;
  int local_EAX_36126;
  int local_EAX_37512;
  int local_EAX_37574;
  int local_EAX_38937;
  int local_EAX_39000;
  int local_EAX_40375;
  int local_EAX_41779;
  int local_EAX_41949;
  int local_EAX_41987;
  int local_EAX_42010;
  int local_EAX_42115;
  int local_EAX_42158;
  int local_EAX_42267;
  int local_EAX_42517;
  int local_EAX_42580;
  int local_EAX_42623;
  int local_EAX_42685;
  int local_EAX_42716;
  int local_EAX_42779;
  uint local_EAX_42821;
  int local_EAX_42884;
  int local_EAX_42927;
  int local_EAX_42989;
  int local_EAX_43020;
  int local_EAX_43153;
  int local_EAX_43196;
  int local_EAX_43258;
  int local_EAX_43289;
  int local_EAX_43352;
  int local_EAX_43394;
  int local_EAX_43457;
  int local_EAX_43500;
  int local_EAX_43562;
  int local_EAX_43593;
  int local_EAX_43656;
  int local_EAX_43698;
  int local_EAX_43761;
  int local_EAX_43804;
  int local_EAX_43866;
  int local_EAX_43897;
  AiPlrClassTy *pAVar22;
  int local_EAX_44030;
  int local_EAX_44073;
  int local_EAX_44135;
  int local_EAX_44229;
  int local_EAX_44271;
  int local_EAX_44334;
  int local_EAX_44377;
  int local_EAX_44439;
  int local_EAX_44470;
  int local_EAX_44533;
  int local_EAX_44575;
  int local_EAX_44638;
  int local_EAX_44850;
  int uVar15;
  void *pvVar23;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  void *extraout_EAX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  int local_EAX_46313;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  int iVar13;
  uint uVar16;
  STGroupBoatC *this_01;
  int local_EAX_48884;
  int iVar29;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  undefined2 uVar25;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  STWorldObject *pSVar24;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_06;
  undefined2 uVar28;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_07;
  STGroupBoatCVTable *pSVar26;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_13;
  uint uVar27;
  int iVar30;
  STGroupBoatC *pSVar31;
  byte *pbVar32;
  ushort *puVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  int *piVar37;
  AnonShape_0044EE30_F343D8F0 *pAVar38;
  byte *pbVar39;
  ushort *puVar40;
  short sVar41;
  CHAR local_284;
  undefined4 local_283 [63];
  InternalExceptionFrame local_184;
  int local_140 [7];
  int local_124 [7];
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_f4;
  STBoatC *local_ec;
  char local_e8 [20];
  uint local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  ushort *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4 [3];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9d;
  STMessage local_9c;
  AnonShape_0060EA30_DCEB68AD *local_7c;
  uint local_78;
  char local_74 [20];
  ushort local_60 [2];
  uint local_5c;
  undefined4 *local_58;
  uint local_54;
  ushort local_50 [2];
  undefined4 *local_4c;
  undefined2 local_48;
  undefined2 local_46;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  AnonShape_004B9D90_4F3151F9 *local_28;
  AnonShape_004B9D90_4F3151F9 *local_24;
  AnonShape_0044EE30_F343D8F0 *local_20;
  STGroupBoatC *local_1c;
  short local_16;
  short local_14;
  short local_12;
  STFishC *local_10;
  uint local_c;
  uint local_8;

  iVar30 = 0;
  local_8 = 0;
  local_d4 = 0;
  local_184.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_184;
  local_ec = this;
  local_EAX_60 = st::fn_0072D7F0(local_184.jumpBuffer,0);
  this_00 = local_ec;
  if (local_EAX_60 != 0) {
    g_currentExceptionFrame = local_184.previous;
    if (local_EAX_60 == -0x5001fff7) {
      return 0;
    }
    local_284 = '\0';
    memset(local_283, 0, 0xfe); /* compiler bulk-zero initialization */
    st::external_00000080(&local_284,"STBoatC::GetMessage - Name=%d Player=%d obj_num=%d grp_num=%d\n",local_ec->field_0018,
              local_ec->field_0024,(uint)(ushort)local_ec->field_0032,
              (uint)(ushort)local_ec->field_0030);
    iVar29 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1380,0,local_EAX_60,
                                "%s",&local_284);
    if (iVar29 == 0) {
      st::fn_006A5E40(local_EAX_60,0,"E:\\__titans\\wlad\\To_boat.cpp",0x1381);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00404F07((STSprGameObjC *)local_ec,message);
  SVar8 = message->id;
  sVar41 = (short)this_00;
  if (MESS_ID_ALLCREATE < SVar8) {
    if (SVar8 < MESS_SHARED_0129) {
      if (SVar8 != MESS_HITKILL) {
        if (SVar8 == MESS_SHARED_0121) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)((int)this_00->field_06CB + 0x2c) != 0x23) {
            this_00->field_0736 = *(undefined4 *)((message->arg0).u32 + 4);
            if (this_00->field_045D == CASE_3) {
              g_currentExceptionFrame = local_184.previous;
              return 0;
            }
            local_54 = g_playSystem_00802A38->field_00E4;
            st::fn_00402126(this_00,CASE_3,&local_54);
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          if (this_00->field_0722 != 0x14) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          if (this_00->field_072E != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_072E = 1;
          this_00->vfunc_90(3,0x16c);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (SVar8 != MESS_SHARED_0122) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        piVar37 = (message->arg0).ptr;
        if (*piVar37 != this_00->field_0024) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        this_00->field_0782 = piVar37[1];
        this_00->field_0786 = piVar37[2];
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pSVar31 = (message->arg0).ptr;
      local_1c = pSVar31;
      if (DAT_008117bc != nullptr) {
        if (pSVar31 != nullptr) {
          local_9c.id = MESS_SHARED_5DD5;
          local_9c.arg0.words.high = this_00->field_0032;
          local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
          local_9c.arg1.words.high = *(undefined2 *)&pSVar31->field_0xc;
          local_9c.arg1.words.low = *(undefined2 *)&pSVar31->field_0008;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)*DAT_008117bc)(&local_9c);
        }
        if (((DAT_008117bc != nullptr) && (pSVar31 != nullptr)) &&
           (pSVar31->vtable != (STGroupBoatCVTable *)0x2710)) {
          local_9c.id = 0x5dd1;
          local_9c.arg0.words.high = this_00->field_0032;
          local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
          local_9c.arg1.words.high = *(undefined2 *)&pSVar31->field_0xc;
          local_9c.arg1.words.low = *(undefined2 *)&pSVar31->field_0008;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)*DAT_008117bc)(&local_9c);
        }
      }
      if (this_00->field_07CA != nullptr) {
        iVar30 = st::fn_006E62D0
                           (g_playSystem_00802A38,this_00->field_07CA,(int *)&local_4c);
        if (iVar30 == -4) {
          iVar13 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x12f7,0,0,
                                      "%s","STBoatC::GetMessage MESS_HITKILL data.lname!=0 ptr=NULL");
          if (iVar13 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          st::fn_006A5E40
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x12f8);
        }
        pSVar31 = local_1c;
        piVar37 = local_140;
        for (iVar30 = 7; iVar30 != 0; iVar30 = iVar30 + -1) {
          *piVar37 = (int)pSVar31->vtable;
          pSVar31 = (STGroupBoatC *)&pSVar31->field_0x4;
          piVar37 = piVar37 + 1;
        }
        local_9c.id = MESS_HITKILL;
        local_9c.arg0.ptr = local_140;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*local_4c)(&local_9c);
        pSVar31 = local_1c;
      }
      if (((this_00->field_045D == CASE_14) || (uVar16 = st::fn_00404DF9(this_00,CASE_14), uVar16 != 0)
          ) && (iVar30 = st::fn_006E62D0
                                   (g_playSystem_00802A38,this_00->field_05A2,(int *)&local_10),
               iVar30 != -4)) {
        st::fn_00402A6D(local_10,this_00->field_0018);
      }
      this_00->field_0455 = 1;
      st::fn_00403C0B(this_00);
      st::fn_004023CE(this_00);
      sVar4 = this_00->field_066F;
      sVar5 = this_00->field_0673;
      sVar7 = this_00->field_0671;
      if (((sVar4 < 0) || (pSVar31 = local_1c, g_worldGrid.sizeX <= sVar4)) ||
         ((sVar7 < 0 ||
          (((g_worldGrid.sizeY <= sVar7 || (sVar5 < 0)) || (g_worldGrid.sizeZ <= sVar5)))))) {
        pSVar24 = nullptr;
      }
      else {
        pSVar24 = STGridAt3D(g_worldGrid, sVar4, sVar7, sVar5).objects[0];
      }
      if (((pSVar24 != nullptr) &&
          (*(int *)&pSVar24->field_0x18 == this_00->field_0679)) &&
         ((this_00->field_0675 == 99 && (pSVar24->value_20 == 1000)))) {
        st::fn_00402743(pSVar24,this_00);
      }
      st::fn_004042A0(this_00);
      st::fn_00401028
                (g_allPlayers_007FA174,*(char *)&this_00->field_0024,this_00->field_0032,1);
      st::fn_00401028
                (g_allPlayers_007FA174,*(char *)&this_00->field_0024,this_00->field_0032,0);
      st::fn_004027CA(this_00);
      st::fn_0040290F(this_00);
      st::fn_00405AEC((AnonShape_00492FC0_E6F586EF *)this_00);
      st::fn_004041F1(this_00);
      sVar4 = this_00->field_06A9;
      sVar5 = this_00->field_06AD;
      sVar7 = this_00->field_06AB;
      if (((sVar4 < 0) || (pSVar31 = local_1c, g_worldGrid.sizeX <= sVar4)) ||
         ((sVar7 < 0 ||
          (((g_worldGrid.sizeY <= sVar7 || (sVar5 < 0)) || (g_worldGrid.sizeZ <= sVar5)))))) {
        local_24 = nullptr;
      }
      else {
        local_24 = (AnonShape_004B9D90_4F3151F9 *)
                   STGridAt3D(g_worldGrid, sVar4, sVar7, sVar5).objects[0];
      }
      if (((local_24 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&local_24->field_0x18 != this_00->field_06AF)) ||
         (iVar30 = st::fn_0040141A(local_24), iVar30 == 0)) {
        st::fn_006E62D0(g_playSystem_00802A38,this_00->field_06AF,(int *)&local_24);
      }
      if (((local_24 != nullptr) &&
          (*(int *)&local_24->field_0x20 == 1000)) &&
         (st::fn_00405E3E(local_24,this_00),
         *(int *)&local_24->field_0x4b0 == this_00->field_0018)) {
        *(undefined4 *)&local_24->field_0x4b0 = 0;
      }
      if (((this_00->field_045D == CASE_13) &&
          ((AnonShape_005EFAE0_B406B78B *)this_00->field_0524 != nullptr)
          ) && (iVar30 = st::fn_006E62D0
                                   (g_playSystem_00802A38,
                                    (AnonShape_005EFAE0_B406B78B *)this_00->field_0524,
                                    (int *)&local_24), iVar30 != -4)) {
        st::fn_004031D9(local_24,this_00->field_0018);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      st::fn_006E6780
                (this_00->field_0211,
                 CONCAT22(CONCAT11(2,(char)((uint)this_00->field_0018 >> 0x10)),
                          (short)this_00->field_0018));
      this_00->field_0826 = pSVar31->field_0008;
      dVar15 = this_00->slot_2C();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      st::fn_00402F0E(STReplaceLowByte((uint32_t)(extraout_ECX_00), (uint8_t)(*(undefined1 *)&this_00->field_0024)),dVar15);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (this_00->field_0024 == (uint)*(byte *)(this_00->field_0010 + 0x112d)) {
        st::fn_00404B8D((char)this_00->field_0024);
      }
      if (pSVar31->field_0018 != 2) {
        puVar21 = &this_00->field_01D5;
        st::fn_00404264((STT3DSprC *)puVar21,0xf);
        st::fn_00404264((STT3DSprC *)puVar21,0);
        st::fn_00404264((STT3DSprC *)puVar21,1);
        st::fn_00404264((STT3DSprC *)puVar21,0xe);
        st::fn_00404264((STT3DSprC *)puVar21,0xd);
        st::fn_00404264((STT3DSprC *)puVar21,0xc);
        st::fn_00404264((STT3DSprC *)puVar21,8);
        st::fn_00404264((STT3DSprC *)puVar21,0xb);
        this_01 = st::fn_00405CF9(*(char *)&this_00->field_0024,this_00->field_0030);
        pSVar31 = local_1c;
        if (this_01 != nullptr) {
          this_01->sub_00498D20(0x6a,sVar41 + 0x32);
          pSVar31 = local_1c;
        }
      }
      if (this_00->field_0465 != nullptr) {
        st::fn_004049EE(this_00->field_0465);
        st::fn_0072E2B0(this_00->field_0465);
        this_00->field_0465 = nullptr;
      }
      if (((*(int *)&pSVar31->field_0x4 == 0xa8) || (pSVar31->field_0018 == 0)) ||
         (pSVar31->field_0018 == 4)) {
        uVar18 = 0xffffffff;
        local_EAX_48884 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_0040223E((int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,*(undefined4 *)((int)this_00->field_06CB + 0x2c)
                           ,(int)this_00,(int)this_00->field_006C,local_EAX_48884,uVar18);
      }
      if (pSVar31->field_0018 == 3) {
        st::fn_004051A5(this_00->field_01ED,0,(int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,0x12);
      }
      if (pSVar31->field_0018 == 2) {
        this_00->field_02C0 = 1;
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      goto LAB_0045ad7b;
    }
    if (SVar8 != MESS_SHARED_0129) {
      if (SVar8 != MESS_STBOATC_4405) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_004023A1
                ((TLOEmbryoTy *)this_00,*(undefined **)((int)this_00->field_06CB + 0x3f));
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_045D != CASE_14) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_05C0 != 3) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_07C2 == 0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((this_00->field_05A6 == nullptr) &&
       (iVar30 = st::fn_006E62D0
                           (g_playSystem_00802A38,this_00->field_05A2,(int *)&this_00->field_05A6),
       iVar30 == -4)) {
      st::fn_006A5E40
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1372);
    }
    local_9d = this_00->field_0063;
    uVar2 = this_00->field_0061;
    uVar3 = this_00->field_0062;
    puVar33 = this_00->field_05A6 + 0x1a;
    puVar40 = &this_00->field_0034;
    for (iVar30 = 0x17; iVar30 != 0; iVar30 = iVar30 + -1) {
      *(undefined4 *)puVar40 = *(undefined4 *)puVar33;
      puVar33 = puVar33 + 2;
      puVar40 = puVar40 + 2;
    }
    *puVar40 = *puVar33;
    *(char *)(puVar40 + 1) = (char)puVar33[1];
    this_00->field_0076 = 0;
    this_00->field_006E = 0x2f;
    this_00->field_0061 = uVar2;
    this_00->field_0062 = uVar3;
    this_00->field_0063 = local_9d;
    iVar30 = this_00->vfunc_D8();
    if (iVar30 == 0) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    iVar30 = 0x1377;
    goto cf_error_exit_0045AEE3;
  }
  if (SVar8 == MESS_ID_ALLCREATE) goto LAB_00450268;
  if (MESS_SHARED_0003 < SVar8) {
    if (SVar8 == MESS_SHARED_010F) {
      local_44 = (byte *)st::fn_004018D4((STT3DSprC *)&this_00->field_01D5,&local_38);
      local_3c = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_2c);
      local_40 = (byte *)st::fn_00401915(this_00,(int *)&local_34);
      local_7c = (AnonShape_0060EA30_DCEB68AD *)(local_2c + local_34 + local_38);
      local_20 = st::fn_006AAC70((uint)local_7c);
      pbVar32 = local_40;
      pAVar38 = local_20;
      for (uVar17 = local_34 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        bVar10 = pbVar32[1];
        bVar11 = pbVar32[2];
        bVar12 = pbVar32[3];
        pAVar38->field_0x0 = pbVar32[0];
        pAVar38->field_0x1 = bVar10;
        pAVar38->field_0x2 = bVar11;
        pAVar38->field_0x3 = bVar12;
        pbVar32 = pbVar32 + 4;
        pAVar38 = (AnonShape_0044EE30_F343D8F0 *)&pAVar38->field_0x4;
      }
      for (uVar17 = local_34 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(byte *)pAVar38 = *pbVar32;
        pbVar32 = pbVar32 + 1;
        pAVar38 = (AnonShape_0044EE30_F343D8F0 *)&pAVar38->field_0x1;
      }
      pbVar32 = local_3c;
      pbVar39 = &local_20->field_0x0 + local_34;
      memmove(pbVar39, pbVar32, local_2c); /* compiler REP MOVS byte copy */
      uVar17 = 0;
      local_20->field_05FE = local_34;
      local_20->field_0602 = local_2c;
      pbVar32 = local_44;
      pbVar39 = &local_20->field_0x0 + local_34 + local_2c;
      memmove(pbVar39, pbVar32, local_38); /* compiler REP MOVS byte copy */
      local_20->field_05F6 = local_34 + local_2c;
      local_20->field_05FA = local_38;
      st::fn_004025F9
                (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_20,local_7c);
      st::fn_006AB060(&local_44);
      st::fn_006AB060(&local_3c);
      st::fn_006AB060(&local_40);
      st::fn_006AB060(&local_20);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (SVar8 != MESS_TORPHIT) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    pSVar31 = (message->arg0).ptr;
    local_c = 0;
    local_7c = *(AnonShape_0060EA30_DCEB68AD **)pSVar31;
    if (this_00->field_0742 == 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((this_00->field_045D == CASE_8) && (*(int *)((int)this_00->field_06CB + 0x1c) != 2)) {
      *(undefined4 *)((int)this_00->field_06CB + 0x1c) = 1;
    }
    iVar30 = this_00->field_0786;
    if ((0 < iVar30) && (iVar30 < 0x65)) {
      *(int *)pSVar31 = *(int *)pSVar31 - (iVar30 * *(int *)pSVar31) / 100;
    }
    iVar30 = STField<int>(pSVar31,4);
    local_1c = pSVar31;
    if (iVar30 == 0x65) goto LAB_00459f59;
    if (iVar30 != 0x42) {
      switch(iVar30) {
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xa4:
      case 0xa5:
      case 0xb0:
      case 0xb2:
      case 0xb6:
      case 0xb7:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbf:
        local_c = st::fn_0040186B(this_00->field_0024,0x67);
        iVar30 = 0;
        if (local_c == 1) {
          iVar30 = *(int *)pSVar31;
          iVar14 = (iVar30 * 9) / 10 + (iVar30 * 9 >> 0x1f);
LAB_00459e30:
          iVar30 = iVar30 - (iVar14 - (iVar14 >> 0x1f));
        }
        else {
          if (local_c == 2) {
            iVar30 = *(int *)pSVar31;
            iVar14 = (iVar30 * 0x11) / 0x14 + (iVar30 * 0x11 >> 0x1f);
            goto LAB_00459e30;
          }
          if (local_c == 3) {
            iVar30 = *(int *)pSVar31;
            iVar14 = (iVar30 * 4) / 5 + (iVar30 * 4 >> 0x1f);
            goto LAB_00459e30;
          }
        }
        *(int *)pSVar31 = *(int *)pSVar31 - iVar30;
      }
      uVar15 = st::fn_004049B7(*(char *)&this_00->field_0024);
      uVar15 = (int)(byte)uVar15;
      if (uVar15 == 1) {
        iVar30 = this_00->field_0024;
        iVar14 = 4;
LAB_00459e71:
        local_c = st::fn_0040186B(iVar30,iVar14);
      }
      else {
        if (uVar15 == 2) {
          iVar30 = this_00->field_0024;
          iVar14 = 0x81;
          goto LAB_00459e71;
        }
        if (uVar15 == 3) {
          iVar30 = this_00->field_0024;
          iVar14 = 0x65;
          goto LAB_00459e71;
        }
      }
      iVar30 = 0;
      if (local_c == 1) {
        iVar30 = *(int *)pSVar31;
        iVar14 = iVar30 * 8;
LAB_00459eaa:
        iVar30 = iVar30 - iVar14 / 10;
      }
      else {
        if (local_c == 2) {
          iVar30 = *(int *)pSVar31;
          iVar14 = iVar30 * 6;
          goto LAB_00459eaa;
        }
        if (local_c == 3) {
          iVar30 = *(int *)pSVar31;
          iVar14 = iVar30 * 4;
          goto LAB_00459eaa;
        }
      }
      *(int *)pSVar31 = *(int *)pSVar31 - iVar30;
      if (STField<int>(pSVar31,4) == 0x9a) {
        iVar30 = STField<int>(pSVar31,8);
        this_00->field_0772 = iVar30;
        if ((this_00->field_0776 < 2) && (iVar30 = st::fn_0040186B(iVar30,0x93), 0 < iVar30)) {
          this_00->field_0776 = 2;
        }
        if (this_00->field_076E < 0) {
          this_00->field_076E = 0;
        }
        iVar30 = this_00->vfunc_0C();
        if (iVar30 == 3) {
          this_00->vfunc_C8(0);
        }
      }
      if ((STField<int>(pSVar31,4) == 0xad) || (STField<int>(pSVar31,4) == 0xa1)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar30 = *(int *)((int)this_00->field_06CB + 0x2c);
        if (iVar30 == 9) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (iVar30 == 0x15) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        st::fn_00403D14(this_00,STField<int>(pSVar31,0x10));
      }
      goto LAB_00459f59;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar30 = *(int *)((int)this_00->field_06CB + 0x2c);
    if (iVar30 == 9) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (iVar30 == 0x15) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    local_EAX_44850 = st::fn_004049B7(*(char *)&this_00->field_0024);
    local_EAX_44850 = (int)(byte)local_EAX_44850;
    if (local_EAX_44850 == 1) {
      iVar30 = this_00->field_0024;
      iVar14 = 0x2d;
LAB_00459d8b:
      local_c = st::fn_0040186B(iVar30,iVar14);
    }
    else {
      if (local_EAX_44850 == 2) {
        iVar30 = this_00->field_0024;
        iVar14 = 0x2d;
        goto LAB_00459d8b;
      }
      if (local_EAX_44850 == 3) {
        iVar30 = this_00->field_0024;
        iVar14 = 0x6a;
        goto LAB_00459d8b;
      }
    }
    iVar30 = 0;
    if (local_c == 1) {
      iVar30 = *(int *)pSVar31 - (*(int *)pSVar31 * 9) / 10;
    }
    *(int *)pSVar31 = *(int *)pSVar31 - iVar30;
LAB_00459f59:
    if (200 < (int)local_7c - *(int *)pSVar31) {
      *(uint **)pSVar31 = &local_7c[-9].field_0010;
    }
    if (this_00->field_0716 < 1) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    this_00->field_0716 = this_00->field_0716 - *(int *)pSVar31;
    pvVar23 = DAT_00811798;
    if ((((DAT_00811798 != nullptr) && (STField<int>(pSVar31,8) != 0xff)) &&
        (pvVar23 = (void *)st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)this_00),
        pvVar23 != nullptr)) && (STField<int>(pSVar31,0x14) == 0)) {
      st::fn_004028C4(DAT_00811798,(int)this_00->field_005B,(int)this_00->field_005D,
                         this_00->field_0024);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pvVar23 = extraout_EAX;
    }
    uVar25 = (undefined2)((uint)pvVar23 >> 0x10);
    if ((DAT_008117bc != nullptr) && (pSVar31 != nullptr)) {
      local_9c.id = MESS_SHARED_5DD5;
      local_9c.arg0.words.high = this_00->field_0032;
      local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
      local_9c.arg1.words.high = (short)STField<int>(pSVar31,0xc);
      local_9c.arg1.words.low = (short)STField<int>(pSVar31,8);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*DAT_008117bc)(&local_9c);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar25 = extraout_var_00;
    }
    if (this_00->field_0716 < 1) {
      if (((DAT_008117bc != nullptr) && (pSVar31 != nullptr)) &&
         (*(int *)pSVar31 != 10000)) {
        local_9c.id = 0x5dd1;
        local_9c.arg0.words.high = this_00->field_0032;
        local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
        local_9c.arg1.words.high = (short)STField<int>(pSVar31,0xc);
        local_9c.arg1.words.low = (short)STField<int>(pSVar31,8);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*DAT_008117bc)(&local_9c);
      }
      this_00->field_02C0 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
      case 1:
        uVar25 = 0xcb;
        break;
      case 2:
        uVar25 = 0xd1;
        break;
      case 3:
        uVar25 = 0xd7;
        break;
      case 4:
        uVar25 = 0xdd;
        break;
      case 5:
        uVar25 = 0xe3;
        break;
      case 6:
        uVar25 = 0xea;
        break;
      case 7:
        uVar25 = 0xf1;
        break;
      case 8:
        uVar25 = 0xf8;
        break;
      case 9:
        uVar25 = 0x100;
        break;
      case 10:
        uVar25 = 0x105;
        break;
      case 0xb:
        uVar25 = 0x10b;
        break;
      case 0xc:
        uVar25 = 0x111;
        break;
      case 0xd:
        uVar25 = 0x12f;
        break;
      case 0xe:
        uVar25 = 0x135;
        break;
      case 0xf:
        uVar25 = 0x13b;
        break;
      case 0x10:
        uVar25 = 0x141;
        break;
      case 0x11:
        uVar25 = 0x147;
        break;
      case 0x12:
        uVar25 = 0x14e;
        break;
      case 0x13:
        uVar25 = 0x155;
        break;
      case 0x14:
        uVar25 = 0x15c;
        break;
      case 0x15:
        uVar25 = 0x164;
        break;
      case 0x16:
        uVar25 = 0x169;
        break;
      case 0x17:
        uVar25 = 0x171;
        break;
      case 0x18:
        uVar25 = 0x177;
        break;
      case 0x19:
        uVar25 = 0x193;
        break;
      case 0x1a:
        uVar25 = 0x19b;
        break;
      case 0x1b:
        uVar25 = 0x1a3;
        break;
      case 0x1c:
        uVar25 = 0x1a9;
        break;
      case 0x1d:
        uVar25 = 0x1af;
        break;
      case 0x1e:
        uVar25 = 0x1b6;
        break;
      case 0x1f:
        uVar25 = 0x1bc;
        break;
      case 0x20:
        uVar25 = 0x1c2;
        break;
      case 0x21:
        uVar25 = 0x1c8;
        break;
      case 0x22:
        uVar25 = 0x1cf;
        break;
      case 0x23:
        uVar25 = 0x1d6;
        break;
      case 0x24:
        uVar25 = 0x1dc;
        break;
      case 0x25:
        uVar25 = 0x17d;
        break;
      case 0x26:
        uVar25 = 0x117;
        break;
      case 0x27:
        uVar25 = 0x183;
        break;
      case 0x28:
        uVar25 = 0x1e2;
        break;
      default:
        uVar25 = 0;
      }
      this_00->vfunc_90(2,uVar25);
      st::fn_00403C0B(this_00);
      st::fn_004023CE(this_00);
      sVar41 = this_00->field_0671;
      sVar4 = this_00->field_0673;
      local_7c = (AnonShape_0060EA30_DCEB68AD *)STReplaceLowWord((uint32_t)(local_7c), (uint16_t)(sVar41));
      sVar5 = this_00->field_066F;
      if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar41 < 0)) ||
          ((g_worldGrid.sizeY <= sVar41 || (sVar4 < 0)))) || (g_worldGrid.sizeZ <= sVar4)) {
        pSVar24 = nullptr;
      }
      else {
        pSVar24 = STGridAt3D(g_worldGrid, sVar5, sVar41, sVar4).objects[0];
        pSVar31 = local_1c;
      }
      if (((pSVar24 != nullptr) &&
          (*(int *)&pSVar24->field_0x18 == this_00->field_0679)) &&
         ((this_00->field_0675 == 99 && (pSVar24->value_20 == 1000)))) {
        st::fn_00402743(pSVar24,this_00);
      }
      st::fn_004042A0(this_00);
      st::fn_00401028
                (g_allPlayers_007FA174,*(char *)&this_00->field_0024,this_00->field_0032,1);
      st::fn_00401028
                (g_allPlayers_007FA174,*(char *)&this_00->field_0024,this_00->field_0032,0);
      st::fn_004027CA(this_00);
      if (this_00->field_07CA != nullptr) {
        iVar30 = st::fn_006E62D0
                           (g_playSystem_00802A38,this_00->field_07CA,(int *)&local_58);
        if (iVar30 == -4) {
          local_EAX_46313 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1296,0,0,"%s",
                                  "STBoatC::GetMessage MESS_TORPHIT data.lname!=0 ptr=NULL");
          if (local_EAX_46313 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          st::fn_006A5E40
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x1297);
        }
        pSVar31 = local_1c;
        piVar37 = local_124;
        for (iVar30 = 7; iVar30 != 0; iVar30 = iVar30 + -1) {
          *piVar37 = *(int *)pSVar31;
          pSVar31 = (STGroupBoatC *)((int)pSVar31 + 4);
          piVar37 = piVar37 + 1;
        }
        local_124[0] = 0x1716b;
        local_9c.id = MESS_TORPHIT;
        local_9c.arg0.ptr = local_124;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*local_58)(&local_9c);
        pSVar31 = local_1c;
      }
      st::fn_0040290F(this_00);
      st::fn_00405AEC((AnonShape_00492FC0_E6F586EF *)this_00);
      st::fn_004041F1(this_00);
      sVar41 = this_00->field_06A9;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_7c = (AnonShape_0060EA30_DCEB68AD *)CONCAT22(extraout_var_01,sVar41);
      sVar4 = this_00->field_06AD;
      sVar5 = this_00->field_06AB;
      if ((((sVar41 < 0) || (g_worldGrid.sizeX <= sVar41)) || (sVar5 < 0)) ||
         (((g_worldGrid.sizeY <= sVar5 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))) {
        local_28 = nullptr;
      }
      else {
        local_28 = (AnonShape_004B9D90_4F3151F9 *)
                   STGridAt3D(g_worldGrid, sVar41, sVar5, sVar4).objects[0];
      }
      if (((local_28 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&local_28->field_0x18 != this_00->field_06AF)) ||
         (iVar30 = st::fn_0040141A(local_28), iVar30 == 0)) {
        st::fn_006E62D0(g_playSystem_00802A38,this_00->field_06AF,(int *)&local_28);
      }
      if (((local_28 != nullptr) &&
          (*(int *)&local_28->field_0x20 == 1000)) &&
         (st::fn_00405E3E(local_28,this_00),
         *(int *)&local_28->field_0x4b0 == this_00->field_0018)) {
        *(undefined4 *)&local_28->field_0x4b0 = 0;
      }
      if (((this_00->field_045D == CASE_13) &&
          ((AnonShape_005EFAE0_B406B78B *)this_00->field_0524 != nullptr)
          ) && (iVar30 = st::fn_006E62D0
                                   (g_playSystem_00802A38,
                                    (AnonShape_005EFAE0_B406B78B *)this_00->field_0524,
                                    (int *)&local_28), iVar30 != -4)) {
        st::fn_004031D9(local_28,this_00->field_0018);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      st::fn_006E6780
                (this_00->field_0211,
                 CONCAT22(CONCAT11(2,(char)((uint)this_00->field_0018 >> 0x10)),
                          (short)this_00->field_0018));
      this_00->field_0826 = STField<int>(pSVar31,8);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if ((this_00->field_045D == CASE_4) && (this_00->field_0580 == CASE_5)) {
      sVar41 = this_00->field_0554;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_7c = (AnonShape_0060EA30_DCEB68AD *)CONCAT22(uVar25,sVar41);
      sVar4 = this_00->field_0558;
      sVar5 = this_00->field_0556;
      if ((sVar41 < 0) ||
         ((((g_worldGrid.sizeX <= sVar41 || (sVar5 < 0)) || (g_worldGrid.sizeY <= sVar5)) ||
          ((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)))))) {
        local_10 = nullptr;
      }
      else {
        local_10 = (STFishC *)
                   STGridAt3D(g_worldGrid, sVar41, sVar5, sVar4).objects[0];
      }
      if ((local_10 != nullptr) && (local_10->field_0018 == this_00->field_055A)) {
        st::fn_004056D7(local_10,this_00->field_0568,this_00->field_0018,this_00->field_0716);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
    }
    if (STField<int>(pSVar31,8) == 0xff) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    local_10 = (STFishC *)
               st::fn_004028BA
                         (g_allPlayers_007FA174,(char)STField<int>(pSVar31,8),
                          STField<ushort>(pSVar31,0xc),CASE_1);
    if ((STGameObjC *)local_10 == nullptr) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_045D != CASE_3) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    st::fn_00405F0B(local_10,&local_16,&local_14,&local_12);
    uVar17 = (int)this_00->field_0047 - (int)local_16;
    uVar27 = (int)uVar17 >> 0x1f;
    if (6 < (int)((uVar17 ^ uVar27) - uVar27)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar17 = (int)this_00->field_0049 - (int)local_14;
    uVar27 = (int)uVar17 >> 0x1f;
    if (6 < (int)((uVar17 ^ uVar27) - uVar27)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    uVar17 = (int)this_00->field_004B - (int)local_12;
    uVar27 = (int)uVar17 >> 0x1f;
    if (2 < (int)((uVar17 ^ uVar27) - uVar27)) {
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    st::fn_00401D70(this_00,(char)STField<int>(pSVar31,8),(short)STField<int>(pSVar31,0xc),
                     *(int *)pSVar31);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  if (SVar8 == MESS_SHARED_0003) {
    st::fn_0040464C(this_00);
    st::fn_00404629((TLOBaseTy *)this_00);
    st::fn_00405952(this_00);
    pSVar21_mg4 = st::fn_00405CF9(*(char *)&this_00->field_0024,this_00->field_0030);
    if (pSVar21_mg4 != nullptr) {
      st::fn_00404FF2(pSVar21_mg4,(uint)(ushort)this_00->field_0032);
    }
    st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
    uVar18 = st::fn_00404EC1(this_00->field_005B,this_00->field_005D,this_00->field_005F,
                                this_00->field_008E,(AnonShape_00495FF0_59081BDD *)this_00);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    st::fn_004020AE
              (g_allPlayers_007FA174,*(char *)&this_00->field_0024,
               STReplaceLowWord((uint32_t)(uVar18), (uint16_t)(this_00->field_0030)),
               CONCAT22(extraout_var_07,this_00->field_0032),(int *)this_00,this_00->field_0826);
    st::fn_00403283((int)this_00);
    if (this_00->field_047B != nullptr) {
      st::fn_006AE110(this_00->field_047B);
      this_00->field_047B = nullptr;
    }
    if (this_00->field_0465 != nullptr) {
      st::fn_004049EE(this_00->field_0465);
      st::fn_0072E2B0(this_00->field_0465);
      this_00->field_0465 = nullptr;
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x37a
              );
LAB_0045048a:
    if (((this_00->field_004D == '\x01') && (this_00->field_005A == '\x01')) &&
       (g_playSystem_00802A38->field_00E4 % 0x32 == 7)) {
      iVar30 = (int)this_00->field_0041 % 0xc9;
      local_78 = (int)this_00->field_0043 % 0xc9;
      iVar14 = (int)this_00->field_0045 % 200;
      if ((((0x46 < iVar30) && (iVar30 < 0x82)) &&
          ((0x46 < (int)local_78 && (((int)local_78 < 0x82 && (0x47 < iVar14)))))) &&
         (iVar14 < 0x81)) {
        this_00->field_005A = 0;
        this_00->field_004D = 0;
      }
    }
    if (((this_00->field_07EE == 1) &&
        (iVar30 = this_00->vfunc_7C(), iVar30 < 0x1a)) ||
       (((this_00->field_07EE == 2 &&
         (iVar30 = this_00->vfunc_7C(), iVar30 < 0x33)) ||
        ((this_00->field_07EE == 3 &&
         (iVar30 = this_00->vfunc_7C(), iVar30 < 0x4c)))))) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_EAX_5934 = st::fn_00401F5A(*(int *)((int)this_00->field_06CB + 0x2c));
      if (local_EAX_5934 == 3) {
        if (((this_00->field_045D != CASE_16) &&
            (local_EAX_6122 = st::fn_00404DF9(this_00,CASE_16), local_EAX_6122 == 0)) &&
           ((short)g_packedRecords_A62x8[*(char *)&this_00->field_0024].field95_0x15f != 0)) {
          pDVar20 = st::fn_006AE290(nullptr,1,2,1);
          st::fn_006AE1C0(pDVar20,&this_00->field_0032);
          st::fn_0040178F
                    (g_allPlayers_007FA174,*(char *)&this_00->field_0024,0xfffe,pDVar20,local_60);
          st::fn_006AE110(pDVar20);
          pSVar21_mg5 = st::fn_00405CF9(*(char *)&this_00->field_0024,local_60[0]);
          uVar25 = SUB42(local_b4,0);
          local_b4[0] = 1;
          pSVar26 = pSVar21_mg5->vtable;
          uVar28 = 0x11;
          goto LAB_00450695;
        }
      }
      else if (((this_00->field_045D != CASE_4) &&
               (local_EAX_5967 = st::fn_00404DF9(this_00,CASE_4), local_EAX_5967 == 0)) &&
              ((short)g_packedRecords_A62x8[*(char *)&this_00->field_0024].field94_0x15b != 0)) {
        pDVar20 = st::fn_006AE290(nullptr,1,2,1);
        st::fn_006AE1C0(pDVar20,&this_00->field_0032);
        st::fn_0040178F
                  (g_allPlayers_007FA174,*(char *)&this_00->field_0024,0xfffe,pDVar20,local_50);
        st::fn_006AE110(pDVar20);
        pSVar21_mg5 = st::fn_00405CF9(*(char *)&this_00->field_0024,local_50[0]);
        uVar25 = SUB42(&local_a8,0);
        local_a8 = 1;
        local_a4 = 0;
        pSVar26 = pSVar21_mg5->vtable;
        uVar28 = 4;
LAB_00450695:
        (*pSVar26->sub_00498D20)(pSVar21_mg5,uVar28,uVar25);
      }
    }
    local_1c = st::fn_00405CF9(*(char *)&this_00->field_0024,this_00->field_0030);
    uVar17 = this_00->field_07AA + 1;
    this_00->field_07AA = uVar17;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
    case 1:
    case 10:
    case 0x1e:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x28:
      if (this_00->field_07A2 < 1) {
        uVar17 = this_00->field_079E;
        this_00->field_07A2 = uVar17;
      }
      break;
    default:
      if (this_00->field_07A2 < 1) {
        local_EAX_6595 =
             st::fn_0040428C((void *)this_00->field_0024,this_00->field_079A,this_00->field_079E);
        this_00->field_07A2 = local_EAX_6595;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar17 = extraout_EDX_00;
      }
      break;
    case 0xf:
    case 0x12:
    case 0x16:
    case 0x17:
    case 0x27:
      iVar30 = this_00->field_07AE % this_00->field_07B2 + this_00->field_07B2 * this_00->field_07A2
      ;
      this_00->field_07AE = iVar30;
      if (iVar30 < this_00->field_079E * this_00->field_07B2) {
        this_00->field_07AE = iVar30 + 1;
        iVar30 = (iVar30 + 1) / this_00->field_07B2;
        this_00->field_07A2 = iVar30;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)((int)this_00->field_06CB + 0x2c) != 10) && (iVar30 == 0)) {
          local_EAX_6464 =
               st::fn_0040225C(this_00->field_0024,this_00->field_079E,
                                  *(int *)(&DAT_00793ff0 + this_00->field_079A * 4));
          iVar14 = this_00->field_07AE + local_EAX_6464 * this_00->field_07B2;
          this_00->field_07AE = iVar14;
          iVar30 = this_00->field_079E * this_00->field_07B2;
          if (iVar30 < iVar14) {
            this_00->field_07AE = iVar30;
          }
          this_00->field_07A2 = this_00->field_07AE / this_00->field_07B2;
        }
      }
      iVar30 = st::fn_0040186B(this_00->field_0024,0x3a);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar17 = extraout_EDX;
      if (0 < iVar30) {
        this_00->field_07AA = this_00->field_07AA + 1;
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((*(int *)((int)this_00->field_06CB + 0x2c) != 0xb) && (this_00->field_07B6 != 0)) &&
       (this_00->field_07BE == 0)) {
      local_EAX_6651 =
           st::fn_0040428C((void *)this_00->field_0024,this_00->field_07B6,this_00->field_07BA);
      this_00->field_07BE = local_EAX_6651;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar17 = extraout_EDX_01;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar30 = *(int *)((int)this_00->field_06CB + 0x2c);
    if ((((iVar30 == 0x24) || (iVar30 == 0x1b)) || (iVar30 == 0x1d)) &&
       ((this_00->field_071E < 0x14 &&
        (uVar17 = g_playSystem_00802A38->field_00E4 % 0x3c, uVar17 == 0)))) {
      this_00->field_071E = this_00->field_071E + 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((*(int *)((int)this_00->field_06CB + 0x2c) == 0x17) && (this_00->field_072A < 0x28)) &&
       (uVar17 = g_playSystem_00802A38->field_00E4 % 0xf, uVar17 == 0)) {
      this_00->field_072A = this_00->field_072A + 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)this_00->field_06CB + 0x2c) == 0x23) {
      if (this_00->field_072E == 1) {
        uVar17 = g_playSystem_00802A38->field_00E4 % 0x28;
        if ((uVar17 == 0) &&
           (iVar30 = this_00->field_0722 + -1, this_00->field_0722 = iVar30, iVar30 == 0)) {
          this_00->field_072E = 0;
          this_00->vfunc_90(3,0x16d);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar17 = extraout_EDX_02;
        }
      }
      else if ((this_00->field_0722 < 0x14) &&
              (uVar17 = g_playSystem_00802A38->field_00E4 % 0xf0, uVar17 == 0)) {
        this_00->field_0722 = this_00->field_0722 + 1;
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar30 = *(int *)((int)this_00->field_06CB + 0x2c);
    if ((iVar30 == 0x16) || (iVar30 == 0x25)) {
      if (this_00->field_0732 == 1) {
        if ((((iVar30 == 0x16) && (g_playSystem_00802A38->field_00E4 % 0x1e == 0)) ||
            ((iVar30 == 0x25 && (g_playSystem_00802A38->field_00E4 % 0x5a == 0)))) &&
           (iVar30 = this_00->field_0726 + -1, this_00->field_0726 = iVar30, iVar30 == 0)) {
          this_00->field_0732 = 0;
          this_00->vfunc_90(3,0x16d);
        }
        st::fn_00403314((AnonShape_004945C0_2B3B394D *)this_00);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar17 = extraout_EDX_03;
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      else if ((iVar30 == 0x16) &&
              (iVar30 = st::fn_0040186B(this_00->field_0024,0x92), uVar17 = extraout_EDX_04,
              0 < iVar30)) {
        iVar30 = this_00->field_0726;
        if (iVar30 < 0x28) {
          uVar17 = g_playSystem_00802A38->field_00E4 % 0x2d;
joined_r0x00450a10:
          if (uVar17 == 0) {
            this_00->field_0726 = iVar30 + 1;
          }
        }
      }
      else {
        iVar30 = this_00->field_0726;
        if (iVar30 < 0x28) {
          uVar17 = g_playSystem_00802A38->field_00E4 % 0x5a;
          goto joined_r0x00450a10;
        }
      }
    }
    iVar30 = this_00->field_0736 + -1;
    this_00->field_0736 = iVar30;
    if (iVar30 < 0) {
      this_00->field_0736 = 0;
    }
    if (this_00->field_0716 == this_00->field_0712) {
      this_00->field_076E = -1;
    }
    if ((-1 < this_00->field_076E) &&
       ((this_00->field_045D != CASE_14 || (this_00->field_05C0 != 3)))) {
      uVar17 = this_00->field_076E % 0x7d;
      if (uVar17 == 0) {
        puVar21 = &this_00->field_01D5;
        iVar30 = st::fn_00404183
                           ((STT3DSprC *)puVar21,0xb,PTR_00806774,"forcef0",CASE_1D);
        if (iVar30 != 0) {
          st::fn_006A5E40
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x41b);
        }
        st::fn_004059F2(puVar21,'\x0e');
        st::fn_00402BDF(puVar21,'\v');
        st::fn_004022D4(puVar21,'\v');
        st::fn_00405240((STT3DSprC *)puVar21,0xb,g_playSystem_00802A38->field_00E4);
        local_104 = 0x65;
        local_9c.arg0.ptr = &local_108;
        local_108 = this_00->field_0776 * 5;
        local_100 = this_00->field_0772;
        local_f4 = 1;
        local_9c.id = MESS_TORPHIT;
        this_00->st::fn_00404F07(&local_9c);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar17 = extraout_EDX_05;
      }
      this_00->field_076E = this_00->field_076E + 1;
    }
    if ((0 < this_00->field_0782) &&
       (iVar30 = this_00->field_0782 + -1, this_00->field_0782 = iVar30, iVar30 == 0)) {
      this_00->field_0786 = 0;
    }
    if (0 < this_00->field_073A) {
      if (this_00->field_0465 == nullptr) {
        puVar21 = st::fn_00403BED();
        this_00->field_0465 = puVar21;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar17 = extraout_EDX_07;
        if (puVar21 != nullptr) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          st::fn_00403819(puVar21,CASE_0,*(undefined4 *)((int)this_00->field_06CB + 0x2c));
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar17 = extraout_EDX_08;
        }
      }
      else {
        st::fn_0040435E(this_00->field_0465,(int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,(int)this_00->field_006C,100);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar17 = extraout_EDX_06;
      }
      if (this_00->field_045D == CASE_3) {
        this_00->field_073A = this_00->field_073A + -1;
      }
      if (this_00->field_045D == CASE_14) {
        if (this_00->field_05C0 == 3) {
          if ((this_00->field_05A6 == nullptr) &&
             (iVar30 = st::fn_006E62D0
                                 (g_playSystem_00802A38,this_00->field_05A2,
                                  (int *)&this_00->field_05A6), iVar30 == -4)) {
            st::fn_006A5E40
                      (-4,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x43c);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar17 = *(uint *)(this_00->field_05A6 + 0x12);
          if (uVar17 != this_00->field_0024) goto LAB_00450c1e;
        }
        this_00->field_073A = this_00->field_073A + -1;
      }
LAB_00450c1e:
      if (this_00->field_073A == 0) {
        if (this_00->field_0465 != nullptr) {
          st::fn_004049EE(this_00->field_0465);
          st::fn_0072E2B0(this_00->field_0465);
          this_00->field_0465 = nullptr;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar17 = extraout_EDX_09;
        }
        if (this_00->field_045D != CASE_3) {
          local_5c = g_playSystem_00802A38->field_00E4;
          st::fn_00402126(this_00,CASE_3,&local_5c);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar17 = extraout_EDX_10;
        }
      }
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (((this_00->field_070E == 0) && (uVar17 = g_playSystem_00802A38->field_00E4 % 3, uVar17 == 0)
        ) && (iVar30 = st::fn_0040186B(this_00->field_0024,10), uVar17 = extraout_EDX_11,
             0 < iVar30)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_00402BE9(this_00,*(undefined **)((int)this_00->field_06CB + 0x3f));
      this_00->field_070E = 1;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar17 = extraout_EDX_12;
    }
    if (this_00->field_02C0 == 1) {
      this_00->field_02C0 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar30 = *(int *)((int)this_00->field_06CB + 0x2c);
      if (iVar30 == 9) {
        iVar30 = st::fn_00404BE2(&this_00->field_01D5,'\b');
        if ((iVar30 == 0) &&
           (iVar30 = st::fn_00404183
                               ((STT3DSprC *)&this_00->field_01D5,8,PTR_00806774,"expdstrw"
                                ,CASE_1D), iVar30 != 0)) {
          iVar30 = 0x45d;
LAB_00450e28:
          st::fn_006A5E40
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     iVar30);
        }
      }
      else if (iVar30 == 0x15) {
        iVar30 = st::fn_00404183
                           ((STT3DSprC *)&this_00->field_01D5,8,PTR_00806774,"expdstrw",
                            CASE_1D);
        if (iVar30 != 0) {
          iVar30 = 0x462;
          goto LAB_00450e28;
        }
      }
      else {
        local_EAX_7866 = st::fn_0040173A((AnonShape_00492AB0_63A128FD *)this_00);
        this_00->field_082A = local_EAX_7866;
        if (6 < (int)local_EAX_7866) {
          this_00->field_082A = 0;
        }
        puVar21 = &this_00->field_01D5;
        st::fn_00404183
                  ((STT3DSprC *)puVar21,8,PTR_00806774,
                   "expl_bt0" + this_00->field_082A * 0x45,CASE_1D);
        st::fn_00404183
                  ((STT3DSprC *)puVar21,9,PTR_00806764,
                   "expl_bbt0" + this_00->field_082A * 0x45,CASE_1D);
        st::fn_00404183
                  ((STT3DSprC *)puVar21,10,PTR_00806774,
                   "expmask3" + this_00->field_082A * 0x45,CASE_1D);
        st::fn_004022D4(puVar21,'\n');
        st::fn_00405240((STT3DSprC *)puVar21,10,g_playSystem_00802A38->field_00E4);
        st::fn_004044EE((STT3DSprC *)puVar21,PTR_008032b8,0x10);
        st::fn_00403233((STT3DSprC *)puVar21,'\n');
      }
      st::fn_00405240((STT3DSprC *)&this_00->field_01D5,8,g_playSystem_00802A38->field_00E4);
      this_00->field_0455 = 1;
      dVar15 = this_00->slot_2C();
      st::fn_00402F0E(STReplaceLowByte((uint32_t)(dVar15), (uint8_t)(*(undefined1 *)&this_00->field_0024)),dVar15);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar17 = (uint)*(byte *)(this_00->field_0010 + 0x112d);
      if (this_00->field_0024 == uVar17) {
        st::fn_00404B8D((char)this_00->field_0024);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar17 = extraout_EDX_13;
      }
    }
    if (this_00->field_0455 == 1) {
      this_00->vfunc_D8();
      puVar21 = &this_00->field_01D5;
      local_c = st::fn_004042AF(puVar21,'\b');
      if (local_c == 2) {
        st::fn_00404264((STT3DSprC *)puVar21,0xf);
        st::fn_00404264((STT3DSprC *)puVar21,0);
        st::fn_00404264((STT3DSprC *)puVar21,1);
        st::fn_00404264((STT3DSprC *)puVar21,2);
      }
      if (local_c == *(uint *)(&DAT_007a8f11 + this_00->field_082A * 0x45)) {
        st::fn_00404264((STT3DSprC *)puVar21,0xe);
        st::fn_00404264((STT3DSprC *)puVar21,0xd);
        st::fn_00404264((STT3DSprC *)puVar21,0xc);
        st::fn_00404264((STT3DSprC *)puVar21,0xb);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)((int)this_00->field_06CB + 0x2c) == 0x21) {
          uVar17 = local_c;
          local_EAX_8444 = st::fn_004052CC((STT3DSprC *)puVar21);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar18 = *(undefined4 *)((int)this_00->field_06CB + 0x2c);
          sVar6 = this_00->field_006C;
          sVar7 = this_00->field_0045;
          sVar5 = this_00->field_0043;
          sVar4 = this_00->field_0041;
        }
        else {
          uVar17 = 0xffffffff;
          local_EAX_8444 = st::fn_004052CC((STT3DSprC *)puVar21);
          sVar6 = this_00->field_006C;
          sVar7 = this_00->field_0045;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar18 = *(undefined4 *)((int)this_00->field_06CB + 0x2c);
          sVar5 = this_00->field_0043;
          sVar4 = this_00->field_0041;
        }
        st::fn_0040223E((int)sVar4,(int)sVar5,(int)sVar7,uVar18,(int)this_00,(int)sVar6,
                           local_EAX_8444,uVar17);
        if (this_00->field_0465 != nullptr) {
          st::fn_004049EE(this_00->field_0465);
          st::fn_0072E2B0(this_00->field_0465);
          this_00->field_0465 = nullptr;
        }
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((*(int *)((int)this_00->field_06CB + 0x2c) == 0x21) && (local_c == 0x18)) {
        st::fn_0040433B((int)this_00->field_0041,(int)this_00->field_0043,
                           (int)this_00->field_0045,3,this_00->field_0024,
                           (ushort)this_00->field_0018,this_00->field_0032,0x21,200);
      }
      if (local_c == *(uint *)(&DAT_007a8f15 + this_00->field_082A * 0x45)) {
        st::fn_00402A90((STT3DSprC *)puVar21);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (((local_c == *(uint *)(&DAT_007a8f19 + this_00->field_082A * 0x45)) &&
          (iVar30 = *(int *)((int)this_00->field_06CB + 0x2c), iVar30 != 9)) && (iVar30 != 0x15)) {
        st::fn_00405240((STT3DSprC *)puVar21,9,g_playSystem_00802A38->field_00E4);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (((*(int *)(&DAT_007a8f19 + this_00->field_082A * 0x45) < (int)local_c) &&
          (iVar30 = *(int *)((int)this_00->field_06CB + 0x2c), iVar30 != 9)) &&
         ((iVar30 != 0x15 &&
          (iVar30 = st::fn_004042AF(puVar21,'\b'),
          iVar30 == *(int *)(&DAT_007a8f0d + this_00->field_082A * 0x45) + -1)))) {
        st::fn_00404264((STT3DSprC *)puVar21,8);
      }
      if ((local_c == *(uint *)(&DAT_007a8f21 + this_00->field_082A * 0x45)) &&
         (local_1c != nullptr)) {
        local_1c->sub_00498D20(0x6a,sVar41 + 0x32);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar30 = *(int *)((int)this_00->field_06CB + 0x2c);
      if ((iVar30 == 9) || (iVar30 == 0x15)) {
        if (local_c != 0x27) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        local_9c.id = MESS_SYSTEMCLASSTY_000A;
        local_9c.unknown_0c = 0;
        local_9c.unknown_08 = g_playSystem_00802A38->field_0014;
        local_9c.arg0 = (STMessageArg)this_00->field_0008;
        st::fn_006E5810((SystemClassTy *)g_playSystem_00802A38,&local_9c.unknown_00);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = st::fn_004042AF(puVar21,'\t');
      if (iVar30 != 0x14) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
LAB_0045ad7b:
      local_9c.id = MESS_SYSTEMCLASSTY_000A;
      local_9c.unknown_0c = 0;
      local_9c.unknown_08 = g_playSystem_00802A38->field_0014;
      local_9c.arg0 = (STMessageArg)this_00->field_0008;
      st::fn_006E5810((SystemClassTy *)g_playSystem_00802A38,&local_9c.unknown_00);
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
    if (this_00->field_0459 != 0) {
      switch(this_00->field_0459) {
      case CASE_65:
        local_8 = st::fn_00403DF0(this_00);
        break;
      case CASE_66:
        local_8 = st::fn_00403553(this_00,(int *)0x2);
        break;
      case CASE_67:
        local_8 = st::fn_0040493A(this_00);
        break;
      case CASE_68:
        local_8 = st::fn_004058BC(this_00,(int *)0x2);
        break;
      case CASE_69:
        local_8 = st::fn_00404507((int *)this_00);
        break;
      case CASE_6A:
        local_8 = st::fn_004026F3(this_00,(int *)0x2);
        break;
      case CASE_6B:
        local_8 = st::fn_0040379C((int *)this_00);
        break;
      case CASE_6C:
        local_8 = st::fn_0040238D((int *)this_00);
        break;
      case CASE_6D:
        local_8 = st::fn_00402B58(this_00,(int *)0x2);
        break;
      case CASE_6E:
        local_8 = st::fn_0040589E((int *)this_00);
        break;
      case CASE_6F:
        local_8 = st::fn_00405646(this_00,(int *)0x2);
        break;
      case CASE_70:
        local_8 = st::fn_004033DC(this_00,(STBoatC *)0x2);
        break;
      case CASE_71:
        local_8 = st::fn_0040344A(this_00,(STBoatC *)0x2);
        break;
      case CASE_72:
        local_8 = st::fn_00404F39(this_00,(int *)0x2);
        break;
      case CASE_73:
        local_8 = st::fn_00403F85(this_00,(int *)0x2);
        break;
      case CASE_74:
        local_8 = st::fn_0040399A(this_00,(int *)0x2);
        break;
      case CASE_75:
        local_8 = st::fn_00401113(this_00,(int *)0x2);
        break;
      case CASE_76:
        local_8 = st::fn_004035E4(this_00,(int *)0x2);
        break;
      case CASE_77:
        local_8 = st::fn_00405213((int *)this_00,uVar17);
        break;
      case CASE_78:
        local_8 = st::fn_00402658(this_00,(int *)0x2);
        break;
      case CASE_79:
        local_8 = st::fn_00405B2D(this_00,(int *)0x2);
        break;
      case CASE_7A:
        local_8 = st::fn_00404787((int *)this_00);
        break;
      case CASE_7B:
        local_8 = st::fn_00401938(this_00,(int *)0x2);
        break;
      default:
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x4cb);
      }
      uVar17 = local_8;
      if (local_8 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x4cd);
      }
      if (uVar17 == 0) {
        this_00->field_0459 = 0;
      }
      if (this_00->field_0459 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
    }
    if (this_00->field_02C4 == 1) {
      uVar17 = 0;
      if (0 < this_00->field_073A) {
        local_c = (uint)(this_00->field_02D4 == 1);
        local_78 = (uint)(this_00->field_0314 == 1);
        local_7c = (AnonShape_0060EA30_DCEB68AD *)(uint)(this_00->field_02F4 == 1);
        memset(&this_00->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
        iVar30 = 0;
        this_00->field_02C4 = 0;
        if (local_c == 1) {
          this_00->field_02D4 = 1;
        }
        if (local_78 == 1) {
          this_00->field_0314 = 1;
        }
        if (local_7c == (AnonShape_0060EA30_DCEB68AD *)0x1) {
          this_00->field_02F4 = 1;
        }
        if (((local_c == 1) || (local_78 == 1)) || (local_7c == (AnonShape_0060EA30_DCEB68AD *)0x1))
        {
          this_00->field_02C4 = 1;
        }
      }
      if (this_00->field_0314 == 1) {
        memset(&this_00->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
        iVar30 = 0;
        this_00->field_0314 = 1;
        uVar17 = this_00->field_03C4;
      }
      if ((this_00->field_045D == CASE_14) && (this_00->field_05C0 == 3)) {
        memset(&this_00->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
        this_00->field_02C4 = 0;
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      if ((this_00->field_02CC == 1) && (uVar17 < this_00->field_0328)) {
        uVar17 = this_00->field_0328;
      }
      if ((this_00->field_02D0 == 1) && (uVar17 < this_00->field_0332)) {
        uVar17 = this_00->field_0332;
      }
      if ((this_00->field_02D4 == 1) && (uVar17 < this_00->field_0343)) {
        uVar17 = this_00->field_0343;
      }
      if ((this_00->field_02E0 == 1) && (uVar17 < this_00->field_0347)) {
        uVar17 = this_00->field_0347;
      }
      if ((this_00->field_02F8 == 1) && (uVar17 < this_00->field_034F)) {
        uVar17 = this_00->field_034F;
      }
      if ((this_00->field_030C == 1) && (uVar17 < this_00->field_036F)) {
        uVar17 = this_00->field_036F;
      }
      if ((this_00->field_02FC == 1) && (uVar17 < this_00->field_0392)) {
        uVar17 = this_00->field_0392;
      }
      if ((this_00->field_02D8 == 1) && (uVar17 < this_00->field_039C)) {
        uVar17 = this_00->field_039C;
      }
      if ((this_00->field_02DC == 1) && (uVar17 < this_00->field_03A6)) {
        uVar17 = this_00->field_03A6;
      }
      if ((this_00->field_0304 == 1) && (uVar17 < this_00->field_03B6)) {
        uVar17 = this_00->field_03B6;
      }
      if ((this_00->field_0314 == 1) && (uVar17 < this_00->field_03C4)) {
        uVar17 = this_00->field_03C4;
      }
      if ((this_00->field_0308 == 1) && (uVar17 < this_00->field_03CA)) {
        uVar17 = this_00->field_03CA;
      }
      if ((this_00->field_02E4 == 1) && (uVar17 < this_00->field_03D4)) {
        uVar17 = this_00->field_03D4;
      }
      if ((this_00->field_02F0 == 1) && (uVar17 < this_00->field_03DE)) {
        uVar17 = this_00->field_03DE;
      }
      if ((this_00->field_02EC == 1) && (uVar17 < this_00->field_03E8)) {
        uVar17 = this_00->field_03E8;
      }
      if ((this_00->field_031C == 1) && (uVar17 < this_00->field_03F3)) {
        uVar17 = this_00->field_03F3;
      }
      if ((this_00->field_0318 == 1) && (uVar17 < this_00->field_0401)) {
        uVar17 = this_00->field_0401;
      }
      if ((this_00->field_0320 == 1) && (uVar17 < this_00->field_0415)) {
        uVar17 = this_00->field_0415;
      }
      if ((this_00->field_02F4 == 1) && (uVar17 < this_00->field_041F)) {
        uVar17 = this_00->field_041F;
      }
      if ((this_00->field_0310 == 1) && (uVar17 < this_00->field_0429)) {
        uVar17 = this_00->field_0429;
      }
      if ((this_00->field_02E8 == 1) && (uVar17 < this_00->field_0437)) {
        uVar17 = this_00->field_0437;
      }
      if ((this_00->field_0300 == 1) && (uVar17 < this_00->field_0447)) {
        uVar17 = this_00->field_0447;
      }
      if ((this_00->field_02CC == 1) && (this_00->field_0328 < uVar17)) {
        this_00->field_02CC = 0;
      }
      if ((this_00->field_02D0 == 1) && (this_00->field_0332 < uVar17)) {
        this_00->field_02D0 = 0;
      }
      if ((this_00->field_02D4 == 1) && (this_00->field_0343 < uVar17)) {
        this_00->field_02D4 = 0;
      }
      if ((this_00->field_02E0 == 1) && (this_00->field_0347 < uVar17)) {
        this_00->field_02E0 = 0;
      }
      if ((this_00->field_02F8 == 1) && (this_00->field_034F < uVar17)) {
        this_00->field_02F8 = 0;
      }
      if ((this_00->field_030C == 1) && (this_00->field_036F < uVar17)) {
        this_00->field_030C = 0;
      }
      if ((this_00->field_02FC == 1) && (this_00->field_0392 < uVar17)) {
        this_00->field_02FC = 0;
      }
      if ((this_00->field_02D8 == 1) && (this_00->field_039C < uVar17)) {
        this_00->field_02D8 = 0;
      }
      if ((this_00->field_02DC == 1) && (this_00->field_03A6 < uVar17)) {
        this_00->field_02DC = 0;
      }
      if ((this_00->field_0304 == 1) && (this_00->field_03B6 < uVar17)) {
        this_00->field_0304 = 0;
      }
      if ((this_00->field_0314 == 1) && (this_00->field_03C4 < uVar17)) {
        this_00->field_0314 = 0;
      }
      if ((this_00->field_0308 == 1) && (this_00->field_03CA < uVar17)) {
        this_00->field_0308 = 0;
      }
      if ((this_00->field_02E4 == 1) && (this_00->field_03D4 < uVar17)) {
        this_00->field_02E4 = 0;
      }
      if ((this_00->field_02F0 == 1) && (this_00->field_03DE < uVar17)) {
        this_00->field_02F0 = 0;
      }
      if ((this_00->field_02EC == 1) && (this_00->field_03E8 < uVar17)) {
        this_00->field_02EC = 0;
      }
      if ((this_00->field_031C == 1) && (this_00->field_03F3 < uVar17)) {
        this_00->field_031C = 0;
      }
      if ((this_00->field_0318 == 1) && (this_00->field_0401 < uVar17)) {
        this_00->field_0318 = 0;
      }
      if ((this_00->field_0320 == 1) && (this_00->field_0415 < uVar17)) {
        this_00->field_0320 = 0;
      }
      if ((this_00->field_02F4 == 1) && (this_00->field_041F < uVar17)) {
        this_00->field_02F4 = 0;
      }
      if ((this_00->field_0310 == 1) && (this_00->field_0429 < uVar17)) {
        this_00->field_0310 = 0;
      }
      if ((this_00->field_02E8 == 1) && (this_00->field_0437 < uVar17)) {
        this_00->field_02E8 = 0;
      }
      if ((this_00->field_0300 == 1) && (this_00->field_0447 < uVar17)) {
        this_00->field_0300 = 0;
      }
      if (this_00->field_02D0 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_2;
          local_EAX_10750 = st::fn_00404F52(this_00,0);
          local_8 = local_EAX_10750;
          if (local_EAX_10750 == -1) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x532);
          }
          if (local_EAX_10750 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_10813 = st::fn_00403A2B(this_00,0);
          if (local_EAX_10813 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x536;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x53e;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x549;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x544;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x567;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x56c;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x54e;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x580;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5a8;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x58a;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x585;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x59e;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x553;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x562;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5ad;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x571;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x57b;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x558;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5a3;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x55d;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x576;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x594;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x58f;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x599;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02F8 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_C;
          local_EAX_12188 = st::fn_00405434(this_00,nullptr);
          if (local_EAX_12188 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x5b9;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5c0;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5cb;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5c6;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5e9;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5ee;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5d0;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x602;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x62a;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x60c;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x607;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x620;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5d5;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5e4;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x62f;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5f3;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5fd;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5da;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x625;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5df;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x5f8;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x616;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x611;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x61b;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02CC == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_1;
          iVar30 = st::fn_00401258(this_00,0);
          local_8 = iVar30;
          if (iVar30 == -1) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x63b);
          }
          if (iVar30 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_13626 = st::fn_00403A2B(this_00,0);
          if (local_EAX_13626 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x63f;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x647;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x652;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x64d;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x670;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x675;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x657;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x689;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6b1;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x693;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x68e;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6a7;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x65c;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x66b;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6b6;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x67a;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x684;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x661;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6ac;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x666;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x67f;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x69d;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x698;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6a2;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02E0 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_6;
          local_EAX_15012 = st::fn_004042F5(this_00,0);
          if (local_EAX_15012 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x6c2;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6c9;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6d4;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6cf;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6f2;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6f7;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6d9;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x70b;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x733;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x715;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x710;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x729;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6de;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6ed;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x738;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6fc;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x706;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6e3;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x72e;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x6e8;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x701;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x71f;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x71a;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x724;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_030C == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_11;
          local_EAX_16398 = st::fn_00404543(this_00,0);
          local_8 = local_EAX_16398;
          if (local_EAX_16398 == -1) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x744);
          }
          if (local_EAX_16398 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_16460 = st::fn_00403A2B(this_00,0);
          if (local_EAX_16460 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x748;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x750;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x75b;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x756;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x779;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x77e;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x760;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x792;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7ba;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x79c;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x797;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7b0;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x765;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x774;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7bf;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x783;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x78d;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x76a;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7b5;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x76f;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x788;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7a6;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7a1;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7ab;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02FC == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_D;
          local_EAX_17823 = st::fn_00404C91(this_00,0);
          if (local_EAX_17823 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x7cb;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7d2;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7dc;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7d7;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7fa;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7ff;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7e1;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x813;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x83b;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x81d;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x818;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x831;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7e6;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7f5;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x840;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x804;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x80e;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7eb;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x836;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x7f0;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x809;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x827;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x822;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x82c;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02D8 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_4;
          local_EAX_19186 = st::fn_00403EB8(this_00,0);
          if (local_EAX_19186 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x84c;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x853;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x85d;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x858;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x87b;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x880;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x862;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x894;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8bc;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x89e;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x899;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8b2;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x867;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x876;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8c1;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x885;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x88f;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x86c;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8b7;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x871;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x88a;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8a8;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8a3;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8ad;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02DC == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_5;
          local_EAX_20549 = st::fn_00404DCC(this_00,0);
          if (local_EAX_20549 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x8cd;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8d4;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8de;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8d9;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8fc;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x901;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8e3;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x915;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x93d;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x91f;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x91a;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x933;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8e8;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8f7;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x942;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x906;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x910;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8ed;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x938;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x8f2;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x90b;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x929;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x924;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x92e;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0304 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_F;
          local_EAX_21912 = st::fn_00404E1C(this_00,nullptr);
          if (local_EAX_21912 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x94e;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x955;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x95f;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x95a;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x97d;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x982;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x964;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x996;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9be;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9a0;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x99b;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9b4;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x969;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x978;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9c3;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x987;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x991;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x96e;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9b9;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x973;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x98c;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9aa;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9a5;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9af;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0314 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_14;
          local_EAX_23275 = st::fn_00404E08(this_00,nullptr);
          if (local_EAX_23275 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x9cf;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9d6;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9e0;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9db;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9fe;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa03;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9e5;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa17;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa3f;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa21;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa1c;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa35;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9ea;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9f9;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa44;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa08;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa12;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9ef;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa3a;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x9f4;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa0d;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa2b;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa26;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa30;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0308 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_10;
          local_EAX_24638 = st::fn_004011AE(this_00,0);
          if (local_EAX_24638 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xa50;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa57;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa61;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa5c;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa7f;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa84;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa66;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa98;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xac0;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xaa2;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa9d;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xab6;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa6b;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa7a;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xac5;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa89;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa93;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa70;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xabb;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa75;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xa8e;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xaac;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xaa7;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xab1;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02E4 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_7;
          local_EAX_26001 = st::fn_00404813(this_00,nullptr);
          local_8 = local_EAX_26001;
          if (local_EAX_26001 == -1) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xad1);
          }
          if (local_EAX_26001 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_26064 = st::fn_00403A2B(this_00,0);
          if (local_EAX_26064 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xad5;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xadd;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xae8;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xae3;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb06;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb0b;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xaed;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb1f;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb47;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb29;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb24;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb3d;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xaf2;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb01;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb4c;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb10;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb1a;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xaf7;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb42;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xafc;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb15;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb33;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb2e;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb38;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02F0 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_A;
          local_EAX_27439 = st::fn_004045E8(this_00,0);
          local_8 = local_EAX_27439;
          if (local_EAX_27439 == -1) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xb58);
          }
          if (local_EAX_27439 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_27502 = st::fn_00403A2B(this_00,0);
          if (local_EAX_27502 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xb5c;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb64;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb6f;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb6a;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb8d;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb92;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb74;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xba6;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbce;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbb0;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbab;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbc4;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb79;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb88;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbd3;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb97;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xba1;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb7e;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbc9;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb83;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xb9c;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbba;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbb5;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbbf;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02EC == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_9;
          local_EAX_28888 = st::fn_004055C4(this_00,0);
          local_8 = local_EAX_28888;
          if (local_EAX_28888 == -1) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xbdf);
          }
          if (local_EAX_28888 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_28950 = st::fn_00403A2B(this_00,0);
          if (local_EAX_28950 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xbe3;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbeb;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbf6;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbf1;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc14;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc19;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xbfb;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc2d;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc55;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc37;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc32;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc4b;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc00;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc0f;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc5a;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc1e;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc28;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc05;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc50;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc0a;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc23;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc41;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc3c;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc46;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_031C == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_16;
          local_EAX_30313 = st::fn_00402E28(this_00,0);
          local_8 = local_EAX_30313;
          if (local_EAX_30313 == -1) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xc66);
          }
          if (local_EAX_30313 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_30376 = st::fn_00403A2B(this_00,0);
          if (local_EAX_30376 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xc6a;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc72;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc7d;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc78;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc9b;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xca0;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc82;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcb4;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcdc;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcbe;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcb9;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcd2;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc87;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc96;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xce1;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xca5;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcaf;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc8c;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcd7;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xc91;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcaa;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcc8;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcc3;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xccd;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0318 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_15;
          local_EAX_31751 = st::fn_00405880(this_00,0);
          local_8 = local_EAX_31751;
          if (local_EAX_31751 == -1) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xced);
          }
          if (local_EAX_31751 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_31814 = st::fn_00403A2B(this_00,0);
          if (local_EAX_31814 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xcf1;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcf9;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd04;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xcff;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd22;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd27;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd09;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd3b;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd63;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd45;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd40;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd59;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd0e;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd1d;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd68;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd2c;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd36;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd13;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd5e;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd18;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd31;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd4f;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd4a;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd54;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0320 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_17;
          iVar30 = st::fn_0040480E(this_00,nullptr);
          local_8 = iVar30;
          if (iVar30 == -1) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xd74);
          }
          if (iVar30 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_33262 = st::fn_00403A2B(this_00,0);
          if (local_EAX_33262 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xd78;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd80;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd8b;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd86;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xda9;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdae;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd90;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdc2;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdea;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdcc;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdc7;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xde0;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd95;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xda4;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdef;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdb3;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdbd;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd9a;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xde5;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xd9f;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdb8;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdd6;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xdd1;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xddb;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02F4 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_B;
          local_EAX_34625 = st::fn_004014FB(this_00,nullptr);
          local_8 = local_EAX_34625;
          if (local_EAX_34625 == -1) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xdfb);
          }
          if (local_EAX_34625 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_34688 = st::fn_00403A2B(this_00,0);
          if (local_EAX_34688 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xdff;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe07;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe12;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe0d;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe30;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe35;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe17;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe49;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe71;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe53;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe4e;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe67;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe1c;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe2b;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe76;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe3a;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe44;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe21;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe6c;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe26;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe3f;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe5d;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe58;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe62;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0310 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_12;
          local_EAX_36063 = st::fn_00403C1F(this_00,nullptr);
          local_8 = local_EAX_36063;
          if (local_EAX_36063 == -1) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xe82);
          }
          if (local_EAX_36063 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_36126 = st::fn_00403A2B(this_00,0);
          if (local_EAX_36126 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xe86;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe8e;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe99;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe94;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xeb7;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xebc;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xe9e;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xed0;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xef8;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xeda;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xed5;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xeee;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xea3;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xeb2;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xefd;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xec1;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xecb;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xea8;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xef3;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xead;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xec6;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xee4;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xedf;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xee9;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_02E8 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_8;
          local_EAX_37512 = st::fn_00404CFF(this_00,0);
          local_8 = local_EAX_37512;
          if (local_EAX_37512 == -1) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xf09);
          }
          if (local_EAX_37512 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_37574 = st::fn_00403A2B(this_00,0);
          if (local_EAX_37574 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xf0d;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf15;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf20;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf1b;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf3e;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf43;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf25;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf57;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf7f;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf61;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf5c;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf75;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf2a;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf39;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf84;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf48;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf52;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf2f;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf7a;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf34;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf4d;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf6b;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf66;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf70;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else if (this_00->field_0300 == 1) {
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_E;
          local_EAX_38937 = st::fn_004045A7(this_00,nullptr);
          local_8 = local_EAX_38937;
          if (local_EAX_38937 == -1) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0xf90);
          }
          if (local_EAX_38937 != 0) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_39000 = st::fn_00403A2B(this_00,0);
          if (local_EAX_39000 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0xf94;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xf9c;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfa7;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfa2;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfc5;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfca;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfac;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfde;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1006;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfe8;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfe3;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xffc;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfb1;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfc0;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x100b;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfcf;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfd9;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfb6;
          local_8 = local_EAX_10888;
          break;
        case CASE_12:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_76;
          local_EAX_10888 = st::fn_004035E4(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1001;
          local_8 = local_EAX_10888;
          break;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfbb;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfd4;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xff2;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xfed;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0xff7;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
      }
      else {
        if (this_00->field_02D4 != 1) goto LAB_0045910d;
        if (this_00->field_045D == 0) {
          this_00->field_045D = CASE_3;
          local_EAX_40375 = st::fn_00403A2B(this_00,0);
          if (local_EAX_40375 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x1017;
          local_8 = -1;
          goto cf_error_exit_0045AEE3;
        }
        switch(this_00->field_045D) {
        case CASE_1:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_65;
          local_EAX_10888 = st::fn_00403DF0(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x101e;
          local_8 = local_EAX_10888;
          break;
        case CASE_2:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_66;
          local_EAX_10888 = st::fn_00403553(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1028;
          local_8 = local_EAX_10888;
          break;
        case CASE_3:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_67;
          local_EAX_10888 = st::fn_0040493A(this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1023;
          local_8 = local_EAX_10888;
          break;
        case CASE_4:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_68;
          local_EAX_10888 = st::fn_004058BC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1046;
          local_8 = local_EAX_10888;
          break;
        case CASE_5:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_69;
          local_EAX_10888 = st::fn_00404507((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x104b;
          local_8 = local_EAX_10888;
          break;
        case CASE_6:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6A;
          local_EAX_10888 = st::fn_004026F3(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x102d;
          local_8 = local_EAX_10888;
          break;
        case CASE_7:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6B;
          local_EAX_10888 = st::fn_0040379C((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x105f;
          local_8 = local_EAX_10888;
          break;
        case CASE_8:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6C;
          local_EAX_10888 = st::fn_0040238D((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1082;
          local_8 = local_EAX_10888;
          break;
        case CASE_9:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6D;
          local_EAX_10888 = st::fn_00402B58(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1069;
          local_8 = local_EAX_10888;
          break;
        case CASE_A:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6E;
          local_EAX_10888 = st::fn_0040589E((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1064;
          local_8 = local_EAX_10888;
          break;
        case CASE_B:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_6F;
          local_EAX_10888 = st::fn_00405646(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x107d;
          local_8 = local_EAX_10888;
          break;
        case CASE_C:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_70;
          local_EAX_10888 = st::fn_004033DC(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1032;
          local_8 = local_EAX_10888;
          break;
        case CASE_D:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_71;
          local_EAX_10888 = st::fn_0040344A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1041;
          local_8 = local_EAX_10888;
          break;
        case CASE_E:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_72;
          local_EAX_10888 = st::fn_00404F39(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1087;
          local_8 = local_EAX_10888;
          break;
        case CASE_F:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_73;
          local_EAX_10888 = st::fn_00403F85(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1050;
          local_8 = local_EAX_10888;
          break;
        case CASE_10:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_74;
          local_EAX_10888 = st::fn_0040399A(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x105a;
          local_8 = local_EAX_10888;
          break;
        case CASE_11:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_75;
          local_EAX_10888 = st::fn_00401113(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1037;
          local_8 = local_EAX_10888;
          break;
        default:
          g_currentExceptionFrame = local_184.previous;
          return 0;
        case CASE_13:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_77;
          local_EAX_10888 = st::fn_00405213((int *)this_00,uVar17);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x103c;
          local_8 = local_EAX_10888;
          break;
        case CASE_14:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_78;
          local_EAX_10888 = st::fn_00402658(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1055;
          local_8 = local_EAX_10888;
          break;
        case CASE_15:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_79;
          local_EAX_10888 = st::fn_00405B2D(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1073;
          local_8 = local_EAX_10888;
          break;
        case CASE_16:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7A;
          local_EAX_10888 = st::fn_00404787((int *)this_00);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x106e;
          local_8 = local_EAX_10888;
          break;
        case CASE_17:
          this_00->field_045D = 0;
          this_00->field_0459 = CASE_7B;
          local_EAX_10888 = st::fn_00401938(this_00,nullptr);
          if (local_EAX_10888 != -1) goto cf_common_exit_00458C5B;
          iVar30 = 0x1078;
          local_8 = local_EAX_10888;
        }
      }
      local_EAX_10888 = local_8;
      st::fn_006A5E40
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar30);
cf_common_exit_00458C5B:
      if (local_EAX_10888 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_0459 = 0;
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
LAB_0045910d:
    switch(this_00->field_045D) {
    case CASE_1:
      iVar30 = st::fn_00401258(this_00,2);
      local_8 = iVar30;
      if (iVar30 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1094
                  );
      }
      if (iVar30 == 0) {
        this_00->field_045D = CASE_3;
        local_EAX_41779 = st::fn_00403A2B(this_00,0);
        if (local_EAX_41779 != -1) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        iVar30 = 0x1099;
        local_8 = -1;
      }
      else {
        if (iVar30 != 3) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if ((((this_00->field_00B3 == 0) &&
             (uVar17 = this_00->field_00BB - (int)this_00->field_005B, uVar27 = (int)uVar17 >> 0x1f,
             (int)((uVar17 ^ uVar27) - uVar27) < 2)) &&
            (uVar17 = this_00->field_00BF - (int)this_00->field_005D, uVar27 = (int)uVar17 >> 0x1f,
            (int)((uVar17 ^ uVar27) - uVar27) < 2)) &&
           ((uVar17 = this_00->field_00C3 - (int)this_00->field_005F, uVar27 = (int)uVar17 >> 0x1f,
            (int)((uVar17 ^ uVar27) - uVar27) < 2 &&
            (iVar30 = this_00->vfunc_18(*(short *)&this_00->field_00BB,
                                 *(short *)&this_00->field_00BF,*(short *)&this_00->field_00C3),
            iVar30 == 0)))) {
          this_00->field_045D = CASE_3;
          local_EAX_41949 = st::fn_00403A2B(this_00,0);
          if (local_EAX_41949 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x10ad;
          local_8 = -1;
        }
        else {
          local_EAX_41987 = st::fn_00402B26(local_1c,(uint)(ushort)this_00->field_0032,'\0');
          if (local_EAX_41987 != -4) {
            uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
            this_00->field_001C = uVar17;
            this_00->field_00F8 = (short)((ulonglong)(uVar17 >> 0x10) % 0x1f) + 0x1e;
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          this_00->field_045D = CASE_3;
          local_EAX_42010 = st::fn_00403A2B(this_00,0);
          if (local_EAX_42010 != -1) {
            g_currentExceptionFrame = local_184.previous;
            return 0;
          }
          iVar30 = 0x10b3;
          local_8 = -1;
        }
      }
      break;
    case CASE_2:
      local_EAX_42158 = st::fn_00404F52(this_00,2);
      local_8 = local_EAX_42158;
      if (local_EAX_42158 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10be
                  );
      }
      if (local_EAX_42158 != 0) {
        if (local_EAX_42158 == 3) {
          st::fn_00402B26(local_1c,(uint)(ushort)this_00->field_0032,'\0');
          iVar30 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = iVar30;
          this_00->field_00F8 = ((ushort)((uint)iVar30 >> 0x10) & 0xf) + 0xf;
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (local_EAX_42158 == 4) {
          local_1c->sub_00498D20(0x66,sVar41 + 0x32);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (local_EAX_42158 == 6) {
          local_1c->sub_00498D20(0x68,sVar41 + 0x32);
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        if (local_EAX_42158 != 7) {
          g_currentExceptionFrame = local_184.previous;
          return 0;
        }
        local_1c->sub_00498D20(0x69,sVar41 + 0x32);
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      local_46 = this_00->field_07F2;
      local_48 = this_00->field_0032;
      this_00->field_0816 = 5;
      local_1c->sub_00498D20(0x67,(short)&local_48);
      this_00->field_07F2 = 0xffff;
      this_00->field_045D = CASE_3;
      local_EAX_42267 = st::fn_00403A2B(this_00,0);
      if (local_EAX_42267 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x10c8;
      local_8 = -1;
      break;
    case CASE_3:
      local_EAX_42115 = st::fn_00403A2B(this_00,2);
      if (local_EAX_42115 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x10bb;
      local_8 = -1;
      break;
    case CASE_4:
      local_EAX_43020 = st::fn_00403EB8(this_00,2);
      local_8 = local_EAX_43020;
      if (local_EAX_43020 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x111a
                  );
      }
      if (local_EAX_43020 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pAVar22 = st::fn_00401DC5(*(char *)&this_00->field_0024);
      if (pAVar22 != nullptr) {
        local_9c.id = MESS_AIPLRCLASSTY_5D94;
        local_9c.arg0.words.high = this_00->field_0032;
        local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
        local_9c.arg1 = (STMessageArg)this_00->field_0018;
        pAVar22->st::fn_00404F07(&local_9c);
      }
      this_00->field_045D = CASE_3;
      local_EAX_43153 = st::fn_00403A2B(this_00,0);
      if (local_EAX_43153 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1127;
      local_8 = -1;
      break;
    case CASE_5:
      local_EAX_43196 = st::fn_00404DCC(this_00,2);
      local_8 = local_EAX_43196;
      if (local_EAX_43196 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x112c
                  );
      }
      if (local_EAX_43196 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_43258 = st::fn_00403A2B(this_00,0);
      if (local_EAX_43258 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1131;
      local_8 = -1;
      break;
    case CASE_6:
      local_EAX_42517 = st::fn_004042F5(this_00,2);
      local_8 = local_EAX_42517;
      if (local_EAX_42517 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10e8
                  );
      }
      if (local_EAX_42517 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_42580 = st::fn_00403A2B(this_00,0);
      if (local_EAX_42580 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x10ed;
      local_8 = -1;
      break;
    case CASE_7:
      local_EAX_43593 = st::fn_00404813(this_00,(int *)0x2);
      local_8 = local_EAX_43593;
      if (local_EAX_43593 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1154
                  );
      }
      if (local_EAX_43593 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_43656 = st::fn_00403A2B(this_00,0);
      if (local_EAX_43656 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1159;
      local_8 = -1;
      break;
    case CASE_8:
      local_EAX_44470 = st::fn_00404CFF(this_00,2);
      local_8 = local_EAX_44470;
      if (local_EAX_44470 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x11ac
                  );
      }
      if (local_EAX_44470 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_44533 = st::fn_00403A2B(this_00,0);
      if (local_EAX_44533 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x11b1;
      local_8 = -1;
      break;
    case CASE_9:
      local_EAX_43804 = st::fn_004055C4(this_00,2);
      local_8 = local_EAX_43804;
      if (local_EAX_43804 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1168
                  );
      }
      if (local_EAX_43804 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_43866 = st::fn_00403A2B(this_00,0);
      if (local_EAX_43866 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x116d;
      local_8 = -1;
      break;
    case CASE_A:
      local_EAX_43698 = st::fn_004045E8(this_00,2);
      local_8 = local_EAX_43698;
      if (local_EAX_43698 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x115e
                  );
      }
      if (local_EAX_43698 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_43761 = st::fn_00403A2B(this_00,0);
      if (local_EAX_43761 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1163;
      local_8 = -1;
      break;
    case CASE_B:
      local_EAX_44271 = st::fn_004014FB(this_00,(undefined4 *)0x2);
      local_8 = local_EAX_44271;
      if (local_EAX_44271 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1198
                  );
      }
      if (local_EAX_44271 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_44334 = st::fn_00403A2B(this_00,0);
      if (local_EAX_44334 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x119d;
      local_8 = -1;
      break;
    case CASE_C:
      local_EAX_42623 = st::fn_00405434(this_00,(int *)0x2);
      local_8 = local_EAX_42623;
      if (local_EAX_42623 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10f2
                  );
      }
      if (local_EAX_42623 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_42685 = st::fn_00403A2B(this_00,0);
      if (local_EAX_42685 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x10f7;
      local_8 = -1;
      break;
    case CASE_D:
      local_EAX_42927 = st::fn_00404C91(this_00,2);
      local_8 = local_EAX_42927;
      if (local_EAX_42927 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1110
                  );
      }
      if (local_EAX_42927 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_42989 = st::fn_00403A2B(this_00,0);
      if (local_EAX_42989 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1115;
      local_8 = -1;
      break;
    case CASE_E:
      local_EAX_44575 = st::fn_004045A7(this_00,(AnonShape_004803D0_350EB461 *)0x2);
      local_8 = local_EAX_44575;
      if (local_EAX_44575 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x11b6
                  );
      }
      if (local_EAX_44575 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_44638 = st::fn_00403A2B(this_00,0);
      if (local_EAX_44638 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x11bb;
      local_8 = -1;
      break;
    case CASE_F:
      local_EAX_43289 = st::fn_00404E1C(this_00,(AnonShape_005EFAE0_B406B78B *)0x2);
      local_8 = local_EAX_43289;
      if (local_EAX_43289 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1136
                  );
      }
      if (local_EAX_43289 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_43352 = st::fn_00403A2B(this_00,0);
      if (local_EAX_43352 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x113b;
      local_8 = -1;
      break;
    case CASE_10:
      local_EAX_43500 = st::fn_004011AE(this_00,2);
      local_8 = local_EAX_43500;
      if (local_EAX_43500 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x114a
                  );
      }
      if (local_EAX_43500 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_43562 = st::fn_00403A2B(this_00,0);
      if (local_EAX_43562 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x114f;
      local_8 = -1;
      break;
    case CASE_11:
      local_EAX_42716 = st::fn_00404543(this_00,2);
      local_8 = local_EAX_42716;
      if (local_EAX_42716 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x10fc
                  );
      }
      if (local_EAX_42716 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_42779 = st::fn_00403A2B(this_00,0);
      if (local_EAX_42779 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1101;
      local_8 = -1;
      break;
    case CASE_12:
      local_EAX_44377 = st::fn_00403C1F(this_00,(int *)0x2);
      local_8 = local_EAX_44377;
      if (local_EAX_44377 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x11a2
                  );
      }
      if (local_EAX_44377 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_44439 = st::fn_00403A2B(this_00,0);
      if (local_EAX_44439 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x11a7;
      local_8 = -1;
      break;
    case CASE_13:
      local_EAX_42821 = st::fn_004011D1(this_00,(int *)0x2);
      local_8 = local_EAX_42821;
      if (local_EAX_42821 == 0xffffffff) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1106
                  );
      }
      if (local_EAX_42821 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_42884 = st::fn_00403A2B(this_00,0);
      if (local_EAX_42884 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x110b;
      local_8 = -1;
      break;
    case CASE_14:
      local_EAX_43394 = st::fn_00404E08(this_00,(STBoatC *)0x2);
      local_8 = local_EAX_43394;
      if (local_EAX_43394 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1140
                  );
      }
      if (local_EAX_43394 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_43457 = st::fn_00403A2B(this_00,0);
      if (local_EAX_43457 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1145;
      local_8 = -1;
      break;
    case CASE_15:
      local_EAX_44073 = st::fn_00405880(this_00,2);
      local_8 = local_EAX_44073;
      if (local_EAX_44073 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1184
                  );
      }
      if (local_EAX_44073 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_44135 = st::fn_00403A2B(this_00,0);
      if (local_EAX_44135 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1189;
      local_8 = -1;
      break;
    case CASE_16:
      local_EAX_43897 = st::fn_00402E28(this_00,2);
      local_8 = local_EAX_43897;
      if (local_EAX_43897 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1172
                  );
      }
      if (local_EAX_43897 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      pAVar22 = st::fn_00401DC5(*(char *)&this_00->field_0024);
      if (pAVar22 != nullptr) {
        local_9c.id = MESS_AIPLRCLASSTY_5D94;
        local_9c.arg0.words.high = this_00->field_0032;
        local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
        local_9c.arg1 = (STMessageArg)this_00->field_0018;
        pAVar22->st::fn_00404F07(&local_9c);
      }
      this_00->field_045D = CASE_3;
      local_EAX_44030 = st::fn_00403A2B(this_00,0);
      if (local_EAX_44030 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x117f;
      local_8 = -1;
      break;
    case CASE_17:
      iVar30 = st::fn_0040480E(this_00,(STBoatC *)0x2);
      local_8 = iVar30;
      if (iVar30 == -1) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x118e
                  );
      }
      if (iVar30 != 0) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      this_00->field_045D = CASE_3;
      local_EAX_44229 = st::fn_00403A2B(this_00,0);
      if (local_EAX_44229 != -1) {
        g_currentExceptionFrame = local_184.previous;
        return 0;
      }
      iVar30 = 0x1193;
      local_8 = -1;
      break;
    default:
      g_currentExceptionFrame = local_184.previous;
      return 0;
    }
cf_error_exit_0045AEE3:
    st::fn_006A5E40
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar30);
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  if (SVar8 == MESS_ID_NONE) goto LAB_0045048a;
  if (SVar8 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  local_1c = (STGroupBoatC *)(message->arg0).u32;
  st::fn_00402B5D(this_00,0);
  if (*(int *)&local_1c->field_0xc == 0) {
    dVar15 = (message->arg0).u32;
    *(undefined4 *)(this_00->field_06CB + 5) = *(undefined4 *)(dVar15 + 0x14);
    *(undefined4 *)((int)this_00->field_06CB + 0x2c) = *(undefined4 *)(dVar15 + 0x18);
    iVar14 = *(int *)(dVar15 + 0x2a);
    if (iVar14 < 0) {
      this_00->field_07D6 = 0;
    }
    else if (iVar14 < 0x79) {
      this_00->field_07D6 = iVar14 / 3;
    }
    else {
      this_00->field_07D6 = 0x28;
    }
    iVar14 = *(int *)(dVar15 + 0x2e);
    if (iVar14 < 0) {
      this_00->field_07DA = 0;
    }
    else if (iVar14 < 0x321) {
      this_00->field_07DA = iVar14 / 0x14;
    }
    else {
      this_00->field_07DA = 0x28;
    }
    iVar14 = this_00->field_07DA + this_00->field_07D6;
    if (0x28 < iVar14) {
      iVar14 = (this_00->field_07D6 * 0x28) / iVar14;
      this_00->field_07D6 = iVar14;
      this_00->field_07DA = 0x28 - iVar14;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar14 = *(int *)((int)this_00->field_06CB + 0x2c);
    switch(iVar14) {
    case 0x16:
    case 0x25:
      this_00->field_0726 = 0x28;
      break;
    case 0x17:
      this_00->field_072A = 0x28;
      break;
    case 0x1b:
    case 0x1d:
    case 0x24:
      this_00->field_071E = 0x14;
      break;
    case 0x23:
      this_00->field_0722 = 0x14;
    }
    sVar41 = *(short *)(dVar15 + 0x1c);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT22((short)((uint)(iVar14 + -0x16) >> 0x10),sVar41);
    sVar4 = *(short *)(dVar15 + 0x20);
    sVar5 = *(short *)(dVar15 + 0x1e);
    if (((sVar41 < 0) || (g_worldGrid.sizeX <= sVar41)) ||
       ((sVar5 < 0 ||
        (((g_worldGrid.sizeY <= sVar5 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))))) {
      local_10 = nullptr;
    }
    else {
      local_10 = (STFishC *)
                 STGridAt3D(g_worldGrid, sVar41, sVar5, sVar4).objects[(byte)this_00->field_008E];
    }
    if (local_10 != nullptr) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar14 = (*local_10->vtable->vfunc_114)(*(undefined4 *)((int)this_00->field_06CB + 0x2c));
      if (iVar14 == 0) {
        local_EAX_595 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x197,0,0,"%s",
                                "STBoatC::GetMessage MESS_ID_CREATE FLAG_BASE PairObjectAvail()==FALSE");
        if (local_EAX_595 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x198);
      }
      (*local_10->vtable->vfunc_118)(this_00->field_0018);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar14 = *(int *)((int)this_00->field_06CB + 0x2c);
      if (((iVar14 == 7) || (iVar14 == 0x13)) || (iVar14 == 0x1b)) {
        this_00->field_07CA = (AnonShape_005EFAE0_B406B78B *)local_10->field_0018;
        st::fn_006EA3E0
                  (this_00->field_0211,this_00->field_01ED,*(int *)&local_10->field_0x1ed);
      }
    }
    *(undefined4 *)(this_00->field_06CB + 6) = *(undefined4 *)(dVar15 + 0x36);
    *(undefined4 *)((int)this_00->field_06CB + 0x34) = *(undefined4 *)(dVar15 + 0x3a);
    *(undefined4 *)(this_00->field_06CB + 7) = *(undefined4 *)(dVar15 + 0x3e);
    *(undefined2 *)((int)this_00->field_06CB + 0x3c) = *(undefined2 *)(dVar15 + 0x42);
    *(undefined1 *)((int)this_00->field_06CB + 0x3e) = *(undefined1 *)(dVar15 + 0x44);
    this_00->field_073E = *(undefined4 *)(dVar15 + 0x32);
    if (local_10 == nullptr) {
      this_00->field_0076 = 1;
      uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
      this_00->field_001C = uVar17;
      this_00->field_006E = (short)((ulonglong)(uVar17 >> 0x10) % 0x30);
    }
    else {
      this_00->field_006E = *(undefined2 *)&local_10->field_0x6e;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar14 = *(int *)((int)this_00->field_06CB + 0x2c);
      if (((iVar14 == 7) || (iVar14 == 0x13)) || (iVar14 == 0x1b)) {
        this_00->field_0076 = 1;
      }
      else {
        this_00->field_0076 = 0;
      }
    }
    st::fn_004045AC((AnonShape_00416390_86C8F938 *)this_00);
    this_00->field_00E3 = 0;
    st::fn_00404796(this_00);
    iVar14 = *(int *)(dVar15 + 0x26);
    if (iVar14 < 0) {
      this_00->field_0716 = 1;
    }
    else {
      if (iVar14 < 100) {
        iVar14 = (this_00->field_0712 * iVar14) / 100;
      }
      else {
        iVar14 = this_00->field_0712;
      }
      this_00->field_0716 = iVar14;
    }
    st::fn_00405060((AnonShape_0048A910_6D6DD7B1 *)this_00);
    st::fn_00401BD1((AnonShape_0048A840_34A87A21 *)this_00);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((((local_10 == nullptr) ||
         (iVar14 = *(int *)((int)this_00->field_06CB + 0x2c), iVar14 == 7)) || (iVar14 == 0x13)) ||
       (iVar14 == 0x1b)) {
      st::fn_0040295F(this_00,*(short *)(dVar15 + 0x1c),*(short *)(dVar15 + 0x1e),
                         *(short *)(dVar15 + 0x20),1);
    }
    else {
      st::fn_0040295F(this_00,*(short *)(dVar15 + 0x1c),*(short *)(dVar15 + 0x1e),
                         *(short *)(dVar15 + 0x20),0);
      this_00->field_0041 = *(short *)&local_10->field_0x41;
      this_00->field_0043 = *(short *)&local_10->field_0x43;
      this_00->field_0045 = *(short *)&local_10->field_0x45;
      this_00->field_004D = local_10->field_0x4d;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar14 = *(int *)((int)this_00->field_06CB + 0x2c);
    if ((iVar14 == 9) || (iVar14 == 0x15)) {
      sVar41 = 8;
    }
    else {
      sVar41 = 0x18;
    }
    st::fn_00401AAA(this_00,sVar41);
    if (local_10 == nullptr) {
      iVar14 = this_00->field_001C * 0x41c64e6d + 0x3039;
      this_00->field_001C = iVar14;
      st::fn_00405DC1(this_00,((ushort)((uint)iVar14 >> 0x10) & 7) * 0x2d);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar25 = extraout_var_03;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar28 = extraout_var_06;
    }
    else {
      this_00->field_006C = local_10->field_006C;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar25 = extraout_var_02;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar28 = extraout_var_05;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    st::fn_004052C2
              (g_allPlayers_007FA174,*(char *)&this_00->field_0024,
               CONCAT22(uVar28,*(undefined2 *)(dVar15 + 0x24)),
               CONCAT22(uVar25,*(undefined2 *)(dVar15 + 0x22)),(int *)this_00,1,
               *(int *)(dVar15 + 0x49));
    this_00->field_0487 = 0xffffffff;
    this_00->field_048B = 0xffff;
    this_00->field_0814 = this_00->field_0816 * 0xc9;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((local_10 == nullptr) ||
        (iVar14 = *(int *)((int)this_00->field_06CB + 0x2c), iVar14 == 7)) ||
       ((iVar14 == 0x13 || (iVar14 == 0x1b)))) {
      this_00->field_082E = 0xffffffff;
      this_00->field_0836 = 4;
      this_00->field_0475 = this_00->field_0047;
      this_00->field_0477 = this_00->field_0049;
      this_00->field_0479 = this_00->field_004B;
    }
    else {
      this_00->field_045D = CASE_14;
      this_00->field_07C2 = 1;
      this_00->vfunc_100((byte)this_00->field_01D1 | 0xd);
      this_00->field_05C0 = 3;
      this_00->field_05A0 = this_00->field_0030;
      this_00->field_05A2 = (AnonShape_005EFAE0_B406B78B *)local_10->field_0018;
      this_00->field_05A6 = nullptr;
      this_00->field_05C4 = 7;
    }
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    local_d4 = (uVar17 >> 0x10) % 0x13;
    dVar15 = this_00->slot_2C();
    st::fn_00405E39(STReplaceLowByte((uint32_t)(dVar15), (uint8_t)(*(undefined1 *)&this_00->field_0024)),dVar15);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (this_00->field_0024 == (uint)*(byte *)(this_00->field_0010 + 0x112d)) {
      st::fn_00404B8D((char)this_00->field_0024);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 5:
    case 0xb:
    case 0x11:
    case 0x1c:
    case 0x21:
    case 0x24:
    case 0x25:
      *(undefined4 *)((int)this_00->field_06CB + 0x3f) = 8;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    default:
      *(undefined4 *)((int)this_00->field_06CB + 0x3f) = 5;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_004023A1
              ((TLOEmbryoTy *)this_00,*(undefined **)((int)this_00->field_06CB + 0x3f));
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    iVar14 = ((uVar17 >> 0x10) % 5) * 0x19;
    this_00->field_077E = iVar14 + -0xf;
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    this_00->field_077A = (uVar17 >> 0x10) % (iVar14 - 0xeU);
  }
  if (*(int *)&local_1c->field_0xc == 1) {
    dVar15 = (message->arg0).u32;
    *(undefined4 *)(this_00->field_06CB + 5) = *(undefined4 *)(dVar15 + 0x14);
    *(undefined4 *)((int)this_00->field_06CB + 0x2c) = *(undefined4 *)(dVar15 + 0x18);
    *(undefined4 *)(this_00->field_06CB + 6) = *(undefined4 *)(dVar15 + 0x32);
    *(undefined4 *)((int)this_00->field_06CB + 0x34) = *(undefined4 *)(dVar15 + 0x36);
    *(undefined4 *)(this_00->field_06CB + 7) = *(undefined4 *)(dVar15 + 0x3a);
    *(undefined2 *)((int)this_00->field_06CB + 0x3c) = *(undefined2 *)(dVar15 + 0x3e);
    *(undefined1 *)((int)this_00->field_06CB + 0x3e) = *(undefined1 *)(dVar15 + 0x40);
    this_00->field_081E = *(undefined4 *)(dVar15 + 0x41);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
    case 0x16:
    case 0x25:
      this_00->field_0726 = 0x28;
      break;
    case 0x17:
      this_00->field_072A = 0x28;
      break;
    case 0x1b:
    case 0x1d:
    case 0x24:
      this_00->field_071E = 0x14;
      break;
    case 0x23:
      this_00->field_0722 = 0x14;
    }
    this_00->field_0076 = 1;
    this_00->field_006E = 0;
    st::fn_004045AC((AnonShape_00416390_86C8F938 *)this_00);
    this_00->field_00E3 = 0;
    st::fn_00404796(this_00);
    st::fn_00405060((AnonShape_0048A910_6D6DD7B1 *)this_00);
    st::fn_00401BD1((AnonShape_0048A840_34A87A21 *)this_00);
    st::fn_00404EC1(*(short *)(dVar15 + 0x1c),*(short *)(dVar15 + 0x1e),*(short *)(dVar15 + 0x20)
                       ,this_00->field_008E,(AnonShape_00495FF0_59081BDD *)this_00);
    this_00->field_0047 = *(short *)(dVar15 + 0x1c);
    this_00->field_0041 = *(short *)(dVar15 + 0x22);
    this_00->field_0049 = *(short *)(dVar15 + 0x1e);
    this_00->field_0043 = *(short *)(dVar15 + 0x24);
    this_00->field_004B = *(short *)(dVar15 + 0x20);
    this_00->field_0045 = *(short *)(dVar15 + 0x26);
    st::fn_00401325
              (this_00->field_0047,this_00->field_0049,this_00->field_004B,this_00->field_008E,
               (RecoveredRecord_DumpClassC_00495EC0 *)this_00);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar14 = *(int *)((int)this_00->field_06CB + 0x2c);
    if ((iVar14 == 9) || (iVar14 == 0x15)) {
      sVar41 = 8;
    }
    else {
      sVar41 = 0x18;
    }
    st::fn_00401AAA(this_00,sVar41);
    uVar18 = st::fn_00405DC1(this_00,0x5a);
    st::fn_004052C2
              (g_allPlayers_007FA174,*(char *)&this_00->field_0024,
               STReplaceLowWord((uint32_t)(uVar18), (uint16_t)(*(undefined2 *)(dVar15 + 0x2a))),0xffff,
               (int *)this_00,0,0);
    this_00->field_045D = CASE_13;
    this_00->field_0510 = *(undefined2 *)(dVar15 + 0x1c);
    this_00->field_0512 = *(undefined2 *)(dVar15 + 0x1e);
    this_00->field_0514 = *(undefined2 *)(dVar15 + 0x20);
    this_00->field_0516 = *(undefined2 *)(dVar15 + 0x22);
    this_00->field_0518 = *(undefined2 *)(dVar15 + 0x24);
    this_00->field_051A = *(undefined2 *)(dVar15 + 0x26);
    this_00->field_051C = *(short *)(dVar15 + 0x2c);
    this_00->field_051E = *(short *)(dVar15 + 0x2e);
    this_00->field_0520 = *(short *)(dVar15 + 0x30);
    local_10 = (STFishC *)
               st::fn_004028BA
                         (g_allPlayers_007FA174,*(char *)&this_00->field_0024,
                          *(ushort *)(dVar15 + 0x28),CASE_1);
    if ((STGameObjC *)local_10 == nullptr) {
      this_00->field_0524 = 0;
    }
    else {
      this_00->field_0524 = ((STGameObjC *)local_10)->field_0018;
    }
    this_00->field_0528 = 0;
    st::fn_006EA460
              (this_00->field_0211,this_00->field_01ED,((STGameObjC *)local_10)->field_01ED);
    local_d4 = DAT_008073fc * 5;
    dVar19 = this_00->slot_2C();
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    st::fn_00405E39(STReplaceLowByte((uint32_t)(extraout_ECX), (uint8_t)(*(undefined1 *)&this_00->field_0024))
                       ,dVar19);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (this_00->field_0024 == (uint)*(byte *)(this_00->field_0010 + 0x112d)) {
      st::fn_00404B8D((char)this_00->field_0024);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 5:
    case 0xb:
    case 0x11:
    case 0x1c:
    case 0x21:
    case 0x24:
    case 0x25:
      *(undefined4 *)((int)this_00->field_06CB + 0x3f) = 8;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    default:
      *(undefined4 *)((int)this_00->field_06CB + 0x3f) = 5;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_004023A1
              ((TLOEmbryoTy *)this_00,*(undefined **)((int)this_00->field_06CB + 0x3f));
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    iVar14 = ((uVar17 >> 0x10) % 5) * 0x19;
    this_00->field_077E = iVar14 + -0xf;
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    this_00->field_077A = (uVar17 >> 0x10) % (iVar14 - 0xeU);
    if (DAT_008117bc != nullptr) {
      local_9c.id = MESS_AIBOSSCLASSTY_5DD0;
      local_9c.arg0.words.high = this_00->field_0032;
      local_9c.arg0.words.low = *(undefined2 *)&this_00->field_0024;
      local_9c.arg1.words.high = *(undefined2 *)(dVar15 + 0x28);
      local_9c.arg1.words.low = *(undefined2 *)&this_00->field_0024;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*DAT_008117bc)(&local_9c);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
    case 1:
      uVar25 = 200;
      break;
    case 2:
      uVar25 = 0xce;
      break;
    case 3:
      uVar25 = 0xd4;
      break;
    case 4:
      uVar25 = 0xda;
      break;
    case 5:
      uVar25 = 0xe0;
      break;
    case 6:
      uVar25 = 0xe7;
      break;
    case 7:
      uVar25 = 0xee;
      break;
    case 8:
      uVar25 = 0xf5;
      break;
    case 9:
      uVar25 = 0xfd;
      break;
    case 10:
      uVar25 = 0x102;
      break;
    case 0xb:
      uVar25 = 0x108;
      break;
    case 0xc:
      uVar25 = 0x10e;
      break;
    case 0xd:
      uVar25 = 300;
      break;
    case 0xe:
      uVar25 = 0x132;
      break;
    case 0xf:
      uVar25 = 0x138;
      break;
    case 0x10:
      uVar25 = 0x13e;
      break;
    case 0x11:
      uVar25 = 0x144;
      break;
    case 0x12:
      uVar25 = 0x14b;
      break;
    case 0x13:
      uVar25 = 0x152;
      break;
    case 0x14:
      uVar25 = 0x159;
      break;
    case 0x15:
      uVar25 = 0x161;
      break;
    case 0x16:
      uVar25 = 0x166;
      break;
    case 0x17:
      uVar25 = 0x16e;
      break;
    case 0x18:
      uVar25 = 0x174;
      break;
    case 0x19:
      uVar25 = 400;
      break;
    case 0x1a:
      uVar25 = 0x198;
      break;
    case 0x1b:
      uVar25 = 0x1a0;
      break;
    case 0x1c:
      uVar25 = 0x1a6;
      break;
    case 0x1d:
      uVar25 = 0x1ac;
      break;
    case 0x1e:
      uVar25 = 0x1b3;
      break;
    case 0x1f:
      uVar25 = 0x1b9;
      break;
    case 0x20:
      uVar25 = 0x1bf;
      break;
    case 0x21:
      uVar25 = 0x1c5;
      break;
    case 0x22:
      uVar25 = 0x1cc;
      break;
    case 0x23:
      uVar25 = 0x1d3;
      break;
    case 0x24:
      uVar25 = 0x1d9;
      break;
    case 0x25:
      uVar25 = 0x17a;
      break;
    case 0x26:
      uVar25 = 0x114;
      break;
    case 0x27:
      uVar25 = 0x180;
      break;
    case 0x28:
      uVar25 = 0x1df;
      break;
    default:
      uVar25 = 0;
    }
    this_00->vfunc_90(4,uVar25);
  }
  if (*(int *)&local_1c->field_0xc == 2) {
    iVar14 = (message->arg0).i32;
    local_d0 = st::fn_006AAC70(0x44);
    do {
      *(int **)(iVar30 + (int)local_d0) = PTR_0080677c;
      iVar30 = iVar30 + 4;
    } while (iVar30 < 0x44);
    local_d0[2] = PTR_00806774;
    local_d0[1] = PTR_00806774;
    *local_d0 = PTR_00806774;
    local_d0[0xf] = PTR_00806774;
    local_d0[9] = PTR_00806764;
    local_d0[8] = PTR_00806774;
    local_d0[10] = PTR_00806774;
    local_d0[0xb] = PTR_00806774;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = PTR_008073cc;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    st::fn_00404CA5
              ((STT3DSprC *)&this_00->field_01D5,(int *)&local_d0,
               (AnonShape_004AD790_77673787 *)(*(int *)(iVar14 + 0x5f6) + iVar14));
    st::fn_006AB060(&local_d0);
    st::fn_0040551F
              ((STAllPlayersC *)this_00,(undefined4 *)(*(int *)(iVar14 + 0x5fe) + iVar14));
    st::fn_0040333C(this_00,iVar14);
    this_00->field_05A6 = nullptr;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    st::fn_004052C2
              (g_allPlayers_007FA174,*(char *)&this_00->field_0024,
               CONCAT22(extraout_var_04,this_00->field_0030),
               CONCAT22(extraout_var,this_00->field_0032),(int *)this_00,1,0);
    if ((this_00->field_045D != CASE_14) || (this_00->field_05C0 != 3)) {
      st::fn_00401325
                (this_00->field_005B,this_00->field_005D,this_00->field_005F,0,
                 (RecoveredRecord_DumpClassC_00495EC0 *)this_00);
    }
    st::fn_00405060((AnonShape_0048A910_6D6DD7B1 *)this_00);
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2a6
              );
  }
  local_74[0] = '\0';
  local_e8[0] = '\0';
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
  case 1:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e8c;
    break;
  case 2:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e84;
    break;
  case 3:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e7c;
    break;
  case 4:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e74;
    break;
  case 5:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e6c;
    break;
  case 6:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e64;
    break;
  case 7:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e5c;
    break;
  case 8:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e54;
    break;
  case 9:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e50;
    break;
  case 10:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e48;
    break;
  case 0xb:
    uVar17 = 0xffffffff;
    pcVar36 = &CHAR_l_007a9e40;
    do {
      pcVar35 = pcVar36;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar35 = pcVar36 + 1;
      cVar1 = *pcVar36;
      pcVar36 = pcVar35;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar30 = -1;
    pcVar36 = local_74;
    do {
      pcVar34 = pcVar36;
      if (iVar30 == 0) break;
      iVar30 = iVar30 + -1;
      pcVar34 = pcVar36 + 1;
      cVar1 = *pcVar36;
      pcVar36 = pcVar34;
    } while (cVar1 != '\0');
    pcVar35 = pcVar35 + -uVar17;
    pcVar34 = pcVar34 + -1;
    for (uVar27 = uVar17 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
      *(undefined4 *)pcVar34 = *(undefined4 *)pcVar35;
      pcVar35 = pcVar35 + 4;
      pcVar34 = pcVar34 + 4;
    }
    pcVar36 = local_e8;
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar34 = *pcVar35;
      pcVar35 = pcVar35 + 1;
      pcVar34 = pcVar34 + 1;
    }
    pcVar35 = &CHAR_l_007a9e94;
    break;
  case 0xc:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e38;
    break;
  case 0xd:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e30;
    break;
  case 0xe:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e28;
    break;
  case 0xf:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e20;
    break;
  case 0x10:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e18;
    break;
  case 0x11:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e10;
    break;
  case 0x12:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e08;
    break;
  case 0x13:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9e00;
    break;
  case 0x14:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9df8;
    break;
  case 0x15:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9df4;
    break;
  case 0x16:
    uVar17 = 0xffffffff;
    pcVar36 = &CHAR_p_007a9dec;
    do {
      pcVar35 = pcVar36;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar35 = pcVar36 + 1;
      cVar1 = *pcVar36;
      pcVar36 = pcVar35;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar30 = -1;
    pcVar36 = local_74;
    do {
      pcVar34 = pcVar36;
      if (iVar30 == 0) break;
      iVar30 = iVar30 + -1;
      pcVar34 = pcVar36 + 1;
      cVar1 = *pcVar36;
      pcVar36 = pcVar34;
    } while (cVar1 != '\0');
    pcVar35 = pcVar35 + -uVar17;
    pcVar34 = pcVar34 + -1;
    for (uVar27 = uVar17 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
      *(undefined4 *)pcVar34 = *(undefined4 *)pcVar35;
      pcVar35 = pcVar35 + 4;
      pcVar34 = pcVar34 + 4;
    }
    pcVar36 = local_e8;
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar34 = *pcVar35;
      pcVar35 = pcVar35 + 1;
      pcVar34 = pcVar34 + 1;
    }
    pcVar35 = &CHAR_p_007a9e9c;
    break;
  case 0x17:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9de4;
    break;
  case 0x18:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9ddc;
    break;
  case 0x19:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9dd8;
    break;
  case 0x1a:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9dd4;
    break;
  case 0x1b:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9dd0;
    break;
  case 0x1c:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9dcc;
    break;
  case 0x1d:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9dc8;
    break;
  case 0x1e:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9dc4;
    break;
  case 0x1f:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9dc0;
    break;
  case 0x20:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9dbc;
    break;
  case 0x21:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9db8;
    break;
  case 0x22:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9db4;
    break;
  case 0x23:
    uVar17 = 0xffffffff;
    pcVar36 = &CHAR_g_007a9db0;
    do {
      pcVar35 = pcVar36;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar35 = pcVar36 + 1;
      cVar1 = *pcVar36;
      pcVar36 = pcVar35;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar30 = -1;
    pcVar36 = local_74;
    do {
      pcVar34 = pcVar36;
      if (iVar30 == 0) break;
      iVar30 = iVar30 + -1;
      pcVar34 = pcVar36 + 1;
      cVar1 = *pcVar36;
      pcVar36 = pcVar34;
    } while (cVar1 != '\0');
    pcVar35 = pcVar35 + -uVar17;
    pcVar34 = pcVar34 + -1;
    for (uVar27 = uVar17 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
      *(undefined4 *)pcVar34 = *(undefined4 *)pcVar35;
      pcVar35 = pcVar35 + 4;
      pcVar34 = pcVar34 + 4;
    }
    pcVar36 = local_e8;
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar34 = *pcVar35;
      pcVar35 = pcVar35 + 1;
      pcVar34 = pcVar34 + 1;
    }
    pcVar35 = &CHAR_g_007a9ea4;
    break;
  case 0x24:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9dac;
    break;
  case 0x25:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9da4;
    break;
  case 0x26:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9d9c;
    break;
  case 0x27:
    pcVar36 = local_74;
    pcVar35 = &DAT_007a9d94;
    break;
  case 0x28:
    pcVar36 = local_74;
    pcVar35 = &CHAR_f_007a9d8c;
    break;
  default:
    goto switchD_0044fb10_default;
  }
  uVar17 = 0xffffffff;
  do {
    pcVar34 = pcVar35;
    if (uVar17 == 0) break;
    uVar17 = uVar17 - 1;
    pcVar34 = pcVar35 + 1;
    cVar1 = *pcVar35;
    pcVar35 = pcVar34;
  } while (cVar1 != '\0');
  uVar17 = ~uVar17;
  iVar30 = -1;
  do {
    pcVar35 = pcVar36;
    if (iVar30 == 0) break;
    iVar30 = iVar30 + -1;
    pcVar35 = pcVar36 + 1;
    cVar1 = *pcVar36;
    pcVar36 = pcVar35;
  } while (cVar1 != '\0');
  pcVar36 = pcVar34 + -uVar17;
  pcVar35 = pcVar35 + -1;
  memmove(pcVar35, pcVar36, uVar17); /* compiler REP MOVS byte copy */
  uVar27 = 0;
switchD_0044fb10_default:
  iVar30 = st::fn_00404183
                     ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080677c,local_74,CASE_1D);
  if (iVar30 != 0) {
    st::fn_006A5E40
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2da);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar30 = *(int *)((int)this_00->field_06CB + 0x2c);
  if ((((iVar30 == 0xb) || (iVar30 == 0x16)) || (iVar30 == 0x23)) &&
     (iVar30 = st::fn_00404183
                         ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080677c,local_e8,CASE_1D),
     iVar30 != 0)) {
    st::fn_006A5E40
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2de);
  }
  switch((int)this_00->field_06CB[5]) {
  case 0:
    pcVar36 = &CHAR_0_007a9d88;
    break;
  case 1:
    pcVar36 = &CHAR_1_007a4ffc;
    break;
  case 2:
    pcVar36 = &DAT_007aa028;
    break;
  case 3:
    pcVar36 = &DAT_007aa024;
    break;
  case 4:
    pcVar36 = &DAT_007aa020;
    break;
  case 5:
    pcVar36 = &DAT_007aa01c;
    break;
  case 6:
    pcVar36 = &DAT_007aa018;
    break;
  case 7:
    pcVar36 = &CHAR_7_007aa014;
    break;
  default:
    goto switchD_0044fe4c_default;
  }
  uVar17 = 0xffffffff;
  do {
    pcVar35 = pcVar36;
    if (uVar17 == 0) break;
    uVar17 = uVar17 - 1;
    pcVar35 = pcVar36 + 1;
    cVar1 = *pcVar36;
    pcVar36 = pcVar35;
  } while (cVar1 != '\0');
  uVar17 = ~uVar17;
  iVar30 = -1;
  pcVar36 = local_74;
  do {
    pcVar34 = pcVar36;
    if (iVar30 == 0) break;
    iVar30 = iVar30 + -1;
    pcVar34 = pcVar36 + 1;
    cVar1 = *pcVar36;
    pcVar36 = pcVar34;
  } while (cVar1 != '\0');
  pcVar36 = pcVar35 + -uVar17;
  pcVar35 = pcVar34 + -1;
  memmove(pcVar35, pcVar36, uVar17); /* compiler REP MOVS byte copy */
switchD_0044fe4c_default:
  puVar21 = &this_00->field_01D5;
  iVar30 = st::fn_00404183((STT3DSprC *)puVar21,0xc,PTR_0080677c,local_74,CASE_1D);
  if (iVar30 != 0) {
    st::fn_006A5E40
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2eb);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)((int)this_00->field_06CB + 0x2c)) {
  case 9:
    local_c = ((8 - (int)this_00->field_006C / 0x2d) * 0xf) % 0x78;
    uVar27 = 0xe;
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    break;
  default:
    local_c = ((0x18 - (int)this_00->field_006C / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
    goto LAB_0045003f;
  case 0x15:
    local_c = ((8 - (int)this_00->field_006C / 0x2d) * 0x14) % 0xa0;
    uVar27 = 0x13;
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    break;
  case 0x24:
  case 0x25:
    uVar17 = this_00->field_001C * 0x41c64e6d + 0x3039;
    this_00->field_001C = uVar17;
    local_c = (uVar17 >> 0x10) % 10;
LAB_0045003f:
    st::fn_00401064((STT3DSprC *)puVar21,'\x0e',local_c);
    uVar17 = local_c;
    goto LAB_00450050;
  }
  uVar27 = (uVar17 >> 0x10) % uVar27;
  this_00->field_0822 = uVar27;
  st::fn_00401064((STT3DSprC *)puVar21,'\x0e',uVar27 + local_c);
  uVar17 = this_00->field_0822 + local_c;
LAB_00450050:
  st::fn_00401064((STT3DSprC *)puVar21,'\f',uVar17);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar30 = *(int *)((int)this_00->field_06CB + 0x2c);
  if ((iVar30 != 0x25) && (iVar30 != 0x24)) {
    st::fn_00405AA6(puVar21,'\x0e');
    st::fn_00405AA6(puVar21,'\f');
  }
  st::fn_00405240((STT3DSprC *)puVar21,0xe,g_playSystem_00802A38->field_00E4);
  st::fn_00405240((STT3DSprC *)puVar21,0xc,g_playSystem_00802A38->field_00E4);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar30 = *(int *)((int)this_00->field_06CB + 0x2c);
  if (((iVar30 == 0xb) || (iVar30 == 0x16)) || (iVar30 == 0x23)) {
    st::fn_00402EA5(puVar21,'\r',g_playSystem_00802A38->field_00E4 & 1);
    st::fn_00405240((STT3DSprC *)puVar21,0xd,g_playSystem_00802A38->field_00E4);
    st::fn_00401064((STT3DSprC *)puVar21,'\r',local_d4);
  }
  local_78 = (uint)this_00->field_0041;
  st::fn_004045D9
            ((STT3DSprC *)puVar21,(float)(int)local_78 * _DAT_007904f8 * _DAT_007904f0,
             (float)(int)this_00->field_0043 * _DAT_007904f8 * _DAT_007904f0,
             (float)(int)this_00->field_0045 * _DAT_007904f8 * _DAT_007904f0);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar30 = *(int *)((int)this_00->field_06CB + 0x2c);
  uVar17 = local_c;
  if ((iVar30 != 0x25) && (iVar30 != 0x24)) {
    uVar17 = (0x18 - (int)this_00->field_006C / 0xf) % 0x18;
  }
  st::fn_004052FE((STT3DSprC *)puVar21,'\x0e',uVar17);
  st::fn_00401997((AnonShape_0041F630_B1BEE81C *)this_00);
  if (DAT_00807326 == '\0') {
    st::fn_00402A90((STT3DSprC *)puVar21);
  }
  if (*(int *)&local_1c->field_0xc == 0) {
    local_78 = (message->arg0).u32;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(local_78 + 0x45) == 1) {
      iVar30 = st::fn_00404183
                         ((STT3DSprC *)puVar21,0xb,PTR_00806774,"forcef0",CASE_1D);
      if (iVar30 != 0) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x31b);
      }
      st::fn_004059F2(puVar21,'\x0e');
      st::fn_00402BDF(puVar21,'\v');
      st::fn_004022D4(puVar21,'\v');
      st::fn_00405240((STT3DSprC *)puVar21,0xb,g_playSystem_00802A38->field_00E4);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(local_78 + 0x45) == 3) {
      st::fn_004051A5(this_00->field_01ED,1,-1,-1,-1,0x12);
    }
  }
  st::fn_006A5E40
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x329);
LAB_00450268:
  this_00->field_046B = nullptr;
  st::fn_006E62D0(g_playSystem_00802A38,this_00->field_0471,(int *)&this_00->field_046B);
  if (this_00->field_07CA != nullptr) {
    iVar30 = st::fn_006E62D0(g_playSystem_00802A38,this_00->field_07CA,&local_30);
    if (iVar30 == -4) {
      local_EAX_5256 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x335,0,0,"%s",
                              "STBoatC::GetMessage MESS_ID_ALLCREATE data.lname!=0");
      if (local_EAX_5256 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x336);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006EA3E0
              (this_00->field_0211,this_00->field_01ED,*(int *)(local_30 + 0x1ed));
  }
  if ((this_00->field_045D == CASE_F) && (this_00->field_0596 == 3)) {
    iVar30 = st::fn_006E62D0(g_playSystem_00802A38,this_00->field_058E,&local_30);
    if (iVar30 == -4) {
      local_EAX_5399 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x33c,0,0,"%s",
                              "STBoatC::GetMessage MESS_ID_ALLCREATE sloi.name");
      if (local_EAX_5399 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x33d);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006EA3E0
              (this_00->field_0211,this_00->field_01ED,*(int *)(local_30 + 0x1ed));
    g_currentExceptionFrame = local_184.previous;
    return 0;
  }
  g_currentExceptionFrame = local_184.previous;
  return 0;
}

// 0045EF00 STBoatC::CmdToObj
#line 4 "decomp/ST.exe/functions/0045EF00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CmdToObj

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_CmdToObj_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_21=33

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0046B100 -> 0045EF00 @ 0046B5C6; address of STBoatC::Build parameter param_1 | 004A3430
   -> 0045EF00 @ 004A3965; address of /STPlaySystemC+0xe4

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 9 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STBoatC_CmdToObj_0045EF00_Case_9. The carrier
   ABI remains pointer:/uint.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 17 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STBoatC_CmdToObj_0045EF00_Case_11. The carrier
   ABI remains pointer:/uint. */

void __thiscall st::fn_0045EF00(STBoatC *this,STBoatC_CmdToObj_param_1Enum param_1,uint *param_2)

{
  int iVar2;
  uint *puVar4;

  if ((param_1 != CASE_21) && (param_1 != CASE_5)) {
    st::fn_00401028
              (g_allPlayers_007FA174,*(char *)&this->field_0024,this->field_0032,1);
  }
  this->field_02C4 = 1;
  switch(param_1) {
  case CASE_1:
    this->field_02CC = 1;
    puVar4 = &this->field_0328;
    break;
  case CASE_2:
    this->field_02D0 = 1;
    this->field_0332 = *param_2;
    this->field_0336 = param_2[1];
    this->field_033A = param_2[2];
    this->field_033E = param_2[3];
    this->field_0342 = (char)param_2[4];
    return;
  case CASE_3:
  case CASE_21:
    this->field_02D4 = 1;
    this->field_0343 = *param_2;
    return;
  case CASE_4:
    this->field_02D8 = 1;
    puVar4 = &this->field_039C;
    goto LAB_0045f0e0;
  case CASE_5:
    this->field_02DC = 1;
    this->field_03A6 = *param_2;
    this->field_03AA = param_2[1];
    this->field_03AE = param_2[2];
    this->field_03B2 = param_2[3];
    return;
  case CASE_6:
    this->field_02E0 = 1;
    this->field_0347 = *param_2;
    this->field_034B = param_2[1];
    return;
  case CASE_7:
    this->field_02E4 = 1;
    puVar4 = &this->field_03D4;
    goto cf_common_exit_0045F1A9;
  case CASE_8:
    this->field_02E8 = 1;
    this->field_0437 = *param_2;
    *(uint *)&this->field_0x43b = param_2[1];
    *(uint *)&this->field_0x43f = param_2[2];
    *(uint *)&this->field_0x443 = param_2[3];
    return;
  case CASE_9:
    this->field_02EC = 1;
    this->field_03E8 = *param_2;
    *(uint *)&this->field_0x3ec = param_2[1];
    this->field_03F0 = (short)param_2[2];
    this->field_03F2 = STField<undefined1>(param_2,10);
    return;
  case CASE_A:
    this->field_02F0 = 1;
    puVar4 = &this->field_03DE;
LAB_0045f0e0:
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    *(short *)(puVar4 + 2) = (short)param_2[2];
    return;
  case CASE_B:
    this->field_02F4 = 1;
    puVar4 = &this->field_041F;
    goto cf_common_exit_0045F1A9;
  case CASE_C:
    this->field_02F8 = 1;
    puVar4 = &this->field_034F;
    memmove(puVar4, param_2, 0x20); /* compiler REP MOVS byte copy */
    return;
  case CASE_D:
    this->field_02FC = 1;
    puVar4 = &this->field_0392;
cf_common_exit_0045F1A9:
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    *(short *)(puVar4 + 2) = (short)param_2[2];
    return;
  case CASE_E:
    this->field_0300 = 1;
    this->field_0447 = *param_2;
    *(uint *)&this->field_0x44b = param_2[1];
    *(uint *)&this->field_0x44f = param_2[2];
    this->field_0453 = (short)param_2[3];
    return;
  case CASE_F:
    this->field_0304 = 1;
    this->field_03B6 = *param_2;
    *(uint *)&this->field_0x3ba = param_2[1];
    *(uint *)&this->field_0x3be = param_2[2];
    this->field_03C2 = (short)param_2[3];
    return;
  case CASE_10:
    this->field_0308 = 1;
    puVar4 = &this->field_03CA;
    break;
  case CASE_11:
    this->field_030C = 1;
    puVar4 = &this->field_036F;
    memmove(puVar4, param_2, 0x23); /* compiler REP MOVS byte copy */
    return;
  case CASE_12:
    this->field_0310 = 1;
    this->field_0429 = *param_2;
    *(uint *)&this->field_0x42d = param_2[1];
    *(uint *)&this->field_0x431 = param_2[2];
    this->field_0435 = (short)param_2[3];
    return;
  default:
    iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x13a7,0,0,"%s",
                               "STBoatC::CmdToObj unknown type");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return;
  case CASE_14:
    this->field_0314 = 1;
    this->field_03C4 = *param_2;
    this->field_03C8 = (short)param_2[1];
    return;
  case CASE_15:
    this->field_0318 = 1;
    puVar4 = &this->field_0401;
    memmove(puVar4, param_2, 0x14); /* compiler REP MOVS byte copy */
    return;
  case CASE_16:
    this->field_031C = 1;
    this->field_03F3 = *param_2;
    this->field_03F7 = param_2[1];
    *(uint *)&this->field_0x3fb = param_2[2];
    this->field_03FF = (short)param_2[3];
    return;
  case CASE_17:
    this->field_0320 = 1;
    puVar4 = &this->field_0415;
  }
  *puVar4 = *param_2;
  puVar4[1] = param_2[1];
  *(short *)(puVar4 + 2) = (short)param_2[2];
  return;
}

// 0045F400 STBoatC::CheckPBoxCmd
#line 4 "decomp/ST.exe/functions/0045F400/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CheckPBoxCmd

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_CheckPBoxCmd_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23
    */

uint __thiscall st::fn_0045F400(STBoatC *this,STBoatC_CheckPBoxCmd_param_1Enum param_1)

{
  int iVar2;
  uint uVar3;

  switch(param_1) {
  case CASE_1:
    return (uint)(this->field_02CC == 1);
  case CASE_2:
    return (uint)(this->field_02D0 == 1);
  case CASE_3:
    return (uint)(this->field_02D4 == 1);
  case CASE_4:
    return (uint)(this->field_02D8 == 1);
  case CASE_5:
    return (uint)(this->field_02DC == 1);
  case CASE_6:
    return (uint)(this->field_02E0 == 1);
  case CASE_7:
    return (uint)(this->field_02E4 == 1);
  case CASE_8:
    return (uint)(this->field_02E8 == 1);
  case CASE_9:
    return (uint)(this->field_02EC == 1);
  case CASE_A:
    return (uint)(this->field_02F0 == 1);
  case CASE_B:
    return (uint)(this->field_02F4 == 1);
  case CASE_C:
    return (uint)(this->field_02F8 == 1);
  case CASE_D:
    return (uint)(this->field_02FC == 1);
  case CASE_E:
    return (uint)(this->field_0300 == 1);
  case CASE_F:
    return (uint)(this->field_0304 == 1);
  case CASE_10:
    return (uint)(this->field_0308 == 1);
  case CASE_11:
    return (uint)(this->field_030C == 1);
  case CASE_12:
    return (uint)(this->field_0310 == 1);
  case CASE_14:
    return (uint)(this->field_0314 == 1);
  case CASE_15:
    return (uint)(this->field_0318 == 1);
  case CASE_16:
    return (uint)(this->field_031C == 1);
  case CASE_17:
    return (uint)(this->field_0320 == 1);
  }
  iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x13e4,0,0,"%s",
                             "STBoatC::CheckPBoxCmd unknown type");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0;
}

// 0045FD30 STBoatC::StopMove
#line 4 "decomp/ST.exe/functions/0045FD30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::StopMove
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4
   __thiscall StopMove(STBoatC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0045FD5F RET | 0045FDC7 RET | 0045FE7C RET | 0045FE91 RET | 0045FEA6 RET */

undefined4 __thiscall st::fn_0045FD30(STBoatC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STGroupBoatC *this_00;
  int iVar5;
  undefined4 uVar6;
  STBoatC *pSVar7;

  this_00 = st::fn_00405CF9(*(char *)&this->field_0024,this->field_0030);
  if (this_00 == nullptr) {
    return 0xffffffff;
  }
  if (this->field_00E8 == 1) {
    if (this->field_004D == '\x01') {
      iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1498,0,0,"%s",
                                 "STBoatC::StopMove() ZONE_B");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    this->field_00E8 = 0;
    st::fn_00405952(this);
    this->field_00FD = 1;
    st::fn_00404FF2(this_00,(uint)(ushort)this->field_0032);
    return 1;
  }
  if ((this->field_0040 == '\0') && (this->field_004D == '\0')) {
    sVar1 = this->field_0047;
    sVar2 = this->field_004B;
    sVar3 = this->field_0049;
    if (((sVar1 < 0) ||
        (((g_worldGrid.sizeX <= sVar1 || (sVar3 < 0)) || (g_worldGrid.sizeY <= sVar3)))) ||
       ((sVar2 < 0 || (g_worldGrid.sizeZ <= sVar2)))) {
      pSVar7 = nullptr;
    }
    else {
      pSVar7 = (STBoatC *)
               STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[(byte)this->field_008E];
    }
    if (pSVar7 == this) {
      st::fn_00405952(this);
      this->field_00FD = 1;
      st::fn_00404FF2(this_00,(uint)(ushort)this->field_0032);
      return 1;
    }
  }
  iVar5 = st::fn_00403A44((STJellyGunC *)this);
  if (iVar5 == -1) {
    return 0xffffffff;
  }
  if (iVar5 == 2) {
    st::fn_00401352((int)this);
  }
  return 0;
}

// 004608B0 STBoatC::Defence
#line 4 "decomp/ST.exe/functions/004608B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Defence */

int __thiscall st::fn_004608B0(STBoatC *this,int param_1)

{
  STBoatC_field_045DState SVar1;
  dword dVar2;
  undefined4 uVar3;
  short sVar5;
  int iVar6;
  int iVar7;
  STGameObjC *pSVar8;
  int local_EAX_1396;
  int local_EAX_1668;
  int local_EAX_1752;
  int local_EAX_1830;
  uint local_EAX_1921;
  undefined4 *puVar9;
  int local_EAX_2367;
  int iVar9;
  uint uVar10;
  int local_EAX_3491;
  uint local_EAX_3596;
  int local_EAX_4152;
  uint local_EAX_4242;
  int local_EAX_4703;
  int local_EAX_4798;
  int iVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  uint uVar11;
  undefined2 *puVar12;
  bool bVar13;
  RecoveredRecord_STBoatC_00645880 local_64;
  undefined4 local_3c [2];
  short local_34;
  short sStack_32;
  undefined2 local_30;
  int local_2c [2];
  uint local_24;
  STTorpC *local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  short local_c;
  short local_a;
  undefined2 local_8;
  undefined2 local_6;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    this->field_0475 = this->field_0047;
    this->field_0477 = this->field_0049;
    this->field_0479 = this->field_004B;
    this->field_047B = nullptr;
    this->field_0487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_082E = 0xffffffff;
    SVar1 = this->field_045D;
    if ((((SVar1 == CASE_6) || (SVar1 == CASE_C)) || (SVar1 == CASE_D)) || (SVar1 == CASE_4)) {
      this->field_0836 = 2;
    }
    else {
      this->field_0836 = 4;
    }
    this->field_0814 = this->field_0816 * 0xc9;
  }
  if (this->field_082E == -1) {
    iVar10 = this->field_0836 + -1;
    this->field_0836 = iVar10;
    if (1 < iVar10) {
      iVar10 = this->vfunc_D8();
      return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
    }
    this->field_082E = 0;
  }
  uVar11 = this->field_0836 + 1;
  this->field_0836 = uVar11;
  iVar10 = this->field_082E;
  if (iVar10 != 0) {
    if (iVar10 == 1) {
      uVar3 = this->field_00B7;
      this->field_00B7 = 0;
      iVar10 = st::fn_00403B34(this,2);
      this->field_00B7 = uVar3;
      if (iVar10 == -1) {
        return -1;
      }
      if (iVar10 == 0) {
        this->field_047F = -1;
        this->field_082E = 2;
      }
      else if (iVar10 == 3) {
        this->field_0469 = 0;
        this->field_082E = 0;
      }
      if (this->field_082E != 1) {
        return 2;
      }
      iVar10 = st::fn_00405B05(this,CASE_1);
      if (iVar10 != 0) {
        return 2;
      }
      pSVar8 = st::fn_004028BA
                         (g_allPlayers_007FA174,*(char *)&this->field_0487,
                          *(ushort *)&this->field_048B,this->field_0483);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar9 = st::fn_00401DE8((int *)this,extraout_EDX_00);
      switch(iVar9) {
      case 0:
      case 10:
        st::fn_004031E3(pSVar8,&local_14,&local_18,(short *)&local_1c);
        local_64.field_000A = this->field_0043;
        local_64.field_0008 = this->field_0041;
        local_64.field_000C = this->field_0045;
        local_10 = 0;
        if (this->field_02B2 == '\0') {
          return 2;
        }
        puVar12 = (undefined2 *)&this->field_0x2a8;
        do {
          if (this->field_07A2 < 1) {
            return 2;
          }
          puVar9 = (undefined4 *)
                   st::fn_0040342C(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                      this->field_006C);
          sStack_32 = (short)((uint)*puVar9 >> 0x10);
          local_64.field_000E = (short)*puVar9 + this->field_0041;
          local_64.field_0010 = this->field_0043 - sStack_32;
          local_64.field_0012 = this->field_0045 + *(short *)(puVar9 + 1);
          sStack_32 = *puVar12;
          local_34 = 0;
          puVar9 = (undefined4 *)st::fn_0040342C(local_2c,0,0,this->field_006C);
          local_34 = (short)*puVar9;
          sStack_32 = (short)((uint)*puVar9 >> 0x10);
          local_30 = *(undefined2 *)(puVar9 + 1);
          local_64.field_0014 = local_34 + (short)local_14;
          local_64.field_0016 = (short)local_18 - sStack_32;
          local_64.field_0000 = this->field_0024;
          local_64.field_0018 = (short)local_1c;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_64.field_0022 =
               (-(uint)(*(int *)((int)this->field_06CB + 0x2c) != 10) & 0xfffffffe) + 1;
          if (iVar9 == 10) {
            local_64.field_0004 = 0xa1;
          }
          else {
            local_64.field_0004 = this->field_079A;
          }
          local_64.field_001A = this->field_006C;
          local_64.field_001C = this->field_0018;
          local_64.field_0020 = this->field_0032;
          st::fn_00402D1A(&local_64);
          if (iVar9 == 10) {
            this->field_072A = 0;
          }
          else {
            this->field_07AA = 0;
            this->field_07A2 = this->field_07A2 + -1;
          }
          local_10 = local_10 + 1;
          puVar12 = puVar12 + 3;
        } while (local_10 < (byte)this->field_02B2);
        return 2;
      case 1:
      case 5:
      case 6:
      case 7:
      case 8:
        goto switchD_00461334_caseD_1;
      default:
        return 2;
      case 9:
        st::fn_004031E3(pSVar8,&local_14,&local_18,(short *)&local_1c);
        sVar5 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           STReplaceLowWord((uint32_t)(local_18), (uint16_t)(this->field_0045)),
                           (short)local_14,(short)local_18,local_1c);
        uVar10 = st::fn_004030B2(this,sVar5);
        st::fn_004022FC(this,(short)uVar10);
        return 2;
      }
    }
    if (iVar10 == 2) {
      iVar10 = st::fn_00405E57(this);
      if (iVar10 == 1) {
        sVar5 = this->field_0469;
        this->field_0469 = -sVar5;
        iVar10 = this->vfunc_18(this->field_0047,this->field_0049,-sVar5 + this->field_004B);
        if (iVar10 == 1) {
          this->field_082E = 3;
          st::fn_00404F6B(this,(int)this->field_0047,(int)this->field_0049,
                       (int)this->field_0469 + (int)this->field_004B);
          uVar3 = this->field_00B7;
          this->field_00B7 = 0;
          iVar10 = st::fn_00403B34(this,0);
          this->field_00B7 = uVar3;
          if (iVar10 == -1) {
            return -1;
          }
          if ((iVar10 != 0) && (iVar10 != 3)) {
            return 2;
          }
          this->field_0469 = 0;
          this->field_082E = 0;
          return 2;
        }
        this->field_0469 = -this->field_0469;
      }
      if ((this->field_082E == 2) && (iVar10 = st::fn_00405B05(this,CASE_2), iVar10 == 0)) {
        pSVar8 = st::fn_004028BA
                           (g_allPlayers_007FA174,*(char *)&this->field_0487,
                            *(ushort *)&this->field_048B,this->field_0483);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        local_EAX_3491 = st::fn_00401DE8((int *)this,extraout_EDX_01);
        switch(local_EAX_3491) {
        case 0:
        case 10:
          st::fn_004031E3(pSVar8,&local_14,&local_18,(short *)&local_1c);
          local_64.field_000A = this->field_0043;
          local_64.field_0008 = this->field_0041;
          local_64.field_000C = this->field_0045;
          local_10 = 0;
          if (this->field_02B2 != '\0') {
            puVar12 = (undefined2 *)&this->field_0x2a8;
            do {
              if (this->field_07A2 < 1) break;
              puVar9 = (undefined4 *)
                       st::fn_0040342C(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                          this->field_006C);
              sStack_32 = (short)((uint)*puVar9 >> 0x10);
              local_64.field_000E = (short)*puVar9 + this->field_0041;
              local_64.field_0010 = this->field_0043 - sStack_32;
              local_64.field_0012 = this->field_0045 + *(short *)(puVar9 + 1);
              sStack_32 = *puVar12;
              local_34 = 0;
              puVar9 = (undefined4 *)st::fn_0040342C(local_2c,0,0,this->field_006C);
              local_34 = (short)*puVar9;
              sStack_32 = (short)((uint)*puVar9 >> 0x10);
              local_30 = *(undefined2 *)(puVar9 + 1);
              local_64.field_0014 = local_34 + (short)local_14;
              local_64.field_0016 = (short)local_18 - sStack_32;
              local_64.field_0000 = this->field_0024;
              local_64.field_0018 = (short)local_1c;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_64.field_0022 =
                   (-(uint)(*(int *)((int)this->field_06CB + 0x2c) != 10) & 0xfffffffe) + 1;
              if (local_EAX_3491 == 10) {
                local_64.field_0004 = 0xa1;
              }
              else {
                local_64.field_0004 = this->field_079A;
              }
              local_64.field_001A = this->field_006C;
              local_64.field_001C = this->field_0018;
              local_64.field_0020 = this->field_0032;
              st::fn_00402D1A(&local_64);
              if (local_EAX_3491 == 10) {
                this->field_072A = 0;
              }
              else {
                this->field_07AA = 0;
                this->field_07A2 = this->field_07A2 + -1;
              }
              local_10 = local_10 + 1;
              puVar12 = puVar12 + 3;
            } while (local_10 < (byte)this->field_02B2);
          }
          break;
        case 1:
        case 5:
        case 6:
        case 7:
        case 8:
          this->field_047F = -1;
          break;
        case 9:
          st::fn_004031E3(pSVar8,&local_14,&local_18,(short *)&local_1c);
          sVar5 = (*this->vtable->vfunc_10)
                            (this->field_0041,this->field_0043,
                             STReplaceLowWord((uint32_t)(local_18), (uint16_t)(this->field_0045)),
                             (short)local_14,(short)local_18,local_1c);
          local_EAX_3596 = st::fn_004030B2(this,sVar5);
          st::fn_004022FC(this,(short)local_EAX_3596);
        }
      }
    }
    else {
      if (iVar10 == 3) {
        uVar3 = this->field_00B7;
        this->field_00B7 = 0;
        iVar10 = st::fn_00403B34(this,2);
        this->field_00B7 = uVar3;
        if (iVar10 == -1) {
          return -1;
        }
        if ((iVar10 == 0) || (iVar10 == 3)) {
          this->field_0469 = 0;
          this->field_082E = 0;
        }
        if ((this->field_082E == 3) && (iVar10 = st::fn_00405B05(this,CASE_3), iVar10 == 0)) {
          pSVar8 = st::fn_004028BA
                             (g_allPlayers_007FA174,*(char *)&this->field_0487,
                              *(ushort *)&this->field_048B,this->field_0483);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          local_EAX_4152 = st::fn_00401DE8((int *)this,extraout_EDX_02);
          switch(local_EAX_4152) {
          case 0:
          case 10:
            st::fn_004031E3(pSVar8,&local_14,&local_18,(short *)&local_1c);
            local_64.field_000A = this->field_0043;
            local_64.field_0008 = this->field_0041;
            local_64.field_000C = this->field_0045;
            local_10 = 0;
            if (this->field_02B2 != '\0') {
              puVar12 = (undefined2 *)&this->field_0x2a8;
              while (0 < this->field_07A2) {
                puVar9 = (undefined4 *)
                         st::fn_0040342C(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1]
                                            ,this->field_006C);
                sStack_32 = (short)((uint)*puVar9 >> 0x10);
                local_64.field_000E = (short)*puVar9 + this->field_0041;
                local_64.field_0010 = this->field_0043 - sStack_32;
                local_64.field_0012 = this->field_0045 + *(short *)(puVar9 + 1);
                sStack_32 = *puVar12;
                local_34 = 0;
                puVar9 = (undefined4 *)st::fn_0040342C(local_2c,0,0,this->field_006C);
                local_34 = (short)*puVar9;
                sStack_32 = (short)((uint)*puVar9 >> 0x10);
                local_30 = *(undefined2 *)(puVar9 + 1);
                local_64.field_0014 = local_34 + (short)local_14;
                local_64.field_0016 = (short)local_18 - sStack_32;
                local_64.field_0000 = this->field_0024;
                local_64.field_0018 = (short)local_1c;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                local_64.field_0022 =
                     (-(uint)(*(int *)((int)this->field_06CB + 0x2c) != 10) & 0xfffffffe) + 1;
                if (local_EAX_4152 == 10) {
                  local_64.field_0004 = 0xa1;
                }
                else {
                  local_64.field_0004 = this->field_079A;
                }
                local_64.field_001A = this->field_006C;
                local_64.field_001C = this->field_0018;
                local_64.field_0020 = this->field_0032;
                st::fn_00402D1A(&local_64);
                if (local_EAX_4152 == 10) {
                  this->field_072A = 0;
                }
                else {
                  this->field_07AA = 0;
                  this->field_07A2 = this->field_07A2 + -1;
                }
                local_10 = local_10 + 1;
                puVar12 = puVar12 + 3;
                if ((byte)this->field_02B2 <= local_10) {
                  return 2;
                }
              }
            }
            break;
          case 1:
          case 5:
          case 6:
          case 7:
          case 8:
switchD_00461334_caseD_1:
            this->field_047F = -1;
            return 2;
          case 9:
            st::fn_004031E3(pSVar8,&local_14,&local_18,(short *)&local_1c);
            sVar5 = (*this->vtable->vfunc_10)
                              (this->field_0041,this->field_0043,
                               STReplaceLowWord((uint32_t)(local_18), (uint16_t)(this->field_0045)),
                               (short)local_14,(short)local_18,local_1c);
            local_EAX_4242 = st::fn_004030B2(this,sVar5);
            st::fn_004022FC(this,(short)local_EAX_4242);
            return 2;
          }
        }
        return 2;
      }
      if (iVar10 != 4) {
        local_EAX_4798 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1808,0,0,"%s",
                                "STBoatC::Defence - incorrect entry");
        if (local_EAX_4798 == 0) {
          return 2;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      uVar3 = this->field_00B7;
      this->field_00B7 = 0;
      local_EAX_4703 = st::fn_00402266(this,2);
      this->field_00B7 = uVar3;
      if (local_EAX_4703 == -1) {
        return -1;
      }
      if ((local_EAX_4703 == 0) || (local_EAX_4703 == 3)) {
        this->field_0836 = 1;
        this->field_082E = 0;
      }
    }
switchD_0046166b_caseD_2:
    iVar10 = this->vfunc_D8();
    return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
  }
  if (0 < this->field_073A) goto switchD_0046166b_caseD_2;
  uVar11 = uVar11 & 0x80000001;
  bVar13 = uVar11 == 0;
  if ((int)uVar11 < 0) {
    bVar13 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar13) && (DAT_007fa134 != 0)) {
    dVar2 = g_array_007FA130->count;
    local_34 = (short)dVar2;
    sStack_32 = (short)(dVar2 >> 0x10);
    if ((dVar2 != 0) && (uVar11 = 0, iVar10 = DAT_007fa134, dVar2 != 0)) {
      do {
        if (iVar10 < 1) break;
        st::fn_006ACC70(g_array_007FA130,uVar11,&local_20);
        if (local_20 != nullptr) {
          iVar10 = iVar10 + -1;
          st::fn_004018C5((STFishC *)local_20,(short *)((int)&local_10 + 2),&local_c,&local_a);
          local_2c[0] = st::fn_006AADD0((int)this->field_0047,(int)this->field_0049,
                                     (int)this->field_004B,(int)STPiece<2,2>(local_10),(int)local_c,
                                     (int)local_a);
          if ((local_2c[0] <= (int)this->field_080C / 0xc9 + 1) &&
             (iVar6 = st::fn_0040478C(local_20,this->field_0018,&local_24), iVar6 != 2)) {
            if (iVar6 == 0) {
              iVar7 = st::fn_00403A99((AnonReceiver_004603B0 *)this,
                                         (RecoveredRecord_STBoatC_004838E0 *)local_20);
              if (iVar7 == 1) {
                st::fn_0040368E(local_20,this->field_0018,&local_24);
LAB_00460adb:
                iVar7 = st::fn_00401451(this,(RecoveredRecord_STBoatC_00482DB0 *)local_20);
                if (iVar7 == 1) {
                  st::fn_0040282E(local_20,this->field_0018,local_24);
                  this->field_046B = (ushort *)local_20;
                  this->field_046F = local_20->field_026E;
                  this->field_0471 = (AnonShape_005EFAE0_B406B78B *)local_20->field_0018;
                  if (this->field_004B == 0) {
                    this->field_0469 = 1;
                    iVar10 = this->vfunc_18(this->field_0047,this->field_0049,1);
                    if (iVar10 != 1) {
LAB_00460d94:
                      this->field_0469 = 0;
                      break;
                    }
                    this->field_082E = 1;
                    st::fn_00404F6B(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar3 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar10 = st::fn_00403B34(this,0);
                    this->field_00B7 = uVar3;
                    if (iVar10 == -1) {
                      return -1;
                    }
                    if (iVar10 != 0) {
                      if (iVar10 == 3) {
                        this->field_0469 = 0;
                        this->field_082E = 0;
                      }
                      break;
                    }
                  }
                  else if (this->field_004B == 4) {
                    this->field_0469 = -1;
                    iVar10 = this->vfunc_18(this->field_0047,this->field_0049,3);
                    if (iVar10 != 1) goto LAB_00460d94;
                    this->field_082E = 1;
                    st::fn_00404F6B(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar3 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar10 = st::fn_00403B34(this,0);
                    this->field_00B7 = uVar3;
                    if (iVar10 == -1) {
                      return -1;
                    }
                    if (iVar10 != 0) {
                      if (iVar10 == 3) {
                        this->field_0469 = 0;
                        this->field_082E = 0;
                      }
                      break;
                    }
                  }
                  else {
                    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
                    this->field_001C = uVar11;
                    this->field_0469 = (ushort)(uVar11 >> 0x10) & 1;
                    if ((uVar11 & 0x10000) == 0) {
                      this->field_0469 = -1;
                    }
                    iVar10 = this->vfunc_18(this->field_0047,this->field_0049,
                                        this->field_0469 + this->field_004B);
                    if (iVar10 == 1) {
                      this->field_082E = 1;
                      st::fn_00404F6B(this,(int)this->field_0047,(int)this->field_0049,
                                   (int)this->field_0469 + (int)this->field_004B);
                      uVar3 = this->field_00B7;
                      this->field_00B7 = 0;
                      iVar10 = st::fn_00403B34(this,0);
                      this->field_00B7 = uVar3;
                    }
                    else {
                      sVar5 = this->field_0469;
                      this->field_0469 = -sVar5;
                      iVar10 = this->vfunc_18(this->field_0047,this->field_0049,
                                          -sVar5 + this->field_004B);
                      if (iVar10 != 1) goto LAB_00460d94;
                      this->field_082E = 1;
                      st::fn_00404F6B(this,(int)this->field_0047,(int)this->field_0049,
                                   (int)this->field_0469 + (int)this->field_004B);
                      uVar3 = this->field_00B7;
                      this->field_00B7 = 0;
                      iVar10 = st::fn_00403B34(this,0);
                      this->field_00B7 = uVar3;
                    }
                    if (iVar10 == -1) {
                      return -1;
                    }
                    if ((iVar10 != 0) && (iVar10 != 3)) break;
                  }
                  this->field_0469 = 0;
                  this->field_082E = 0;
                  break;
                }
              }
              else {
                st::fn_0040282E(local_20,this->field_0018,local_24);
              }
            }
            else if (iVar6 == 1) goto LAB_00460adb;
          }
        }
        uVar11 = uVar11 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      } while (uVar11 < CONCAT22(sStack_32,local_34));
    }
  }
  if (this->field_082E != 0) goto LAB_00461264;
  if (this->field_0836 == 2) {
    this->field_047F = -1;
    iVar10 = st::fn_00405B05(this,CASE_0);
    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar11;
    this->field_047F = (uVar11 >> 0x10) % 0x15;
  }
  else {
    iVar10 = st::fn_00405B05(this,CASE_0);
  }
  if (iVar10 == 0) {
    pSVar8 = st::fn_004028BA
                       (g_allPlayers_007FA174,*(char *)&this->field_0487,
                        *(ushort *)&this->field_048B,this->field_0483);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    local_EAX_1396 = st::fn_00401DE8((int *)this,extraout_EDX);
    switch(local_EAX_1396) {
    case 0:
    case 10:
      st::fn_004031E3(pSVar8,&local_14,&local_18,(short *)&local_1c);
      local_64.field_000A = this->field_0043;
      local_64.field_0008 = this->field_0041;
      local_64.field_000C = this->field_0045;
      local_10 = 0;
      if (this->field_02B2 != '\0') {
        puVar12 = (undefined2 *)&this->field_0x2a8;
        do {
          if (this->field_07A2 < 1) break;
          puVar9 = (undefined4 *)
                   st::fn_0040342C(local_2c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                      this->field_006C);
          sStack_32 = (short)((uint)*puVar9 >> 0x10);
          local_64.field_000E = (short)*puVar9 + this->field_0041;
          local_64.field_0010 = this->field_0043 - sStack_32;
          local_64.field_0012 = this->field_0045 + *(short *)(puVar9 + 1);
          sStack_32 = *puVar12;
          local_34 = 0;
          puVar9 = (undefined4 *)st::fn_0040342C(local_3c,0,0,this->field_006C);
          local_34 = (short)*puVar9;
          sStack_32 = (short)((uint)*puVar9 >> 0x10);
          local_30 = *(undefined2 *)(puVar9 + 1);
          local_64.field_0014 = local_34 + (short)local_14;
          local_64.field_0016 = (short)local_18 - sStack_32;
          local_64.field_0000 = this->field_0024;
          local_64.field_0018 = (short)local_1c;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_64.field_0022 =
               (-(uint)(*(int *)((int)this->field_06CB + 0x2c) != 10) & 0xfffffffe) + 1;
          if (local_EAX_1396 == 10) {
            local_64.field_0004 = 0xa1;
          }
          else {
            local_64.field_0004 = this->field_079A;
          }
          local_64.field_001A = this->field_006C;
          local_64.field_001C = this->field_0018;
          local_64.field_0020 = this->field_0032;
          st::fn_00402D1A(&local_64);
          if (local_EAX_1396 == 10) {
            this->field_072A = 0;
          }
          else {
            this->field_07AA = 0;
            this->field_07A2 = this->field_07A2 + -1;
          }
          local_10 = local_10 + 1;
          puVar12 = puVar12 + 3;
        } while (local_10 < (byte)this->field_02B2);
      }
      break;
    case 1:
      local_EAX_2367 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x16e0,0,-1,"%s",
                              "STBoatC::Defence NOT_ZONE_A");
      if (local_EAX_2367 == 0) {
        st::fn_006A5E40
                  (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x16e1);
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    case 5:
      this->field_082E = 4;
      st::fn_00405F0B
                ((STFishC *)pSVar8,(undefined2 *)&local_14,(undefined2 *)&local_18,
                 (undefined2 *)&local_1c);
LAB_00460fac:
      st::fn_00404F6B(this,(int)(short)local_14,(int)(short)local_18,(int)(short)local_1c);
      uVar3 = this->field_00B7;
      this->field_00B7 = 0;
      local_EAX_1830 = st::fn_00402266(this,0);
      if (local_EAX_1830 == -1) {
        return -1;
      }
      this->field_00B7 = uVar3;
      break;
    case 6:
    case 7:
    case 8:
      st::fn_00405F0B((STFishC *)pSVar8,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
      this->field_0800 = local_6;
      this->field_0802 = local_8;
      this->field_0804 = STPiece<2,2>(param_1);
      iVar10 = st::fn_00405E66(this,(short)local_EAX_1396,(short *)&local_14,(short *)&local_18,
                                  (short *)&local_1c);
      if (iVar10 != 0) {
        this->field_082E = 4;
        goto LAB_00460fac;
      }
      if (300 < (short)this->field_0814) {
        this->field_0814 = this->field_0814 + -0xc9;
      }
      break;
    case 9:
      st::fn_004031E3(pSVar8,&local_14,&local_18,(short *)&local_1c);
      sVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(local_18), (uint16_t)(this->field_0045)),(short)local_14,
                         (short)local_18,local_1c);
      local_EAX_1921 = st::fn_004030B2(this,sVar5);
      st::fn_004022FC(this,(short)local_EAX_1921);
    }
  }
  if ((this->field_082E == 0) && (this->field_048B == 0xffff)) {
    if ((this->field_0475 != this->field_0047) ||
       ((this->field_0477 != this->field_0049 || (this->field_0479 != this->field_004B)))) {
      local_EAX_1668 =
           st::fn_006AADD0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                        (int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
      if ((local_EAX_1668 != -4) && (local_EAX_1668 < 8)) {
        this->field_082E = 4;
        st::fn_00404F6B(this,(int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
        uVar3 = this->field_00B7;
        this->field_00B7 = 0;
        local_EAX_1752 = st::fn_00402266(this,0);
        if (local_EAX_1752 == -1) {
          return -1;
        }
        this->field_00B7 = uVar3;
        iVar10 = this->vfunc_D8();
        return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
      }
      this->field_0475 = this->field_005B;
      this->field_0477 = this->field_005D;
      this->field_0479 = this->field_005F;
    }
  }
LAB_00461264:
  iVar10 = this->vfunc_D8();
  return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
}

// 004653B0 STBoatC::BackAttack
#line 4 "decomp/ST.exe/functions/004653B0/decomp.c"
/* WARNING: Removing unreachable block (ram,0x00465790) */
/* WARNING: Removing unreachable block (ram,0x004657b4) */
/* WARNING: Removing unreachable block (ram,0x004657b5) */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackAttack
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   BackAttack(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=004653E5 RET 0x4 | 0046543A RET 0x4 | 004654E4 RET 0x4 | 0046559A RET 0x4 |
   004655F1 RET 0x4 | 004656CB RET 0x4 | 00465736 RET 0x4 | 00465781 RET 0x4 | 0046578D RET 0x4 |
   004657BC RET 0x4 */

int __thiscall st::fn_004653B0(STBoatC *this,int *param_1)

{
  short sVar2;
  int local_EAX_27;
  int iVar4;
  uint uVar5;
  int local_EAX_335;
  int local_EAX_424;
  int local_EAX_481;
  int iVar3;
  int local_EAX_929;
  undefined2 uVar7;
  STBoatC *pSVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_EDX;
  undefined2 uVar8;
  STBoatC *local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar8 = (undefined2)((uint)in_EDX >> 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar4 = *(int *)((int)this->field_06CB + 0x2c);
  uVar7 = (undefined2)((uint)this >> 0x10);
  local_8 = this;
  if (iVar4 == 9) {
    if (this->field_082E != 3) {
LAB_00465581:
      this->field_00B7 = 0;
      local_EAX_481 = st::fn_00403DF0(this);
      return local_EAX_481;
    }
    pSVar6 = this;
    if ((param_1 == nullptr) || (param_1 == (int *)0x1)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((this->field_0041 == this->field_0034) &&
         ((this->field_0043 == this->field_0036 &&
          (pSVar6 = (STBoatC *)CONCAT22(uVar7,this->field_0045),
          this->field_0045 == this->field_0038)))) {
        iVar4 = this->vfunc_D8();
        return -(uint)(iVar4 != 0);
      }
      this->field_0832 = 0;
    }
    if (this->field_0832 == 0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,CONCAT22(uVar8,this->field_0045),
                         this->field_0034,this->field_0036,
                         STReplaceLowWord((uint32_t)(pSVar6), (uint16_t)(this->field_0038)));
      uVar5 = st::fn_004030B2(this,sVar2);
      uVar5 = st::fn_004022FC(this,(short)uVar5);
      if (uVar5 != 0xffffffff) {
        if (uVar5 == 0) {
          st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,this->field_0034,
                       this->field_0036,this->field_0038,this->field_0061);
          this->field_007A = 0;
          this->field_0832 = 1;
        }
        iVar4 = this->vfunc_D8();
        return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
      }
      local_EAX_335 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1b8c,0,0,"%s",
                              "STBoatC::BackAttack RotateCheat WORM");
      if (local_EAX_335 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x1b8d;
      goto cf_error_exit_00465763;
    }
    if (this->field_0832 != 1) {
      return 2;
    }
    iVar4 = st::fn_00402847((STJellyGunC *)this,&local_8,(int *)&param_1);
    if (iVar4 == -1) {
      local_EAX_424 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1b9e,0,0,"%s",
                              "STBoatC::BackAttack LLMoveStep WORM");
      if (local_EAX_424 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x1b9f;
      goto cf_error_exit_00465763;
    }
  }
  else {
    if (iVar4 != 0x15) {
      local_EAX_27 = st::fn_00403DF0(this);
      if (local_EAX_27 != 0) {
        return local_EAX_27;
      }
      this->field_0816 = 5;
      return 0;
    }
    if (this->field_082E != 3) goto LAB_00465581;
    pSVar6 = this;
    if ((param_1 == nullptr) || (param_1 == (int *)0x1)) {
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      in_EDX = CONCAT22(uVar8,this->field_0047 * 0xc9) + 100;
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      if ((this->field_0041 == (short)in_EDX) &&
         ((this->field_0043 == (short)(this->field_0049 * 0xc9 + 100) &&
          (pSVar6 = (STBoatC *)(CONCAT22(uVar7,this->field_004B * 200) + 100),
          this->field_0045 == (short)pSVar6)))) goto LAB_004655df;
      this->field_0832 = 0;
    }
    if (this->field_0832 == 0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar4 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_0049 * 0xc9)) + 100;
      sVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar4), (uint16_t)(this->field_0045)),
                         this->field_0047 * 0xc9 + 100,(short)iVar4,
                         STReplaceLowWord((uint32_t)(pSVar6), (uint16_t)(this->field_004B * 200)) + 100);
      uVar5 = st::fn_004030B2(this,sVar2);
      uVar5 = st::fn_004022FC(this,(short)uVar5);
      if (uVar5 != 0xffffffff) {
        if (uVar5 == 0) {
          st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                       this->field_0047 * 0xc9 + 100,this->field_0049 * 0xc9 + 100,
                       this->field_004B * 200 + 100,this->field_0061);
          this->field_007A = 0;
          this->field_0832 = 1;
        }
        iVar4 = this->vfunc_D8();
        return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
      }
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1bc5,0,0,"%s",
                                 "STBoatC::BackAttack RotateCheat DOLPHINE");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x1bc6;
cf_error_exit_00465763:
      st::fn_006A5E40
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar4);
      return 0xffff;
    }
    if (this->field_0832 != 1) {
      return 2;
    }
    iVar4 = st::fn_00402847((STJellyGunC *)this,&local_8,(int *)&param_1);
    if (iVar4 == -1) {
      local_EAX_929 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1bd7,0,0,"%s",
                              "STBoatC::BackAttack LLMoveStep DOLPHINE");
      if (local_EAX_929 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x1bd8;
      goto cf_error_exit_00465763;
    }
  }
  if (iVar4 != 0) {
    iVar4 = this->vfunc_D8();
    return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
  }
LAB_004655df:
  iVar4 = this->vfunc_D8();
  return -(uint)(iVar4 != 0);
}

// 00465BE0 STBoatC::BackPatrol
#line 4 "decomp/ST.exe/functions/00465BE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackPatrol */

int __thiscall st::fn_00465BE0(STBoatC *this,int *param_1)

{
  int local_EAX_17;
  int local_EAX_35;
  int iVar2;
  int iVar3;

  if (this->field_0497 == 0) {
    local_EAX_17 = st::fn_00403DF0(this);
    return local_EAX_17;
  }
  if (this->field_0497 == 1) {
    local_EAX_35 = st::fn_0040493A(this);
    return local_EAX_35;
  }
  iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1c52,0,0,"%s",
                             "STBoatC::BackPatrol");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return -1;
}

// 00465C60 STBoatC::LoadRC
#line 4 "decomp/ST.exe/functions/00465C60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::LoadRC
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   LoadRC(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit stack
   bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=00465CAA RET 0x4 | 00465E3D RET 0x4 | 00465E8D RET 0x4 | 00465ECB RET 0x4 |
   00465EE4 RET 0x4 | 004660FE RET 0x4 | 00466405 RET 0x4 | 0046649A RET 0x4 | 00466506 RET 0x4 |
   0046686A RET 0x4 | 00466BB6 RET 0x4 | 00466BCF RET 0x4 | 00466D79 RET 0x4 | 00466DE6 RET 0x4 |
   00466FED RET 0x4 | 004674DE RET 0x4 | 00467756 RET 0x4 | 0046776F RET 0x4 | 00467C9F RET 0x4 |
   004681EC RET 0x4 | 0046833D RET 0x4 | 0046858A RET 0x4 | 004685A3 RET 0x4 | 00468810 RET 0x4 |
   0046889D RET 0x4 | 00468B1B RET 0x4 | 00468C69 RET 0x4 | 00468D28 RET 0x4 | 00468FCE RET 0x4 |
   004693E2 RET 0x4 | 00469754 RET 0x4 | 004698B3 RET 0x4 | 0046998F RET 0x4 | 00469A02 RET 0x4 */

int __thiscall st::fn_00465C60(STBoatC *this,int *param_1)

{
  STBoatC *pSVar1;
  bool bVar3;
  undefined2 uVar4;
  int local_EAX_56;
  STWorldObject *pSVar5;
  int local_EAX_437;
  int iVar6;
  int local_EAX_597;
  int local_EAX_626;
  int local_EAX_1004;
  int local_EAX_1088;
  int local_EAX_1132;
  int local_EAX_1865;
  int local_EAX_2009;
  int local_EAX_2055;
  int local_EAX_2195;
  int local_EAX_2651;
  int local_EAX_3064;
  int local_EAX_3722;
  int local_EAX_3904;
  int local_EAX_3933;
  int local_EAX_4314;
  int local_EAX_4384;
  int local_EAX_4428;
  int local_EAX_4894;
  int local_EAX_5538;
  int iVar7;
  int local_EAX_6580;
  int local_EAX_6675;
  int local_EAX_6719;
  int local_EAX_6880;
  int local_EAX_6909;
  int local_EAX_7290;
  int local_EAX_7374;
  int local_EAX_7418;
  int local_EAX_8163;
  int local_EAX_8376;
  int local_EAX_8422;
  int local_EAX_9083;
  int local_EAX_9412;
  int local_EAX_9594;
  int local_EAX_9852;
  int local_EAX_10296;
  int local_EAX_10516;
  int local_EAX_10545;
  int local_EAX_10926;
  int local_EAX_11037;
  int local_EAX_11081;
  int local_EAX_11852;
  uint uVar7;
  int local_EAX_12513;
  undefined4 *puVar8;
  uint uVar9;
  int local_EAX_13191;
  int local_EAX_14419;
  int local_EAX_15042;
  int local_EAX_15073;
  int local_EAX_15213;
  int local_EAX_15261;
  int local_EAX_15305;
  int local_EAX_15421;
  int iVar5;
  int local_EAX_15643;
  short sVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  uint uVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  int *piVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  STBoatCVTable *pSVar13;
  int iVar14;
  longlong lVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  int iVar21;
  short sVar22;
  byte bVar23;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_8 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == nullptr) || (param_1 == (int *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    this->field_049B = this->field_0353;
    this->field_049D = this->field_0355;
    this->field_049F = this->field_0357;
    this->field_04A1 = this->field_0359;
    this->field_04A5 = this->field_035D;
    this->field_04A7 = this->field_035F;
    this->field_04A9 = this->field_0361;
    this->field_04AB = this->field_0363;
    this->field_04B5 = this->field_0367;
    this->field_04B9 = this->field_036B;
    this->field_04C1 = 0;
    this->field_04BD = 0;
    *(undefined4 *)&this->field_0x4d1 = 0;
    *(undefined4 *)&this->field_0x4cd = 0;
    iVar5 = st::fn_00403184(this);
    if (iVar5 == 0) {
LAB_00469972:
      *(undefined4 *)&this->field_0x4d5 = 0;
      goto cf_common_exit_00469979;
    }
    *(int *)&this->field_0x4d5 = iVar5;
    this->field_00B7 = 3;
    if (iVar5 == 1) {
      sVar17 = this->field_049F;
      sVar16 = this->field_049D;
      sVar10 = this->field_049B;
    }
    else {
      sVar17 = this->field_04A9;
      sVar16 = this->field_04A7;
      sVar10 = this->field_04A5;
    }
    iVar21 = sVar17 + 1;
    iVar6 = (int)sVar16;
    iVar14 = (int)sVar10;
cf_common_exit_004699DA:
    st::fn_00404F6B(this,iVar14,iVar6,iVar21);
  }
  else {
    iVar6 = *(int *)&this->field_0x4d5;
    if (iVar6 == 0) {
      local_EAX_56 = st::fn_00403A2B(this,2);
      if (local_EAX_56 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
        return 2;
      }
      if (this->field_04BD == 1) {
LAB_00465cda:
        this->field_04BD = 0;
        if (this->field_04A1 != -1) {
          sVar10 = this->field_049B;
          sVar16 = this->field_049F;
          sVar17 = this->field_049D;
          if (((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
              ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) || (g_worldGrid.sizeZ <= sVar16)) {
            pSVar5 = nullptr;
          }
          else {
            pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
          }
          if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
            this->field_04A1 = 0xffffffff;
          }
        }
      }
      else {
        if (this->field_04C1 != 1) {
          return 2;
        }
        if (this->field_04BD == 1) goto LAB_00465cda;
      }
      if (this->field_04C1 == 1) {
        this->field_04C1 = 0;
        if (this->field_04AB != -1) {
          sVar10 = this->field_04A5;
          sVar16 = this->field_04A9;
          sVar17 = this->field_04A7;
          if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
             ((sVar17 < 0 ||
              (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16))))))
          {
            pSVar5 = nullptr;
          }
          else {
            pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
          }
          if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
            this->field_04AB = 0xffffffff;
          }
        }
      }
      local_EAX_437 = st::fn_00403184(this);
      if (local_EAX_437 == 0) {
        return 2;
      }
      if (local_EAX_437 == 1) {
        if (this->field_04A1 == -1) {
          return 2;
        }
cf_common_exit_00465E40:
        *(undefined4 *)&this->field_0x4cd = 0;
        *(undefined4 *)&this->field_0x4d5 = 1;
        this->field_00B7 = 3;
        goto cf_common_exit_00465E5A;
      }
cf_common_exit_00468742:
      *(undefined4 *)&this->field_0x4cd = 0;
      *(undefined4 *)&this->field_0x4d5 = 7;
      this->field_00B7 = 3;
cf_common_exit_0046875C:
      sVar10 = this->field_04A9;
      sVar16 = this->field_04A7;
      sVar17 = this->field_04A5;
LAB_00465e72:
      st::fn_00404F6B(this,(int)sVar17,(int)sVar16,sVar10 + 1);
cf_common_exit_00465E7B:
      st::fn_004031DE(this,0);
      return 2;
    }
    if (iVar6 == 1) {
      if (*(int *)&this->field_0x4cd < 1) {
        local_EAX_1088 = st::fn_004031DE(this,2);
        switch(local_EAX_1088) {
        case 0:
          iVar6 = st::fn_004049CB(this);
          if (iVar6 == 1) {
            sVar10 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if ((((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) && (-1 < sVar17)) &&
                 ((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)))) &&
                ((sVar16 < g_worldGrid.sizeZ &&
                 ((pSVar1 = (STBoatC *)
                            STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0],
                  pSVar1 != nullptr && (pSVar1->field_0018 == this->field_04A1)))))) &&
               (iVar6 = st::fn_00405470(pSVar1), iVar6 != 1)) {
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              st::fn_00404908(this,this->field_0047,this->field_0049,this->field_004B,this->field_049B,
                           this->field_049D,(int *)CONCAT22(extraout_var,this->field_049F + 1),1,
                           &this->field_04AF,&this->field_04B1,&this->field_04B3);
              *(undefined4 *)&this->field_0x4d5 = 2;
              this->field_00B7 = 0;
              st::fn_00404F6B(this,(int)this->field_04AF,(int)this->field_04B1,(int)this->field_04B3);
              break;
            }
          }
          *(undefined4 *)&this->field_0x4d5 = 3;
          goto cf_common_exit_00469979;
        case 1:
          if ((this->field_04BD != 1) && (this->field_04C1 != 1)) goto cf_common_exit_00468C50;
          local_c = nullptr;
          if (this->field_04BD == 1) {
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar10 = this->field_049B;
              sVar16 = this->field_049F;
              sVar17 = this->field_049D;
              if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                 ((sVar17 < 0 ||
                  (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))
                  ))) {
                pSVar5 = nullptr;
              }
              else {
                pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
                this->field_04A1 = 0xffffffff;
              }
            }
            if (this->field_04A1 != -1) {
              local_c = (undefined4 *)0x1;
            }
          }
          if (this->field_04C1 == 1) {
            this->field_04C1 = 0;
            if (this->field_04AB != -1) {
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                  ((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))))) ||
                 (g_worldGrid.sizeZ <= sVar16)) {
                pSVar5 = nullptr;
              }
              else {
                pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          local_EAX_1865 = st::fn_00403184(this);
          if (local_EAX_1865 == 0) goto cf_common_exit_00467FE4;
          if (local_EAX_1865 == 1) {
            if ((this->field_04A1 != -1) && (local_c == nullptr))
            goto cf_common_exit_00468C50;
            st::fn_00403855(this);
            if (this->field_04A1 == -1) {
              *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
              iVar6 = this->vfunc_D8();
              return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
            }
            if (local_c != (undefined4 *)0x1) goto cf_common_exit_00468C50;
LAB_00467018:
            st::fn_00404F6B(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
          }
          else {
            st::fn_00403855(this);
            *(undefined4 *)&this->field_0x4d5 = 7;
LAB_00468b42:
            st::fn_00404F6B(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
          }
          break;
        default:
          goto cf_common_exit_00468C50;
        case 3:
switchD_004660af_caseD_3:
          st::fn_00404F6B(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
          break;
        case -1:
          local_EAX_1132 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1d02,0,0,"%s",
                                  "STBoatC::LoadRC, move to mine error");
          if (local_EAX_1132 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar6 = 0x1d02;
          goto cf_error_exit_004660E9;
        }
cf_common_exit_00468C49:
        st::fn_004031DE(this,0);
        goto cf_common_exit_00468C50;
      }
      iVar6 = *(int *)&this->field_0x4cd + 1;
      *(int *)&this->field_0x4cd = iVar6;
      if (iVar6 == 2) {
        local_EAX_597 = st::fn_00403A2B(this,0);
        if (local_EAX_597 != -1) {
          return 2;
        }
        return -1;
      }
      local_EAX_626 = st::fn_00403A2B(this,2);
      if (local_EAX_626 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
        return 2;
      }
      if (this->field_04BD == 1) {
LAB_00465f11:
        this->field_04BD = 0;
        if (this->field_04A1 != -1) {
          sVar10 = this->field_049B;
          sVar16 = this->field_049F;
          sVar17 = this->field_049D;
          if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
             (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))) {
            pSVar5 = nullptr;
          }
          else {
            pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
          }
          if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
            this->field_04A1 = 0xffffffff;
          }
        }
      }
      else {
        if (this->field_04C1 != 1) {
          return 2;
        }
        if (this->field_04BD == 1) goto LAB_00465f11;
      }
      if (this->field_04C1 == 1) {
        this->field_04C1 = 0;
        if (this->field_04AB != -1) {
          sVar10 = this->field_04A5;
          sVar16 = this->field_04A9;
          sVar17 = this->field_04A7;
          if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
             ((sVar17 < 0 ||
              (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16))))))
          {
            pSVar5 = nullptr;
          }
          else {
            pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
          }
          if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
            this->field_04AB = 0xffffffff;
          }
        }
      }
      local_EAX_1004 = st::fn_00403184(this);
      if (local_EAX_1004 == 0) {
        st::fn_00403855(this);
        *(undefined4 *)&this->field_0x4d5 = 0;
cf_common_exit_00469979:
        local_EAX_15643 = st::fn_00403A2B(this,0);
        return (-(uint)(local_EAX_15643 != -1) & 3) - 1;
      }
      if (local_EAX_1004 != 1) goto LAB_00466087;
      if (this->field_04A1 == -1) {
        return 2;
      }
      *(undefined4 *)&this->field_0x4cd = 0;
cf_common_exit_00465E5A:
      sVar10 = this->field_049F;
      sVar16 = this->field_049D;
      sVar17 = this->field_049B;
      goto LAB_00465e72;
    }
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
        local_EAX_3064 = st::fn_00403A2B(this,2);
        if (local_EAX_3064 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if ((this->field_04BD != 1) && (this->field_04C1 != 1)) {
          if (*(int *)&this->field_0x4cd % 0x32 != 1) {
            return 2;
          }
          sVar10 = this->field_049B;
          sVar16 = this->field_049F;
          sVar17 = this->field_049D;
          if (sVar10 < 0) {
            return 2;
          }
          if (g_worldGrid.sizeX <= sVar10) {
            return 2;
          }
          if (sVar17 < 0) {
            return 2;
          }
          if (g_worldGrid.sizeY <= sVar17) {
            return 2;
          }
          if (sVar16 < 0) {
            return 2;
          }
          if (g_worldGrid.sizeZ <= sVar16) {
            return 2;
          }
          pSVar1 = (STBoatC *)
                   STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
          if (pSVar1 == nullptr) {
            return 2;
          }
          if (pSVar1->field_0018 != this->field_04A1) {
            return 2;
          }
          iVar6 = st::fn_00405470(pSVar1);
          if (iVar6 != 1) {
            return 2;
          }
          st::fn_00404CD2(pSVar1,this->field_0018);
          sVar16 = this->field_049D;
          sVar10 = this->field_049B;
          iVar6 = this->field_049F + 1;
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 4;
          this->field_00B7 = 0;
LAB_00468322:
          st::fn_00404F6B(this,(int)sVar10,(int)sVar16,iVar6);
          st::fn_004031DE(this,0);
          return 2;
        }
        local_c = nullptr;
        if (this->field_04BD == 1) {
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar10 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
               ((sVar17 < 0 ||
                (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))
               ) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
          if (this->field_04A1 != -1) {
            local_c = (undefined4 *)0x1;
          }
        }
        if (this->field_04C1 == 1) {
          this->field_04C1 = 0;
          if (this->field_04AB != -1) {
            sVar10 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
               (((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                (g_worldGrid.sizeZ <= sVar16)))) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        local_EAX_3722 = st::fn_00403184(this);
        if (local_EAX_3722 == 0) {
          st::fn_00403855(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (local_EAX_3722 == 1) {
          if (this->field_04A1 == -1) {
            return 2;
          }
          if (local_c == nullptr) {
            return 2;
          }
          if (this->field_04A1 == -1) {
            return 2;
          }
          if (local_c != (undefined4 *)0x1) {
            return 2;
          }
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 1;
          st::fn_00404F6B(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
          goto cf_common_exit_00465E7B;
        }
LAB_00466087:
        *(undefined4 *)&this->field_0x4cd = 0;
        *(undefined4 *)&this->field_0x4d5 = 7;
        goto cf_common_exit_0046875C;
      }
      if (iVar6 == 4) {
        if (*(int *)&this->field_0x4cd < 1) {
          local_EAX_4384 = st::fn_004031DE(this,2);
          switch(local_EAX_4384) {
          case 0:
            *(undefined4 *)&this->field_0x4d5 = 5;
            iVar6 = this->vfunc_D8();
            return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
          case 1:
            if ((this->field_04BD != 1) && (this->field_04C1 != 1)) goto cf_common_exit_00468C50;
            local_c = nullptr;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar10 = this->field_049B;
                sVar16 = this->field_049F;
                sVar17 = this->field_049D;
                if (((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar16)) {
                  pSVar5 = nullptr;
                }
                else {
                  pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
              if (this->field_04A1 != -1) {
                local_c = (undefined4 *)0x1;
              }
            }
            if (this->field_04C1 == 1) {
              this->field_04C1 = 0;
              if (this->field_04AB != -1) {
                sVar10 = this->field_04A5;
                sVar16 = this->field_04A9;
                sVar17 = this->field_04A7;
                if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                   ((sVar17 < 0 ||
                    (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)
                     ))))) {
                  pSVar5 = nullptr;
                }
                else {
                  pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                  this->field_04AB = 0xffffffff;
                }
              }
            }
            local_EAX_4894 = st::fn_00403184(this);
            if (local_EAX_4894 == 0) {
              st::fn_00403855(this);
              *(undefined4 *)&this->field_0x4d5 = 0;
              goto cf_common_exit_00469979;
            }
            if (local_EAX_4894 == 1) {
              if ((this->field_04A1 != -1) && (local_c == nullptr))
              goto cf_common_exit_00468C50;
              st::fn_00403855(this);
              if (this->field_04A1 == -1) {
                *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
                iVar6 = this->vfunc_D8();
                return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
              }
              if (local_c != (undefined4 *)0x1) goto cf_common_exit_00468C50;
              *(undefined4 *)&this->field_0x4cd = 0;
              *(undefined4 *)&this->field_0x4d5 = 1;
              this->field_00B7 = 3;
              goto LAB_00467018;
            }
            st::fn_00403855(this);
            *(undefined4 *)&this->field_0x4cd = 0;
            this->field_00B7 = 3;
            *(undefined4 *)&this->field_0x4d5 = 7;
            iVar6 = this->field_04A9 + 1;
            break;
          default:
            goto cf_common_exit_00468C50;
          case 3:
            goto switchD_004660af_caseD_3;
          case -1:
            local_EAX_4428 =
                 st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1e6e,0,0,"%s"
                                    ,"STBoatC::LoadRC, move to mine 2 error");
            if (local_EAX_4428 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar6 = 0x1e6e;
            goto cf_error_exit_004660E9;
          }
LAB_00467068:
          sVar16 = this->field_04A7;
          sVar10 = this->field_04A5;
LAB_00468c40:
          st::fn_00404F6B(this,(int)sVar10,(int)sVar16,iVar6);
          goto cf_common_exit_00468C49;
        }
        iVar6 = *(int *)&this->field_0x4cd + 1;
        *(int *)&this->field_0x4cd = iVar6;
        if (iVar6 == 2) {
          local_EAX_3904 = st::fn_00403A2B(this,0);
          if (local_EAX_3904 != -1) {
            return 2;
          }
          return -1;
        }
        local_EAX_3933 = st::fn_00403A2B(this,2);
        if (local_EAX_3933 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_04BD == 1) {
LAB_00466bff:
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar10 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
               ((sVar17 < 0 ||
                (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))
               ) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
        }
        else {
          if (this->field_04C1 != 1) {
            return 2;
          }
          if (this->field_04BD == 1) goto LAB_00466bff;
        }
        if (this->field_04C1 == 1) {
          this->field_04C1 = 0;
          if (this->field_04AB != -1) {
            sVar10 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                ((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))))) ||
               (g_worldGrid.sizeZ <= sVar16)) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        local_EAX_4314 = st::fn_00403184(this);
        if (local_EAX_4314 == 0) {
          st::fn_00403855(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (local_EAX_4314 != 1) goto cf_common_exit_00468742;
        if (this->field_04A1 == -1) {
          return 2;
        }
        goto cf_common_exit_00465E40;
      }
      if (iVar6 == 5) {
        *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
        if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
          local_c = nullptr;
          if (this->field_04BD == 1) {
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar10 = this->field_049B;
              sVar16 = this->field_049F;
              sVar17 = this->field_049D;
              if (((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) || (g_worldGrid.sizeZ <= sVar16))
              {
                pSVar5 = nullptr;
              }
              else {
                pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
                this->field_04A1 = 0xffffffff;
              }
            }
            if (this->field_04A1 != -1) {
              local_c = (undefined4 *)0x1;
            }
          }
          if (this->field_04C1 == 1) {
            this->field_04C1 = 0;
            if (this->field_04AB != -1) {
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                 ((sVar17 < 0 ||
                  (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))
                  ))) {
                pSVar5 = nullptr;
              }
              else {
                pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          local_EAX_5538 = st::fn_00403184(this);
          if (local_EAX_5538 == 0) {
            st::fn_00403855(this);
            *(undefined4 *)&this->field_0x4d5 = 0;
            goto cf_common_exit_00469979;
          }
          if (local_EAX_5538 != 1) {
            iVar6 = (int)this->field_04A9;
            *(undefined4 *)&this->field_0x4cd = 0;
            *(undefined4 *)&this->field_0x4d5 = 6;
            this->field_00B7 = 3;
            goto LAB_00467068;
          }
          if ((this->field_04A1 == -1) || (local_c != nullptr)) {
            *(undefined4 *)&this->field_0x4cd = 0;
            this->field_00B7 = 3;
            if (this->field_04A1 == -1) {
              *(undefined4 *)&this->field_0x4d5 = 6;
              st::fn_00404F6B(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
            }
            else if (local_c == (undefined4 *)0x1) {
              *(undefined4 *)&this->field_0x4d5 = 1;
              st::fn_00404F6B(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
            }
            else {
              local_EAX_6580 =
                   st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1efd,0,0,
                                      "%s","STBoatC::LoadRC, LOADRC_MINE");
              if (local_EAX_6580 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
            }
            goto cf_common_exit_004699E2;
          }
        }
        if (*(int *)&this->field_0x4cd % 10 != 1) goto cf_common_exit_00468C50;
        sVar10 = this->field_049B;
        sVar16 = this->field_049F;
        sVar17 = this->field_049D;
        if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
            ((sVar17 < 0 ||
             (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16))))))
           || ((pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0],
               pSVar5 == nullptr || (*(int *)&pSVar5->field_0x18 != this->field_04A1)))
           ) {
          st::fn_00403C0B(this);
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 6;
LAB_00468b38:
          this->field_00B7 = 3;
          goto LAB_00468b42;
        }
        if ((*(int *)&pSVar5[0x21].field_0x10 == 0) && (*(int *)&pSVar5[0x10].field_0x5 != 6)) {
          st::fn_00405650(pSVar5,&local_8,0);
          iVar6 = st::fn_00404E67(local_8);
          local_18 = st::fn_00405650(pSVar5,&local_8,iVar6);
          if (local_18 == iVar6) {
            st::fn_00402B6C(pSVar5,this->field_0018);
            if (*(int *)&this->field_0x4cd % 0x78 == 1) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar14 = *(int *)((int)this->field_06CB + 0x2c);
              if (iVar14 == 8) {
                pSVar13 = this->vtable;
                uVar4 = 0xfc;
LAB_0046739a:
                (*pSVar13->vfunc_90)(this,3,uVar4);
              }
              else if (iVar14 == 0x14) {
                this->vfunc_90(3,0x160);
              }
              else if (iVar14 == 0x1a) {
                pSVar13 = this->vtable;
                uVar4 = 0x19f;
                goto LAB_0046739a;
              }
            }
            if (local_8 == 0xdc) {
              iVar14 = this->field_07D2 + 1;
              this->field_07D2 = iVar14;
              if (0x28 < iVar14 + this->field_07D6 + this->field_07DA) {
                this->field_07D2 = (0x28 - this->field_07D6) - this->field_07DA;
              }
            }
            else if (local_8 == 0xdd) {
              iVar14 = this->field_07D6 + 1;
              this->field_07D6 = iVar14;
              if (0x28 < iVar14 + this->field_07D2 + this->field_07DA) {
                this->field_07D6 = (0x28 - this->field_07D2) - this->field_07DA;
              }
            }
            else if (local_8 == 0xde) {
              iVar14 = this->field_07DA + 1;
              this->field_07DA = iVar14;
              if (0x28 < this->field_07D2 + this->field_07D6 + iVar14) {
                this->field_07DA = (0x28 - this->field_07D2) - this->field_07D6;
              }
            }
            else {
              iVar7 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1f2f,0,0,
                                         "%s","STBoatC::LoadRC, LOADRC_MINE - unknown resource type");
              if (iVar7 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
            }
          }
          if (((local_18 < iVar6) ||
              (this->field_07DA + this->field_07D6 + this->field_07D2 == 0x28)) ||
             (iVar6 = (*pSVar5->vtable[2].slots_00_28[10])(&local_8), iVar6 == 0))
          goto LAB_0046744c;
        }
        else {
LAB_0046744c:
          st::fn_00403C0B(this);
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 6;
          this->field_00B7 = 3;
          st::fn_00404F6B(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
          st::fn_004031DE(this,0);
        }
        iVar6 = (*pSVar5->vtable[2].slots_00_28[10])(&local_8);
        if (iVar6 == 0) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          st::fn_0040494E
                    (g_allPlayers_007FA174,0,(int *)this->field_0024,
                     CONCAT22(extraout_var_00,*(undefined2 *)&pSVar5[1].field_0xe));
          iVar6 = this->vfunc_D8();
          return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
        }
cf_common_exit_00468C50:
        iVar6 = this->vfunc_D8();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
      if (iVar6 != 6) {
        if (iVar6 != 7) {
          if (iVar6 == 8) {
            local_EAX_8376 = st::fn_004031DE(this,2);
            switch(local_EAX_8376) {
            case 0:
              iVar6 = st::fn_004049CB(this);
              if (iVar6 != 1) {
                *(undefined4 *)&this->field_0x4d5 = 9;
                this->field_00B7 = 3;
                goto cf_common_exit_00469979;
              }
              sVar10 = this->field_04A5;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              piVar12 = (int *)CONCAT22(extraout_var_03,this->field_04A9 + 1);
              break;
            case 1:
              if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
                local_c = nullptr;
                if (this->field_04BD == 1) {
                  this->field_04BD = 0;
                  if (this->field_04A1 != -1) {
                    sVar10 = this->field_049B;
                    sVar16 = this->field_049F;
                    sVar17 = this->field_049D;
                    if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                       ((sVar17 < 0 ||
                        (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) ||
                         (g_worldGrid.sizeZ <= sVar16)))))) {
                      pSVar5 = nullptr;
                    }
                    else {
                      pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                    }
                    if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
                      this->field_04A1 = 0xffffffff;
                    }
                  }
                  if (this->field_04A1 != -1) {
                    local_c = (undefined4 *)0x1;
                  }
                }
                if (this->field_04C1 == 1) {
                  this->field_04C1 = 0;
                  if (this->field_04AB != -1) {
                    sVar10 = this->field_04A5;
                    sVar16 = this->field_04A9;
                    sVar17 = this->field_04A7;
                    if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                       (((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                        (g_worldGrid.sizeZ <= sVar16)))) {
                      pSVar5 = nullptr;
                    }
                    else {
                      pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                    }
                    if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                      this->field_04AB = 0xffffffff;
                    }
                  }
                }
                local_EAX_9083 = st::fn_00403184(this);
                if (local_EAX_9083 == 0) goto cf_common_exit_00467FE4;
                if (local_EAX_9083 != 1) goto LAB_0046817e;
                if ((this->field_04A1 != -1) && (local_c == nullptr))
                goto cf_common_exit_004699E9;
                st::fn_00403855(this);
                if (this->field_04A1 == -1) {
                  *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
                  goto cf_common_exit_004699E9;
                }
                if (local_c == (undefined4 *)0x1) {
                  this->field_00B7 = 3;
                  *(undefined4 *)&this->field_0x4d5 = 1;
                  st::fn_00404F6B(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1
                              );
                  goto cf_common_exit_004699E2;
                }
              }
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if (((((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar16)) ||
                  ((pSVar1 = (STBoatC *)
                             STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0],
                   pSVar1 == nullptr || (pSVar1->field_0018 != this->field_04AB)))) ||
                 ((iVar6 = st::fn_00405470(pSVar1), iVar6 != 1 ||
                  (local_EAX_9412 = st::fn_0040259F(this,(STFishC *)pSVar1), local_EAX_9412 != 1)
                  ))) goto cf_common_exit_004699E9;
              st::fn_00403855(this);
              st::fn_00404CD2(pSVar1,this->field_0018);
              *(undefined4 *)&this->field_0x4cd = 0;
              *(undefined4 *)&this->field_0x4d5 = 10;
              st::fn_00404F6B(this,(int)this->field_04C5,(int)this->field_04C7,(int)this->field_04C9);
              goto cf_common_exit_004699E2;
            default:
              goto cf_common_exit_004699E9;
            case 3:
              iVar6 = st::fn_004049CB(this);
              if (iVar6 == 1) {
                sVar10 = this->field_04A5;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                piVar12 = (int *)CONCAT22((short)((uint)&this->field_04B3 >> 0x10),
                                          this->field_04A9 + 1);
                goto LAB_00467e31;
              }
              goto LAB_00467e48;
            case -1:
              local_EAX_8422 =
                   st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x201c,0,0,
                                      "%s","STBoatC::LoadRC, correct move to depot error");
              if (local_EAX_8422 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              iVar6 = 0x201c;
cf_error_exit_004660E9:
              st::fn_006A5E40
                        (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                         iVar6);
              return 0xffff;
            }
            goto LAB_00467da5;
          }
          if (iVar6 == 9) {
            *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
            local_EAX_9594 = st::fn_00403A2B(this,2);
            if (local_EAX_9594 == -1) {
              return -1;
            }
            if (this->field_082E != 0) {
              return 2;
            }
            if ((this->field_04BD != 1) && (this->field_04C1 != 1)) {
              if (*(int *)&this->field_0x4cd % 0x32 != 1) {
                return 2;
              }
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if (sVar10 < 0) {
                return 2;
              }
              if (g_worldGrid.sizeX <= sVar10) {
                return 2;
              }
              if (sVar17 < 0) {
                return 2;
              }
              if (g_worldGrid.sizeY <= sVar17) {
                return 2;
              }
              if (sVar16 < 0) {
                return 2;
              }
              if (g_worldGrid.sizeZ <= sVar16) {
                return 2;
              }
              pSVar1 = (STBoatC *)
                       STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              if (pSVar1 == nullptr) {
                return 2;
              }
              if (pSVar1->field_0018 != this->field_04AB) {
                return 2;
              }
              iVar6 = st::fn_00405470(pSVar1);
              if (iVar6 != 1) {
                return 2;
              }
              local_EAX_9852 = st::fn_0040259F(this,(STFishC *)pSVar1);
              if (local_EAX_9852 != 1) {
                return 2;
              }
              st::fn_00404CD2(pSVar1,this->field_0018);
              iVar6 = (int)this->field_04C9;
              sVar16 = this->field_04C7;
              sVar10 = this->field_04C5;
              *(undefined4 *)&this->field_0x4cd = 0;
              *(undefined4 *)&this->field_0x4d5 = 10;
              this->field_00B7 = 0;
              goto LAB_00468322;
            }
            local_c = nullptr;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar10 = this->field_049B;
                sVar16 = this->field_049F;
                sVar17 = this->field_049D;
                if (((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar16)) {
                  pSVar5 = nullptr;
                }
                else {
                  pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
            }
            if (this->field_04C1 == 1) {
              this->field_04C1 = 0;
              if (this->field_04AB != -1) {
                sVar10 = this->field_04A5;
                sVar16 = this->field_04A9;
                sVar17 = this->field_04A7;
                if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                   ((sVar17 < 0 ||
                    (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)
                     ))))) {
                  pSVar5 = nullptr;
                }
                else {
                  pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                  this->field_04AB = 0xffffffff;
                }
              }
              bVar3 = true;
              if (this->field_04AB == -1) goto LAB_00468493;
            }
            else {
LAB_00468493:
              bVar3 = false;
            }
            local_EAX_10296 = st::fn_00403184(this);
            if (local_EAX_10296 != 0) {
              if (local_EAX_10296 == 7) {
                if (this->field_04AB == -1) {
                  return 2;
                }
                if (!bVar3) {
                  return 2;
                }
                if (this->field_04AB == -1) {
                  return 2;
                }
                if (!bVar3) {
                  return 2;
                }
                *(undefined4 *)&this->field_0x4cd = 0;
                *(undefined4 *)&this->field_0x4d5 = 7;
                st::fn_00404F6B(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
              }
              else {
                *(undefined4 *)&this->field_0x4cd = 0;
                *(undefined4 *)&this->field_0x4d5 = 1;
                st::fn_00404F6B(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
              }
              goto cf_common_exit_00465E7B;
            }
            st::fn_00403855(this);
            goto LAB_00469972;
          }
          if (iVar6 != 10) {
            if (iVar6 == 0xb) {
              if (this->field_04D9 == 0) {
                iVar14 = (ushort)(this->field_04A9 * 200) + 300;
                iVar6 = STReplaceLowWord((uint32_t)(iVar14), (uint16_t)(this->field_04A7 + 1)) * 0xc9;
                iVar21 = STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_04A5 + 1));
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                uVar4 = (*this->vtable->vfunc_10)
                                  (this->field_0041,this->field_0043,
                                   CONCAT22((short)((uint)(iVar21 * 0x19) >> 0x10),this->field_0045)
                                   ,(short)(iVar21 * 0xc9),(short)iVar6,iVar14);
                this->field_04CB = uVar4;
                this->field_04D9 = 1;
              }
              if (this->field_04D9 == 1) {
                uVar7 = st::fn_004030B2(this,this->field_04CB);
                uVar7 = st::fn_004022FC(this,(short)uVar7);
                if (uVar7 == 0xffffffff) {
                  local_EAX_12513 =
                       st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2196,0,0,
                                          "%s","STBoatC::LoadRC, LOADRC_PDEPOT");
                  if (local_EAX_12513 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  iVar6 = 0x2197;
                  goto cf_error_exit_004660E9;
                }
                if (uVar7 == 0) {
                  this->field_04D9 = 2;
                  iVar6 = this->vfunc_D8();
                  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
                }
              }
              if (this->field_04D9 == 2) {
                st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                             (this->field_04A5 + 1) * 0xc9,(this->field_04A7 + 1) * 0xc9,
                             this->field_04A9 * 200 + 300,this->field_0061);
                this->field_04D9 = 3;
              }
              if (this->field_04D9 == 3) {
                local_10 = st::fn_00402847((STJellyGunC *)this,&local_18,&local_14);
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = nullptr;
                if (this->field_02BF != '\0') {
                  local_c = (undefined4 *)&this->field_0x2b3;
                  do {
                    puVar8 = (undefined4 *)
                             st::fn_0040342C(local_2c,(short)*local_c,*(ushort *)(local_c + 1),
                                                this->field_006C);
                    local_24 = *puVar8;
                    local_20 = *(short *)(puVar8 + 1);
                    if (DAT_0080732c == 1) {
                      bVar23 = 0;
                      sVar22 = 0;
                      uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
                      iVar21 = -1;
                      this->field_001C = uVar7;
                      sVar20 = 0;
                      sVar19 = 0;
                      uVar9 = uVar7 * 0x41c64e6d + 0x3039;
                      sVar18 = 0;
                      this->field_001C = uVar9;
                      sVar17 = 0;
                      sVar16 = 0;
                      local_1c = uVar9 * 0x41c64e6d + 0x3039;
                      sVar10 = 0;
                      this->field_001C = local_1c;
                      lVar15 = st::fn_0072E288();
                      iVar6 = (int)(short)lVar15 + (uVar7 >> 0x10) % 7 + (int)this->field_0045 + -3
                              + (int)local_20;
                      iVar14 = ((uVar9 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_24);
                      uVar7 = local_1c;
                    }
                    else {
                      uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
                      bVar23 = 0;
                      sVar22 = 0;
                      uVar11 = uVar9 * 0x41c64e6d + 0x3039;
                      iVar21 = -1;
                      sVar20 = 0;
                      sVar19 = 0;
                      sVar18 = 0;
                      sVar17 = 0;
                      sVar16 = 0;
                      this->field_001C = uVar9;
                      uVar7 = uVar11 * 0x41c64e6d + 0x3039;
                      sVar10 = 0;
                      this->field_001C = uVar11;
                      this->field_001C = uVar7;
                      iVar6 = (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                      STPiece<2,2>(local_24) = (short)((uint)local_24 >> 0x10);
                      iVar14 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_24);
                    }
                    st::fn_00401433
                              (g_traksClass_00802A7C,1,2,7,
                               (uVar7 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                               (int)(short)local_24,iVar14 + -3,iVar6,sVar10,sVar16,sVar17,sVar18,
                               sVar19,sVar20,iVar21,sVar22,bVar23);
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (int *)((int)param_1 + 1);
                    local_c = (undefined4 *)((int)local_c + 6);
                  } while ((int)param_1 < (int)(uint)(byte)this->field_02BF);
                }
                if (local_10 == -1) {
                  local_EAX_13191 =
                       st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x21bc,0,0,
                                          "%s","STBoatC::LoadRC, LOADRC_PDEPOT 2");
                  if (local_EAX_13191 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  iVar6 = 0x21bd;
                  goto cf_error_exit_004660E9;
                }
                if (local_10 == 0) {
                  *(undefined4 *)&this->field_0x4d5 = 0xc;
                  this->field_04D9 = 0;
                  iVar6 = this->vfunc_D8();
                  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
                }
              }
              goto cf_common_exit_004693C9;
            }
            if (iVar6 != 0xc) {
              if (iVar6 == 0xd) {
                iVar6 = *(int *)&this->field_0x4d1 + 1;
                *(int *)&this->field_0x4d1 = iVar6;
                if (0x45 < iVar6) {
                  if (this->field_04D9 == 0) {
                    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                    iVar14 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_04C7 * 0xc9)) + 100;
                    uVar4 = (*this->vtable->vfunc_10)
                                      (this->field_0041,this->field_0043,
                                       STReplaceLowWord((uint32_t)(iVar14), (uint16_t)(this->field_0045)),
                                       this->field_04C5 * 0xc9 + 100,(short)iVar14,
                                       STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_04C9 * 200))
                                       + 100);
                    this->field_04CB = uVar4;
                    this->field_04D9 = 1;
                  }
                  if (this->field_04D9 == 1) {
                    uVar7 = st::fn_004030B2(this,this->field_04CB);
                    uVar7 = st::fn_004022FC(this,(short)uVar7);
                    if (uVar7 == 0xffffffff) {
                      local_EAX_14419 =
                           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x223c,0,0,
                                              "%s",
                                              "STBoatC::LoadRC, LOADRC_ODEPOT");
                      if (local_EAX_14419 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                      iVar6 = 0x223d;
                      goto cf_error_exit_004660E9;
                    }
                    if (uVar7 == 0) {
                      this->field_04D9 = 2;
                      goto cf_common_exit_004699E9;
                    }
                  }
                  if (this->field_04D9 == 2) {
                    st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                                 this->field_04C5 * 0xc9 + 100,this->field_04C7 * 0xc9 + 100,
                                 this->field_04C9 * 200 + 100,this->field_0061);
                    this->field_04D9 = 3;
                  }
                  if (this->field_04D9 == 3) {
                    local_10 = st::fn_00402847((STJellyGunC *)this,&local_14,&local_18);
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = nullptr;
                    if (this->field_02BF != '\0') {
                      local_c = (undefined4 *)&this->field_0x2b3;
                      do {
                        puVar8 = (undefined4 *)
                                 st::fn_0040342C(local_2c,(short)*local_c,
                                                    *(ushort *)(local_c + 1),this->field_006C);
                        local_24 = *puVar8;
                        local_20 = *(short *)(puVar8 + 1);
                        if (DAT_0080732c == 1) {
                          bVar23 = 0;
                          sVar22 = 0;
                          iVar21 = -1;
                          uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
                          sVar20 = 0;
                          this->field_001C = uVar7;
                          sVar19 = 0;
                          sVar18 = 0;
                          uVar9 = uVar7 * 0x41c64e6d + 0x3039;
                          sVar17 = 0;
                          this->field_001C = uVar9;
                          local_1c = uVar9 * 0x41c64e6d + 0x3039;
                          sVar16 = 0;
                          this->field_001C = local_1c;
                          sVar10 = 0;
                          lVar15 = st::fn_0072E288();
                          iVar6 = (int)(short)lVar15 + (uVar7 >> 0x10) % 7 + (int)this->field_0045 +
                                  -3 + (int)local_20;
                          iVar14 = ((uVar9 >> 0x10) % 7 + (int)this->field_0043) -
                                   (int)STPiece<2,2>(local_24);
                          uVar7 = local_1c;
                        }
                        else {
                          bVar23 = 0;
                          uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
                          sVar22 = 0;
                          iVar21 = -1;
                          uVar11 = uVar9 * 0x41c64e6d + 0x3039;
                          sVar20 = 0;
                          sVar19 = 0;
                          sVar18 = 0;
                          sVar17 = 0;
                          sVar16 = 0;
                          this->field_001C = uVar9;
                          uVar7 = uVar11 * 0x41c64e6d + 0x3039;
                          sVar10 = 0;
                          this->field_001C = uVar11;
                          this->field_001C = uVar7;
                          iVar6 = (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                          STPiece<2,2>(local_24) = (short)((uint)local_24 >> 0x10);
                          iVar14 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) -
                                   (int)STPiece<2,2>(local_24);
                        }
                        st::fn_00401433
                                  (g_traksClass_00802A7C,1,2,7,
                                   (uVar7 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                                   (int)(short)local_24,iVar14 + -3,iVar6,sVar10,sVar16,sVar17,
                                   sVar18,sVar19,sVar20,iVar21,sVar22,bVar23);
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (int *)((int)param_1 + 1);
                        local_c = (undefined4 *)((int)local_c + 6);
                      } while ((int)param_1 < (int)(uint)(byte)this->field_02BF);
                    }
                    if (local_10 == -1) {
                      local_EAX_15213 =
                           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2262,0,0,
                                              "%s",
                                              "STBoatC::LoadRC, LOADRC_ODEPOT 2");
                      if (local_EAX_15213 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                      iVar6 = 0x2263;
                      goto cf_error_exit_004660E9;
                    }
                    if (local_10 == 0) {
                      *(undefined4 *)&this->field_0x4cd = 0;
                      *(undefined4 *)&this->field_0x4d1 = 0;
                      this->field_00B7 = 3;
                      local_EAX_15042 = st::fn_00403184(this);
                      if (local_EAX_15042 == 0) {
                        st::fn_00403855(this);
                        *(undefined4 *)&this->field_0x4d5 = 0;
                        this->field_00B7 = 0;
                        local_EAX_15073 = st::fn_00403A2B(this,0);
                        return (-(uint)(local_EAX_15073 != -1) & 3) - 1;
                      }
                      if (local_EAX_15042 == 1) {
                        sVar10 = this->field_049F;
                        sVar16 = this->field_049D;
                        sVar17 = this->field_049B;
                        *(undefined4 *)&this->field_0x4d5 = 0xe;
                      }
                      else {
                        sVar10 = this->field_04A9;
                        sVar16 = this->field_04A7;
                        sVar17 = this->field_04A5;
                        *(undefined4 *)&this->field_0x4d5 = 7;
                      }
                      st::fn_00404F6B(this,(int)sVar17,(int)sVar16,sVar10 + 1);
                      st::fn_004031DE(this,0);
                    }
                  }
                  goto cf_common_exit_004693C9;
                }
                goto cf_common_exit_004699E9;
              }
              if (iVar6 != 0xe) {
                local_EAX_15421 =
                     st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x22ad,0,0,
                                        "%s","STBoatC::LoadRC - incorrect entry");
                if (local_EAX_15421 == 0) {
                  return -1;
                }
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              local_EAX_15261 = st::fn_004031DE(this,2);
              switch(local_EAX_15261) {
              case 1:
                st::fn_00403855(this);
              case 0:
                *(undefined4 *)&this->field_0x4cd = 0;
                *(undefined4 *)&this->field_0x4d5 = 1;
                this->field_00B7 = 3;
              case 3:
                iVar6 = (int)this->field_049D;
                iVar14 = (int)this->field_049B;
                iVar21 = this->field_049F + 1;
                break;
              default:
                goto cf_common_exit_004699E9;
              case -1:
                local_EAX_15305 =
                     st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x228f,0,0,
                                        "%s","STBoatC::LoadRC, LOADRC_MOVEWAITUNLOAD error");
                if (local_EAX_15305 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                iVar6 = 0x228f;
                goto cf_error_exit_004660E9;
              }
              goto cf_common_exit_004699DA;
            }
            iVar6 = *(int *)&this->field_0x4cd + 1;
            *(int *)&this->field_0x4cd = iVar6;
            if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
              local_c = nullptr;
              if (this->field_04BD == 1) {
                this->field_04BD = 0;
                if (this->field_04A1 != -1) {
                  sVar10 = this->field_049B;
                  sVar16 = this->field_049F;
                  sVar17 = this->field_049D;
                  if (((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
                      ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                     (g_worldGrid.sizeZ <= sVar16)) {
                    pSVar5 = nullptr;
                  }
                  else {
                    pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                  }
                  if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
                    this->field_04A1 = 0xffffffff;
                  }
                }
              }
              if (this->field_04C1 == 1) {
                this->field_04C1 = 0;
                if (this->field_04AB != -1) {
                  sVar10 = this->field_04A5;
                  sVar16 = this->field_04A9;
                  sVar17 = this->field_04A7;
                  if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                     ((sVar17 < 0 ||
                      (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) ||
                       (g_worldGrid.sizeZ <= sVar16)))))) {
                    pSVar5 = nullptr;
                  }
                  else {
                    pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                  }
                  if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                    this->field_04AB = 0xffffffff;
                  }
                }
                if (this->field_04AB != -1) {
                  local_c = (undefined4 *)0x1;
                  goto LAB_00469198;
                }
              }
              else {
LAB_00469198:
                if ((this->field_04AB != -1) && (local_c == nullptr)) goto LAB_004691ae;
              }
              *(undefined4 *)&this->field_0x4cd = 0;
              *(undefined4 *)&this->field_0x4d5 = 0xd;
              this->field_00B7 = 3;
cf_common_exit_004693C9:
              iVar6 = this->vfunc_D8();
              return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
            }
LAB_004691ae:
            if (iVar6 % 10 != 1) goto cf_common_exit_004699E9;
            sVar10 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if ((((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) &&
                  ((-1 < sVar17 &&
                   (((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) && (sVar16 < g_worldGrid.sizeZ)))
                   ))) && ((pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0]
                           , pSVar5 != nullptr &&
                           (*(int *)&pSVar5->field_0x18 == this->field_04AB)))) &&
                (*(int *)&pSVar5[0x21].field_0x10 == 0)) && (*(int *)&pSVar5[0x10].field_0x5 != 6))
            {
              if (iVar6 % 0x78 == 1) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar6 = *(int *)((int)this->field_06CB + 0x2c);
                if (iVar6 == 8) {
                  pSVar13 = this->vtable;
                  uVar4 = 0xfb;
LAB_004692be:
                  (*pSVar13->vfunc_90)(this,3,uVar4);
                }
                else if (iVar6 == 0x14) {
                  this->vfunc_90(3,0x15f);
                }
                else if (iVar6 == 0x1a) {
                  pSVar13 = this->vtable;
                  uVar4 = 0x19e;
                  goto LAB_004692be;
                }
              }
              iVar6 = this->field_07D2;
              iVar14 = 1;
              if (iVar6 < 1) {
                iVar6 = this->field_07D6;
                if (iVar6 < 1) {
                  iVar6 = this->field_07DA;
                  if (0 < iVar6) {
                    if (iVar6 < 1) {
                      iVar14 = iVar6;
                    }
                    st::fn_00405EC0(pSVar5,0xde,iVar14 * 0x14);
                    st::fn_00402B6C(pSVar5,this->field_0018);
                    this->field_07DA = this->field_07DA - iVar14;
                  }
                }
                else {
                  if (iVar6 < 1) {
                    iVar14 = iVar6;
                  }
                  st::fn_00405EC0(pSVar5,0xdd,iVar14 * 3);
                  st::fn_00402B6C(pSVar5,this->field_0018);
                  this->field_07D6 = this->field_07D6 - iVar14;
                }
              }
              else {
                if (iVar6 < 1) {
                  iVar14 = iVar6;
                }
                st::fn_00405EC0(pSVar5,0xdc,iVar14 * 5);
                st::fn_00402B6C(pSVar5,this->field_0018);
                this->field_07D2 = this->field_07D2 - iVar14;
              }
              if (this->field_07DA + this->field_07D6 + this->field_07D2 != 0)
              goto cf_common_exit_004699E9;
            }
            st::fn_00403C0B(this);
            *(undefined4 *)&this->field_0x4cd = 0;
            *(undefined4 *)&this->field_0x4d5 = 0xd;
            this->field_00B7 = 3;
            goto cf_common_exit_004699E9;
          }
          if (*(int *)&this->field_0x4cd < 1) {
            local_EAX_11037 = st::fn_004031DE(this,2);
            switch(local_EAX_11037) {
            case 0:
              if (((this->field_0047 == this->field_04C5) && (this->field_0049 == this->field_04C7))
                 && (this->field_004B == this->field_04C9)) {
                *(undefined4 *)&this->field_0x4d5 = 0xb;
                this->field_04D9 = 0;
                iVar6 = this->vfunc_D8();
                return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
              }
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if ((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) &&
                  ((-1 < sVar17 &&
                   (((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) && (sVar16 < g_worldGrid.sizeZ)))
                   ))) && ((pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0]
                           , pSVar5 != nullptr &&
                           (*(int *)&pSVar5->field_0x18 == this->field_04AB)))) {
                st::fn_00402CCA(pSVar5,this->field_0018);
              }
              return 0;
            case 1:
              goto switchD_0046878c_caseD_1;
            default:
              goto cf_common_exit_00468C50;
            case 3:
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if ((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) && (-1 < sVar17)) &&
                 (((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) &&
                  ((sVar16 < g_worldGrid.sizeZ &&
                   ((STFishC *)
                    STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0] !=
                    nullptr)))))) {
                st::fn_0040259F(this,(STFishC *)
                                        STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects
                                        [0]);
              }
              st::fn_00404F6B(this,(int)this->field_04C5,(int)this->field_04C7,(int)this->field_04C9);
              goto cf_common_exit_00468C49;
            case -1:
              local_EAX_11081 =
                   st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2126,0,0,
                                      "%s","STBoatC::LoadRC, move to depot 2 error");
              if (local_EAX_11081 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              iVar6 = 0x2126;
              goto cf_error_exit_004660E9;
            }
          }
          iVar6 = *(int *)&this->field_0x4cd + 1;
          *(int *)&this->field_0x4cd = iVar6;
          if (iVar6 == 2) {
            local_EAX_10516 = st::fn_00403A2B(this,0);
            if (local_EAX_10516 != -1) {
              return 2;
            }
            return -1;
          }
          local_EAX_10545 = st::fn_00403A2B(this,2);
          if (local_EAX_10545 == -1) {
            return -1;
          }
          if (this->field_082E != 0) {
            return 2;
          }
          if (this->field_04BD == 1) {
LAB_004685d3:
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar10 = this->field_049B;
              sVar16 = this->field_049F;
              sVar17 = this->field_049D;
              if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                 ((sVar17 < 0 ||
                  (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))
                  ))) {
                pSVar5 = nullptr;
              }
              else {
                pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
                this->field_04A1 = 0xffffffff;
              }
            }
          }
          else {
            if (this->field_04C1 != 1) {
              return 2;
            }
            if (this->field_04BD == 1) goto LAB_004685d3;
          }
          if (this->field_04C1 == 1) {
            this->field_04C1 = 0;
            if (this->field_04AB != -1) {
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                 (((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                  (g_worldGrid.sizeZ <= sVar16)))) {
                pSVar5 = nullptr;
              }
              else {
                pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          local_EAX_10926 = st::fn_00403184(this);
          if (local_EAX_10926 == 0) {
            st::fn_00403855(this);
            *(undefined4 *)&this->field_0x4d5 = 0;
            goto cf_common_exit_00469979;
          }
          if (local_EAX_10926 == 7) {
            if (this->field_04AB == -1) {
              return 2;
            }
            goto cf_common_exit_00468742;
          }
          goto cf_common_exit_00465E40;
        }
        if (*(int *)&this->field_0x4cd < 1) {
          local_EAX_7374 = st::fn_004031DE(this,2);
          switch(local_EAX_7374) {
          case 0:
            iVar6 = st::fn_004049CB(this);
            if (iVar6 == 1) {
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if ((((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) && (-1 < sVar17)) &&
                   ((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)))) &&
                  ((sVar16 < g_worldGrid.sizeZ &&
                   ((pSVar1 = (STBoatC *)
                              STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0],
                    pSVar1 != nullptr && (pSVar1->field_0018 == this->field_04AB)))))) &&
                 (iVar6 = st::fn_00405470(pSVar1), iVar6 != 1)) {
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                st::fn_00404908(this,this->field_0047,this->field_0049,this->field_004B,
                             this->field_04A5,this->field_04A7,
                             (int *)CONCAT22(extraout_var_01,this->field_04A9 + 1),1,
                             &this->field_04AF,&this->field_04B1,&this->field_04B3);
                *(undefined4 *)&this->field_0x4d5 = 8;
                this->field_00B7 = 0;
                st::fn_00404F6B(this,(int)this->field_04AF,(int)this->field_04B1,(int)this->field_04B3);
                break;
              }
            }
            *(undefined4 *)&this->field_0x4d5 = 9;
            goto cf_common_exit_00469979;
          case 1:
            if ((this->field_04BD != 1) && (this->field_04C1 != 1)) goto cf_common_exit_00468C50;
            local_c = nullptr;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar10 = this->field_049B;
                sVar16 = this->field_049F;
                sVar17 = this->field_049D;
                if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                   ((sVar17 < 0 ||
                    (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)
                     ))))) {
                  pSVar5 = nullptr;
                }
                else {
                  pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
            }
            if (this->field_04C1 == 1) {
              this->field_04C1 = 0;
              if (this->field_04AB != -1) {
                sVar10 = this->field_04A5;
                sVar16 = this->field_04A9;
                sVar17 = this->field_04A7;
                if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                    ((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))))) ||
                   (g_worldGrid.sizeZ <= sVar16)) {
                  pSVar5 = nullptr;
                }
                else {
                  pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                  this->field_04AB = 0xffffffff;
                }
              }
              if (this->field_04AB != -1) {
                local_c = (undefined4 *)0x1;
              }
            }
            local_EAX_8163 = st::fn_00403184(this);
            if (local_EAX_8163 == 0) goto cf_common_exit_00467FE4;
            if (local_EAX_8163 == 7) {
              if ((this->field_04AB != -1) && (local_c == nullptr))
              goto cf_common_exit_00468C50;
              st::fn_00403855(this);
              if (this->field_04AB == -1) {
                *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
                iVar6 = this->vfunc_D8();
                return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
              }
              if (local_c != (undefined4 *)0x1) goto cf_common_exit_00468C50;
              st::fn_00404F6B(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
            }
            else {
              st::fn_00403855(this);
              *(undefined4 *)&this->field_0x4d5 = 1;
              st::fn_00404F6B(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
            }
            break;
          default:
            goto cf_common_exit_00468C50;
          case 3:
            st::fn_00404F6B(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
            break;
          case -1:
            local_EAX_7418 =
                 st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1fb8,0,0,"%s"
                                    ,"STBoatC::LoadRC, move to depot error");
            if (local_EAX_7418 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar6 = 0x1fb8;
            goto cf_error_exit_004660E9;
          }
          goto cf_common_exit_00468C49;
        }
        iVar6 = *(int *)&this->field_0x4cd + 1;
        *(int *)&this->field_0x4cd = iVar6;
        if (iVar6 == 2) {
          local_EAX_6880 = st::fn_00403A2B(this,0);
          if (local_EAX_6880 != -1) {
            return 2;
          }
          return -1;
        }
        local_EAX_6909 = st::fn_00403A2B(this,2);
        if (local_EAX_6909 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_04BD == 1) {
LAB_0046779f:
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar10 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
               (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
        }
        else {
          if (this->field_04C1 != 1) {
            return 2;
          }
          if (this->field_04BD == 1) goto LAB_0046779f;
        }
        if (this->field_04C1 == 1) {
          this->field_04C1 = 0;
          if (this->field_04AB != -1) {
            sVar10 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
               ((sVar17 < 0 ||
                (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))
               ) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        local_EAX_7290 = st::fn_00403184(this);
        if (local_EAX_7290 == 0) {
          st::fn_00403855(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (local_EAX_7290 != 7) {
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 1;
          goto cf_common_exit_00465E5A;
        }
        if (this->field_04AB == -1) {
          return 2;
        }
        *(undefined4 *)&this->field_0x4cd = 0;
        goto cf_common_exit_0046875C;
      }
      iVar6 = *(int *)&this->field_0x4d1 + 1;
      *(int *)&this->field_0x4d1 = iVar6;
      if (iVar6 < 0x47) goto cf_common_exit_004699E9;
      local_EAX_6675 = st::fn_004031DE(this,2);
      switch(local_EAX_6675) {
      case 1:
        iVar6 = *(int *)&this->field_0x4cd + 1;
        *(int *)&this->field_0x4cd = iVar6;
        if (iVar6 < 3) goto cf_common_exit_004699E9;
        st::fn_00403855(this);
      case 0:
        *(undefined4 *)&this->field_0x4cd = 0;
        *(undefined4 *)&this->field_0x4d1 = 0;
        *(undefined4 *)&this->field_0x4d5 = 7;
        this->field_00B7 = 3;
      case 3:
        iVar6 = (int)this->field_04A7;
        iVar14 = (int)this->field_04A5;
        iVar21 = this->field_04A9 + 1;
        break;
      default:
        goto cf_common_exit_004699E9;
      case -1:
        local_EAX_6719 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1f53,0,0,"%s",
                                "STBoatC::LoadRC, LOADRC_MOVEWAITLOAD error");
        if (local_EAX_6719 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x1f53;
        goto cf_error_exit_004660E9;
      }
      goto cf_common_exit_004699DA;
    }
    local_EAX_2009 = st::fn_004031DE(this,2);
    switch(local_EAX_2009) {
    case 0:
      iVar6 = st::fn_004049CB(this);
      if (iVar6 != 1) {
        *(undefined4 *)&this->field_0x4d5 = 3;
        this->field_00B7 = 3;
        local_EAX_2195 = st::fn_00403A2B(this,0);
        return (-(uint)(local_EAX_2195 != -1) & 3) - 1;
      }
      sVar10 = this->field_049B;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      piVar12 = (int *)CONCAT22(extraout_var_02,this->field_049F + 1);
LAB_00467da5:
      st::fn_00404908(this,this->field_0047,this->field_0049,this->field_004B,sVar10,0,piVar12,1,
                   &this->field_04AF,&this->field_04B1,&this->field_04B3);
      st::fn_00404F6B(this,(int)this->field_04AF,(int)this->field_04B1,(int)this->field_04B3);
      break;
    case 1:
      if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
        local_c = nullptr;
        if (this->field_04BD == 1) {
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar10 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
               ((sVar17 < 0 ||
                (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))
               ) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
          if (this->field_04A1 != -1) {
            local_c = (undefined4 *)0x1;
          }
        }
        if (this->field_04C1 == 1) {
          this->field_04C1 = 0;
          if (this->field_04AB != -1) {
            sVar10 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
               (((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                (g_worldGrid.sizeZ <= sVar16)))) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        local_EAX_2651 = st::fn_00403184(this);
        if (local_EAX_2651 == 0) {
cf_common_exit_00467FE4:
          st::fn_00403855(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (local_EAX_2651 == 1) {
          if ((this->field_04A1 != -1) && (local_c == nullptr))
          goto cf_common_exit_004699E9;
          st::fn_00403855(this);
          if (this->field_04A1 == -1) {
            *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
            goto cf_common_exit_004699E9;
          }
          if (local_c != (undefined4 *)0x1) goto LAB_00466744;
          this->field_00B7 = 3;
          *(undefined4 *)&this->field_0x4d5 = 1;
          st::fn_00404F6B(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
        }
        else {
LAB_0046817e:
          st::fn_00403855(this);
          this->field_00B7 = 3;
          *(undefined4 *)&this->field_0x4d5 = 7;
          st::fn_00404F6B(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
        }
      }
      else {
LAB_00466744:
        sVar10 = this->field_049B;
        sVar16 = this->field_049F;
        sVar17 = this->field_049D;
        if ((((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
             ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
            ((g_worldGrid.sizeZ <= sVar16 ||
             ((pSVar1 = (STBoatC *)
                        STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0],
              pSVar1 == nullptr || (pSVar1->field_0018 != this->field_04A1)))))) ||
           (iVar6 = st::fn_00405470(pSVar1), iVar6 != 1)) goto cf_common_exit_004699E9;
        st::fn_00403855(this);
        st::fn_00404CD2(pSVar1,this->field_0018);
        *(undefined4 *)&this->field_0x4cd = 0;
        *(undefined4 *)&this->field_0x4d5 = 4;
        st::fn_00404F6B(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
      }
      break;
    default:
      goto cf_common_exit_004699E9;
    case 3:
      iVar6 = st::fn_004049CB(this);
      if (iVar6 == 1) {
        sVar10 = this->field_049B;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        piVar12 = (int *)CONCAT22((short)((uint)&this->field_04B3 >> 0x10),this->field_049F + 1);
LAB_00467e31:
        st::fn_00404908(this,this->field_0047,this->field_0049,this->field_004B,sVar10,0,piVar12,1,
                     &this->field_04AF,&this->field_04B1,&this->field_04B3);
      }
LAB_00467e48:
      st::fn_00404F6B(this,(int)this->field_04AF,(int)this->field_04B1,(int)this->field_04B3);
      break;
    case -1:
      local_EAX_2055 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x1d66,0,0,"%s",
                              "STBoatC::LoadRC, correct move to mine error");
      if (local_EAX_2055 == 0) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1d66
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
cf_common_exit_004699E2:
  st::fn_004031DE(this,0);
cf_common_exit_004699E9:
  iVar6 = this->vfunc_D8();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
switchD_0046878c_caseD_1:
  if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
    local_c = nullptr;
    if (this->field_04BD == 1) {
      this->field_04BD = 0;
      if (this->field_04A1 != -1) {
        sVar10 = this->field_049B;
        sVar16 = this->field_049F;
        sVar17 = this->field_049D;
        if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
           (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))) {
          pSVar5 = nullptr;
        }
        else {
          pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
        }
        if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
          this->field_04A1 = 0xffffffff;
        }
      }
    }
    if (this->field_04C1 == 1) {
      this->field_04C1 = 0;
      if (this->field_04AB != -1) {
        sVar10 = this->field_04A5;
        sVar16 = this->field_04A9;
        sVar17 = this->field_04A7;
        if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
           ((sVar17 < 0 ||
            (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))) {
          pSVar5 = nullptr;
        }
        else {
          pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
        }
        if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
          this->field_04AB = 0xffffffff;
        }
      }
      if (this->field_04AB != -1) {
        local_c = (undefined4 *)0x1;
      }
    }
    local_EAX_11852 = st::fn_00403184(this);
    if (local_EAX_11852 == 0) {
      st::fn_00403855(this);
      *(undefined4 *)&this->field_0x4d5 = 0;
      goto cf_common_exit_00469979;
    }
    if (local_EAX_11852 != 7) {
      st::fn_00403855(this);
      sVar16 = this->field_049D;
      sVar10 = this->field_049B;
      iVar6 = this->field_049F + 1;
      *(undefined4 *)&this->field_0x4cd = 0;
      this->field_00B7 = 3;
      *(undefined4 *)&this->field_0x4d5 = 1;
      goto LAB_00468c40;
    }
    if ((this->field_04AB != -1) && (local_c == nullptr)) goto cf_common_exit_00468C50;
    st::fn_00403855(this);
    if (this->field_04AB == -1) {
      *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
      iVar6 = this->vfunc_D8();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    if (local_c == (undefined4 *)0x1) {
      *(undefined4 *)&this->field_0x4cd = 0;
      *(undefined4 *)&this->field_0x4d5 = 7;
      goto LAB_00468b38;
    }
  }
  st::fn_00403855(this);
  sVar10 = this->field_04A5;
  sVar16 = this->field_04A9;
  sVar17 = this->field_04A7;
  if (((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) &&
     ((-1 < sVar17 &&
      ((((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) && (sVar16 < g_worldGrid.sizeZ)) &&
       ((STFishC *)
        STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0] != nullptr)))))) {
    st::fn_0040259F(this,(STFishC *)
                            STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0]);
  }
  st::fn_00404F6B(this,(int)this->field_04C5,(int)this->field_04C7,(int)this->field_04C9);
  goto cf_common_exit_00468C49;
}

// 0046AA50 STBoatC::BackLoadRC
#line 4 "decomp/ST.exe/functions/0046AA50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackLoadRC

   [STSwitchEnumApplier] Switch target field_04D5 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_04D5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0046AA50 -> 004620F0 @ 0046AAAA | 0046AA50 -> 004620F0 @ 0046AABD | 0046AA50 ->
   004620F0 @ 0046AF0D */

int __thiscall st::fn_0046AA50(STBoatC *this,STBoatC *param_1)

{
  undefined2 uVar2;
  int local_EAX_56;
  int local_EAX_90;
  int local_EAX_185;
  int local_EAX_430;
  int local_EAX_685;
  uint uVar3;
  int local_EAX_984;
  int iVar5;
  int local_EAX_1213;
  int local_EAX_1268;
  int iVar4;
  STBoatC *pSVar5;
  STBoatC *local_8;

  this->field_00B7 = 0;
  pSVar5 = this;
  local_8 = this;
  switch(*(undefined4 *)&this->field_0x4d5) {
  case 0:
    goto switchD_0046aa71_caseD_0;
  case 1:
  case 2:
  case 4:
  case 7:
  case 8:
  case 10:
    if (*(int *)&this->field_0x4cd != 0) {
      local_EAX_90 = st::fn_0040493A(this);
      return local_EAX_90;
    }
    local_EAX_56 = st::fn_00403DF0(this);
    break;
  case 3:
  case 9:
    local_EAX_56 = st::fn_0040493A(this);
    break;
  case 5:
    st::fn_00403C0B(this);
    iVar4 = *(int *)&this->field_0x4d1 + 1;
    *(int *)&this->field_0x4d1 = iVar4;
    if (iVar4 < 0x47) {
LAB_0046acad:
      iVar4 = this->vfunc_D8();
      return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
    }
    *(undefined4 *)&this->field_0x4d1 = 0;
    goto LAB_0046aaed;
  case 6:
  case 0xe:
    local_EAX_185 = st::fn_00403DF0(this);
    return local_EAX_185;
  case 0xb:
    iVar4 = this->field_04D9;
    if (((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) {
      st::fn_00403C0B(this);
      iVar4 = this->vfunc_D8();
      return -(uint)(iVar4 != 0);
    }
    if (iVar4 == 3) {
      iVar4 = STReplaceLowWord((uint32_t)(this), (uint16_t)(this->field_04C7 * 0xc9)) + 100;
      uVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar4), (uint16_t)(this->field_0045)),
                         this->field_04C5 * 0xc9 + 100,(short)iVar4,
                         (ushort)(this->field_04C9 * 200) + 100);
      this->field_04CB = uVar2;
      this->field_04D9 = 4;
    }
    if (this->field_04D9 == 4) {
      uVar3 = st::fn_004030B2(this,this->field_04CB);
      uVar3 = st::fn_004022FC(this,(short)uVar3);
      if (uVar3 != 0xffffffff) {
        if (uVar3 == 0) {
          this->field_04D9 = 5;
        }
        goto cf_common_exit_0046ABCB;
      }
      local_EAX_430 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x22fd,0,0,"%s",
                              "STBoatC::BackLoadRC, LOADRC_PDEPOT");
      if (local_EAX_430 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x22fe;
    }
    else {
      if (this->field_04D9 == 5) {
        st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_04C5 * 0xc9 + 100,this->field_04C7 * 0xc9 + 100,
                     this->field_04C9 * 200 + 100,this->field_0061);
        this->field_04D9 = 6;
      }
      if (this->field_04D9 != 6) {
        return 2;
      }
      iVar4 = st::fn_00402847((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar4 != -1) {
        if (iVar4 == 0) {
          st::fn_00403C0B(this);
          iVar4 = this->vfunc_D8();
          return -(uint)(iVar4 != 0);
        }
        goto LAB_0046acad;
      }
      local_EAX_685 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2311,0,0,"%s",
                              "STBoatC::BackLoadRC, LOADRC_PDEPOT 2");
      if (local_EAX_685 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x2312;
    }
    goto LAB_0046ac10;
  case 0xc:
    st::fn_00403C0B(this);
    pSVar5 = (STBoatC *)(*(int *)&this->field_0x4d1 + 1);
    *(STBoatC **)&this->field_0x4d1 = pSVar5;
    if ((int)pSVar5 < 0x47) goto cf_common_exit_0046ABCB;
    *(undefined4 *)&this->field_0x4d1 = 0;
    *(undefined4 *)&this->field_0x4d5 = 0xd;
  case 0xd:
    if (this->field_04D9 == 0) {
      iVar4 = STReplaceLowWord((uint32_t)(pSVar5), (uint16_t)(this->field_04C7 * 0xc9)) + 100;
      uVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar4), (uint16_t)(this->field_0045)),
                         this->field_04C5 * 0xc9 + 100,(short)iVar4,
                         (ushort)(this->field_04C9 * 200) + 100);
      this->field_04CB = uVar2;
      this->field_04D9 = 1;
    }
    if (this->field_04D9 == 1) {
      uVar3 = st::fn_004030B2(this,this->field_04CB);
      uVar3 = st::fn_004022FC(this,(short)uVar3);
      if (uVar3 != 0xffffffff) {
        if (uVar3 == 0) {
          this->field_04D9 = 2;
        }
cf_common_exit_0046ABCB:
        iVar4 = this->vfunc_D8();
        return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
      }
      local_EAX_984 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2338,0,0,"%s",
                              "STBoatC::BackLoadRC, LOADRC_ODEPOT");
      if (local_EAX_984 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x2339;
    }
    else {
      if (this->field_04D9 == 2) {
        st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_04C5 * 0xc9 + 100,this->field_04C7 * 0xc9 + 100,
                     this->field_04C9 * 200 + 100,this->field_0061);
        this->field_04D9 = 3;
      }
      if (this->field_04D9 != 3) {
switchD_0046aa71_caseD_0:
        local_EAX_1213 = st::fn_0040493A(this);
        iVar4 = this->vfunc_D8();
        if (iVar4 != 0) {
          return -1;
        }
        return local_EAX_1213;
      }
      iVar4 = st::fn_00402847((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar4 != -1) {
        if (iVar4 != 0) {
          iVar4 = this->vfunc_D8();
          return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
        }
LAB_0046aaed:
        iVar4 = this->vfunc_D8();
        return -(uint)(iVar4 != 0);
      }
      iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2350,0,0,"%s",
                                 "STBoatC::BackLoadRC, LOADRC_ODEPOT 2");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x2351;
    }
LAB_0046ac10:
    st::fn_006A5E40
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar4);
    return 0xffff;
  default:
    local_EAX_1268 =
         st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2367,0,0,"%s",
                            "STBoatC::BackLoadRC");
    if (local_EAX_1268 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_EAX_56 == 0) {
    st::fn_00403C0B(this);
  }
  return local_EAX_56;
}

// 0046B100 STBoatC::Build
#line 4 "decomp/ST.exe/functions/0046B100/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Build */

int __thiscall st::fn_0046B100(STBoatC *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  STBoatC_field_0508State SVar4;
  STWorldObject *pSVar5;
  undefined2 uVar7;
  undefined4 uVar8;
  int local_EAX_420;
  int local_EAX_950;
  int iVar9;
  uint uVar10;
  int iVar13;
  undefined4 *puVar11;
  uint uVar12;
  int local_EAX_2223;
  int local_EAX_2460;
  int local_EAX_3077;
  int local_EAX_3970;
  int local_EAX_4673;
  int local_EAX_4880;
  int local_EAX_4958;
  int iVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STBoatC *extraout_ECX;
  STBoatC *pSVar15;
  uint uVar16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_06;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  bool bVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  int iVar25;
  short sVar26;
  byte bVar27;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  undefined4 local_9c;
  char local_98 [14];
  undefined1 local_8a;
  int local_89;
  undefined4 local_85;
  undefined4 local_81;
  int local_6d;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c [2];
  STMessage local_44;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  undefined4 local_c;
  short local_8;

  if ((param_1 == 0) || (pSVar15 = this, param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    sVar19 = this->field_0373;
    sVar20 = this->field_0377;
    sVar21 = this->field_0375;
    if ((((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) || (sVar21 < 0)) ||
       (((g_worldGrid.sizeY <= sVar21 || (sVar20 < 0)) ||
        ((g_worldGrid.sizeZ <= sVar20 ||
         (STGridAt3D(g_pathingGrid, sVar19, sVar21, sVar20) != 0)))))) {
      return 0;
    }
    this->field_04DD = sVar19;
    this->field_04FA = this->field_0390;
    this->field_04DF = this->field_0375;
    this->field_04E1 = this->field_0377;
    this->field_04E3 = this->field_0379;
    this->field_0502 = *(undefined4 *)(&DAT_00791d68 + this->field_0379 * 4);
    this->field_04E7 = this->field_037D;
    st::fn_0072E340(&this->field_0x4eb,&this->field_0x381,0xe);
    this->field_04F9 = 0;
    st::fn_00403EB3(this);
    this->field_0508 = CASE_0;
    this->field_050C = 0;
    st::fn_00404F6B(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
    iVar14 = st::fn_00403B34(this,0);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pSVar15 = extraout_ECX;
    if (iVar14 == -1) {
      return -1;
    }
  }
  SVar4 = this->field_0508;
  if (SVar4 == CASE_0) {
    uVar8 = st::fn_00403B34(this,2);
    switch(uVar8) {
    case 0:
      if ((((this->field_0047 != this->field_04FC) || (this->field_0049 != this->field_04FE)) ||
          (this->field_004B != this->field_0500)) ||
         (iVar14 = st::fn_00402829(this->field_04DD,(int)this->field_04DF,(int)this->field_04E1,
                                      this->field_04E3,this->field_0024,nullptr,nullptr
                                      ,nullptr,0,nullptr), iVar14 == 0)) {
        return 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)this->field_06CB + 0x2c) == 0x19) {
        this->field_0508 = CASE_3 - (this->field_0502 != 0);
      }
      else {
        this->field_0508 = (-(uint)(this->field_0502 != 0) & 0xfffffffd) + CASE_5;
      }
      break;
    case 2:
      local_14 = g_playSystem_00802A38->field_00E4;
      if (local_14 % 10 != 0) break;
      sVar19 = this->field_04DD;
      uVar3 = this->field_04DF;
      local_18 = (uint)uVar3;
      sVar20 = this->field_04E1;
      if ((((-1 < sVar19) && (sVar19 < g_worldGrid.sizeX)) && (-1 < (short)uVar3)) &&
         ((((short)uVar3 < g_worldGrid.sizeY && (-1 < sVar20)) &&
          ((sVar20 < g_worldGrid.sizeZ &&
           (STGridAt3D(g_pathingGrid, sVar19, uVar3, sVar20) == 0)))))) break;
      if (((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) ||
         (((short)uVar3 < 0 ||
          ((((g_worldGrid.sizeY <= (short)uVar3 || (sVar20 < 0)) || (g_worldGrid.sizeZ <= sVar20))
           || (pSVar5 = STGridAt3D(g_worldGrid, sVar19, uVar3, sVar20).objects[0],
              pSVar5 == nullptr)))))) {
        local_EAX_950 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x23c0,0,0,"%s",
                                "STBoatC::Build NULL");
        if (local_EAX_950 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if ((pSVar5[1].vtable < (STWorldObjectVTable *)0x8) &&
         ((g_playSystem_00802A38 == nullptr ||
          (g_bulkInitializedRecords_008087C7[(int)pSVar5[1].vtable].field_0022 < 8)))) {
        bVar27 = *(byte *)&pSVar5[1].vtable;
        bVar1 = *(byte *)&this->field_0024;
        local_10 = (undefined4 *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar27));
        local_1c = STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar1));
        if (DAT_00808a8f == '\0') {
          if (bVar27 == bVar1) {
LAB_0046b5ac:
            iVar14 = 0;
          }
          else {
            bVar2 = g_playerRelationMatrix[bVar27][bVar1];
            if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar27] == 0)) {
              iVar14 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar27] == 0)) {
              iVar14 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar27] == 1)) {
              iVar14 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar27] != 1)) goto LAB_0046b5ac;
              iVar14 = 2;
            }
          }
          bVar17 = iVar14 < 0;
        }
        else {
          bVar17 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                   g_bulkInitializedRecords_008087C7[bVar27].field_0023;
        }
        if (bVar17) {
          param_1 = local_14;
          st::fn_00402126(this,CASE_3,&param_1);
          break;
        }
      }
      this->field_0508 = CASE_1;
      break;
    case 3:
      st::fn_00403EB3(this);
      st::fn_00404F6B(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
      goto LAB_0046c3be;
    case 0xffffffff:
      local_EAX_420 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2395,0,0,"%s",
                              "STBoatC::Build, BUILD_MOVE error");
      if (local_EAX_420 == 0) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2395
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    if (SVar4 == CASE_1) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar14 = this->StopMove(unaff_EDI);
      if (iVar14 == -1) {
        return -1;
      }
      if (iVar14 == 1) {
        this->field_0508 = CASE_7;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        st::fn_00404BB0(this,extraout_EDX);
        st::fn_00404F6B(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
        iVar14 = st::fn_00403B34(this,0);
        if (iVar14 == -1) {
          return -1;
        }
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_2) {
      if (this->field_050C == 0) {
        iVar9 = (ushort)(this->field_0500 * 200) + 100;
        iVar14 = STReplaceLowWord((uint32_t)(iVar9), (uint16_t)(this->field_04DF + 1)) * 0xc9;
        iVar25 = STReplaceLowWord((uint32_t)(iVar14), (uint16_t)(this->field_04DD + 1));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar7 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           CONCAT22((short)((uint)(iVar25 * 0x19) >> 0x10),this->field_0045),
                           (short)(iVar25 * 0xc9),(short)iVar14,iVar9);
        this->field_0506 = uVar7;
        this->field_050C = 1;
      }
      if (this->field_050C == 1) {
        uVar10 = st::fn_004030B2(this,this->field_0506);
        uVar10 = st::fn_004022FC(this,(short)uVar10);
        if (uVar10 == 0xffffffff) {
          iVar13 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x23f3,0,0,
                                      "%s","STBoatC::Build, BUILD_PMOVE");
          if (iVar13 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar14 = 0x23f4;
          goto cf_error_exit_0046C422;
        }
        if (uVar10 == 0) {
          this->field_050C = 2;
          goto LAB_0046b6e2;
        }
      }
      if (this->field_050C == 2) {
        st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                     (this->field_04DD + 1) * 0xc9,(this->field_04DF + 1) * 0xc9,
                     this->field_0500 * 200 + 100,this->field_0061);
        this->field_050C = 3;
      }
      if (this->field_050C == 3) {
        local_1c = st::fn_00402847((STJellyGunC *)this,&local_18,(int *)&local_14);
        local_20 = 0;
        if (this->field_02BF != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar11 = (undefined4 *)
                      st::fn_0040342C(local_4c,(short)*local_10,*(ushort *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar11;
            local_8 = *(short *)(puVar11 + 1);
            if (DAT_0080732c == 1) {
              bVar27 = 0;
              sVar26 = 0;
              uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar25 = -1;
              this->field_001C = uVar10;
              sVar24 = 0;
              sVar23 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar22 = 0;
              this->field_001C = uVar12;
              sVar21 = 0;
              sVar20 = 0;
              local_24 = uVar12 * 0x41c64e6d + 0x3039;
              sVar19 = 0;
              this->field_001C = local_24;
              lVar18 = st::fn_0072E288();
              iVar14 = (int)(short)lVar18 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_8;
              iVar9 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_c);
              uVar10 = local_24;
            }
            else {
              uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
              bVar27 = 0;
              sVar26 = 0;
              uVar16 = uVar12 * 0x41c64e6d + 0x3039;
              iVar25 = -1;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              this->field_001C = uVar12;
              uVar10 = uVar16 * 0x41c64e6d + 0x3039;
              sVar19 = 0;
              this->field_001C = uVar16;
              this->field_001C = uVar10;
              iVar14 = (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_8;
              STPiece<2,2>(local_c) = (short)((uint)local_c >> 0x10);
              iVar9 = ((uVar16 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_c);
            }
            st::fn_00401433
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_c,
                       iVar9 + -3,iVar14,sVar19,sVar20,sVar21,sVar22,sVar23,sVar24,iVar25,sVar26,
                       bVar27);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
          } while (local_20 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_1c == -1) {
          local_EAX_2223 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2419,0,0,"%s",
                                  "STBoatC::Build, BUILD_PMOVE 2");
          if (local_EAX_2223 == 0) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x241a);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (local_1c == 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar14 = *(int *)((int)this->field_06CB + 0x2c);
          this->field_050C = 0;
          this->field_0508 = (-(uint)(iVar14 != 0x19) & 2) + CASE_3;
        }
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_3) {
      iVar14 = (int)this->field_006C;
      if (0x2d < iVar14 % 0x5a) {
        iVar14 = iVar14 + 0x2d;
      }
      uVar10 = st::fn_004022FC(this,(short)(((iVar14 / 0x5a) * 0x5a) % 0x168));
      if (uVar10 == 0xffffffff) {
        local_EAX_2460 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2434,0,0,"%s",
                                "STBoatC::Build, BUILD_ROTATE");
        if (local_EAX_2460 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar14 = 0x2435;
        goto cf_error_exit_0046C422;
      }
      if (uVar10 == 0) {
        this->field_0508 = CASE_4;
        this->field_050C = 2;
        iVar14 = this->vfunc_D8();
        return (-(uint)(iVar14 != 0) & 0xfffffffd) + 2;
      }
      goto cf_common_exit_0046C3C5;
    }
    if (SVar4 == CASE_4) {
      if (this->field_050C == 2) {
        st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,this->field_0041,
                     this->field_0043,this->field_0045 + -200,this->field_0061);
        this->field_050C = 3;
      }
      if (this->field_050C == 3) {
        local_1c = st::fn_00402847((STJellyGunC *)this,&local_14,(int *)&local_18);
        local_20 = 0;
        if (this->field_02BF != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar11 = (undefined4 *)
                      st::fn_0040342C(local_4c,(short)*local_10,*(ushort *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar11;
            local_8 = *(short *)(puVar11 + 1);
            if (DAT_0080732c == 1) {
              bVar27 = 0;
              sVar26 = 0;
              uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar25 = -1;
              this->field_001C = uVar10;
              sVar24 = 0;
              sVar23 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar22 = 0;
              this->field_001C = uVar12;
              sVar21 = 0;
              sVar20 = 0;
              local_24 = uVar12 * 0x41c64e6d + 0x3039;
              sVar19 = 0;
              this->field_001C = local_24;
              lVar18 = st::fn_0072E288();
              iVar14 = (int)(short)lVar18 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_8;
              iVar9 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_c);
              uVar10 = local_24;
            }
            else {
              uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar12;
              uVar16 = uVar12 * 0x41c64e6d + 0x3039;
              bVar27 = 0;
              this->field_001C = uVar16;
              uVar10 = uVar16 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar10;
              sVar26 = 0;
              iVar25 = -1;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              iVar14 = (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_8;
              STPiece<2,2>(local_c) = (short)((uint)local_c >> 0x10);
              iVar9 = ((uVar16 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_c);
            }
            st::fn_00401433
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_c,
                       iVar9 + -3,iVar14,sVar19,sVar20,sVar21,sVar22,sVar23,sVar24,iVar25,sVar26,
                       bVar27);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
          } while (local_20 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_1c == -1) {
          local_EAX_3077 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x245f,0,0,"%s",
                                  "STBoatC::Build, BUILD_PMOVE2");
          if (local_EAX_3077 == 0) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x2460);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (local_1c == 0) {
          this->field_0508 = CASE_5;
          this->field_050C = 0;
        }
      }
LAB_0046b6e2:
      iVar14 = this->vfunc_D8();
      return (-(uint)(iVar14 != 0) & 0xfffffffd) + 2;
    }
    if (SVar4 == CASE_5) {
      puVar11 = &local_d8;
      memset(puVar11, 0, 0x6f); /* compiler bulk-zero initialization */
      puVar11 = (undefined4 *)((byte *)puVar11 + 0x6c);
      uVar8 = this->field_0502;
      sVar19 = this->field_04DD;
      local_d4 = this->field_0024;
      local_b0 = this->field_04E3;
      local_a8 = (int)this->field_04DF;
      local_a4 = (int)this->field_04E1;
      local_9c = this->field_04E7;
      local_6d = (int)this->field_006C;
      local_a0 = (uint)(ushort)this->field_04FA;
      local_85 = 100;
      local_81 = 100;
      local_89 = this->field_0018;
      local_cc = 1;
      local_d0 = 1;
      local_d8 = 0x3e9;
      local_b8 = 1;
      local_bc = 1;
      local_c4 = 1000;
      local_c8 = uVar8;
      local_c0 = local_d4;
      local_b4 = uVar8;
      local_ac = (int)sVar19;
      st::fn_0072E340(local_98,&this->field_0x4eb,0xe);
      local_8a = 0;
      if (this->field_0502 == 0) {
        iVar14 = st::fn_00402829(this->field_04DD,(int)this->field_04DF,(int)this->field_04E1,
                                    this->field_04E3,this->field_0024,nullptr,nullptr,
                                    nullptr,0,nullptr);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_EDX_00;
        /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((iVar14 != 0) &&
           (st::fn_00401BC2(this->field_000C,0x3e9,0,0,&local_d8,0),
           uVar8 = extraout_EDX_01, *(int *)((int)this->field_06CB + 0x2c) == 0x19)) {
          local_44.arg0.ptr = &local_68;
          local_68 = 10000;
          local_64 = 0;
          local_60 = 0xfe;
          local_54 = 1;
          local_50 = 1;
          local_44.id = MESS_HITKILL;
          this->GetMessage(&local_44);
          goto cf_common_exit_0046C3C5;
        }
      }
      else {
        iVar14 = st::fn_00402829(this->field_04DD,(int)this->field_04DF,(int)this->field_04E1,
                                    this->field_04E3,this->field_0024,nullptr,nullptr,
                                    nullptr,0,nullptr);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_EDX_02;
        /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((iVar14 != 0) &&
           (st::fn_00401BC2(this->field_000C,0x3e9,0,0,&local_d8,0),
           uVar8 = extraout_EDX_03, *(int *)((int)this->field_06CB + 0x2c) == 0x19)) {
          local_44.arg0.ptr = &local_68;
          local_68 = 10000;
          local_64 = 0;
          local_60 = 0xfe;
          local_54 = 1;
          local_50 = 1;
          local_44.id = MESS_HITKILL;
          this->GetMessage(&local_44);
          goto cf_common_exit_0046C3C5;
        }
      }
      if (this->field_0502 == 1) {
        this->field_0508 = CASE_6;
      }
      else {
        this->field_0508 = CASE_7;
        st::fn_00404BB0(this,uVar8);
        st::fn_00404F6B(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
        iVar14 = st::fn_00403B34(this,0);
        if (iVar14 == -1) {
          return -1;
        }
      }
cf_common_exit_0046C04E:
      iVar14 = this->vfunc_D8();
      return (-(uint)(iVar14 != 0) & 0xfffffffd) + 2;
    }
    if (SVar4 == CASE_6) {
      if (this->field_050C == 0) {
        iVar14 = STReplaceLowWord((uint32_t)(pSVar15), (uint16_t)(this->field_04FE * 0xc9)) + 100;
        uVar7 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           STReplaceLowWord((uint32_t)(iVar14), (uint16_t)(this->field_0045)),
                           this->field_04FC * 0xc9 + 100,(short)iVar14,
                           (ushort)(this->field_0500 * 200) + 100);
        this->field_0506 = uVar7;
        this->field_050C = 1;
      }
      if (this->field_050C == 1) {
        uVar10 = st::fn_004030B2(this,this->field_0506);
        uVar10 = st::fn_004022FC(this,(short)uVar10);
        if (uVar10 == 0xffffffff) {
          local_EAX_3970 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x24c1,0,0,"%s",
                                  "STBoatC::Build, BUILD_OMOVE");
          if (local_EAX_3970 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar14 = 0x24c2;
          goto cf_error_exit_0046C422;
        }
        if (uVar10 == 0) {
          this->field_050C = 2;
          goto cf_common_exit_0046C04E;
        }
      }
      if (this->field_050C == 2) {
        st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_04FC * 0xc9 + 100,this->field_04FE * 0xc9 + 100,
                     this->field_0500 * 200 + 100,this->field_0061);
        this->field_050C = 3;
      }
      if (this->field_050C == 3) {
        local_1c = st::fn_00402847((STJellyGunC *)this,&local_14,(int *)&local_18);
        local_20 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_EDX_04;
        if (this->field_02BF != '\0') {
          local_10 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar11 = (undefined4 *)
                      st::fn_0040342C(local_4c,(short)*local_10,*(ushort *)(local_10 + 1),
                                         this->field_006C);
            local_c = *puVar11;
            local_8 = *(short *)(puVar11 + 1);
            if (DAT_0080732c == 1) {
              bVar27 = 0;
              sVar26 = 0;
              uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar25 = -1;
              this->field_001C = uVar10;
              sVar24 = 0;
              sVar23 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar22 = 0;
              this->field_001C = uVar12;
              sVar21 = 0;
              sVar20 = 0;
              local_24 = uVar12 * 0x41c64e6d + 0x3039;
              sVar19 = 0;
              this->field_001C = local_24;
              lVar18 = st::fn_0072E288();
              iVar14 = (int)(short)lVar18 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_8;
              iVar9 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_c);
              uVar10 = local_24;
            }
            else {
              uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar12;
              uVar16 = uVar12 * 0x41c64e6d + 0x3039;
              bVar27 = 0;
              this->field_001C = uVar16;
              uVar10 = uVar16 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar10;
              sVar26 = 0;
              iVar25 = -1;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              iVar14 = (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_8;
              STPiece<2,2>(local_c) = (short)((uint)local_c >> 0x10);
              iVar9 = ((uVar16 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_c);
            }
            st::fn_00401433
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_c,
                       iVar9 + -3,iVar14,sVar19,sVar20,sVar21,sVar22,sVar23,sVar24,iVar25,sVar26,
                       bVar27);
            local_20 = local_20 + 1;
            local_10 = (undefined4 *)((int)local_10 + 6);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar8 = extraout_EDX_05;
          } while (local_20 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_1c == -1) {
          local_EAX_4673 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x24e7,0,0,"%s",
                                  "STBoatC::Build, BUILD_OMOVE 2");
          if (local_EAX_4673 == 0) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x24e8);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (local_1c == 0) {
          this->field_0508 = CASE_7;
          st::fn_00404BB0(this,uVar8);
          st::fn_00404F6B(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
          iVar14 = st::fn_00403B34(this,0);
          if (iVar14 == -1) {
            return -1;
          }
        }
      }
      goto cf_common_exit_0046C04E;
    }
    if (SVar4 != CASE_7) {
      local_EAX_4958 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2510,0,0,"%s",
                              "STBoatC::Build - incorrect entry");
      if (local_EAX_4958 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar14 = st::fn_00403B34(this,2);
    if (iVar14 == -1) {
      local_EAX_4880 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x24fe,0,0,"%s",
                              "STBoatC::Build, BUILD_ESCMOVE error");
      if (local_EAX_4880 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar14 = 0x24fe;
cf_error_exit_0046C422:
      st::fn_006A5E40
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar14);
      return 0xffff;
    }
    if (iVar14 == 0) {
      iVar14 = this->vfunc_D8();
      return -(uint)(iVar14 != 0);
    }
    if (iVar14 != 3) goto cf_common_exit_0046C3C5;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    st::fn_00404BB0(this,extraout_EDX_06);
    st::fn_00404F6B(this,(int)this->field_04FC,(int)this->field_04FE,(int)this->field_0500);
LAB_0046c3be:
    st::fn_00403B34(this,0);
  }
cf_common_exit_0046C3C5:
  iVar14 = this->vfunc_D8();
  return (-(uint)(iVar14 != 0) & 0xfffffffd) + 2;
}

// 0046C980 STBoatC::BackBuild
#line 4 "decomp/ST.exe/functions/0046C980/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackBuild

   [STSwitchEnumApplier] Switch target field_0508 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0508State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   BackBuild(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=0046C9BB RET 0x4 | 0046C9E0 RET 0x4 | 0046C9F6 RET 0x4 | 0046CAC7 RET 0x4 |
   0046CB14 RET 0x4 | 0046CBB5 RET 0x4 | 0046CC01 RET 0x4 | 0046CC0B RET 0x4 | 0046CD77 RET 0x4 |
   0046CDD6 RET 0x4 */

int __thiscall st::fn_0046C980(STBoatC *this,int *param_1)

{
  undefined2 uVar2;
  int local_EAX_105;
  int local_EAX_354;
  int local_EAX_592;
  uint uVar3;
  int iVar5;
  undefined4 uVar4;
  int local_EAX_1042;
  int local_EAX_1089;
  int iVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  STBoatC *local_8;

  uVar2 = (undefined2)((uint)this >> 0x10);
  local_8 = this;
  switch(this->field_0508) {
  case CASE_0:
  case CASE_1:
  case CASE_7:
    local_EAX_105 = st::fn_00403DF0(this);
    return (int)(short)local_EAX_105;
  case CASE_2:
  case CASE_3:
  case CASE_4:
    iVar6 = this->field_050C;
    if (((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 2)) {
      return 0;
    }
    if (iVar6 == 3) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = CONCAT22(uVar2,this->field_04FE * 0xc9) + 100;
      uVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_0045)),
                         this->field_04FC * 0xc9 + 100,(short)iVar6,
                         (ushort)(this->field_0500 * 200) + 100);
      this->field_0506 = uVar2;
      this->field_050C = 4;
    }
    if (this->field_050C == 4) {
      uVar3 = st::fn_004030B2(this,this->field_0506);
      uVar3 = st::fn_004022FC(this,(short)uVar3);
      if ((short)uVar3 == -1) {
        local_EAX_354 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x253e,0,0,"%s",
                                "STBoatC::BackBuild, BUILD_PMOVE");
        if (local_EAX_354 == 0) {
          st::fn_006A5E40
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x253f);
          return 0xffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if ((short)uVar3 == 0) {
        this->field_050C = 5;
        iVar6 = this->vfunc_D8();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
    }
    if (this->field_050C == 5) {
      st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_04FC * 0xc9 + 100,this->field_04FE * 0xc9 + 100,
                   this->field_0500 * 200 + 100,this->field_0061);
      this->field_050C = 6;
    }
    if (this->field_050C == 6) {
      uVar4 = st::fn_00402847((STJellyGunC *)this,&local_8,(int *)&param_1);
      if ((short)uVar4 == -1) {
        local_EAX_592 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2554,0,0,"%s",
                                "STBoatC::BackBuild, BUILD_PMOVE 2");
        if (local_EAX_592 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x2555;
cf_error_exit_0046CBE2:
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar6);
        return 0xffff;
      }
      if ((short)uVar4 == 0) {
        iVar6 = this->vfunc_D8();
        return -(uint)(iVar6 != 0);
      }
    }
    break;
  case CASE_5:
    if (this->field_0502 == 0) {
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
    this->field_0508 = CASE_6;
    break;
  case CASE_6:
    if (this->field_050C == 0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar6 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_04FE * 0xc9)) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_0045)),
                         this->field_04FC * 0xc9 + 100,(short)iVar6,
                         CONCAT22(uVar2,this->field_0500 * 200) + 100);
      this->field_0506 = uVar2;
      this->field_050C = 1;
    }
    if (this->field_050C == 1) {
      uVar3 = st::fn_004030B2(this,this->field_0506);
      uVar3 = st::fn_004022FC(this,(short)uVar3);
      if ((short)uVar3 == -1) {
        iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x256d,0,0,"%s",
                                   "STBoatC::BackBuild, BUILD_OMOVE");
        if (iVar5 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x256e;
        goto cf_error_exit_0046CBE2;
      }
      if ((short)uVar3 == 0) {
        this->field_050C = 2;
        break;
      }
    }
    if (this->field_050C == 2) {
      st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_04FC * 0xc9 + 100,this->field_04FE * 0xc9 + 100,
                   this->field_0500 * 200 + 100,this->field_0061);
      this->field_050C = 3;
    }
    if (this->field_050C == 3) {
      uVar4 = st::fn_00402847((STJellyGunC *)this,&local_8,(int *)&param_1);
      if ((short)uVar4 == -1) {
        local_EAX_1042 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2583,0,0,"%s",
                                "STBoatC::BackBuild, BUILD_OMOVE 2");
        if (local_EAX_1042 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x2584;
        goto cf_error_exit_0046CBE2;
      }
      if ((short)uVar4 == 0) {
        iVar6 = this->vfunc_D8();
        return -(uint)(iVar6 != 0);
      }
    }
    break;
  default:
    local_EAX_1089 =
         st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2590,0,0,"%s",
                            "STBoatC::BackBuild");
    if (local_EAX_1089 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar6 = this->vfunc_D8();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

// 0046CF20 STBoatC::CreateGame
#line 4 "decomp/ST.exe/functions/0046CF20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CreateGame
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=uint __thiscall
   CreateGame(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 8; removed trailing parameter slots have no listing
   references; ret_sites=0046CFD8 RET 0x4 | 0046D190 RET 0x4 | 0046D1B5 RET 0x4 | 0046D201 RET 0x4 |
   0046D2E7 RET 0x4 | 0046D2F1 RET 0x4 */

uint __thiscall st::fn_0046CF20(STBoatC *this,int *param_1)

{
  short sVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar8;
  uint local_EAX_141;
  int iVar6;
  int local_EAX_688;
  STGroupBoatC *this_00;
  int local_EAX_928;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  int iVar7;
  uint uVar9;
  uint uVar10;
  short local_18;
  short local_16;
  short local_14 [2];
  undefined4 local_10;
  int local_c;
  void *local_8;

  uVar10 = 2;
  if (this->field_0528 == 0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar7 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_0512 * 0xc9)) + 100;
    uVar5 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       STReplaceLowWord((uint32_t)(iVar7), (uint16_t)(this->field_0045)),
                       this->field_0510 * 0xc9 + 100,(short)iVar7,
                       STReplaceLowWord((uint32_t)(this), (uint16_t)(this->field_0514 * 200)) + 100);
    this->field_0522 = uVar5;
    this->field_0528 = 1;
  }
  if (this->field_0528 != 1) {
    if (this->field_0528 == 2) {
      st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0510 * 0xc9 + 100,this->field_0512 * 0xc9 + 100,
                   this->field_0514 * 200 + 100,this->field_0062);
      this->field_0528 = 3;
    }
    if (this->field_0528 == 3) {
      iVar7 = st::fn_00402847((STJellyGunC *)this,&local_10,&local_c);
      if (iVar7 == -1) {
        local_EAX_688 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x25c7,0,0,"%s",
                                "STBoatC::CreateGame, CREATEGAME_MOVE 2");
        if (local_EAX_688 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar7 = 0x25c8;
        goto LAB_0046d1e2;
      }
      if (iVar7 == 0) {
        uVar10 = 0;
        if (((AnonShape_005EFAE0_B406B78B *)this->field_0524 != nullptr)
           && (iVar7 = st::fn_006E62D0
                                 (g_playSystem_00802A38,
                                  (AnonShape_005EFAE0_B406B78B *)this->field_0524,(int *)&local_8),
              iVar7 != -4)) {
          st::fn_004031D9(local_8,this->field_0018);
          st::fn_006EA2F0(this->field_0211,this->field_01ED);
        }
        iVar7 = st::fn_00404CD7(this);
        if (iVar7 == 1) {
          if ((((this->field_051C < 0) || (this->field_051E < 0)) ||
              (sVar2 = this->field_051C, sVar3 = this->field_051E, sVar4 = this->field_0520,
              this->field_0520 < 0)) &&
             (iVar7 = st::fn_00404908(this,this->field_0510,this->field_0512,this->field_0514,
                                   this->field_0510,this->field_0512,
                                   (int *)(uint)(ushort)this->field_0514,2,&local_18,&local_16,
                                   local_14), sVar2 = local_18, sVar3 = local_16,
             sVar4 = local_14[0], iVar7 == 0)) {
            sVar2 = this->field_0510;
            sVar3 = this->field_0512;
            sVar4 = this->field_0514;
          }
          local_14[0] = sVar4;
          local_16 = sVar3;
          local_18 = sVar2;
          st::fn_00404F6B(this,(int)local_18,(int)local_16,(int)local_14[0]);
          iVar7 = st::fn_00403B34(this,0);
          if (iVar7 == -1) {
            return 0xffffffff;
          }
          this->field_0528 = 4;
          iVar7 = this->vfunc_D8();
          return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
        }
      }
    }
    if (this->field_0528 == 4) {
      uVar10 = st::fn_00403B34(this,2);
      if (uVar10 == 0xffffffff) {
        return 0xffffffff;
      }
      if (uVar10 == 3) {
        if (((this->field_00B3 == 0) &&
            (uVar10 = this->field_00BB - (int)this->field_005B, uVar9 = (int)uVar10 >> 0x1f,
            (int)((uVar10 ^ uVar9) - uVar9) < 2)) &&
           ((uVar10 = this->field_00BF - (int)this->field_005D, uVar9 = (int)uVar10 >> 0x1f,
            (int)((uVar10 ^ uVar9) - uVar9) < 2 &&
            ((uVar10 = this->field_00C3 - (int)this->field_005F, uVar9 = (int)uVar10 >> 0x1f,
             (int)((uVar10 ^ uVar9) - uVar9) < 2 &&
             (iVar7 = this->vfunc_18(*(short *)&this->field_00BB,*(short *)&this->field_00BF,
                                 *(short *)&this->field_00C3), iVar7 == 0)))))) {
          uVar10 = 0;
        }
        else {
          this_00 = st::fn_00405CF9(*(char *)&this->field_0024,this->field_0030);
          local_EAX_928 = st::fn_00402B26(this_00,(uint)(ushort)this->field_0032,'\0');
          uVar10 = -(uint)(local_EAX_928 != -4) & 2;
        }
      }
    }
    iVar7 = this->vfunc_D8();
    if (iVar7 != 0) {
      return 0xffffffff;
    }
    return uVar10;
  }
  uVar8 = st::fn_004030B2(this,this->field_0522);
  local_EAX_141 = st::fn_004022FC(this,(short)uVar8);
  if (local_EAX_141 != 0xffffffff) {
    if (local_EAX_141 == 0) {
      this->field_0528 = 2;
    }
    iVar7 = this->vfunc_D8();
    return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
  }
  iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x25a8,0,0,"%s",
                             "STBoatC::CreateGame, CREATEGAME_ROT");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar7 = 0x25a9;
LAB_0046d1e2:
  st::fn_006A5E40
            (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar7);
  return 0xffff;
}

// 0046D450 STBoatC::UnLoadRC
#line 4 "decomp/ST.exe/functions/0046D450/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::UnLoadRC */

int __thiscall st::fn_0046D450(STBoatC *this,int param_1)

{
  STBoatC_field_054CState SVar1;
  STFishC *pSVar2;
  STWorldObject *pSVar3;
  undefined2 uVar5;
  int local_EAX_51;
  int iVar6;
  int local_EAX_769;
  int local_EAX_815;
  int local_EAX_972;
  int local_EAX_1289;
  int local_EAX_1434;
  dword dVar6;
  int local_EAX_1686;
  int local_EAX_1808;
  int local_EAX_1854;
  int iVar7;
  uint uVar8;
  int local_EAX_2671;
  undefined4 *puVar9;
  uint uVar10;
  int local_EAX_3355;
  int local_EAX_4165;
  int local_EAX_4888;
  int local_EAX_4955;
  int *piVar11;
  int iVar12;
  int local_EAX_5109;
  int local_EAX_5187;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar13;
  STBoatCVTable *pSVar14;
  STBoatC *pSVar15;
  longlong lVar16;
  short sVar17;
  short sVar18;
  ushort uVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  int iVar24;
  short sVar25;
  byte bVar26;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    if (this->field_07DA + this->field_07D6 + this->field_07D2 == 0) {
      return 0;
    }
    sVar18 = this->field_0396;
    sVar17 = this->field_039A;
    sVar21 = this->field_0398;
    if (sVar18 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar18) {
      return 0;
    }
    if (sVar21 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar21) {
      return 0;
    }
    if (sVar17 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar17) {
      return 0;
    }
    pSVar3 = STGridAt3D(g_worldGrid, sVar18, sVar21, sVar17).objects[0];
    if (pSVar3 == nullptr) {
      return 0;
    }
    if (pSVar3[1].vtable != (STWorldObjectVTable *)this->field_0024) {
      return 0;
    }
    iVar12 = pSVar3->GetObjectTypeId();
    if ((iVar12 != 0x3b) && (iVar12 = pSVar3->GetObjectTypeId(), iVar12 != 0x60)) {
      return 0;
    }
    this->field_0530 = this->field_039A;
    this->field_052E = this->field_0398;
    this->field_052C = this->field_0396;
    this->field_0548 = 0;
    this->field_0544 = 0;
    this->field_054C = CASE_0;
    this->field_00B7 = 3;
    st::fn_00404F6B(this,(int)this->field_0396,(int)(short)this->field_0398,(short)this->field_039A + 1
                );
  }
  else {
    SVar1 = this->field_054C;
    if (SVar1 == CASE_0) {
      local_EAX_51 = st::fn_004031DE(this,2);
      switch(local_EAX_51) {
      case 0:
        goto switchD_0046d492_caseD_0;
      case 1:
        sVar18 = this->field_052C;
        sVar17 = this->field_0530;
        sVar21 = this->field_052E;
        if (((((-1 < sVar18) && (sVar18 < g_worldGrid.sizeX)) && (-1 < sVar21)) &&
            (((sVar21 < g_worldGrid.sizeY && (-1 < sVar17)) &&
             ((sVar17 < g_worldGrid.sizeZ &&
              ((pSVar3 = STGridAt3D(g_worldGrid, sVar18, sVar21, sVar17).objects[0],
               pSVar3 != nullptr &&
               (pSVar3[1].vtable == (STWorldObjectVTable *)this->field_0024)))))))) &&
           ((iVar12 = pSVar3->GetObjectTypeId(), iVar12 == 0x3b ||
            (iVar12 = pSVar3->GetObjectTypeId(), iVar12 == 0x60))))
        goto cf_common_exit_0046E811;
LAB_0046d71d:
        st::fn_00403855(this);
        this->field_00B7 = 0;
LAB_0046d72e:
        iVar12 = this->vfunc_D8();
        return -(uint)(iVar12 != 0);
      default:
        goto cf_common_exit_0046E811;
      case 3:
        iVar24 = (int)this->field_052E;
        iVar7 = (int)this->field_052C;
        iVar12 = this->field_0530 + 1;
        goto cf_common_exit_0046E801;
      case -1:
        iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2638,0,0,"%s",
                                   "STBoatC::UnLoadRC, move to depot error");
        if (iVar6 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2638
                  );
        return 0xffff;
      }
    }
    if (SVar1 == CASE_1) {
      local_EAX_769 = st::fn_004031DE(this,2);
      switch(local_EAX_769) {
      case 0:
        iVar12 = st::fn_004049CB(this);
        if (iVar12 != 1) {
          this->field_054C = CASE_2;
          this->field_00B7 = 3;
          goto LAB_0046d818;
        }
        sVar21 = this->field_052E;
        sVar20 = this->field_052C;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        piVar11 = (int *)CONCAT22(extraout_var,this->field_0530 + 1);
        iVar12 = 1;
        uVar19 = this->field_004B;
        sVar18 = this->field_0049;
        sVar17 = this->field_0047;
LAB_0046e7ea:
        st::fn_00404908(this,sVar17,sVar18,uVar19,sVar20,sVar21,piVar11,iVar12,&this->field_0536,
                     &this->field_0538,&this->field_053A);
        sVar18 = this->field_053A;
        sVar17 = this->field_0538;
        break;
      case 1:
        sVar18 = this->field_052C;
        sVar17 = this->field_0530;
        sVar21 = this->field_052E;
        if ((((((sVar18 < 0) || (g_worldGrid.sizeX <= sVar18)) || (sVar21 < 0)) ||
             ((g_worldGrid.sizeY <= sVar21 || (sVar17 < 0)))) || (g_worldGrid.sizeZ <= sVar17)) ||
           (((pSVar15 = (STBoatC *)
                        STGridAt3D(g_worldGrid, sVar18, sVar21, sVar17).objects[0],
             pSVar15 == nullptr || (pSVar15->field_0024 != this->field_0024)) ||
            ((dVar6 = pSVar15->slot_2C(), dVar6 != 0x3b &&
             (dVar6 = pSVar15->slot_2C(), dVar6 != 0x60)))))) {
          st::fn_00403855(this);
          iVar12 = this->vfunc_D8();
          return -(uint)(iVar12 != 0);
        }
        iVar12 = st::fn_00405470(pSVar15);
        if ((iVar12 != 1) ||
           (local_EAX_1289 = st::fn_00401DA2(this,(STFishC *)pSVar15), local_EAX_1289 != 1))
        goto cf_common_exit_0046E811;
        st::fn_00403855(this);
        this->field_0532 = pSVar15->field_0018;
        st::fn_00404CD2(pSVar15,this->field_0018);
        iVar12 = (int)this->field_0540;
        iVar24 = (int)this->field_053E;
        iVar7 = (int)this->field_053C;
        this->field_0544 = 0;
        this->field_054C = CASE_3;
        goto cf_common_exit_0046E801;
      default:
        goto cf_common_exit_0046E811;
      case 3:
        iVar12 = st::fn_004049CB(this);
        if (iVar12 == 1) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          st::fn_00404908(this,this->field_0047,this->field_0049,this->field_004B,this->field_052C,
                       this->field_052E,
                       (int *)CONCAT22((short)((uint)&this->field_053A >> 0x10),this->field_0530 + 1
                                      ),1,&this->field_0536,&this->field_0538,&this->field_053A);
        }
        sVar18 = this->field_053A;
        sVar17 = this->field_0538;
        break;
      case -1:
        local_EAX_815 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2678,0,0,"%s",
                                "STBoatC::UnLoadRC, correct move to depot error");
        if (local_EAX_815 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2678
                  );
        return 0xffff;
      }
      iVar12 = (int)sVar18;
      iVar24 = (int)sVar17;
      iVar7 = (int)this->field_0536;
cf_common_exit_0046E801:
      st::fn_00404F6B(this,iVar7,iVar24,iVar12);
      st::fn_004031DE(this,0);
cf_common_exit_0046E811:
      iVar12 = this->vfunc_D8();
      return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
    }
    if (SVar1 == CASE_2) {
      this->field_0544 = this->field_0544 + 1;
      local_EAX_1434 = st::fn_00403A2B(this,2);
      if (local_EAX_1434 == -1) {
        return -1;
      }
      if ((this->field_082E != 0) || (this->field_0544 % 0x32 != 1)) {
        return 2;
      }
      sVar18 = this->field_052C;
      sVar17 = this->field_0530;
      sVar21 = this->field_052E;
      if ((((-1 < sVar18) && (sVar18 < g_worldGrid.sizeX)) && (-1 < sVar21)) &&
         ((((sVar21 < g_worldGrid.sizeY && (-1 < sVar17)) &&
           ((sVar17 < g_worldGrid.sizeZ &&
            ((pSVar15 = (STBoatC *)
                        STGridAt3D(g_worldGrid, sVar18, sVar21, sVar17).objects[0],
             pSVar15 != nullptr && (pSVar15->field_0024 == this->field_0024)))))) &&
          ((dVar6 = pSVar15->slot_2C(), dVar6 == 0x3b ||
           (dVar6 = pSVar15->slot_2C(), dVar6 == 0x60)))))) {
        iVar12 = st::fn_00405470(pSVar15);
        if (iVar12 != 1) {
          return 2;
        }
        local_EAX_1686 = st::fn_00401DA2(this,(STFishC *)pSVar15);
        if (local_EAX_1686 != 1) {
          return 2;
        }
        this->field_0532 = pSVar15->field_0018;
        st::fn_00404CD2(pSVar15,this->field_0018);
        this->field_0544 = 0;
        this->field_054C = CASE_3;
        this->field_00B7 = 0;
        st::fn_00404F6B(this,(int)this->field_053C,(int)this->field_053E,(int)this->field_0540);
        st::fn_004031DE(this,0);
        return 2;
      }
      goto LAB_0046d71d;
    }
    if (SVar1 != CASE_3) {
      if (SVar1 == CASE_4) {
        if (this->field_0550 == 0) {
          iVar7 = (ushort)(this->field_0530 * 200) + 300;
          iVar12 = STReplaceLowWord((uint32_t)(iVar7), (uint16_t)(this->field_052E + 1)) * 0xc9;
          iVar24 = STReplaceLowWord((uint32_t)(iVar12), (uint16_t)(this->field_052C + 1));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar5 = (*this->vtable->vfunc_10)
                            (this->field_0041,this->field_0043,
                             CONCAT22((short)((uint)(iVar24 * 0x19) >> 0x10),this->field_0045),
                             (short)(iVar24 * 0xc9),(short)iVar12,iVar7);
          this->field_0542 = uVar5;
          this->field_0550 = 1;
        }
        if (this->field_0550 == 1) {
          uVar8 = st::fn_004030B2(this,this->field_0542);
          uVar8 = st::fn_004022FC(this,(short)uVar8);
          if (uVar8 == 0xffffffff) {
            local_EAX_2671 =
                 st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2712,0,0,"%s"
                                    ,"STBoatC::UnLoadRC, UNLOADRC_PDEPOT");
            if (local_EAX_2671 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar12 = 0x2713;
            goto cf_error_exit_0046E857;
          }
          if (uVar8 == 0) {
            this->field_0550 = 2;
            iVar12 = this->vfunc_D8();
            return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
          }
        }
        if (this->field_0550 == 2) {
          st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                       (this->field_052C + 1) * 0xc9,(this->field_052E + 1) * 0xc9,
                       this->field_0530 * 200 + 300,this->field_0061);
          this->field_0550 = 3;
        }
        if (this->field_0550 == 3) {
          local_c = st::fn_00402847((STJellyGunC *)this,&local_14,&local_10);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = 0;
          if (this->field_02BF != '\0') {
            local_8 = (undefined4 *)&this->field_0x2b3;
            do {
              puVar9 = (undefined4 *)
                       st::fn_0040342C(local_28,(short)*local_8,*(ushort *)(local_8 + 1),
                                          this->field_006C);
              local_20 = *puVar9;
              local_1c = *(short *)(puVar9 + 1);
              if (DAT_0080732c == 1) {
                bVar26 = 0;
                sVar25 = 0;
                uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
                iVar24 = -1;
                this->field_001C = uVar8;
                sVar23 = 0;
                sVar22 = 0;
                uVar10 = uVar8 * 0x41c64e6d + 0x3039;
                sVar20 = 0;
                this->field_001C = uVar10;
                sVar21 = 0;
                sVar17 = 0;
                local_18 = uVar10 * 0x41c64e6d + 0x3039;
                sVar18 = 0;
                this->field_001C = local_18;
                lVar16 = st::fn_0072E288();
                iVar12 = (int)(short)lVar16 + (uVar8 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                         (int)local_1c;
                iVar7 = ((uVar10 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_20);
                uVar8 = local_18;
              }
              else {
                uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                this->field_001C = uVar10;
                uVar13 = uVar10 * 0x41c64e6d + 0x3039;
                bVar26 = 0;
                this->field_001C = uVar13;
                uVar8 = uVar13 * 0x41c64e6d + 0x3039;
                this->field_001C = uVar8;
                sVar25 = 0;
                iVar24 = -1;
                sVar23 = 0;
                sVar22 = 0;
                sVar20 = 0;
                sVar21 = 0;
                sVar17 = 0;
                sVar18 = 0;
                iVar12 = (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_1c;
                STPiece<2,2>(local_20) = (short)((uint)local_20 >> 0x10);
                iVar7 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_20);
              }
              st::fn_00401433
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar8 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_20,
                         iVar7 + -3,iVar12,sVar18,sVar17,sVar21,sVar20,sVar22,sVar23,iVar24,sVar25,
                         bVar26);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = param_1 + 1;
              local_8 = (undefined4 *)((int)local_8 + 6);
            } while (param_1 < (int)(uint)(byte)this->field_02BF);
          }
          if (local_c == -1) {
            local_EAX_3355 =
                 st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2738,0,0,"%s"
                                    ,"STBoatC::UnLoadRC, UNLOADRC_PDEPOT 2");
            if (local_EAX_3355 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x2739);
            return 0xffff;
          }
          if (local_c == 0) {
            this->field_0550 = 0;
            this->field_054C = CASE_5;
            iVar12 = this->vfunc_D8();
            return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
          }
        }
        goto cf_common_exit_0046E9F3;
      }
      if (SVar1 != CASE_5) {
        if (SVar1 == CASE_6) {
          iVar12 = this->field_0548 + 1;
          this->field_0548 = iVar12;
          if (0x45 < iVar12) {
            if (this->field_0550 == 0) {
              iVar12 = STReplaceLowWord((uint32_t)(iVar12), (uint16_t)(this->field_053E * 0xc9)) + 100;
              uVar5 = (*this->vtable->vfunc_10)
                                (this->field_0041,this->field_0043,
                                 STReplaceLowWord((uint32_t)(iVar12), (uint16_t)(this->field_0045)),
                                 this->field_053C * 0xc9 + 100,(short)iVar12,
                                 (ushort)(this->field_0540 * 200) + 100);
              this->field_0542 = uVar5;
              this->field_0550 = 1;
            }
            if (this->field_0550 == 1) {
              uVar8 = st::fn_004030B2(this,this->field_0542);
              uVar8 = st::fn_004022FC(this,(short)uVar8);
              if (uVar8 == 0xffffffff) {
                local_EAX_4165 =
                     st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2798,0,0,
                                        "%s","STBoatC::UnLoadRC, UNLOADRC_ODEPOT");
                if (local_EAX_4165 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                iVar12 = 0x2799;
                goto cf_error_exit_0046E857;
              }
              if (uVar8 == 0) {
                this->field_0550 = 2;
              }
            }
            else {
              if (this->field_0550 == 2) {
                st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                             this->field_053C * 0xc9 + 100,this->field_053E * 0xc9 + 100,
                             this->field_0540 * 200 + 100,this->field_0061);
                this->field_0550 = 3;
              }
              if (this->field_0550 == 3) {
                local_c = st::fn_00402847((STJellyGunC *)this,&local_10,&local_14);
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = 0;
                if (this->field_02BF != '\0') {
                  local_8 = (undefined4 *)&this->field_0x2b3;
                  do {
                    puVar9 = (undefined4 *)
                             st::fn_0040342C(local_28,(short)*local_8,*(ushort *)(local_8 + 1),
                                                this->field_006C);
                    local_20 = *puVar9;
                    local_1c = *(short *)(puVar9 + 1);
                    if (DAT_0080732c == 1) {
                      bVar26 = 0;
                      sVar25 = 0;
                      uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
                      iVar24 = -1;
                      this->field_001C = uVar8;
                      sVar23 = 0;
                      sVar22 = 0;
                      uVar10 = uVar8 * 0x41c64e6d + 0x3039;
                      sVar20 = 0;
                      this->field_001C = uVar10;
                      sVar21 = 0;
                      sVar17 = 0;
                      local_18 = uVar10 * 0x41c64e6d + 0x3039;
                      sVar18 = 0;
                      this->field_001C = local_18;
                      lVar16 = st::fn_0072E288();
                      iVar12 = (int)(short)lVar16 + (uVar8 >> 0x10) % 7 + (int)this->field_0045 + -3
                               + (int)local_1c;
                      iVar7 = ((uVar10 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_20);
                      uVar8 = local_18;
                    }
                    else {
                      uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                      this->field_001C = uVar10;
                      uVar13 = uVar10 * 0x41c64e6d + 0x3039;
                      bVar26 = 0;
                      this->field_001C = uVar13;
                      uVar8 = uVar13 * 0x41c64e6d + 0x3039;
                      this->field_001C = uVar8;
                      sVar25 = 0;
                      iVar24 = -1;
                      sVar23 = 0;
                      sVar22 = 0;
                      sVar20 = 0;
                      sVar21 = 0;
                      sVar17 = 0;
                      sVar18 = 0;
                      iVar12 = (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_1c;
                      STPiece<2,2>(local_20) = (short)((uint)local_20 >> 0x10);
                      iVar7 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_20);
                    }
                    st::fn_00401433
                              (g_traksClass_00802A7C,1,2,7,
                               (uVar8 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                               (int)(short)local_20,iVar7 + -3,iVar12,sVar18,sVar17,sVar21,sVar20,
                               sVar22,sVar23,iVar24,sVar25,bVar26);
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = param_1 + 1;
                    local_8 = (undefined4 *)((int)local_8 + 6);
                  } while (param_1 < (int)(uint)(byte)this->field_02BF);
                }
                if (local_c == -1) {
                  local_EAX_4888 =
                       st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x27bd,0,0,
                                          "%s","STBoatC::UnLoadRC, UNLOADRC_ODEPOT 2");
                  if (local_EAX_4888 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  st::fn_006A5E40
                            (0xffff,g_overwriteContext_007ED77C,
                             "E:\\__titans\\wlad\\To_boat.cpp",0x27be);
                  return 0xffff;
                }
                if (local_c == 0) {
                  this->field_054C = CASE_7;
                  st::fn_00404908(this,this->field_0047,this->field_0049,this->field_004B,
                               this->field_0047,this->field_0049,
                               (int *)(uint)(ushort)this->field_004B,2,&this->field_0536,
                               &this->field_0538,&this->field_053A);
                  st::fn_00404F6B(this,(int)this->field_0536,(int)this->field_0538,
                               (int)this->field_053A);
                  st::fn_004031DE(this,0);
                }
              }
            }
          }
          iVar12 = this->vfunc_D8();
          return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
        }
        if (SVar1 != CASE_7) {
          local_EAX_5187 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x27e8,0,0,"%s",
                                  "STBoatC::UnLoadRC - incorrect entry");
          if (local_EAX_5187 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        local_EAX_4955 = st::fn_004031DE(this,2);
        if (local_EAX_4955 == -1) {
          local_EAX_5109 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x27d5,0,0,"%s",
                                  "STBoatC::UnLoadRC, UNLOADRC_MOVEWAITUNLOAD error");
          if (local_EAX_5109 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar12 = 0x27d5;
          goto cf_error_exit_0046E857;
        }
        if (local_EAX_4955 == 0) goto LAB_0046d72e;
        if (local_EAX_4955 != 3) goto cf_common_exit_0046E811;
        uVar19 = this->field_004B;
        piVar11 = (int *)(uint)uVar19;
        sVar21 = this->field_0049;
        sVar20 = this->field_0047;
        iVar12 = 2;
        sVar18 = sVar21;
        sVar17 = sVar20;
        goto LAB_0046e7ea;
      }
      iVar12 = this->field_0544 + 1;
      this->field_0544 = iVar12;
      if (iVar12 % 10 != 1) goto cf_common_exit_0046E811;
      sVar18 = this->field_052C;
      sVar17 = this->field_0530;
      sVar21 = this->field_052E;
      if (((((-1 < sVar18) && (sVar18 < g_worldGrid.sizeX)) && (-1 < sVar21)) &&
          (((sVar21 < g_worldGrid.sizeY && (-1 < sVar17)) &&
           (((sVar17 < g_worldGrid.sizeZ &&
             ((pSVar3 = STGridAt3D(g_worldGrid, sVar18, sVar21, sVar17).objects[0],
              pSVar3 != nullptr && (*(int *)&pSVar3->field_0x18 == this->field_0532))))
            && (*(int *)&pSVar3[0x21].field_0x10 == 0)))))) &&
         (*(int *)&pSVar3[0x10].field_0x5 != 6)) {
        if (*(int *)&this->field_0x4cd % 0x78 == 1) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar12 = *(int *)((int)this->field_06CB + 0x2c);
          if (iVar12 == 8) {
            pSVar14 = this->vtable;
            uVar5 = 0xfb;
LAB_0046e2c8:
            (*pSVar14->vfunc_90)(this,3,uVar5);
          }
          else if (iVar12 == 0x14) {
            this->vfunc_90(3,0x15f);
          }
          else if (iVar12 == 0x1a) {
            pSVar14 = this->vtable;
            uVar5 = 0x19e;
            goto LAB_0046e2c8;
          }
        }
        iVar12 = this->field_07D2;
        iVar7 = 1;
        if (iVar12 < 1) {
          iVar12 = this->field_07D6;
          if (iVar12 < 1) {
            iVar12 = this->field_07DA;
            if (0 < iVar12) {
              if (iVar12 < 1) {
                iVar7 = iVar12;
              }
              st::fn_00405EC0(pSVar3,0xde,iVar7 * 0x14);
              st::fn_00402B6C(pSVar3,this->field_0018);
              this->field_07DA = this->field_07DA - iVar7;
            }
          }
          else {
            if (iVar12 < 1) {
              iVar7 = iVar12;
            }
            st::fn_00405EC0(pSVar3,0xdd,iVar7 * 3);
            st::fn_00402B6C(pSVar3,this->field_0018);
            this->field_07D6 = this->field_07D6 - iVar7;
          }
        }
        else {
          if (iVar12 < 1) {
            iVar7 = iVar12;
          }
          st::fn_00405EC0(pSVar3,0xdc,iVar7 * 5);
          st::fn_00402B6C(pSVar3,this->field_0018);
          this->field_07D2 = this->field_07D2 - iVar7;
        }
        if (this->field_07DA + this->field_07D6 + this->field_07D2 != 0)
        goto cf_common_exit_0046E811;
      }
      st::fn_00403C0B(this);
      this->field_0544 = 0;
      this->field_054C = CASE_6;
      goto cf_common_exit_0046E811;
    }
    local_EAX_1808 = st::fn_004031DE(this,2);
    switch(local_EAX_1808) {
    case 0:
      sVar18 = this->field_052C;
      sVar17 = this->field_0530;
      sVar21 = this->field_052E;
      if (((-1 < sVar18) && (sVar18 < g_worldGrid.sizeX)) &&
         (((-1 < sVar21 && ((sVar21 < g_worldGrid.sizeY && (-1 < sVar17)))) &&
          ((sVar17 < g_worldGrid.sizeZ &&
           (((pSVar3 = STGridAt3D(g_worldGrid, sVar18, sVar21, sVar17).objects[0],
             pSVar3 != nullptr &&
             (pSVar3[1].vtable == (STWorldObjectVTable *)this->field_0024)) &&
            ((iVar12 = pSVar3->GetObjectTypeId(), iVar12 == 0x3b ||
             (iVar12 = pSVar3->GetObjectTypeId(), iVar12 == 0x60)))))))))) {
        if (((this->field_0047 == this->field_053C) && (this->field_0049 == this->field_053E)) &&
           (this->field_004B == this->field_0540)) {
          this->field_054C = CASE_4;
          this->field_0550 = 0;
          iVar12 = this->vfunc_D8();
          return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
        }
        st::fn_00402CCA(pSVar3,this->field_0018);
        return 0;
      }
      goto LAB_0046d652;
    case 1:
      st::fn_00403855(this);
      sVar18 = this->field_052C;
      sVar17 = this->field_0530;
      sVar21 = this->field_052E;
      if (((-1 < sVar18) && (sVar18 < g_worldGrid.sizeX)) &&
         ((-1 < sVar21 &&
          (((sVar21 < g_worldGrid.sizeY && (-1 < sVar17)) && (sVar17 < g_worldGrid.sizeZ)))))) {
        pSVar2 = (STFishC *)
                 STGridAt3D(g_worldGrid, sVar18, sVar21, sVar17).objects[0];
joined_r0x0046dd46:
        if (pSVar2 != nullptr) {
          st::fn_00401DA2(this,pSVar2);
        }
      }
      break;
    default:
      goto cf_common_exit_0046E9F3;
    case 3:
      sVar18 = this->field_052C;
      sVar17 = this->field_0530;
      sVar21 = this->field_052E;
      if (((((-1 < sVar18) && (sVar18 < g_worldGrid.sizeX)) && (-1 < sVar21)) &&
          ((sVar21 < g_worldGrid.sizeY && (-1 < sVar17)))) && (sVar17 < g_worldGrid.sizeZ)) {
        pSVar2 = (STFishC *)
                 STGridAt3D(g_worldGrid, sVar18, sVar21, sVar17).objects[0];
        goto joined_r0x0046dd46;
      }
      break;
    case -1:
      local_EAX_1854 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x26d9,0,0,"%s",
                              "STBoatC::UnLoadRC, move to depot 2 error");
      if (local_EAX_1854 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar12 = 0x26d9;
cf_error_exit_0046E857:
      st::fn_006A5E40
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar12);
      return 0xffff;
    }
    st::fn_00404F6B(this,(int)this->field_053C,(int)this->field_053E,(int)this->field_0540);
  }
  st::fn_004031DE(this,0);
cf_common_exit_0046E9F3:
  iVar12 = this->vfunc_D8();
  return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
switchD_0046d492_caseD_0:
  sVar18 = this->field_052C;
  sVar17 = this->field_0530;
  sVar21 = this->field_052E;
  if (((((sVar18 < 0) || (g_worldGrid.sizeX <= sVar18)) || (sVar21 < 0)) ||
      ((g_worldGrid.sizeY <= sVar21 || (sVar17 < 0)))) || (g_worldGrid.sizeZ <= sVar17)) {
    pSVar15 = nullptr;
  }
  else {
    pSVar15 = (STBoatC *)
              STGridAt3D(g_worldGrid, sVar18, sVar21, sVar17).objects[0];
  }
  iVar12 = st::fn_004049CB(this);
  if (iVar12 == 1) {
    if (pSVar15 != nullptr) {
      if (((pSVar15->field_0024 == this->field_0024) &&
          ((dVar6 = pSVar15->slot_2C(), dVar6 == 0x3b ||
           (dVar6 = pSVar15->slot_2C(), dVar6 == 0x60)))) &&
         (iVar12 = st::fn_00405470(pSVar15), iVar12 != 1)) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        st::fn_00404908(this,this->field_0047,this->field_0049,this->field_004B,this->field_052C,
                     this->field_052E,
                     (int *)CONCAT22((short)((uint)&this->field_0536 >> 0x10),this->field_0530 + 1),
                     1,&this->field_0536,&this->field_0538,&this->field_053A);
        iVar12 = (int)this->field_053A;
        iVar24 = (int)this->field_0538;
        iVar7 = (int)this->field_0536;
        this->field_054C = CASE_1;
        this->field_00B7 = 0;
        goto cf_common_exit_0046E801;
      }
      goto LAB_0046d60c;
    }
  }
  else {
LAB_0046d60c:
    if (((pSVar15 != nullptr) && (pSVar15->field_0024 == this->field_0024)) &&
       ((dVar6 = pSVar15->slot_2C(), dVar6 == 0x3b ||
        (dVar6 = pSVar15->slot_2C(), dVar6 == 0x60)))) {
      this->field_054C = CASE_2;
LAB_0046d818:
      local_EAX_972 = st::fn_00403A2B(this,0);
      return (-(uint)(local_EAX_972 != -1) & 3) - 1;
    }
  }
  st::fn_00403855(this);
  this->field_00B7 = 0;
LAB_0046d652:
  iVar12 = this->vfunc_D8();
  return -(uint)(iVar12 != 0);
}

// 0046EFD0 STBoatC::BackUnLoadRC
#line 4 "decomp/ST.exe/functions/0046EFD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackUnLoadRC

   [STSwitchEnumApplier] Switch target field_054C uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_054CState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0046EFD0 -> 004620F0 @ 0046F02A | 0046EFD0 -> 004620F0 @ 0046F03D */

int __thiscall st::fn_0046EFD0(STBoatC *this,STBoatC *param_1)

{
  undefined2 uVar2;
  int local_EAX_56;
  int local_EAX_90;
  int local_EAX_348;
  int local_EAX_603;
  uint uVar3;
  int local_EAX_902;
  int iVar4;
  int local_EAX_1149;
  int iVar5;
  STBoatC *pSVar6;
  STBoatC *local_8;

  this->field_00B7 = 0;
  pSVar6 = this;
  local_8 = this;
  switch(this->field_054C) {
  case CASE_0:
  case CASE_1:
  case CASE_3:
    if (this->field_0544 != 0) {
      local_EAX_90 = st::fn_0040493A(this);
      return local_EAX_90;
    }
  case CASE_7:
    local_EAX_56 = st::fn_00403DF0(this);
    break;
  case CASE_2:
    local_EAX_56 = st::fn_0040493A(this);
    break;
  case CASE_4:
    iVar5 = this->field_0550;
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      st::fn_00403C0B(this);
      iVar5 = this->vfunc_D8();
      return -(uint)(iVar5 != 0);
    }
    if (iVar5 == 3) {
      iVar5 = STReplaceLowWord((uint32_t)(this), (uint16_t)(this->field_053E * 0xc9)) + 100;
      uVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar5), (uint16_t)(this->field_0045)),
                         this->field_053C * 0xc9 + 100,(short)iVar5,
                         (ushort)(this->field_0540 * 200) + 100);
      this->field_0542 = uVar2;
      this->field_0550 = 4;
    }
    if (this->field_0550 != 4) {
      if (this->field_0550 == 5) {
        st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_053C * 0xc9 + 100,this->field_053E * 0xc9 + 100,
                     this->field_0540 * 200 + 100,this->field_0061);
        this->field_0550 = 6;
      }
      if (this->field_0550 != 6) {
        return 2;
      }
      iVar5 = st::fn_00402847((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 == -1) {
        local_EAX_603 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x283d,0,0,"%s",
                                "STBoatC::BackUnLoadRC, UNLOADRC_PDEPOT 2");
        if (local_EAX_603 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar5 = 0x283e;
        goto cf_error_exit_0046F13E;
      }
      if (iVar5 != 0) {
        iVar5 = this->vfunc_D8();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      st::fn_00403C0B(this);
      goto LAB_0046f1fd;
    }
    uVar3 = st::fn_004030B2(this,this->field_0542);
    uVar3 = st::fn_004022FC(this,(short)uVar3);
    if (uVar3 != 0xffffffff) {
      if (uVar3 == 0) {
        this->field_0550 = 5;
      }
      goto cf_common_exit_0046F0F9;
    }
    local_EAX_348 =
         st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2829,0,0,"%s",
                            "STBoatC::BackUnLoadRC, UNLOADRC_PDEPOT");
    if (local_EAX_348 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar5 = 0x282a;
    goto cf_error_exit_0046F13E;
  case CASE_5:
    st::fn_00403C0B(this);
    pSVar6 = (STBoatC *)(this->field_0548 + 1);
    this->field_0548 = (int)pSVar6;
    if ((int)pSVar6 < 0x47) goto cf_common_exit_0046F0F9;
    this->field_0548 = 0;
    this->field_054C = CASE_6;
  case CASE_6:
    if (this->field_0550 == 0) {
      iVar5 = STReplaceLowWord((uint32_t)(pSVar6), (uint16_t)(this->field_053E * 0xc9)) + 100;
      uVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar5), (uint16_t)(this->field_0045)),
                         this->field_053C * 0xc9 + 100,(short)iVar5,
                         (ushort)(this->field_0540 * 200) + 100);
      this->field_0542 = uVar2;
      this->field_0550 = 1;
    }
    if (this->field_0550 == 1) {
      uVar3 = st::fn_004030B2(this,this->field_0542);
      uVar3 = st::fn_004022FC(this,(short)uVar3);
      if (uVar3 != 0xffffffff) {
        if (uVar3 == 0) {
          this->field_0550 = 2;
        }
cf_common_exit_0046F0F9:
        iVar5 = this->vfunc_D8();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      local_EAX_902 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2864,0,0,"%s",
                              "STBoatC::BackUnLoadRC, UNLOADRC_ODEPOT");
      if (local_EAX_902 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x2865;
    }
    else {
      if (this->field_0550 == 2) {
        st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_053C * 0xc9 + 100,this->field_053E * 0xc9 + 100,
                     this->field_0540 * 200 + 100,this->field_0061);
        this->field_0550 = 3;
      }
      if (this->field_0550 != 3) {
switchD_0046eff1_default:
        local_EAX_1149 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x288a,0,0,"%s",
                                "STBoatC::BackUnLoadRC");
        if (local_EAX_1149 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = st::fn_00402847((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 != -1) {
        if (iVar5 != 0) {
          iVar5 = this->vfunc_D8();
          return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
        }
LAB_0046f1fd:
        iVar5 = this->vfunc_D8();
        return -(uint)(iVar5 != 0);
      }
      iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x287c,0,0,"%s",
                                 "STBoatC::BackUnLoadRC, UNLOADRC_ODEPOT 2");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x287d;
    }
cf_error_exit_0046F13E:
    st::fn_006A5E40
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar5);
    return 0xffff;
  default:
    goto switchD_0046eff1_default;
  }
  if (local_EAX_56 == 0) {
    st::fn_00403C0B(this);
  }
  return local_EAX_56;
}

// 0046F5C0 STBoatC::ToDok
#line 4 "decomp/ST.exe/functions/0046F5C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ToDok */

int __thiscall st::fn_0046F5C0(STBoatC *this,int param_1)

{
  uint uVar1;
  STBoatC_field_0580State SVar2;
  undefined4 uVar3;
  undefined2 uVar5;
  int local_EAX_53;
  int local_EAX_99;
  int iVar6;
  int local_EAX_764;
  int local_EAX_808;
  int local_EAX_977;
  int local_EAX_1390;
  int local_EAX_1414;
  int local_EAX_1543;
  dword dVar6;
  int local_EAX_1797;
  int local_EAX_1821;
  int local_EAX_1958;
  int local_EAX_2004;
  int iVar7;
  uint uVar8;
  int local_EAX_2998;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int local_EAX_3697;
  int local_EAX_4347;
  int iVar12;
  int local_EAX_4651;
  int local_EAX_5572;
  int local_EAX_5608;
  int *piVar13;
  int local_EAX_5748;
  int local_EAX_5810;
  int local_EAX_5910;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  short sVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  int iVar15;
  STWorldObject *pSVar16;
  STFishC *pSVar17;
  longlong lVar18;
  short sVar19;
  ushort uVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  byte bVar26;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    if (this->field_0716 == this->field_0712) {
      return 0;
    }
    sVar14 = this->field_03A0;
    sVar19 = this->field_03A4;
    sVar21 = this->field_03A2;
    if (sVar14 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar14) {
      return 0;
    }
    if (sVar21 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar21) {
      return 0;
    }
    if (sVar19 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar19) {
      return 0;
    }
    pSVar16 = STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0];
    if (pSVar16 == nullptr) {
      return 0;
    }
    iVar12 = pSVar16->GetObjectTypeId();
    if (iVar12 != 0x33) {
      return 0;
    }
    if (pSVar16[1].vtable != (STWorldObjectVTable *)this->field_0024) {
      return 0;
    }
    this->field_0580 = CASE_0;
    this->field_0554 = this->field_03A0;
    this->field_0556 = this->field_03A2;
    this->field_0558 = this->field_03A4;
    this->field_057C = 0;
    this->field_0578 = 0;
    this->field_0574 = 0;
    sVar14 = this->field_0558;
    sVar21 = this->field_0556;
    sVar19 = this->field_0554;
    this->field_00B7 = 3;
LAB_00470e23:
    st::fn_00404F6B(this,(int)sVar19,(int)sVar21,sVar14 + 1);
cf_common_exit_00470E2B:
    st::fn_004031DE(this,0);
cf_common_exit_00470E32:
    iVar12 = this->vfunc_D8();
    return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
  }
  SVar2 = this->field_0580;
  if (SVar2 == CASE_0) {
    local_EAX_53 = st::fn_004031DE(this,2);
    switch(local_EAX_53) {
    case 0:
      if (*(int *)&this->field_0x564 == 1) {
        iVar7 = (int)this->field_0556;
        iVar12 = (int)this->field_0554;
        iVar10 = this->field_0558 + 1;
        *(undefined4 *)&this->field_0x564 = 0;
        break;
      }
      sVar14 = this->field_0554;
      sVar19 = this->field_0558;
      sVar21 = this->field_0556;
      if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar21 < 0)) ||
         (((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))) {
        pSVar16 = nullptr;
      }
      else {
        pSVar16 = STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0];
      }
      iVar12 = st::fn_004049CB(this);
      if (iVar12 != 1) {
LAB_0046f794:
        if (((pSVar16 != nullptr) &&
            (iVar12 = pSVar16->GetObjectTypeId(), iVar12 == 0x33)) &&
           (pSVar16[1].vtable == (STWorldObjectVTable *)this->field_0024)) {
          this->field_0580 = CASE_2;
LAB_0046f98f:
          local_EAX_977 = st::fn_00403A2B(this,0);
          return (-(uint)(local_EAX_977 != -1) & 3) - 1;
        }
LAB_0046f888:
        st::fn_00403855(this);
        this->field_00B7 = 0;
        iVar12 = this->vfunc_D8();
        return -(uint)(iVar12 != 0);
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar5 = extraout_var_00;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((pSVar16 != nullptr) &&
          (iVar12 = pSVar16->GetObjectTypeId(), uVar5 = extraout_var_01,
          iVar12 == 0x33)) && (pSVar16[1].vtable == (STWorldObjectVTable *)this->field_0024)) {
        iVar6 = st::fn_00404AB6(pSVar16,(int)this->field_0041,(int)this->field_0043,
                                   (int)this->field_0045);
        this->field_0568 = iVar6;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar5 = extraout_var_02;
        if (iVar6 != -1) goto LAB_0046f794;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      st::fn_00404908(this,this->field_0047,this->field_0049,this->field_004B,this->field_0554,
                   this->field_0556,(int *)CONCAT22(uVar5,this->field_0558 + 1),1,
                   (short *)&this->field_0x55e,(short *)&this->field_0x560,
                   (short *)&this->field_0x562);
      iVar10 = (int)*(short *)&this->field_0x562;
      iVar7 = (int)*(short *)&this->field_0x560;
      iVar12 = (int)*(short *)&this->field_0x55e;
      this->field_0580 = CASE_1;
      this->field_00B7 = 0;
      break;
    case 1:
      if (*(int *)&this->field_0x564 != 1) {
        sVar14 = this->field_0554;
        sVar19 = this->field_0558;
        sVar21 = this->field_0556;
        if ((((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) && (-1 < sVar21)) &&
             ((sVar21 < g_worldGrid.sizeY && (-1 < sVar19)))) &&
            ((sVar19 < g_worldGrid.sizeZ &&
             ((pSVar16 = STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
              pSVar16 != nullptr &&
              (iVar12 = pSVar16->GetObjectTypeId(), iVar12 == 0x33)))))) &&
           (pSVar16[1].vtable == (STWorldObjectVTable *)this->field_0024))
        goto cf_common_exit_004707B7;
        goto LAB_0046f888;
      }
      *(undefined4 *)&this->field_0x564 = 0;
      st::fn_00403855(this);
    case 3:
      iVar7 = (int)this->field_0556;
      iVar12 = (int)this->field_0554;
      iVar10 = this->field_0558 + 1;
      break;
    default:
      goto cf_common_exit_004707B7;
    case -1:
      local_EAX_99 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x28ac,0,0,
                                        "%s","STBoatC::ToDok, move to dock error");
      if (local_EAX_99 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar12 = 0x28ac;
cf_error_exit_00470C46:
      st::fn_006A5E40
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar12);
      return 0xffff;
    }
    goto LAB_0046fb98;
  }
  if (SVar2 != CASE_1) {
    if (SVar2 == CASE_2) {
      this->field_0574 = this->field_0574 + 1;
      local_EAX_1543 = st::fn_00403A2B(this,2);
      if (local_EAX_1543 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
        return 2;
      }
      if (this->field_048B != 0xffff) {
        return 2;
      }
      if (this->field_0574 % 0x32 != 1) {
        return 2;
      }
      sVar14 = this->field_0554;
      sVar19 = this->field_0558;
      sVar21 = this->field_0556;
      if ((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) &&
          ((-1 < sVar21 && ((sVar21 < g_worldGrid.sizeY && (-1 < sVar19)))))) &&
         ((sVar19 < g_worldGrid.sizeZ &&
          (((pSVar17 = (STFishC *)
                       STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
            pSVar17 != nullptr &&
            (dVar6 = pSVar17->slot_2C(), dVar6 == 0x33)) &&
           (pSVar17->field_0024 == this->field_0024)))))) {
        local_EAX_1797 =
             st::fn_00404AB6(pSVar17,(int)this->field_0041,(int)this->field_0043,
                                (int)this->field_0045);
        this->field_0568 = local_EAX_1797;
        if (local_EAX_1797 == -1) {
          return 2;
        }
        local_EAX_1821 = st::fn_00405D5D(this,pSVar17,local_EAX_1797);
        if (local_EAX_1821 != 1) {
          return 2;
        }
        this->field_055A = pSVar17->field_0018;
        st::fn_00402D60(pSVar17,this->field_0568,this->field_0018);
        sVar21 = this->field_0570;
        sVar19 = this->field_056E;
        sVar14 = this->field_056C;
        this->field_0580 = CASE_3;
        this->field_00B7 = 0;
LAB_00470bfe:
        st::fn_00404F6B(this,(int)sVar14,(int)sVar19,(int)sVar21);
        st::fn_004031DE(this,0);
        return 2;
      }
LAB_0046fd37:
      st::fn_00403855(this);
LAB_0046fd3e:
      iVar12 = this->vfunc_D8();
      return -(uint)(iVar12 != 0);
    }
    if (SVar2 == CASE_3) {
      local_EAX_1958 = st::fn_004031DE(this,2);
      switch(local_EAX_1958) {
      case 0:
        if (*(int *)&this->field_0x564 != 1) {
          sVar14 = this->field_0554;
          sVar19 = this->field_0558;
          sVar21 = this->field_0556;
          if ((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) &&
              ((-1 < sVar21 && ((sVar21 < g_worldGrid.sizeY && (-1 < sVar19)))))) &&
             ((sVar19 < g_worldGrid.sizeZ &&
              ((((pSVar16 = STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
                 pSVar16 != nullptr &&
                 (iVar12 = pSVar16->GetObjectTypeId(), iVar12 == 0x33)) &&
                (*(int *)&pSVar16[0x21].field_0x10 == 0)) &&
               ((*(int *)&pSVar16[0x10].field_0x5 != 6 &&
                (pSVar16[1].vtable == (STWorldObjectVTable *)this->field_0024)))))))) {
            if ((this->field_0047 == this->field_056C) &&
               ((this->field_0049 == this->field_056E && (this->field_004B == this->field_0570)))) {
              this->field_0580 = CASE_4;
              *(undefined4 *)&this->field_0x584 = 0;
              iVar12 = this->vfunc_D8();
              return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
            }
            st::fn_00403D28(pSVar16,this->field_0568,this->field_0018);
            return 0;
          }
          goto LAB_0046fd3e;
        }
        break;
      case 1:
        if (*(int *)&this->field_0x564 != 1) {
          st::fn_00403855(this);
          sVar14 = this->field_0554;
          sVar19 = this->field_0558;
          sVar21 = this->field_0556;
          if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
             (((sVar21 < 0 || ((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)))) ||
              ((g_worldGrid.sizeZ <= sVar19 ||
               (((pSVar17 = (STFishC *)
                            STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
                 pSVar17 == nullptr ||
                 (dVar6 = pSVar17->slot_2C(), dVar6 != 0x33)) ||
                (pSVar17->field_0024 != this->field_0024)))))))) goto LAB_004700a6;
          goto LAB_00470071;
        }
        st::fn_00403855(this);
        break;
      default:
        goto cf_common_exit_00470E32;
      case 3:
        sVar14 = this->field_0554;
        sVar19 = this->field_0558;
        sVar21 = this->field_0556;
        if (((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
             ((sVar21 < 0 || ((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)))))) ||
            (g_worldGrid.sizeZ <= sVar19)) ||
           (((pSVar17 = (STFishC *)
                        STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
             pSVar17 == nullptr ||
             (dVar6 = pSVar17->slot_2C(), dVar6 != 0x33)) ||
            (pSVar17->field_0024 != this->field_0024)))) {
LAB_004700a6:
          iVar12 = this->vfunc_D8();
          return -(uint)(iVar12 != 0);
        }
LAB_00470071:
        st::fn_00405D5D(this,pSVar17,this->field_0568);
        st::fn_00404F6B(this,(int)this->field_056C,(int)this->field_056E,(int)this->field_0570);
        goto cf_common_exit_00470E2B;
      case -1:
        local_EAX_2004 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2977,0,0,"%s",
                                "STBoatC::ToDok, move to depot 2 error");
        if (local_EAX_2004 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar12 = 0x2977;
        goto cf_error_exit_00470C46;
      }
      sVar14 = this->field_0558;
      sVar21 = this->field_0556;
      sVar19 = this->field_0554;
      *(undefined4 *)&this->field_0x564 = 0;
      this->field_0580 = CASE_0;
      this->field_00B7 = 3;
      goto LAB_00470e23;
    }
    if (SVar2 == CASE_4) {
      if (*(int *)&this->field_0x584 == 0) {
        iVar7 = (ushort)(this->field_0558 * 200) + 300;
        iVar12 = STReplaceLowWord((uint32_t)(iVar7), (uint16_t)(this->field_0556 + 1)) * 0xc9;
        iVar10 = STReplaceLowWord((uint32_t)(iVar12), (uint16_t)((short)this->field_0568 + this->field_0554));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar5 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           CONCAT22((short)((uint)(iVar10 * 0x19) >> 0x10),this->field_0045),
                           (short)(iVar10 * 0xc9 + 100),(short)iVar12,iVar7);
        this->field_0572 = uVar5;
        *(undefined4 *)&this->field_0x584 = 1;
      }
      if (*(int *)&this->field_0x584 == 1) {
        uVar8 = st::fn_004030B2(this,this->field_0572);
        uVar8 = st::fn_004022FC(this,(short)uVar8);
        if (uVar8 == 0xffffffff) {
          local_EAX_2998 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x29d3,0,0,"%s",
                                  "STBoatC::ToDok, TODOK_PDOCK");
          if (local_EAX_2998 == 0) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x29d4);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (uVar8 == 0) {
LAB_004707ad:
          *(undefined4 *)&this->field_0x584 = 2;
          goto cf_common_exit_004707B7;
        }
      }
      if (*(int *)&this->field_0x584 == 2) {
        st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                     ((short)this->field_0568 + this->field_0554) * 0xc9 + 100,
                     (this->field_0556 + 1) * 0xc9,this->field_0558 * 200 + 300,this->field_0061);
        *(undefined4 *)&this->field_0x584 = 3;
      }
      if (*(int *)&this->field_0x584 == 3) {
        local_c = st::fn_00402847((STJellyGunC *)this,&local_18,&local_14);
        uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar8;
        iVar12 = (uVar8 >> 0x10) % 7 - 3;
        uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar8;
        uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar1;
        local_10 = (uVar1 >> 0x10) % 7 - 3;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
           (param_1 = 0, this->field_02BF != '\0')) {
          local_8 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar9 = (undefined4 *)
                     st::fn_0040342C(local_28,(short)*local_8,*(ushort *)(local_8 + 1),
                                        this->field_006C);
            uVar3 = *puVar9;
            bVar26 = 0;
            sVar25 = 0;
            iVar7 = -1;
            local_1c = *(short *)(puVar9 + 1);
            sVar24 = 0;
            sVar23 = 0;
            sVar22 = 0;
            sVar21 = 0;
            sVar19 = 0;
            sVar14 = 0;
            local_20 = uVar3;
            if (DAT_0080732c == 1) {
              sVar14 = 0;
              sVar19 = 0;
              sVar21 = 0;
              sVar22 = 0;
              sVar23 = 0;
              sVar24 = 0;
              sVar25 = 0;
              bVar26 = 0;
              lVar18 = st::fn_0072E288();
              iVar15 = (int)local_1c + this->field_0045 + local_10 + (int)(short)lVar18;
              iVar10 = (int)this->field_0043 - (int)STPiece<2,2>(local_20);
              iVar11 = (int)(short)local_20 + iVar12 + this->field_0041;
            }
            else {
              iVar15 = (int)local_1c + local_10 + this->field_0045;
              STPiece<2,2>(local_20) = (short)((uint)uVar3 >> 0x10);
              iVar10 = (int)this->field_0043 - (int)STPiece<2,2>(local_20);
              STPiece<0,2>(local_20) = (short)uVar3;
              iVar11 = (int)(short)local_20 + iVar12 + this->field_0041;
            }
            st::fn_00401433
                      (g_traksClass_00802A7C,1,2,7,iVar11,iVar10 + ((uVar8 >> 0x10) % 7 - 3),iVar15,
                       sVar14,sVar19,sVar21,sVar22,sVar23,sVar24,iVar7,sVar25,bVar26);
            local_8 = (undefined4 *)((int)local_8 + 6);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = param_1 + 1;
          } while (param_1 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_c == -1) {
          local_EAX_3697 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x29fe,0,0,"%s",
                                  "STBoatC::UnLoadRC, TODOK_PDOCK 2");
          if (local_EAX_3697 == 0) {
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x29ff);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (local_c == 0) {
          this->field_0580 = CASE_5;
          this->field_0574 = g_playSystem_00802A38->field_00E4;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          *(undefined4 *)&this->field_0x584 = 0;
          this->field_0578 = (uVar8 >> 0x10) % 0x33 + 0x28;
        }
      }
      goto cf_common_exit_004707B7;
    }
    if (SVar2 == CASE_5) {
      sVar14 = this->field_0554;
      sVar19 = this->field_0558;
      sVar21 = this->field_0556;
      if ((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) && (-1 < sVar21)) &&
         (((sVar21 < g_worldGrid.sizeY && (-1 < sVar19)) &&
          ((sVar19 < g_worldGrid.sizeZ &&
           ((pSVar16 = STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
            pSVar16 != nullptr && (*(int *)&pSVar16->field_0x18 == this->field_055A))))
          )))) {
        if (g_playSystem_00802A38->field_00E4 == this->field_0574 + this->field_0578) {
          this->vfunc_90(3,0x363);
          iVar12 = (*(short *)&this->field_0x237 * -7) / 10;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          sVar14 = (short)((uVar8 >> 0x10) %
                          (((*(short *)&this->field_0x237 * 7) / 10 - iVar12) + 1U)) + (short)iVar12
          ;
          iVar12 = (*(short *)&this->field_0x237 * -2) / 10;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20 = CONCAT22((short)((uVar8 >> 0x10) %
                                     (((*(short *)&this->field_0x237 * 2) / 10 - iVar12) + 1U)) +
                              (short)iVar12,sVar14);
          puVar9 = (undefined4 *)st::fn_0040342C(local_28,sVar14,0,this->field_006C);
          uVar3 = *puVar9;
          local_1c = *(short *)(puVar9 + 1);
          STPiece<2,2>(local_20) = (short)((uint)uVar3 >> 0x10);
          iVar7 = (int)STPiece<2,2>(local_20);
          STPiece<0,2>(local_20) = (short)uVar3;
          iVar12 = (int)(short)local_20;
          local_20 = uVar3;
          st::fn_00402DD8(this->field_01ED,0,this->field_0041 + iVar12,this->field_0043 + iVar7,
                             this->field_0045 + -0x28,0,0);
          this->field_0574 = g_playSystem_00802A38->field_00E4;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          this->field_0578 = (uVar8 >> 0x10) % 0x33 + 0x28;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_00405682(pSVar16,this->field_0568,this->field_0018,
                           *(int *)((int)this->field_06CB + 0x2c),this->field_0716);
        local_EAX_4347 =
             st::fn_00403DE1(pSVar16,this->field_0568,this->field_0018,nullptr);
        this->field_0716 = local_EAX_4347;
        if (local_EAX_4347 != this->field_0712) goto cf_common_exit_00470E32;
      }
      st::fn_004023CE(this);
      this->field_0580 = CASE_6;
      iVar12 = this->vfunc_D8();
      return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
    }
    if (SVar2 != CASE_6) {
      if (SVar2 == CASE_7) {
        local_EAX_5608 = st::fn_004031DE(this,2);
        if (local_EAX_5608 == -1) {
          local_EAX_5748 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2a8c,0,0,"%s",
                                  "STBoatC::ToDok, TODOK_MOVEWAIT error");
          if (local_EAX_5748 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar12 = 0x2a8c;
          goto cf_error_exit_00470C46;
        }
        if (local_EAX_5608 == 0) {
          return 0;
        }
        if (local_EAX_5608 != 3) {
          return 2;
        }
        uVar20 = this->field_004B;
        piVar13 = (int *)(uint)uVar20;
        sVar14 = this->field_0049;
        sVar19 = this->field_0047;
        iVar12 = 3;
        sVar21 = sVar14;
        sVar22 = sVar19;
      }
      else {
        if (SVar2 != CASE_8) {
          local_EAX_5910 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2ab3,0,0,"%s",
                                  "STBoatC::ToDok - incorrect entry");
          if (local_EAX_5910 == 0) {
            return -1;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        local_EAX_5810 = st::fn_004031DE(this,2);
        if (local_EAX_5810 == -1) {
          return -1;
        }
        if (local_EAX_5810 == 0) {
          return 0;
        }
        if (local_EAX_5810 != 3) {
          return 2;
        }
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        piVar13 = (int *)CONCAT22(extraout_var,this->field_004B);
        sVar21 = this->field_0049;
        iVar12 = 1;
        sVar22 = this->field_0047;
        uVar20 = *(ushort *)&this->field_0x562;
        sVar14 = *(short *)&this->field_0x560;
        sVar19 = *(short *)&this->field_0x55e;
      }
      st::fn_00404908(this,sVar19,sVar14,uVar20,sVar22,sVar21,piVar13,iVar12,
                   (short *)&this->field_0x55e,(short *)&this->field_0x560,
                   (short *)&this->field_0x562);
      sVar21 = *(short *)&this->field_0x562;
      sVar19 = *(short *)&this->field_0x560;
      sVar14 = *(short *)&this->field_0x55e;
      goto LAB_00470bfe;
    }
    iVar12 = this->field_057C + 1;
    this->field_057C = iVar12;
    if (iVar12 < 0x1e) goto cf_common_exit_004707B7;
    if (*(int *)&this->field_0x584 == 0) {
      iVar12 = STReplaceLowWord((uint32_t)(iVar12), (uint16_t)(this->field_056E * 0xc9)) + 100;
      uVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar12), (uint16_t)(this->field_0045)),
                         this->field_056C * 0xc9 + 100,(short)iVar12,
                         (ushort)(this->field_0570 * 200) + 100);
      this->field_0572 = uVar5;
      *(undefined4 *)&this->field_0x584 = 1;
    }
    if (*(int *)&this->field_0x584 == 1) {
      uVar8 = st::fn_004030B2(this,this->field_0572);
      uVar8 = st::fn_004022FC(this,(short)uVar8);
      if (uVar8 == 0xffffffff) {
        local_EAX_4651 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2a42,0,0,"%s",
                                "STBoatC::ToDok, TODOK_ODOCK");
        if (local_EAX_4651 == 0) {
          st::fn_006A5E40
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x2a43);
          return 0xffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (uVar8 != 0) goto cf_common_exit_004707B7;
      goto LAB_004707ad;
    }
    if (*(int *)&this->field_0x584 == 2) {
      st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_056C * 0xc9 + 100,this->field_056E * 0xc9 + 100,
                   this->field_0570 * 200 + 100,this->field_0061);
      *(undefined4 *)&this->field_0x584 = 3;
    }
    if (*(int *)&this->field_0x584 != 3) goto cf_common_exit_00470E32;
    local_c = st::fn_00402847((STJellyGunC *)this,&local_10,&local_14);
    uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar8;
    iVar12 = (uVar8 >> 0x10) % 7 - 3;
    uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar8;
    uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar1;
    local_18 = (uVar1 >> 0x10) % 7 - 3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
       (param_1 = 0, this->field_02BF != '\0')) {
      local_8 = (undefined4 *)&this->field_0x2b3;
      do {
        puVar9 = (undefined4 *)
                 st::fn_0040342C(local_28,(short)*local_8,*(ushort *)(local_8 + 1),
                                    this->field_006C);
        uVar3 = *puVar9;
        bVar26 = 0;
        sVar25 = 0;
        iVar7 = -1;
        local_1c = *(short *)(puVar9 + 1);
        sVar24 = 0;
        sVar23 = 0;
        sVar22 = 0;
        sVar21 = 0;
        sVar19 = 0;
        sVar14 = 0;
        local_20 = uVar3;
        if (DAT_0080732c == 1) {
          sVar14 = 0;
          sVar19 = 0;
          sVar21 = 0;
          sVar22 = 0;
          sVar23 = 0;
          sVar24 = 0;
          sVar25 = 0;
          bVar26 = 0;
          lVar18 = st::fn_0072E288();
          iVar15 = (int)local_1c + this->field_0045 + local_18 + (int)(short)lVar18;
          iVar10 = (int)this->field_0043 - (int)STPiece<2,2>(local_20);
          iVar11 = (int)(short)local_20 + iVar12 + this->field_0041;
        }
        else {
          iVar15 = (int)local_1c + local_18 + this->field_0045;
          STPiece<2,2>(local_20) = (short)((uint)uVar3 >> 0x10);
          iVar10 = (int)this->field_0043 - (int)STPiece<2,2>(local_20);
          STPiece<0,2>(local_20) = (short)uVar3;
          iVar11 = (int)(short)local_20 + iVar12 + this->field_0041;
        }
        st::fn_00401433
                  (g_traksClass_00802A7C,1,2,7,iVar11,iVar10 + ((uVar8 >> 0x10) % 7 - 3),iVar15,
                   sVar14,sVar19,sVar21,sVar22,sVar23,sVar24,iVar7,sVar25,bVar26);
        local_8 = (undefined4 *)((int)local_8 + 6);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while (param_1 < (int)(uint)(byte)this->field_02BF);
    }
    if (local_c == -1) {
      local_EAX_5572 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2a6c,0,0,"%s",
                              "STBoatC::ToDok, TODOK_ODOCK 2");
      if (local_EAX_5572 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar12 = 0x2a6d;
      goto cf_error_exit_00470C46;
    }
    if (local_c != 0) goto cf_common_exit_00470E32;
    sVar14 = this->field_0554;
    pSVar16 = nullptr;
    sVar19 = this->field_0558;
    sVar21 = this->field_0556;
    if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar21 < 0)) ||
       (((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)) ||
        ((g_worldGrid.sizeZ <= sVar19 ||
         ((pSVar16 = STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
          pSVar16 == nullptr || (*(int *)&pSVar16->field_0x18 != this->field_055A))))))
       )) {
cf_common_exit_00470B14:
      this->field_0580 = CASE_7;
      st::fn_00404908(this,this->field_0047,this->field_0049,this->field_004B,this->field_0047,
                   this->field_0049,(int *)STReplaceLowWord((uint32_t)(pSVar16), (uint16_t)(this->field_004B))
                   ,3,(short *)&this->field_0x55e,(short *)&this->field_0x560,
                   (short *)&this->field_0x562);
    }
    else {
      if (*(int *)&pSVar16[0x1d].field_0x18 != 0) {
        if (&this->field_0x55e != nullptr) {
          *(undefined4 *)&this->field_0x55e = *(undefined4 *)&pSVar16[0x1d].field_0x1c;
        }
        if (&this->field_0x560 != nullptr) {
          *(int *)&this->field_0x560 = pSVar16[0x1d].value_20;
        }
        if (&this->field_0x562 != nullptr) {
          *(STWorldObjectVTable **)&this->field_0x562 = pSVar16[0x1e].vtable;
        }
      }
      if (*(int *)&pSVar16[0x1d].field_0x18 != 1) goto cf_common_exit_00470B14;
      this->field_0580 = CASE_8;
    }
    st::fn_00404F6B(this,(int)*(short *)&this->field_0x55e,(int)*(short *)&this->field_0x560,
                 (int)*(short *)&this->field_0x562);
    goto cf_common_exit_00470E2B;
  }
  local_EAX_764 = st::fn_004031DE(this,2);
  switch(local_EAX_764) {
  case 0:
    iVar12 = st::fn_004049CB(this);
    if (iVar12 != 1) {
      this->field_0580 = CASE_2;
      goto LAB_0046f98f;
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    st::fn_00404908(this,this->field_0047,this->field_0049,this->field_004B,this->field_0554,
                 this->field_0556,(int *)CONCAT22(extraout_var_03,this->field_0558 + 1),1,
                 (short *)&this->field_0x55e,(short *)&this->field_0x560,(short *)&this->field_0x562
                );
    iVar10 = (int)*(short *)&this->field_0x562;
    iVar7 = (int)*(short *)&this->field_0x560;
    iVar12 = (int)*(short *)&this->field_0x55e;
    break;
  case 1:
    if (*(int *)&this->field_0x564 == 1) {
      *(undefined4 *)&this->field_0x564 = 0;
      st::fn_00403855(this);
      this->field_0580 = CASE_0;
      this->field_00B7 = 3;
      st::fn_00404F6B(this,(int)this->field_0554,(int)this->field_0556,this->field_0558 + 1);
      st::fn_004031DE(this,0);
      goto cf_common_exit_004707B7;
    }
    sVar14 = this->field_0554;
    sVar19 = this->field_0558;
    sVar21 = this->field_0556;
    if (((((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar21 < 0)) ||
          ((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) ||
        ((pSVar17 = (STFishC *)
                    STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
         pSVar17 == nullptr || (dVar6 = pSVar17->slot_2C(), dVar6 != 0x33))
        )) || (pSVar17->field_0024 != this->field_0024)) goto LAB_0046fd37;
    local_EAX_1390 =
         st::fn_00404AB6(pSVar17,(int)this->field_0041,(int)this->field_0043,
                            (int)this->field_0045);
    this->field_0568 = local_EAX_1390;
    if ((local_EAX_1390 == -1) ||
       (local_EAX_1414 = st::fn_00405D5D(this,pSVar17,local_EAX_1390), local_EAX_1414 != 1))
    goto cf_common_exit_004707B7;
    st::fn_00403855(this);
    this->field_055A = pSVar17->field_0018;
    st::fn_00402D60(pSVar17,this->field_0568,this->field_0018);
    iVar10 = (int)this->field_0570;
    iVar7 = (int)this->field_056E;
    iVar12 = (int)this->field_056C;
    this->field_0580 = CASE_3;
    break;
  default:
    goto cf_common_exit_004707B7;
  case 3:
    iVar12 = st::fn_004049CB(this);
    if (iVar12 == 1) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      st::fn_00404908(this,this->field_0047,this->field_0049,this->field_004B,this->field_0554,
                   this->field_0556,
                   (int *)CONCAT22((short)((uint)&this->field_0x562 >> 0x10),this->field_0558 + 1),1
                   ,(short *)&this->field_0x55e,(short *)&this->field_0x560,
                   (short *)&this->field_0x562);
    }
    st::fn_00404F6B(this,(int)*(short *)&this->field_0x55e,(int)*(short *)&this->field_0x560,
                 (int)*(short *)&this->field_0x562);
    st::fn_004031DE(this,0);
    goto cf_common_exit_004707B7;
  case -1:
    local_EAX_808 =
         st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2907,0,0,"%s",
                            "STBoatC::ToDok, correct move to dock error");
    if (local_EAX_808 == 0) {
      st::fn_006A5E40
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2907);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
LAB_0046fb98:
  st::fn_00404F6B(this,iVar12,iVar7,iVar10);
  st::fn_004031DE(this,0);
cf_common_exit_004707B7:
  iVar12 = this->vfunc_D8();
  return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
}

// 004714D0 STBoatC::BackToDok
#line 4 "decomp/ST.exe/functions/004714D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackToDok

   [STSwitchEnumApplier] Switch target field_0580 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0580State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   BackToDok(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=00471517 RET 0x4 | 00471537 RET 0x4 | 00471607 RET 0x4 | 00471653 RET 0x4 |
   004716F2 RET 0x4 | 0047173F RET 0x4 | 0047174C RET 0x4 | 00471769 RET 0x4 | 0047184D RET 0x4 |
   0047195E RET 0x4 */

int __thiscall st::fn_004714D0(STBoatC *this,int *param_1)

{
  undefined2 uVar2;
  int local_EAX_46;
  int iVar4;
  int local_EAX_338;
  int local_EAX_573;
  uint uVar3;
  int local_EAX_920;
  int local_EAX_1098;
  int local_EAX_1145;
  int iVar5;
  STBoatC *pSVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  STBoatC *local_8;

  this->field_00B7 = 0;
  pSVar6 = this;
  local_8 = this;
  switch(this->field_0580) {
  case CASE_0:
  case CASE_1:
  case CASE_3:
    local_EAX_46 = st::fn_00403DF0(this);
    break;
  case CASE_2:
    local_EAX_46 = st::fn_0040493A(this);
    break;
  case CASE_4:
    iVar5 = *(int *)&this->field_0x584;
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      st::fn_004023CE(this);
      iVar5 = this->vfunc_D8();
      return -(uint)(iVar5 != 0);
    }
    if (iVar5 == 3) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar5 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_056E * 0xc9)) + 100;
      uVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar5), (uint16_t)(this->field_0045)),
                         this->field_056C * 0xc9 + 100,(short)iVar5,
                         STReplaceLowWord((uint32_t)(this), (uint16_t)(this->field_0570 * 200)) + 100);
      this->field_0572 = uVar2;
      *(undefined4 *)&this->field_0x584 = 4;
    }
    if (*(int *)&this->field_0x584 != 4) {
      if (*(int *)&this->field_0x584 == 5) {
        st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_056C * 0xc9 + 100,this->field_056E * 0xc9 + 100,
                     this->field_0570 * 200 + 100,this->field_0061);
        *(undefined4 *)&this->field_0x584 = 6;
      }
      if (*(int *)&this->field_0x584 != 6) {
        return 2;
      }
      iVar5 = st::fn_00402847((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 == -1) {
        local_EAX_573 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2aff,0,0,"%s",
                                "STBoatC::BackToDok, TODOK_PDOCK 2");
        if (local_EAX_573 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar5 = 0x2b00;
        goto LAB_0047171f;
      }
      if (iVar5 != 0) goto cf_common_exit_004715EF;
      st::fn_004023CE(this);
      goto LAB_004716df;
    }
    uVar3 = st::fn_004030B2(this,this->field_0572);
    uVar3 = st::fn_004022FC(this,(short)uVar3);
    if (uVar3 == 0xffffffff) {
      local_EAX_338 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2aeb,0,0,"%s",
                              "STBoatC::BackToDok, TODOK_PDOCK");
      if (local_EAX_338 == 0) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2aec
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (uVar3 == 0) {
      *(undefined4 *)&this->field_0x584 = 5;
    }
    goto cf_common_exit_004715EF;
  case CASE_5:
    st::fn_004023CE(this);
    pSVar6 = (STBoatC *)(this->field_057C + 1);
    this->field_057C = (int)pSVar6;
    if ((int)pSVar6 < 0x1f) goto LAB_00471835;
    this->field_057C = 0;
    this->field_0580 = CASE_6;
  case CASE_6:
    if (*(int *)&this->field_0x584 == 0) {
      iVar5 = STReplaceLowWord((uint32_t)(pSVar6), (uint16_t)(this->field_056E * 0xc9)) + 100;
      uVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar5), (uint16_t)(this->field_0045)),
                         this->field_056C * 0xc9 + 100,(short)iVar5,
                         (ushort)(this->field_0570 * 200) + 100);
      this->field_0572 = uVar2;
      *(undefined4 *)&this->field_0x584 = 1;
    }
    if (*(int *)&this->field_0x584 == 1) {
      uVar3 = st::fn_004030B2(this,this->field_0572);
      uVar3 = st::fn_004022FC(this,(short)uVar3);
      if (uVar3 != 0xffffffff) {
        if (uVar3 == 0) {
          *(undefined4 *)&this->field_0x584 = 2;
        }
LAB_00471835:
        iVar5 = this->vfunc_D8();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      local_EAX_920 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2b25,0,0,"%s",
                              "STBoatC::BackToDok, TODOK_ODOCK");
      if (local_EAX_920 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x2b26;
    }
    else {
      if (*(int *)&this->field_0x584 == 2) {
        st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_056C * 0xc9 + 100,this->field_056E * 0xc9 + 100,
                     this->field_0570 * 200 + 100,this->field_0061);
        *(undefined4 *)&this->field_0x584 = 3;
      }
      if (*(int *)&this->field_0x584 != 3) {
switchD_004714f1_default:
        local_EAX_1145 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2b4b,0,0,"%s",
                                "STBoatC::BackToDok");
        if (local_EAX_1145 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = st::fn_00402847((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 != -1) {
        if (iVar5 == 0) {
LAB_004716df:
          iVar5 = this->vfunc_D8();
          return -(uint)(iVar5 != 0);
        }
cf_common_exit_004715EF:
        iVar5 = this->vfunc_D8();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      local_EAX_1098 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2b3d,0,0,"%s",
                              "STBoatC::BackToDok, TODOK_ODOCK 2");
      if (local_EAX_1098 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x2b3e;
    }
LAB_0047171f:
    st::fn_006A5E40
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar5);
    return 0xffff;
  case CASE_7:
  case CASE_8:
    iVar4 = st::fn_00403DF0(this);
    return iVar4;
  default:
    goto switchD_004714f1_default;
  }
  if (local_EAX_46 == 0) {
    st::fn_004023CE(this);
  }
  return local_EAX_46;
}

// 00471AC0 STBoatC::Guard
#line 4 "decomp/ST.exe/functions/00471AC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Guard */

int __thiscall st::fn_00471AC0(STBoatC *this,int param_1)

{
  dword dVar1;
  short sVar3;
  int local_EAX_438;
  int iVar5;
  int iVar4;
  STGameObjC *pSVar6;
  int local_EAX_1296;
  int local_EAX_1512;
  uint local_EAX_1596;
  undefined4 *puVar7;
  int local_EAX_2039;
  int local_EAX_2149;
  int local_EAX_2286;
  int local_EAX_2362;
  int local_EAX_2627;
  int local_EAX_3345;
  int local_EAX_3904;
  uint uVar9;
  int local_EAX_4449;
  int local_EAX_4547;
  int local_EAX_4659;
  int local_EAX_4714;
  int iVar7;
  int iVar8;
  STBoatCVTable *pSVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  uint uVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  bool bVar13;
  RecoveredRecord_STBoatC_00645880 local_64;
  undefined4 local_3c [2];
  short local_34;
  short sStack_32;
  undefined2 local_30;
  int local_2c [2];
  uint local_24;
  STTorpC *local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  short local_c;
  short local_a;
  undefined2 local_8;
  undefined2 local_6;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    st::fn_00401CFD(this,this->field_03A6,this->field_03AA,this->field_03AE,this->field_03B2);
    this->field_047B = nullptr;
    this->field_0487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_082E = 0xffffffff;
    this->field_0836 = 2;
    this->field_0814 = this->field_0816 * 0xc9;
  }
  if (this->field_082E == -1) {
    iVar8 = this->field_0836 + -1;
    this->field_0836 = iVar8;
    if (1 < iVar8) {
      iVar8 = this->vfunc_D8();
      return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
    }
    this->field_082E = 0;
  }
  uVar10 = this->field_0836 + 1;
  this->field_0836 = uVar10;
  iVar8 = this->field_082E;
  if (iVar8 != 0) {
    if (iVar8 == 1) {
      uVar11 = this->field_00B7;
      this->field_00B7 = 0;
      iVar8 = st::fn_00403B34(this,2);
      this->field_00B7 = uVar11;
      if (iVar8 == -1) {
        return -1;
      }
      if (iVar8 == 0) {
        this->field_047F = -1;
        this->field_082E = 2;
      }
      else if (iVar8 == 3) {
        this->field_082E = 0;
      }
      if ((this->field_082E != 1) || (iVar8 = st::fn_00405B05(this,CASE_1), iVar8 != 0))
      goto cf_common_exit_00472CB0;
      pSVar6 = st::fn_004028BA
                         (g_allPlayers_007FA174,*(char *)&this->field_0487,
                          *(ushort *)&this->field_048B,this->field_0483);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_EAX_2627 = st::fn_00401DE8((int *)this,extraout_EDX_00);
      switch(local_EAX_2627) {
      case 0:
      case 10:
        st::fn_004031E3(pSVar6,&local_14,&local_18,(short *)&local_1c);
        local_64.field_000A = this->field_0043;
        local_64.field_0008 = this->field_0041;
        local_64.field_000C = this->field_0045;
        local_10 = 0;
        if (this->field_02B2 != '\0') {
          puVar12 = (undefined2 *)&this->field_0x2a8;
          do {
            if (this->field_07A2 < 1) break;
            puVar7 = (undefined4 *)
                     st::fn_0040342C(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                        this->field_006C);
            sStack_32 = (short)((uint)*puVar7 >> 0x10);
            local_64.field_000E = this->field_0041 + (short)*puVar7;
            local_64.field_0010 = this->field_0043 - sStack_32;
            local_64.field_0012 = *(short *)(puVar7 + 1) + this->field_0045;
            sStack_32 = *puVar12;
            local_34 = 0;
            puVar7 = (undefined4 *)st::fn_0040342C(local_2c,0,0,this->field_006C);
            local_34 = (short)*puVar7;
            sStack_32 = (short)((uint)*puVar7 >> 0x10);
            local_30 = *(undefined2 *)(puVar7 + 1);
            local_64.field_0014 = local_34 + (short)local_14;
            local_64.field_0016 = (short)local_18 - sStack_32;
            local_64.field_0000 = this->field_0024;
            local_64.field_0018 = (short)local_1c;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_64.field_0022 =
                 (-(uint)(*(int *)((int)this->field_06CB + 0x2c) != 10) & 0xfffffffe) + 1;
            if (local_EAX_2627 == 10) {
              local_64.field_0004 = 0xa1;
            }
            else {
              local_64.field_0004 = this->field_079A;
            }
            local_64.field_001A = this->field_006C;
            local_64.field_001C = this->field_0018;
            local_64.field_0020 = this->field_0032;
            st::fn_00402D1A(&local_64);
            if (local_EAX_2627 == 10) {
              this->field_072A = 0;
            }
            else {
              this->field_07AA = 0;
              this->field_07A2 = this->field_07A2 + -1;
            }
            local_10 = local_10 + 1;
            puVar12 = puVar12 + 3;
          } while (local_10 < (byte)this->field_02B2);
        }
        break;
      case 1:
      case 5:
      case 6:
      case 7:
      case 8:
cf_common_exit_00472A1F:
        this->field_047F = -1;
        break;
      case 9:
LAB_00472a3a:
        st::fn_004031E3(pSVar6,&local_14,&local_18,(short *)&local_1c);
        sVar3 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           STReplaceLowWord((uint32_t)(local_18), (uint16_t)(this->field_0045)),
                           (short)local_14,(short)local_18,local_1c);
        uVar9 = st::fn_004030B2(this,sVar3);
        st::fn_004022FC(this,(short)uVar9);
      }
    }
    else {
      if (iVar8 != 2) {
        if (iVar8 != 3) {
          if (iVar8 == 4) {
            uVar11 = this->field_00B7;
            this->field_00B7 = 0;
            local_EAX_4449 = st::fn_00402266(this,2);
            this->field_00B7 = uVar11;
            if (local_EAX_4449 != -1) {
              if ((local_EAX_4449 == 0) || (local_EAX_4449 == 3)) {
                this->field_0836 = 1;
                this->field_082E = 0;
              }
              iVar8 = this->vfunc_D8();
              return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
            }
          }
          else {
            if (iVar8 != 5) {
              iVar7 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2dbf,0,0,
                                         "%s","STBoatC::Guard - incorrect entry");
              if (iVar7 == 0) {
                return 2;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            uVar11 = this->field_00B7;
            this->field_00B7 = 0;
            local_EAX_4547 = st::fn_00402266(this,2);
            this->field_00B7 = uVar11;
            if (local_EAX_4547 != -1) {
              if (local_EAX_4547 == 0) {
                local_EAX_4659 =
                     st::fn_006AADD0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                                  (int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
                if (0 < local_EAX_4659) {
                  st::fn_00404F6B(this,(int)this->field_0475,(int)this->field_0477,
                               (int)this->field_0479);
                  uVar11 = this->field_00B7;
                  this->field_00B7 = 0;
                  local_EAX_4714 = st::fn_00402266(this,0);
                  if (local_EAX_4714 == -1) {
                    return -1;
                  }
                  this->field_00B7 = uVar11;
                  goto cf_common_exit_00472CB0;
                }
              }
              else if (local_EAX_4547 != 3) goto cf_common_exit_00472CB0;
              this->field_0836 = 1;
              this->field_082E = 0;
              goto cf_common_exit_00472CB0;
            }
          }
          return -1;
        }
        uVar11 = this->field_00B7;
        this->field_00B7 = 0;
        iVar8 = st::fn_00403B34(this,2);
        this->field_00B7 = uVar11;
        if (iVar8 == -1) {
          return -1;
        }
        if ((iVar8 == 0) || (iVar8 == 3)) {
          this->field_082E = 0;
        }
        if ((this->field_082E != 1) || (iVar8 = st::fn_00405B05(this,CASE_1), iVar8 != 0))
        goto cf_common_exit_00472CB0;
        pSVar6 = st::fn_004028BA
                           (g_allPlayers_007FA174,*(char *)&this->field_0487,
                            *(ushort *)&this->field_048B,this->field_0483);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        local_EAX_3904 = st::fn_00401DE8((int *)this,extraout_EDX_02);
        switch(local_EAX_3904) {
        case 0:
        case 10:
          st::fn_004031E3(pSVar6,&local_14,&local_18,(short *)&local_1c);
          local_64.field_000A = this->field_0043;
          local_64.field_0008 = this->field_0041;
          local_64.field_000C = this->field_0045;
          local_10 = 0;
          if (this->field_02B2 != '\0') {
            puVar12 = (undefined2 *)&this->field_0x2a8;
            do {
              if (this->field_07A2 < 1) break;
              puVar7 = (undefined4 *)
                       st::fn_0040342C(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                          this->field_006C);
              sStack_32 = (short)((uint)*puVar7 >> 0x10);
              local_64.field_000E = this->field_0041 + (short)*puVar7;
              local_64.field_0010 = this->field_0043 - sStack_32;
              local_64.field_0012 = *(short *)(puVar7 + 1) + this->field_0045;
              sStack_32 = *puVar12;
              local_34 = 0;
              puVar7 = (undefined4 *)st::fn_0040342C(local_2c,0,0,this->field_006C);
              local_34 = (short)*puVar7;
              sStack_32 = (short)((uint)*puVar7 >> 0x10);
              local_30 = *(undefined2 *)(puVar7 + 1);
              local_64.field_0014 = local_34 + (short)local_14;
              local_64.field_0016 = (short)local_18 - sStack_32;
              local_64.field_0000 = this->field_0024;
              local_64.field_0018 = (short)local_1c;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_64.field_0022 =
                   (-(uint)(*(int *)((int)this->field_06CB + 0x2c) != 10) & 0xfffffffe) + 1;
              if (local_EAX_3904 == 10) {
                local_64.field_0004 = 0xa1;
              }
              else {
                local_64.field_0004 = this->field_079A;
              }
              local_64.field_001A = this->field_006C;
              local_64.field_001C = this->field_0018;
              local_64.field_0020 = this->field_0032;
              st::fn_00402D1A(&local_64);
              if (local_EAX_3904 == 10) {
                this->field_072A = 0;
              }
              else {
                this->field_07AA = 0;
                this->field_07A2 = this->field_07A2 + -1;
              }
              local_10 = local_10 + 1;
              puVar12 = puVar12 + 3;
            } while (local_10 < (byte)this->field_02B2);
          }
          break;
        case 1:
        case 5:
        case 6:
        case 7:
        case 8:
          goto cf_common_exit_00472A1F;
        case 9:
          goto switchD_004727e9_caseD_9;
        }
        goto cf_common_exit_00472CB0;
      }
      iVar8 = st::fn_00405E57(this);
      if (iVar8 == 1) {
        sVar3 = this->field_0469;
        this->field_0469 = -sVar3;
        iVar8 = this->vfunc_18(this->field_0047,this->field_0049,-sVar3 + this->field_004B);
        if (iVar8 == 1) {
          this->field_082E = 3;
          st::fn_00404F6B(this,(int)this->field_0047,(int)this->field_0049,
                       (int)this->field_0469 + (int)this->field_004B);
          uVar11 = this->field_00B7;
          this->field_00B7 = 0;
          iVar8 = st::fn_00403B34(this,0);
          this->field_00B7 = uVar11;
          if (iVar8 == -1) {
            return -1;
          }
          if ((iVar8 != 0) && (iVar8 != 3)) {
            return 2;
          }
          this->field_0469 = 0;
          this->field_082E = 0;
          return 2;
        }
        this->field_0469 = -this->field_0469;
      }
      if ((this->field_082E != 2) || (iVar8 = st::fn_00405B05(this,CASE_2), iVar8 != 0))
      goto cf_common_exit_00472CB0;
      pSVar6 = st::fn_004028BA
                         (g_allPlayers_007FA174,*(char *)&this->field_0487,
                          *(ushort *)&this->field_048B,this->field_0483);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_EAX_3345 = st::fn_00401DE8((int *)this,extraout_EDX_01);
      switch(local_EAX_3345) {
      case 0:
      case 10:
        st::fn_004031E3(pSVar6,&local_14,&local_18,(short *)&local_1c);
        local_64.field_000A = this->field_0043;
        local_64.field_0008 = this->field_0041;
        local_64.field_000C = this->field_0045;
        local_10 = 0;
        if (this->field_02B2 != '\0') {
          puVar12 = (undefined2 *)&this->field_0x2a8;
          do {
            if (this->field_07A2 < 1) break;
            puVar7 = (undefined4 *)
                     st::fn_0040342C(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                        this->field_006C);
            sStack_32 = (short)((uint)*puVar7 >> 0x10);
            local_64.field_000E = this->field_0041 + (short)*puVar7;
            local_64.field_0010 = this->field_0043 - sStack_32;
            local_64.field_0012 = *(short *)(puVar7 + 1) + this->field_0045;
            sStack_32 = *puVar12;
            local_34 = 0;
            puVar7 = (undefined4 *)st::fn_0040342C(local_2c,0,0,this->field_006C);
            local_34 = (short)*puVar7;
            sStack_32 = (short)((uint)*puVar7 >> 0x10);
            local_30 = *(undefined2 *)(puVar7 + 1);
            local_64.field_0014 = local_34 + (short)local_14;
            local_64.field_0016 = (short)local_18 - sStack_32;
            local_64.field_0000 = this->field_0024;
            local_64.field_0018 = (short)local_1c;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_64.field_0022 =
                 (-(uint)(*(int *)((int)this->field_06CB + 0x2c) != 10) & 0xfffffffe) + 1;
            if (local_EAX_3345 == 10) {
              local_64.field_0004 = 0xa1;
            }
            else {
              local_64.field_0004 = this->field_079A;
            }
            local_64.field_001A = this->field_006C;
            local_64.field_001C = this->field_0018;
            local_64.field_0020 = this->field_0032;
            st::fn_00402D1A(&local_64);
            if (local_EAX_3345 == 10) {
              this->field_072A = 0;
            }
            else {
              this->field_07AA = 0;
              this->field_07A2 = this->field_07A2 + -1;
            }
            local_10 = local_10 + 1;
            puVar12 = puVar12 + 3;
          } while (local_10 < (byte)this->field_02B2);
        }
        break;
      case 1:
      case 5:
      case 6:
      case 7:
      case 8:
        goto cf_common_exit_00472A1F;
      case 9:
switchD_004727e9_caseD_9:
        goto LAB_00472a3a;
      }
    }
cf_common_exit_00472CB0:
    iVar8 = this->vfunc_D8();
    return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
  }
  uVar10 = uVar10 & 0x80000001;
  bVar13 = uVar10 == 0;
  if ((int)uVar10 < 0) {
    bVar13 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar13) && (DAT_007fa134 != 0)) {
    dVar1 = g_array_007FA130->count;
    local_34 = (short)dVar1;
    sStack_32 = (short)(dVar1 >> 0x10);
    if ((dVar1 != 0) && (uVar10 = 0, iVar8 = DAT_007fa134, dVar1 != 0)) {
      while (0 < iVar8) {
        st::fn_006ACC70(g_array_007FA130,uVar10,&local_20);
        if (local_20 != nullptr) {
          iVar8 = iVar8 + -1;
          st::fn_004018C5((STFishC *)local_20,(short *)((int)&local_10 + 2),&local_c,&local_a);
          local_2c[0] = st::fn_006AADD0((int)this->field_0047,(int)this->field_0049,
                                     (int)this->field_004B,(int)STPiece<2,2>(local_10),(int)local_c,
                                     (int)local_a);
          if ((local_2c[0] <= (int)this->field_080C / 0xc9 + 1) &&
             (local_EAX_438 = st::fn_0040478C(local_20,this->field_0018,&local_24),
             local_EAX_438 != 2)) {
            if (local_EAX_438 == 0) {
              iVar5 = st::fn_00403A99((AnonReceiver_004603B0 *)this,
                                         (RecoveredRecord_STBoatC_004838E0 *)local_20);
              if (iVar5 == 1) {
                st::fn_0040368E(local_20,this->field_0018,&local_24);
LAB_00471cbd:
                iVar5 = st::fn_00401451(this,(RecoveredRecord_STBoatC_00482DB0 *)local_20);
                if (iVar5 == 1) {
                  st::fn_0040282E(local_20,this->field_0018,local_24);
                  this->field_046B = (ushort *)local_20;
                  this->field_046F = local_20->field_026E;
                  this->field_0471 = (AnonShape_005EFAE0_B406B78B *)local_20->field_0018;
                  if (this->field_004B == 0) {
                    pSVar9 = this->vtable;
                    this->field_0469 = 1;
                    sVar3 = 1;
LAB_00471ec9:
                    iVar8 = (*pSVar9->vfunc_18)(this,this->field_0047,this->field_0049,sVar3);
                    if (iVar8 != 1) break;
                    this->field_082E = 1;
                    st::fn_00404F6B(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar11 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar8 = st::fn_00403B34(this,0);
                    this->field_00B7 = uVar11;
                  }
                  else if (this->field_004B == 4) {
                    this->field_0469 = -1;
                    iVar8 = this->vfunc_18(this->field_0047,this->field_0049,3);
                    if (iVar8 != 1) break;
                    this->field_082E = 1;
                    st::fn_00404F6B(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar11 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar8 = st::fn_00403B34(this,0);
                    this->field_00B7 = uVar11;
                  }
                  else {
                    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                    this->field_001C = uVar10;
                    this->field_0469 = (ushort)(uVar10 >> 0x10) & 1;
                    sVar3 = (-(ushort)((uVar10 & 0x10000) != 0) & 2) - 1;
                    this->field_0469 = sVar3;
                    iVar8 = this->vfunc_18(this->field_0047,this->field_0049,
                                       sVar3 + this->field_004B);
                    if (iVar8 != 1) {
                      sVar3 = this->field_0469;
                      pSVar9 = this->vtable;
                      this->field_0469 = -sVar3;
                      sVar3 = -sVar3 + this->field_004B;
                      goto LAB_00471ec9;
                    }
                    this->field_082E = 1;
                    st::fn_00404F6B(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar11 = this->field_00B7;
                    this->field_00B7 = 0;
                    iVar8 = st::fn_00403B34(this,0);
                    this->field_00B7 = uVar11;
                  }
                  if (iVar8 == -1) {
                    return -1;
                  }
                  if ((iVar8 == 0) || (iVar8 == 3)) {
                    this->field_0469 = 0;
                    this->field_082E = 0;
                  }
                  break;
                }
              }
              else {
                st::fn_0040282E(local_20,this->field_0018,local_24);
              }
            }
            else if (local_EAX_438 == 1) goto LAB_00471cbd;
          }
        }
        uVar10 = uVar10 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (CONCAT22(sStack_32,local_34) <= uVar10) break;
      }
    }
  }
  if (this->field_082E != 0) goto switchD_00471fe0_caseD_2;
  if (this->field_0836 == 2) {
    this->field_047F = -1;
    iVar8 = st::fn_00405B05(this,CASE_0);
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    this->field_047F = (uVar10 >> 0x10) % 0x15;
  }
  else {
    iVar8 = st::fn_00405B05(this,CASE_0);
  }
  iVar4 = st::fn_006AADD0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                       (int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
  if (iVar8 != 0) {
    if (iVar4 < 1) goto switchD_00471fe0_caseD_2;
    this->field_082E = 5;
    st::fn_00404F6B(this,(int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
    uVar11 = this->field_00B7;
    this->field_00B7 = 0;
    local_EAX_2149 = st::fn_00402266(this,0);
    if (local_EAX_2149 == -1) {
      return -1;
    }
    goto LAB_0047233a;
  }
  if (5 < iVar4) {
    this->field_082E = 5;
    st::fn_00404F6B(this,(int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
    uVar11 = this->field_00B7;
    this->field_00B7 = 0;
    goto LAB_004720a6;
  }
  pSVar6 = st::fn_004028BA
                     (g_allPlayers_007FA174,*(char *)&this->field_0487,*(ushort *)&this->field_048B,
                      this->field_0483);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  local_EAX_1296 = st::fn_00401DE8((int *)this,extraout_EDX);
  switch(local_EAX_1296) {
  case 0:
  case 10:
    st::fn_004031E3(pSVar6,&local_14,&local_18,(short *)&local_1c);
    local_64.field_000A = this->field_0043;
    local_64.field_0008 = this->field_0041;
    local_64.field_000C = this->field_0045;
    local_10 = 0;
    if (this->field_02B2 != '\0') {
      puVar12 = (undefined2 *)&this->field_0x2a8;
      do {
        if (this->field_07A2 < 1) break;
        puVar7 = (undefined4 *)
                 st::fn_0040342C(local_2c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                    this->field_006C);
        sStack_32 = (short)((uint)*puVar7 >> 0x10);
        local_64.field_000E = this->field_0041 + (short)*puVar7;
        local_64.field_0010 = this->field_0043 - sStack_32;
        local_64.field_0012 = *(short *)(puVar7 + 1) + this->field_0045;
        sStack_32 = *puVar12;
        local_34 = 0;
        puVar7 = (undefined4 *)st::fn_0040342C(local_3c,0,0,this->field_006C);
        local_34 = (short)*puVar7;
        sStack_32 = (short)((uint)*puVar7 >> 0x10);
        local_30 = *(undefined2 *)(puVar7 + 1);
        local_64.field_0014 = local_34 + (short)local_14;
        local_64.field_0016 = (short)local_18 - sStack_32;
        local_64.field_0000 = this->field_0024;
        local_64.field_0018 = (short)local_1c;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_64.field_0022 =
             (-(uint)(*(int *)((int)this->field_06CB + 0x2c) != 10) & 0xfffffffe) + 1;
        if (local_EAX_1296 == 10) {
          local_64.field_0004 = 0xa1;
        }
        else {
          local_64.field_0004 = this->field_079A;
        }
        local_64.field_001A = this->field_006C;
        local_64.field_001C = this->field_0018;
        local_64.field_0020 = this->field_0032;
        st::fn_00402D1A(&local_64);
        if (local_EAX_1296 == 10) {
          this->field_072A = 0;
        }
        else {
          this->field_07AA = 0;
          this->field_07A2 = this->field_07A2 + -1;
        }
        local_10 = local_10 + 1;
        puVar12 = puVar12 + 3;
      } while (local_10 < (byte)this->field_02B2);
    }
    break;
  case 1:
    local_EAX_2039 =
         st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2c5e,0,-1,"%s",
                            "STBoatC::Guard NOT_ZONE_A");
    if (local_EAX_2039 == 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2c5f);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  case 5:
    this->field_082E = 4;
    st::fn_00405F0B
              ((STFishC *)pSVar6,(undefined2 *)&local_14,(undefined2 *)&local_18,
               (undefined2 *)&local_1c);
    goto LAB_0047207e;
  case 6:
  case 7:
  case 8:
    st::fn_00405F0B((STFishC *)pSVar6,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
    this->field_0800 = local_6;
    this->field_0802 = local_8;
    this->field_0804 = STPiece<2,2>(param_1);
    iVar8 = st::fn_00405E66(this,(short)local_EAX_1296,(short *)&local_14,(short *)&local_18,
                               (short *)&local_1c);
    if (iVar8 == 0) {
      if (300 < (short)this->field_0814) {
        this->field_0814 = this->field_0814 + -0xc9;
      }
      break;
    }
    this->field_082E = 4;
LAB_0047207e:
    st::fn_00404F6B(this,(int)(short)local_14,(int)(short)local_18,(int)(short)local_1c);
    uVar11 = this->field_00B7;
    this->field_00B7 = 0;
LAB_004720a6:
    local_EAX_1512 = st::fn_00402266(this,0);
    if (local_EAX_1512 == -1) {
      return -1;
    }
LAB_0047233a:
    this->field_00B7 = uVar11;
    break;
  case 9:
    st::fn_004031E3(pSVar6,&local_14,&local_18,(short *)&local_1c);
    sVar3 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       STReplaceLowWord((uint32_t)(local_18), (uint16_t)(this->field_0045)),(short)local_14,
                       (short)local_18,local_1c);
    local_EAX_1596 = st::fn_004030B2(this,sVar3);
    st::fn_004022FC(this,(short)local_EAX_1596);
  }
switchD_00471fe0_caseD_2:
  if ((this->field_082E == 0) && (this->field_048B == 0xffff)) {
    if ((this->field_0475 != this->field_0047) ||
       ((this->field_0477 != this->field_0049 || (this->field_0479 != this->field_004B)))) {
      local_EAX_2286 =
           st::fn_006AADD0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                        (int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
      if ((local_EAX_2286 != -4) && (local_EAX_2286 < 8)) {
        this->field_082E = 4;
        st::fn_00404F6B(this,(int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
        uVar11 = this->field_00B7;
        this->field_00B7 = 0;
        local_EAX_2362 = st::fn_00402266(this,0);
        if (local_EAX_2362 != -1) {
          this->field_00B7 = uVar11;
          iVar8 = this->vfunc_D8();
          return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
        }
        return -1;
      }
      this->field_0475 = this->field_005B;
      this->field_0477 = this->field_005D;
      this->field_0479 = this->field_005F;
    }
  }
  iVar8 = this->vfunc_D8();
  return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
}

// 004732F0 STBoatC::LoadObj
#line 4 "decomp/ST.exe/functions/004732F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::LoadObj

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004732F0 -> 006E62D0 @ 004733E4 */

int __thiscall st::fn_004732F0(STBoatC *this,AnonShape_005EFAE0_B406B78B *param_1)

{
  undefined2 *puVar1;
  STFishCVTable *pSVar2;
  undefined2 uVar4;
  int iVar10;
  int local_EAX_522;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STWorldObject *pSVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  uint uVar7;
  int local_EAX_2224;
  undefined4 *puVar8;
  int local_EAX_3016;
  int local_EAX_3489;
  uint uVar9;
  int local_EAX_4152;
  int iVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  STBoatC *pSVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  undefined2 uVar14;
  uint uVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_16;
  longlong lVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  int iVar22;
  short sVar23;
  byte bVar24;
  undefined4 local_40 [2];
  undefined4 local_38;
  short local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  STFishC *local_c;
  short local_8;
  short local_6;

  uVar4 = 0;
  local_c = nullptr;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == nullptr) ||
     (pSVar12 = this, param_1 == (AnonShape_005EFAE0_B406B78B *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    if (this->field_07CA != nullptr) {
      return 0;
    }
    sVar16 = *(short *)&this->field_0x3ba;
    sVar17 = *(short *)&this->field_0x3bc;
    sVar18 = *(short *)&this->field_0x3be;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = *(AnonShape_005EFAE0_B406B78B **)&this->field_0x3c0;
    puVar1 = &this->field_0588;
    this->field_058A = sVar17;
    *puVar1 = sVar16;
    this->field_058C = sVar18;
    this->field_058E = param_1;
    if (((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar17 < 0)) ||
        ((g_worldGrid.sizeY <= sVar17 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
      local_c = nullptr;
    }
    else {
      local_c = (STFishC *)
                STGridAt3D(g_worldGrid, sVar16, sVar17, sVar18).objects[0];
    }
    if ((local_c == nullptr) ||
       ((AnonShape_005EFAE0_B406B78B *)local_c->field_0018 != param_1)) {
      iVar11 = st::fn_006E62D0(g_playSystem_00802A38,param_1,(int *)&local_c);
      if (iVar11 == -4) {
        return 0;
      }
      st::fn_00405F0B(local_c,puVar1,&this->field_058A,&this->field_058C);
    }
    iVar11 = (*local_c->vtable->vfunc_F8)();
    if (iVar11 == 0) {
      return 0;
    }
    iVar11 = (*local_c->vtable->vfunc_A4)();
    if (iVar11 == 1) {
      return 0;
    }
    iVar11 = st::fn_00402CFC(this,this->field_005B,this->field_005D,this->field_005F,*puVar1,
                               this->field_058A,this->field_058C,&local_6,&local_8,
                               (undefined2 *)((int)&param_1 + 2),(short *)&local_18,
                               (short *)&local_14,(undefined2 *)&local_10);
    if (iVar11 == -2) {
      return 0;
    }
    st::fn_00402491(this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pSVar12 = (STBoatC *)CONCAT22(extraout_var_01,STPiece<2,2>(param_1));
    if (((this->field_005B != local_6) || (this->field_005D != local_8)) ||
       (this->field_005F != STPiece<2,2>(param_1))) {
      this->field_0596 = 0;
      sVar16 = STPiece<2,2>(param_1);
      if (iVar11 == -1) {
        local_6 = (short)local_18;
        local_8 = (short)local_14;
        sVar16 = (short)local_10;
      }
      st::fn_00404F6B(this,(int)local_6,(int)local_8,(int)sVar16);
      st::fn_004031DE(this,0);
      goto cf_common_exit_0047405D;
    }
    this->field_0596 = 1;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar4 = extraout_var_09;
  }
  uVar14 = (undefined2)((uint)pSVar12 >> 0x10);
  if (this->field_0596 == 0) {
    iVar10 = st::fn_004031DE(this,2);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar4 = extraout_var_10;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar14 = extraout_var_02;
    switch(iVar10) {
    case 0:
    case 1:
    case 3:
      st::fn_00403855(this);
      sVar16 = this->field_0588;
      sVar17 = this->field_058C;
      sVar18 = this->field_058A;
      if ((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) ||
          ((sVar18 < 0 || ((g_worldGrid.sizeY <= sVar18 || (sVar17 < 0)))))) ||
         (g_worldGrid.sizeZ <= sVar17)) {
        local_c = nullptr;
      }
      else {
        local_c = (STFishC *)
                  STGridAt3D(g_worldGrid, sVar16, sVar18, sVar17).objects[0];
      }
      if ((((local_c == nullptr) ||
           ((AnonShape_005EFAE0_B406B78B *)local_c->field_0018 != this->field_058E)) &&
          (iVar11 = st::fn_006E62D0
                              (g_playSystem_00802A38,this->field_058E,(int *)&local_c), iVar11 == -4
          )) || ((iVar11 = (*local_c->vtable->vfunc_A4)(), iVar11 == 1 ||
                 (iVar11 = (*local_c->vtable->vfunc_C0)(), iVar11 == 1))))
      goto cf_common_exit_004743A5;
      st::fn_00405F0B(local_c,&this->field_0588,&this->field_058A,&this->field_058C);
      iVar11 = st::fn_00402CFC(this,this->field_005B,this->field_005D,this->field_005F,
                                 this->field_0588,this->field_058A,this->field_058C,&local_6,
                                 &local_8,(undefined2 *)((int)&param_1 + 2),(short *)&local_18,
                                 (short *)&local_14,(undefined2 *)&local_10);
      if (iVar11 == -2) goto cf_common_exit_004743A5;
      if (((this->field_005B != local_6) || (this->field_005D != local_8)) ||
         (this->field_005F != STPiece<2,2>(param_1))) {
        if (iVar11 == -1) {
          iVar5 = (int)(short)local_10;
          iVar11 = (int)(short)local_14;
          iVar22 = (int)(short)local_18;
        }
        else {
          iVar5 = (int)STPiece<2,2>(param_1);
          iVar11 = (int)local_8;
          iVar22 = (int)local_6;
        }
        goto LAB_004736e2;
      }
      this->field_0596 = 1;
      this->field_0592 = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar4 = extraout_var_11;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar14 = extraout_var_03;
      break;
    case 2:
      goto switchD_004734db_caseD_2;
    case -1:
      local_EAX_522 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2e03,0,0,"%s",
                              "STBoatC::LoadObj, LOADOBJ_MOVE");
      if (local_EAX_522 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2e03);
      return 0xffff;
    }
  }
  iVar11 = this->field_0596;
  if (iVar11 == 1) {
    iVar11 = this->vfunc_D8();
    if (iVar11 != 0) {
      return -1;
    }
    uVar14 = 0;
    iVar11 = this->field_0592 % 0x28;
    if (iVar11 == 0) {
      sVar16 = this->field_0588;
      sVar17 = this->field_058C;
      sVar18 = this->field_058A;
      if (((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar18 < 0)) ||
          ((g_worldGrid.sizeY <= sVar18 || (sVar17 < 0)))) || (g_worldGrid.sizeZ <= sVar17)) {
        local_c = nullptr;
      }
      else {
        local_c = (STFishC *)
                  STGridAt3D(g_worldGrid, sVar16, sVar18, sVar17).objects[0];
      }
      if (((local_c == nullptr) ||
          ((AnonShape_005EFAE0_B406B78B *)local_c->field_0018 != this->field_058E)) &&
         (iVar11 = st::fn_006E62D0
                             (g_playSystem_00802A38,this->field_058E,(int *)&local_c), iVar11 == -4)
         ) {
        return 0;
      }
      iVar11 = (*local_c->vtable->vfunc_A4)();
      if ((iVar11 == 1) || (iVar11 = (*local_c->vtable->vfunc_C0)(), iVar11 == 1)) {
cf_common_exit_004743A5:
        st::fn_004027CA(this);
        return 0;
      }
      st::fn_00405F0B(local_c,&this->field_0588,&this->field_058A,&this->field_058C);
      iVar11 = st::fn_00402CFC(this,this->field_005B,this->field_005D,this->field_005F,
                                 this->field_0588,this->field_058A,this->field_058C,&local_6,
                                 &local_8,(undefined2 *)((int)&param_1 + 2),(short *)&local_18,
                                 (short *)&local_14,(undefined2 *)&local_10);
      if (iVar11 == -2) goto cf_common_exit_004743A5;
      if (((this->field_005B != local_6) || (this->field_005D != local_8)) ||
         (this->field_005F != STPiece<2,2>(param_1))) {
        this->field_0596 = 0;
        if (iVar11 == -1) {
          iVar5 = (int)(short)local_10;
          iVar11 = (int)(short)local_14;
          iVar22 = (int)(short)local_18;
        }
        else {
          iVar5 = (int)STPiece<2,2>(param_1);
          iVar11 = (int)local_8;
          iVar22 = (int)local_6;
        }
LAB_004736e2:
        st::fn_00404F6B(this,iVar22,iVar11,iVar5);
        st::fn_004031DE(this,0);
        return 2;
      }
      iVar5 = (*local_c->vtable->vfunc_A8)(this->field_0018);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar11 = extraout_EDX;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar14 = extraout_var_04;
      if (iVar5 == 1) {
        this->field_0596 = 2;
        pSVar2 = local_c->vtable;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar4 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           CONCAT22((short)((uint)(local_18 * 0x19) >> 0x10),this->field_0045),
                           (short)(local_18 * 0xc9 + 100),(short)local_14 * 0xc9 + 100,
                           local_10 * 200 + 100);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        (*pSVar2->vfunc_B0)(this->field_0018,local_18,local_14,local_10,CONCAT22(extraout_var,uVar4)
                           );
        return 2;
      }
    }
    uVar4 = (undefined2)((uint)iVar11 >> 0x10);
    iVar11 = this->field_0596;
    if (iVar11 == 1) {
      this->field_0592 = this->field_0592 + 1;
      return 2;
    }
  }
  if (iVar11 == 2) {
    sVar16 = this->field_0588;
    sVar17 = this->field_058C;
    sVar18 = this->field_058A;
    if (((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar18 < 0)) ||
        ((g_worldGrid.sizeY <= sVar18 || (sVar17 < 0)))) || (g_worldGrid.sizeZ <= sVar17)) {
      local_c = nullptr;
    }
    else {
      local_c = (STFishC *)
                STGridAt3D(g_worldGrid, sVar16, sVar18, sVar17).objects[0];
    }
    if (((local_c == nullptr) ||
        ((AnonShape_005EFAE0_B406B78B *)local_c->field_0018 != this->field_058E)) &&
       (iVar11 = st::fn_006E62D0(g_playSystem_00802A38,this->field_058E,(int *)&local_c)
       , iVar11 == -4)) {
      return 0;
    }
    iVar11 = (*local_c->vtable->vfunc_A4)();
    if ((iVar11 == 1) || (iVar11 = (*local_c->vtable->vfunc_C0)(), iVar11 == 1)) {
      st::fn_004027CA(this);
      iVar11 = this->vfunc_D8();
      return -(uint)(iVar11 != 0);
    }
cf_common_exit_0047405D:
    iVar11 = this->vfunc_D8();
    return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
  }
  if (iVar11 == 3) {
    if (this->field_059A == 0) {
      sVar16 = this->field_0588;
      sVar17 = this->field_058C;
      sVar18 = this->field_058A;
      if ((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) ||
          ((sVar18 < 0 || ((g_worldGrid.sizeY <= sVar18 || (sVar17 < 0)))))) ||
         (g_worldGrid.sizeZ <= sVar17)) {
        pSVar6 = nullptr;
      }
      else {
        pSVar6 = STGridAt3D(g_worldGrid, sVar16, sVar18, sVar17).objects[0];
      }
      st::fn_006EA3E0
                (this->field_0211,this->field_01ED,*(int *)&pSVar6[0xd].field_0x19);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar11 = CONCAT22(extraout_var_05,this->field_058A * 0xc9) + 100;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar4 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(this->field_0045)),
                         this->field_0588 * 0xc9 + 100,(short)iVar11,
                         CONCAT22(extraout_var_00,this->field_058C * 200) + 100);
      this->field_059E = uVar4;
      this->field_059A = 1;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar4 = extraout_var_12;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar14 = extraout_var_06;
    }
    if (this->field_059A == 1) {
      uVar7 = st::fn_004030B2(this,this->field_059E);
      uVar7 = st::fn_004022FC(this,(short)uVar7);
      if (uVar7 == 0xffffffff) {
        local_EAX_2224 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2e7d,0,0,"%s",
                                "STBoatC::LoadObj LOADOBJ_LOAD sloi.regime2=1");
        if (local_EAX_2224 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar4 = extraout_var_13;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar14 = extraout_var_07;
      if (uVar7 == 0) {
        this->field_059A = 2;
        goto LAB_00473b6c;
      }
    }
    if (this->field_059A == 2) {
      st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0588 * 0xc9 + 100,this->field_058A * 0xc9 + 100,
                   this->field_058C * 200 + 100,this->field_0061);
      this->field_059A = 3;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar4 = extraout_var_14;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar14 = extraout_var_08;
    }
    if (this->field_059A == 3) {
      local_24 = st::fn_00402847((STJellyGunC *)this,&local_2c,&local_28);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar7 = STReplaceLowByte((uint32_t)(extraout_ECX), (uint8_t)(this->field_02BF));
      local_1c = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar4 = extraout_var_15;
      if (this->field_02BF != '\0') {
        local_20 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar8 = (undefined4 *)
                   st::fn_0040342C(local_40,(short)*local_20,*(ushort *)(local_20 + 1),
                                      this->field_006C);
          local_38 = *puVar8;
          local_34 = *(short *)(puVar8 + 1);
          if (DAT_0080732c == 1) {
            bVar24 = 0;
            sVar23 = 0;
            iVar22 = -1;
            uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
            sVar21 = 0;
            this->field_001C = uVar7;
            sVar20 = 0;
            sVar19 = 0;
            uVar9 = uVar7 * 0x41c64e6d + 0x3039;
            sVar18 = 0;
            this->field_001C = uVar9;
            local_30 = uVar9 * 0x41c64e6d + 0x3039;
            sVar17 = 0;
            this->field_001C = local_30;
            sVar16 = 0;
            lVar15 = st::fn_0072E288();
            iVar11 = (int)(short)lVar15 + (uVar7 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                     (int)local_34;
            iVar5 = ((uVar9 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_38);
            uVar7 = local_30;
          }
          else {
            uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
            bVar24 = 0;
            this->field_001C = uVar9;
            uVar13 = uVar9 * 0x41c64e6d + 0x3039;
            sVar23 = 0;
            this->field_001C = uVar13;
            uVar7 = uVar13 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar7;
            iVar22 = -1;
            sVar21 = 0;
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            iVar11 = (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_34;
            STPiece<2,2>(local_38) = (short)((uint)local_38 >> 0x10);
            iVar5 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_38);
          }
          st::fn_00401433
                    (g_traksClass_00802A7C,1,2,7,
                     (uVar7 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_38,
                     iVar5 + -3,iVar11,sVar16,sVar17,sVar18,sVar19,sVar20,sVar21,iVar22,sVar23,
                     bVar24);
          uVar7 = (uint)(byte)this->field_02BF;
          local_1c = local_1c + 1;
          local_20 = (undefined4 *)((int)local_20 + 6);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar4 = extraout_var_16;
        } while (local_1c < (int)uVar7);
      }
      uVar14 = (undefined2)(uVar7 >> 0x10);
      if (local_24 == -1) {
        local_EAX_3016 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2ea3,0,0,"%s",
                                "STBoatC::LoadObj LOADOBJ_LOAD sloi.regime2=3");
        if (local_EAX_3016 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (local_24 == 0) {
        this->field_059A = 4;
      }
    }
    if ((this->field_059A == 4) && (this->field_006E == 0x2f)) {
      sVar16 = this->field_0588;
      sVar17 = this->field_058C;
      sVar18 = this->field_058A;
      if (((sVar16 < 0) ||
          (((g_worldGrid.sizeX <= sVar16 || (sVar18 < 0)) || (g_worldGrid.sizeY <= sVar18)))) ||
         ((sVar17 < 0 || (g_worldGrid.sizeZ <= sVar17)))) {
        local_c = nullptr;
      }
      else {
        local_c = (STFishC *)
                  STGridAt3D(g_worldGrid, sVar16, sVar18, sVar17).objects[0];
      }
      if (((local_c != nullptr) &&
          ((AnonShape_005EFAE0_B406B78B *)local_c->field_0018 == this->field_058E)) &&
         ((iVar11 = (*local_c->vtable->vfunc_A4)(), iVar11 != 1 &&
          (iVar11 = (*local_c->vtable->vfunc_C0)(), iVar11 != 1)))) {
        local_c->vfunc_B4();
        this->field_07CA = this->field_058E;
        this->field_07CE = 0;
        st::fn_0040464C(this);
        st::fn_00404EC1(this->field_005B,this->field_005D,this->field_005F,0,
                           (AnonShape_00495FF0_59081BDD *)this);
        st::fn_00401325
                  (this->field_0588,this->field_058A,this->field_058C,0,
                   (RecoveredRecord_DumpClassC_00495EC0 *)this);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_004023A1((TLOEmbryoTy *)this,*(undefined **)((int)this->field_06CB + 0x3f));
        iVar11 = this->vfunc_D8();
        return -(uint)(iVar11 != 0);
      }
      st::fn_004027CA(this);
      local_30 = g_playSystem_00802A38->field_00E4;
      st::fn_00402126(this,CASE_3,&local_30);
switchD_004734db_caseD_2:
      return 2;
    }
    if (this->field_059A == 5) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar11 = CONCAT22(uVar4,this->field_005D * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar4 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(this->field_0045)),
                         this->field_005B * 0xc9 + 100,(short)iVar11,
                         CONCAT22(uVar14,this->field_005F * 200) + 100);
      this->field_059E = uVar4;
      this->field_059A = 6;
    }
    if (this->field_059A == 6) {
      uVar7 = st::fn_004030B2(this,this->field_059E);
      uVar7 = st::fn_004022FC(this,(short)uVar7);
      if (uVar7 == 0xffffffff) {
        local_EAX_3489 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2ed4,0,0,"%s",
                                "STBoatC::LoadObj LOADOBJ_LOAD sloi.regime2=6");
        if (local_EAX_3489 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (uVar7 == 0) {
        this->field_059A = 7;
        goto cf_common_exit_0047405D;
      }
    }
    if (this->field_059A == 7) {
      st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_005B * 0xc9 + 100,this->field_005D * 0xc9 + 100,
                   this->field_005F * 200 + 100,this->field_0061);
      this->field_059A = 8;
    }
    if (this->field_059A == 8) {
      local_24 = st::fn_00402847((STJellyGunC *)this,&local_28,&local_2c);
      local_1c = 0;
      if (this->field_02BF != '\0') {
        local_20 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar8 = (undefined4 *)
                   st::fn_0040342C(local_40,(short)*local_20,*(ushort *)(local_20 + 1),
                                      this->field_006C);
          local_38 = *puVar8;
          local_34 = *(short *)(puVar8 + 1);
          if (DAT_0080732c == 1) {
            bVar24 = 0;
            sVar23 = 0;
            uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
            iVar22 = -1;
            this->field_001C = uVar7;
            sVar21 = 0;
            sVar20 = 0;
            uVar9 = uVar7 * 0x41c64e6d + 0x3039;
            sVar19 = 0;
            this->field_001C = uVar9;
            sVar18 = 0;
            sVar17 = 0;
            local_30 = uVar9 * 0x41c64e6d + 0x3039;
            sVar16 = 0;
            this->field_001C = local_30;
            lVar15 = st::fn_0072E288();
            iVar11 = (int)(short)lVar15 + (uVar7 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                     (int)local_34;
            iVar5 = ((uVar9 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_38);
            uVar7 = local_30;
          }
          else {
            uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar9;
            uVar13 = uVar9 * 0x41c64e6d + 0x3039;
            bVar24 = 0;
            this->field_001C = uVar13;
            uVar7 = uVar13 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar7;
            sVar23 = 0;
            iVar22 = -1;
            sVar21 = 0;
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            iVar11 = (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_34;
            STPiece<2,2>(local_38) = (short)((uint)local_38 >> 0x10);
            iVar5 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_38);
          }
          st::fn_00401433
                    (g_traksClass_00802A7C,1,2,7,
                     (uVar7 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_38,
                     iVar5 + -3,iVar11,sVar16,sVar17,sVar18,sVar19,sVar20,sVar21,iVar22,sVar23,
                     bVar24);
          local_1c = local_1c + 1;
          local_20 = (undefined4 *)((int)local_20 + 6);
        } while (local_1c < (int)(uint)(byte)this->field_02BF);
      }
      if (local_24 == -1) {
        local_EAX_4152 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2efa,0,0,"%s",
                                "STBoatC::LoadObj LOADOBJ_LOAD sloi.regime2=8");
        if (local_EAX_4152 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (local_24 == 0) {
        st::fn_006EA2F0(this->field_0211,this->field_01ED);
        iVar11 = this->vfunc_D8();
        return -(uint)(iVar11 != 0);
      }
    }
    if (this->field_059A == 9) {
      iVar11 = this->vfunc_D8();
      return -(uint)(iVar11 != 0);
    }
  }
LAB_00473b6c:
  iVar11 = this->vfunc_D8();
  return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
}

// 00474810 STBoatC::BackLoadObj
#line 4 "decomp/ST.exe/functions/00474810/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackLoadObj */

int __thiscall st::fn_00474810(STBoatC *this,int *param_1)

{
  int local_EAX_32;
  int iVar3;
  int local_EAX_171;
  int iVar2;

  if (param_1 == nullptr) {
    st::fn_004027CA(this);
  }
  iVar3 = this->field_0596;
  if (iVar3 == 0) {
    local_EAX_32 = st::fn_00403DF0(this);
    return local_EAX_32;
  }
  if (iVar3 == 1) {
    iVar3 = this->vfunc_D8();
    return -(uint)(iVar3 != 0);
  }
  if (iVar3 == 2) {
    st::fn_006E62D0(g_playSystem_00802A38,this->field_058E,(int *)&param_1);
    if ((param_1 != nullptr) && ((AnonShape_005EFAE0_B406B78B *)param_1[6] == this->field_058E))
    {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 0xac))(this->field_0018);
      iVar3 = this->vfunc_D8();
      return -(uint)(iVar3 != 0);
    }
    local_EAX_171 =
         st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2f2d,0,0,"%s",
                            "STBoatC::BackLoadObj LOADOBJ_WAITOBJ");
    if (local_EAX_171 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return -1;
  }
  if (iVar3 != 3) {
    return 2;
  }
  iVar3 = this->field_059A;
  if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 2)) {
    if ((iVar3 != 3) && (iVar3 != 4)) {
      iVar2 = st::fn_00404E1C(this,(AnonShape_005EFAE0_B406B78B *)0x2);
      return iVar2;
    }
    this->field_059A = 5;
    iVar3 = this->vfunc_D8();
    return (-(uint)(iVar3 != 0) & 0xfffffffd) + 2;
  }
  st::fn_006EA2F0(this->field_0211,this->field_01ED);
  iVar3 = this->vfunc_D8();
  return -(uint)(iVar3 != 0);
}

// 004749C0 STBoatC::WaitLoad
#line 4 "decomp/ST.exe/functions/004749C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::WaitLoad

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004749C0 -> 006E62D0 @ 00474A98 | 004749C0 -> 006E62D0 @ 00474FD8 */

int __thiscall st::fn_004749C0(STBoatC *this,STBoatC *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined2 uVar5;
  int iVar10;
  int local_EAX_164;
  int local_EAX_248;
  uint uVar6;
  int local_EAX_758;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int local_EAX_1388;
  int local_EAX_1495;
  int local_EAX_1592;
  int local_EAX_1718;
  int local_EAX_2278;
  int iVar11;
  STBoatC *pSVar12;
  int iVar13;
  longlong lVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  int iVar21;
  short sVar22;
  byte bVar23;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == nullptr) || (pSVar12 = this, param_1 == (STBoatC *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    iVar11 = 0;
    this->field_02C4 = 0;
    memset(&this->field_05A0, 0, 0x2a); /* compiler bulk-zero initialization */
    this->field_05A0 = this->field_03C8;
    this->field_05C0 = 0;
    pSVar12 = nullptr;
  }
  if (this->field_05C0 != 0) {
    if (this->field_05C0 != 1) {
LAB_00475068:
      if (this->field_05C0 == 2) {
        local_EAX_1718 = st::fn_00402658(this,(int *)0x2);
        if (local_EAX_1718 == 0) {
          this->field_05C0 = 0;
        }
        return 2;
      }
      if (this->field_05C0 != 3) {
        local_EAX_2278 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3007,0,0,"%s",
                                "STBoatC::WaitLoad unknown swli.regime");
        if (local_EAX_2278 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if ((this->field_05A6 == nullptr) &&
         (iVar11 = st::fn_006E62D0
                             (g_playSystem_00802A38,this->field_05A2,(int *)&this->field_05A6),
         iVar11 == -4)) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2fea
                  );
      }
      if ((*(int *)(this->field_05A6 + 999) != 0) && (this->field_0716 < this->field_0712)) {
        uVar3 = (ulonglong)g_playSystem_00802A38->field_00E4 % 0x19;
        if ((int)uVar3 == 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar11 = *(int *)((int)this->field_06CB + 0x2c) + -1;
          if ((int)((uVar3 << 0x20 | (ulonglong)g_playSystem_00802A38->field_00E4) % 100) == 0) {
            this->vfunc_90(3,0x363);
            st::fn_00402DD8(this->field_01ED,1,-100,-100,-100,0,0);
          }
          iVar21 = this->field_0712;
          iVar8 = (iVar21 * 0x19) / (int)(&DAT_007e04a0)[iVar11];
          if (iVar21 < this->field_0716 + iVar8) {
            iVar8 = iVar21 - this->field_0716;
          }
          local_8 = (undefined4 *)((*(int *)(&DAT_0085442c + iVar11 * 4) * iVar8) / iVar21);
          iVar21 = (*(int *)(&DAT_007e07a0 + iVar11 * 4) * iVar8) / iVar21;
          st::fn_00405556(*(char *)&this->field_0024,4,this->field_0018,(int)local_8,0,iVar21,0);
          iVar11 = st::fn_00405DFD(*(char *)&this->field_0024,4);
          if (((int)local_8 <= iVar11) &&
             (iVar11 = st::fn_004023AB(*(char *)&this->field_0024,4), iVar21 <= iVar11)) {
            st::fn_00402AF9(*(char *)&this->field_0024,4,this->field_0018,(int)local_8);
            st::fn_00402793(*(char *)&this->field_0024,4,this->field_0018,iVar21);
            this->field_0716 = this->field_0716 + iVar8;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (this->field_0024 == (uint)*(byte *)(this->field_0010 + 0x112d)) {
              st::fn_00404B8D((char)this->field_0024);
            }
          }
          st::fn_004051EB(*(char *)&this->field_0024,4,(int *)this->field_0018);
        }
      }
      local_44 = this->field_0008;
      local_3c = 0x129;
      local_40 = 2;
      st::fn_006E5810((SystemClassTy *)g_playSystem_00802A38,local_4c);
switchD_00474a47_caseD_2:
      return 2;
    }
    if (this->field_05C4 == 0) {
      iVar10 = st::fn_004031DE(this,2);
      switch(iVar10) {
      case 0:
      case 1:
        st::fn_00403855(this);
        iVar11 = this->field_05BC;
        this->field_05BC = iVar11 + 1;
        if ((&this->field_05B4)[iVar11] != -1) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)st::fn_00405CF9(*(char *)&this->field_0024,this->field_0030);
          st::fn_00404F6B(this,(int)this->field_005B,(int)this->field_005D,
                       (int)(short)(&this->field_05B2)[this->field_05BC]);
          st::fn_004031DE(this,0);
          return 2;
        }
        if ((this->field_0041 == (short)(this->field_05AA * 0xc9 + 100)) &&
           (this->field_0043 == (short)(*(short *)&this->field_0x5ac * 0xc9 + 100))) {
          if (this->field_0045 != (short)(*(short *)&this->field_0x5ae * 200 + 100)) {
            this->field_05C4 = 3;
            return 2;
          }
          this->field_05C4 = 6 - (uint)(this->field_006C != this->field_05B0);
          return 2;
        }
        this->field_05C4 = 1;
        return 2;
      case 2:
        goto switchD_00474a47_caseD_2;
      case 3:
        this->field_05C0 = 0;
        iVar11 = st::fn_006E62D0(g_playSystem_00802A38,this->field_05A2,(int *)&param_1);
        if (iVar11 != -4) {
          st::fn_004054E3(param_1,this->field_0018);
          return 2;
        }
        local_EAX_248 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2f68,0,0,"%s",
                                "STBoatC::WaitLoad WAITLOAD_PREPARE ptr=NULL");
        if (local_EAX_248 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      case -1:
        local_EAX_164 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2f61,0,0,"%s",
                                "STBoatC::WaitLoad WAITLOAD_PREPARE ret=STATE_ERROR");
        if (local_EAX_164 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      default:
        return 2;
      }
    }
    if (this->field_05C4 == 1) {
      iVar11 = STReplaceLowWord((uint32_t)(pSVar12), (uint16_t)(*(short *)&this->field_0x5ac * 0xc9)) + 100;
      uVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(this->field_0045)),
                         this->field_05AA * 0xc9 + 100,(short)iVar11,
                         (ushort)(*(short *)&this->field_0x5ae * 200) + 100);
      this->field_05C8 = uVar5;
      this->field_05C4 = 2;
    }
    if (this->field_05C4 == 2) {
      uVar6 = st::fn_004030B2(this,this->field_05C8);
      uVar6 = st::fn_004022FC(this,(short)uVar6);
      if (uVar6 != 0xffffffff) {
        if (uVar6 == 0) {
          this->field_05C4 = 3;
        }
        iVar11 = this->vfunc_D8();
        return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
      }
      local_EAX_758 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2f8f,0,0,"%s",
                              "STBoatC::WaitLoad swli.regime2=2");
      if (local_EAX_758 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (this->field_05C4 == 3) {
      st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_05AA * 0xc9 + 100,*(short *)&this->field_0x5ac * 0xc9 + 100,
                   *(short *)&this->field_0x5ae * 200 + 100,this->field_0061);
      this->field_05C4 = 4;
    }
    iVar11 = this->field_05C4;
    if (iVar11 == 4) {
      local_1c = st::fn_00402847((STJellyGunC *)this,&local_18,&local_14);
      uVar6 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar6;
      iVar11 = (uVar6 >> 0x10) % 7 - 3;
      uVar6 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar6;
      uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar1;
      local_c = (uVar1 >> 0x10) % 7 - 3;
      if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
         (local_10 = 0, this->field_02BF != '\0')) {
        local_8 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar7 = (undefined4 *)
                   st::fn_0040342C(local_2c,(short)*local_8,*(ushort *)(local_8 + 1),
                                      this->field_006C);
          uVar2 = *puVar7;
          bVar23 = 0;
          sVar22 = 0;
          iVar21 = -1;
          local_20 = *(short *)(puVar7 + 1);
          sVar20 = 0;
          sVar19 = 0;
          sVar18 = 0;
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          local_24 = uVar2;
          if (DAT_0080732c == 1) {
            sVar15 = 0;
            sVar16 = 0;
            sVar17 = 0;
            sVar18 = 0;
            sVar19 = 0;
            sVar20 = 0;
            sVar22 = 0;
            bVar23 = 0;
            lVar14 = st::fn_0072E288();
            iVar13 = (int)local_20 + this->field_0045 + local_c + (int)(short)lVar14;
            iVar8 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            iVar9 = (int)(short)local_24 + iVar11 + this->field_0041;
          }
          else {
            iVar13 = (int)local_20 + local_c + this->field_0045;
            STPiece<2,2>(local_24) = (short)((uint)uVar2 >> 0x10);
            iVar8 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            STPiece<0,2>(local_24) = (short)uVar2;
            iVar9 = (int)(short)local_24 + iVar11 + this->field_0041;
          }
          st::fn_00401433
                    (g_traksClass_00802A7C,1,2,7,iVar9,iVar8 + ((uVar6 >> 0x10) % 7 - 3),iVar13,
                     sVar15,sVar16,sVar17,sVar18,sVar19,sVar20,iVar21,sVar22,bVar23);
          local_8 = (undefined4 *)((int)local_8 + 6);
          local_10 = local_10 + 1;
        } while (local_10 < (int)(uint)(byte)this->field_02BF);
      }
      if (local_1c == -1) {
        local_EAX_1388 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2fb6,0,0,"%s",
                                "STBoatC::WaitLoad swli.regime2=4");
        if (local_EAX_1388 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (local_1c == 0) {
        this->field_05C4 = 6 - (uint)(this->field_006C != this->field_05B0);
      }
      iVar11 = this->vfunc_D8();
      return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
    }
    if (iVar11 == 5) {
      uVar6 = st::fn_004030B2(this,this->field_05B0);
      uVar6 = st::fn_004022FC(this,(short)uVar6);
      if (uVar6 == 0xffffffff) {
        local_EAX_1495 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2fc5,0,0,"%s",
                                "STBoatC::WaitLoad swli.regime2=5");
        if (local_EAX_1495 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (uVar6 == 0) {
        this->field_05C4 = 6;
      }
    }
    else {
      if (iVar11 == 6) {
        if (this->field_006E == 0x2f) {
          this->field_0076 = 0;
          iVar11 = st::fn_006E62D0
                             (g_playSystem_00802A38,this->field_05A2,(int *)&param_1);
          if (iVar11 == -4) {
            local_EAX_1592 =
                 st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x2fd1,0,0,"%s"
                                    ,"STBoatC::WaitLoad WAITLOAD_PREPARE ptr=NULL 2");
            if (local_EAX_1592 == 0) {
              return -1;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          st::fn_0040164A(param_1,(STFishC *)this->field_0018);
          this->field_05C4 = 7;
        }
        iVar11 = this->vfunc_D8();
        return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
      }
      if (iVar11 != 7) goto LAB_00475068;
    }
  }
  iVar11 = this->vfunc_D8();
  return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
}

// 00475530 STBoatC::BackWaitLoad
#line 4 "decomp/ST.exe/functions/00475530/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackWaitLoad */

int __thiscall st::fn_00475530(STBoatC *this,int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar5;
  int local_EAX_72;
  uint uVar6;
  undefined4 *puVar7;
  int local_EAX_624;
  int local_EAX_658;
  int iVar4;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  short sVar19;
  byte bVar20;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  iVar5 = this->field_05C0;
  if (iVar5 == 0) {
LAB_00475545:
    iVar5 = this->vfunc_D8();
    return -(uint)(iVar5 != 0);
  }
  if ((iVar5 == 1) || (iVar5 == 2)) {
    iVar18 = this->field_05C4;
    if (iVar18 == 0) {
      local_EAX_72 = st::fn_00403DF0(this);
      return local_EAX_72;
    }
    if (((((iVar18 == 1) || (iVar18 == 2)) || (iVar18 == 3)) || ((iVar18 == 5 || (iVar18 == 6)))) ||
       (iVar18 == 7)) {
      this->field_0076 = 1;
      iVar5 = this->vfunc_D8();
      return -(uint)(iVar5 != 0);
    }
    if (iVar18 == 4) {
      local_1c = st::fn_00402847((STJellyGunC *)this,&local_18,&local_14);
      uVar6 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar6;
      iVar5 = (uVar6 >> 0x10) % 7 - 3;
      uVar6 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar6;
      uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar1;
      local_c = (uVar1 >> 0x10) % 7 - 3;
      if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
         (local_10 = 0, this->field_02BF != '\0')) {
        local_8 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar7 = (undefined4 *)
                   st::fn_0040342C(local_2c,(short)*local_8,*(ushort *)(local_8 + 1),
                                      this->field_006C);
          uVar2 = *puVar7;
          bVar20 = 0;
          sVar19 = 0;
          iVar18 = -1;
          local_20 = *(short *)(puVar7 + 1);
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          sVar14 = 0;
          sVar13 = 0;
          sVar12 = 0;
          local_24 = uVar2;
          if (DAT_0080732c == 1) {
            sVar12 = 0;
            sVar13 = 0;
            sVar14 = 0;
            sVar15 = 0;
            sVar16 = 0;
            sVar17 = 0;
            sVar19 = 0;
            bVar20 = 0;
            lVar11 = st::fn_0072E288();
            iVar8 = (int)local_20 + this->field_0045 + local_c + (int)(short)lVar11;
            iVar9 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            iVar10 = (int)(short)local_24 + iVar5 + this->field_0041;
          }
          else {
            iVar8 = (int)local_20 + local_c + this->field_0045;
            STPiece<2,2>(local_24) = (short)((uint)uVar2 >> 0x10);
            iVar9 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            STPiece<0,2>(local_24) = (short)uVar2;
            iVar10 = (int)(short)local_24 + iVar5 + this->field_0041;
          }
          st::fn_00401433
                    (g_traksClass_00802A7C,1,2,7,iVar10,iVar9 + ((uVar6 >> 0x10) % 7 - 3),iVar8,
                     sVar12,sVar13,sVar14,sVar15,sVar16,sVar17,iVar18,sVar19,bVar20);
          local_8 = (undefined4 *)((int)local_8 + 6);
          local_10 = local_10 + 1;
        } while (local_10 < (int)(uint)(byte)this->field_02BF);
      }
      if (local_1c == -1) {
        local_EAX_624 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x303e,0,0,"%s",
                                "STBoatC::BackWaitLoad swli.regime2=4");
        if (local_EAX_624 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (local_1c != 0) {
        iVar5 = this->vfunc_D8();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      goto LAB_00475545;
    }
  }
  if (iVar5 == 3) {
    local_EAX_658 = st::fn_00404E08(this,(STBoatC *)0x2);
    return local_EAX_658;
  }
  iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3052,0,0,"%s",
                             "STBoatC::BackWaitLoad swli.regime==WAITLOAD_LOADED ??");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return -1;
}

// 004758E0 STBoatC::UnLoadObj
#line 4 "decomp/ST.exe/functions/004758E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::UnLoadObj

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004803D0 -> 004758E0 @ 0048053F */

int __thiscall st::fn_004758E0(STBoatC *this,int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar4;
  int iVar6;
  int local_EAX_246;
  uint uVar7;
  int local_EAX_712;
  byte *puVar8;
  uint uVar9;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar10;
  uint uVar11;
  byte *puVar12;
  longlong lVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  int iVar19;
  short sVar20;
  byte bVar21;
  undefined4 local_30 [2];
  undefined4 local_28;
  short local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  AnonShape_004758E0_51E65DA0 *local_c;
  undefined1 local_5;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    if (this->field_07CA != nullptr) {
      sVar4 = this->field_03CE;
      sVar14 = this->field_03D0;
      *(short *)&this->field_0x5ca = sVar4;
      *(short *)&this->field_0x5cc = sVar14;
      *(undefined2 *)&this->field_0x5ce = this->field_03D2;
      if (((sVar4 == -1) && (sVar14 == -1)) && (this->field_03D2 == -1)) {
        this->field_05D6 = 0;
        return 2;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = st::fn_00404908(this,sVar4,sVar14,this->field_03D2,this->field_005B,this->field_005D,
                           (int *)CONCAT22((short)((uint)&this->field_0x5d0 >> 0x10),
                                           this->field_005F),0,(short *)&this->field_0x5d0,
                           (short *)&this->field_0x5d2,(short *)&this->field_0x5d4);
      if (iVar6 != 0) {
        this->field_05D6 = 5;
        st::fn_00404F6B(this,(int)*(short *)&this->field_0x5d0,(int)*(short *)&this->field_0x5d2,
                     (int)*(short *)&this->field_0x5d4);
        st::fn_00403B34(this,0);
        return 2;
      }
    }
    return 0;
  }
  iVar6 = this->field_05D6;
  if (iVar6 == 5) {
    iVar6 = st::fn_00403B34(this,2);
    if (iVar6 == -1) {
      local_EAX_246 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3079,0,0,"%s",
                              "STBoatC::UnLoadObj, 5");
      if (local_EAX_246 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return -1;
    }
    if (iVar6 == 0) {
      this->field_05D6 = 0;
    }
    else if (iVar6 == 3) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = st::fn_00404908(this,*(short *)&this->field_0x5ca,*(short *)&this->field_0x5cc,
                           *(short *)&this->field_0x5ce,this->field_005B,this->field_005D,
                           (int *)CONCAT22((short)((uint)&this->field_0x5d0 >> 0x10),
                                           this->field_005F),0,(short *)&this->field_0x5d0,
                           (short *)&this->field_0x5d2,(short *)&this->field_0x5d4);
      if (iVar6 == 0) {
        return 0;
      }
      st::fn_00404F6B(this,(int)*(short *)&this->field_0x5d0,(int)*(short *)&this->field_0x5d2,
                   (int)*(short *)&this->field_0x5d4);
      st::fn_00403B34(this,0);
      return 2;
    }
    return 2;
  }
  if (iVar6 == 0) {
    iVar6 = st::fn_0040406B(this,this->field_005B,this->field_005D,this->field_005F,
                               (undefined2 *)&this->field_0x5d0,(undefined2 *)&this->field_0x5d2,
                               (short *)&this->field_0x5d4);
    if (iVar6 == 0) {
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar10 = CONCAT22(extraout_var,*(short *)&this->field_0x5d2 * 0xc9) + 100;
    sVar4 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       STReplaceLowWord((uint32_t)(iVar10), (uint16_t)(this->field_0045)),
                       *(short *)&this->field_0x5d0 * 0xc9 + 100,(short)iVar10,
                       STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(*(short *)&this->field_0x5d4 * 200)) +
                       100);
    this->field_05DA = sVar4;
    uVar7 = st::fn_004030B2(this,sVar4);
    uVar7 = st::fn_004022FC(this,(short)uVar7);
    if (uVar7 != 0xffffffff) {
      if (uVar7 == 0) {
        this->field_05D6 = 1;
        st::fn_006E62D0(g_playSystem_00802A38,this->field_07CA,(int *)&local_c);
        uVar1 = local_c->field_0062;
        uVar2 = local_c->field_0061;
        local_5 = local_c->field_0063;
        puVar8 = (byte *)&this->field_0034;
        puVar12 = (byte *)&local_c->field_0x34;
        memmove(puVar12, puVar8, 0x5f); /* compiler REP MOVS byte copy */
        local_c->field_0061 = uVar2;
        local_c->field_0062 = uVar1;
        local_c->field_0063 = local_5;
        st::fn_0040464C(this);
        st::fn_00404EC1(this->field_005B,this->field_005D,this->field_005F,0,
                           (AnonShape_00495FF0_59081BDD *)this);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)local_c + 0xb8))();
        st::fn_00401325
                  (*(short *)&this->field_0x5d0,*(short *)&this->field_0x5d2,
                   *(short *)&this->field_0x5d4,0,(RecoveredRecord_DumpClassC_00495EC0 *)this);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_004023A1((TLOEmbryoTy *)this,*(undefined **)((int)this->field_06CB + 0x3f));
        this->field_07CA = nullptr;
        this->field_07C6 = 0;
      }
      iVar6 = this->vfunc_D8();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    local_EAX_712 =
         st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x309b,0,0,"%s",
                            "STBoatC::UnLoadObj RotateCheat");
    if (local_EAX_712 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return -1;
  }
  if (iVar6 == 1) {
    st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                 *(short *)&this->field_0x5d0 * 0xc9 + 100,*(short *)&this->field_0x5d2 * 0xc9 + 100
                 ,*(short *)&this->field_0x5d4 * 200 + 100,this->field_0061);
    this->field_05D6 = 2;
  }
  if (this->field_05D6 == 2) {
    local_20 = st::fn_00402847((STJellyGunC *)this,&local_18,&local_14);
    local_10 = 0;
    if (this->field_02BF != '\0') {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int)&this->field_0x2b3;
      do {
        puVar8 = (byte *)
                 st::fn_0040342C(local_30,(short)*(undefined4 *)param_1,*(ushort *)(param_1 + 4),
                                    this->field_006C);
        local_28 = *puVar8;
        local_24 = *(short *)(puVar8 + 1);
        if (DAT_0080732c == 1) {
          bVar21 = 0;
          sVar20 = 0;
          iVar19 = -1;
          uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
          sVar18 = 0;
          this->field_001C = uVar7;
          sVar17 = 0;
          sVar16 = 0;
          uVar9 = uVar7 * 0x41c64e6d + 0x3039;
          sVar15 = 0;
          this->field_001C = uVar9;
          local_1c = uVar9 * 0x41c64e6d + 0x3039;
          sVar14 = 0;
          this->field_001C = local_1c;
          sVar4 = 0;
          lVar13 = st::fn_0072E288();
          iVar6 = (int)(short)lVar13 + (uVar7 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                  (int)local_24;
          iVar10 = ((uVar9 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_28);
          uVar7 = local_1c;
        }
        else {
          uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
          bVar21 = 0;
          this->field_001C = uVar9;
          uVar11 = uVar9 * 0x41c64e6d + 0x3039;
          sVar20 = 0;
          this->field_001C = uVar11;
          uVar7 = uVar11 * 0x41c64e6d + 0x3039;
          this->field_001C = uVar7;
          iVar19 = -1;
          sVar18 = 0;
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          sVar14 = 0;
          sVar4 = 0;
          iVar6 = (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_24;
          STPiece<2,2>(local_28) = (short)((uint)local_28 >> 0x10);
          iVar10 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_28);
        }
        st::fn_00401433
                  (g_traksClass_00802A7C,1,2,7,
                   (uVar7 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_28,
                   iVar10 + -3,iVar6,sVar4,sVar14,sVar15,sVar16,sVar17,sVar18,iVar19,sVar20,bVar21);
        local_10 = local_10 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 6;
      } while (local_10 < (int)(uint)(byte)this->field_02BF);
    }
    if (local_20 == -1) {
      iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x30d2,0,0,"%s",
                                 "STBoatC::UnLoadObj LLMoveStep");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return -1;
    }
    if (local_20 == 0) {
      st::fn_006EA2F0(this->field_0211,this->field_01ED);
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
  }
  iVar6 = this->vfunc_D8();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

// 00476120 STBoatC::BackUnLoadObj
#line 4 "decomp/ST.exe/functions/00476120/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackUnLoadObj */

int __thiscall st::fn_00476120(STBoatC *this,int *param_1)

{
  int local_EAX_21;
  int iVar3;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_retaddr;

  iVar3 = this->field_05D6;
  if ((iVar3 == 0) || (iVar3 == 1)) {
    iVar3 = this->vfunc_D8();
    return -(uint)(iVar3 != 0);
  }
  if (iVar3 == 2) {
    local_EAX_21 = st::fn_004011AE(this,2);
    return local_EAX_21;
  }
  if (iVar3 == 5) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar3 = this->StopMove(unaff_retaddr);
    return iVar3;
  }
  iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x30fa,0,0,"%s",
                             "STBoatC::BackUnLoadObj");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 2;
}

// 004761B0 STBoatC::SetMine
#line 4 "decomp/ST.exe/functions/004761B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::SetMine
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   SetMine(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=00476220 RET 0x4 | 00476236 RET 0x4 | 00476405 RET 0x4 | 00476560 RET 0x4 |
   0047659B RET 0x4 | 00476645 RET 0x4 | 0047666D RET 0x4 | 004767DD RET 0x4 | 0047681F RET 0x4 */

int __thiscall st::fn_004761B0(STBoatC *this,int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int local_EAX_44;
  int local_EAX_90;
  STBoatCVTable *pSVar5;
  int iVar6;
  int iVar5;
  undefined2 arg_2;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == nullptr) || (param_1 == (int *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    iVar6 = 0;
    this->field_02C4 = 0;
    if (this->field_07BE < 1) {
      return 0;
    }
    sVar1 = this->field_03D8;
    sVar2 = this->field_03DA;
    sVar3 = this->field_03DC;
    *(short *)&this->field_0x5e2 = sVar1;
    *(short *)&this->field_0x5dc = sVar1;
    *(short *)&this->field_0x5e4 = sVar2;
    *(short *)&this->field_0x5de = sVar2;
    *(short *)&this->field_0x5e6 = sVar3;
    *(short *)&this->field_0x5e0 = sVar3;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
         (((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar3 ||
           (STGridAt3D(g_pathingGrid, sVar1, sVar2, sVar3) != 0)))))) ||
        (((-1 < sVar1 && (sVar1 < g_worldGrid.sizeX)) &&
         ((-1 < sVar2 &&
          (((((sVar2 < g_worldGrid.sizeY && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeZ)) &&
            (STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[1] != nullptr)) &&
           ((iVar6 = STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[1]->value_20,
            iVar6 == 0x5a || (iVar6 == 0x1ae)))))))))) &&
       (iVar6 = st::fn_00404908(this,sVar1,sVar2,sVar3,this->field_0047,this->field_0049,
                             (int *)CONCAT22((short)((uint)&this->field_0x5e2 >> 0x10),
                                             this->field_004B),1,(short *)&this->field_0x5e2,
                             (short *)&this->field_0x5e4,(short *)&this->field_0x5e6), iVar6 == 0))
    {
      return 0;
    }
    this->field_05E8 = 0;
    st::fn_00404F6B(this,(int)*(short *)&this->field_0x5e2,(int)*(short *)&this->field_0x5e4,
                 (int)*(short *)&this->field_0x5e6);
    iVar5 = st::fn_004031DE(this,0);
    return (-(uint)(iVar5 != -1) & 3) - 1;
  }
  if (this->field_05E8 == 0) {
    local_EAX_44 = st::fn_004031DE(this,2);
    switch(local_EAX_44) {
    case 0:
      this->field_05E8 = 1;
      return 2;
    case 1:
      sVar1 = *(short *)&this->field_0x5e2;
      sVar2 = *(short *)&this->field_0x5e4;
      sVar3 = *(short *)&this->field_0x5e6;
      *(short *)&this->field_0x5dc = sVar1;
      *(short *)&this->field_0x5de = sVar2;
      *(short *)&this->field_0x5e0 = sVar3;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
             ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))) || (g_worldGrid.sizeZ <= sVar3)) ||
           (STGridAt3D(g_pathingGrid, sVar1, sVar2, sVar3) != 0)) ||
          ((((-1 < sVar1 && (sVar1 < g_worldGrid.sizeX)) &&
            ((-1 < sVar2 &&
             (((sVar2 < g_worldGrid.sizeY && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeZ)))))) &&
           ((STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[1] != nullptr &&
            ((iVar6 = STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[1]->value_20,
             iVar6 == 0x5a || (iVar6 == 0x1ae)))))))) &&
         (iVar6 = st::fn_00404908(this,sVar1,sVar2,sVar3,this->field_0047,this->field_0049,
                               (int *)CONCAT22((short)((uint)&this->field_0x5e2 >> 0x10),
                                               this->field_004B),1,(short *)&this->field_0x5e2,
                               (short *)&this->field_0x5e4,(short *)&this->field_0x5e6), iVar6 == 0)
         ) {
        return 0;
      }
      st::fn_00403855(this);
      break;
    default:
      goto switchD_004761eb_caseD_3;
    case 3:
      sVar1 = *(short *)&this->field_0x5e2;
      sVar2 = *(short *)&this->field_0x5e4;
      sVar3 = *(short *)&this->field_0x5e6;
      *(short *)&this->field_0x5dc = sVar1;
      *(short *)&this->field_0x5de = sVar2;
      *(short *)&this->field_0x5e0 = sVar3;
      if (((((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) &&
             ((-1 < sVar2 &&
              (((sVar2 < g_worldGrid.sizeY && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeZ)))))) &&
            (STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[0] != nullptr)) ||
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           ((sVar1 < 0 || (g_worldGrid.sizeX <= sVar1)))) ||
          ((((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))) ||
            ((g_worldGrid.sizeZ <= sVar3 ||
             (STGridAt3D(g_pathingGrid, sVar1, sVar2, sVar3) != 0)))) ||
           (((((-1 < sVar1 && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
             (((sVar2 < g_worldGrid.sizeY && (-1 < sVar3)) &&
              ((sVar3 < g_worldGrid.sizeZ &&
               (STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[1] != nullptr)))))) &&
            ((iVar6 = STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[1]->value_20,
             iVar6 == 0x5a || (iVar6 == 0x1ae)))))))) &&
         (iVar6 = st::fn_00404908(this,sVar1,sVar2,sVar3,this->field_0047,this->field_0049,
                               (int *)CONCAT22((short)((uint)&this->field_0x5e2 >> 0x10),
                                               this->field_004B),1,(short *)&this->field_0x5e2,
                               (short *)&this->field_0x5e4,(short *)&this->field_0x5e6), iVar6 == 0)
         ) {
        return 0;
      }
      break;
    case -1:
      local_EAX_90 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x311d,0,0,
                                        "%s","STBoatC::SetMine, SETMINE_MOVE error");
      if (local_EAX_90 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return 0xffff;
    }
    st::fn_00404F6B(this,(int)*(short *)&this->field_0x5e2,(int)*(short *)&this->field_0x5e4,
                 (int)*(short *)&this->field_0x5e6);
    st::fn_004031DE(this,0);
switchD_004761eb_caseD_3:
    return 2;
  }
  if (this->field_05E8 != 1) goto LAB_00476633;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar6 = *(int *)((int)this->field_06CB + 0x2c);
  if (iVar6 == 5) {
    pSVar5 = this->vtable;
    arg_2 = 0xe6;
LAB_004765df:
    (*pSVar5->vfunc_90)(this,3,arg_2);
  }
  else if (iVar6 == 0x11) {
    this->vfunc_90(3,0x14a);
  }
  else if (iVar6 == 0x21) {
    pSVar5 = this->vtable;
    arg_2 = 0x1cb;
    goto LAB_004765df;
  }
  st::fn_0040105A(this->field_07B6,this->field_0024,this->field_0018,
                     (uint)(ushort)this->field_0032,(int)this->field_0041,(int)this->field_0043,
                     this->field_0045 + -10,(int)this->field_06CB[5],nullptr,0xffffffff);
  this->field_07BE = this->field_07BE + -1;
LAB_00476633:
  iVar6 = this->vfunc_D8();
  return -(uint)(iVar6 != 0);
}

// 00476A10 STBoatC::DCBomb
#line 4 "decomp/ST.exe/functions/00476A10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::DCBomb */

int __thiscall st::fn_00476A10(STBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar6;
  int iVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_ESI;

  if ((param_1 != 0) && (param_1 != 1)) {
    if (this->field_05F8 != 0) {
      if (this->field_05F8 == 1) {
        if (0xe < this->field_07BE) {
          st::fn_00405970(this->field_0024,*(short *)&this->field_0x5ec * 0xc9 + 100,
                             *(short *)&this->field_0x5ee * 0xc9 + 100,100,
                             (uint)(ushort)this->field_0032,0xf);
          this->field_07BE = this->field_07BE + -0xf;
          iVar6 = this->vfunc_D8();
          return -(uint)(iVar6 != 0);
        }
        st::fn_00405970(this->field_0024,*(short *)&this->field_0x5ec * 0xc9 + 100,
                           *(short *)&this->field_0x5ee * 0xc9 + 100,100,
                           (uint)(ushort)this->field_0032,this->field_07BE);
        this->field_07BE = 0;
      }
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
    iVar6 = st::fn_00403B34(this,2);
    if (iVar6 == -1) {
      iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3184,0,0,"%s",
                                 "STBoatC::DCBomb, DCBOMB_MOVE error");
      if (iVar5 == 0) {
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (iVar6 == 0) {
      this->field_05F8 = 1;
    }
    else if (iVar6 == 3) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar6 = st::fn_004019F1(this,unaff_ESI);
      if (iVar6 != 1) {
        return 0;
      }
      sVar1 = *(short *)&this->field_0x5f6;
      sVar2 = *(short *)&this->field_0x5f4;
      sVar3 = *(short *)&this->field_0x5f2;
      goto LAB_00476c07;
    }
    return 2;
  }
  memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
  this->field_02C4 = 0;
  if (0 < this->field_07BE) {
    *(undefined2 *)&this->field_0x5ec = this->field_03E2;
    *(undefined2 *)&this->field_0x5ee = this->field_03E4;
    *(undefined2 *)&this->field_0x5f0 = this->field_03E6;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar6 = st::fn_004019F1(this,unaff_ESI);
    if (iVar6 == 1) {
      sVar1 = *(short *)&this->field_0x5f6;
      sVar2 = *(short *)&this->field_0x5f4;
      sVar3 = *(short *)&this->field_0x5f2;
      this->field_05F8 = 0;
LAB_00476c07:
      st::fn_00404F6B(this,(int)sVar3,(int)sVar2,(int)sVar1);
      iVar6 = st::fn_00403B34(this,0);
      return (-(uint)(iVar6 != -1) & 3) - 1;
    }
  }
  return 0;
}

// 00476CE0 STBoatC::Capture
#line 4 "decomp/ST.exe/functions/00476CE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Capture */

int __thiscall st::fn_00476CE0(STBoatC *this,int param_1)

{
  STBoatC_field_0611State SVar1;
  STWorldObject *pSVar2;
  short sVar4;
  int local_EAX_51;
  int local_EAX_97;
  int local_EAX_229;
  undefined2 uVar5;
  int iVar7;
  STGameObjC *pSVar8;
  uint uVar9;
  int local_EAX_1129;
  undefined4 *puVar10;
  uint uVar11;
  STBoatCVTable *pSVar12;
  int local_EAX_2033;
  int uVar8;
  int local_EAX_2791;
  int local_EAX_3531;
  int local_EAX_3737;
  int iVar6;
  int iVar13;
  uint uVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  undefined4 uVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  int iVar16;
  short sVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  byte bVar24;
  STMessage local_64;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_24 [2];
  undefined4 local_1c;
  short local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    this->field_05FD = *(undefined2 *)&this->field_0x3ed;
    this->field_05FC = this->field_0x3ec;
    this->field_05FF = *(undefined4 *)&this->field_0x3ef;
    iVar7 = st::fn_004043A4(this);
    if (iVar7 != 1) {
      return 0;
    }
    iVar13 = (int)this->field_0607;
    iVar16 = (int)this->field_0605;
    iVar7 = (int)this->field_0603;
    this->field_0611 = CASE_0;
    goto cf_common_exit_00476DBA;
  }
  SVar1 = this->field_0611;
  if (SVar1 == CASE_0) {
    local_EAX_51 = st::fn_004031DE(this,2);
    switch(local_EAX_51) {
    case 0:
      iVar7 = st::fn_004043A4(this);
      if (iVar7 != 0) {
        if (((this->field_0603 == this->field_0047) && (this->field_0605 == this->field_0049)) &&
           (this->field_0607 == this->field_004B)) {
          this->field_0611 = CASE_1;
          return 2;
        }
        iVar13 = (int)this->field_0607;
        iVar16 = (int)this->field_0605;
        iVar7 = (int)this->field_0603;
cf_common_exit_00476DBA:
        st::fn_00404F6B(this,iVar7,iVar16,iVar13);
        local_EAX_229 = st::fn_004031DE(this,0);
        return (-(uint)(local_EAX_229 != -1) & 3) - 1;
      }
      break;
    case 1:
      pSVar8 = st::fn_004028BA
                         (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
      if (((pSVar8 != nullptr) && (pSVar8->field_0018 == this->field_05FF)) &&
         (iVar7 = (*pSVar8->vtable->vfunc_108)(this->field_0024), iVar7 != 0)) {
        return 2;
      }
      st::fn_00403855(this);
      break;
    default:
      return 2;
    case 3:
      iVar7 = st::fn_004043A4(this);
      if (iVar7 == 1) {
        iVar13 = (int)this->field_0607;
        iVar16 = (int)this->field_0605;
        iVar7 = (int)this->field_0603;
        goto cf_common_exit_00476DBA;
      }
      break;
    case -1:
      local_EAX_97 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x31d2,0,0,
                                        "%s","STBoatC::Capture, CAPTURE_MOVE error");
      if (local_EAX_97 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return 0xffff;
    }
    return 0;
  }
  if (SVar1 == CASE_1) {
    iVar7 = this->vfunc_D8();
    if (iVar7 != 0) {
      return -1;
    }
    pSVar8 = st::fn_004028BA
                       (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
    if (pSVar8 == nullptr) {
      return 0;
    }
    if (pSVar8->field_0018 != this->field_05FF) {
      return 0;
    }
    iVar7 = (*pSVar8->vtable->vfunc_108)(this->field_0024);
    if (iVar7 != 0) {
      if (pSVar8->field_002C == 0) {
        st::fn_00402AD6(pSVar8,this->field_0018,this->field_0024);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar7 = *(int *)((int)this->field_06CB + 0x2c);
        this->field_0611 = CASE_3;
        if (iVar7 == 6) {
          this->vfunc_90(3,0xed);
          return 2;
        }
        if (iVar7 != 0x12) {
          if (iVar7 != 0x22) {
            return 2;
          }
          this->vfunc_90(3,0x1d2);
          return 2;
        }
        this->vfunc_90(3,0x151);
        return 2;
      }
      if (pSVar8->field_002C != 1) {
        return 2;
      }
      sVar17 = this->field_0609;
      iVar16 = (int)sVar17;
      iVar7 = iVar16 + 1;
      if (iVar16 <= iVar7) {
        sVar19 = this->field_060B;
        sVar20 = sVar19;
        do {
          for (; (int)sVar20 <= sVar19 + 1; sVar20 = sVar20 + 1) {
            if ((((((sVar17 != this->field_0047) || (sVar20 != this->field_0049)) &&
                  (sVar4 = this->field_060D + 1, -1 < sVar17)) &&
                 ((sVar17 < g_worldGrid.sizeX && (-1 < sVar20)))) && (sVar20 < g_worldGrid.sizeY))
               && (((-1 < sVar4 && (sVar4 < g_worldGrid.sizeZ)) &&
                   ((pSVar2 = STGridAt3D(g_worldGrid, iVar16, sVar20, sVar4).objects[0],
                    pSVar2 != nullptr &&
                    ((pSVar2->value_20 == 0x14 && (*(int *)((int)&pSVar2[0x1f].vtable + 1) == 9)))))
                   ))) {
              iVar13 = *(int *)&pSVar2[0x2b].field_0x5;
              if (iVar13 == 2) {
                return 2;
              }
              if (iVar13 == 3) {
                return 2;
              }
              if (iVar13 == 4) {
                return 2;
              }
            }
          }
          sVar17 = sVar17 + 1;
          iVar16 = (int)sVar17;
          sVar20 = sVar19;
        } while (iVar16 <= iVar7);
      }
      this->field_0611 = CASE_2;
      this->field_0615 = 0;
      return 2;
    }
    return 0;
  }
  if (SVar1 == CASE_2) {
    if (this->field_0615 == 0) {
      iVar16 = (ushort)(this->field_060D * 200) + 300;
      iVar7 = STReplaceLowWord((uint32_t)(iVar16), (uint16_t)(this->field_060B + 1)) * 0xc9;
      iVar13 = STReplaceLowWord((uint32_t)(iVar7), (uint16_t)(this->field_0609 + 1));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         CONCAT22((short)((uint)(iVar13 * 0x19) >> 0x10),this->field_0045),
                         (short)(iVar13 * 0xc9),(short)iVar7,iVar16);
      this->field_060F = uVar5;
      this->field_0615 = 1;
    }
    if (this->field_0615 == 1) {
      uVar9 = st::fn_004030B2(this,this->field_060F);
      uVar9 = st::fn_004022FC(this,(short)uVar9);
      if (uVar9 == 0xffffffff) {
        local_EAX_1129 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3237,0,0,"%s",
                                "STBoatC::Capture, CAPTURE_PMOVE");
        if (local_EAX_1129 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (uVar9 == 0) {
        this->field_0615 = 2;
        goto cf_common_exit_00477B2E;
      }
    }
    if (this->field_0615 == 2) {
      st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                   (this->field_0609 + 1) * 0xc9,(this->field_060B + 1) * 0xc9,
                   this->field_060D * 200 + 300,this->field_0061);
      this->field_0615 = 3;
    }
    if (this->field_0615 == 3) {
      local_8 = st::fn_00402847((STJellyGunC *)this,&local_10,&local_c);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = 0;
      if (this->field_02BF != '\0') {
        do {
          puVar10 = (undefined4 *)
                    st::fn_0040342C(local_24,(short)*(undefined4 *)
                                                        (&this->field_0x2b3 + (short)param_1 * 6),
                                       *(ushort *)(&this->field_0x2b7 + (short)param_1 * 6),
                                       this->field_006C);
          uVar15 = *puVar10;
          local_18 = *(short *)(puVar10 + 1);
          local_1c = uVar15;
          if (DAT_0080732c == 1) {
            bVar24 = 0;
            sVar23 = 0;
            uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
            iVar7 = -1;
            this->field_001C = uVar9;
            sVar22 = 0;
            sVar21 = 0;
            uVar11 = uVar9 * 0x41c64e6d + 0x3039;
            sVar4 = 0;
            this->field_001C = uVar11;
            sVar20 = 0;
            sVar19 = 0;
            local_14 = uVar11 * 0x41c64e6d + 0x3039;
            sVar17 = 0;
            this->field_001C = local_14;
            lVar18 = st::fn_0072E288();
            st::fn_00401433
                      (g_traksClass_00802A7C,1,2,7,
                       (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                       (((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_1c)) + -3,
                       (int)(short)lVar18 + (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_18,sVar17,sVar19,sVar20,sVar4,sVar21,sVar22,iVar7,sVar23,bVar24);
          }
          else {
            uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar11;
            uVar14 = uVar11 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar14;
            uVar9 = uVar14 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar9;
            STPiece<2,2>(local_1c) = (short)((uint)uVar15 >> 0x10);
            iVar7 = (int)STPiece<2,2>(local_1c);
            STPiece<0,2>(local_1c) = (short)uVar15;
            iVar16 = (int)(short)local_1c;
            st::fn_00401433
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar9 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar16,
                       (((uVar14 >> 0x10) % 7 + (int)this->field_0043) - iVar7) + -3,
                       (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0,0
                       ,-1,0,0);
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = param_1 + 1;
        } while ((short)param_1 < (short)(ushort)(byte)this->field_02BF);
      }
      if (local_8 == -1) {
        local_EAX_2033 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x325c,0,0,"%s",
                                "STBoatC::Capture, CAPTURE_PMOVE 2");
        if (local_EAX_2033 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (local_8 == 0) {
        pSVar8 = st::fn_004028BA
                           (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
        if (((pSVar8 == nullptr) || (pSVar8->field_0018 != this->field_05FF)) ||
           (iVar7 = (*pSVar8->vtable->vfunc_108)(this->field_0024), iVar7 == 0)) {
          this->field_0611 = CASE_4;
          this->field_0615 = 0;
        }
        else {
          st::fn_00402AD6(pSVar8,this->field_0018,this->field_0024);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar7 = *(int *)((int)this->field_06CB + 0x2c);
          this->field_0611 = CASE_3;
          if (iVar7 == 6) {
            pSVar12 = this->vtable;
            uVar5 = 0xed;
          }
          else {
            if (iVar7 == 0x12) {
              this->vfunc_90(3,0x151);
              goto cf_common_exit_0047746B;
            }
            if (iVar7 != 0x22) goto cf_common_exit_0047746B;
            pSVar12 = this->vtable;
            uVar5 = 0x1d2;
          }
          (*pSVar12->vfunc_90)(this,3,uVar5);
        }
      }
    }
  }
  else {
    if (SVar1 != CASE_3) {
      if (SVar1 != CASE_4) {
        if (SVar1 != CASE_5) {
          iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x330e,0,0,
                                     "%s","STBoatC::Capture - incorrect entry");
          if (iVar6 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        iVar7 = st::fn_00403B34(this,2);
        if (iVar7 == -1) {
          local_EAX_3737 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x32fc,0,0,"%s",
                                  "STBoatC::Capture, CAPTURE_ESCMOVE error");
          if (local_EAX_3737 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (iVar7 == 0) {
          iVar7 = this->vfunc_D8();
          return -(uint)(iVar7 != 0);
        }
        if (iVar7 == 3) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          st::fn_00401DF2(this,extraout_EDX_02);
          st::fn_00404F6B(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
          st::fn_00403B34(this,0);
        }
cf_common_exit_00477B2E:
        iVar7 = this->vfunc_D8();
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
      if (this->field_0615 == 0) {
        iVar7 = STReplaceLowWord((uint32_t)(this), (uint16_t)(this->field_0605 * 0xc9)) + 100;
        uVar5 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           STReplaceLowWord((uint32_t)(iVar7), (uint16_t)(this->field_0045)),
                           this->field_0603 * 0xc9 + 100,(short)iVar7,
                           (ushort)(this->field_0607 * 200) + 100);
        this->field_060F = uVar5;
        this->field_0615 = 1;
      }
      if (this->field_0615 == 1) {
        uVar9 = st::fn_004030B2(this,this->field_060F);
        uVar9 = st::fn_004022FC(this,(short)uVar9);
        if (uVar9 == 0xffffffff) {
          local_EAX_2791 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x32c1,0,0,"%s",
                                  "STBoatC::Capture, CAPTURE_OMOVE");
          if (local_EAX_2791 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (uVar9 == 0) {
          this->field_0615 = 2;
          goto cf_common_exit_00477B2E;
        }
      }
      if (this->field_0615 == 2) {
        st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_0603 * 0xc9 + 100,this->field_0605 * 0xc9 + 100,
                     this->field_0607 * 200 + 100,this->field_0061);
        this->field_0615 = 3;
      }
      if (this->field_0615 == 3) {
        local_8 = st::fn_00402847((STJellyGunC *)this,&local_c,&local_10);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar15 = STReplaceLowByte((uint32_t)(extraout_EDX), (uint8_t)(this->field_02BF));
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = 0;
        if (this->field_02BF != '\0') {
          do {
            puVar10 = (undefined4 *)
                      st::fn_0040342C(local_24,(short)*(undefined4 *)
                                                          (&this->field_0x2b3 + (short)param_1 * 6),
                                         *(ushort *)(&this->field_0x2b7 + (short)param_1 * 6),
                                         this->field_006C);
            uVar15 = *puVar10;
            local_18 = *(short *)(puVar10 + 1);
            local_1c = uVar15;
            if (DAT_0080732c == 1) {
              bVar24 = 0;
              sVar23 = 0;
              uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar7 = -1;
              this->field_001C = uVar9;
              sVar22 = 0;
              sVar21 = 0;
              uVar11 = uVar9 * 0x41c64e6d + 0x3039;
              sVar4 = 0;
              this->field_001C = uVar11;
              sVar20 = 0;
              sVar19 = 0;
              local_14 = uVar11 * 0x41c64e6d + 0x3039;
              sVar17 = 0;
              this->field_001C = local_14;
              lVar18 = st::fn_0072E288();
              st::fn_00401433
                        (g_traksClass_00802A7C,1,2,7,
                         (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                         (((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_1c)) + -3
                         ,(int)(short)lVar18 + (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                          (int)local_18,sVar17,sVar19,sVar20,sVar4,sVar21,sVar22,iVar7,sVar23,bVar24
                        );
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar15 = extraout_EDX_00;
            }
            else {
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar11;
              uVar14 = uVar11 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar14;
              uVar9 = uVar14 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar9;
              STPiece<2,2>(local_1c) = (short)((uint)uVar15 >> 0x10);
              iVar7 = (int)STPiece<2,2>(local_1c);
              STPiece<0,2>(local_1c) = (short)uVar15;
              iVar16 = (int)(short)local_1c;
              st::fn_00401433
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar9 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar16,
                         (((uVar14 >> 0x10) % 7 + (int)this->field_0043) - iVar7) + -3,
                         (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0
                         ,0,-1,0,0);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar15 = extraout_EDX_01;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = param_1 + 1;
          } while ((short)param_1 < (short)(ushort)(byte)this->field_02BF);
        }
        if (local_8 == -1) {
          local_EAX_3531 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x32e6,0,0,"%s",
                                  "STBoatC::Capture, CAPTURE_OMOVE 2");
          if (local_EAX_3531 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (local_8 == 0) {
          this->field_0611 = CASE_5;
          st::fn_00401DF2(this,uVar15);
          st::fn_00404F6B(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
          iVar7 = st::fn_00403B34(this,0);
          if (iVar7 == -1) {
            return -1;
          }
        }
      }
      iVar7 = this->vfunc_D8();
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    pSVar8 = st::fn_004028BA
                       (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
    if (((pSVar8 == nullptr) || (pSVar8->field_0018 != this->field_05FF)) ||
       (iVar7 = (*pSVar8->vtable->vfunc_108)(this->field_0024), iVar7 == 0)) {
      if (((int)this->field_0041 == (this->field_0609 + 1) * 0xc9) &&
         ((int)this->field_0043 == (this->field_060B + 1) * 0xc9)) {
        this->field_0611 = CASE_4;
        this->field_0615 = 0;
        iVar7 = this->vfunc_D8();
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
      iVar7 = this->vfunc_D8();
      return -(uint)(iVar7 != 0);
    }
    iVar7 = st::fn_0040353F((AnonShape_004CC900_31EE9CAA *)pSVar8);
    if (iVar7 == 1) {
      if (DAT_008117bc != nullptr) {
        local_2e = pSVar8->field_0032;
        local_30 = *(undefined2 *)&pSVar8->field_0024;
        local_34 = 0x5dd4;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_2c = CONCAT22(this->field_0032,*(undefined2 *)&this->field_0024);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*DAT_008117bc)(local_44);
      }
      pSVar8->vfunc_10C();
      (*pSVar8->vtable->vfunc_110)(this->field_0024,(int)this->field_06CB[5]);
    }
    else if (iVar7 != 2) goto cf_common_exit_0047746B;
    uVar8 = st::fn_004049B7(*(char *)&pSVar8->field_0024);
    iVar7 = (*pSVar8->vtable->vfunc_2C)();
    local_64.arg0.ptr = &local_40;
    local_40 = *(undefined4 *)(&DAT_007e1374 + ((uint)(byte)uVar8 + iVar7 * 3) * 4);
    local_38 = 0xff;
    local_3c = 0;
    local_2c = 1;
    local_64.id = MESS_TORPHIT;
    this->GetMessage(&local_64);
    iVar7 = (this->field_0609 + 1) * 0xc9;
    if ((this->field_0041 == iVar7) &&
       (iVar7 = (this->field_060B + 1) * 0xc9, this->field_0043 == iVar7)) {
      this->field_0611 = CASE_4;
      this->field_0615 = 0;
    }
    else {
      this->field_0611 = CASE_5;
      st::fn_00401DF2(this,iVar7);
      st::fn_00404F6B(this,(int)this->field_0609,(int)this->field_060B,(int)this->field_060D);
      iVar7 = st::fn_00403B34(this,0);
      if (iVar7 == -1) {
        return -1;
      }
    }
  }
cf_common_exit_0047746B:
  iVar7 = this->vfunc_D8();
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
}

// 00478030 STBoatC::BackCapture
#line 4 "decomp/ST.exe/functions/00478030/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackCapture

   [STSwitchEnumApplier] Switch target field_0611 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0611State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00478030 -> 00415ED0 @ 004781BF | 00478030 -> 00415ED0 @ 00478438 */

int __thiscall st::fn_00478030(STBoatC *this,int *param_1)

{
  undefined2 uVar2;
  int local_EAX_36;
  int local_EAX_253;
  int local_EAX_463;
  STGameObjC *pSVar3;
  uint uVar4;
  int iVar5;
  int local_EAX_1096;
  int local_EAX_1172;
  int iVar6;
  STBoatC *local_8;

  uVar2 = (undefined2)((uint)this >> 0x10);
  local_8 = this;
  switch(this->field_0611) {
  case CASE_0:
  case CASE_5:
    local_EAX_36 = st::fn_00403DF0(this);
    return local_EAX_36;
  case CASE_1:
    return 0;
  case CASE_2:
    iVar6 = this->field_0615;
    if (iVar6 == 0) {
      return 0;
    }
    if (iVar6 == 1) {
      return 0;
    }
    if (iVar6 == 2) {
      return 0;
    }
    if (iVar6 == 3) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = CONCAT22(uVar2,this->field_0605 * 0xc9) + 100;
      uVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_0045)),
                         this->field_0603 * 0xc9 + 100,(short)iVar6,
                         (ushort)(this->field_0607 * 200) + 100);
      this->field_060F = uVar2;
      this->field_0615 = 4;
    }
    if (this->field_0615 == 4) {
      uVar4 = st::fn_004030B2(this,this->field_060F);
      uVar4 = st::fn_004022FC(this,(short)uVar4);
      if (uVar4 == 0xffffffff) {
        local_EAX_253 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3336,0,0,"%s",
                                "STBoatC::BackCapture, CAPTURE_PMOVE");
        if (local_EAX_253 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (uVar4 == 0) {
        this->field_0615 = 5;
LAB_00478373:
        iVar6 = this->vfunc_D8();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
    }
    if (this->field_0615 == 5) {
      st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0603 * 0xc9 + 100,this->field_0605 * 0xc9 + 100,
                   this->field_0607 * 200 + 100,this->field_0061);
      this->field_0615 = 6;
    }
    if (this->field_0615 == 6) {
      iVar6 = st::fn_00402847((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar6 == -1) {
        local_EAX_463 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x334b,0,0,"%s",
                                "STBoatC::BackCapture, CAPTURE_PMOVE 2");
        if (local_EAX_463 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x334c;
LAB_0047848a:
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar6);
        return 0xffff;
      }
      if (iVar6 == 0) {
        iVar6 = this->vfunc_D8();
        return -(uint)(iVar6 != 0);
      }
    }
    break;
  case CASE_3:
    pSVar3 = st::fn_004028BA
                       (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
    if (((pSVar3 != nullptr) && (pSVar3->field_0018 == this->field_05FF)) &&
       (iVar6 = (*pSVar3->vtable->vfunc_108)(this->field_0024), iVar6 != 0)) {
      st::fn_00405B1E((AnonShape_004CC900_31EE9CAA *)pSVar3);
    }
    if (((int)this->field_0041 != (this->field_0609 + 1) * 0xc9) ||
       ((int)this->field_0043 != (this->field_060B + 1) * 0xc9)) {
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
    this->field_0611 = CASE_4;
    this->field_0615 = 0;
    break;
  case CASE_4:
    if (this->field_0615 == 0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = CONCAT22(uVar2,this->field_0605 * 0xc9) + 100;
      uVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_0045)),
                         this->field_0603 * 0xc9 + 100,(short)iVar6,
                         (ushort)(this->field_0607 * 200) + 100);
      this->field_060F = uVar2;
      this->field_0615 = 1;
    }
    if (this->field_0615 == 1) {
      uVar4 = st::fn_004030B2(this,this->field_060F);
      uVar4 = st::fn_004022FC(this,(short)uVar4);
      if (uVar4 == 0xffffffff) {
        iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3373,0,0,"%s",
                                   "STBoatC::BackCapture, CAPTURE_OMOVE");
        if (iVar5 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (uVar4 == 0) {
        this->field_0615 = 2;
        goto LAB_00478373;
      }
    }
    if (this->field_0615 == 2) {
      st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0603 * 0xc9 + 100,this->field_0605 * 0xc9 + 100,
                   this->field_0607 * 200 + 100,this->field_0061);
      this->field_0615 = 3;
    }
    if (this->field_0615 == 3) {
      iVar6 = st::fn_00402847((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar6 == -1) {
        local_EAX_1096 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3388,0,0,"%s",
                                "STBoatC::BackCapture, CAPTURE_OMOVE 2");
        if (local_EAX_1096 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x3389;
        goto LAB_0047848a;
      }
      if (iVar6 == 0) {
        iVar6 = this->vfunc_D8();
        return -(uint)(iVar6 != 0);
      }
    }
    break;
  default:
    local_EAX_1172 =
         st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3396,0,0,"%s",
                            "STBoatC::BackCapture - incorrect entry");
    if (local_EAX_1172 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar6 = this->vfunc_D8();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

// 00478640 STBoatC::Recharge
#line 4 "decomp/ST.exe/functions/00478640/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Recharge */

int __thiscall st::fn_00478640(STBoatC *this,int param_1)

{
  undefined1 *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  STWorldObject *pSVar5;
  int local_EAX_103;
  int local_EAX_147;
  int local_EAX_201;
  int local_EAX_228;
  int local_EAX_618;
  int local_EAX_645;
  int local_EAX_919;
  int local_EAX_990;
  int local_EAX_1017;
  int local_EAX_1388;
  int local_EAX_1434;
  int local_EAX_1784;
  int local_EAX_1810;
  int local_EAX_1837;
  int local_EAX_2280;
  int local_EAX_2613;
  int iVar9;
  int local_EAX_2758;
  STBoatCVTable *pSVar7;
  int iVar8;
  int iVar10;
  int iVar11;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    iVar10 = 0;
    this->field_02C4 = 0;
    iVar9 = st::fn_00403594((TLOBaseTy *)this);
    if ((iVar9 == 0) ||
       ((iVar10 = st::fn_00401E6F(this), iVar10 == 1 &&
        (local_EAX_2758 = st::fn_0040231A((int *)this), local_EAX_2758 == 1)))) {
      this->field_0631 = 0;
      *(undefined4 *)&this->field_0x62d = 0;
      return 2;
    }
    this->field_0619 = this->field_03F7;
    if (this->field_03F7 == 0) {
      sVar2 = *(short *)&this->field_0x3fb;
      sVar3 = *(short *)&this->field_0x3fd;
      sVar4 = this->field_03FF;
      this->field_061D = sVar2;
      this->field_061F = sVar3;
      this->field_0621 = sVar4;
      if (sVar2 < 0) {
        return 0;
      }
      if (g_worldGrid.sizeX <= sVar2) {
        return 0;
      }
      if (sVar3 < 0) {
        return 0;
      }
      if (g_worldGrid.sizeY <= sVar3) {
        return 0;
      }
      if (sVar4 < 0) {
        return 0;
      }
      if (g_worldGrid.sizeZ <= sVar4) {
        return 0;
      }
      pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar3, sVar4).objects[0];
      if (pSVar5 == nullptr) {
        return 0;
      }
      iVar10 = pSVar5->GetObjectTypeId();
      if (iVar10 != 0x62) {
        return 0;
      }
      if (pSVar5[1].vtable != (STWorldObjectVTable *)this->field_0024) {
        return 0;
      }
      iVar10 = (*pSVar5->vtable[5].slots_00_28[2])();
      if (iVar10 == 0) {
        return 0;
      }
      this->field_0623 = *(undefined4 *)&pSVar5->field_0x18;
    }
    else {
      iVar10 = st::fn_004037B5(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                  &this->field_0623);
      if (iVar10 == 0) {
        return 0;
      }
    }
    this->field_0631 = 1;
    this->field_00B7 = 3;
    st::fn_00404F6B(this,(int)this->field_061D,(int)this->field_061F,(int)this->field_0621);
    st::fn_004031DE(this,0);
    pSVar7 = this->vtable;
LAB_0047926a:
    iVar10 = (*pSVar7->vfunc_D8)(this);
    return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
  }
  iVar10 = this->field_0631;
  if (iVar10 == 0) {
    iVar10 = *(int *)&this->field_0x62d + 1;
    *(int *)&this->field_0x62d = iVar10;
    pSVar7 = this->vtable;
    if (iVar10 != 2) goto LAB_0047926a;
    iVar10 = (*pSVar7->vfunc_D8)(this);
    if (iVar10 != 0) {
      return -1;
    }
    goto cf_common_exit_00478E51;
  }
  if (iVar10 == 1) {
    local_EAX_103 = st::fn_004031DE(this,2);
    switch(local_EAX_103) {
    case 0:
      local_EAX_201 = st::fn_00403594((TLOBaseTy *)this);
      if ((local_EAX_201 != 0) &&
         ((iVar10 = st::fn_00401E6F(this), iVar10 != 1 ||
          (local_EAX_228 = st::fn_0040231A((int *)this), local_EAX_228 != 1)))) {
        sVar2 = this->field_061D;
        sVar3 = this->field_0621;
        sVar4 = this->field_061F;
        if (((-1 < sVar2) &&
            (((sVar2 < g_worldGrid.sizeX && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeY)))) &&
           (((-1 < sVar3 && (sVar3 < g_worldGrid.sizeZ)) &&
            ((pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar4, sVar3).objects[0],
             pSVar5 != nullptr &&
             ((*(int *)&pSVar5->field_0x18 == this->field_0623 &&
              (iVar10 = (*pSVar5->vtable[5].slots_00_28[2])(), iVar10 != 0)))))))) {
          this->field_00B7 = 0;
          iVar10 = st::fn_00405948
                             ((AnonReceiver_00493610 *)this,(short *)&this->field_0x627,
                              (short *)&this->field_0x629,(short *)&this->field_0x62b);
          if (iVar10 == 1) {
            iVar8 = (int)*(short *)&this->field_0x62b;
            iVar11 = (int)*(short *)&this->field_0x629;
            iVar10 = (int)*(short *)&this->field_0x627;
            this->field_0631 = 3;
            goto cf_common_exit_00478B83;
          }
LAB_00478d20:
          this->field_0631 = 2;
          *(undefined4 *)&this->field_0x62d = 0;
          local_EAX_1784 = st::fn_00403A2B(this,0);
          if (local_EAX_1784 == -1) {
            return -1;
          }
cf_common_exit_0047928C:
          return 2;
        }
        if (this->field_0619 == 0) {
LAB_0047885b:
          st::fn_00403855(this);
          this->field_00B7 = 0;
          return 0;
        }
        iVar10 = st::fn_004037B5(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                    &this->field_0623);
        if (iVar10 == 0) goto LAB_0047885b;
        sVar2 = this->field_0621;
        sVar3 = this->field_061F;
        goto LAB_00478b7a;
      }
      break;
    case 1:
      local_EAX_618 = st::fn_00403594((TLOBaseTy *)this);
      if ((local_EAX_618 != 0) &&
         ((iVar10 = st::fn_00401E6F(this), iVar10 != 1 ||
          (local_EAX_645 = st::fn_0040231A((int *)this), local_EAX_645 != 1)))) {
        sVar2 = this->field_061D;
        sVar3 = this->field_0621;
        sVar4 = this->field_061F;
        if (((-1 < sVar2) &&
            (((sVar2 < g_worldGrid.sizeX && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeY)))) &&
           (((-1 < sVar3 && (sVar3 < g_worldGrid.sizeZ)) &&
            ((pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar4, sVar3).objects[0],
             pSVar5 != nullptr &&
             ((*(int *)&pSVar5->field_0x18 == this->field_0623 &&
              (iVar10 = (*pSVar5->vtable[5].slots_00_28[2])(), iVar10 != 0)))))))) {
          return 2;
        }
        if ((this->field_0619 == 0) ||
           (iVar10 = st::fn_004037B5(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                        &this->field_0623), iVar10 == 0)) {
          st::fn_00403855(this);
          this->field_00B7 = 0;
          return 0;
        }
        goto LAB_00478b73;
      }
      break;
    default:
      goto cf_common_exit_0047928C;
    case 3:
      st::fn_00404F6B(this,(int)this->field_061D,(int)this->field_061F,(int)this->field_0621);
      st::fn_004031DE(this,0);
      return 2;
    case -1:
      local_EAX_147 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x33d4,0,0,"%s",
                              "STBoatC::Recharge, RECHARGE_MOVE error");
      if (local_EAX_147 == 0) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x33d4
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_00403855(this);
    this->field_00B7 = 0;
cf_common_exit_00478E51:
    this->vfunc_90(3,0x1b2);
    return 0;
  }
  if (iVar10 == 2) {
    *(int *)&this->field_0x62d = *(int *)&this->field_0x62d + 1;
    local_EAX_919 = st::fn_00403A2B(this,2);
    if (local_EAX_919 == -1) {
      return -1;
    }
    if (this->field_082E != 0) {
      return 2;
    }
    if (this->field_048B != 0xffff) {
      return 2;
    }
    if (*(int *)&this->field_0x62d % 10 != 0) {
      return 2;
    }
    local_EAX_990 = st::fn_00403594((TLOBaseTy *)this);
    if ((local_EAX_990 == 0) ||
       ((iVar10 = st::fn_00401E6F(this), iVar10 == 1 &&
        (local_EAX_1017 = st::fn_0040231A((int *)this), local_EAX_1017 == 1))))
    goto cf_common_exit_00478E51;
    sVar2 = this->field_061D;
    sVar3 = this->field_0621;
    sVar4 = this->field_061F;
    if (((-1 < sVar2) &&
        (((((sVar2 < g_worldGrid.sizeX && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeY)) &&
          ((-1 < sVar3 && (sVar3 < g_worldGrid.sizeZ)))) &&
         (pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar4, sVar3).objects[0], pSVar5 != nullptr)))) &&
       ((*(int *)&pSVar5->field_0x18 == this->field_0623 &&
        (iVar10 = (*pSVar5->vtable[5].slots_00_28[2])(), iVar10 != 0)))) {
      iVar10 = st::fn_00405948
                         ((AnonReceiver_00493610 *)this,(short *)&this->field_0x627,
                          (short *)&this->field_0x629,(short *)&this->field_0x62b);
      if (iVar10 != 1) {
        return 2;
      }
      this->field_0631 = 3;
      goto LAB_00478b1a;
    }
    if (this->field_0619 == 0) {
      return 0;
    }
    iVar10 = st::fn_004037B5(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                &this->field_0623);
joined_r0x00478b59:
    if (iVar10 == 0) {
      return 0;
    }
LAB_00478b5f:
    this->field_0631 = 1;
    this->field_00B7 = 3;
LAB_00478b73:
    sVar2 = this->field_0621;
    sVar3 = this->field_061F;
LAB_00478b7a:
    sVar4 = this->field_061D;
  }
  else {
    if (iVar10 != 3) {
      if (iVar10 != 4) {
        if (iVar10 != 5) {
          return 2;
        }
        local_EAX_2613 = st::fn_004031DE(this,2);
        if (local_EAX_2613 == -1) {
          return -1;
        }
        if (local_EAX_2613 == 0) {
          return 0;
        }
        if (local_EAX_2613 != 3) {
          return 2;
        }
        st::fn_00404908(this,this->field_061D,this->field_061F,this->field_0621,this->field_061D,
                     this->field_061F,(int *)(uint)(ushort)this->field_0621,3,
                     (short *)&this->field_0x627,(short *)&this->field_0x629,
                     (short *)&this->field_0x62b);
LAB_00478b1a:
        iVar8 = (int)*(short *)&this->field_0x62b;
        iVar11 = (int)*(short *)&this->field_0x629;
        iVar10 = (int)*(short *)&this->field_0x627;
        goto cf_common_exit_00478B83;
      }
      sVar2 = this->field_061D;
      sVar3 = this->field_0621;
      sVar4 = this->field_061F;
      if ((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar4 < 0)) ||
         ((((g_worldGrid.sizeY <= sVar4 || (sVar3 < 0)) ||
           ((g_worldGrid.sizeZ <= sVar3 ||
            ((pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar4, sVar3).objects[0],
             pSVar5 == nullptr || (*(int *)&pSVar5->field_0x18 != this->field_0623)))))
           ) || (iVar10 = (*pSVar5->vtable[5].slots_00_28[2])(), iVar10 == 0)))) {
        if (this->field_0619 == 0) {
          return 0;
        }
        iVar10 = st::fn_004037B5(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                    &this->field_0623);
        if (iVar10 == 0) {
          return 0;
        }
        iVar8 = (int)this->field_0621;
        iVar11 = (int)this->field_061F;
        iVar10 = (int)this->field_061D;
        this->field_0631 = 1;
        this->field_00B7 = 3;
        goto cf_common_exit_00478B83;
      }
      local_EAX_2280 = st::fn_0040231A((int *)this);
      if (local_EAX_2280 != 1) goto LAB_00478ff2;
      this->vfunc_90(3,0x1b2);
      puVar1 = &this->field_0x62b;
      if (*(int *)&pSVar5[0x1d].field_0x18 == 0) {
LAB_00478f91:
        st::fn_00404908(this,this->field_061D,this->field_061F,this->field_0621,this->field_061D,
                     this->field_061F,(int *)(uint)(ushort)this->field_0621,3,
                     (short *)&this->field_0x627,(short *)&this->field_0x629,(short *)puVar1);
      }
      else {
        if (&this->field_0x627 != nullptr) {
          *(undefined4 *)&this->field_0x627 = *(undefined4 *)&pSVar5[0x1d].field_0x1c;
        }
        if (&this->field_0x629 != nullptr) {
          *(int *)&this->field_0x629 = pSVar5[0x1d].value_20;
        }
        if (puVar1 != nullptr) {
          *(STWorldObjectVTable **)puVar1 = pSVar5[0x1e].vtable;
        }
        if (*(int *)&pSVar5[0x1d].field_0x18 == 0) goto LAB_00478f91;
      }
      this->field_0631 = 5;
      st::fn_00404F6B(this,(int)*(short *)&this->field_0x627,(int)*(short *)&this->field_0x629,
                   (int)*(short *)puVar1);
      st::fn_004031DE(this,0);
LAB_00478ff2:
      iVar10 = this->vfunc_D8();
      return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
    }
    local_EAX_1388 = st::fn_004031DE(this,2);
    switch(local_EAX_1388) {
    case 0:
      sVar2 = this->field_061D;
      sVar3 = this->field_0621;
      sVar4 = this->field_061F;
      if ((((((-1 < sVar2) && (sVar2 < g_worldGrid.sizeX)) && (-1 < sVar4)) &&
           ((sVar4 < g_worldGrid.sizeY && (-1 < sVar3)))) &&
          ((sVar3 < g_worldGrid.sizeZ &&
           ((pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar4, sVar3).objects[0],
            pSVar5 != nullptr && (*(int *)&pSVar5->field_0x18 == this->field_0623))))))
         && (iVar10 = (*pSVar5->vtable[5].slots_00_28[2])(), iVar10 != 0)) {
        this->field_0631 = 4;
        return 2;
      }
      if (this->field_0619 == 0) {
        return 0;
      }
      iVar10 = st::fn_004037B5(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                  &this->field_0623);
      goto joined_r0x00478b59;
    case 1:
      local_EAX_1810 = st::fn_00403594((TLOBaseTy *)this);
      if ((local_EAX_1810 == 0) ||
         ((iVar10 = st::fn_00401E6F(this), iVar10 == 1 &&
          (local_EAX_1837 = st::fn_0040231A((int *)this), local_EAX_1837 == 1)))) {
        st::fn_00403855(this);
        goto cf_common_exit_00478E51;
      }
      sVar2 = this->field_061D;
      sVar3 = this->field_0621;
      sVar4 = this->field_061F;
      if (((((-1 < sVar2) && (sVar2 < g_worldGrid.sizeX)) && (-1 < sVar4)) &&
          ((sVar4 < g_worldGrid.sizeY && (-1 < sVar3)))) &&
         (((sVar3 < g_worldGrid.sizeZ &&
           ((pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar4, sVar3).objects[0],
            pSVar5 != nullptr && (*(int *)&pSVar5->field_0x18 == this->field_0623))))
          && (iVar10 = (*pSVar5->vtable[5].slots_00_28[2])(), iVar10 != 0)))) {
        return 2;
      }
      if ((this->field_0619 == 0) ||
         (iVar10 = st::fn_004037B5(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                      &this->field_0623), iVar10 == 0)) {
        st::fn_00403855(this);
        return 0;
      }
      goto LAB_00478b5f;
    default:
      goto cf_common_exit_0047928C;
    case 3:
      iVar10 = st::fn_00405948
                         ((AnonReceiver_00493610 *)this,(short *)&this->field_0x627,
                          (short *)&this->field_0x629,(short *)&this->field_0x62b);
      if (iVar10 != 1) goto LAB_00478d20;
      sVar2 = *(short *)&this->field_0x62b;
      sVar3 = *(short *)&this->field_0x629;
      sVar4 = *(short *)&this->field_0x627;
      break;
    case -1:
      local_EAX_1434 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3451,0,0,"%s",
                              "STBoatC::Recharge, RECHARGE_RECHMOVE error");
      if (local_EAX_1434 == 0) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x3451
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  iVar8 = (int)sVar2;
  iVar11 = (int)sVar3;
  iVar10 = (int)sVar4;
cf_common_exit_00478B83:
  st::fn_00404F6B(this,iVar10,iVar11,iVar8);
  st::fn_004031DE(this,0);
  return 2;
}

// 00479600 STBoatC::Teleport
#line 4 "decomp/ST.exe/functions/00479600/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Teleport */

int __thiscall st::fn_00479600(STBoatC *this,int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined2 uVar7;
  int local_EAX_56;
  int local_EAX_102;
  int local_EAX_474;
  int local_EAX_914;
  int iVar11;
  int local_EAX_1323;
  int local_EAX_1382;
  int local_EAX_1428;
  int local_EAX_1913;
  int local_EAX_2129;
  int iVar12;
  uint local_EAX_2614;
  uint local_EAX_2622;
  int local_EAX_2667;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int local_EAX_3796;
  int uVar11;
  int local_EAX_4422;
  int local_EAX_4951;
  int local_EAX_5437;
  uint uVar12;
  int local_EAX_6119;
  short sVar8;
  int local_EAX_7268;
  int local_EAX_7306;
  ushort uVar9;
  int local_EAX_7456;
  int iVar10;
  short sVar16;
  int iVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  byte bVar24;
  uint uVar25;
  undefined4 local_30 [2];
  undefined4 local_28;
  short local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  STWorldObject *local_8;

  local_8 = nullptr;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    this->field_0635 = this->field_0405;
    this->field_0639 = this->field_0409;
    this->field_063B = this->field_040B;
    this->field_063D = this->field_040D;
    this->field_0643 = this->field_040F;
    this->field_0645 = this->field_0411;
    this->field_0647 = this->field_0413;
    this->field_064D = 0;
    iVar11 = this->vfunc_D8();
    if (iVar11 != 0) {
      return -1;
    }
    iVar11 = this->field_0635;
    if (iVar11 == 0) {
      sVar8 = this->field_0639;
      sVar19 = this->field_063D;
      sVar16 = this->field_063B;
      if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
          ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) {
        local_8 = nullptr;
      }
      else {
        local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
      }
      if (local_8 == nullptr) {
        return 0;
      }
      iVar11 = local_8->GetObjectTypeId();
      if (iVar11 != 0x37) {
        return 0;
      }
      this->field_063F = *(undefined4 *)&local_8->field_0x18;
    }
    else {
      if (iVar11 != 1) {
        if (iVar11 != 2) {
          iVar10 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x351b,0,0,
                                      "%s","STBoatC::Teleport invalid type of teleportation");
          if (iVar10 == 0) {
            return 0;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar25 = this->field_001C * 0x41c64e6d + 0x3039;
        psVar4 = &this->field_065B;
        this->field_001C = uVar25;
        puVar2 = &this->field_0x657;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_004012B2(this->field_0024,*(int *)((int)this->field_06CB + 0x2c),
                           (int)this->field_0643,(int)this->field_0645,(int)this->field_0647,
                           (undefined4 *)puVar2,(undefined4 *)&this->field_0x659,
                           (undefined4 *)psVar4,uVar25 >> 0x10,&this->field_064D);
        if (*(short *)puVar2 < 0) {
          return 0;
        }
        if (*(short *)&this->field_0x659 < 0) {
          return 0;
        }
        if (*psVar4 < 0) {
          return 0;
        }
        this->field_0742 = 1;
        this->field_063F = 0;
        this->field_0649 = 0;
        if (DAT_00800bcc == nullptr) {
          st::fn_00404395();
        }
        st::fn_00401582(DAT_00800bcc,(int)*(short *)puVar2,(int)*(short *)&this->field_0x659,
                           (int)*psVar4);
        *(undefined4 *)&this->field_0x663 = 5;
        *(undefined4 *)&this->field_0x667 = 0;
        return 2;
      }
      sVar8 = this->field_0639;
      sVar19 = this->field_063D;
      sVar16 = this->field_063B;
      if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
         ((sVar16 < 0 ||
          (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))) {
        local_8 = nullptr;
      }
      else {
        local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
      }
      if (local_8 == nullptr) {
        return 0;
      }
      iVar11 = local_8->GetObjectTypeId();
      if (iVar11 != 0x6c) {
        return 0;
      }
      this->field_063F = *(undefined4 *)&local_8->field_0x18;
      sVar8 = this->field_0643;
      sVar19 = this->field_0647;
      sVar16 = this->field_0645;
      if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
         (((sVar16 < 0 || ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) ||
          (g_worldGrid.sizeZ <= sVar19)))) {
        local_8 = nullptr;
      }
      else {
        local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
      }
      if (local_8 == nullptr) {
        return 0;
      }
      iVar11 = local_8->GetObjectTypeId();
      if (iVar11 != 0x6c) {
        return 0;
      }
      this->field_0649 = *(undefined4 *)&local_8->field_0x18;
    }
    *(undefined4 *)&this->field_0x663 = 0;
    *(undefined4 *)&this->field_0x667 = 0;
    this->field_00B7 = 3;
    st::fn_00404F6B(this,(int)this->field_0639,(int)this->field_063B,this->field_063D + 1);
  }
  else {
    iVar11 = *(int *)&this->field_0x663;
    if (iVar11 == 0) {
      local_EAX_56 = st::fn_004031DE(this,2);
      switch(local_EAX_56) {
      case 0:
        this->field_00B7 = 0;
        if (this->field_0635 == 1) {
          sVar8 = this->field_0643;
          sVar19 = this->field_0647;
          sVar16 = this->field_0645;
          if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
              ((sVar16 < 0 || ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))))) ||
             (g_worldGrid.sizeZ <= sVar19)) {
            local_8 = nullptr;
          }
          else {
            local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
          }
          if (local_8 == nullptr) {
            return 0;
          }
          if (*(int *)&local_8->field_0x18 != this->field_0649) {
            return 0;
          }
          iVar11 = (*local_8->vtable[5].slots_00_28[2])();
          if (iVar11 == 0) {
            return 0;
          }
        }
        sVar8 = this->field_0639;
        sVar19 = this->field_063D;
        sVar16 = this->field_063B;
        if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
            ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) {
          local_8 = nullptr;
        }
        else {
          local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
        }
        if (local_8 == nullptr) {
          return 0;
        }
        if (*(int *)&local_8->field_0x18 != this->field_063F) {
          return 0;
        }
        iVar11 = (*local_8->vtable[5].slots_00_28[2])();
        if (iVar11 == 0) {
          return 0;
        }
        local_EAX_474 =
             st::fn_004029FA(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                          (short *)&this->field_0x655);
        if ((local_EAX_474 != 1) || (iVar11 = st::fn_0040245F(local_8,this), iVar11 != 1)) {
LAB_00479e39:
          *(undefined4 *)&this->field_0x663 = 1;
          *(undefined4 *)&this->field_0x65d = 0;
          local_EAX_2129 = st::fn_00403A2B(this,0);
          if (local_EAX_2129 != -1) {
            return 2;
          }
          return -1;
        }
        *(undefined4 *)&this->field_0x663 = 2;
LAB_0047b2dc:
        iVar11 = (int)*(short *)&this->field_0x655;
        sVar19 = *(short *)&this->field_0x653;
        sVar8 = *(short *)&this->field_0x651;
        break;
      case 1:
        sVar8 = this->field_0639;
        sVar19 = this->field_063D;
        sVar16 = this->field_063B;
        if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
            ((sVar16 < 0 || ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))))) ||
           (g_worldGrid.sizeZ <= sVar19)) {
          local_8 = nullptr;
        }
        else {
          local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
        }
        if (((local_8 != nullptr) && (*(int *)&local_8->field_0x18 == this->field_063F)
            ) && (iVar11 = (*local_8->vtable[5].slots_00_28[2])(), iVar11 != 0)) {
          if (this->field_0635 != 1) {
            return 2;
          }
          sVar8 = this->field_0643;
          sVar19 = this->field_0647;
          sVar16 = this->field_0645;
          if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
             (((sVar16 < 0 || ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) ||
              (g_worldGrid.sizeZ <= sVar19)))) {
            local_8 = nullptr;
          }
          else {
            local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
          }
          if (((local_8 != nullptr) &&
              (*(int *)&local_8->field_0x18 == this->field_0649)) &&
             (iVar11 = (*local_8->vtable[5].slots_00_28[2])(), iVar11 != 0)) {
            return 2;
          }
        }
        st::fn_00403855(this);
        this->field_00B7 = 0;
        return 0;
      default:
        goto switchD_00479647_caseD_2;
      case 3:
        sVar19 = this->field_063B;
        sVar8 = this->field_0639;
        iVar11 = this->field_063D + 1;
        break;
      case -1:
        local_EAX_102 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3525,0,0,"%s",
                                "STBoatC::Teleport, TELEPORT_MOVEIN error");
        if (local_EAX_102 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar11 = 0x3525;
LAB_00479ba6:
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar11
                  );
        return 0xffff;
      }
    }
    else {
      if (iVar11 == 1) {
        *(int *)&this->field_0x65d = *(int *)&this->field_0x65d + 1;
        local_EAX_914 = st::fn_00403A2B(this,2);
        if (local_EAX_914 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_048B != 0xffff) {
          return 2;
        }
        if (*(int *)&this->field_0x65d % 10 != 0) {
          return 2;
        }
        if (this->field_0635 == 1) {
          sVar8 = this->field_0643;
          sVar19 = this->field_0647;
          sVar16 = this->field_0645;
          if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
              ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) {
            local_8 = nullptr;
          }
          else {
            local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
          }
          if (local_8 == nullptr) {
            return 0;
          }
          if (*(int *)&local_8->field_0x18 != this->field_0649) {
            return 0;
          }
          iVar11 = (*local_8->vtable[5].slots_00_28[2])();
          if (iVar11 == 0) {
            return 0;
          }
        }
        sVar8 = this->field_0639;
        sVar19 = this->field_063D;
        sVar16 = this->field_063B;
        if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
           ((sVar16 < 0 ||
            (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))) {
          local_8 = nullptr;
        }
        else {
          local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
        }
        if (local_8 == nullptr) {
          return 0;
        }
        if (*(int *)&local_8->field_0x18 != this->field_063F) {
          return 0;
        }
        iVar11 = (*local_8->vtable[5].slots_00_28[2])();
        if (iVar11 == 0) {
          return 0;
        }
        local_EAX_1323 =
             st::fn_004029FA(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                          (short *)&this->field_0x655);
        if (local_EAX_1323 != 1) {
          return 2;
        }
        iVar11 = st::fn_0040245F(local_8,this);
        if (iVar11 != 1) {
          return 2;
        }
        *(undefined4 *)&this->field_0x663 = 2;
      }
      else {
        if (iVar11 != 2) {
          if (iVar11 != 3) {
            if (iVar11 == 4) {
              if (*(int *)&this->field_0x667 == 0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar11 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar11 == 7) || (iVar11 == 0x13)) || (iVar11 == 0x1b)) &&
                   ((this->field_07CA != nullptr &&
                    (iVar11 = st::fn_006E62D0
                                        (g_playSystem_00802A38,this->field_07CA,(int *)&local_8),
                    iVar11 != -4)))) {
                  iVar12 = (int)this->field_0045;
                  iVar11 = (int)this->field_0043;
                  iVar14 = (int)this->field_0041;
                  uVar25 = 0;
                  iVar15 = 0;
                  uVar11 = st::fn_004052CC((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  iVar12 = (int)this->field_0045;
                  iVar11 = (int)this->field_0043;
                  iVar14 = (int)this->field_0041;
                  uVar25 = 0;
                  uVar11 = this->field_01ED;
                  iVar15 = 0;
                }
                st::fn_004051A5(uVar11,iVar15,iVar14,iVar11,iVar12,uVar25);
                *(undefined4 *)&this->field_0x667 = 1;
                *(undefined4 *)&this->field_0x65d = 0;
              }
              if ((*(int *)&this->field_0x667 == 1) &&
                 (iVar11 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar11,
                 iVar11 == 0x16)) {
                *(undefined4 *)&this->field_0x667 = 2;
                *(undefined4 *)&this->field_0x65d = 0;
                st::fn_0040464C(this);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar11 = *(int *)((int)this->field_06CB + 0x2c);
                if (((iVar11 == 0xb) || (iVar11 == 0x23)) &&
                   ((this->field_021D == 1 && (this->field_0024 == (uint)DAT_0080874d)))) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  st::fn_006E6780
                            (this->field_0211,
                             CONCAT22(CONCAT11(2,(char)((uint)this->field_0018 >> 0x10)),
                                      (short)this->field_0018));
                }
                st::fn_00401DD4(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                   (int)*(short *)&this->field_0x659,(int)this->field_065B);
                st::fn_0040295F(this,*(short *)&this->field_0x657,*(short *)&this->field_0x659,
                                   this->field_065B,1);
                sVar8 = (this->field_0643 + 1) * 0xc9;
                this->field_0041 = sVar8;
                sVar19 = (this->field_0645 + 1) * 0xc9;
                sVar16 = this->field_0647 * 200 + 300;
                this->field_0043 = sVar19;
                this->field_0045 = sVar16;
                local_20 = (int)sVar8;
                st::fn_004045D9
                          ((STT3DSprC *)&this->field_01D5,
                           (float)local_20 * _DAT_007904f8 * _DAT_007904f0,
                           (float)(int)sVar19 * _DAT_007904f8 * _DAT_007904f0,
                           (float)(int)sVar16 * _DAT_007904f8 * _DAT_007904f0);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                st::fn_004023A1
                          ((TLOEmbryoTy *)this,*(undefined **)((int)this->field_06CB + 0x3f));
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar11 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar11 == 7) || (iVar11 == 0x13)) || (iVar11 == 0x1b)) &&
                   ((this->field_07CA != nullptr &&
                    (iVar11 = st::fn_006E62D0
                                        (g_playSystem_00802A38,this->field_07CA,(int *)&local_8),
                    iVar11 != -4)))) {
                  iVar14 = (int)this->field_0045;
                  iVar11 = (int)this->field_0043;
                  iVar12 = (int)this->field_0041;
                  uVar25 = 0;
                  iVar15 = 0;
                  local_EAX_4422 = st::fn_004052CC((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                  st::fn_004051A5(local_EAX_4422,iVar15,iVar12,iVar11,iVar14,uVar25);
                  st::fn_00403D0F((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  st::fn_004051A5(this->field_01ED,0,(int)this->field_0041,(int)this->field_0043,
                                     (int)this->field_0045,0);
                }
                st::fn_00403D0F((STT3DSprC *)&this->field_01D5);
              }
              if ((*(int *)&this->field_0x667 == 2) &&
                 (iVar11 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar11,
                 iVar11 == 0x16)) {
                *(undefined4 *)&this->field_0x667 = 3;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar11 = *(int *)((int)this->field_06CB + 0x2c);
                *(undefined4 *)&this->field_0x65d = 0;
                if (((iVar11 == 7) || ((iVar11 == 0x13 || (iVar11 == 0x1b)))) &&
                   ((this->field_07CA != nullptr &&
                    (iVar11 = st::fn_006E62D0
                                        (g_playSystem_00802A38,this->field_07CA,(int *)&local_8),
                    iVar11 != -4)))) {
                  st::fn_00402982((void *)((int)&local_8[0xd].vtable + 1),0);
                }
                st::fn_00402982(&this->field_01D5,0);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar11 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar11 == 0xb) || (iVar11 == 0x23)) && (this->field_021D == 1)) &&
                   (this->field_0024 == (uint)DAT_0080874d)) {
                  local_20 = (int)this->field_0041;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  st::fn_006E6710
                            (this->field_0211,(float)local_20 * _DAT_007904f8 * _DAT_007904f0,
                             (float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                             (uint)((float)this->field_010D * _DAT_007904f8 + _DAT_007904f4),0x28,
                             CONCAT22(CONCAT11(2,(char)((uint)this->field_0018 >> 0x10)),
                                      (short)this->field_0018));
                }
              }
              if ((*(int *)&this->field_0x667 == 3) &&
                 (iVar11 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar11,
                 iVar11 == 10)) {
                *(undefined4 *)&this->field_0x663 = 6;
                *(undefined4 *)&this->field_0x667 = 0;
                this->field_0742 = 0;
              }
              goto cf_common_exit_0047ADB5;
            }
            if (iVar11 == 5) {
              if (*(int *)&this->field_0x667 == 0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar11 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar11 == 7) || (iVar11 == 0x13)) || (iVar11 == 0x1b)) &&
                   ((this->field_07CA != nullptr &&
                    (iVar11 = st::fn_006E62D0
                                        (g_playSystem_00802A38,this->field_07CA,(int *)&local_8),
                    iVar11 != -4)))) {
                  iVar12 = (int)this->field_0045;
                  iVar11 = (int)this->field_0043;
                  iVar14 = (int)this->field_0041;
                  uVar25 = 0;
                  iVar15 = 0;
                  local_EAX_4951 = st::fn_004052CC((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  iVar12 = (int)this->field_0045;
                  iVar11 = (int)this->field_0043;
                  iVar14 = (int)this->field_0041;
                  uVar25 = 0;
                  local_EAX_4951 = this->field_01ED;
                  iVar15 = 0;
                }
                st::fn_004051A5(local_EAX_4951,iVar15,iVar14,iVar11,iVar12,uVar25);
                *(undefined4 *)&this->field_0x667 = 1;
                *(undefined4 *)&this->field_0x65d = 0;
              }
              if ((*(int *)&this->field_0x667 == 1) &&
                 (iVar11 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar11,
                 iVar11 == 0x16)) {
                *(undefined4 *)&this->field_0x65d = 0;
                *(undefined4 *)&this->field_0x667 = 2;
                if (this->field_0635 == 2) {
                  iVar11 = this->field_071E + -10;
                  this->field_071E = iVar11;
                  if (iVar11 < 0) {
                    this->field_071E = 0;
                  }
                  if ((this->field_064D != 0) && (DAT_00811798 != nullptr)) {
                    st::fn_0040321A(DAT_00811798,(int)this->field_0047,(int)this->field_0049,
                                       this->field_0024);
                  }
                  st::fn_004029D7(this->field_0024,(int)*(short *)&this->field_0x657,
                                     (int)*(short *)&this->field_0x659,(int)this->field_065B);
                }
                st::fn_0040464C(this);
                st::fn_00401DD4(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                   (int)*(short *)&this->field_0x659,(int)this->field_065B);
                st::fn_0040295F(this,*(short *)&this->field_0x657,*(short *)&this->field_0x659,
                                   this->field_065B,1);
                local_20 = (int)this->field_0041;
                st::fn_004045D9
                          ((STT3DSprC *)&this->field_01D5,
                           (float)local_20 * _DAT_007904f8 * _DAT_007904f0,
                           (float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                           (float)(int)this->field_0045 * _DAT_007904f8 * _DAT_007904f0);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                st::fn_004023A1
                          ((TLOEmbryoTy *)this,*(undefined **)((int)this->field_06CB + 0x3f));
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar11 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar11 == 7) || (iVar11 == 0x13)) || (iVar11 == 0x1b)) &&
                   ((this->field_07CA != nullptr &&
                    (iVar11 = st::fn_006E62D0
                                        (g_playSystem_00802A38,this->field_07CA,(int *)&local_8),
                    iVar11 != -4)))) {
                  iVar14 = (int)this->field_0045;
                  iVar11 = (int)this->field_0043;
                  iVar12 = (int)this->field_0041;
                  uVar25 = 0;
                  iVar15 = 0;
                  local_EAX_5437 = st::fn_004052CC((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                  st::fn_004051A5(local_EAX_5437,iVar15,iVar12,iVar11,iVar14,uVar25);
                  st::fn_00403D0F((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  st::fn_004051A5(this->field_01ED,0,(int)this->field_0041,(int)this->field_0043,
                                     (int)this->field_0045,0);
                }
                st::fn_00403D0F((STT3DSprC *)&this->field_01D5);
              }
              if ((*(int *)&this->field_0x667 == 2) &&
                 (iVar11 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar11,
                 iVar11 == 0x16)) {
                *(undefined4 *)&this->field_0x667 = 3;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar11 = *(int *)((int)this->field_06CB + 0x2c);
                *(undefined4 *)&this->field_0x65d = 0;
                if (((iVar11 == 7) || ((iVar11 == 0x13 || (iVar11 == 0x1b)))) &&
                   ((this->field_07CA != nullptr &&
                    (iVar11 = st::fn_006E62D0
                                        (g_playSystem_00802A38,this->field_07CA,(int *)&local_8),
                    iVar11 != -4)))) {
                  st::fn_00402982((void *)((int)&local_8[0xd].vtable + 1),0);
                }
                st::fn_00402982(&this->field_01D5,0);
              }
              if ((*(int *)&this->field_0x667 == 3) &&
                 (iVar11 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar11,
                 iVar11 == 10)) {
                sVar8 = this->field_0639;
                sVar19 = this->field_063D;
                sVar16 = this->field_063B;
                this->field_0742 = 0;
                if ((sVar8 < 0) ||
                   ((((g_worldGrid.sizeX <= sVar8 || (sVar16 < 0)) || (g_worldGrid.sizeY <= sVar16))
                    || ((sVar19 < 0 || (g_worldGrid.sizeZ <= sVar19)))))) {
                  local_8 = nullptr;
                }
                else {
                  local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
                }
                if (((local_8 != nullptr) &&
                    (*(int *)&local_8->field_0x18 == this->field_063F)) &&
                   (iVar11 = (*local_8->vtable[5].slots_00_28[2])(), iVar11 != 0)) {
                  st::fn_00404971(local_8,this);
                }
                iVar11 = this->vfunc_D8();
                if (iVar11 != 0) {
                  return -1;
                }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_0047acdc:
                iVar11 = st::fn_004038B9((byte)this->field_0024,
                                            *(int *)((int)this->field_06CB + 0x2c),
                                            (int)this->field_005B,(int)this->field_005D);
                if (iVar11 == 0) {
                  return 0;
                }
                st::fn_00403D14(this,0xaf);
                return 0;
              }
              goto cf_common_exit_0047ADB5;
            }
            if (iVar11 != 6) {
              if (iVar11 != 7) {
                local_EAX_7456 =
                     st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3744,0,0,
                                        "%s","STBoatC::Teleport - incorrect entry");
                if (local_EAX_7456 == 0) {
                  return -1;
                }
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              local_EAX_7306 = st::fn_004031DE(this,2);
              if (local_EAX_7306 == -1) {
                return -1;
              }
              if (local_EAX_7306 == 0) goto LAB_0047acdc;
              if (local_EAX_7306 != 3) {
                return 2;
              }
              uVar9 = *(short *)&this->field_0x655 + 1;
              sVar8 = *(short *)&this->field_0x653;
              st::fn_00404908(this,*(short *)&this->field_0x651,sVar8,uVar9,
                           *(short *)&this->field_0x651,sVar8,(int *)(uint)uVar9,1,
                           (short *)&this->field_0x651,(short *)&this->field_0x653,
                           (short *)&this->field_0x655);
              goto LAB_0047b2dc;
            }
            if (*(int *)&this->field_0x667 == 0) {
              iVar11 = STReplaceLowWord((uint32_t)(this), (uint16_t)(*(short *)&this->field_0x659 * 0xc9)) +
                       100;
              uVar7 = (*this->vtable->vfunc_10)
                                (this->field_0041,this->field_0043,
                                 STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(this->field_0045)),
                                 *(short *)&this->field_0x657 * 0xc9 + 100,(short)iVar11,
                                 (ushort)(this->field_065B * 200) + 100);
              *(undefined2 *)&this->field_0x661 = uVar7;
              *(undefined4 *)&this->field_0x667 = 1;
            }
            if (*(int *)&this->field_0x667 == 1) {
              uVar12 = st::fn_004030B2(this,*(short *)&this->field_0x661);
              local_EAX_2622 = st::fn_004022FC(this,(short)uVar12);
              if (local_EAX_2622 == 0xffffffff) {
                local_EAX_6119 =
                     st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x36e3,0,0,
                                        "%s","STBoatC::Teleport TELEPORT_OMOVE 1");
                if (local_EAX_6119 == 0) {
                  return -1;
                }
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              goto joined_r0x0047ada9;
            }
            if (*(int *)&this->field_0x667 == 2) {
              st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                           *(short *)&this->field_0x657 * 0xc9 + 100,
                           *(short *)&this->field_0x659 * 0xc9 + 100,this->field_065B * 200 + 100,
                           this->field_0061);
              *(undefined4 *)&this->field_0x667 = 3;
            }
            if (*(int *)&this->field_0x667 != 3) goto cf_common_exit_0047ADB5;
            local_14 = st::fn_00402847((STJellyGunC *)this,&local_18,&local_1c);
            uVar25 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar25;
            iVar11 = (uVar25 >> 0x10) % 7 - 3;
            uVar25 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar25;
            uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar1;
            local_20 = (uVar1 >> 0x10) % 7 - 3;
            if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
               (local_c = 0, this->field_02BF != '\0')) {
              local_10 = (undefined4 *)&this->field_0x2b3;
              do {
                puVar13 = (undefined4 *)
                          st::fn_0040342C(local_30,(short)*local_10,*(ushort *)(local_10 + 1),
                                             this->field_006C);
                uVar5 = *puVar13;
                bVar24 = 0;
                sVar23 = 0;
                iVar12 = -1;
                local_24 = *(short *)(puVar13 + 1);
                sVar22 = 0;
                sVar21 = 0;
                sVar20 = 0;
                sVar16 = 0;
                sVar19 = 0;
                sVar8 = 0;
                local_28 = uVar5;
                if (DAT_0080732c == 1) {
                  sVar8 = 0;
                  sVar19 = 0;
                  sVar16 = 0;
                  sVar20 = 0;
                  sVar21 = 0;
                  sVar22 = 0;
                  sVar23 = 0;
                  bVar24 = 0;
                  lVar18 = st::fn_0072E288();
                  iVar17 = (int)local_24 + this->field_0045 + local_20 + (int)(short)lVar18;
                  iVar14 = (int)this->field_0043 - (int)STPiece<2,2>(local_28);
                  iVar15 = (int)(short)local_28 + iVar11 + this->field_0041;
                }
                else {
                  iVar17 = (int)local_24 + local_20 + this->field_0045;
                  STPiece<2,2>(local_28) = (short)((uint)uVar5 >> 0x10);
                  iVar14 = (int)this->field_0043 - (int)STPiece<2,2>(local_28);
                  STPiece<0,2>(local_28) = (short)uVar5;
                  iVar15 = (int)(short)local_28 + iVar11 + this->field_0041;
                }
                st::fn_00401433
                          (g_traksClass_00802A7C,1,2,7,iVar15,iVar14 + ((uVar25 >> 0x10) % 7 - 3),
                           iVar17,sVar8,sVar19,sVar16,sVar20,sVar21,sVar22,iVar12,sVar23,bVar24);
                local_10 = (undefined4 *)((int)local_10 + 6);
                local_c = local_c + 1;
              } while (local_c < (int)(uint)(byte)this->field_02BF);
            }
            if (local_14 == -1) {
              local_EAX_7268 =
                   st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x370a,0,0,
                                      "%s","STBoatC::Teleport TELEPORT_OMOVE 2");
              if (local_EAX_7268 == 0) {
                return -1;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            if (local_14 != 0) goto cf_common_exit_0047ADB5;
            sVar8 = this->field_0639;
            iVar11 = 0;
            sVar19 = this->field_063D;
            sVar16 = this->field_063B;
            if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
               (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))) {
              local_8 = nullptr;
            }
            else {
              iVar11 = (int)sVar8;
              local_8 = STGridAt3D(g_worldGrid, iVar11, sVar16, sVar19).objects[0];
            }
            if ((local_8 != nullptr) &&
               (iVar11 = *(int *)&local_8->field_0x18, iVar11 == this->field_063F)) {
              iVar12 = (*local_8->vtable[5].slots_00_28[2])();
              iVar11 = 0;
              if (iVar12 != 0) {
                iVar11 = st::fn_00404971(local_8,this);
              }
            }
            sVar8 = this->field_0643;
            iVar11 = STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(sVar8));
            sVar19 = this->field_0647;
            sVar16 = this->field_0645;
            if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
                ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) {
              local_8 = nullptr;
            }
            else {
              iVar11 = (int)sVar8;
              local_8 = STGridAt3D(g_worldGrid, iVar11, sVar16, sVar19).objects[0];
            }
            if ((local_8 == nullptr) ||
               (iVar11 = *(int *)&local_8->field_0x18, iVar11 != this->field_0649)) {
LAB_0047b1c5:
              sVar8 = this->field_0647 + 1;
              iVar11 = st::fn_00404908(this,this->field_0643,this->field_0645,sVar8,this->field_0643,
                                    this->field_0645,
                                    (int *)STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(sVar8)),2,
                                    (short *)&this->field_0x651,(short *)&this->field_0x653,
                                    (short *)&this->field_0x655);
joined_r0x0047b202:
              if (iVar11 == 0) {
                *(short *)&this->field_0x651 = this->field_0047;
                *(short *)&this->field_0x653 = this->field_0049;
                *(short *)&this->field_0x655 = this->field_004B;
              }
            }
            else {
              iVar12 = (*local_8->vtable[5].slots_00_28[2])();
              iVar11 = 0;
              if (iVar12 == 0) goto LAB_0047b1c5;
              puVar2 = &this->field_0x655;
              puVar3 = &this->field_0x653;
              if (*(int *)&local_8[0x1d].field_0x18 != 0) {
                if (&this->field_0x651 != nullptr) {
                  *(undefined4 *)&this->field_0x651 = *(undefined4 *)&local_8[0x1d].field_0x1c;
                }
                if (puVar3 != nullptr) {
                  *(int *)puVar3 = local_8[0x1d].value_20;
                }
                if (puVar2 != nullptr) {
                  *(STWorldObjectVTable **)puVar2 = local_8[0x1e].vtable;
                }
              }
              if (*(int *)&local_8[0x1d].field_0x18 == 0) {
                sVar8 = this->field_0647 + 1;
                iVar11 = st::fn_00404908(this,this->field_0643,this->field_0645,sVar8,this->field_0643,
                                      this->field_0645,
                                      (int *)STReplaceLowWord((uint32_t)(local_8), (uint16_t)(sVar8)),2,
                                      (short *)&this->field_0x651,(short *)puVar3,(short *)puVar2);
                goto joined_r0x0047b202;
              }
            }
            st::fn_00404F6B(this,(int)*(short *)&this->field_0x651,(int)*(short *)&this->field_0x653,
                         (int)*(short *)&this->field_0x655);
            st::fn_004031DE(this,0);
            *(undefined4 *)&this->field_0x663 = 7;
cf_common_exit_0047ADB5:
            iVar11 = this->vfunc_D8();
            return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
          }
          if (*(int *)&this->field_0x667 == 0) {
            iVar12 = (ushort)(this->field_063D * 200) + 300;
            iVar11 = STReplaceLowWord((uint32_t)(iVar12), (uint16_t)(this->field_063B + 1)) * 0xc9;
            iVar14 = STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(this->field_0639 + 1));
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar7 = (*this->vtable->vfunc_10)
                              (this->field_0041,this->field_0043,
                               CONCAT22((short)((uint)(iVar14 * 0x19) >> 0x10),this->field_0045),
                               (short)(iVar14 * 0xc9),(short)iVar11,iVar12);
            *(undefined2 *)&this->field_0x661 = uVar7;
            *(undefined4 *)&this->field_0x667 = 1;
          }
          if (*(int *)&this->field_0x667 == 1) {
            local_EAX_2614 = st::fn_004030B2(this,*(short *)&this->field_0x661);
            local_EAX_2622 = st::fn_004022FC(this,(short)local_EAX_2614);
            if (local_EAX_2622 == 0xffffffff) {
              local_EAX_2667 =
                   st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x35f4,0,0,
                                      "%s","STBoatC::Teleport TELEPORT_PMOVE 1");
              if (local_EAX_2667 == 0) {
                return -1;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
joined_r0x0047ada9:
            if (local_EAX_2622 == 0) {
              *(undefined4 *)&this->field_0x667 = 2;
            }
            goto cf_common_exit_0047ADB5;
          }
          if (*(int *)&this->field_0x667 == 2) {
            st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                         (this->field_0639 + 1) * 0xc9,(this->field_063B + 1) * 0xc9,
                         this->field_063D * 200 + 300,this->field_0061);
            *(undefined4 *)&this->field_0x667 = 3;
          }
          if (*(int *)&this->field_0x667 != 3) goto cf_common_exit_0047A369;
          local_14 = st::fn_00402847((STJellyGunC *)this,&local_20,&local_1c);
          uVar25 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar25;
          iVar11 = (uVar25 >> 0x10) % 7 - 3;
          uVar25 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar25;
          uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar1;
          local_18 = (uVar1 >> 0x10) % 7 - 3;
          if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
             (local_c = 0, this->field_02BF != '\0')) {
            local_10 = (undefined4 *)&this->field_0x2b3;
            do {
              puVar13 = (undefined4 *)
                        st::fn_0040342C(local_30,(short)*local_10,*(ushort *)(local_10 + 1),
                                           this->field_006C);
              uVar5 = *puVar13;
              bVar24 = 0;
              sVar23 = 0;
              iVar12 = -1;
              local_24 = *(short *)(puVar13 + 1);
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar16 = 0;
              sVar19 = 0;
              sVar8 = 0;
              local_28 = uVar5;
              if (DAT_0080732c == 1) {
                sVar8 = 0;
                sVar19 = 0;
                sVar16 = 0;
                sVar20 = 0;
                sVar21 = 0;
                sVar22 = 0;
                sVar23 = 0;
                bVar24 = 0;
                lVar18 = st::fn_0072E288();
                iVar17 = (int)local_24 + this->field_0045 + local_18 + (int)(short)lVar18;
                iVar14 = (int)this->field_0043 - (int)STPiece<2,2>(local_28);
                iVar15 = (int)(short)local_28 + iVar11 + this->field_0041;
              }
              else {
                iVar17 = (int)local_24 + local_18 + this->field_0045;
                STPiece<2,2>(local_28) = (short)((uint)uVar5 >> 0x10);
                iVar14 = (int)this->field_0043 - (int)STPiece<2,2>(local_28);
                STPiece<0,2>(local_28) = (short)uVar5;
                iVar15 = (int)(short)local_28 + iVar11 + this->field_0041;
              }
              st::fn_00401433
                        (g_traksClass_00802A7C,1,2,7,iVar15,iVar14 + ((uVar25 >> 0x10) % 7 - 3),
                         iVar17,sVar8,sVar19,sVar16,sVar20,sVar21,sVar22,iVar12,sVar23,bVar24);
              local_10 = (undefined4 *)((int)local_10 + 6);
              local_c = local_c + 1;
            } while (local_c < (int)(uint)(byte)this->field_02BF);
          }
          if (local_14 == -1) {
            local_EAX_3796 =
                 st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x361b,0,0,"%s"
                                    ,"STBoatC::Teleport TELEPORT_PMOVE 2");
            if (local_EAX_3796 == 0) {
              return -1;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          if (local_14 != 0) goto cf_common_exit_0047A369;
          if (this->field_0635 == 1) {
            sVar8 = this->field_0643;
            sVar19 = this->field_0647;
            sVar16 = this->field_0645;
            if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
               (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))) {
              local_8 = nullptr;
            }
            else {
              local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
            }
            if (((local_8 != nullptr) &&
                (*(int *)&local_8->field_0x18 == this->field_0649)) &&
               ((iVar11 = (*local_8->vtable[5].slots_00_28[2])(), iVar11 != 0 &&
                ((*(int *)&local_8[0x21].field_0x10 == 0 && (*(int *)&local_8[0x10].field_0x5 != 6))
                )))) goto LAB_0047a385;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = g_playSystem_00802A38->field_00E4;
          }
          else {
LAB_0047a385:
            sVar8 = this->field_0639;
            sVar19 = this->field_063D;
            sVar16 = this->field_063B;
            if (((sVar8 < 0) ||
                (((g_worldGrid.sizeX <= sVar8 || (sVar16 < 0)) || (g_worldGrid.sizeY <= sVar16))))
               || ((sVar19 < 0 || (g_worldGrid.sizeZ <= sVar19)))) {
              local_8 = nullptr;
            }
            else {
              local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
            }
            if (((local_8 != nullptr) &&
                (*(int *)&local_8->field_0x18 == this->field_063F)) &&
               ((iVar11 = (*local_8->vtable[5].slots_00_28[2])(), iVar11 != 0 &&
                ((*(int *)&local_8[0x21].field_0x10 == 0 && (*(int *)&local_8[0x10].field_0x5 != 6))
                )))) {
              this->field_0742 = 1;
              st::fn_00403DBE(local_8,(undefined4 *)&this->field_0x657,
                                 (undefined4 *)&this->field_0x659,(undefined4 *)&this->field_065B);
              st::fn_00405380(local_8,(int *)this->field_0018);
              st::fn_00401582(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                 (int)*(short *)&this->field_0x659,(int)this->field_065B);
              *(undefined4 *)&this->field_0x667 = 0;
              *(uint *)&this->field_0x663 = (this->field_0635 != 1) + 4;
              goto cf_common_exit_0047A369;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = g_playSystem_00802A38->field_00E4;
          }
          st::fn_00402126(this,CASE_3,(uint *)&param_1);
cf_common_exit_0047A369:
          iVar11 = this->vfunc_D8();
          return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
        }
        local_EAX_1382 = st::fn_004031DE(this,2);
        switch(local_EAX_1382) {
        case 0:
          if (this->field_0635 == 1) {
            sVar8 = this->field_0643;
            sVar19 = this->field_0647;
            sVar16 = this->field_0645;
            if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
               ((sVar16 < 0 ||
                (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))
               ) {
              local_8 = nullptr;
            }
            else {
              local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
            }
            if (local_8 == nullptr) {
              return 0;
            }
            if (*(int *)&local_8->field_0x18 != this->field_0649) {
              return 0;
            }
            iVar11 = (*local_8->vtable[5].slots_00_28[2])();
            if (iVar11 == 0) {
              return 0;
            }
          }
          sVar8 = this->field_0639;
          sVar19 = this->field_063D;
          sVar16 = this->field_063B;
          if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
             (((sVar16 < 0 || ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) ||
              (g_worldGrid.sizeZ <= sVar19)))) {
            local_8 = nullptr;
          }
          else {
            local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
          }
          if (local_8 == nullptr) {
            return 0;
          }
          if (*(int *)&local_8->field_0x18 != this->field_063F) {
            return 0;
          }
          iVar11 = (*local_8->vtable[5].slots_00_28[2])();
          if (iVar11 == 0) {
            return 0;
          }
          if (((this->field_0047 == *(short *)&this->field_0x651) &&
              (this->field_0049 == *(short *)&this->field_0x653)) &&
             (this->field_004B == *(short *)&this->field_0x655)) {
            *(undefined4 *)&this->field_0x663 = 3;
            *(undefined4 *)&this->field_0x667 = 0;
            return 2;
          }
          st::fn_00404971(local_8,this);
          return 0;
        case 1:
          sVar8 = this->field_0639;
          sVar19 = this->field_063D;
          sVar16 = this->field_063B;
          if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
             ((sVar16 < 0 ||
              (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19))))))
          {
            local_8 = nullptr;
          }
          else {
            local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
          }
          if (((local_8 != nullptr) &&
              (*(int *)&local_8->field_0x18 == this->field_063F)) &&
             (iVar11 = (*local_8->vtable[5].slots_00_28[2])(), iVar11 != 0)) {
            if (this->field_0635 != 1) {
              return 2;
            }
            sVar8 = this->field_0643;
            sVar19 = this->field_0647;
            sVar16 = this->field_0645;
            if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
               ((sVar16 < 0 ||
                (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))
               ) {
              local_8 = nullptr;
            }
            else {
              local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
            }
            if (((local_8 != nullptr) &&
                (*(int *)&local_8->field_0x18 == this->field_0649)) &&
               (iVar11 = (*local_8->vtable[5].slots_00_28[2])(), iVar11 != 0)) {
              return 2;
            }
          }
          st::fn_00403855(this);
          return 0;
        default:
          return 2;
        case 3:
          local_EAX_1913 =
               st::fn_004029FA(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                            (short *)&this->field_0x655);
          if (local_EAX_1913 != 1) {
            sVar8 = this->field_0639;
            sVar19 = this->field_063D;
            sVar16 = this->field_063B;
            if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
               (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))) {
              local_8 = nullptr;
            }
            else {
              local_8 = STGridAt3D(g_worldGrid, sVar8, sVar16, sVar19).objects[0];
            }
            if (local_8 == nullptr) {
              return 0;
            }
            if (*(int *)&local_8->field_0x18 != this->field_063F) {
              return 0;
            }
            iVar11 = (*local_8->vtable[5].slots_00_28[2])();
            if (iVar11 == 0) {
              return 0;
            }
            st::fn_00404971(local_8,this);
            goto LAB_00479e39;
          }
          break;
        case -1:
          local_EAX_1428 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3596,0,0,"%s",
                                  "STBoatC::Teleport, TELEPORT_MOVETELE error");
          if (local_EAX_1428 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar11 = 0x3596;
          goto LAB_00479ba6;
        }
      }
      iVar11 = (int)*(short *)&this->field_0x655;
      sVar19 = *(short *)&this->field_0x653;
      sVar8 = *(short *)&this->field_0x651;
    }
    st::fn_00404F6B(this,(int)sVar8,(int)sVar19,iVar11);
  }
  st::fn_004031DE(this,0);
switchD_00479647_caseD_2:
  return 2;
}

// 0047BF70 STBoatC::BackTeleport
#line 4 "decomp/ST.exe/functions/0047BF70/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackTeleport */

int __thiscall st::fn_0047BF70(STBoatC *this,int *param_1)

{
  int local_EAX_40;
  int local_EAX_63;
  int iVar2;
  int local_EAX_111;
  int iVar3;

  this->field_00B7 = 0;
  switch(*(undefined4 *)&this->field_0x663) {
  case 0:
  case 1:
  case 7:
    local_EAX_40 = st::fn_00403DF0(this);
    return local_EAX_40;
  case 2:
    st::fn_004041F1(this);
    local_EAX_63 = st::fn_00403DF0(this);
    return local_EAX_63;
  case 3:
  case 4:
  case 5:
  case 6:
    iVar2 = st::fn_00405880(this,2);
    return iVar2;
  }
  local_EAX_111 =
       st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3771,0,0,"%s",
                          "STBoatC::BackTeleport incorrect entry");
  if (local_EAX_111 == 0) {
    return -1;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0047C050 STBoatC::Bring
#line 4 "decomp/ST.exe/functions/0047C050/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Bring */

undefined4 __thiscall st::fn_0047C050(STBoatC *this,STBoatC *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STBoatC_field_0687State SVar4;
  ushort uVar6;
  int local_EAX_49;
  int local_EAX_93;
  int local_EAX_327;
  int local_EAX_674;
  int iVar8;
  int local_EAX_920;
  int local_EAX_1049;
  int local_EAX_1093;
  int local_EAX_1395;
  int local_EAX_1620;
  int local_EAX_1820;
  int local_EAX_2517;
  int local_EAX_2567;
  undefined4 uVar9;
  int iVar7;
  dword dVar10;
  int iVar11;
  int iVar12;
  STWorldObject *this_00;
  uint local_14;
  short local_10;
  short local_e;
  short local_c;
  STBoatC *local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == nullptr) || (param_1 == (STBoatC *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar8 = *(int *)((int)this->field_06CB + 0x2c);
    this->field_02C4 = 0;
    if ((((iVar8 != 7) && (iVar8 != 0x13)) && (iVar8 != 0x1b)) ||
       (this->field_07CA == nullptr)) {
      return 0;
    }
    iVar8 = st::fn_006E62D0(g_playSystem_00802A38,this->field_07CA,(int *)&param_1);
    if (iVar8 == -4) {
      iVar7 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3781,0,0,"%s",
                                 "STBoatC::Bring can not find object");
      if (iVar7 == 0) {
        return 0;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    sVar1 = this->field_041B;
    sVar2 = this->field_041D;
    this->field_066B = param_1->field_0020;
    sVar3 = this->field_0419;
    this->field_066F = sVar3;
    this->field_0671 = sVar1;
    this->field_0673 = sVar2;
    if ((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
        ((sVar1 < 0 || ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar2)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (STBoatC *)
                STGridAt3D(g_worldGrid, sVar3, sVar1, sVar2).objects[0];
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == nullptr) {
      return 0;
    }
    dVar10 = param_1->slot_2C();
    this->field_0675 = dVar10;
    if ((((dVar10 != 0x52) && (dVar10 != 0x5f)) || (this->field_066B != 0x1a4)) && (dVar10 != 99)) {
      return 0;
    }
    iVar12 = this->field_0673 + 1;
    iVar8 = (int)this->field_0671;
    this->field_0679 = param_1->field_0018;
    iVar11 = (int)this->field_066F;
    this->field_0687 = CASE_0;
    this->field_00B7 = 3;
    goto cf_common_exit_0047C9FE;
  }
  SVar4 = this->field_0687;
  if (SVar4 == CASE_0) {
    local_EAX_49 = st::fn_004031DE(this,2);
    switch(local_EAX_49) {
    case 0:
      goto switchD_0047c090_caseD_0;
    case 1:
      sVar1 = this->field_066F;
      sVar2 = this->field_0673;
      sVar3 = this->field_0671;
      if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
         (((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) ||
          (g_worldGrid.sizeZ <= sVar2)))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (STBoatC *)
                  STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
      }
      if (((param_1 != nullptr) && (param_1->field_0018 == this->field_0679)) &&
         (iVar8 = param_1->vfunc_F8(), iVar8 != 0)) {
        return 2;
      }
      st::fn_00403855(this);
      this->field_00B7 = 0;
      return 0;
    default:
      return 2;
    case 3:
      st::fn_00404F6B(this,(int)this->field_066F,(int)this->field_0671,this->field_0673 + 1);
      st::fn_004031DE(this,0);
      return 2;
    case -1:
      local_EAX_93 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x379a,0,0,
                                        "%s","STBoatC::Bring, BRING_MOVE error");
      if (local_EAX_93 == 0) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x379a
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  if (SVar4 != CASE_1) {
    if (SVar4 == CASE_2) {
      local_EAX_1049 = st::fn_004031DE(this,2);
      switch(local_EAX_1049) {
      case 0:
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
           ((sVar3 < 0 ||
            (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)
                    STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
        }
        if (((param_1 != nullptr) && (param_1->field_0018 == this->field_0679)) &&
           ((iVar8 = param_1->vfunc_F8(), iVar8 != 0 &&
            ((param_1->field_0020 != 1000 ||
             ((*(int *)((int)&param_1->field_04B3 + 1) == 0 && (*(int *)&param_1->field_0x245 != 6))
             )))))) {
          this->field_05D6 = 0;
          this->field_0687 = CASE_3;
          return 2;
        }
        break;
      case 1:
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
           ((sVar3 < 0 ||
            (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)
                    STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
        }
        if (((param_1 != nullptr) && (param_1->field_0018 == this->field_0679)) &&
           (iVar8 = param_1->vfunc_F8(), iVar8 != 0)) {
          return 2;
        }
        break;
      default:
        return 2;
      case 3:
        local_EAX_1395 =
             st::fn_0040214E(this,&this->field_067D,&this->field_067F,&this->field_0681);
        if (local_EAX_1395 == 1) {
          iVar12 = (int)this->field_0681;
          iVar8 = (int)this->field_067F;
          iVar11 = (int)this->field_067D;
          goto cf_common_exit_0047C9FE;
        }
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
           ((sVar3 < 0 ||
            (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)
                    STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
        }
        if (((param_1 != nullptr) && (param_1->field_0018 == this->field_0679)) &&
           (iVar8 = param_1->vfunc_F8(), iVar8 != 0)) {
          if (this->field_0675 == 99) {
            st::fn_00402743(param_1,this);
          }
          goto cf_common_exit_0047C68C;
        }
        break;
      case -1:
        local_EAX_1093 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x37e9,0,0,"%s",
                                "STBoatC::Bring, BRING_MOVEOBJ error");
        if (local_EAX_1093 == 0) {
          st::fn_006A5E40
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x37e9);
          return 0xffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0047C74D;
    }
    if (SVar4 == CASE_3) {
      local_EAX_1820 = st::fn_004011AE(this,2);
      if (((this->field_07CA != nullptr) && (this->field_07C6 != 0)) &&
         (local_EAX_1820 == 0)) {
        this->field_05D6 = 0;
        return 2;
      }
      if (this->field_05D6 == 1) {
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
            ((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))))) ||
           (g_worldGrid.sizeZ <= sVar2)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)
                    STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
        }
        if (((param_1 != nullptr) && (param_1->field_0018 == this->field_0679)) &&
           (iVar8 = param_1->vfunc_F8(), iVar8 != 0)) {
          if (this->field_0675 == 99) {
            st::fn_00402743(param_1,this);
          }
          sVar1 = this->field_0047;
          sVar2 = this->field_004B;
          sVar3 = this->field_0049;
          if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
              ((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))))) ||
             (g_worldGrid.sizeZ <= sVar2)) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = nullptr;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (STBoatC *)
                      STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
          }
          if (param_1 != nullptr) {
            if (this->field_066B == 0x14) {
              if (this->field_0675 == 99) {
                local_c = this->field_0673;
                local_e = this->field_0671;
                local_10 = this->field_066F;
                if (((((local_10 < 0) || (g_worldGrid.sizeX <= local_10)) || (local_e < 0)) ||
                    ((g_worldGrid.sizeY <= local_e || (local_c < 0)))) ||
                   (g_worldGrid.sizeZ <= local_c)) {
                  this_00 = nullptr;
                }
                else {
                  this_00 = STGridAt3D(g_worldGrid, local_10, local_e, local_c).objects[0];
                }
                local_14 = g_playSystem_00802A38->field_00E4;
                local_8 = param_1;
                st::fn_00402126(param_1,CASE_B,&local_14);
                st::fn_0040162C(this_00,param_1);
                return 2;
              }
            }
            else {
              *(undefined1 *)((int)&param_1->field_0314 + 3) = 1;
            }
          }
          return 2;
        }
        goto cf_common_exit_0047C74D;
      }
      if (this->field_07CA != nullptr) {
        return 2;
      }
      if (this->field_07C6 != 0) {
        return 2;
      }
      if (local_EAX_1820 != 0) {
        return 2;
      }
      this->field_0687 = CASE_4;
    }
    else {
      if (SVar4 != CASE_4) {
        local_EAX_2567 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3857,0,0,"%s",
                                "STBoatC::Bring - incorrect entry");
        if (local_EAX_2567 == 0) {
          return 0xffffffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      local_EAX_2517 = st::fn_004031DE(this,2);
      if (local_EAX_2517 == -1) {
        return 0xffffffff;
      }
      if (local_EAX_2517 == 0) {
        return 0;
      }
      if (local_EAX_2517 != 3) {
        return 2;
      }
    }
    uVar6 = this->field_0673 + 1;
    st::fn_00404908(this,this->field_066F,this->field_0671,uVar6,this->field_066F,this->field_0671,
                 (int *)(uint)uVar6,2,&this->field_067D,&this->field_067F,&this->field_0681);
    iVar12 = (int)this->field_0681;
    iVar8 = (int)this->field_067F;
    iVar11 = (int)this->field_067D;
    goto cf_common_exit_0047C9FE;
  }
  this->field_0683 = this->field_0683 + 1;
  local_EAX_674 = st::fn_00403A2B(this,2);
  if (local_EAX_674 == -1) {
    return 0xffffffff;
  }
  if (this->field_082E != 0) {
    return 2;
  }
  if (this->field_048B != 0xffff) {
    return 2;
  }
  if (this->field_0683 % 0x32 != 0) {
    return 2;
  }
  sVar1 = this->field_066F;
  sVar2 = this->field_0673;
  sVar3 = this->field_0671;
  if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
     ((sVar3 < 0 || (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2))))
     )) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = nullptr;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (STBoatC *)
              STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((param_1 == nullptr) || (param_1->field_0018 != this->field_0679)) ||
     (iVar8 = param_1->vfunc_F8(), iVar8 == 0)) {
cf_common_exit_0047C74D:
    st::fn_00403855(this);
    return 0;
  }
  local_EAX_920 = st::fn_0040214E(this,&this->field_067D,&this->field_067F,&this->field_0681);
  if (local_EAX_920 != 1) {
    return 2;
  }
  if (this->field_0675 == 99) {
    iVar8 = st::fn_0040162C(param_1,this);
    if (iVar8 == 1) goto cf_common_exit_0047C43E;
    if (this->field_0675 == 99) {
      return 2;
    }
  }
  local_8 = param_1;
  iVar8 = st::fn_00405470(param_1);
  if (iVar8 == 0) {
    return 2;
  }
  if (local_8->field_0508 != CASE_0) {
    return 2;
  }
  goto cf_common_exit_0047C43E;
switchD_0047c090_caseD_0:
  sVar1 = this->field_066F;
  sVar2 = this->field_0673;
  sVar3 = this->field_0671;
  this->field_00B7 = 0;
  if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
      ((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))))) ||
     (g_worldGrid.sizeZ <= sVar2)) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = nullptr;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (STBoatC *)
              STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((param_1 == nullptr) || (param_1->field_0018 != this->field_0679)) ||
     (iVar8 = param_1->vfunc_F8(), iVar8 == 0)) goto cf_common_exit_0047C74D;
  local_EAX_327 = st::fn_0040214E(this,&this->field_067D,&this->field_067F,&this->field_0681);
  if (local_EAX_327 != 1) goto cf_common_exit_0047C68C;
  if (this->field_0675 == 99) {
    iVar8 = st::fn_0040162C(param_1,this);
    if (iVar8 == 1) goto cf_common_exit_0047C43E;
    if (this->field_0675 == 99) goto cf_common_exit_0047C68C;
  }
  local_8 = param_1;
  iVar8 = st::fn_00405470(param_1);
  if ((iVar8 == 0) || (local_8->field_0508 != CASE_0)) {
cf_common_exit_0047C68C:
    this->field_0687 = CASE_1;
    this->field_0683 = 0;
    local_EAX_1620 = st::fn_00403A2B(this,0);
    if (local_EAX_1620 != -1) {
      return 2;
    }
    return 0xffffffff;
  }
cf_common_exit_0047C43E:
  iVar12 = (int)this->field_0681;
  iVar8 = (int)this->field_067F;
  iVar11 = (int)this->field_067D;
  this->field_0687 = CASE_2;
cf_common_exit_0047C9FE:
  st::fn_00404F6B(this,iVar11,iVar8,iVar12);
  st::fn_004031DE(this,0);
  return 2;
}

// 0047CF20 STBoatC::BackBring
#line 4 "decomp/ST.exe/functions/0047CF20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackBring

   [STSwitchEnumApplier] Switch target field_0687 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0687State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

int __thiscall st::fn_0047CF20(STBoatC *this,int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;
  int local_EAX_179;
  int iVar5;
  int local_EAX_229;
  int iVar6;

  sVar1 = this->field_066F;
  sVar2 = this->field_0673;
  sVar3 = this->field_0671;
  this->field_00B7 = 0;
  if ((((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar3)) &&
       ((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)))) &&
      ((sVar2 < g_worldGrid.sizeZ &&
       ((this_00 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], this_00 != nullptr &&
        (*(int *)&this_00->field_0x18 == this->field_0679)))))) && (this->field_0675 == 99)) {
    st::fn_00402743(this_00,this);
  }
  switch(this->field_0687) {
  case CASE_0:
  case CASE_1:
  case CASE_2:
  case CASE_4:
    local_EAX_179 = st::fn_00403DF0(this);
    return local_EAX_179;
  case CASE_3:
    iVar5 = st::fn_004011AE(this,2);
    return iVar5;
  }
  local_EAX_229 =
       st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3870,0,0,"%s",
                          "STBoatC::BackBring incorrect entry");
  if (local_EAX_229 == 0) {
    return -1;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0047D080 STBoatC::Annih
#line 4 "decomp/ST.exe/functions/0047D080/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Annih */

int __thiscall st::fn_0047D080(STBoatC *this,undefined4 *param_1)

{
  uint uVar1;
  STWorldObject *pSVar2;
  undefined4 uVar3;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int local_EAX_499;
  undefined4 *puVar8;
  int local_EAX_1310;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  byte bVar22;
  STMessage local_64;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == nullptr) || (param_1 == (undefined4 *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    sVar15 = this->field_0423;
    sVar16 = this->field_0425;
    sVar17 = this->field_0427;
    this->field_02C4 = 0;
    this->field_068B = sVar15;
    this->field_068D = sVar16;
    this->field_068F = sVar17;
    if (((((sVar15 < 0) || (g_worldGrid.sizeX <= sVar15)) || (sVar16 < 0)) ||
        ((g_worldGrid.sizeY <= sVar16 || (sVar17 < 0)))) ||
       ((g_worldGrid.sizeZ <= sVar17 ||
        (pSVar2 = STGridAt3D(g_worldGrid, sVar15, sVar16, sVar17).objects[0], pSVar2 == nullptr)))) {
LAB_0047d831:
      st::fn_004042A0(this);
      return 0;
    }
    iVar10 = pSVar2->GetObjectTypeId();
    if (iVar10 != 99) goto LAB_0047d831;
    this->field_0691 = this->field_005B;
    this->field_0693 = this->field_005D;
    this->field_0695 = this->field_005F;
    uVar3 = *(undefined4 *)&pSVar2->field_0x18;
    this->field_06A1 = 0;
    this->field_0697 = uVar3;
    this->field_06A5 = 0;
  }
  iVar10 = this->field_06A1;
  if (iVar10 == 0) {
    if (this->field_06A5 == 0) {
      iVar6 = (ushort)(this->field_068F * 200) + 0xfa;
      iVar10 = STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_068D + 1)) * 0xc9;
      iVar12 = STReplaceLowWord((uint32_t)(iVar10), (uint16_t)(this->field_068B + 1));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         CONCAT22((short)((uint)(iVar12 * 0x19) >> 0x10),this->field_0045),
                         (short)(iVar12 * 0xc9),(short)iVar10,iVar6);
      this->field_069B = uVar5;
      this->field_06A5 = 1;
    }
    if (this->field_06A5 == 1) {
      uVar7 = st::fn_004030B2(this,this->field_069B);
      uVar7 = st::fn_004022FC(this,(short)uVar7);
      if (uVar7 == 0xffffffff) {
        local_EAX_499 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3896,0,0,"%s",
                                "STBoatC::Annih ANNIH_MOVE 1");
        if (local_EAX_499 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (uVar7 == 0) {
        this->field_06A5 = 2;
      }
    }
    else {
      if (this->field_06A5 == 2) {
        st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                     (this->field_068B + 1) * 0xc9,(this->field_068D + 1) * 0xc9,
                     this->field_068F * 200 + 0xfa,this->field_0061);
        this->field_06A5 = 3;
      }
      if (this->field_06A5 == 3) {
        local_18 = st::fn_00402847((STJellyGunC *)this,&local_14,&local_10);
        uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar7;
        iVar10 = (uVar7 >> 0x10) % 7 - 3;
        uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar7;
        uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar1;
        local_8 = (uVar1 >> 0x10) % 7 - 3;
        if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
           (local_c = 0, this->field_02BF != '\0')) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar8 = (undefined4 *)
                     st::fn_0040342C(local_28,(short)*param_1,*(ushort *)(param_1 + 1),
                                        this->field_006C);
            uVar3 = *puVar8;
            bVar22 = 0;
            sVar21 = 0;
            iVar6 = -1;
            local_1c = *(short *)(puVar8 + 1);
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            sVar15 = 0;
            local_20 = uVar3;
            if (DAT_0080732c == 1) {
              sVar15 = 0;
              sVar16 = 0;
              sVar17 = 0;
              sVar18 = 0;
              sVar19 = 0;
              sVar20 = 0;
              sVar21 = 0;
              bVar22 = 0;
              lVar14 = st::fn_0072E288();
              iVar11 = (int)local_1c + this->field_0045 + local_8 + (int)(short)lVar14;
              iVar12 = (int)this->field_0043 - (int)STPiece<2,2>(local_20);
              iVar13 = (int)(short)local_20 + iVar10 + this->field_0041;
            }
            else {
              iVar11 = (int)local_1c + local_8 + this->field_0045;
              STPiece<2,2>(local_20) = (short)((uint)uVar3 >> 0x10);
              iVar12 = (int)this->field_0043 - (int)STPiece<2,2>(local_20);
              STPiece<0,2>(local_20) = (short)uVar3;
              iVar13 = (int)(short)local_20 + iVar10 + this->field_0041;
            }
            st::fn_00401433
                      (g_traksClass_00802A7C,1,2,7,iVar13,iVar12 + ((uVar7 >> 0x10) % 7 - 3),iVar11,
                       sVar15,sVar16,sVar17,sVar18,sVar19,sVar20,iVar6,sVar21,bVar22);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (undefined4 *)((int)param_1 + 6);
            local_c = local_c + 1;
          } while (local_c < (int)(uint)(byte)this->field_02BF);
        }
        if (local_18 == -1) {
          local_EAX_1310 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x38bd,0,0,"%s",
                                  "STBoatC::Annih ANNIH_MOVE 2");
          if (local_EAX_1310 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (local_18 == 0) {
          sVar15 = this->field_068B;
          sVar16 = this->field_068F;
          sVar17 = this->field_068D;
          if (((((-1 < sVar15) && (sVar15 < g_worldGrid.sizeX)) && (-1 < sVar17)) &&
              ((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)))) &&
             ((sVar16 < g_worldGrid.sizeZ &&
              ((pSVar2 = STGridAt3D(g_worldGrid, sVar15, sVar17, sVar16).objects[0],
               pSVar2 != nullptr && (*(int *)&pSVar2->field_0x18 == this->field_0697)))
              ))) {
            iVar10 = (*pSVar2->vtable[5].slots_00_28[2])();
            if (iVar10 == 1) {
              this->field_06A5 = 0;
              this->field_06A1 = 1;
              this->field_069D = 0;
              st::fn_00405083((int *)pSVar2);
              goto LAB_0047d241;
            }
          }
          st::fn_004042A0(this);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (undefined4 *)g_playSystem_00802A38->field_00E4;
          st::fn_00402126(this,CASE_3,(uint *)&param_1);
        }
      }
    }
LAB_0047d241:
    iVar10 = this->vfunc_D8();
    return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
  }
  if (iVar10 == 1) {
    if (this->field_069D % 5 == 0) {
      sVar15 = this->field_068B;
      sVar16 = this->field_068F;
      sVar17 = this->field_068D;
      if ((((-1 < sVar15) && (sVar15 < g_worldGrid.sizeX)) &&
          ((-1 < sVar17 &&
           (((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) && (sVar16 < g_worldGrid.sizeZ)))))) &&
         ((pSVar2 = STGridAt3D(g_worldGrid, sVar15, sVar17, sVar16).objects[0],
          pSVar2 != nullptr && (*(int *)&pSVar2->field_0x18 == this->field_0697)))) {
        iVar10 = (*pSVar2->vtable[5].slots_00_28[2])();
        if (iVar10 == 1) {
          if (*(int *)&pSVar2[0x22].field_0x8 == 2) {
            this->field_06A1 = 2;
            this->field_069D = 0;
            st::fn_004051A5(this->field_01ED,0,(int)this->field_0041,(int)this->field_0043,
                               (int)this->field_0045,0);
          }
          goto LAB_0047d7e6;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (undefined4 *)g_playSystem_00802A38->field_00E4;
      st::fn_00402126(this,CASE_3,(uint *)&param_1);
    }
  }
  else {
    if (iVar10 != 2) {
      iVar9 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3902,0,0,"%s",
                                 "STBoatC::Annih incorrect entry");
      if (iVar9 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return -1;
    }
    iVar10 = this->field_069D + 1;
    this->field_069D = iVar10;
    if (iVar10 == 0x16) {
      sVar15 = this->field_068B;
      sVar16 = this->field_068F;
      sVar17 = this->field_068D;
      if ((((-1 < sVar15) && (sVar15 < g_worldGrid.sizeX)) &&
          ((-1 < sVar17 &&
           (((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) && (sVar16 < g_worldGrid.sizeZ)))))) &&
         ((pSVar2 = STGridAt3D(g_worldGrid, sVar15, sVar17, sVar16).objects[0],
          pSVar2 != nullptr && (*(int *)&pSVar2->field_0x18 == this->field_0697)))) {
        iVar10 = (*pSVar2->vtable[5].slots_00_28[2])();
        if (iVar10 == 1) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          st::fn_00403CCE(pSVar2,*(int *)((int)this->field_06CB + 0x2c),0,0);
          st::fn_00403BA2((int *)pSVar2);
          st::fn_00402743(pSVar2,this);
        }
      }
      local_30 = 1;
      local_2c = 1;
      local_64.arg0.ptr = &local_44;
      local_44 = 10000;
      local_40 = 0;
      local_3c = 0xfe;
      local_64.id = MESS_HITKILL;
      this->GetMessage(&local_64);
    }
  }
LAB_0047d7e6:
  iVar10 = this->vfunc_D8();
  return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
}

// 0047DA50 STBoatC::BackAnnih
#line 4 "decomp/ST.exe/functions/0047DA50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackAnnih */

int __thiscall st::fn_0047DA50(STBoatC *this,int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 uVar4;
  uint uVar5;
  int local_EAX_269;
  undefined4 *puVar6;
  int local_EAX_865;
  int iVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  int iVar19;
  short sVar20;
  byte bVar21;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  st::fn_004042A0(this);
  if ((this->field_06A1 == 1) || (this->field_06A1 == 2)) {
    iVar8 = st::fn_004014FB(this,(undefined4 *)0x2);
    return iVar8;
  }
  iVar9 = this->field_06A5;
  if (((iVar9 == 0) || (iVar9 == 1)) || (iVar9 == 2)) {
    return 0;
  }
  if (iVar9 == 3) {
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar9 = CONCAT22(extraout_var_00,this->field_0693 * 0xc9) + 100;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar4 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       STReplaceLowWord((uint32_t)(iVar9), (uint16_t)(this->field_0045)),
                       this->field_0691 * 0xc9 + 100,(short)iVar9,
                       CONCAT22(extraout_var,this->field_0695 * 200) + 100);
    this->field_069B = uVar4;
    this->field_06A5 = 4;
  }
  if (this->field_06A5 == 4) {
    uVar5 = st::fn_004030B2(this,this->field_069B);
    uVar5 = st::fn_004022FC(this,(short)uVar5);
    if (uVar5 == 0xffffffff) {
      local_EAX_269 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3925,0,0,"%s",
                              "STBoatC::BackAnnih 1");
      if (local_EAX_269 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar9 = 0x3925;
LAB_0047ddc3:
      st::fn_006A5E40
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar9);
      return 0xffff;
    }
    if (uVar5 == 0) {
      this->field_06A5 = 5;
    }
  }
  else {
    if (this->field_06A5 == 5) {
      st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0691 * 0xc9 + 100,this->field_0693 * 0xc9 + 100,
                   this->field_0695 * 200 + 100,this->field_0061);
      this->field_06A5 = 6;
    }
    if (this->field_06A5 == 6) {
      local_1c = st::fn_00402847((STJellyGunC *)this,&local_18,&local_14);
      uVar5 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar5;
      iVar9 = (uVar5 >> 0x10) % 7 - 3;
      uVar5 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar5;
      uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar1;
      local_c = (uVar1 >> 0x10) % 7 - 3;
      if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
         (local_10 = 0, this->field_02BF != '\0')) {
        local_8 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar6 = (undefined4 *)
                   st::fn_0040342C(local_2c,(short)*local_8,*(ushort *)(local_8 + 1),
                                      this->field_006C);
          uVar2 = *puVar6;
          bVar21 = 0;
          sVar20 = 0;
          iVar19 = -1;
          local_20 = *(short *)(puVar6 + 1);
          sVar18 = 0;
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          sVar14 = 0;
          sVar13 = 0;
          local_24 = uVar2;
          if (DAT_0080732c == 1) {
            sVar13 = 0;
            sVar14 = 0;
            sVar15 = 0;
            sVar16 = 0;
            sVar17 = 0;
            sVar18 = 0;
            sVar20 = 0;
            bVar21 = 0;
            lVar12 = st::fn_0072E288();
            iVar7 = (int)local_20 + this->field_0045 + local_c + (int)(short)lVar12;
            iVar10 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            iVar11 = (int)(short)local_24 + iVar9 + this->field_0041;
          }
          else {
            iVar7 = (int)local_20 + local_c + this->field_0045;
            STPiece<2,2>(local_24) = (short)((uint)uVar2 >> 0x10);
            iVar10 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            STPiece<0,2>(local_24) = (short)uVar2;
            iVar11 = (int)(short)local_24 + iVar9 + this->field_0041;
          }
          st::fn_00401433
                    (g_traksClass_00802A7C,1,2,7,iVar11,iVar10 + ((uVar5 >> 0x10) % 7 - 3),iVar7,
                     sVar13,sVar14,sVar15,sVar16,sVar17,sVar18,iVar19,sVar20,bVar21);
          local_8 = (undefined4 *)((int)local_8 + 6);
          local_10 = local_10 + 1;
        } while (local_10 < (int)(uint)(byte)this->field_02BF);
      }
      if (local_1c == -1) {
        local_EAX_865 =
             st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x394c,0,0,"%s",
                                "STBoatC::BackAnnih 2");
        if (local_EAX_865 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar9 = 0x394c;
        goto LAB_0047ddc3;
      }
      if (local_1c == 0) {
        iVar9 = this->vfunc_D8();
        return -(uint)(iVar9 != 0);
      }
    }
  }
  iVar9 = this->vfunc_D8();
  return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
}

// 0047DF00 STBoatC::Dismant
#line 4 "decomp/ST.exe/functions/0047DF00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Dismant

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0047DF00 -> 006E62D0 @ 0047E48C | 0047DF00 -> 006E62D0 @ 0047E5E1 | 0047DF00 ->
   006E62D0 @ 0047E6BB | 0047DF00 -> 006E62D0 @ 0047EB16 | 0047DF00 -> 006E62D0 @ 0047EC6A
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   Dismant(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=0047DF93 RET 0x4 | 0047E0BD RET 0x4 | 0047E18D RET 0x4 | 0047E2F8 RET 0x4 |
   0047E364 RET 0x4 | 0047E453 RET 0x4 | 0047E478 RET 0x4 | 0047E4BB RET 0x4 | 0047E50A RET 0x4 |
   0047E610 RET 0x4 | 0047E6ED RET 0x4 | 0047E7AB RET 0x4 | 0047ED0B RET 0x4 | 0047EDF5 RET 0x4 |
   0047F0AF RET 0x4 | 0047F0FD RET 0x4 | 0047F119 RET 0x4 | 0047F1B3 RET 0x4 | 0047F1CA RET 0x4 |
   0047F218 RET 0x4 | 0047F249 RET 0x4 | 0047F4C4 RET 0x4 | 0047F50A RET 0x4 */

int __thiscall st::fn_0047DF00(STBoatC *this,int *param_1)

{
  STBoatC_field_06C3State SVar1;
  undefined4 uVar2;
  undefined2 uVar4;
  short sVar7;
  int local_EAX_51;
  int local_EAX_97;
  int iVar8;
  int local_EAX_422;
  int local_EAX_668;
  int iVar9;
  int local_EAX_920;
  int local_EAX_1031;
  int local_EAX_1073;
  int local_EAX_1493;
  int iVar10;
  uint uVar11;
  int local_EAX_2246;
  undefined4 *puVar12;
  uint uVar13;
  int local_EAX_3170;
  short sVar5;
  int local_EAX_3779;
  ushort uVar6;
  AnonShape_005EFAE0_B406B78B *pAVar14;
  int local_EAX_4554;
  int local_EAX_4837;
  int local_EAX_4915;
  short sVar15;
  uint uVar16;
  short sVar17;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  longlong lVar18;
  short sVar19;
  short sVar20;
  int iVar21;
  short sVar22;
  byte bVar23;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  AnonShape_005EFAE0_B406B78B *local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == nullptr) || (param_1 == (int *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar9 = *(int *)((int)this->field_06CB + 0x2c);
    if (((iVar9 != 0xc) && (iVar9 != 0x18)) && (iVar9 != 0x1d)) {
      return 0;
    }
    sVar5 = *(short *)&this->field_0x42d;
    sVar17 = *(short *)&this->field_0x42f;
    sVar15 = *(short *)&this->field_0x431;
    local_1c = *(AnonShape_005EFAE0_B406B78B **)&this->field_0x433;
    this->field_06A9 = sVar5;
    this->field_06AB = sVar17;
    this->field_06AD = sVar15;
    this->field_06AF = local_1c;
    if (g_worldGrid.sizeZ + -2 < (int)sVar15) {
      return 0;
    }
    if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
        ((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar15 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar15)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar17, sVar15).objects[0];
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) {
      return 0;
    }
    if (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
        local_1c) {
      return 0;
    }
    if (*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x20 != 1000) {
      return 0;
    }
    if (*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024) {
      return 0;
    }
    iVar9 = st::fn_0040141A((AnonShape_004B9D90_4F3151F9 *)param_1);
    if (iVar9 == 0) {
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar9 = (**(code **)(*param_1 + 0x2c))();
    iVar9 = *(int *)(&DAT_00791d68 + iVar9 * 4);
    this->field_06B9 = iVar9;
    if (iVar9 == 1) {
      sVar5 = this->field_06AB;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_c = (undefined4 *)CONCAT22(extraout_var,this->field_06AD);
      local_10 = STReplaceLowWord((uint32_t)(local_10), (uint16_t)(sVar5));
      local_8 = 0;
      sVar17 = this->field_06AD + 1;
      local_14 = STReplaceLowWord((uint32_t)(local_14), (uint16_t)(this->field_06A9));
      do {
        local_18 = 0;
        sVar15 = (short)local_8 + this->field_06A9;
        do {
          sVar7 = sVar5 + (short)local_18;
          if (((((-1 < sVar15) && (sVar15 < g_worldGrid.sizeX)) && (-1 < sVar7)) &&
              ((sVar7 < g_worldGrid.sizeY && (-1 < sVar17)))) &&
             ((sVar17 < g_worldGrid.sizeZ &&
              (iVar9 = local_14,
              STGridAt3D(g_pathingGrid, sVar15, sVar7, sVar17) == 0)))) goto LAB_0047f4cd;
          local_18 = local_18 + 1;
        } while (local_18 < 2);
        local_8 = local_8 + 1;
        if (1 < local_8) {
          return 0;
        }
      } while( true );
    }
    uVar4 = (undefined2)((uint)iVar9 >> 0x10);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = (undefined4 *)CONCAT22(uVar4,this->field_06AD);
    sVar5 = this->field_06AB;
    sVar15 = this->field_06AD + 1;
    sVar17 = this->field_06A9;
    if (sVar17 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar17) {
      return 0;
    }
    if (sVar5 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar5) {
      return 0;
    }
    if (sVar15 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar15) {
      return 0;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar9 = CONCAT22(uVar4,sVar17);
    if (STGridAt3D(g_pathingGrid, sVar17, sVar5, sVar15) != 0) {
      return 0;
    }
LAB_0047f4cd:
    this->field_06C3 = CASE_0;
    this->field_00B7 = 3;
    st::fn_00404F6B(this,(int)(short)iVar9,(int)sVar5,(short)local_c + 1);
    st::fn_004031DE(this,0);
    return 2;
  }
  SVar1 = this->field_06C3;
  if (SVar1 == CASE_0) {
    local_EAX_51 = st::fn_004031DE(this,2);
    switch(local_EAX_51) {
    case 0:
      sVar5 = this->field_06A9;
      sVar17 = this->field_06AD;
      sVar15 = this->field_06AB;
      this->field_00B7 = 0;
      if (((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
         ((sVar15 < 0 ||
          (((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)))))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar9 = st::fn_0040141A((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 == 0)))) {
        return 0;
      }
      iVar8 = st::fn_00401DD9(this,&this->field_06B3,&this->field_06B5,&this->field_06B7);
      if ((iVar8 == 1) && ((param_1[300] == 0 || (param_1[300] == this->field_0018)))) {
        param_1[300] = this->field_0018;
        this->field_06C3 = CASE_2;
LAB_0047e4df:
        iVar9 = (int)this->field_06B7;
        sVar5 = this->field_06B5;
        sVar17 = this->field_06B3;
LAB_0047e4ee:
        st::fn_00404F6B(this,(int)sVar17,(int)sVar5,iVar9);
        st::fn_004031DE(this,0);
        return 2;
      }
      this->field_06C3 = CASE_1;
      this->field_06BF = 0;
LAB_0047e0a4:
      local_EAX_422 = st::fn_00403A2B(this,0);
      if (local_EAX_422 == -1) {
        return -1;
      }
      break;
    case 1:
      sVar5 = this->field_06A9;
      sVar17 = this->field_06AD;
      sVar15 = this->field_06AB;
      if (((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
         ((sVar15 < 0 ||
          (((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)))))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar9 = st::fn_0040141A((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 == 0)))) {
        st::fn_00403855(this);
        this->field_00B7 = 0;
        return 0;
      }
      break;
    case 3:
      sVar5 = this->field_06AB;
      sVar17 = this->field_06A9;
      iVar9 = this->field_06AD + 1;
      goto LAB_0047e4ee;
    case -1:
      local_EAX_97 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3987,0,0,
                                        "%s","STBoatC::Dismant, DISMANT_MOVE error");
      if (local_EAX_97 == 0) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x3987
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    if (SVar1 == CASE_1) {
      local_EAX_668 = st::fn_00403A2B(this,2);
      if (local_EAX_668 == -1) {
        return -1;
      }
      if (((this->field_082E == 0) && (this->field_048B == 0xffff)) && (this->field_06BF % 10 == 0))
      {
        sVar5 = this->field_06A9;
        sVar17 = this->field_06AD;
        sVar15 = this->field_06AB;
        if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
            ((sVar15 < 0 || ((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)))))) ||
           (g_worldGrid.sizeZ <= sVar17)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) {
          return 0;
        }
        if (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18
            != this->field_06AF) {
          return 0;
        }
        if (*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024) {
          return 0;
        }
        iVar9 = st::fn_0040141A((AnonShape_004B9D90_4F3151F9 *)param_1);
        if (iVar9 == 0) {
          return 0;
        }
        local_EAX_920 =
             st::fn_00401DD9(this,&this->field_06B3,&this->field_06B5,&this->field_06B7);
        if ((local_EAX_920 == 1) && ((param_1[300] == 0 || (param_1[300] == this->field_0018)))) {
          param_1[300] = this->field_0018;
          this->field_06C3 = CASE_2;
          st::fn_00404F6B(this,(int)this->field_06B3,(int)this->field_06B5,(int)this->field_06B7);
          st::fn_004031DE(this,0);
        }
      }
      this->field_06BF = this->field_06BF + 1;
      return 2;
    }
    if (SVar1 != CASE_2) {
      if (SVar1 == CASE_3) {
        if (this->field_06C7 == 0) {
          iVar10 = (ushort)(this->field_06B7 * 200) + 100;
          iVar9 = STReplaceLowWord((uint32_t)(iVar10), (uint16_t)(this->field_06AB + 1)) * 0xc9;
          iVar21 = STReplaceLowWord((uint32_t)(iVar9), (uint16_t)(this->field_06A9 + 1));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar4 = (*this->vtable->vfunc_10)
                            (this->field_0041,this->field_0043,
                             CONCAT22((short)((uint)(iVar21 * 0x19) >> 0x10),this->field_0045),
                             (short)(iVar21 * 0xc9),(short)iVar9,iVar10);
          this->field_06BD = uVar4;
          this->field_06C7 = 1;
        }
        if (this->field_06C7 == 1) {
          uVar11 = st::fn_004030B2(this,this->field_06BD);
          uVar11 = st::fn_004022FC(this,(short)uVar11);
          if (uVar11 == 0xffffffff) {
            local_EAX_2246 =
                 st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3a2d,0,0,"%s"
                                    ,"STBoatC::Dismant, DISMANT_PMOVE");
            if (local_EAX_2246 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar9 = 0x3a2e;
LAB_0047f1f7:
            st::fn_006A5E40
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       iVar9);
            return 0xffff;
          }
          if (uVar11 == 0) {
            this->field_06C7 = 2;
            iVar9 = this->vfunc_D8();
            return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
          }
        }
        if (this->field_06C7 == 2) {
          st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                       (this->field_06A9 + 1) * 0xc9,(this->field_06AB + 1) * 0xc9,
                       this->field_06B7 * 200 + 100,this->field_0061);
          this->field_06C7 = 3;
        }
        if (this->field_06C7 != 3) goto cf_common_exit_0047F19A;
        local_10 = st::fn_00402847((STJellyGunC *)this,&local_18,&local_14);
        local_8 = 0;
        if (this->field_02BF != '\0') {
          local_c = (undefined4 *)&this->field_0x2b3;
          do {
            puVar12 = (undefined4 *)
                      st::fn_0040342C(local_2c,(short)*local_c,*(ushort *)(local_c + 1),
                                         this->field_006C);
            uVar2 = *puVar12;
            local_20 = *(short *)(puVar12 + 1);
            local_24 = uVar2;
            if (DAT_0080732c == 1) {
              bVar23 = 0;
              sVar22 = 0;
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar9 = -1;
              this->field_001C = uVar11;
              sVar20 = 0;
              sVar19 = 0;
              uVar13 = uVar11 * 0x41c64e6d + 0x3039;
              sVar7 = 0;
              this->field_001C = uVar13;
              sVar15 = 0;
              sVar17 = 0;
              local_1c = (AnonShape_005EFAE0_B406B78B *)(uVar13 * 0x41c64e6d + 0x3039);
              sVar5 = 0;
              this->field_001C = local_1c;
              lVar18 = st::fn_0072E288();
              st::fn_00401433
                        (g_traksClass_00802A7C,1,2,7,
                         ((uint)local_1c >> 0x10) % 7 + (int)this->field_0041 + -3 +
                         (int)(short)local_24,
                         (((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_24)) + -3
                         ,(int)(short)lVar18 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                          (int)local_20,sVar5,sVar17,sVar15,sVar7,sVar19,sVar20,iVar9,sVar22,bVar23);
            }
            else {
              uVar13 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar13;
              uVar16 = uVar13 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar16;
              uVar11 = uVar16 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar11;
              STPiece<2,2>(local_24) = (short)((uint)uVar2 >> 0x10);
              iVar9 = (int)STPiece<2,2>(local_24);
              STPiece<0,2>(local_24) = (short)uVar2;
              iVar10 = (int)(short)local_24;
              st::fn_00401433
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar11 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar10,
                         (((uVar16 >> 0x10) % 7 + (int)this->field_0043) - iVar9) + -3,
                         (uVar13 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20,0,0,0,0,0
                         ,0,-1,0,0);
            }
            local_8 = local_8 + 1;
            local_c = (undefined4 *)((int)local_c + 6);
          } while (local_8 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_10 == -1) {
          local_EAX_3170 =
               st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3a53,0,0,"%s",
                                  "STBoatC::Dismant, DISMANT_PMOVE 2");
          if (local_EAX_3170 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar9 = 0x3a54;
LAB_0047edd5:
          st::fn_006A5E40
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     iVar9);
          return 0xffff;
        }
        if (local_10 != 0) goto cf_common_exit_0047F19A;
        sVar5 = this->field_06A9;
        sVar17 = this->field_06AD;
        sVar15 = this->field_06AB;
        if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar15 < 0)) ||
           (((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
        }
        if ((((AnonShape_004B9D90_4F3151F9 *)param_1 != nullptr) &&
            (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18
             == this->field_06AF)) &&
           ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 == this->field_0024 &&
            (iVar9 = st::fn_0040141A((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 != 0)))) {
          st::fn_0040373D((AnonShape_004B9D90_4F3151F9 *)param_1);
          this->field_06C3 = CASE_4;
          goto cf_common_exit_0047F19A;
        }
        st::fn_006E62D0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
        if ((param_1 != nullptr) && (param_1[300] == this->field_0018)) {
          param_1[300] = 0;
        }
      }
      else {
        if (SVar1 != CASE_4) {
          if (SVar1 == CASE_5) {
            if (this->field_06C7 == 0) {
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              iVar9 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_06B5 * 0xc9)) + 100;
              uVar4 = (*this->vtable->vfunc_10)
                                (this->field_0041,this->field_0043,
                                 STReplaceLowWord((uint32_t)(iVar9), (uint16_t)(this->field_0045)),
                                 this->field_06B3 * 0xc9 + 100,(short)iVar9,
                                 STReplaceLowWord((uint32_t)(this), (uint16_t)(this->field_06B7 * 200)) + 100);
              this->field_06BD = uVar4;
              this->field_06C7 = 1;
            }
            if (this->field_06C7 == 1) {
              uVar11 = st::fn_004030B2(this,this->field_06BD);
              uVar11 = st::fn_004022FC(this,(short)uVar11);
              if (uVar11 == 0xffffffff) {
                local_EAX_3779 =
                     st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3aa0,0,0,
                                        "%s","STBoatC::Dismant, DISMANT_OMOVE");
                if (local_EAX_3779 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                iVar9 = 0x3aa1;
                goto LAB_0047edd5;
              }
              if (uVar11 == 0) {
                this->field_06C7 = 2;
                goto cf_common_exit_0047F19A;
              }
            }
            if (this->field_06C7 == 2) {
              st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                           this->field_06B3 * 0xc9 + 100,this->field_06B5 * 0xc9 + 100,
                           this->field_06B7 * 200 + 100,this->field_0061);
              this->field_06C7 = 3;
            }
            if (this->field_06C7 == 3) {
              local_10 = st::fn_00402847((STJellyGunC *)this,&local_14,&local_18);
              local_8 = 0;
              if (this->field_02BF != '\0') {
                local_c = (undefined4 *)&this->field_0x2b3;
                do {
                  puVar12 = (undefined4 *)
                            st::fn_0040342C(local_2c,(short)*local_c,*(ushort *)(local_c + 1),
                                               this->field_006C);
                  local_24 = *puVar12;
                  local_20 = *(short *)(puVar12 + 1);
                  if (DAT_0080732c == 1) {
                    bVar23 = 0;
                    sVar22 = 0;
                    iVar21 = -1;
                    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
                    sVar20 = 0;
                    this->field_001C = uVar11;
                    sVar19 = 0;
                    sVar7 = 0;
                    uVar13 = uVar11 * 0x41c64e6d + 0x3039;
                    sVar15 = 0;
                    this->field_001C = uVar13;
                    local_1c = (AnonShape_005EFAE0_B406B78B *)(uVar13 * 0x41c64e6d + 0x3039);
                    sVar17 = 0;
                    this->field_001C = local_1c;
                    sVar5 = 0;
                    lVar18 = st::fn_0072E288();
                    iVar9 = (int)(short)lVar18 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                            (int)local_20;
                    iVar10 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_24);
                    pAVar14 = local_1c;
                  }
                  else {
                    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
                    bVar23 = 0;
                    this->field_001C = uVar11;
                    uVar13 = uVar11 * 0x41c64e6d + 0x3039;
                    sVar22 = 0;
                    this->field_001C = uVar13;
                    pAVar14 = (AnonShape_005EFAE0_B406B78B *)(uVar13 * 0x41c64e6d + 0x3039);
                    this->field_001C = pAVar14;
                    iVar21 = -1;
                    sVar20 = 0;
                    sVar19 = 0;
                    sVar7 = 0;
                    sVar15 = 0;
                    sVar17 = 0;
                    sVar5 = 0;
                    iVar9 = (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                    STPiece<2,2>(local_24) = (short)((uint)local_24 >> 0x10);
                    iVar10 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_24);
                  }
                  st::fn_00401433
                            (g_traksClass_00802A7C,1,2,7,
                             ((uint)pAVar14 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                             (int)(short)local_24,iVar10 + -3,iVar9,sVar5,sVar17,sVar15,sVar7,sVar19
                             ,sVar20,iVar21,sVar22,bVar23);
                  local_8 = local_8 + 1;
                  local_c = (undefined4 *)((int)local_c + 6);
                } while (local_8 < (int)(uint)(byte)this->field_02BF);
              }
              if (local_10 == -1) {
                local_EAX_4554 =
                     st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3ac6,0,0,
                                        "%s","STBoatC::Dismant, DISMANT_OMOVE 2");
                if (local_EAX_4554 == 0) {
                  st::fn_006A5E40
                            (0xffff,g_overwriteContext_007ED77C,
                             "E:\\__titans\\wlad\\To_boat.cpp",0x3ac7);
                  return 0xffff;
                }
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              if (local_10 == 0) {
                uVar6 = this->field_06AD + 1;
                this->field_06C3 = CASE_6;
                st::fn_00404908(this,this->field_06A9,this->field_06AB,uVar6,this->field_06A9,
                             this->field_06AB,(int *)(uint)uVar6,1,&this->field_06B3,
                             &this->field_06B5,&this->field_06B7);
                st::fn_00404F6B(this,(int)this->field_06B3,(int)this->field_06B5,(int)this->field_06B7);
                iVar9 = st::fn_00403B34(this,0);
                if (iVar9 == -1) {
                  return -1;
                }
              }
            }
            iVar9 = this->vfunc_D8();
            return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
          }
          if (SVar1 != CASE_6) {
            local_EAX_4915 =
                 st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3af1,0,0,"%s"
                                    ,"STBoatC::Dismant - incorrect entry");
            if (local_EAX_4915 == 0) {
              return -1;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar9 = st::fn_00403B34(this,2);
          if (iVar9 == -1) {
            local_EAX_4837 =
                 st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3ade,0,0,"%s"
                                    ,"STBoatC::Dismant, DISMANT_ESCMOVE error");
            if (local_EAX_4837 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar9 = 0x3ade;
            goto LAB_0047f1f7;
          }
          if (iVar9 == 0) {
            iVar9 = this->vfunc_D8();
            return -(uint)(iVar9 != 0);
          }
          if (iVar9 == 3) {
            uVar6 = this->field_06AD + 1;
            st::fn_00404908(this,this->field_06A9,this->field_06AB,uVar6,this->field_06A9,
                         this->field_06AB,(int *)(uint)uVar6,1,&this->field_06B3,&this->field_06B5,
                         &this->field_06B7);
            st::fn_00404F6B(this,(int)this->field_06B3,(int)this->field_06B5,(int)this->field_06B7);
            st::fn_00403B34(this,0);
          }
          goto cf_common_exit_0047F19A;
        }
        sVar5 = this->field_06A9;
        sVar17 = this->field_06AD;
        sVar15 = this->field_06AB;
        if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar15 < 0)) ||
            ((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)))) || (g_worldGrid.sizeZ <= sVar17)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
        }
        if ((((AnonShape_004B9D90_4F3151F9 *)param_1 != nullptr) &&
            (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18
             == this->field_06AF)) &&
           ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 == this->field_0024 &&
            (iVar9 = st::fn_0040141A((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 != 0)))) {
          if (STField<int>(param_1,0x245) == 6) {
            if (this->field_06B9 == 1) {
              this->field_06C3 = CASE_5;
              this->field_06C7 = 0;
            }
            else {
              this->field_06C3 = CASE_6;
            }
          }
          goto cf_common_exit_0047F19A;
        }
        st::fn_006E62D0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
        if ((param_1 != nullptr) && (param_1[300] == this->field_0018)) {
          param_1[300] = 0;
        }
        if (this->field_06B9 != 1) {
          sVar5 = this->field_06AD + 1;
          this->field_06C3 = CASE_6;
          st::fn_00404908(this,this->field_06A9,this->field_06AB,sVar5,this->field_06A9,
                       this->field_06AB,(int *)STReplaceLowWord((uint32_t)(param_1), (uint16_t)(sVar5)),1,
                       &this->field_06B3,&this->field_06B5,&this->field_06B7);
          st::fn_00404F6B(this,(int)this->field_06B3,(int)this->field_06B5,(int)this->field_06B7);
          iVar9 = st::fn_00403B34(this,0);
          if (iVar9 == -1) {
            return -1;
          }
          goto cf_common_exit_0047F19A;
        }
      }
      this->field_06C3 = CASE_5;
      this->field_06C7 = 0;
cf_common_exit_0047F19A:
      iVar9 = this->vfunc_D8();
      return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
    }
    local_EAX_1031 = st::fn_004031DE(this,2);
    switch(local_EAX_1031) {
    case 0:
      sVar5 = this->field_06A9;
      sVar17 = this->field_06AD;
      sVar15 = this->field_06AB;
      if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar15 < 0)) ||
         (((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar9 = st::fn_0040141A((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 == 0)))) {
        st::fn_006E62D0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_1 == nullptr) {
          return 0;
        }
      }
      else {
        if (this->field_06B9 != 1) {
          st::fn_0040373D((AnonShape_004B9D90_4F3151F9 *)param_1);
          this->field_06C3 = CASE_4;
          return 2;
        }
        if (((this->field_0047 == this->field_06B3) && (this->field_0049 == this->field_06B5)) &&
           (this->field_004B == this->field_06B7)) {
          this->field_06C3 = CASE_3;
          this->field_06C7 = 0;
          return 2;
        }
      }
      if (param_1[300] != this->field_0018) {
        return 0;
      }
      param_1[300] = 0;
      return 0;
    case 1:
      sVar5 = this->field_06A9;
      sVar17 = this->field_06AD;
      sVar15 = this->field_06AB;
      if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar15 < 0)) ||
          ((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)))) || (g_worldGrid.sizeZ <= sVar17)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar9 = st::fn_0040141A((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 == 0)))) {
        st::fn_006E62D0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
        if ((param_1 != nullptr) && (param_1[300] == this->field_0018)) {
          param_1[300] = 0;
        }
        st::fn_00403855(this);
        return 0;
      }
      break;
    case 3:
      local_EAX_1493 =
           st::fn_00401DD9(this,&this->field_06B3,&this->field_06B5,&this->field_06B7);
      if (local_EAX_1493 == 1) goto LAB_0047e4df;
      sVar5 = this->field_06A9;
      sVar17 = this->field_06AD;
      sVar15 = this->field_06AB;
      if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar15 < 0)) ||
         (((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar9 = st::fn_0040141A((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 == 0)))) {
        st::fn_006E62D0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_1 == nullptr) {
          return 0;
        }
        if (param_1[300] != this->field_0018) {
          return 0;
        }
        param_1[300] = 0;
        return 0;
      }
      if (param_1[300] == this->field_0018) {
        param_1[300] = 0;
      }
      this->field_06C3 = CASE_1;
      this->field_06BF = 0;
      goto LAB_0047e0a4;
    case -1:
      local_EAX_1073 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x39d9,0,0,"%s",
                              "STBoatC::Dismant DISMANT_MOVEOBJ error");
      if (local_EAX_1073 == 0) {
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x39d9
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return 2;
}

// 0047FAD0 STBoatC::BackDismant
#line 4 "decomp/ST.exe/functions/0047FAD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackDismant

   [STSwitchEnumApplier] Switch target field_06C3 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06C3State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   BackDismant(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=0047FBD4 RET 0x4 | 0047FBE0 RET 0x4 | 0047FC0A RET 0x4 | 0047FD01 RET 0x4 |
   0047FD11 RET 0x4 | 0047FD3E RET 0x4 */

int __thiscall st::fn_0047FAD0(STBoatC *this,int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int local_EAX_44;
  int iVar5;
  int local_EAX_602;
  int iVar6;

  this->field_00B7 = 0;
  switch(this->field_06C3) {
  case CASE_0:
  case CASE_1:
  case CASE_2:
  case CASE_6:
    break;
  case CASE_3:
    this->field_06C3 = CASE_5;
    this->field_06C7 = 0;
    iVar6 = this->vfunc_D8();
    return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
  case CASE_4:
    sVar1 = this->field_06A9;
    sVar2 = this->field_06AD;
    sVar3 = this->field_06AB;
    if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
        ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
        (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
         this->field_06AF)) ||
       ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
        (iVar6 = st::fn_0040141A((AnonShape_004B9D90_4F3151F9 *)param_1), iVar6 == 0)))) {
      st::fn_006E62D0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
    }
    if (param_1 != nullptr) {
      st::fn_00405E3E(param_1,this);
    }
    if (this->field_06B9 == 1) {
      this->field_06C3 = CASE_5;
      this->field_06C7 = 0;
    }
    else {
      this->field_06C3 = CASE_6;
    }
    iVar6 = this->vfunc_D8();
    return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
  case CASE_5:
    iVar5 = st::fn_00403C1F(this,(int *)0x2);
    return iVar5;
  default:
    local_EAX_602 =
         st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3b30,0,0,"%s",
                            "STBoatC::BackDismant incorrect entry");
    if (local_EAX_602 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_EAX_44 = st::fn_00403DF0(this);
  if (local_EAX_44 == 0) {
    sVar1 = this->field_06A9;
    sVar2 = this->field_06AD;
    sVar3 = this->field_06AB;
    if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
        ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
        (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
         this->field_06AF)) ||
       ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
        (iVar6 = st::fn_0040141A((AnonShape_004B9D90_4F3151F9 *)param_1), iVar6 == 0)))) {
      st::fn_006E62D0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
    }
    if ((param_1 != nullptr) && (param_1[300] == this->field_0018)) {
      param_1[300] = 0;
    }
    return 0;
  }
  return 2;
}

// 0047FE10 STBoatC::Scout
#line 4 "decomp/ST.exe/functions/0047FE10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Scout

   [STSwitchEnumApplier] Switch target field_06E3 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06E3State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

int __thiscall st::fn_0047FE10(STBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar7;
  STGroupBoatC *pSVar8;
  int local_EAX_123;
  int local_EAX_180;
  int local_EAX_400;
  int local_EAX_632;
  int local_EAX_693;
  int local_EAX_876;
  int iVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    sVar1 = *(short *)&this->field_0x43f;
    sVar3 = *(short *)&this->field_0x43d;
    uVar4 = *(undefined2 *)&this->field_0x441;
    sVar2 = *(short *)&this->field_0x43b;
    *(short *)((int)this->field_06CB + 4) = sVar1;
    *(short *)((int)this->field_06CB + 2) = sVar3;
    *(undefined2 *)((int)this->field_06CB + 6) = uVar4;
    *(undefined2 *)(this->field_06CB + 1) = *(undefined2 *)&this->field_0x443;
    uVar4 = *(undefined2 *)&this->field_0x445;
    this->field_02C4 = 0;
    *(undefined4 *)(this->field_06CB + 3) = 0;
    *(short *)this->field_06CB = sVar2;
    *(undefined2 *)((int)this->field_06CB + 10) = uVar4;
    *(undefined4 *)((int)this->field_06CB + 0x1c) = 0;
    st::fn_00404F6B(this,(int)sVar2,(int)sVar3,(int)sVar1);
    iVar7 = st::fn_00403B34(this,0);
    return (-(uint)(iVar7 != -1) & 3) - 1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar7 = *(int *)((int)this->field_06CB + 0x1c);
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar7 = this->StopMove(unaff_EDI);
      if (iVar7 == -1) {
        return -1;
      }
      if (iVar7 == 1) {
        *(undefined4 *)((int)this->field_06CB + 0x1c) = 2;
        *(undefined4 *)(this->field_06CB + 3) = 0;
        st::fn_00404F6B(this,(int)*(short *)((int)this->field_06CB + 6),(int)(short)this->field_06CB[1]
                     ,(int)*(short *)((int)this->field_06CB + 10));
        iVar7 = st::fn_00403B34(this,0);
        if (iVar7 == -1) {
          return -1;
        }
      }
      iVar7 = this->vfunc_D8();
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    if (iVar7 != 2) {
      iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3bbf,0,0,"%s",
                                 "STBoatC::Scout incorrect entry");
      if (iVar6 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar7 = st::fn_00403B34(this,2);
    if (iVar7 == -1) {
      return -1;
    }
    if (iVar7 == 0) {
      return 0;
    }
    if (iVar7 != 3) {
      return 2;
    }
    pSVar8 = st::fn_00405CF9(*(char *)&this->field_0024,this->field_0030);
    if (pSVar8 == nullptr) {
      local_EAX_632 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3b9b,0,0,"%s",
                              "STBoatC::Scout ptr==NULL");
      if (local_EAX_632 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    local_EAX_693 =
         st::fn_0040407A(pSVar8,(uint)(ushort)this->field_0032,
                            (short *)(int)*(short *)((int)this->field_06CB + 6),
                            (short *)(int)(short)this->field_06CB[1],
                            (short *)(int)*(short *)((int)this->field_06CB + 10),'\0');
    switch((int)this->field_06CB[3]) {
    case 0:
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 1:
      if (*(int *)((int)this->field_06CB + 0xc) <= local_EAX_693) {
        *(int *)(this->field_06CB + 2) = local_EAX_693;
        *(undefined4 *)(this->field_06CB + 3) = 2;
        goto cf_common_exit_004800EC;
      }
      break;
    case 2:
      if ((int)this->field_06CB[2] <= local_EAX_693) {
        *(int *)((int)this->field_06CB + 0x14) = local_EAX_693;
        *(undefined4 *)(this->field_06CB + 3) = 3;
        goto cf_common_exit_004800EC;
      }
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 3:
      if (*(int *)((int)this->field_06CB + 0x14) <= local_EAX_693) {
        return 0;
      }
      break;
    default:
      local_EAX_876 =
           st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3bb7,0,0,"%s",
                              "STBoatC::Scout incorrect ssi.num 2");
      if (local_EAX_876 == 0) {
        return 2;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    *(int *)((int)this->field_06CB + 0xc) = local_EAX_693;
    *(undefined4 *)(this->field_06CB + 3) = 1;
cf_common_exit_004800EC:
    st::fn_00404F6B(this,(int)*(short *)((int)this->field_06CB + 6),(int)(short)this->field_06CB[1],
                 (int)*(short *)((int)this->field_06CB + 10));
    iVar7 = st::fn_00403B34(this,0);
    if (iVar7 != -1) {
      return 2;
    }
    return -1;
  }
  iVar7 = st::fn_00403B34(this,2);
  if (iVar7 == -1) {
    return -1;
  }
  if (iVar7 == 0) {
LAB_0047ff46:
    sVar1 = *(short *)((int)this->field_06CB + 10);
    sVar3 = (short)this->field_06CB[1];
    sVar2 = *(short *)((int)this->field_06CB + 6);
    *(undefined4 *)((int)this->field_06CB + 0x1c) = 2;
    goto LAB_0047ff67;
  }
  if (iVar7 != 3) {
    return 2;
  }
  pSVar8 = st::fn_00405CF9(*(char *)&this->field_0024,this->field_0030);
  if (pSVar8 == nullptr) {
    local_EAX_123 =
         st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3b57,0,0,"%s",
                            "STBoatC::Scout ptr==NULL");
    if (local_EAX_123 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_EAX_180 =
       st::fn_0040407A(pSVar8,(uint)(ushort)this->field_0032,
                          (short *)(int)(short)this->field_06CB[0],
                          (short *)(int)*(short *)((int)this->field_06CB + 2),
                          (short *)(int)*(short *)((int)this->field_06CB + 4),'\0');
  switch((int)this->field_06CB[3]) {
  case 0:
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 1:
    if (local_EAX_180 < *(int *)((int)this->field_06CB + 0xc)) break;
    *(int *)(this->field_06CB + 2) = local_EAX_180;
    *(undefined4 *)(this->field_06CB + 3) = 2;
    goto cf_common_exit_0047FEEB;
  case 2:
    if ((int)this->field_06CB[2] <= local_EAX_180) {
      *(int *)((int)this->field_06CB + 0x14) = local_EAX_180;
      *(undefined4 *)(this->field_06CB + 3) = 3;
      goto cf_common_exit_0047FEEB;
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 3:
    if (*(int *)((int)this->field_06CB + 0x14) <= local_EAX_180) {
      *(undefined4 *)(this->field_06CB + 3) = 0;
      goto LAB_0047ff46;
    }
    break;
  default:
    local_EAX_400 =
         st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3b76,0,0,"%s",
                            "STBoatC::Scout incorrect ssi.num");
    if (local_EAX_400 == 0) {
      return 2;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  *(int *)((int)this->field_06CB + 0xc) = local_EAX_180;
  *(undefined4 *)(this->field_06CB + 3) = 1;
cf_common_exit_0047FEEB:
  sVar1 = *(short *)((int)this->field_06CB + 4);
  sVar3 = *(short *)((int)this->field_06CB + 2);
  sVar2 = (short)this->field_06CB[0];
LAB_0047ff67:
  st::fn_00404F6B(this,(int)sVar2,(int)sVar3,(int)sVar1);
  iVar7 = st::fn_00403B34(this,0);
  if (iVar7 != -1) {
    return 2;
  }
  return -1;
}

// 00482450 STBoatC::GetExplosionInfo
#line 4 "decomp/ST.exe/functions/00482450/decomp.c"
/* WARNING: Removing unreachable block (ram,0x0048268f) */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetExplosionInfo */

undefined4 __thiscall
st::fn_00482450
          (STBoatC *this,uint param_1,short *param_2,short *param_3,short *param_4,uint *param_5)

{
  longlong lVar2;
  STBoatC *pSVar3;
  int local_EAX_54;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  longlong local_EDXEAX_291;
  longlong lVar11;
  longlong local_EDXEAX_341;
  longlong local_EDXEAX_464;
  longlong local_EDXEAX_484;
  longlong local_EDXEAX_525;
  longlong lVar12;
  InternalExceptionFrame local_80;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  ushort local_30;
  uint local_2c;
  uint local_28;
  STBoatC *local_24;
  longlong local_20;
  uint local_18;
  float local_14 [2];
  float local_c;
  float local_8;

  local_28 = param_1 >> 0x10;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_20 = CONCAT44(param_1,(undefined4)local_20) & 0xffffffffffff;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_24 = this;
  local_EAX_54 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  pSVar3 = local_24;
  if (local_EAX_54 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3d5f,0,local_EAX_54,
                               "%s","STBoatC::GetExplosionInfo");
    if (iVar9 == 0) {
      st::fn_006A5E40(local_EAX_54,0,"E:\\__titans\\wlad\\To_boat.cpp",0x3d60);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar10 = STPiece<4,4>(local_20);
  if ((local_20 < 0) || ((int)((byte)local_24->field_0281 - 1) < STPiece<4,4>(local_20))) {
    st::fn_006A5E40
              (-0x5001fff5,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
               0x3d4f);
  }
  iVar3 = st::fn_006ACC70((DArrayTy *)(&pSVar3->field_0282)[iVar10],local_28,&local_34);
  if (iVar3 == -4) {
    st::fn_006A5E40
              (-0x5001fff5,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
               0x3d50);
  }
  puVar4 = (undefined4 *)st::fn_0040342C(&local_3c,(short)local_34,local_30,pSVar3->field_006C);
  uVar9 = *puVar4;
  local_30 = *(ushort *)(puVar4 + 1);
  *param_2 = pSVar3->field_0041 + (short)uVar9;
  STPiece<2,2>(local_34) = (short)((uint)uVar9 >> 0x10);
  *param_3 = pSVar3->field_0043 - STPiece<2,2>(local_34);
  *param_4 = pSVar3->field_0045 + local_30;
  local_34 = uVar9;
  st::fn_006DD530(pSVar3->field_0211,local_14,&local_c,&local_8);
  local_EDXEAX_291 = st::fn_0072E288();
  local_3c = (uint)(short)local_EDXEAX_291;
  local_38 = (int)local_3c >> 0x1f;
  lVar11 = st::fn_0072E288();
  uVar5 = (uint)(short)lVar11;
  local_28 = (int)uVar5 >> 0x1f;
  local_2c = uVar5;
  local_EDXEAX_341 = st::fn_0072E288();
  uVar6 = (uint)(short)local_EDXEAX_341;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_20 = CONCAT44((int)uVar6 >> 0x1f,(undefined4)local_20);
  uVar7 = (uint)pSVar3->field_0043;
  iVar11 = (((int)uVar7 >> 0x1f) - local_28) - (uint)(uVar7 < uVar5);
  uVar8 = (uint)pSVar3->field_0041;
  local_18 = uVar8 - local_3c;
  local_14[0] = (float)((((int)uVar8 >> 0x1f) - local_38) - (uint)(uVar8 < local_3c));
  uVar8 = (uint)*param_4;
  iVar10 = (((int)uVar8 >> 0x1f) - ((int)uVar6 >> 0x1f)) - (uint)(uVar8 < uVar6);
  local_20 = st::fn_0072E4F0(uVar8 - uVar6,iVar10,uVar8 - uVar6,iVar10);
  uVar6 = (uint)*param_2;
  uVar8 = uVar6 - local_3c;
  local_38 = (((int)uVar6 >> 0x1f) - local_38) - (uint)(uVar6 < local_3c);
  uVar6 = (uint)*param_3;
  iVar10 = (((int)uVar6 >> 0x1f) - local_28) - (uint)(uVar6 < local_2c);
  local_EDXEAX_464 = st::fn_0072E4F0(uVar6 - local_2c,iVar10,uVar6 - local_2c,iVar10);
  local_c = (float)((ulonglong)local_EDXEAX_464 >> 0x20);
  local_28 = (uint)local_EDXEAX_464;
  local_EDXEAX_484 = st::fn_0072E4F0(uVar8,local_38,uVar8,local_38);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  lVar2 = local_EDXEAX_484 + CONCAT44(local_c,local_28) + local_20;
  local_28 = (uint)lVar2;
  local_c = (float)((ulonglong)lVar2 >> 0x20);
  local_EDXEAX_525 = st::fn_0072E4F0(local_18,(int)local_14[0],local_18,(int)local_14[0]);
  local_3c = (uint)local_EDXEAX_525;
  lVar12 = st::fn_0072E4F0(uVar7 - uVar5,iVar11,uVar7 - uVar5,iVar11);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  if (lVar12 + CONCAT44((int)((ulonglong)local_EDXEAX_525 >> 0x20),local_3c) + local_20 <=
      CONCAT44(local_c,local_28)) {
    *param_5 = (uint)((short)local_30 + 0x46 < 0x15);
    *param_5 = 1;
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  *param_5 = 0;
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

// 004827F0 STBoatC::ExpIsOver
#line 4 "decomp/ST.exe/functions/004827F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ExpIsOver */

void __thiscall st::fn_004827F0(STBoatC *this,uint param_1)

{
  DArrayTy *array;
  bool bVar2;
  STBoatC *pSVar3;
  int errorCode;
  int iVar4;
  uint uVar5;
  InternalExceptionFrame local_5c;
  short local_18 [4];
  uint local_10;
  uint local_c;
  STBoatC *local_8;

  local_10 = param_1 >> 0x10;
  local_c = param_1 & 0xffff;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  uVar5 = local_c;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3d7f,0,errorCode,
                               "%s","STBoatC::ExpIsOver");
    if (iVar4 == 0) {
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\wlad\\To_boat.cpp",0x3d80);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (((int)local_c < 0) || ((int)((byte)local_8->field_0281 - 1) < (int)local_c)) {
    st::fn_006A5E40
              (-0x5001fff5,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
               0x3d71);
  }
  array = (DArrayTy *)(&local_8->field_0282)[uVar5];
  if (array == nullptr) {
    st::fn_006A5E40
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
               0x3d72);
  }
  uVar5 = local_10;
  st::fn_006ACC70(array,local_10,local_18);
  if (local_18[0] == 0x7fff) {
    st::fn_006A5E40
              (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
               0x3d73);
  }
  local_18[0] = 0x7fff;
  st::fn_006AE140(array,uVar5,local_18);
  uVar5 = 0;
  bVar2 = true;
  if (0 < (int)array->count) {
    do {
      st::fn_006ACC70(array,uVar5,local_18);
      if (local_18[0] != 0x7fff) {
        bVar2 = false;
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)array->count);
  }
  pSVar3 = local_8;
  uVar5 = local_c;
  if (bVar2) {
    st::fn_006AE110((DArrayTy *)(&local_8->field_0282)[local_c]);
    (&pSVar3->field_0282)[uVar5] = 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  return;
}

// 00482A00 STBoatC::ChangeActivity
#line 4 "decomp/ST.exe/functions/00482A00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ChangeActivity

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40
    */

void __thiscall st::fn_00482A00(STBoatC *this,int param_1)

{
  STBoatC *this_00;
  int iVar2;
  int iVar4;
  int iVar3;
  undefined2 arg_2;
  InternalExceptionFrame local_4c;
  STBoatC *local_8;

  if (this->field_0455 != 1) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (iVar2 == 0) {
      if ((param_1 == 1) && (local_8->field_0024 == (uint)DAT_0080874d)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        switch(*(undefined4 *)((int)local_8->field_06CB + 0x2c)) {
        case 1:
          arg_2 = 0xc9;
          break;
        case 2:
          arg_2 = 0xcf;
          break;
        case 3:
          arg_2 = 0xd5;
          break;
        case 4:
          arg_2 = 0xdb;
          break;
        case 5:
          arg_2 = 0xe1;
          break;
        case 6:
          arg_2 = 0xe8;
          break;
        case 7:
          arg_2 = 0xef;
          break;
        case 8:
          arg_2 = 0xf6;
          break;
        case 9:
          arg_2 = 0xfe;
          break;
        case 10:
          arg_2 = 0x103;
          break;
        case 0xb:
          arg_2 = 0x109;
          break;
        case 0xc:
          arg_2 = 0x10f;
          break;
        case 0xd:
          arg_2 = 0x12d;
          break;
        case 0xe:
          arg_2 = 0x133;
          break;
        case 0xf:
          arg_2 = 0x139;
          break;
        case 0x10:
          arg_2 = 0x13f;
          break;
        case 0x11:
          arg_2 = 0x145;
          break;
        case 0x12:
          arg_2 = 0x14c;
          break;
        case 0x13:
          arg_2 = 0x153;
          break;
        case 0x14:
          arg_2 = 0x15a;
          break;
        case 0x15:
          arg_2 = 0x162;
          break;
        case 0x16:
          arg_2 = 0x167;
          break;
        case 0x17:
          arg_2 = 0x16f;
          break;
        case 0x18:
          arg_2 = 0x175;
          break;
        case 0x19:
          arg_2 = 0x191;
          break;
        case 0x1a:
          arg_2 = 0x199;
          break;
        case 0x1b:
          arg_2 = 0x1a1;
          break;
        case 0x1c:
          arg_2 = 0x1a7;
          break;
        case 0x1d:
          arg_2 = 0x1ad;
          break;
        case 0x1e:
          arg_2 = 0x1b4;
          break;
        case 0x1f:
          arg_2 = 0x1ba;
          break;
        case 0x20:
          arg_2 = 0x1c0;
          break;
        case 0x21:
          arg_2 = 0x1c6;
          break;
        case 0x22:
          arg_2 = 0x1cd;
          break;
        case 0x23:
          arg_2 = 0x1d4;
          break;
        case 0x24:
          arg_2 = 0x1da;
          break;
        case 0x25:
          arg_2 = 0x17b;
          break;
        case 0x26:
          arg_2 = 0x115;
          break;
        case 0x27:
          arg_2 = 0x181;
          break;
        case 0x28:
          arg_2 = 0x1e0;
          break;
        default:
          arg_2 = 0;
        }
        iVar4 = st::fn_0040226B((STGameObjC *)local_8);
        if (iVar4 == 0) {
          this_00->vfunc_90(4,arg_2);
        }
      }
      st::fn_00404E8A(this_00,param_1);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x3dc3,0,-1,"%s",
                               "STBoatC::ChangeActivity");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\To_boat.cpp",0x3dc4);
  }
  return;
}

// 00488F30 STBoatC::GetInfo16
#line 4 "decomp/ST.exe/functions/00488F30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetInfo16

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40
    */

void __thiscall st::fn_00488F30(STBoatC *this,AnonShape_00488F30_727896DE *param_1)

{
  int uVar2;
  int iVar4;
  undefined4 uVar3;
  int iVar5;
  int iVar6;
  uint uVar7;
  AnonShape_00488F30_727896DE *pAVar8;

  pAVar8 = param_1;
  for (iVar5 = 0x90; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pAVar8 = 0xffffffff;
    pAVar8 = (AnonShape_00488F30_727896DE *)&pAVar8->field_0x4;
  }
  uVar2 = st::fn_004049B7(*(char *)&this->field_0024);
  uVar2 = (int)(byte)uVar2;
  if (uVar2 == 1) {
    uVar3 = st::fn_0040186B(this->field_0024,5);
    param_1->field_0x8 = 1;
    *(uint *)param_1 = (int)(short)uVar3 << 0x10 | 5;
    uVar3 = st::fn_0040186B(this->field_0024,4);
    *(uint *)&param_1->field_0x30 = (int)(short)uVar3 << 0x10 | 4;
LAB_00489086:
    param_1->field_0x38 = 1;
  }
  else {
    if (uVar2 == 2) {
      uVar3 = st::fn_0040186B(this->field_0024,0x82);
      param_1->field_0x8 = 1;
      *(uint *)param_1 = (int)(short)uVar3 << 0x10 | 0x82;
      uVar3 = st::fn_0040186B(this->field_0024,0x81);
      *(uint *)&param_1->field_0x30 = (int)(short)uVar3 << 0x10 | 0x81;
      goto LAB_00489086;
    }
    if (uVar2 != 3) {
      iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x44ca,0,0,"%s",
                                 "STBoatC::GetInfo16 invalid civ");
      if (iVar4 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x6d);
    param_1->field_0x8 = 1;
    *(uint *)param_1 = (int)(short)uVar3 << 0x10 | 0x6d;
    uVar3 = st::fn_0040186B(this->field_0024,0x65);
    param_1->field_0x38 = 1;
    *(uint *)&param_1->field_0x30 = (int)(short)uVar3 << 0x10 | 0x65;
    uVar3 = st::fn_0040186B(this->field_0024,0x4e);
    param_1->field_0x68 = 1;
    *(uint *)&param_1->field_0x60 = (int)(short)uVar3 << 0x10 | 0x4e;
  }
  iVar5 = 3;
  if (uVar2 == 0) goto cf_common_join_00489222;
  if ((uint)uVar2 < 3) {
    uVar3 = st::fn_0040186B(this->field_0024,10);
    if (0 < (short)uVar3) {
      iVar5 = 4;
      *(uint *)&param_1[1].field_0x20 = (int)(short)uVar3 << 0x10 | 10;
      param_1[1].field_0x28 = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x1b);
    if (0 < (short)uVar3) {
      iVar6 = iVar5 * 0x30;
      iVar5 = iVar5 + 1;
      *(uint *)(&param_1->field_0x0 + iVar6) = (int)(short)uVar3 << 0x10 | 0x1b;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar6) + 8) = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x24);
    if (0 < (short)uVar3) {
      iVar6 = iVar5 * 0x30;
      iVar5 = iVar5 + 1;
      *(uint *)(&param_1->field_0x0 + iVar6) = (int)(short)uVar3 << 0x10 | 0x24;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar6) + 8) = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x2d);
    if ((short)uVar3 < 1) goto cf_common_join_00489222;
    uVar7 = (int)(short)uVar3 << 0x10 | 0x2d;
  }
  else {
    if (uVar2 != 3) goto cf_common_join_00489222;
    uVar3 = st::fn_0040186B(this->field_0024,0x66);
    if (0 < (short)uVar3) {
      iVar5 = 4;
      *(uint *)&param_1[1].field_0x20 = (int)(short)uVar3 << 0x10 | 0x66;
      param_1[1].field_0x28 = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x67);
    if (0 < (short)uVar3) {
      iVar6 = iVar5 * 0x30;
      iVar5 = iVar5 + 1;
      *(uint *)(&param_1->field_0x0 + iVar6) = (int)(short)uVar3 << 0x10 | 0x67;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar6) + 8) = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x68);
    if (0 < (short)uVar3) {
      iVar6 = iVar5 * 0x30;
      iVar5 = iVar5 + 1;
      *(uint *)(&param_1->field_0x0 + iVar6) = (int)(short)uVar3 << 0x10 | 0x68;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar6) + 8) = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x6a);
    if ((short)uVar3 < 1) goto cf_common_join_00489222;
    uVar7 = (int)(short)uVar3 << 0x10 | 0x6a;
  }
  *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = uVar7;
  *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
cf_common_join_00489222:
  iVar5 = 9;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)((int)this->field_06CB + 0x2c)) {
  case 1:
    uVar3 = st::fn_0040186B(this->field_0024,0xb);
    if (0 < (short)uVar3) {
      iVar5 = 10;
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar3 << 0x10 | 0xb;
      param_1[3].field_0x68 = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x97);
    if (0 < (short)uVar3) {
      *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = (int)(short)uVar3 << 0x10 | 0x97;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
      return;
    }
    break;
  case 2:
  case 3:
  case 6:
  case 0xb:
  case 0x26:
    uVar3 = st::fn_0040186B(this->field_0024,6);
    if (0 < (short)uVar3) {
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar3 << 0x10 | 6;
      param_1[3].field_0x68 = 1;
      return;
    }
    break;
  case 5:
    uVar3 = st::fn_0040186B(this->field_0024,0x3c);
    if (0 < (short)uVar3) {
      iVar5 = 10;
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar3 << 0x10 | 0x3c;
      param_1[3].field_0x68 = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x9a);
    if (0 < (short)uVar3) {
      iVar6 = iVar5 * 0x30;
      iVar5 = iVar5 + 1;
      *(uint *)(&param_1->field_0x0 + iVar6) = (int)(short)uVar3 << 0x10 | 0x9a;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar6) + 8) = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,6);
    if (0 < (short)uVar3) {
      *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = (int)(short)uVar3 << 0x10 | 6;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
      return;
    }
    break;
  case 0xd:
    uVar3 = st::fn_0040186B(this->field_0024,0x83);
    if (0 < (short)uVar3) {
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar3 << 0x10 | 0x83;
      param_1[3].field_0x68 = 1;
      return;
    }
    break;
  case 0xe:
    uVar3 = st::fn_0040186B(this->field_0024,0x95);
    if (0 < (short)uVar3) {
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar3 << 0x10 | 0x95;
      param_1[3].field_0x68 = 1;
    }
    break;
  case 0xf:
  case 0x12:
  case 0x17:
  case 0x27:
    uVar3 = st::fn_0040186B(this->field_0024,0x3a);
    if (0 < (short)uVar3) {
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar3 << 0x10 | 0x3a;
      param_1[3].field_0x68 = 1;
      return;
    }
    break;
  case 0x11:
    uVar3 = st::fn_0040186B(this->field_0024,0x91);
    if (0 < (short)uVar3) {
      iVar5 = 10;
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar3 << 0x10 | 0x91;
      param_1[3].field_0x68 = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x41);
    if (0 < (short)uVar3) {
      *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = (int)(short)uVar3 << 0x10 | 0x41;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
      return;
    }
    break;
  case 0x16:
    uVar3 = st::fn_0040186B(this->field_0024,0x3a);
    if (0 < (short)uVar3) {
      iVar5 = 10;
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar3 << 0x10 | 0x3a;
      param_1[3].field_0x68 = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x92);
    if (0 < (short)uVar3) {
      *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = (int)(short)uVar3 << 0x10 | 0x92;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
      return;
    }
    break;
  case 0x1c:
    uVar3 = st::fn_0040186B(this->field_0024,0x7d);
    if (0 < (short)uVar3) {
      iVar5 = 10;
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar3 << 0x10 | 0x7d;
      param_1[3].field_0x68 = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x7e);
    if (0 < (short)uVar3) {
      *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = (int)(short)uVar3 << 0x10 | 0x7e;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
      return;
    }
    break;
  case 0x1e:
  case 0x22:
  case 0x28:
    uVar3 = st::fn_0040186B(this->field_0024,0x7a);
    if (0 < (short)uVar3) {
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar3 << 0x10 | 0x7a;
      param_1[3].field_0x68 = 1;
      return;
    }
    break;
  case 0x21:
    uVar3 = st::fn_0040186B(this->field_0024,0x4b);
    if (0 < (short)uVar3) {
      iVar5 = 10;
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar3 << 0x10 | 0x4b;
      param_1[3].field_0x68 = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x4c);
    if (0 < (short)uVar3) {
      iVar6 = iVar5 * 0x30;
      iVar5 = iVar5 + 1;
      *(uint *)(&param_1->field_0x0 + iVar6) = (int)(short)uVar3 << 0x10 | 0x4c;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar6) + 8) = 1;
    }
    uVar3 = st::fn_0040186B(this->field_0024,0x76);
    if (0 < (short)uVar3) {
      *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = (int)(short)uVar3 << 0x10 | 0x76;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
      return;
    }
    break;
  case 0x23:
    uVar3 = st::fn_0040186B(this->field_0024,0x69);
    if (0 < (short)uVar3) {
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar3 << 0x10 | 0x69;
      param_1[3].field_0x68 = 1;
      return;
    }
  }
  return;
}

// 004899A0 STBoatC::GetDefenceTarget
#line 4 "decomp/ST.exe/functions/004899A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetDefenceTarget

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_GetDefenceTarget_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_FFFFFFFF=4294967295 */

undefined4 __thiscall
st::fn_004899A0(STBoatC *this,STBoatC_GetDefenceTarget_param_1Enum param_1)

{
  int iVar1;
  undefined2 uVar3;
  STGroupBoatC *this_00;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  DArrayTy *pDVar4;
  int local_EAX_1627;
  uint uVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  undefined4 *puVar6;
  int iVar8;
  int iVar11;
  undefined4 uVar9;
  DArrayTy *pDVar10;
  int iVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  short sVar17;
  short sVar18;
  int local_70;
  short local_6c;
  int local_6a;
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  short local_40;
  short sStack_3e;
  undefined2 local_3c;
  int local_38;
  int local_34;
  undefined2 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  undefined4 local_c;
  STGameObjC *local_8;

  local_34 = 0;
  local_20 = nullptr;
  if ((this->field_079A == 0) || (0 < this->field_073A)) {
    this->field_0483 = 0;
    this->field_0487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_047F = 0;
LAB_0048a37f:
    local_1c = 1;
  }
  else {
    iVar12 = this->field_047F + 1;
    this->field_047F = iVar12;
    if (this->field_048B == 0xffff) {
      if (iVar12 % 0x14 != 0) goto LAB_0048a37f;
    }
    else {
      local_8 = st::fn_004028BA
                          (g_allPlayers_007FA174,*(char *)&this->field_0487,(ushort)this->field_048B
                           ,this->field_0483);
      if ((((local_8 != nullptr) &&
           (iVar12 = local_8->vfunc_F8(), iVar12 == 1)) &&
          (iVar12 = local_8->vfunc_F0(), iVar12 == 1)) &&
         ((iVar12 = (*local_8->vtable->vfunc_F4)(this->field_0024), iVar12 == 1 &&
          (this->field_047F % 0x28 != 0)))) {
        return 0;
      }
    }
    this->field_0483 = 0;
    this->field_0487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_047F = 0;
    local_1c = 1;
    switch(param_1) {
    case CASE_0:
      st::fn_00402635(this,0);
      pDVar4 = (DArrayTy *)
               st::fn_00405C77(*(byte *)&this->field_0024,(int *)this,
                                  (uint *)(int)this->field_0475,(int)this->field_0477,2,(int *)0x6,6
                                  ,2,(uint)(this->field_0736 != 0));
      if (pDVar4 != nullptr) {
        this_00 = st::fn_00405CF9(*(char *)&this->field_0024,this->field_0030);
        local_20 = st::fn_00402E64(this_00,(uint)(ushort)this->field_0032,pDVar4);
        local_18 = 0;
        if (0 < (int)pDVar4->count) {
          do {
            iVar12 = local_20[local_18];
            if ((iVar12 != -4) && (iVar12 < 9)) {
              iVar16 = (8 - iVar12) * 0x32;
              st::fn_006ACC70(pDVar4,local_18,&local_8);
              iVar12 = local_8->vfunc_F8();
              if ((iVar12 != 0) &&
                 ((iVar12 = local_8->vfunc_F0(), iVar12 != 0 &&
                  (iVar12 = (*local_8->vtable->vfunc_F4)(this->field_0024), iVar12 != 0)))) {
                iVar12 = local_8->vfunc_FC();
                if (0 < iVar12) {
                  iVar16 = iVar16 + 300;
                }
                iVar12 = local_8->field_0219;
                iVar1 = local_8->field_0215;
                iVar8 = (*local_8->vtable->vfunc_7C)();
                local_38 = iVar16 + ((int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2) + iVar1 + iVar8 * 2
                ;
                if ((((uint)(ushort)local_8->field_0032 == this->field_048B) &&
                    (local_8->field_0024 == this->field_0487)) &&
                   (((this->field_0483 == CASE_1 &&
                     (((uVar5 = local_8->field_0020, uVar5 == 0x14 || (uVar5 == 1000)) ||
                      (uVar5 == 0x3e9)))) ||
                    ((this->field_0483 == CASE_3 && (local_8->field_0020 == 0x1ae)))))) {
                  local_38 = local_38 + 200;
                }
                iVar12 = local_38;
                st::fn_004031E3(local_8,&local_14,&local_10,(short *)&local_c);
                iVar7 = st::fn_006ACF0D((int)this->field_0041,(int)this->field_0043,
                                     (int)this->field_0045,(int)(short)local_14,(int)(short)local_10
                                     ,(int)(short)local_c);
                if ((iVar7 == 0) ||
                   (uVar5 = (int)(short)local_c - (int)this->field_0045, uVar13 = (int)uVar5 >> 0x1f
                   , (int)(((uVar5 ^ uVar13) - uVar13) * 10) / iVar7 < 4)) {
                  uVar3 = (*this->vtable->vfunc_10)
                                    (this->field_0041,this->field_0043,
                                     STReplaceLowWord((uint32_t)(local_10), (uint16_t)(this->field_0045)),
                                     (short)local_14,(short)local_10,local_c);
                  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                  local_24 = CONCAT22(extraout_var,uVar3);
                  local_2c = 0;
                  if (this->field_02B2 != '\0') {
                    local_30 = (undefined2 *)&this->field_0x2a8;
                    do {
                      puVar6 = (undefined4 *)
                               st::fn_0040342C(local_48,(short)*(undefined4 *)(local_30 + -1),
                                                  local_30[1],(short)local_24);
                      local_40 = (short)*puVar6;
                      sStack_3e = (short)((uint)*puVar6 >> 0x10);
                      sVar14 = this->field_0043 - sStack_3e;
                      sVar15 = this->field_0041 + local_40;
                      local_28 = STReplaceLowWord((uint32_t)(puVar6), (uint16_t)(this->field_0045 + *(short *)(puVar6 + 1)));
                      sStack_3e = *local_30;
                      local_40 = 0;
                      puVar6 = (undefined4 *)st::fn_0040342C(local_50,0,0,(short)local_24);
                      local_40 = (short)*puVar6;
                      sStack_3e = (short)((uint)*puVar6 >> 0x10);
                      local_3c = *(undefined2 *)(puVar6 + 1);
                      sVar17 = (short)local_14 + local_40;
                      sVar18 = (short)local_10 - sStack_3e;
                      if (this->field_0736 == 0) {
                        iVar16 = st::fn_00405907
                                           ((STSprGameObjC *)this,sVar15,sVar14,(short)local_28,
                                            sVar17,sVar18,(short)local_c,this->field_079A,nullptr
                                            ,0);
                        iVar12 = local_38;
                      }
                      else {
                        iVar16 = st::fn_00405907
                                           ((STSprGameObjC *)this,sVar15,sVar14,(short)local_28,
                                            sVar17,sVar18,(short)local_c,this->field_079A,nullptr
                                            ,1);
                        iVar12 = local_38;
                      }
                      local_38 = iVar12;
                      if (iVar16 == 0) {
                        if (this->field_07E6 != 0) goto LAB_00489eb0;
                        goto LAB_00489dfc;
                      }
                      local_2c = local_2c + 1;
                      local_30 = local_30 + 3;
                    } while (local_2c < (int)(uint)(byte)this->field_02B2);
                  }
                  iVar12 = iVar12 + 200;
                }
LAB_00489dfc:
                if (((local_8->field_0020 != 0x1ae) &&
                    (pDVar10 = this->field_047B, pDVar10 != nullptr)) &&
                   (uVar5 = 0, 0 < (int)pDVar10->count)) {
                  do {
                    st::fn_006ACC70(pDVar10,uVar5,&local_70);
                    if ((local_6c == local_8->field_0032) && (local_70 == local_8->field_0024)) {
                      iVar12 = iVar12 + local_6a;
                      break;
                    }
                    pDVar10 = this->field_047B;
                    uVar5 = uVar5 + 1;
                  } while ((int)uVar5 < (int)pDVar10->count);
                }
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if ((*(int *)((int)this->field_06CB + 0x2c) == 0x1c) &&
                   (iVar16 = local_8->vfunc_120(), iVar16 == 1)) {
                  iVar12 = iVar12 / 0x14;
                }
                if (local_34 < iVar12) {
                  this->field_0487 = local_8->field_0024;
                  this->field_048B = (uint)(ushort)local_8->field_0032;
                  this->field_0483 = (-(uint)(local_8->field_0020 != 0x1ae) & 0xfffffffe) + CASE_3;
                  local_34 = iVar12;
                }
              }
            }
LAB_00489eb0:
            local_18 = local_18 + 1;
          } while ((int)local_18 < (int)pDVar4->count);
        }
        st::fn_006AE110(pDVar4);
        if (this->field_048B != 0xffff) {
          local_1c = 0;
        }
      }
      if (local_20 != nullptr) {
        st::fn_006AB060(&local_20);
        return local_1c;
      }
      break;
    case CASE_1:
    case CASE_2:
    case CASE_3:
      st::fn_00402635(this,0);
      if (this->field_0736 == 0) {
        pDVar4 = (DArrayTy *)
                 st::fn_00405C77(*(byte *)&this->field_0024,(int *)this,
                                    (uint *)(int)this->field_0475,(int)this->field_0477,2,(int *)0x6
                                    ,6,2,0);
      }
      else {
        pDVar4 = (DArrayTy *)
                 st::fn_00405C77(*(byte *)&this->field_0024,(int *)this,
                                    (uint *)(int)this->field_0475,(int)this->field_0477,2,(int *)0x6
                                    ,6,2,1);
      }
      if (pDVar4 != nullptr) {
        local_18 = 0;
        if (0 < (int)pDVar4->count) {
          do {
            st::fn_006ACC70(pDVar4,local_18,&local_8);
            iVar12 = local_8->vfunc_F8();
            if (((iVar12 != 0) && (iVar12 = local_8->vfunc_F0(), iVar12 != 0)) &&
               (iVar12 = (*local_8->vtable->vfunc_F4)(this->field_0024), iVar12 != 0)) {
              st::fn_004031E3(local_8,&local_14,&local_10,(short *)&local_c);
              local_EAX_1627 =
                   st::fn_006ACF0D((int)this->field_0041,(int)this->field_0043,(int)this->field_0045,
                                (int)(short)local_14,(int)(short)local_10,(int)(short)local_c);
              local_38 = local_EAX_1627;
              if ((local_EAX_1627 == 0) ||
                 (uVar5 = (int)(short)local_c - (int)this->field_0045, uVar13 = (int)uVar5 >> 0x1f,
                 (int)(((uVar5 ^ uVar13) - uVar13) * 10) / local_EAX_1627 < 4)) {
                uVar3 = (*this->vtable->vfunc_10)
                                  (this->field_0041,this->field_0043,
                                   STReplaceLowWord((uint32_t)(local_10), (uint16_t)(this->field_0045)),
                                   (short)local_14,(short)local_10,local_c);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                local_24 = CONCAT22(extraout_var_00,uVar3);
                local_2c = 0;
                if (this->field_02B2 != '\0') {
                  local_30 = (undefined2 *)&this->field_0x2a8;
                  do {
                    puVar6 = (undefined4 *)
                             st::fn_0040342C(local_58,(short)*(undefined4 *)(local_30 + -1),
                                                local_30[1],(short)local_24);
                    local_40 = (short)*puVar6;
                    sStack_3e = (short)((uint)*puVar6 >> 0x10);
                    sVar14 = this->field_0043 - sStack_3e;
                    sVar15 = this->field_0041 + local_40;
                    local_28 = STReplaceLowWord((uint32_t)(puVar6), (uint16_t)(this->field_0045 + *(short *)(puVar6 + 1)));
                    sStack_3e = *local_30;
                    local_40 = 0;
                    puVar6 = (undefined4 *)st::fn_0040342C(local_60,0,0,(short)local_24);
                    local_40 = (short)*puVar6;
                    sStack_3e = (short)((uint)*puVar6 >> 0x10);
                    local_3c = *(undefined2 *)(puVar6 + 1);
                    sVar17 = (short)local_14 + local_40;
                    sVar18 = (short)local_10 - sStack_3e;
                    if (this->field_0736 == 0) {
                      iVar12 = st::fn_00405907
                                         ((STSprGameObjC *)this,sVar15,sVar14,(short)local_28,sVar17
                                          ,sVar18,(short)local_c,this->field_079A,nullptr,0);
                      local_EAX_1627 = local_38;
                    }
                    else {
                      iVar12 = st::fn_00405907
                                         ((STSprGameObjC *)this,sVar15,sVar14,(short)local_28,sVar17
                                          ,sVar18,(short)local_c,this->field_079A,nullptr,1);
                      local_EAX_1627 = local_38;
                    }
                    local_38 = local_EAX_1627;
                    if (iVar12 == 0) goto LAB_0048a2dd;
                    local_2c = local_2c + 1;
                    local_30 = local_30 + 3;
                  } while (local_2c < (int)(uint)(byte)this->field_02B2);
                }
                iVar16 = ((int)this->field_0816 - local_EAX_1627 / 0xc9) * 0x32;
                iVar12 = local_8->vfunc_FC();
                if (0 < iVar12) {
                  iVar16 = iVar16 + 300;
                }
                iVar12 = local_8->field_0219;
                iVar1 = local_8->field_0215;
                iVar8 = (*local_8->vtable->vfunc_7C)();
                iVar12 = iVar16 + ((int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2) + iVar1 + iVar8 * 2;
                if (((uint)(ushort)local_8->field_0032 == this->field_048B) &&
                   (local_8->field_0024 == this->field_0487)) {
                  if ((this->field_0483 == CASE_1) &&
                     (((uVar5 = local_8->field_0020, uVar5 == 0x14 || (uVar5 == 1000)) ||
                      (uVar5 == 0x3e9)))) {
LAB_0048a226:
                    iVar12 = iVar12 + 200;
                    goto LAB_0048a22c;
                  }
                  if (this->field_0483 != CASE_3) goto LAB_0048a22c;
                  if (local_8->field_0020 == 0x1ae) goto LAB_0048a226;
LAB_0048a235:
                  pDVar10 = this->field_047B;
                  if ((pDVar10 != nullptr) && (uVar5 = 0, 0 < (int)pDVar10->count)) {
                    do {
                      st::fn_006ACC70(pDVar10,uVar5,&local_70);
                      if ((local_6c == local_8->field_0032) && (local_70 == local_8->field_0024)) {
                        iVar12 = iVar12 + local_6a;
                        break;
                      }
                      pDVar10 = this->field_047B;
                      uVar5 = uVar5 + 1;
                    } while ((int)uVar5 < (int)pDVar10->count);
                  }
                }
                else {
LAB_0048a22c:
                  if (local_8->field_0020 != 0x1ae) goto LAB_0048a235;
                }
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if ((*(int *)((int)this->field_06CB + 0x2c) == 0x1c) &&
                   (iVar16 = local_8->vfunc_120(), iVar16 == 1)) {
                  iVar12 = iVar12 / 0x14;
                }
                if (local_34 < iVar12) {
                  this->field_0487 = local_8->field_0024;
                  this->field_048B = (uint)(ushort)local_8->field_0032;
                  this->field_0483 = (-(uint)(local_8->field_0020 != 0x1ae) & 0xfffffffe) + CASE_3;
                  local_34 = iVar12;
                }
              }
            }
LAB_0048a2dd:
            local_18 = local_18 + 1;
          } while ((int)local_18 < (int)pDVar4->count);
        }
        st::fn_006AE110(pDVar4);
        if (this->field_048B != 0xffff) {
          return 0;
        }
      }
      break;
    case CASE_FFFFFFFF:
      return 1;
    default:
      iVar11 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x4677,0,0,"%s",
                                  "STBoatC::GetDefenceTarget - incorrect entry");
      if (iVar11 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40
                (0,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x4678);
      return 0xffffffff;
    }
  }
  return local_1c;
}

// 0048A670 STBoatC::_SetSpeedFireLife
#line 4 "decomp/ST.exe/functions/0048A670/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::_SetSpeedFireLife

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=void __thiscall
   _SetSpeedFireLife(STBoatC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0048A73F RET */

void __thiscall st::fn_0048A670(STBoatC *this)

{
  int iVar1;
  byte bVar3;
  int iVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)((int)this->field_06CB + 0x2c)) {
  case 1:
  case 0x20:
    this->field_0219 = 0x5a;
    break;
  case 2:
  case 5:
  case 6:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x1c:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x26:
  case 0x27:
  case 0x28:
    this->field_0219 = 0x8c;
    break;
  case 3:
  case 4:
  case 0xb:
  case 0xf:
    this->field_0219 = 0xbe;
    break;
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x24:
  case 0x25:
    break;
  case 10:
  case 0x17:
  case 0x22:
    this->field_0219 = 0xfa;
    break;
  case 0x16:
    this->field_0219 = 0xe6;
    break;
  case 0x23:
    this->field_0219 = 0xaa;
    break;
  default:
    iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x46b8,0,0,"%s",
                               "STBoatC::_SetSpeedFireLife unknown boat type");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  bVar3 = st::fn_004025AE(*(Global_sub_00430750_param_1Enum *)((int)this->field_06CB + 0x2c));
  st::fn_00405C90(this,bVar3);
  st::fn_00405105(this,bVar3 / 2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(&DAT_007dfbac + *(int *)((int)this->field_06CB + 0x2c) * 4);
  this->field_0716 = iVar1;
  this->field_0712 = iVar1;
  return;
}

// 0048CC80 STBoatC::_AddDefenceShots
#line 4 "decomp/ST.exe/functions/0048CC80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::_AddDefenceShots */

void __thiscall st::fn_0048CC80(STBoatC *this,char param_1,short param_2,int param_3)

{
  dword index;
  STBoatC *pSVar2;
  dword dVar3;
  int errorCode;
  DArrayTy *pDVar4;
  int iVar5;
  InternalExceptionFrame local_64;
  int local_20;
  short local_1c;
  int local_1a;
  undefined4 local_16;
  STBoatC *local_10;
  uint local_c;
  undefined4 local_8;

  local_8 = 200;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_10 = this;
  errorCode = st::fn_0072D7F0(local_64.jumpBuffer,0);
  pSVar2 = local_10;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (errorCode != -0x5001fff7) {
      iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x4b84,0,errorCode,
                                 "%s","STBoatC::_AddDefenceShots");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\wlad\\To_boat.cpp",0x4b85);
    }
    return;
  }
  if (local_10->field_047B == nullptr) {
    pDVar4 = st::fn_006AE290(nullptr,10,0xe,5);
    pSVar2->field_047B = pDVar4;
  }
  index = pSVar2->field_047B->count;
  dVar3 = index;
  if (index != 0) {
    while (local_c = dVar3, index = index - 1, -1 < (int)index) {
      st::fn_006ACC70(pSVar2->field_047B,index,&local_20);
      dVar3 = index;
      if (((local_1c != -1) && (dVar3 = local_c, local_20 == param_1)) && (local_1c == param_2)) {
        local_1a = local_1a + param_3;
        local_16 = local_8;
        st::fn_006AE140(pSVar2->field_047B,index,&local_20);
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                   0x4b76);
        dVar3 = local_c;
      }
    }
    local_20 = (int)param_1;
    local_1c = param_2;
    local_1a = param_3;
    local_16 = local_8;
    st::fn_006AE140(pSVar2->field_047B,local_c,&local_20);
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  local_20 = (int)param_1;
  local_1c = param_2;
  local_1a = param_3;
  local_16 = local_8;
  st::fn_006AE1C0(pSVar2->field_047B,&local_20);
  g_currentExceptionFrame = local_64.previous;
  return;
}

// 0048CEA0 STBoatC::_CheckDefenceShots
#line 4 "decomp/ST.exe/functions/0048CEA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::_CheckDefenceShots

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0048CEA0(STBoatC *this,int param_1)

{
  STBoatC *pSVar2;
  int iVar3;
  STGameObjC *this_00;
  int iVar4;
  int iVar5;
  DArrayTy *pDVar5;
  int iVar6;
  int iVar7;
  uint index;
  InternalExceptionFrame local_68;
  undefined1 local_24 [4];
  ushort local_20;
  undefined2 uStack_1e;
  int local_1a;
  uint local_14;
  STBoatC *local_10;
  short local_a;
  short local_8;
  short local_6;

  local_14 = (int)this->field_0816 * (int)this->field_0816 * 0x9dd1;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  pSVar2 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x4bb4,0,iVar3,"%s",
                               "STBoatC::_CheckDefenceShots");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\wlad\\To_boat.cpp",0x4bb5);
    return;
  }
  pDVar5 = local_10->field_047B;
  if ((pDVar5 != nullptr) && (index = 0, 0 < (int)pDVar5->count)) {
    do {
      st::fn_006ACC70(pDVar5,index,local_24);
      if (local_20 != 0xffff) {
        local_1a = local_1a - param_1;
        if (local_1a < 1) {
          pDVar5 = pSVar2->field_047B;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_20 = CONCAT22(uStack_1e,0xffff);
        }
        else {
          this_00 = st::fn_004028BA(g_allPlayers_007FA174,local_24[0],local_20,CASE_1);
          if (this_00 != nullptr) {
            iVar4 = this_00->vfunc_F8();
            if (iVar4 == 1) {
              iVar4 = this_00->vfunc_F0();
              if (iVar4 == 1) {
                iVar4 = (*this_00->vtable->vfunc_F4)(pSVar2->field_0024);
                if (iVar4 == 1) {
                  st::fn_004031E3(this_00,(uint *)&local_a,(int *)&local_8,&local_6);
                  iVar4 = (int)pSVar2->field_0041 - (int)local_a;
                  iVar6 = (int)pSVar2->field_0043 - (int)local_8;
                  iVar7 = (int)pSVar2->field_0045 - (int)local_6;
                  if (local_14 < (uint)(iVar6 * iVar6 + iVar4 * iVar4 + iVar7 * iVar7)) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    _local_20 = CONCAT22(uStack_1e,0xffff);
                  }
                  pDVar5 = pSVar2->field_047B;
                  goto LAB_0048d016;
                }
              }
            }
          }
          pDVar5 = pSVar2->field_047B;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_20 = CONCAT22(uStack_1e,0xffff);
        }
LAB_0048d016:
        st::fn_006AE140(pDVar5,index,local_24);
      }
      pDVar5 = pSVar2->field_047B;
      index = index + 1;
    } while ((int)index < (int)pDVar5->count);
  }
  g_currentExceptionFrame = local_68.previous;
  return;
}

// 0048D130 STBoatC::SetNewMD
#line 4 "decomp/ST.exe/functions/0048D130/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::SetNewMD

   [STPrototypeApplier] Propagated return.
   Evidence: 0048D130 returns return of FUN_004e1690 @ 0048D2CC | 0048D130 returns return of
   FUN_004e1690 @ 0048D39C */

bool __thiscall
st::fn_0048D130(STBoatC *this,int param_1,short param_2,short param_3,short param_4,int param_5,
                 undefined4 param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *pSVar4;
  undefined1 uVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STWorldObject *in_EAX;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  STWorldObject *extraout_EAX;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if ((param_5 != -1) &&
     ((((param_2 < 0 || (g_worldGrid.sizeX <= param_2)) || (param_3 < 0)) ||
      (((g_worldGrid.sizeY <= param_3 || (param_4 < 0)) ||
       ((g_worldGrid.sizeZ <= param_4 ||
        ((in_EAX = STGridAt3D(g_worldGrid, param_2, param_3, param_4).objects[0],
         in_EAX == nullptr || (*(int *)&in_EAX->field_0x18 != param_5)))))))))) {
    iVar7 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x4bcc,0,0,"%s",
                               "STBoatC::SetNewMD");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
      return (bool)uVar6;
    }
    st::fn_006A5E40
              (0,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x4bcd);
    /* ST_PSEUDO[unresolved_register_input,return_width_artifact]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; candidate call-output artifact: verify return width, clobbers, or x87 state */
    in_EAX = extraout_EAX;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar6 = (char)in_EAX;
  if (param_1 == 1) {
    if (this->field_04A1 != param_5) {
      sVar1 = this->field_049B;
      uVar6 = (undefined1)sVar1;
      sVar2 = this->field_049F;
      sVar3 = this->field_049D;
      if (((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) &&
         ((-1 < sVar3 &&
          (((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)) && (sVar2 < g_worldGrid.sizeZ)))))) {
        iVar7 = (int)sVar1;
        pSVar4 = STGridAt3D(g_worldGrid, iVar7, sVar3, sVar2).objects[0];
        if (pSVar4 != nullptr) {
          st::fn_00405691(pSVar4,this->field_0018);
          iVar7 = st::fn_00402CCA(pSVar4,this->field_0018);
        }
        uVar6 = (undefined1)iVar7;
      }
      this->field_04A1 = param_5;
      this->field_04BD = 1;
      if (param_5 != -1) {
        this->field_049B = param_2;
        this->field_049D = param_3;
        this->field_049F = param_4;
        this->field_04B5 = param_6;
        return SUB21(param_4,0);
      }
    }
  }
  else if (this->field_04AB != param_5) {
    sVar1 = this->field_04A5;
    uVar6 = (undefined1)sVar1;
    sVar2 = this->field_04A9;
    sVar3 = this->field_04A7;
    if (((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar3)) &&
        ((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)))) && (sVar2 < g_worldGrid.sizeZ)) {
      iVar7 = (int)sVar1;
      pSVar4 = STGridAt3D(g_worldGrid, iVar7, sVar3, sVar2).objects[0];
      if (pSVar4 != nullptr) {
        st::fn_00405691(pSVar4,this->field_0018);
        iVar7 = st::fn_00402CCA(pSVar4,this->field_0018);
      }
      uVar6 = (undefined1)iVar7;
    }
    this->field_04AB = param_5;
    this->field_04C1 = 1;
    if (param_5 != -1) {
      this->field_04A5 = param_2;
      this->field_04A7 = param_3;
      this->field_04A9 = param_4;
      this->field_04B9 = param_6;
      uVar6 = SUB21(param_4,0);
    }
  }
  return (bool)uVar6;
}

// 0048FAC0 STBoatC::SaveBoatData
#line 4 "decomp/ST.exe/functions/0048FAC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::SaveBoatData */

undefined4 * __thiscall st::fn_0048FAC0(STBoatC *this,int *param_1)

{
  int iVar2;
  undefined4 *puVar2;
  STBoatC *pSVar3;
  int iVar5;
  byte *puVar4;
  int iVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  ulonglong *puVar10;
  short *psVar11;
  byte *puVar12;
  InternalExceptionFrame local_68;
  undefined4 *local_24;
  int local_20;
  uint *local_1c;
  undefined4 *local_18;
  STBoatC *local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_14 = this;
  iVar2 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  pSVar3 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x4e98,0,iVar2,"%s",
                               "STBoatC::SaveBoatData");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\To_boat.cpp",0x4e99);
    return local_24;
  }
  local_1c = (uint *)0x9;
  *param_1 = 0x606;
  puVar4 = (byte *)(&local_14->field_0282);
  do {
    if ((uint *)*puVar4 != nullptr) {
      local_c = (undefined4 *)st::fn_006B0020((uint *)*puVar4,(int *)&local_8);
      st::fn_006AB060(&local_c);
      *param_1 = *param_1 + local_8;
    }
    puVar4 = (byte *)(puVar4 + 1);
    local_1c = (uint *)((int)local_1c + -1);
  } while (local_1c != nullptr);
  if (pSVar3->field_047B != nullptr) {
    local_c = (undefined4 *)st::fn_006B0020(&pSVar3->field_047B->flags,(int *)&local_8);
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  puVar2 = st::fn_006AAC70(*param_1);
  *puVar2 = pSVar3->field_0020;
  puVar2[1] = pSVar3->field_0024;
  puVar2[2] = pSVar3->field_0028;
  puVar2[3] = 2;
  puVar2[4] = pSVar3->field_002C;
  puVar10 = pSVar3->field_06CB + 5;
  puVar4 = (byte *)(puVar2 + 0x17);
  for (iVar6 = 0x5a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = (int)*puVar10;
    puVar10 = (ulonglong *)((int)puVar10 + 4);
    puVar4 = (byte *)(puVar4 + 1);
  }
  *(short *)puVar4 = (short)*puVar10;
  STField<undefined1>(puVar4,2) = STField<undefined1>(puVar10,2);
  puVar4 = (byte *)(&local_14->field_02C0);
  puVar12 = (byte *)((int)puVar2 + 0x1c7);
  for (iVar6 = 0x65; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  *(undefined1 *)puVar12 = *(undefined1 *)puVar4;
  puVar2[0xd7] = local_14->field_0455;
  puVar2[0xd8] = local_14->field_0459;
  puVar2[0xd9] = local_14->field_045D;
  puVar2[0xda] = local_14->field_0461;
  *(short *)(puVar2 + 0xdb) = local_14->field_0469;
  STField<undefined2>(puVar2,0x36e) = local_14->field_046F;
  puVar2[0xdc] = local_14->field_0471;
  *(short *)(puVar2 + 0xdd) = local_14->field_0475;
  STField<short>(puVar2,0x376) = local_14->field_0477;
  *(short *)(puVar2 + 0xde) = local_14->field_0479;
  STField<int>(puVar2,0x382) = local_14->field_047F;
  STField<STAllPlayersC_GetObjPtr_param_3Enum>(puVar2,0x386) = local_14->field_0483;
  STField<undefined4>(puVar2,0x38a) = local_14->field_0487;
  STField<undefined4>(puVar2,0x38e) = local_14->field_048B;
  STField<undefined4>(puVar2,0x392) = local_14->field_048F;
  STField<undefined4>(puVar2,0x396) = local_14->field_0493;
  STField<undefined4>(puVar2,0x39a) = local_14->field_0497;
  psVar9 = &local_14->field_049B;
  psVar11 = (short *)((int)puVar2 + 0x39e);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar11 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    psVar11 = psVar11 + 2;
  }
  *psVar11 = *psVar9;
  psVar9 = &local_14->field_04DD;
  psVar11 = (short *)(puVar2 + 0xf8);
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar11 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    psVar11 = psVar11 + 2;
  }
  *psVar11 = *psVar9;
  *(char *)(psVar11 + 1) = (char)psVar9[1];
  puVar4 = (byte *)&local_14->field_0510;
  puVar12 = (byte *)((int)puVar2 + 0x413);
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  psVar9 = &local_14->field_052C;
  puVar4 = (byte *)((int)puVar2 + 0x42f);
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    puVar4 = (byte *)(puVar4 + 1);
  }
  psVar9 = &local_14->field_0554;
  puVar4 = (byte *)((int)puVar2 + 0x457);
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    puVar4 = (byte *)(puVar4 + 1);
  }
  puVar4 = (byte *)&local_14->field_0588;
  puVar12 = (byte *)((int)puVar2 + 0x48b);
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  puVar4 = (byte *)&local_14->field_05A0;
  puVar12 = (byte *)((int)puVar2 + 0x4a3);
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  *(undefined2 *)puVar12 = *(undefined2 *)puVar4;
  STField<undefined4>(puVar2,0x4a9) = 0;
  STField<undefined4>(puVar2,0x4cd) = *(undefined4 *)&local_14->field_0x5ca;
  STField<undefined4>(puVar2,0x4d1) = *(undefined4 *)&local_14->field_0x5ce;
  STField<undefined4>(puVar2,0x4d5) = *(undefined4 *)&local_14->field_0x5d2;
  STField<int>(puVar2,0x4d9) = local_14->field_05D6;
  STField<undefined2>(puVar2,0x4dd) = local_14->field_05DA;
  STField<undefined4>(puVar2,0x4df) = *(undefined4 *)&local_14->field_0x5dc;
  STField<undefined4>(puVar2,0x4e3) = *(undefined4 *)&local_14->field_0x5e0;
  STField<undefined4>(puVar2,0x4e7) = *(undefined4 *)&local_14->field_0x5e4;
  STField<undefined4>(puVar2,0x4eb) = local_14->field_05E8;
  STField<undefined4>(puVar2,0x4ef) = *(undefined4 *)&local_14->field_0x5ec;
  STField<undefined4>(puVar2,0x4f3) = *(undefined4 *)&local_14->field_0x5f0;
  STField<undefined4>(puVar2,0x4f7) = *(undefined4 *)&local_14->field_0x5f4;
  STField<undefined4>(puVar2,0x4fb) = local_14->field_05F8;
  puVar4 = (byte *)&local_14->field_05FC;
  puVar12 = (byte *)((int)puVar2 + 0x4ff);
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  *(undefined1 *)puVar12 = *(undefined1 *)puVar4;
  puVar4 = (byte *)(&local_14->field_0619);
  puVar12 = (byte *)(puVar2 + 0x147);
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  puVar4 = (byte *)(&local_14->field_0635);
  puVar12 = (byte *)(puVar2 + 0x14e);
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  *(undefined2 *)puVar12 = *(undefined2 *)puVar4;
  puVar4 = (byte *)(&local_14->field_066B);
  puVar12 = (byte *)((int)puVar2 + 0x56e);
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  puVar4 = (byte *)&local_14->field_068B;
  puVar12 = (byte *)((int)puVar2 + 0x58e);
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar12 = (byte *)(puVar12 + 1);
  }
  *(undefined2 *)puVar12 = *(undefined2 *)puVar4;
  psVar9 = &local_14->field_06A9;
  psVar11 = (short *)(puVar2 + 0x16b);
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar11 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    psVar11 = psVar11 + 2;
  }
  *psVar11 = *psVar9;
  puVar10 = local_14->field_06CB;
  puVar4 = (byte *)((int)puVar2 + 0x5ce);
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = (int)*puVar10;
    puVar10 = (ulonglong *)((int)puVar10 + 4);
    puVar4 = (byte *)(puVar4 + 1);
  }
  STField<int>(puVar2,0x5ee) = (int)local_14->field_06CB[4];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  STField<undefined4>(puVar2,0x5f2) = *(undefined4 *)((int)local_14->field_06CB + 0x24);
  local_1c = puVar2 + 6;
  local_18 = &local_14->field_0282;
  local_10 = 0x606;
  local_20 = 9;
  pSVar3 = local_14;
  local_24 = puVar2;
  do {
    uVar8 = local_10;
    if ((uint *)*local_18 == nullptr) {
      local_8 = 0;
      local_1c[-1] = 0xffffffff;
      *local_1c = 0;
    }
    else {
      local_c = (undefined4 *)st::fn_006B0020((uint *)*local_18,(int *)&local_8);
      puVar4 = (byte *)(local_c);
      puVar12 = (byte *)(uVar8 + (int)puVar2);
      memmove(puVar12, puVar4, local_8); /* compiler REP MOVS byte copy */
      uVar7 = 0;
      local_1c[-1] = local_10;
      *local_1c = local_8;
      st::fn_006AB060(&local_c);
      pSVar3 = local_14;
    }
    local_1c = local_1c + 2;
    uVar8 = local_10 + local_8;
    local_18 = local_18 + 1;
    local_20 = local_20 + -1;
    local_10 = uVar8;
  } while (local_20 != 0);
  if (pSVar3->field_047B != nullptr) {
    local_c = (undefined4 *)st::fn_006B0020(&pSVar3->field_047B->flags,(int *)&local_8);
    puVar4 = (byte *)(local_c);
    puVar12 = (byte *)(uVar8 + (int)puVar2);
    memmove(puVar12, puVar4, local_8); /* compiler REP MOVS byte copy */
    STField<uint>(puVar2,0x37a) = local_10;
    STField<uint>(puVar2,0x37e) = local_8;
    st::fn_006AB060(&local_c);
    g_currentExceptionFrame = local_68.previous;
    return puVar2;
  }
  STField<undefined4>(puVar2,0x37a) = 0xffffffff;
  STField<undefined4>(puVar2,0x37e) = 0;
  g_currentExceptionFrame = local_68.previous;
  return puVar2;
}

// 004900E0 STBoatC::RestoreBoatData
#line 4 "decomp/ST.exe/functions/004900E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::RestoreBoatData */

void __thiscall st::fn_004900E0(STBoatC *this,int param_1)

{
  AnonShape_004900E0_F89C68CE *pAVar2;
  int iVar3;
  DArrayTy *pDVar3;
  STBoatC *pSVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  byte *puVar8;
  byte *puVar9;
  short *psVar10;
  ulonglong *puVar11;
  int *piVar12;
  InternalExceptionFrame local_54;
  AnonShape_004900E0_F89C68CE *local_10;
  int local_c;
  STBoatC *local_8;

  local_10 = (AnonShape_004900E0_F89C68CE *)param_1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pAVar2 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x4ed4,0,iVar3,"%s",
                               "STBoatC::RestoreBoatData");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\wlad\\To_boat.cpp",0x4ed5);
    return;
  }
  puVar8 = (byte *)&local_10->field_0x5c;
  puVar11 = local_8->field_06CB + 5;
  for (iVar6 = 0x5a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)puVar11 = *puVar8;
    puVar8 = (byte *)(puVar8 + 1);
    puVar11 = (ulonglong *)((int)puVar11 + 4);
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar8;
  STField<undefined1>(puVar11,2) = STField<undefined1>(puVar8,2);
  puVar8 = (byte *)&local_10->field_0x1c7;
  puVar9 = (byte *)(&local_8->field_02C0);
  memmove(puVar9, puVar8, 0x195); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  local_8->field_0455 = local_10->field_035C;
  local_8->field_0459 = local_10->field_0360;
  local_8->field_045D = local_10->field_0364;
  local_8->field_0461 = local_10->field_0368;
  local_8->field_0469 = local_10->field_036C;
  local_8->field_046F = local_10->field_036E;
  local_8->field_0471 = (AnonShape_005EFAE0_B406B78B *)local_10->field_0370;
  local_8->field_0475 = local_10->field_0374;
  local_8->field_0477 = local_10->field_0376;
  local_8->field_0479 = local_10->field_0378;
  local_8->field_047F = local_10->field_0382;
  local_8->field_0483 = local_10->field_0386;
  local_8->field_0487 = local_10->field_038A;
  local_8->field_048B = local_10->field_038E;
  local_8->field_048F = local_10->field_0392;
  local_8->field_0493 = local_10->field_0396;
  local_8->field_0497 = local_10->field_039A;
  psVar7 = (short *)&local_10->field_0x39e;
  psVar10 = &local_8->field_049B;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar10 = *(undefined4 *)psVar7;
    psVar7 = psVar7 + 2;
    psVar10 = psVar10 + 2;
  }
  *psVar10 = *psVar7;
  psVar7 = (short *)&local_10->field_0x3e0;
  psVar10 = &local_8->field_04DD;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar10 = *(undefined4 *)psVar7;
    psVar7 = psVar7 + 2;
    psVar10 = psVar10 + 2;
  }
  *psVar10 = *psVar7;
  *(char *)(psVar10 + 1) = (char)psVar7[1];
  puVar8 = (byte *)&local_10->field_0x413;
  puVar9 = (byte *)&local_8->field_0510;
  memmove(puVar9, puVar8, 0x1c); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar8 = (byte *)&local_10->field_0x42f;
  psVar7 = &local_8->field_052C;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar7 = *puVar8;
    puVar8 = (byte *)(puVar8 + 1);
    psVar7 = psVar7 + 2;
  }
  puVar8 = (byte *)&local_10->field_0x457;
  psVar7 = &local_8->field_0554;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar7 = *puVar8;
    puVar8 = (byte *)(puVar8 + 1);
    psVar7 = psVar7 + 2;
  }
  puVar8 = (byte *)&local_10->field_0x48b;
  puVar9 = (byte *)&local_8->field_0588;
  memmove(puVar9, puVar8, 0x18); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar8 = (byte *)&local_10->field_0x4a3;
  puVar9 = (byte *)&local_8->field_05A0;
  memmove(puVar9, puVar8, 0x2a); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  *(undefined4 *)&local_8->field_0x5ca = local_10->field_04CD;
  local_c = 9;
  *(undefined4 *)&local_8->field_0x5ce = local_10->field_04D1;
  *(undefined4 *)&local_8->field_0x5d2 = local_10->field_04D5;
  local_8->field_05D6 = local_10->field_04D9;
  local_8->field_05DA = local_10->field_04DD;
  *(undefined4 *)&local_8->field_0x5dc = local_10->field_04DF;
  *(undefined4 *)&local_8->field_0x5e0 = local_10->field_04E3;
  *(undefined4 *)&local_8->field_0x5e4 = local_10->field_04E7;
  local_8->field_05E8 = local_10->field_04EB;
  *(undefined4 *)&local_8->field_0x5ec = local_10->field_04EF;
  *(undefined4 *)&local_8->field_0x5f0 = local_10->field_04F3;
  *(undefined4 *)&local_8->field_0x5f4 = local_10->field_04F7;
  local_8->field_05F8 = local_10->field_04FB;
  puVar8 = (byte *)&local_10->field_0x4ff;
  puVar9 = (byte *)&local_8->field_05FC;
  memmove(puVar9, puVar8, 0x1d); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar8 = (byte *)&local_10->field_0x51c;
  puVar9 = (byte *)(&local_8->field_0619);
  memmove(puVar9, puVar8, 0x1c); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar8 = (byte *)&local_10->field_0x538;
  puVar9 = (byte *)(&local_8->field_0635);
  memmove(puVar9, puVar8, 0x36); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar8 = (byte *)&local_10->field_0x56e;
  puVar9 = (byte *)(&local_8->field_066B);
  memmove(puVar9, puVar8, 0x20); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  puVar8 = (byte *)&local_10->field_0x58e;
  puVar9 = (byte *)&local_8->field_068B;
  memmove(puVar9, puVar8, 0x1e); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  psVar7 = (short *)&local_10->field_0x5ac;
  psVar10 = &local_8->field_06A9;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)psVar10 = *(undefined4 *)psVar7;
    psVar7 = psVar7 + 2;
    psVar10 = psVar10 + 2;
  }
  *psVar10 = *psVar7;
  puVar8 = (byte *)&local_10->field_0x5ce;
  puVar11 = local_8->field_06CB;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)puVar11 = *puVar8;
    puVar8 = (byte *)(puVar8 + 1);
    puVar11 = (ulonglong *)((int)puVar11 + 4);
  }
  puVar8 = (byte *)(&local_8->field_0282);
  *(undefined4 *)(local_8->field_06CB + 4) = local_10->field_05EE;
  *(undefined4 *)((int)local_8->field_06CB + 0x24) = local_10->field_05F2;
  piVar12 = (int *)&local_10->field_0x14;
  pSVar4 = local_8;
  do {
    if (*piVar12 == -1) {
      *puVar8 = 0;
    }
    else {
      pDVar3 = st::fn_006B0060(nullptr,(uint *)(&pAVar2->field_0x0 + *piVar12));
      *puVar8 = pDVar3;
      pSVar4 = local_8;
    }
    piVar12 = piVar12 + 2;
    puVar8 = (byte *)(puVar8 + 1);
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)&pAVar2->field_0x37a != -1) {
    pDVar3 = st::fn_006B0060(nullptr,(uint *)(&pAVar2->field_0x0 + *(int *)&pAVar2->field_0x37a));
    local_8->field_047B = pDVar3;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  pSVar4->field_047B = nullptr;
  g_currentExceptionFrame = local_54.previous;
  return;
}

// 00491070 STBoatC::ReleaseLoad
#line 4 "decomp/ST.exe/functions/00491070/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ReleaseLoad */

void __thiscall st::fn_00491070(STBoatC *this,uint param_1)

{
  int iVar2;
  int iVar3;
  int *piVar4;

  if (this->field_07C2 < 1) {
    iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x4f96,0,0,"%s",
                               s_STBoatC__ReleaseLoad_data_lload<_007aba78);
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    iVar3 = this->field_07C2 + -1;
    this->field_07C2 = iVar3;
    if (iVar3 == 0) {
      this->field_05A2 = nullptr;
      piVar4 = &this->field_02CC;
      iVar3 = 0;
      do {
        if (*piVar4 == 1) break;
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < 0x17);
      if ((this->field_045D == CASE_14) && (iVar3 == 0x17)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = g_playSystem_00802A38->field_00E4;
        st::fn_00402126(this,CASE_3,&param_1);
      }
      this->field_0314 = 0;
      this->field_0076 = 1;
      return;
    }
    iVar3 = this->vfunc_AC((short)param_1);
    if (iVar3 == 1) {
      this->field_05C0 = 2;
    }
  }
  return;
}

// 00491240 STBoatC::PrepareForLoading
#line 4 "decomp/ST.exe/functions/00491240/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::PrepareForLoading

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00491287 MOV DX,word ptr
   [EBP + 0x18] */

void __thiscall
st::fn_00491240
          (STBoatC *this,int param_1,short param_2,short param_3,short param_4,ushort param_5)

{
  short sVar1;
  int iVar3;

  if ((AnonShape_005EFAE0_B406B78B *)param_1 == this->field_05A2) {
    sVar1 = this->field_005F;
    *(short *)&this->field_0x5ac = param_3;
    *(short *)&this->field_0x5ae = param_4;
    this->field_05B0 = param_5;
    this->field_05C0 = 1;
    this->field_05AA = param_2;
    switch((int)param_4 - (int)sVar1) {
    case 0:
      this->field_05B2 = 0xffff;
      break;
    case 1:
      this->field_05B4 = 0xffff;
      this->field_05B2 = sVar1 + 1;
      break;
    case 2:
      this->field_05B2 = sVar1 + 1;
      this->field_05B4 = sVar1 + 2;
      this->field_05B6 = 0xffff;
      break;
    case 3:
      this->field_05B2 = sVar1 + 1;
      this->field_05B4 = sVar1 + 2;
      this->field_05B6 = sVar1 + 3;
      this->field_05B8 = 0xffff;
      break;
    case 4:
      this->field_05B2 = sVar1 + 1;
      this->field_05B4 = sVar1 + 2;
      this->field_05B6 = sVar1 + 3;
      this->field_05B8 = sVar1 + 4;
      this->field_05BA = 0xffff;
      break;
    case -4:
      this->field_05B2 = sVar1 + -1;
      this->field_05B4 = sVar1 + -2;
      this->field_05B6 = sVar1 + -3;
      this->field_05B8 = sVar1 + -4;
      this->field_05BA = 0xffff;
      break;
    case -3:
      this->field_05B2 = sVar1 + -1;
      this->field_05B4 = sVar1 + -2;
      this->field_05B6 = sVar1 + -3;
      this->field_05B8 = 0xffff;
      break;
    case -2:
      this->field_05B2 = sVar1 + -1;
      this->field_05B4 = sVar1 + -2;
      this->field_05B6 = 0xffff;
      break;
    case -1:
      this->field_05B4 = 0xffff;
      this->field_05B2 = sVar1 + -1;
      break;
    default:
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x4fe6,0,0,"%s",
                                 "STBoatC::PrepareForLoading too much");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40
                (-0x5001fff5,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                 0x4fe6);
    }
    if (this->field_05B2 != -1) {
      this->field_05C4 = 0;
      this->field_05BC = 0;
      st::fn_00404F6B(this,(int)param_2,(int)param_3,(int)(short)this->field_05B2);
      st::fn_004031DE(this,0);
      return;
    }
    if ((this->field_0041 == (short)(this->field_05AA * 0xc9 + 100)) &&
       (this->field_0043 == (short)(*(short *)&this->field_0x5ac * 0xc9 + 100))) {
      if (this->field_0045 != (short)(*(short *)&this->field_0x5ae * 200 + 100)) {
        this->field_05C4 = 3;
        return;
      }
      if (this->field_006C == this->field_05B0) {
        this->field_05C4 = 6;
        return;
      }
      this->field_05C4 = 5;
      return;
    }
    this->field_05C4 = 1;
  }
  else {
    iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x4fcb,0,0,"%s",
                               "STBoatC::PrepareForLoading name!=swli.lname");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return;
}

// 00491600 FUN_00491600
#line 4 "decomp/ST.exe/functions/00491600/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\To_boat.cpp
   Diagnostic line evidence: 20488 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __fastcall st::fn_00491600(AnonShape_00491600_23458133 *param_1)

{
  AnonNested_00491600_05A6_E75AEFE8 *pAVar1;
  int iVar2;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0x100))(param_1->field_01D1 | 0xd);
  st::fn_00404EC1(param_1->field_005B,param_1->field_005D,param_1->field_005F,param_1->field_008E
                     ,(AnonShape_00495FF0_59081BDD *)param_1);
  *(undefined4 *)&param_1[1].field_0x16 = 3;
  if (DAT_008117bc != nullptr) {
    local_10 = *(undefined2 *)&param_1->field_0x24;
    local_e = param_1->field_0032;
    local_14 = 0x5dd2;
    if (param_1->field_05A6 == nullptr) {
      iVar2 = st::fn_006E62D0
                        (g_playSystem_00802A38,param_1->field_05A2,(int *)&param_1->field_05A6);
      if (iVar2 == -4) {
        st::fn_006A5E40
                  (-4,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x5008);
      }
    }
    pAVar1 = param_1->field_05A6;
    local_c = pAVar1->field_0024;
    local_a = pAVar1->field_0032;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

// 00491720 FUN_00491720
#line 4 "decomp/ST.exe/functions/00491720/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\To_boat.cpp
   Diagnostic line evidence: 20511 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __fastcall st::fn_00491720(STBoatC *param_1,undefined4 param_2)

{
  ushort **ppuVar1;
  uint uVar2;
  int iVar3;
  STGroupBoatC *pSVar4;
  uint uVar5;
  byte arg_1;
  uint uVar6;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  ushort local_14;
  ushort local_12;
  uint local_c;
  uint local_8;

  arg_1 = 0;
  local_8 = 0;
  if (DAT_008117bc != nullptr) {
    local_18 = *(undefined2 *)&param_1->field_0024;
    local_16 = param_1->field_0032;
    ppuVar1 = &param_1->field_05A6;
    local_1c = 0x5dd3;
    if ((*ppuVar1 == nullptr) &&
       (iVar3 = st::fn_006E62D0
                          (g_playSystem_00802A38,param_1->field_05A2,(int *)ppuVar1), iVar3 == -4))
    {
      st::fn_006A5E40
                (-4,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x501f);
    }
    local_14 = (*ppuVar1)[0x12];
    local_12 = (*ppuVar1)[0x19];
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_2c);
  }
  param_1->field_05C0 = 0;
  param_1->field_07C2 = 0;
  param_1->field_05A6 = nullptr;
  st::fn_00401325
            (param_1->field_005B,param_1->field_005D,param_1->field_005F,param_1->field_008E,
             (RecoveredRecord_DumpClassC_00495EC0 *)param_1);
  pSVar4 = st::fn_00405CF9(*(char *)&param_1->field_0024,param_1->field_0030);
  uVar5 = st::fn_004036F2(pSVar4);
  uVar2 = param_1->field_01D1;
  uVar6 = local_8;
  if ((uVar2 & 1) == 0) {
    if ((uVar5 & 1) != 0) {
      arg_1 = 1;
    }
  }
  else if ((uVar5 & 1) == 0) {
    uVar6 = 1;
  }
  if ((uVar2 & 2) == 0) {
    if ((uVar5 & 2) != 0) {
      arg_1 = arg_1 | 2;
    }
  }
  else if ((uVar5 & 2) == 0) {
    uVar6 = uVar6 | 2;
  }
  if ((uVar2 & 4) == 0) {
    if ((uVar5 & 4) != 0) {
      arg_1 = arg_1 | 4;
    }
  }
  else if ((uVar5 & 4) == 0) {
    uVar6 = uVar6 | 4;
  }
  if ((uVar2 & 8) == 0) {
    if ((uVar5 & 8) != 0) {
      arg_1 = arg_1 | 8;
    }
  }
  else if ((uVar5 & 8) == 0) {
    uVar6 = uVar6 | 8;
  }
  if ((uVar2 & 0x10) == 0) {
    if ((uVar5 & 0x10) != 0) {
      arg_1 = arg_1 | 0x10;
    }
  }
  else if ((uVar5 & 0x10) == 0) {
    uVar6 = uVar6 | 0x10;
  }
  if (arg_1 != 0) {
    param_1->vfunc_100(arg_1);
  }
  if (uVar6 != 0) {
    param_1->vfunc_104((char)uVar6);
  }
  local_c = g_playSystem_00802A38->field_00E4;
  st::fn_00402126(param_1,CASE_3,&local_c);
  return;
}

// 004919C0 STBoatC::GetCellForLoading
#line 4 "decomp/ST.exe/functions/004919C0/decomp.c"
/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetCellForLoading

   [STSwitchEnumApplier] Switch target param_6 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_GetCellForLoading_param_6Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

undefined4 __thiscall
st::fn_004919C0
          (STBoatC *this,short param_1,short param_2,short param_3,short param_4,short param_5,
          STBoatC_GetCellForLoading_param_6Enum param_6,undefined2 *param_7,undefined2 *param_8,
          undefined2 *param_9,short *param_10,short *param_11,undefined2 *param_12)

{
  undefined2 uVar1;
  int *piVar3;
  int iVar4;
  int iVar10;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar11;
  int iVar12;
  short *psVar14;
  int local_68;
  int local_64 [4];
  int local_54;
  int local_50;
  int local_4c;
  int local_48 [10];
  int local_20 [5];
  STBoatC *local_c;
  int local_8;
  short *psVar12;
  short *psVar13;

  local_68 = (int)param_4;
  iVar11 = (int)param_5;
  local_64[1] = local_68 + -1;
  local_64[0] = iVar11 + -1;
  local_64[3] = local_68 + 1;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  uVar6 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
  local_4c = iVar11 + 1;
  psVar12 = g_pathingGrid.cells;
  psVar13 = g_pathingScratchGrid.cells;
  for (uVar7 = (uVar6 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)psVar13 = *(undefined4 *)psVar12;
    psVar12 = psVar12 + 2;
    psVar13 = psVar13 + 2;
  }
  for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)psVar13 = (char)*psVar12;
    psVar12 = (short *)((int)psVar12 + 1);
    psVar13 = (short *)((int)psVar13 + 1);
  }
  local_48[5] = 0xffffffff;
  local_48[6] = 0xffffffff;
  local_48[7] = 0xffffffff;
  local_48[8] = 0xffffffff;
  local_48[9] = 0xffffffff;
  local_64[2] = iVar11;
  local_54 = iVar11;
  local_50 = local_68;
  local_c = this;
  st::fn_006AB090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
               (int)g_pathingGrid.sizeZ,(int)param_1,(int)param_2,(int)param_3,-1,-1,-1);
  iVar11 = g_pathingGrid.sizeX * iVar11;
  iVar9 = 0;
  if (g_pathingScratchGrid.cells
      [(int)(short)param_6 * (int)g_pathingGrid.planeStride + iVar11 + (int)param_4] < 1) {
    return 0xfffffffe;
  }
  switch((int)(short)param_6) {
  case 0:
    local_20[0] = 0;
    local_20[1] = 1;
    local_20[2] = 2;
    local_20[3] = 3;
    local_20[4] = 4;
    break;
  case 1:
    local_20[0] = 1;
    local_20[1] = 2;
    local_20[2] = 0;
    local_20[3] = 3;
    local_20[4] = 4;
    break;
  case 2:
    local_20[0] = 2;
    local_20[1] = 3;
    local_20[2] = 1;
    local_20[3] = 4;
    local_20[4] = 0;
    break;
  case 3:
    local_20[0] = 3;
    local_20[1] = 4;
    goto LAB_00491b42;
  case 4:
    local_20[0] = 4;
    local_20[1] = 3;
LAB_00491b42:
    local_20[2] = 2;
    local_20[3] = 1;
    local_20[4] = 0;
    break;
  default:
    iVar10 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x5071,0,0,"%s",
                                "STBoatC::GetCellForLoading zo");
    if (iVar10 == 0) {
      return 0xfffffffe;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  do {
    local_8 = *(int *)((int)local_20 + iVar9) * (int)g_pathingGrid.planeStride;
    if (0 < g_pathingScratchGrid.cells[local_8 + iVar11 + (int)param_4]) {
      piVar3 = &local_68;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_3 = 1000000000;
      iVar12 = 0;
      do {
        iVar4 = *piVar3;
        if ((((-1 < iVar4) && (iVar4 <= g_pathingGrid.sizeX + -1)) &&
            (iVar8 = piVar3[1], -1 < iVar8)) && (iVar8 <= g_pathingGrid.sizeY + -1)) {
          iVar4 = iVar8 * g_pathingGrid.sizeX + local_8 + iVar4;
          iVar8 = (int)g_pathingScratchGrid.cells[iVar4];
          if (0 < iVar8) {
            if ((STBoatC *)g_worldGrid.cells[iVar4].objects[0] == local_c) {
              *(int *)((int)local_48 + iVar9 + 0x14) = iVar12;
              *(undefined4 *)((int)local_48 + iVar9) = 2;
              break;
            }
            if ((STBoatC *)g_worldGrid.cells[iVar4].objects[0] == nullptr) {
              if (*(int *)((int)local_48 + iVar9) == 0) {
                *(int *)((int)local_48 + iVar9 + 0x14) = iVar12;
                *(undefined4 *)((int)local_48 + iVar9) = 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                _param_3 = iVar8;
                goto cf_continue_loop_00491C1C;
              }
              if (*(int *)((int)local_48 + iVar9) != 1) goto LAB_00491c08;
            }
            else {
LAB_00491c08:
              if (*(int *)((int)local_48 + iVar9) != 0) goto cf_continue_loop_00491C1C;
            }
            if (iVar8 < _param_3) {
              *(int *)((int)local_48 + iVar9 + 0x14) = iVar12;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_3 = iVar8;
            }
          }
        }
cf_continue_loop_00491C1C:
        iVar12 = iVar12 + 1;
        piVar3 = piVar3 + 2;
      } while (iVar12 < 4);
    }
    iVar9 = iVar9 + 4;
    if (0x13 < iVar9) {
      iVar9 = (short)param_6 + 1;
      if (iVar9 < 5) {
        iVar12 = (short)param_6 + 2;
        psVar14 = g_pathingScratchGrid.cells +
                  g_pathingGrid.planeStride * iVar9 + iVar11 + (int)param_4;
        do {
          iVar9 = iVar12;
          if (*psVar14 < 1) {
            for (; iVar9 < 5; iVar9 = iVar9 + 1) {
              iVar4 = 0;
              piVar3 = local_20;
              do {
                if (*piVar3 == iVar9) {
                  local_48[iVar4 + 5] = -1;
                  break;
                }
                iVar4 = iVar4 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar4 < 5);
            }
          }
          psVar14 = psVar14 + g_pathingGrid.planeStride;
          iVar12 = iVar12 + 1;
        } while (iVar12 < 6);
      }
      iVar9 = (short)param_6 + -1;
      if (-1 < iVar9) {
        psVar14 = g_pathingScratchGrid.cells +
                  g_pathingGrid.planeStride * iVar9 + iVar11 + (int)param_4;
        do {
          if ((*psVar14 < 1) && (iVar11 = iVar9 + -1, 0 < iVar9)) {
            do {
              iVar12 = 0;
              piVar3 = local_20;
              do {
                if (*piVar3 == iVar11) {
                  local_48[iVar12 + 5] = -1;
                  break;
                }
                iVar12 = iVar12 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar12 < 5);
              iVar11 = iVar11 + -1;
            } while (-1 < iVar11);
          }
          iVar9 = iVar9 + -1;
          psVar14 = psVar14 + -(int)g_pathingGrid.planeStride;
        } while (-1 < iVar9);
      }
      iVar11 = -1;
      iVar9 = 0;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_3 = 1000000000;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_6 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar12 = *(int *)((int)local_48 + iVar9 + 0x14);
        if (iVar12 != -1) {
          if ((iVar11 == -1) || ((*(int *)((int)local_48 + iVar9) == 1 && (local_48[iVar11] == 0))))
          {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_3 = (int)g_pathingScratchGrid.cells
                            [*(int *)((int)local_64 + iVar12 * 8) * (int)g_pathingGrid.sizeX +
                             *(int *)((int)local_20 + iVar9) * (int)g_pathingGrid.planeStride +
                             (&local_68)[iVar12 * 2]];
            iVar11 = _param_6;
          }
          else if (((*(int *)((int)local_48 + iVar9) != 0) || (local_48[iVar11] != 1)) &&
                  (g_pathingScratchGrid.cells
                   [*(int *)((int)local_64 + iVar12 * 8) * (int)g_pathingGrid.sizeX +
                    *(int *)((int)local_20 + iVar9) * (int)g_pathingGrid.planeStride +
                    (&local_68)[iVar12 * 2]] < _param_3)) {
            iVar11 = _param_6;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_3 = (int)g_pathingScratchGrid.cells
                            [*(int *)((int)local_64 + iVar12 * 8) * (int)g_pathingGrid.sizeX +
                             *(int *)((int)local_20 + iVar9) * (int)g_pathingGrid.planeStride +
                             (&local_68)[iVar12 * 2]];
          }
        }
        iVar9 = iVar9 + 4;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        _param_6 = _param_6 + 1;
      } while (iVar9 < 0x14);
      if (iVar11 != -1) {
        iVar9 = local_20[iVar11];
        uVar1 = *(undefined2 *)((int)local_64 + local_48[iVar11 + 5] * 8);
        *param_7 = (short)(&local_68)[local_48[iVar11 + 5] * 2];
        *param_8 = uVar1;
        *param_9 = (short)iVar9;
        *param_10 = param_4;
        *param_11 = param_5;
        *param_12 = (short)iVar9;
        return 0;
      }
      return 0xffffffff;
    }
  } while( true );
}

// 00491FB0 STBoatC::ReadyForLoading
#line 4 "decomp/ST.exe/functions/00491FB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ReadyForLoading

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004749C0 -> 00491FB0 @ 0047501C; /STBoatC+0x18 | 00491FB0 -> 006E62D0 @ 00491FE7 |
   00491FB0 parameter used as this of STFishC::sub_004162F0 @ 00492004 */

void __thiscall st::fn_00491FB0(STBoatC *this,STFishC *param_1)

{
  int iVar2;

  if ((((this->field_045D == CASE_F) || (this->field_045D == CASE_E)) &&
      ((STFishC *)this->field_058E == param_1)) && (this->field_0596 == 2)) {
    st::fn_006E62D0(g_playSystem_00802A38,this->field_058E,(int *)&param_1);
    st::fn_00405F0B(param_1,&this->field_0588,&this->field_058A,&this->field_058C);
    this->field_0596 = 3;
    this->field_059A = 0;
    return;
  }
  iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x50bb,0,0,"%s",
                             "STBoatC::ReadyForLoading incorrect call");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return;
}

// 00492080 STBoatC::NotReadyForLoading
#line 4 "decomp/ST.exe/functions/00492080/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::NotReadyForLoading */

void __thiscall st::fn_00492080(STBoatC *this,int param_1)

{
  int iVar3;
  int local_EAX_104;
  int iVar2;
  STFishC *local_14;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;

  if ((((this->field_045D != CASE_F) && (this->field_045D != CASE_E)) ||
      (this->field_058E != (AnonShape_005EFAE0_B406B78B *)param_1)) || (this->field_0596 != 2)) {
    iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x50db,0,0,"%s",
                               "STBoatC::NotReadyForLoading incorrect call");
    if (iVar2 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar3 = st::fn_006E62D0(g_playSystem_00802A38,this->field_058E,(int *)&local_14);
  if (iVar3 != -4) {
    (*local_14->vtable->vfunc_AC)(this->field_0018);
    st::fn_00405F0B(local_14,&this->field_0588,&this->field_058A,&this->field_058C);
    iVar3 = st::fn_00402CFC(this,this->field_005B,this->field_005D,this->field_005F,
                              this->field_0588,this->field_058A,this->field_058C,&local_6,
                              (undefined2 *)((int)&param_1 + 2),&local_8,&local_e,&local_c,&local_a);
    if (iVar3 != -2) {
      this->field_0596 = 0;
      if (iVar3 != -1) {
        local_e = local_6;
        local_c = STPiece<2,2>(param_1);
        local_a = local_8;
      }
      st::fn_00404F6B(this,(int)local_e,(int)local_c,(int)local_a);
      st::fn_004031DE(this,0);
      return;
    }
    this->field_0596 = 1;
    this->field_0592 = 0;
    return;
  }
  local_EAX_104 =
       st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x50c8,0,0,"%s",
                          "STBoatC::NotReadyForLoading it`s impossible!");
  if (local_EAX_104 == 0) {
    this->field_0596 = 1;
    this->field_0592 = 0;
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 00492280 STBoatC::CancelLoading
#line 4 "decomp/ST.exe/functions/00492280/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CancelLoading */

void __thiscall st::fn_00492280(STBoatC *this,int param_1)

{
  STBoatC_field_045DState SVar1;
  int iVar2;
  int iVar3;

  SVar1 = this->field_045D;
  if ((((SVar1 == CASE_F) || (SVar1 == CASE_E)) &&
      (this->field_058E == (AnonShape_005EFAE0_B406B78B *)param_1)) && (this->field_0596 == 2)) {
    this->field_0596 = 1;
    this->field_0592 = 0;
    return;
  }
  if (((SVar1 == CASE_F) || (SVar1 == CASE_E)) &&
     ((this->field_058E == (AnonShape_005EFAE0_B406B78B *)param_1 && (this->field_0596 == 3)))) {
    iVar2 = this->field_059A;
    if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) {
      this->field_059A = 9;
      return;
    }
    if ((iVar2 == 3) || (iVar2 == 4)) {
      this->field_059A = 5;
      return;
    }
  }
  else {
    iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x50f0,0,0,"%s",
                               "STBoatC::CancelLoading incorrect call");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return;
}

// 00492390 STBoatC::sub_00492390
#line 4 "decomp/ST.exe/functions/00492390/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\To_boat.cpp
   Diagnostic line evidence: 20736 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0 */

void __thiscall st::fn_00492390(STBoatC *this)

{
  int iVar1;
  STBoatC *local_8;

  if (((this->field_045D == CASE_F) || (this->field_045D == CASE_E)) && (this->field_07C6 == 0)) {
    this->field_07C6 = 1;
    local_8 = this;
    iVar1 = st::fn_006E62D0(g_playSystem_00802A38,this->field_058E,(int *)&local_8);
    if (iVar1 == -4) {
      st::fn_006A5E40
                (-0x5001fffd,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                 0x5100);
    }
    local_8->vfunc_9C();
  }
  return;
}

// 00493340 STBoatC::CheckForReplenisher
#line 4 "decomp/ST.exe/functions/00493340/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CheckForReplenisher
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4
   __thiscall CheckForReplenisher(STBoatC * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=0049344B RET | 00493457 RET */

undefined4 __thiscall st::fn_00493340(STBoatC *this)

{
  DArrayTy *array;
  DArrayTy *array_00;
  dword dVar1;
  int iVar3;
  undefined4 uVar4;
  uint index;
  uint local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;

  array = (DArrayTy *)g_packedRecords_A62x8[this->field_0024].field355_0x2e7;
  array_00 = (DArrayTy *)g_packedRecords_A62x8[this->field_0024].field3_0x9;
  if (array != nullptr) {
    dVar1 = array->count;
    index = 0;
    if (0 < (int)dVar1) {
      do {
        st::fn_006ACC70(array,index,&local_14);
        if ((short)local_14 != -1) {
          st::fn_006ACC70(array_00,local_14 & 0xffff,&local_10);
          if (local_10 == nullptr) {
            iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_boat.cpp",0x5221,0,0,
                                       "%s","STBoatC::CheckForReplenisher NULL");
            if (iVar3 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\To_boat.cpp",0x5222);
          }
          st::fn_004018C5(local_10,&local_a,&local_8,&local_6);
          iVar3 = st::fn_006AADD0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                               (int)local_a,(int)local_8,(int)local_6);
          if (iVar3 < 7) {
            return 1;
          }
        }
        index = index + 1;
        if ((int)dVar1 <= (int)index) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

