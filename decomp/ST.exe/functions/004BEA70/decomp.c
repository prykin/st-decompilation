#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004BEA70 returns return of FUN_0044e1b0 @ 004C10A3 | 004BEA70 returns return of
   FUN_0044e1b0 @ 004C10BE | 004BEA70 returns return of FUN_0044e1b0 @ 004C10DA | 004BEA70 returns
   return of FUN_0044e1b0 @ 004C10EA | 004BEA70 returns return of FUN_0044e1b0 @ 004C10FA | 004BEA70
   returns return of FUN_0044e1b0 @ 004C110A | 004BEA70 returns return of FUN_0044e1b0 @ 004C111A |
   004BEA70 returns return of FUN_0044e1b0 @ 004C112A | 004BEA70 returns return of FUN_0044e1b0 @
   004C113A | 004BEA70 returns return of FUN_0044e1b0 @ 004C114A | 004BEA70 returns return of
   FUN_0044e1b0 @ 004C1162

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190
    */

bool __thiscall TLOBaseTy::FUN_004bea70(TLOBaseTy *this,int *param_1)

{
  uint *puVar1;
  TLOBaseTy_field_046CState TVar2;
  TLOBaseTy_field_05ACState TVar3;
  int *piVar4;
  char cVar5;
  short sVar7;
  int iVar8;
  int iVar9;
  AiPlrClassTy *pAVar10;
  STGroupBoatC *pSVar11;
  int local_EAX_607;
  uint uVar12;
  int local_EAX_725;
  int local_EAX_770;
  int local_EAX_1167;
  int local_EAX_1206;
  int local_EAX_1349;
  int local_EAX_1388;
  int local_EAX_1496;
  int local_EAX_1535;
  int local_EAX_1613;
  int local_EAX_1652;
  int local_EAX_1739;
  int local_EAX_1778;
  int local_EAX_1848;
  int local_EAX_1887;
  int local_EAX_1973;
  int local_EAX_2012;
  int local_EAX_2098;
  int local_EAX_2137;
  int local_EAX_2207;
  int local_EAX_2246;
  int local_EAX_2318;
  int local_EAX_2357;
  int local_EAX_2427;
  int local_EAX_2466;
  int local_EAX_2535;
  int local_EAX_2574;
  int local_EAX_2652;
  int local_EAX_2691;
  int local_EAX_2781;
  int local_EAX_2820;
  int local_EAX_2898;
  int local_EAX_2937;
  int local_EAX_3027;
  int local_EAX_3066;
  int local_EAX_3144;
  int local_EAX_3183;
  int local_EAX_3286;
  int local_EAX_3325;
  int local_EAX_3424;
  int local_EAX_3463;
  int local_EAX_3527;
  int local_EAX_3566;
  int local_EAX_3635;
  int local_EAX_3674;
  int local_EAX_3752;
  int local_EAX_3791;
  int local_EAX_3860;
  int local_EAX_3899;
  int local_EAX_4004;
  int local_EAX_4043;
  int local_EAX_4145;
  int local_EAX_4184;
  TLOBaseTy_field_04D0State TVar13;
  int local_EAX_4267;
  int local_EAX_4306;
  int local_EAX_4382;
  int local_EAX_4421;
  int local_EAX_4490;
  int local_EAX_4529;
  int local_EAX_4607;
  int local_EAX_4646;
  int local_EAX_4716;
  int local_EAX_4755;
  int local_EAX_4838;
  int local_EAX_4877;
  int local_EAX_4947;
  int local_EAX_4986;
  int local_EAX_5062;
  int local_EAX_5101;
  int local_EAX_5177;
  int local_EAX_5216;
  int local_EAX_5305;
  int local_EAX_5344;
  int local_EAX_5423;
  int local_EAX_5462;
  int local_EAX_5552;
  int local_EAX_5591;
  int uVar13;
  int uVar14;
  int local_EAX_5828;
  int local_EAX_5867;
  int local_EAX_5936;
  int local_EAX_5975;
  undefined1 uVar6;
  undefined4 uVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_02;
  int local_EAX_8404;
  uint *puVar16;
  AnonPointee_TLOBaseTy_061B *pAVar17;
  short sVar18;
  undefined2 *puVar19;
  TLOBaseTy_field_04D0State *pTVar20;
  undefined2 uVar21;
  int *piVar22;
  bool bVar23;
  int *local_c;
  int *local_8;

  piVar4 = param_1;
  *param_1 = this->field_05AC;
  *(byte *)((int)param_1 + 5) =
       ((this->field_0024 != (byte *)(uint)(byte)this->field_0010->field_112D) - 1U & 0xfe) + 3;
  iVar8 = GetPlayerRaceId(*(char *)&this->field_023D);
  *(char *)(param_1 + 1) = (char)iVar8;
  if (((this->field_01D1 & 4) == 0) && (this->field_0420 == 0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(undefined1 *)((int)param_1 + 7) = uVar6;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)&this->field_021D;
  switch(this->field_0245) {
  case CASE_0:
  case CASE_1:
  case CASE_2:
  case CASE_5:
  case CASE_6:
    *(undefined1 *)((int)param_1 + 6) = 0;
    break;
  case CASE_3:
  case CASE_4:
    *(undefined1 *)((int)param_1 + 6) = 1;
  }
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined2 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0xf) = 0;
  *(undefined2 *)((int)param_1 + 0x13) = 0;
  memset(param_1 + 7, 0, 0x3c); /* compiler bulk-zero initialization */
  iVar8 = thunk_FUN_004e8030(this->field_05AC);
  if (iVar8 == 3) {
    iVar9 = GetPlayerRaceId(*(char *)&this->field_0024);
    if ((char)iVar9 != '\x03') {
LAB_004beb5f:
      *(undefined1 *)((int)param_1 + 5) = 3;
      goto LAB_004beb63;
    }
LAB_004beb6d:
    *(undefined1 *)((int)param_1 + 9) = 0x33;
    if (((this->field_0245 == CASE_0) && (iVar8 = sub_004D6DF0(this), iVar8 != 0)) &&
       (iVar8 = thunk_FUN_004e4140((int)this->field_0024), iVar8 != 0)) {
      uVar6 = 1;
    }
    else {
LAB_004bebed:
      uVar6 = 0;
    }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004bebef:
    *(undefined1 *)((int)param_1 + 0xf) = uVar6;
  }
  else {
    iVar9 = GetPlayerRaceId(*(char *)&this->field_0024);
    if ((char)iVar9 == '\x03') goto LAB_004beb5f;
LAB_004beb63:
    if ((iVar8 != 1) && (iVar8 != 2)) goto LAB_004beb6d;
    if (*(int *)&this->field_0x361 != 5) {
      *(undefined1 *)((int)param_1 + 9) = 0x20;
      iVar8 = this->vfunc_7C();
      if ((iVar8 == 100) ||
         (((this->field_0245 != CASE_0 && (this->field_0245 != CASE_5)) ||
          (*(int *)&this->field_0x361 != 0)))) goto LAB_004bebed;
      uVar6 = 1;
      goto LAB_004bebef;
    }
    *(undefined1 *)((int)param_1 + 9) = 0x32;
    *(bool *)((int)param_1 + 0xf) = this->field_0245 == CASE_0;
  }
  pAVar10 = thunk_FUN_004357f0(*(char *)&this->field_0024);
  if (pAVar10 == (AiPlrClassTy *)0x0) {
    *(undefined1 *)((int)param_1 + 0x15) = 0;
  }
  else {
    pSVar11 = thunk_FUN_0042b760(*(char *)&this->field_0024,this->field_0030);
    if ((pSVar11 == (STGroupBoatC *)0x0) || (pSVar11->field_001C == 0)) {
      *(undefined1 *)((int)param_1 + 0x15) = 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x15) = 3;
    }
  }
  switch(this->field_05AC) {
  case CASE_32:
    *(undefined1 *)((int)param_1 + 10) = 0x1d;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf427:
      if (this->field_0245 != CASE_0) goto LAB_004bf438;
      uVar6 = 1;
    }
    else {
      local_EAX_2427 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_2466 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_2466 & 0xffU) + ((local_EAX_2427 & 0xffU) + iVar8 * 3) * 3] !=
          '\0') goto LAB_004bf427;
LAB_004bf438:
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((int)param_1 + 0xb) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_2535 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_2574 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_2574 & 0xffU) + ((local_EAX_2535 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_33:
    *(undefined1 *)((int)param_1 + 10) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_2318 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_2357 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_2357 & 0xffU) + ((local_EAX_2318 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C0278;
    }
    pAVar17 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
    goto joined_r0x004bfcb7;
  case CASE_35:
    *(undefined1 *)((int)param_1 + 10) = 0x21;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_1613 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_1652 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_1652 & 0xffU) + ((local_EAX_1613 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      bVar23 = *(int *)&this->field_0x361 == 0;
LAB_004bef54:
      if (bVar23) goto cf_common_join_004BEF5A;
    }
    goto cf_common_join_004C0278;
  case CASE_36:
    goto switchD_004bec4d_caseD_36;
  case CASE_37:
    *(undefined1 *)((int)param_1 + 10) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_2207 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_2246 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_2246 & 0xffU) + ((local_EAX_2207 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C0278;
    }
    if (this->field_04D8 != 0xffff) goto cf_common_join_004C0278;
    goto cf_common_join_004BEF5A;
  case CASE_3A:
    *(undefined1 *)((int)param_1 + 10) = 0x22;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_2098 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_2137 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_2137 & 0xffU) + ((local_EAX_2098 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C0278;
    }
    pAVar17 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
    goto joined_r0x004bfcb7;
  case CASE_3C:
    *(undefined1 *)((int)param_1 + 10) = 0x28;
    if (this->field_0245 == CASE_0) {
      if (this->field_0024 != (byte *)this->field_023D) {
        local_EAX_3286 = GetPlayerRaceId((char)(byte *)this->field_023D);
        iVar8 = this->field_0235;
        local_EAX_3325 = GetPlayerRaceId(*(char *)&this->field_0024);
        if ((&DAT_007e1984)[(local_EAX_3325 & 0xffU) + ((local_EAX_3286 & 0xffU) + iVar8 * 3) * 3]
            == '\0') goto LAB_004bf7a5;
      }
      if (g_playerRuntime[(int)this->field_0024].field2180_0xa0e != 0) goto LAB_004bf7a5;
      uVar6 = 1;
    }
    else {
LAB_004bf7a5:
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((int)param_1 + 0xb) = 0x29;
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_3424 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_3463 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_3463 & 0xffU) + ((local_EAX_3424 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C01F3;
    }
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_3E:
  case CASE_3F:
  case CASE_42:
  case CASE_46:
  case CASE_47:
  case CASE_4A:
  case CASE_4B:
  case CASE_51:
    if ((((byte)this->field_0265 & 2) == 2) && (this->field_026D != 0)) {
      *(undefined1 *)((int)param_1 + 10) = 0x52;
      if ((this->field_0245 == CASE_0) || (this->field_0245 == CASE_5)) {
LAB_004becbd:
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 10) = 3;
      if (this->field_0245 == CASE_0) {
        if (this->field_0261 != 0) {
          if ((*(byte *)&this->field_0265 & 2) != 0) {
            *(undefined1 *)(param_1 + 4) = 3;
            goto switchD_004bec4d_caseD_36;
          }
          goto LAB_004becaa;
        }
      }
      else {
LAB_004becaa:
        if (this->field_0261 != 0) goto LAB_004becbd;
      }
      if (this->field_0245 == CASE_5) goto LAB_004becbd;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar6;
switchD_004bec4d_caseD_36:
    local_EAX_607 = GetPlayerRaceId(*(char *)&this->field_0024);
    uVar12 = local_EAX_607 & 0xff;
    if (uVar12 == 1) {
      iVar8 = 0x1d;
    }
    else if (uVar12 == 2) {
      iVar8 = 0x89;
    }
    else if (uVar12 == 3) {
      iVar8 = 0x46;
    }
    else {
      iVar8 = 0;
    }
    if (this->field_05AC == CASE_36) {
      *(undefined1 *)((int)param_1 + 10) = 0x2a;
      if (((this->field_04D4 < 0x28) || (this->field_0245 != CASE_0)) ||
         (iVar8 = thunk_FUN_004e60d0((int)this->field_0024,iVar8), iVar8 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined1 *)(param_1 + 4) = uVar6;
    }
    local_EAX_725 = GetPlayerRaceId(*(char *)&this->field_0024);
    if ((local_EAX_725 & 0xffU) == 1) {
      iVar8 = 0x10;
    }
    else if ((local_EAX_725 & 0xffU) == 2) {
      iVar8 = 0x85;
    }
    else {
      iVar8 = 0;
    }
    local_EAX_770 = GetPlayerRaceId(*(char *)&this->field_023D);
    if (*(int *)(&DAT_00791b14 + ((local_EAX_770 & 0xffU) + this->field_0235 * 3) * 4) != 0) {
      if (((iVar8 == 0) || (iVar9 = thunk_FUN_004e60d0((int)this->field_0024,iVar8), iVar9 == 0)) ||
         (this->field_0245 != CASE_4)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      *(undefined1 *)((int)param_1 + 0xb) = 0x17;
      if (this->field_0245 == CASE_4) {
        cVar5 = (-(this->field_046C != 0) & 2U) + 1;
      }
      else {
        cVar5 = '\0';
      }
      *(char *)((int)param_1 + 0x11) = cVar5;
      if ((this->field_0245 == CASE_4) || (this->field_0245 == CASE_3)) {
        *(undefined1 *)(param_1 + 3) = 0x16;
        if ((this->field_0245 != CASE_4) || (iVar8 = sub_004C7070(this,0), iVar8 == 0))
        goto LAB_004bee65;
        uVar6 = 1;
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0x15;
        if (((iVar8 == 0) || (iVar8 = thunk_FUN_004e60d0((int)this->field_0024,iVar8), iVar8 == 0))
           || (((this->field_0245 != CASE_0 && (this->field_0245 != CASE_5)) ||
               (*(int *)&this->field_0x361 != 0)))) {
LAB_004bee65:
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
      }
      *(undefined1 *)((int)param_1 + 0x12) = uVar6;
      *(undefined1 *)((int)param_1 + 0xe) = 2;
      if (bVar23) {
        if ((this->field_03DC == 0) || (this->field_046C != 0)) {
          uVar6 = 1;
        }
        else {
          uVar6 = 3;
        }
      }
      else {
        uVar6 = 0;
      }
      *(undefined1 *)(param_1 + 5) = uVar6;
      *(undefined1 *)((int)param_1 + 0xd) = 1;
      if ((bVar23) &&
         (((TVar2 = this->field_046C, TVar2 == 0 || (TVar2 == CASE_1)) || (TVar2 == CASE_2)))) {
        if ((this->field_03DC == 0) && (TVar2 == 0)) {
          *(undefined1 *)((int)param_1 + 0x13) = 3;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x13) = 1;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x13) = 0;
      }
    }
    break;
  case CASE_40:
    *(undefined1 *)((int)param_1 + 10) = 0x1e;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf5fe:
      if ((this->field_0245 != CASE_0) || (iVar8 = sub_004C7860(this,1,9,1,0,1), iVar8 == 0))
      goto LAB_004bf624;
      uVar6 = 1;
    }
    else {
      local_EAX_2898 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_2937 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_2937 & 0xffU) + ((local_EAX_2898 & 0xffU) + iVar8 * 3) * 3] !=
          '\0') goto LAB_004bf5fe;
LAB_004bf624:
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((int)param_1 + 0xb) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_3027 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_3066 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_3066 & 0xffU) + ((local_EAX_3027 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_43:
    *(undefined1 *)((int)param_1 + 10) = 0x23;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_1973 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_2012 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_2012 & 0xffU) + ((local_EAX_1973 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      iVar8 = this->field_04D8;
joined_r0x004bf200:
      if (4999 < iVar8) goto cf_common_join_004BEF5A;
    }
    goto cf_common_join_004C0278;
  case CASE_44:
    *(undefined1 *)((int)param_1 + 10) = 0x1b;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_3144 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_3183 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_3183 & 0xffU) + ((local_EAX_3144 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      iVar8 = 0x19;
LAB_004bf708:
      iVar8 = thunk_FUN_004e60d0((int)this->field_0024,iVar8);
      if (iVar8 != 0) goto cf_common_join_004BEF5A;
    }
    goto cf_common_join_004C0278;
  case CASE_45:
    *(undefined1 *)((int)param_1 + 10) = 0x1a;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_1167 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_1206 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_1206 & 0xffU) + ((local_EAX_1167 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      bVar23 = this->field_04D0 == CASE_1;
      goto LAB_004bef54;
    }
    goto cf_common_join_004C0278;
  case CASE_49:
    *(undefined1 *)((int)param_1 + 10) = 0x1f;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf508:
      if ((this->field_0245 != CASE_0) || (iVar8 = sub_004C7860(this,1,0x15,1,0,1), iVar8 == 0))
      goto LAB_004bf52e;
      uVar6 = 1;
    }
    else {
      local_EAX_2652 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_2691 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_2691 & 0xffU) + ((local_EAX_2652 & 0xffU) + iVar8 * 3) * 3] !=
          '\0') goto LAB_004bf508;
LAB_004bf52e:
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((int)param_1 + 0xb) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_2781 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_2820 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_2820 & 0xffU) + ((local_EAX_2781 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_4C:
    if (this->field_04D0 != CASE_1) {
      *(undefined1 *)((int)param_1 + 10) = 0x24;
      if (this->field_0024 != (byte *)this->field_023D) {
        local_EAX_1848 = GetPlayerRaceId((char)(byte *)this->field_023D);
        iVar8 = this->field_0235;
        local_EAX_1887 = GetPlayerRaceId(*(char *)&this->field_0024);
        if ((&DAT_007e1984)[(local_EAX_1887 & 0xffU) + ((local_EAX_1848 & 0xffU) + iVar8 * 3) * 3]
            == '\0') goto cf_common_join_004C0278;
      }
      if (this->field_0245 != CASE_0) goto cf_common_join_004C0278;
      iVar8 = this->field_04D8;
      goto joined_r0x004bf200;
    }
    *(undefined1 *)((int)param_1 + 10) = 0x25;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_1739 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_1778 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_1778 & 0xffU) + ((local_EAX_1739 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C0278;
    }
LAB_004bf17b:
    pAVar17 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
    goto joined_r0x004bfcb7;
  case CASE_4E:
    *(undefined1 *)((int)param_1 + 10) = 0x1c;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004beff1:
      if (((this->field_0245 != CASE_0) ||
          (iVar8 = thunk_FUN_004e60d0((int)this->field_0024,0x31), iVar8 == 0)) ||
         ((this->field_04D0 != CASE_0 || (*(int *)&this->field_0x361 != 0)))) goto LAB_004bf02b;
      uVar6 = 1;
    }
    else {
      local_EAX_1349 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_1388 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_1388 & 0xffU) + ((local_EAX_1349 & 0xffU) + iVar8 * 3) * 3] !=
          '\0') goto LAB_004beff1;
LAB_004bf02b:
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((int)param_1 + 0xb) = 0x19;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_1496 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_1535 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_1535 & 0xffU) + ((local_EAX_1496 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C01F3;
    }
    if (this->field_0261 == 0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_52:
    *(undefined1 *)((int)param_1 + 10) = 0x30;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf873:
      if (this->field_0245 != CASE_0) goto LAB_004bf884;
      uVar6 = 1;
    }
    else {
      local_EAX_3527 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_3566 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_3566 & 0xffU) + ((local_EAX_3527 & 0xffU) + iVar8 * 3) * 3] !=
          '\0') goto LAB_004bf873;
LAB_004bf884:
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((int)param_1 + 0xb) = 0x31;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_3635 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_3674 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_3674 & 0xffU) + ((local_EAX_3635 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_53:
    *(undefined1 *)((int)param_1 + 10) = 0x44;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf954:
      if (this->field_0245 != CASE_0) goto LAB_004bf965;
      uVar6 = 1;
    }
    else {
      local_EAX_3752 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_3791 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_3791 & 0xffU) + ((local_EAX_3752 & 0xffU) + iVar8 * 3) * 3] !=
          '\0') goto LAB_004bf954;
LAB_004bf965:
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((int)param_1 + 0xb) = 0x39;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf9c0:
      if (((this->field_0245 != CASE_0) || (*(int *)&this->field_0x361 != 0)) ||
         (g_playerRuntime[(int)this->field_0024].field2180_0xa0e != 0)) goto LAB_004bf9f7;
      uVar6 = 1;
    }
    else {
      local_EAX_3860 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_3899 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_3899 & 0xffU) + ((local_EAX_3860 & 0xffU) + iVar8 * 3) * 3] !=
          '\0') goto LAB_004bf9c0;
LAB_004bf9f7:
      uVar6 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x11) = uVar6;
    *(undefined1 *)(param_1 + 3) = 0x46;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_4004 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_4043 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_4043 & 0xffU) + ((local_EAX_4004 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto LAB_004bfffc;
    }
    if ((this->field_0245 != CASE_0) || (*(int *)&this->field_0x361 != 0)) goto LAB_004bfffc;
    *(undefined1 *)((int)param_1 + 0x12) = 1;
    break;
  case CASE_54:
  case CASE_55:
  case CASE_56:
  case CASE_57:
  case CASE_58:
  case CASE_59:
  case CASE_5A:
    *(undefined1 *)((int)param_1 + 10) = 0x41;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_4947 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_4986 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_4986 & 0xffU) + ((local_EAX_4947 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      pAVar17 = *(AnonPointee_TLOBaseTy_061B **)&this->field_0x361;
      goto joined_r0x004bfcb7;
    }
    goto cf_common_join_004C0278;
  case CASE_5C:
    *(undefined1 *)((int)param_1 + 10) = 0x3d;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bfbca:
      if (this->field_0245 != CASE_0) goto LAB_004bfbdb;
      uVar6 = 1;
    }
    else {
      local_EAX_4382 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_4421 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_4421 & 0xffU) + ((local_EAX_4382 & 0xffU) + iVar8 * 3) * 3] !=
          '\0') goto LAB_004bfbca;
LAB_004bfbdb:
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((int)param_1 + 0xb) = 0x37;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_4490 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_4529 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_4529 & 0xffU) + ((local_EAX_4490 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_5D:
    *(undefined1 *)((int)param_1 + 10) = 0x43;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_4716 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_4755 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_4755 & 0xffU) + ((local_EAX_4716 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C0278;
    }
    if ((0x27 < this->field_04D4) && (this->field_0245 == CASE_0)) {
      iVar8 = 0x46;
      goto LAB_004bf708;
    }
    goto cf_common_join_004C0278;
  case CASE_5F:
    *(undefined1 *)((int)param_1 + 10) = 0x3f;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004c0170:
      if (this->field_0245 != CASE_0) goto LAB_004c0181;
      uVar6 = 1;
    }
    else {
      local_EAX_5828 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_5867 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_5867 & 0xffU) + ((local_EAX_5828 & 0xffU) + iVar8 * 3) * 3] !=
          '\0') goto LAB_004c0170;
LAB_004c0181:
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((int)param_1 + 0xb) = 0x31;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_5936 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_5975 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_5975 & 0xffU) + ((local_EAX_5936 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_61:
    *(undefined1 *)((int)param_1 + 10) = 0x3b;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_4838 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_4877 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_4877 & 0xffU) + ((local_EAX_4838 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C0278;
    }
    if (0 < (int)this->field_04E0[0xe]) goto LAB_004bf17b;
    goto cf_common_join_004C0278;
  case CASE_64:
    *(undefined1 *)((int)param_1 + 10) = 0x40;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_4607 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_4646 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_4646 & 0xffU) + ((local_EAX_4607 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C0278;
    }
    pAVar17 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
joined_r0x004bfcb7:
    if (pAVar17 != (AnonPointee_TLOBaseTy_061B *)0x0) goto cf_common_join_004C0278;
cf_common_join_004BEF5A:
    uVar6 = 1;
    goto LAB_004bef5f;
  case CASE_66:
  case CASE_67:
  case CASE_6B:
  case CASE_71:
    if ((((byte)this->field_0265 & 2) != 2) || (this->field_026D == 0)) {
      *(undefined1 *)((int)param_1 + 10) = 0x34;
      if (this->field_0245 == CASE_0) {
        if (this->field_0261 != 0) {
          if ((*(byte *)&this->field_0265 & 2) != 0) {
            *(undefined1 *)(param_1 + 4) = 3;
            break;
          }
          goto LAB_004c0261;
        }
      }
      else {
LAB_004c0261:
        if (this->field_0261 != 0) goto cf_common_join_004BEF5A;
      }
      if (this->field_0245 == CASE_5) goto cf_common_join_004BEF5A;
      goto cf_common_join_004C0278;
    }
    *(undefined1 *)((int)param_1 + 10) = 0x52;
    if ((this->field_0245 == CASE_0) || (this->field_0245 == CASE_5)) goto cf_common_join_004BEF5A;
    uVar6 = 0;
    goto LAB_004bef5f;
  case CASE_6C:
    *(undefined1 *)((int)param_1 + 10) = 0x3e;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_5062 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_5101 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_5101 & 0xffU) + ((local_EAX_5062 & 0xffU) + iVar8 * 3) * 3] ==
          '\0') goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      pAVar17 = this->field_061B;
      goto joined_r0x004bfcb7;
    }
    goto cf_common_join_004C0278;
  case CASE_6D:
    *(undefined1 *)((int)param_1 + 10) = 0x42;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bfee5:
      if ((this->field_0245 != CASE_0) || ((this->field_04D0 != CASE_0 && (this->field_04D4 != 0))))
      goto LAB_004bff0a;
      uVar6 = 1;
    }
    else {
      local_EAX_5177 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_5216 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_5216 & 0xffU) + ((local_EAX_5177 & 0xffU) + iVar8 * 3) * 3] !=
          '\0') goto LAB_004bfee5;
LAB_004bff0a:
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((int)param_1 + 0xb) = 0x38;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bff65:
      if ((this->field_0245 != CASE_0) || (this->field_04D0 == CASE_0)) goto LAB_004bff80;
      uVar6 = 1;
    }
    else {
      local_EAX_5305 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_5344 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_5344 & 0xffU) + ((local_EAX_5305 & 0xffU) + iVar8 * 3) * 3] !=
          '\0') goto LAB_004bff65;
LAB_004bff80:
      uVar6 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x11) = uVar6;
    *(undefined1 *)(param_1 + 3) = 0x45;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bffdb:
      if ((this->field_0245 == CASE_0) && (this->field_04D4 != 0)) {
        *(undefined1 *)((int)param_1 + 0x12) = 1;
        break;
      }
    }
    else {
      local_EAX_5423 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_5462 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_5462 & 0xffU) + ((local_EAX_5423 & 0xffU) + iVar8 * 3) * 3] !=
          '\0') goto LAB_004bffdb;
    }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004bfffc:
    *(undefined1 *)((int)param_1 + 0x12) = 0;
    break;
  case CASE_70:
    if (this->field_04E0[4] == 0) {
      *(undefined1 *)((int)param_1 + 10) = 0x36;
      if (this->field_0024 != (byte *)this->field_023D) {
        local_EAX_4267 = GetPlayerRaceId((char)(byte *)this->field_023D);
        iVar8 = this->field_0235;
        local_EAX_4306 = GetPlayerRaceId(*(char *)&this->field_0024);
        if ((&DAT_007e1984)[(local_EAX_4306 & 0xffU) + ((local_EAX_4267 & 0xffU) + iVar8 * 3) * 3]
            == '\0') goto cf_common_join_004C0278;
      }
      if (this->field_0245 != CASE_0) goto cf_common_join_004C0278;
      TVar13 = this->field_04D0;
    }
    else {
      *(undefined1 *)((int)param_1 + 10) = 0x34;
      if (this->field_0024 != (byte *)this->field_023D) {
        local_EAX_4145 = GetPlayerRaceId((char)(byte *)this->field_023D);
        iVar8 = this->field_0235;
        local_EAX_4184 = GetPlayerRaceId(*(char *)&this->field_0024);
        if ((&DAT_007e1984)[(local_EAX_4184 & 0xffU) + ((local_EAX_4145 & 0xffU) + iVar8 * 3) * 3]
            == '\0') goto cf_common_join_004C0278;
      }
      TVar13 = this->field_0245;
    }
    if ((TVar13 == CASE_0) && (99 < (int)this->field_04E0[3])) goto cf_common_join_004BEF5A;
cf_common_join_004C0278:
    uVar6 = 0;
LAB_004bef5f:
    *(undefined1 *)(param_1 + 4) = uVar6;
    break;
  case CASE_72:
    *(undefined1 *)((int)param_1 + 10) = 0x34;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004c005c:
      if (this->field_0261 == 0) goto LAB_004c006d;
      uVar6 = 1;
    }
    else {
      local_EAX_5552 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      local_EAX_5591 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(local_EAX_5591 & 0xffU) + ((local_EAX_5552 & 0xffU) + iVar8 * 3) * 3] !=
          '\0') goto LAB_004c005c;
LAB_004c006d:
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(undefined1 *)((int)param_1 + 0xb) = 0x4f;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004c00cc:
      if ((((this->field_0245 == CASE_0) &&
           (iVar8 = thunk_FUN_004e60d0((int)this->field_0024,0x75), iVar8 != 0)) &&
          (this->field_04D0 == CASE_0)) && (*(int *)&this->field_0x361 == 0)) {
        *(undefined1 *)((int)param_1 + 0x11) = 1;
        break;
      }
    }
    else {
      uVar13 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar8 = this->field_0235;
      uVar14 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar14 & 0xffU) + ((uVar13 & 0xffU) + iVar8 * 3) * 3] != '\0')
      goto LAB_004c00cc;
    }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
cf_common_join_004C01F3:
    *(undefined1 *)((int)param_1 + 0x11) = 0;
  }
  switch(this->field_05AC) {
  case CASE_32:
  case CASE_40:
  case CASE_49:
  case CASE_5C:
    if (*(int *)&this->field_0x361 == 1) {
      *(undefined4 *)((int)param_1 + 0x1d) = *(undefined4 *)&this->field_0x369;
      iVar8 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((char)iVar8 == '\x03') {
        sVar7 = (short)this->field_03A4;
        sVar18 = (short)this->field_03B4;
      }
      else {
        sVar7 = (short)this->field_03A0;
        sVar18 = (short)this->field_03B0;
      }
      *(short *)((int)param_1 + 0x27) = sVar7 - sVar18;
      *(short *)((int)param_1 + 0x2b) = (short)((this->field_039C * (100 - this->field_0394)) / 100);
      *(char *)((int)param_1 + 0x2f) = (char)this->field_0394;
      iVar8 = GetPlayerRaceId(*(char *)&this->field_0024);
      *(char *)((int)param_1 + 0x25) = (char)iVar8;
      if (this->field_05AC == CASE_40) {
        iVar8 = sub_004C9370(this,1,9,-1);
        *(char *)((int)param_1 + 0x31) = (char)iVar8;
        if ((*(int *)&this->field_0x361 == 1) && (*(int *)&this->field_0x369 == 9)) {
          *(char *)((int)param_1 + 0x31) = this->field_0x36d + (char)iVar8;
        }
      }
      else if (this->field_05AC == CASE_49) {
        iVar8 = sub_004C9370(this,1,0x15,-1);
        *(char *)((int)param_1 + 0x31) = (char)iVar8;
        if ((*(int *)&this->field_0x361 == 1) && (*(int *)&this->field_0x369 == 0x15)) {
          *(char *)((int)param_1 + 0x31) = this->field_0x36d + (char)iVar8;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x31) = 0;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x1d) = 0;
      *(undefined2 *)((int)param_1 + 0x27) = 0xffff;
      *(undefined2 *)((int)param_1 + 0x2b) = 0xffff;
      *(undefined1 *)((int)param_1 + 0x2f) = 0xff;
      *(undefined1 *)((int)param_1 + 0x31) = 0;
    }
    break;
  case CASE_33:
    puVar19 = (undefined2 *)((int)param_1 + 0x2b);
    local_8 = (int *)((int)param_1 + 0x1d);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int *)0x0;
    piVar22 = &this->field_04D8;
    do {
      if ((piVar22[-2] == 0) || (piVar22[-1] == 0)) {
        *local_8 = 0;
        puVar19[-2] = 0xffff;
        *puVar19 = 0xffff;
        *(undefined1 *)((int)param_1 + 0x2f + (int)piVar4) = 0xff;
      }
      else {
        *local_8 = *piVar22;
        puVar19[-2] = (short)((*(int *)(&DAT_007e085c + *piVar22 * 4) * (piVar22[3] - piVar22[2])) /
                             piVar22[3]);
        *puVar19 = 0xffff;
        *(char *)((int)param_1 + 0x2f + (int)piVar4) = (char)((piVar22[2] * 100) / piVar22[3]);
        iVar8 = GetPlayerRaceId(*(char *)&this->field_0024);
        *(char *)((int)param_1 + 0x25 + (int)piVar4) = (char)iVar8;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)((int)param_1 + 1);
      piVar22 = piVar22 + 10;
      local_8 = local_8 + 1;
      puVar19 = puVar19 + 1;
    } while ((int)param_1 < 2);
    break;
  case CASE_34:
    pTVar20 = &this->field_04D0;
    if (0 < (int)this->field_04D0) {
      puVar16 = &this->field_04DC;
      do {
        if ((&DAT_007bf678)[(*pTVar20 - 0x96) * 3] == 1) {
          if (*(int *)(&DAT_007e6028 + (puVar16[-3] - 0x96) * 0x14) != 0) {
            uVar21 = (undefined2)*(int *)(&DAT_007e6028 + (puVar16[-3] - 0x96) * 0x14);
            switch(puVar16[-3]) {
            case 0x96:
              *(undefined1 *)(param_1 + 7) = 1;
              *(undefined2 *)(param_1 + 8) = uVar21;
              *(short *)((int)param_1 + 0x1e) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x1d) = (char)*puVar16;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0x97:
              *(undefined1 *)((int)param_1 + 0x22) = 1;
              *(undefined2 *)((int)param_1 + 0x26) = uVar21;
              *(short *)(param_1 + 9) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x23) = (char)*puVar16;
              break;
            case 0x98:
              *(undefined1 *)(param_1 + 10) = 1;
              *(undefined2 *)(param_1 + 0xb) = uVar21;
              *(short *)((int)param_1 + 0x2a) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x29) = (char)*puVar16;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0x99:
              *(undefined1 *)((int)param_1 + 0x2e) = 1;
              *(undefined2 *)((int)param_1 + 0x32) = uVar21;
              *(short *)(param_1 + 0xc) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x2f) = (char)*puVar16;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0x9a:
              *(undefined1 *)(param_1 + 0xd) = 1;
              *(undefined2 *)(param_1 + 0xe) = uVar21;
              *(short *)((int)param_1 + 0x36) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x35) = (char)*puVar16;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xa6:
              *(undefined1 *)((int)param_1 + 0x3a) = 1;
              *(undefined2 *)((int)param_1 + 0x3e) = uVar21;
              *(short *)(param_1 + 0xf) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x3b) = (char)*puVar16;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xa7:
              *(undefined1 *)((int)param_1 + 0x46) = 1;
              *(undefined2 *)((int)param_1 + 0x4a) = uVar21;
              *(short *)(param_1 + 0x12) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x47) = (char)*puVar16;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xa9:
              *(undefined1 *)(param_1 + 0x10) = 1;
              *(undefined2 *)(param_1 + 0x11) = uVar21;
              *(short *)((int)param_1 + 0x42) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x41) = (char)*puVar16;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xab:
              *(undefined1 *)(param_1 + 0x13) = 1;
              *(undefined2 *)(param_1 + 0x14) = uVar21;
              *(short *)((int)param_1 + 0x4e) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x4d) = (char)*puVar16;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xac:
              *(undefined1 *)((int)param_1 + 0x52) = 1;
              *(undefined2 *)((int)param_1 + 0x56) = uVar21;
              *(short *)(param_1 + 0x15) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x53) = (char)*puVar16;
            }
          }
        }
        puVar1 = puVar16 + 2;
        pTVar20 = puVar16 + 2;
        puVar16 = puVar16 + 5;
      } while (0 < (int)*puVar1);
    }
    break;
  case CASE_35:
  case CASE_54:
  case CASE_55:
  case CASE_56:
  case CASE_57:
  case CASE_58:
  case CASE_59:
  case CASE_5A:
    if (*(int *)&this->field_0x361 == 2) {
      *(undefined1 *)(param_1 + 0xf) = this->field_0x369;
      if (*(byte *)((int)&DAT_00798fd8 + *(int *)&this->field_0x369) < 2) {
        cVar5 = '\0';
      }
      else {
        uVar15 = thunk_FUN_004e60d0((int)this->field_0024,*(int *)&this->field_0x369);
        cVar5 = (char)uVar15 + '\x01';
      }
      *(char *)((int)param_1 + 0x3d) = cVar5;
      *(char *)((int)param_1 + 0x3e) = (char)this->field_0394;
      *(short *)((int)param_1 + 0x27) = (short)this->field_0398 - *(short *)&this->field_03A8;
      *(undefined2 *)((int)param_1 + 0x2b) = 0xffff;
    }
    else {
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(undefined1 *)((int)param_1 + 0x3d) = 0;
      *(undefined1 *)((int)param_1 + 0x3e) = 0;
      *(undefined2 *)((int)param_1 + 0x27) = 0xffff;
      *(undefined2 *)((int)param_1 + 0x2b) = 0xffff;
      *(undefined2 *)((int)param_1 + 0x3a) = 0;
      TVar3 = this->field_05AC;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)0x0;
      if (TVar3 == CASE_35) {
        do {
          if ((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0') {
            iVar8 = thunk_FUN_004e60d0((int)this->field_0024,(int)param_1);
            iVar8 = thunk_FUN_004e7f20((int)this->field_0024,(int)param_1,iVar8 + 1);
          }
          else {
            iVar8 = thunk_FUN_004e5910((int)this->field_0024,(uint)param_1);
          }
          if (iVar8 != 0) {
            uVar6 = thunk_FUN_004e6140((int)this->field_0024,(int)param_1);
            iVar8 = thunk_FUN_004e60d0((int)this->field_0024,(int)param_1);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (((iVar8 < CONCAT31(extraout_var_01,uVar6)) &&
                (iVar8 = thunk_FUN_004e5f90((int)this->field_0024,(uint)param_1), iVar8 == 0)) &&
               (((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0' ||
                (bVar23 = thunk_FUN_004e5c40(this->field_0024,(uint)param_1),
                CONCAT31(extraout_var_02,bVar23) != 0)))) {
              *(short *)((int)piVar4 + 0x3a) = *(short *)((int)piVar4 + 0x3a) + 1;
            }
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)((int)param_1 + 1);
        } while ((int)param_1 < 0x9b);
      }
      else if ((&DAT_0079a3fc)[(TVar3 * 3 + -0xfc) * 5] != 0) {
        local_c = &DAT_0079a3fc + (TVar3 * 3 + -0xfc) * 5;
        do {
          if (0xe < (int)param_1) break;
          if ((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0') {
            iVar8 = thunk_FUN_004e60d0((int)this->field_0024,(int)param_1);
            iVar8 = thunk_FUN_004e7f20((int)this->field_0024,(int)param_1,iVar8 + 1);
          }
          else {
            iVar8 = thunk_FUN_004e5910((int)this->field_0024,(uint)param_1);
          }
          if (iVar8 != 0) {
            uVar6 = thunk_FUN_004e6140((int)this->field_0024,(int)param_1);
            iVar8 = thunk_FUN_004e60d0((int)this->field_0024,(int)param_1);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (((iVar8 < CONCAT31(extraout_var,uVar6)) &&
                (iVar8 = thunk_FUN_004e5f90((int)this->field_0024,(uint)param_1), iVar8 == 0)) &&
               (((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0' ||
                (bVar23 = thunk_FUN_004e5c40(this->field_0024,(uint)param_1),
                CONCAT31(extraout_var_00,bVar23) != 0)))) {
              *(short *)((int)piVar4 + 0x3a) = *(short *)((int)piVar4 + 0x3a) + 1;
            }
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)((int)param_1 + 1);
          local_c = local_c + 1;
        } while (*local_c != 0);
      }
    }
    break;
  case CASE_36:
    iVar8 = this->field_04D4 * 0x28;
    iVar8 = iVar8 / 0x28 + (iVar8 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case CASE_37:
    goto switchD_004bef7c_caseD_37;
  case CASE_38:
  case CASE_39:
  case CASE_4F:
  case CASE_5E:
    if (this->field_04D4 == 0) {
      *(undefined2 *)((int)param_1 + 0x3f) = 0;
    }
    else {
      *(short *)((int)param_1 + 0x3f) = (short)this->field_04E0[0];
    }
    break;
  case CASE_3A:
    iVar8 = this->field_04D0 * 400;
    *(short *)((int)param_1 + 0x3f) =
         ((short)(iVar8 / 100) + (short)(iVar8 >> 0x1f)) -
         (short)((longlong)iVar8 * 0x51eb851f >> 0x3f);
    iVar8 = thunk_FUN_004d8250();
    *(char *)((int)param_1 + 0x45) = (char)iVar8;
    if (this->field_04E0[1] == 0) {
      iVar8 = thunk_FUN_004d8280();
      *(char *)((int)param_1 + 0x46) = (char)iVar8;
    }
    else {
      iVar8 = thunk_FUN_004d8280();
      iVar9 = thunk_FUN_004d8230();
      *(char *)((int)param_1 + 0x46) = (char)((uint)(iVar9 * iVar8) / this->field_04E0[1]);
    }
    break;
  case CASE_3C:
  case CASE_53:
    switch(g_playerRuntime[(int)this->field_0024].field2180_0xa0e) {
    case 0:
      if (g_playerRuntime[(int)this->field_0024].field2182_0xa16 == 0)
      goto switchD_004bef7c_caseD_52;
      *(undefined1 *)((int)param_1 + 0x47) = 3;
      break;
    case 1:
      local_EAX_8404 = GetPlayerRaceId(*(char *)&this->field_0024);
      uVar12 = local_EAX_8404 & 0xff;
      if (uVar12 == 1) {
        iVar8 = 0x3d;
      }
      else if (uVar12 == 2) {
        iVar8 = 0x8d;
      }
      else if (uVar12 == 3) {
        iVar8 = 0x49;
      }
      else {
        iVar8 = 0;
      }
      *(undefined1 *)((int)param_1 + 0x47) = 1;
      iVar8 = thunk_FUN_004e60d0((int)this->field_0024,iVar8);
      uVar12 = (g_playSystem_00802A38->field_00E4 * 100 +
               g_playerRuntime[(int)this->field_0024].field2183_0xa1a * -100) /
               *(uint *)(&DAT_00798f6c + iVar8 * 4);
      param_1[0x12] = uVar12;
      if (100 < uVar12) {
        param_1[0x12] = 100;
      }
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 2:
    case 3:
      *(undefined1 *)((int)param_1 + 0x47) = 2;
      param_1[0x12] = (uint)g_playerRuntime[(int)this->field_0024].field2184_0xa1e / 0x19;
    }
    break;
  case CASE_41:
    *(undefined1 *)(param_1 + 7) = 0xff;
    goto switchD_004bef7c_caseD_37;
  case CASE_43:
  case CASE_4C:
    *(char *)(param_1 + 7) = (char)this->field_04E0[0];
    iVar8 = this->field_04D8 * 0x28;
    iVar8 = iVar8 / 10000 + (iVar8 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case CASE_44:
    if (*(int *)&this->field_0x361 == 6) {
      *(undefined4 *)((int)param_1 + 0x1d) = 1;
      *(char *)((int)param_1 + 0x2f) = (char)this->field_0394;
      *(short *)((int)param_1 + 0x27) = (short)this->field_03A0 - *(short *)&this->field_03B0;
      *(short *)((int)param_1 + 0x2b) = (short)this->field_039C - *(short *)&this->field_03AC;
      iVar8 = GetPlayerRaceId(*(char *)&this->field_0024);
      *(char *)((int)param_1 + 0x25) = (char)iVar8;
      *(short *)((int)param_1 + 0x3f) = (short)this->field_04D0;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x1d) = 0;
      *(undefined1 *)((int)param_1 + 0x2f) = 0xff;
      *(undefined2 *)((int)param_1 + 0x27) = 0xffff;
      *(undefined2 *)((int)param_1 + 0x2b) = 0xffff;
      *(short *)((int)param_1 + 0x3f) = (short)this->field_04D0;
    }
    break;
  case CASE_45:
    if (*(int *)&this->field_0x361 != 3) {
      TVar13 = this->field_04D0;
LAB_004c0285:
      if (TVar13 == CASE_1) {
        *(undefined1 *)(param_1 + 0xd) = 0x28;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 0xff;
      }
      break;
    }
    TVar13 = this->field_0394;
    goto LAB_004c0ae0;
  case CASE_48:
    iVar8 = this->field_04D0 * 0x28;
    iVar8 = iVar8 / 500 + (iVar8 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case CASE_4D:
    iVar8 = this->field_04D4 * 0x28;
    cVar5 = ((char)(iVar8 / 5000) + (char)(iVar8 >> 0x1f)) -
            (char)((longlong)iVar8 * 0x68db8bad >> 0x3f);
    goto LAB_004c0fcc;
  case CASE_4E:
    TVar13 = this->field_04D0;
    if ((TVar13 != CASE_0) || (*(int *)&this->field_0x361 != 4)) goto LAB_004c0285;
    iVar8 = this->field_0394 * 0x28;
LAB_004c0f8e:
    cVar5 = ((char)(iVar8 / 100) + (char)(iVar8 >> 0x1f)) -
            (char)((longlong)iVar8 * 0x51eb851f >> 0x3f);
    goto LAB_004c0fcc;
  case CASE_50:
    *(undefined1 *)(param_1 + 7) =
         *(undefined1 *)&g_playerRuntime[(int)this->field_0024].field2110_0x97a;
    *(undefined1 *)((int)param_1 + 0x1d) =
         *(undefined1 *)&g_playerRuntime[(int)this->field_0024].field2111_0x97e;
    *(undefined1 *)((int)param_1 + 0x1e) = g_playerRuntime[(int)this->field_0024].field_0x982;
    *(undefined1 *)((int)param_1 + 0x1f) = g_playerRuntime[(int)this->field_0024].field_0x986;
    *(undefined1 *)(param_1 + 8) = g_playerRuntime[(int)this->field_0024].field_0x98a;
    *(undefined1 *)((int)param_1 + 0x21) = g_playerRuntime[(int)this->field_0024].field_0x98e;
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case CASE_52:
switchD_004bef7c_caseD_52:
    *(undefined1 *)((int)param_1 + 0x47) = 0;
    break;
  case CASE_5B:
    pTVar20 = &this->field_04D0;
    if (0 < (int)this->field_04D0) {
      puVar16 = &this->field_04DC;
      do {
        if ((&DAT_007bf678)[(*pTVar20 - 0x96) * 3] == 2) {
          if (*(int *)(&DAT_007e6028 + (puVar16[-3] * 5 + -0x2ee) * 4) != 0) {
            uVar21 = (undefined2)*(int *)(&DAT_007e6028 + (puVar16[-3] * 5 + -0x2ee) * 4);
            switch(puVar16[-3]) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xad:
              *(undefined1 *)(param_1 + 0xd) = 1;
              *(undefined2 *)(param_1 + 0xe) = uVar21;
              *(short *)((int)param_1 + 0x36) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x35) = (char)*puVar16;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xae:
              *(undefined1 *)(param_1 + 0x10) = 1;
              *(undefined2 *)(param_1 + 0x11) = uVar21;
              *(short *)((int)param_1 + 0x42) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x41) = (char)*puVar16;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xb3:
              *(undefined1 *)((int)param_1 + 0x22) = 1;
              *(undefined2 *)((int)param_1 + 0x26) = uVar21;
              *(short *)(param_1 + 9) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x23) = (char)*puVar16;
              break;
            case 0xb5:
              *(undefined1 *)(param_1 + 10) = 1;
              *(undefined2 *)(param_1 + 0xb) = uVar21;
              *(short *)((int)param_1 + 0x2a) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x29) = (char)*puVar16;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xb8:
              *(undefined1 *)((int)param_1 + 0x3a) = 1;
              *(undefined2 *)((int)param_1 + 0x3e) = uVar21;
              *(short *)(param_1 + 0xf) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x3b) = (char)*puVar16;
              break;
            case 0xbc:
              *(undefined1 *)(param_1 + 7) = 1;
              *(undefined2 *)(param_1 + 8) = uVar21;
              *(short *)((int)param_1 + 0x1e) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x1d) = (char)*puVar16;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xbd:
              *(undefined1 *)((int)param_1 + 0x2e) = 1;
              *(undefined2 *)((int)param_1 + 0x32) = uVar21;
              *(short *)(param_1 + 0xc) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x2f) = (char)*puVar16;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xbe:
              *(undefined1 *)((int)param_1 + 0x46) = 1;
              *(undefined2 *)((int)param_1 + 0x4a) = uVar21;
              *(short *)(param_1 + 0x12) = (short)puVar16[-2];
              *(char *)((int)param_1 + 0x47) = (char)*puVar16;
            }
          }
        }
        puVar1 = puVar16 + 2;
        pTVar20 = puVar16 + 2;
        puVar16 = puVar16 + 5;
      } while (0 < (int)*puVar1);
    }
    break;
  case CASE_5D:
    iVar8 = this->field_04D4 * 0x21;
    iVar8 = iVar8 / 0x28 + (iVar8 >> 0x1f);
    goto cf_common_join_004C0FC5;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case CASE_61:
    *(char *)(param_1 + 0xd) = (char)((int)(this->field_04E0[0xe] * 0x21) / DAT_007be8c4);
    if (this->field_04E0[0x10] == 0) {
      *(undefined1 *)((int)param_1 + 0x35) = 0;
    }
    else {
      *(char *)((int)param_1 + 0x35) =
           (char)((int)(this->field_04E0[0] * 100) / (int)this->field_04E0[0x10]);
    }
    break;
  case CASE_62:
    uVar12 = thunk_FUN_004e41c0((int)this->field_0024);
    *(uint *)((int)param_1 + 0x1d) = uVar12;
    iVar8 = thunk_FUN_004e4180((int)this->field_0024);
    *(int *)((int)param_1 + 0x21) = iVar8;
    break;
  case CASE_64:
    TVar13 = this->field_04D0;
    *(undefined4 *)((int)param_1 + 0x21) = 100;
    *(TLOBaseTy_field_04D0State *)((int)param_1 + 0x1d) = TVar13;
    break;
  case CASE_68:
    *(undefined1 *)(param_1 + 7) = 0x21;
    *(int *)((int)param_1 + 0x1d) = (this->field_04D4 * 0x21) / 200;
    break;
  case CASE_6D:
    local_c = (int *)((int)param_1 + 0x1d);
    iVar8 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = &this->field_04D8;
    do {
      if (param_1[-2] != 0) {
        *local_c = *param_1;
        iVar9 = GetPlayerRaceId(*(char *)&this->field_0024);
        *(char *)(iVar8 + 0x25 + (int)piVar4) = (char)iVar9;
        *(char *)(iVar8 + 0x2f + (int)piVar4) = (char)param_1[2];
      }
      iVar8 = iVar8 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 1;
      local_c = local_c + 1;
    } while (iVar8 < 2);
    if ((((this->field_04D0 == CASE_0) || (this->field_04E0[2] == 0)) || (this->field_04D4 == 0)) ||
       (this->field_04E0[3] == 0)) {
      *(undefined1 *)((int)piVar4 + 0x17) = 0;
      *(undefined1 *)((int)piVar4 + 0x16) = 0;
      *(undefined1 *)((int)piVar4 + 0x19) = 0;
      *(undefined1 *)(piVar4 + 6) = 0;
    }
    else {
      *(bool *)((int)piVar4 + 0x17) = (int)this->field_04E0[0] < 100;
      *(bool *)((int)piVar4 + 0x16) = 0 < (int)this->field_04E0[0];
      *(bool *)((int)piVar4 + 0x19) = (int)this->field_04E0[1] < 100;
      *(bool *)(piVar4 + 6) = 0 < (int)this->field_04E0[1];
    }
    if ((this->field_04D0 == CASE_0) || (uVar6 = 3, this->field_04E0[2] == 0)) {
      uVar6 = 1;
    }
    *(undefined1 *)((int)piVar4 + 0x1a) = uVar6;
    if ((this->field_04D4 == 0) || (uVar6 = 3, this->field_04E0[3] == 0)) {
      uVar6 = 1;
    }
    *(undefined1 *)((int)piVar4 + 0x1b) = uVar6;
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case CASE_6E:
    *(undefined2 *)((int)param_1 + 0x3a) = 0;
    puVar16 = this->field_04E0;
    iVar8 = 0x28;
    do {
      uVar12 = *puVar16;
      puVar16 = puVar16 + 1;
      *(short *)((int)param_1 + 0x3a) = *(short *)((int)param_1 + 0x3a) + (short)uVar12;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    break;
  case CASE_6F:
    iVar8 = this->field_04D0 * 0x28;
    goto LAB_004c0fbb;
  case CASE_70:
    iVar8 = this->field_04E0[3] * 0x21;
    cVar5 = ((char)(iVar8 / 100) + (char)(iVar8 >> 0x1f)) -
            (char)((longlong)iVar8 * 0x51eb851f >> 0x3f);
    goto LAB_004c0fcc;
  case CASE_72:
    if ((this->field_04D0 == CASE_0) && (*(int *)&this->field_0x361 == 8)) {
      iVar8 = this->field_0394 * 0x21;
      goto LAB_004c0f8e;
    }
    if (this->field_04D0 == CASE_1) {
      *(undefined1 *)(param_1 + 0xd) = 0x21;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    break;
  case CASE_73:
    iVar8 = this->field_04D0 * 0x21;
LAB_004c0fbb:
    iVar8 = iVar8 / 5000 + (iVar8 >> 0x1f);
cf_common_join_004C0FC5:
    cVar5 = (char)iVar8 - (char)(iVar8 >> 0x1f);
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004c0fcc:
    *(char *)(param_1 + 0xd) = cVar5;
  }
  piVar4[0x16] = 0;
  iVar8 = *(int *)&this->field_0x361;
  bVar23 = SUB41(iVar8,0);
  if (iVar8 != 0) {
    if (this->field_03B8 != 0) {
      piVar4[0x16] = 0xbb9;
      return bVar23;
    }
    if (this->field_03BC != 0) {
      piVar4[0x16] = 0xbba;
      return bVar23;
    }
    if (this->field_03C4 != 0) {
      piVar4[0x16] = 0xbbb;
      return bVar23;
    }
    if (this->field_03C8 != 0) {
      iVar8 = GetPlayerRaceId(*(char *)&this->field_0024);
      iVar8 = (-(uint)((char)iVar8 != '\x03') & 0xffffffe1) + 0xbdb;
      piVar4[0x16] = iVar8;
      return SUB41(iVar8,0);
    }
    if (this->field_03C0 != 0) {
      piVar4[0x16] = 0xbd3;
      return bVar23;
    }
    pAVar17 = (AnonPointee_TLOBaseTy_061B *)(iVar8 - CASE_1);
    bVar23 = SUB41(pAVar17,0);
    switch(pAVar17) {
    case (AnonPointee_TLOBaseTy_061B *)0x0:
      iVar8 = thunk_FUN_0044e1b0((int)this->field_0024);
      if (iVar8 == 0) {
        piVar4[0x16] = 0xbdf;
        return false;
      }
      if (*(int *)&this->field_0x369 == 9) {
        piVar4[0x16] = 0xbc4;
        return SUB41(iVar8,0);
      }
      piVar4[0x16] = (-(uint)(*(int *)&this->field_0x369 != 0x15) & 0xfffffffa) + 0xbc3;
      return SUB41(iVar8,0);
    case (AnonPointee_TLOBaseTy_061B *)0x1:
      piVar4[0x16] = 0xbbe;
      return bVar23;
    case (AnonPointee_TLOBaseTy_061B *)0x2:
      piVar4[0x16] = 0xbbf;
      return bVar23;
    case (AnonPointee_TLOBaseTy_061B *)0x3:
      piVar4[0x16] = 0xbc0;
      return bVar23;
    case (AnonPointee_TLOBaseTy_061B *)0x4:
      piVar4[0x16] = 0xbc1;
      return bVar23;
    case (AnonPointee_TLOBaseTy_061B *)0x5:
      piVar4[0x16] = 0xbc2;
      return bVar23;
    case (AnonPointee_TLOBaseTy_061B *)0x6:
      piVar4[0x16] = 0xbd2;
      return bVar23;
    case (AnonPointee_TLOBaseTy_061B *)0x7:
      piVar4[0x16] = 0xbdc;
      return bVar23;
    }
    goto switchD_004c107c_default;
  }
  if (this->field_04A0 != 0) {
    piVar4[0x16] = 0xbd4;
    return false;
  }
  pAVar17 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
  if (pAVar17 != (AnonPointee_TLOBaseTy_061B *)0x0) {
    if (pAVar17 == (AnonPointee_TLOBaseTy_061B *)0x4) {
      piVar4[0x16] = 0xbcc;
    }
    goto switchD_004c107c_default;
  }
  pAVar17 = (AnonPointee_TLOBaseTy_061B *)(this->field_05AC + ~CASE_32);
  bVar23 = SUB41(pAVar17,0);
  switch(this->field_05AC) {
  case CASE_33:
    uVar12 = thunk_FUN_004e22f0(this,0);
    if (uVar12 == 0) {
      uVar12 = thunk_FUN_004e22f0(this,1);
      pAVar17 = (AnonPointee_TLOBaseTy_061B *)0x0;
      if (uVar12 == 0) break;
    }
    piVar4[0x16] = 0xbc5;
    return SUB41(uVar12,0);
  case CASE_34:
    piVar4[0x16] = 0xbc6;
    return bVar23;
  case CASE_36:
    if (this->field_04D4 < 0x28) {
      piVar4[0x16] = 0xbc7;
      return bVar23;
    }
    break;
  case CASE_37:
    if (this->field_04D8 == 0xffff) {
      if ((int)this->field_04D0 < 100) {
        piVar4[0x16] = 0xbd5;
        return bVar23;
      }
      piVar4[0x16] = (-(uint)(this->field_042C != 0) & 0xfffffffe) + 0xbd8;
      return bVar23;
    }
    goto LAB_004c12d3;
  case CASE_3A:
    piVar4[0x16] = 0xbc9;
    return bVar23;
  case CASE_3C:
    piVar4[0x16] = 0;
    return bVar23;
  case CASE_43:
    if (this->field_04D0 == CASE_1) {
      piVar4[0x16] = 0xbca;
      return bVar23;
    }
    if (this->field_04D0 == CASE_2) {
      piVar4[0x16] = 0xbcb;
      return bVar23;
    }
    break;
  case CASE_45:
  case CASE_4E:
    if (this->field_04D0 == CASE_1) {
      piVar4[0x16] = 0xbc8;
      return bVar23;
    }
    break;
  case CASE_4C:
    if (this->field_04D0 == CASE_1) {
      piVar4[0x16] = 0xbcd;
      return bVar23;
    }
    if (this->field_04D0 == CASE_2) {
      piVar4[0x16] = 0xbce;
      return bVar23;
    }
    break;
  case CASE_4D:
    if (this->field_04D0 == CASE_1) {
      piVar4[0x16] = 0xbcf;
      return bVar23;
    }
    if (this->field_04D0 == CASE_2) {
      piVar4[0x16] = 0xbd0;
      return bVar23;
    }
    break;
  case CASE_50:
    piVar4[0x16] = 0xbd1;
    return bVar23;
  case CASE_64:
    if (this->field_04DC != 0) {
      piVar4[0x16] = 0xbdd;
      return bVar23;
    }
    break;
  case CASE_6C:
    pAVar17 = (AnonPointee_TLOBaseTy_061B *)this->field_04D8;
    if ((pAVar17 == (AnonPointee_TLOBaseTy_061B *)0xffff) &&
       (((pAVar17 = this->field_061B, pAVar17 == (AnonPointee_TLOBaseTy_061B *)0x0 ||
         (pAVar17->field_0020 != 1000)) || (pAVar17->field_04D8 == 0xffff)))) {
      iVar8 = thunk_FUN_004e9930((int)this);
      pAVar17 = (AnonPointee_TLOBaseTy_061B *)0x0;
      if ((((iVar8 != 0) &&
           (pAVar17 = this->field_061B, pAVar17 != (AnonPointee_TLOBaseTy_061B *)0x0)) &&
          (pAVar17->field_0020 == 1000)) &&
         ((pAVar17->field_04D8 == 0xffff && ((int)pAVar17->field_05B8 < g_worldGrid.sizeZ + -1)))) {
        piVar4[0x16] = 0xbe0;
        return SUB41(pAVar17,0);
      }
      piVar4[0x16] = (this->field_061B != (AnonPointee_TLOBaseTy_061B *)0x0) + 0xbd9;
      return SUB41(pAVar17,0);
    }
LAB_004c12d3:
    piVar4[0x16] = 0xbd7;
    return SUB41(pAVar17,0);
  }
switchD_004c107c_default:
  return SUB41(pAVar17,0);
switchD_004bef7c_caseD_37:
  TVar13 = this->field_04D0;
LAB_004c0ae0:
  iVar8 = (int)(TVar13 * 0x28) / 100 + ((int)(TVar13 * 0x28) >> 0x1f);
  goto cf_common_join_004C0FC5;
}

