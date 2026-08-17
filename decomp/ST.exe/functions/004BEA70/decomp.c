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

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115;CASE_FFFFFFFF=4294967295
    */

bool __thiscall TLOBaseTy::FUN_004bea70(TLOBaseTy *this,int *param_1)

{
  uint *puVar1;
  TLOBaseTy_field_046CState TVar2;
  TLOBaseTy_field_05ACState TVar3;
  int *piVar4;
  bool local_AL_6715;
  bool bVar25;
  byte bVar5;
  short sVar8;
  int iVar20;
  int local_EAX_269;
  AiPlrClassTy *pAVar9;
  STGroupBoatC *pSVar10;
  int local_EAX_607;
  int local_EAX_725;
  int local_EAX_770;
  char cVar6;
  int iVar11;
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
  int local_EAX_2734;
  int local_EAX_2781;
  int local_EAX_2820;
  int local_EAX_2898;
  int local_EAX_2937;
  int local_EAX_2980;
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
  TLOBaseTy_field_04D0State TVar12;
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
  undefined4 uVar15;
  int local_EAX_6574;
  undefined1 uVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int local_EAX_6676;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int local_EAX_6785;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_01;
  int local_EAX_6887;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_02;
  int local_EAX_7141;
  int local_EAX_7199;
  int local_EAX_7518;
  int local_EAX_7542;
  int local_EAX_7579;
  int local_EAX_8404;
  uint uVar16;
  uint *puVar17;
  uint local_EAX_9086;
  int local_EAX_9104;
  AnonPointee_TLOBaseTy_061B *pAVar18;
  int local_EAX_9757;
  uint uVar17;
  int local_EAX_10456;
  short sVar19;
  int iVar21;
  undefined2 *puVar22;
  TLOBaseTy_field_04D0State *pTVar23;
  undefined2 uVar24;
  int *piVar25;
  bool bVar26;
  int *local_c;
  int *local_8;

  piVar4 = param_1;
  *param_1 = this->field_05AC;
  STField<byte>(param_1,5) =
       ((this->field_0024 != (byte *)(uint)(byte)this->field_0010->field_112D) - 1U & 0xfe) + 3;
  /* ST_CALLSITE[004BEAAF]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar5 = LookupRecordByte(*(char *)&this->field_023D);
  ((byte *)param_1)[1] = bVar5;
  if (((this->field_01D1 & 4) == 0) && (this->field_0420 == 0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  STField<undefined1>(param_1,7) = uVar7;
  ((undefined1 *)param_1)[2] = *(undefined1 *)&this->field_021D;
  switch(this->field_0245) {
  case CASE_0:
  case CASE_1:
  case CASE_2:
  case CASE_5:
  case CASE_6:
    STField<undefined1>(param_1,6) = 0;
    break;
  case CASE_3:
  case CASE_4:
    STField<undefined1>(param_1,6) = 1;
  }
  STField<undefined4>(param_1,9) = 0;
  STField<undefined2>(param_1,0xd) = 0;
  STField<undefined4>(param_1,0xf) = 0;
  STField<undefined2>(param_1,0x13) = 0;
  memset(param_1 + 7, 0, 0x3c); /* compiler bulk-zero initialization */
  iVar21 = 0;
  iVar20 = thunk_FUN_004e8030(this->field_05AC);
  if (iVar20 == 3) {
    /* ST_CALLSITE[004BEB41]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar5 = LookupRecordByte(*(char *)&this->field_0024);
    if (bVar5 != 3) {
LAB_004beb5f:
      STField<undefined1>(param_1,5) = 3;
      goto LAB_004beb63;
    }
LAB_004beb6d:
    STField<undefined1>(param_1,9) = 0x33;
    /* ST_CALLSITE[004BEB7D]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
    if (((this->field_0245 == CASE_0) && (local_EAX_269 = sub_004D6DF0(this), local_EAX_269 != 0))
       && (iVar21 = thunk_FUN_004e4140((int)this->field_0024), iVar21 != 0)) {
      uVar7 = 1;
    }
    else {
LAB_004bebed:
      uVar7 = 0;
    }
LAB_004bebef:
    STField<undefined1>(param_1,0xf) = uVar7;
  }
  else {
    /* ST_CALLSITE[004BEB56]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar5 = LookupRecordByte(*(char *)&this->field_0024);
    if (bVar5 == 3) goto LAB_004beb5f;
LAB_004beb63:
    if ((iVar20 != 1) && (iVar20 != 2)) goto LAB_004beb6d;
    if (*(int *)&this->field_0x361 != 5) {
      STField<undefined1>(param_1,9) = 0x20;
      /* ST_CALLSITE[004BEBC5]: CALL dword ptr [EDX + 0x7c] */
      iVar21 = this->vfunc_7C();
      if ((iVar21 == 100) ||
         (((this->field_0245 != CASE_0 && (this->field_0245 != CASE_5)) ||
          (*(int *)&this->field_0x361 != 0)))) goto LAB_004bebed;
      uVar7 = 1;
      goto LAB_004bebef;
    }
    STField<undefined1>(param_1,9) = 0x32;
    STField<bool>(param_1,0xf) = this->field_0245 == CASE_0;
  }
  pAVar9 = thunk_FUN_004357f0(*(char *)&this->field_0024);
  if (pAVar9 == nullptr) {
    STField<undefined1>(param_1,0x15) = 0;
  }
  else {
    pSVar10 = thunk_FUN_0042b760(*(char *)&this->field_0024,this->field_0030);
    if ((pSVar10 == nullptr) || (pSVar10->field_001C == 0)) {
      STField<undefined1>(param_1,0x15) = 1;
    }
    else {
      STField<undefined1>(param_1,0x15) = 3;
    }
  }
  switch(this->field_05AC) {
  case CASE_32:
    STField<undefined1>(param_1,10) = 0x1d;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf427:
      if (this->field_0245 != CASE_0) goto LAB_004bf438;
      uVar7 = 1;
    }
    else {
      /* ST_CALLSITE[004BF3EB]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2427 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF412]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2466 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_2466 = (int)(byte)local_EAX_2466;
      if ((&DAT_007e1984)[local_EAX_2466 + ((uint)(byte)local_EAX_2427 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bf427;
LAB_004bf438:
      uVar7 = 0;
    }
    ((undefined1 *)param_1)[4] = uVar7;
    STField<undefined1>(param_1,0xb) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BF457]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2535 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF47E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2574 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_2574 = (int)(byte)local_EAX_2574;
      if ((&DAT_007e1984)[local_EAX_2574 + ((uint)(byte)local_EAX_2535 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    STField<undefined1>(param_1,0x11) = 1;
    break;
  case CASE_33:
    STField<undefined1>(param_1,10) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BF37E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2318 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF3A5]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2357 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_2357 = (int)(byte)local_EAX_2357;
      if ((&DAT_007e1984)[local_EAX_2357 + ((uint)(byte)local_EAX_2318 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    pAVar18 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
    goto joined_r0x004bfcb7;
  case CASE_35:
    STField<undefined1>(param_1,10) = 0x21;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BF0BD]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_1613 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF0E4]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_1652 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_1652 = (int)(byte)local_EAX_1652;
      if ((&DAT_007e1984)[local_EAX_1652 + ((uint)(byte)local_EAX_1613 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      bVar26 = *(int *)&this->field_0x361 == 0;
LAB_004bef54:
      if (bVar26) goto cf_common_join_004BEF5A;
    }
    goto cf_common_join_004C0278;
  case CASE_36:
    goto switchD_004bec4d_caseD_36;
  case CASE_37:
    STField<undefined1>(param_1,10) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BF30F]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2207 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF336]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2246 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_2246 = (int)(byte)local_EAX_2246;
      if ((&DAT_007e1984)[local_EAX_2246 + ((uint)(byte)local_EAX_2207 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_04D8 != 0xffff) goto cf_common_join_004C0278;
    goto cf_common_join_004BEF5A;
  case CASE_3A:
    STField<undefined1>(param_1,10) = 0x22;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BF2A2]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2098 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF2C9]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2137 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_2137 = (int)(byte)local_EAX_2137;
      if ((&DAT_007e1984)[local_EAX_2137 + ((uint)(byte)local_EAX_2098 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    pAVar18 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
    goto joined_r0x004bfcb7;
  case CASE_3C:
    STField<undefined1>(param_1,10) = 0x28;
    if (this->field_0245 == CASE_0) {
      if (this->field_0024 != (byte *)this->field_023D) {
        /* ST_CALLSITE[004BF746]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_3286 = LookupRecordByte((char)(byte *)this->field_023D);
        iVar21 = this->field_0235;
        /* ST_CALLSITE[004BF76D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_3325 = LookupRecordByte(*(char *)&this->field_0024);
        local_EAX_3325 = (int)(byte)local_EAX_3325;
        if ((&DAT_007e1984)[local_EAX_3325 + ((uint)(byte)local_EAX_3286 + iVar21 * 3) * 3] == '\0')
        goto LAB_004bf7a5;
      }
      if (g_packedRecords_A62x8[(int)this->field_0024].field1982_0xa0e != 0) goto LAB_004bf7a5;
      uVar7 = 1;
    }
    else {
LAB_004bf7a5:
      uVar7 = 0;
    }
    ((undefined1 *)param_1)[4] = uVar7;
    STField<undefined1>(param_1,0xb) = 0x29;
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BF7D0]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3424 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF7F7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3463 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_3463 = (int)(byte)local_EAX_3463;
      if ((&DAT_007e1984)[local_EAX_3463 + ((uint)(byte)local_EAX_3424 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    STField<undefined1>(param_1,0x11) = 1;
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
      STField<undefined1>(param_1,10) = 0x52;
      if ((this->field_0245 == CASE_0) || (this->field_0245 == CASE_5)) {
LAB_004becbd:
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      STField<undefined1>(param_1,10) = 3;
      if (this->field_0245 == CASE_0) {
        if (this->field_0261 != 0) {
          if ((*(byte *)&this->field_0265 & 2) != 0) {
            ((undefined1 *)param_1)[4] = 3;
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
      uVar7 = 0;
    }
    ((undefined1 *)param_1)[4] = uVar7;
switchD_004bec4d_caseD_36:
    /* ST_CALLSITE[004BECCF]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_607 = LookupRecordByte(*(char *)&this->field_0024);
    local_EAX_607 = (int)(byte)local_EAX_607;
    if (local_EAX_607 == 1) {
      iVar21 = 0x1d;
    }
    else if (local_EAX_607 == 2) {
      iVar21 = 0x89;
    }
    else if (local_EAX_607 == 3) {
      iVar21 = 0x46;
    }
    else {
      iVar21 = 0;
    }
    if (this->field_05AC == CASE_36) {
      STField<undefined1>(param_1,10) = 0x2a;
      if (((this->field_04D4 < 0x28) || (this->field_0245 != CASE_0)) ||
         (iVar21 = thunk_FUN_004e60d0((int)this->field_0024,iVar21), iVar21 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      ((undefined1 *)param_1)[4] = uVar7;
    }
    /* ST_CALLSITE[004BED45]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_725 = LookupRecordByte(*(char *)&this->field_0024);
    local_EAX_725 = (int)(byte)local_EAX_725;
    if (local_EAX_725 == 1) {
      iVar21 = 0x10;
    }
    else if (local_EAX_725 == 2) {
      iVar21 = 0x85;
    }
    else {
      iVar21 = 0;
    }
    /* ST_CALLSITE[004BED72]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_770 = LookupRecordByte(*(char *)&this->field_023D);
    if (*(int *)(&DAT_00791b14 + ((uint)(byte)local_EAX_770 + this->field_0235 * 3) * 4) != 0) {
      if (((iVar21 == 0) || (iVar11 = thunk_FUN_004e60d0((int)this->field_0024,iVar21), iVar11 == 0)
          ) || (this->field_0245 != CASE_4)) {
        bVar26 = false;
      }
      else {
        bVar26 = true;
      }
      STField<undefined1>(param_1,0xb) = 0x17;
      if (this->field_0245 == CASE_4) {
        cVar6 = (-(this->field_046C != 0) & 2U) + 1;
      }
      else {
        cVar6 = '\0';
      }
      STField<char>(param_1,0x11) = cVar6;
      if ((this->field_0245 == CASE_4) || (this->field_0245 == CASE_3)) {
        ((undefined1 *)param_1)[3] = 0x16;
        /* ST_CALLSITE[004BEE55]: CALL 0x004015a5; direct=004015A5 TLOBaseTy::sub_004C7070 */
        if ((this->field_0245 != CASE_4) || (iVar21 = sub_004C7070(this,0), iVar21 == 0))
        goto LAB_004bee65;
        uVar7 = 1;
      }
      else {
        ((undefined1 *)param_1)[3] = 0x15;
        if (((iVar21 == 0) ||
            (iVar21 = thunk_FUN_004e60d0((int)this->field_0024,iVar21), iVar21 == 0)) ||
           (((this->field_0245 != CASE_0 && (this->field_0245 != CASE_5)) ||
            (*(int *)&this->field_0x361 != 0)))) {
LAB_004bee65:
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
      }
      STField<undefined1>(param_1,0x12) = uVar7;
      STField<undefined1>(param_1,0xe) = 2;
      if (bVar26) {
        if ((this->field_03DC == 0) || (this->field_046C != 0)) {
          uVar7 = 1;
        }
        else {
          uVar7 = 3;
        }
      }
      else {
        uVar7 = 0;
      }
      ((undefined1 *)param_1)[5] = uVar7;
      STField<undefined1>(param_1,0xd) = 1;
      if ((bVar26) &&
         (((TVar2 = this->field_046C, TVar2 == 0 || (TVar2 == CASE_1)) || (TVar2 == CASE_2)))) {
        if ((this->field_03DC == 0) && (TVar2 == 0)) {
          STField<undefined1>(param_1,0x13) = 3;
        }
        else {
          STField<undefined1>(param_1,0x13) = 1;
        }
      }
      else {
        STField<undefined1>(param_1,0x13) = 0;
      }
    }
    break;
  case CASE_40:
    STField<undefined1>(param_1,10) = 0x1e;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf5fe:
      if ((this->field_0245 != CASE_0) ||
         /* ST_CALLSITE[004BF614]: CALL 0x00405ace; direct=00405ACE TLOBaseTy::sub_004C7860 */
         (local_EAX_2980 = sub_004C7860(this,1,9,1,0,1), local_EAX_2980 == 0)) goto LAB_004bf624;
      uVar7 = 1;
    }
    else {
      /* ST_CALLSITE[004BF5C2]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2898 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF5E9]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2937 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_2937 = (int)(byte)local_EAX_2937;
      if ((&DAT_007e1984)[local_EAX_2937 + ((uint)(byte)local_EAX_2898 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bf5fe;
LAB_004bf624:
      uVar7 = 0;
    }
    ((undefined1 *)param_1)[4] = uVar7;
    STField<undefined1>(param_1,0xb) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BF643]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3027 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF66A]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3066 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_3066 = (int)(byte)local_EAX_3066;
      if ((&DAT_007e1984)[local_EAX_3066 + ((uint)(byte)local_EAX_3027 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    STField<undefined1>(param_1,0x11) = 1;
    break;
  case CASE_43:
    STField<undefined1>(param_1,10) = 0x23;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BF225]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_1973 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF24C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2012 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_2012 = (int)(byte)local_EAX_2012;
      if ((&DAT_007e1984)[local_EAX_2012 + ((uint)(byte)local_EAX_1973 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      iVar21 = this->field_04D8;
joined_r0x004bf200:
      if (4999 < iVar21) goto cf_common_join_004BEF5A;
    }
    goto cf_common_join_004C0278;
  case CASE_44:
    STField<undefined1>(param_1,10) = 0x1b;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BF6B8]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3144 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF6DF]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3183 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_3183 = (int)(byte)local_EAX_3183;
      if ((&DAT_007e1984)[local_EAX_3183 + ((uint)(byte)local_EAX_3144 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      iVar21 = 0x19;
LAB_004bf708:
      iVar21 = thunk_FUN_004e60d0((int)this->field_0024,iVar21);
      if (iVar21 != 0) goto cf_common_join_004BEF5A;
    }
    goto cf_common_join_004C0278;
  case CASE_45:
    STField<undefined1>(param_1,10) = 0x1a;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BEEFF]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_1167 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BEF26]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_1206 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_1206 = (int)(byte)local_EAX_1206;
      if ((&DAT_007e1984)[local_EAX_1206 + ((uint)(byte)local_EAX_1167 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      bVar26 = this->field_04D0 == CASE_1;
      goto LAB_004bef54;
    }
    goto cf_common_join_004C0278;
  case CASE_49:
    STField<undefined1>(param_1,10) = 0x1f;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf508:
      if ((this->field_0245 != CASE_0) ||
         /* ST_CALLSITE[004BF51E]: CALL 0x00405ace; direct=00405ACE TLOBaseTy::sub_004C7860 */
         (local_EAX_2734 = sub_004C7860(this,1,0x15,1,0,1), local_EAX_2734 == 0)) goto LAB_004bf52e;
      uVar7 = 1;
    }
    else {
      /* ST_CALLSITE[004BF4CC]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2652 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF4F3]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2691 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_2691 = (int)(byte)local_EAX_2691;
      if ((&DAT_007e1984)[local_EAX_2691 + ((uint)(byte)local_EAX_2652 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bf508;
LAB_004bf52e:
      uVar7 = 0;
    }
    ((undefined1 *)param_1)[4] = uVar7;
    STField<undefined1>(param_1,0xb) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BF54D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2781 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF574]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_2820 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_2820 = (int)(byte)local_EAX_2820;
      if ((&DAT_007e1984)[local_EAX_2820 + ((uint)(byte)local_EAX_2781 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    STField<undefined1>(param_1,0x11) = 1;
    break;
  case CASE_4C:
    if (this->field_04D0 != CASE_1) {
      STField<undefined1>(param_1,10) = 0x24;
      if (this->field_0024 != (byte *)this->field_023D) {
        /* ST_CALLSITE[004BF1A8]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_1848 = LookupRecordByte((char)(byte *)this->field_023D);
        iVar21 = this->field_0235;
        /* ST_CALLSITE[004BF1CF]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_1887 = LookupRecordByte(*(char *)&this->field_0024);
        local_EAX_1887 = (int)(byte)local_EAX_1887;
        if ((&DAT_007e1984)[local_EAX_1887 + ((uint)(byte)local_EAX_1848 + iVar21 * 3) * 3] == '\0')
        goto cf_common_join_004C0278;
      }
      if (this->field_0245 != CASE_0) goto cf_common_join_004C0278;
      iVar21 = this->field_04D8;
      goto joined_r0x004bf200;
    }
    STField<undefined1>(param_1,10) = 0x25;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BF13B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_1739 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF162]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_1778 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_1778 = (int)(byte)local_EAX_1778;
      if ((&DAT_007e1984)[local_EAX_1778 + ((uint)(byte)local_EAX_1739 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
LAB_004bf17b:
    pAVar18 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
    goto joined_r0x004bfcb7;
  case CASE_4E:
    STField<undefined1>(param_1,10) = 0x1c;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004beff1:
      if (((this->field_0245 != CASE_0) ||
          (iVar21 = thunk_FUN_004e60d0((int)this->field_0024,0x31), iVar21 == 0)) ||
         ((this->field_04D0 != CASE_0 || (*(int *)&this->field_0x361 != 0)))) goto LAB_004bf02b;
      uVar7 = 1;
    }
    else {
      /* ST_CALLSITE[004BEFB5]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_1349 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BEFDC]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_1388 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_1388 = (int)(byte)local_EAX_1388;
      if ((&DAT_007e1984)[local_EAX_1388 + ((uint)(byte)local_EAX_1349 + iVar21 * 3) * 3] != '\0')
      goto LAB_004beff1;
LAB_004bf02b:
      uVar7 = 0;
    }
    ((undefined1 *)param_1)[4] = uVar7;
    STField<undefined1>(param_1,0xb) = 0x19;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BF048]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_1496 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF06F]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_1535 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_1535 = (int)(byte)local_EAX_1535;
      if ((&DAT_007e1984)[local_EAX_1535 + ((uint)(byte)local_EAX_1496 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0261 == 0) goto cf_common_join_004C01F3;
    STField<undefined1>(param_1,0x11) = 1;
    break;
  case CASE_52:
    STField<undefined1>(param_1,10) = 0x30;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf873:
      if (this->field_0245 != CASE_0) goto LAB_004bf884;
      uVar7 = 1;
    }
    else {
      /* ST_CALLSITE[004BF837]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3527 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF85E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3566 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_3566 = (int)(byte)local_EAX_3566;
      if ((&DAT_007e1984)[local_EAX_3566 + ((uint)(byte)local_EAX_3527 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bf873;
LAB_004bf884:
      uVar7 = 0;
    }
    ((undefined1 *)param_1)[4] = uVar7;
    STField<undefined1>(param_1,0xb) = 0x31;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BF8A3]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3635 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF8CA]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3674 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_3674 = (int)(byte)local_EAX_3674;
      if ((&DAT_007e1984)[local_EAX_3674 + ((uint)(byte)local_EAX_3635 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    STField<undefined1>(param_1,0x11) = 1;
    break;
  case CASE_53:
    STField<undefined1>(param_1,10) = 0x44;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf954:
      if (this->field_0245 != CASE_0) goto LAB_004bf965;
      uVar7 = 1;
    }
    else {
      /* ST_CALLSITE[004BF918]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3752 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF93F]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3791 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_3791 = (int)(byte)local_EAX_3791;
      if ((&DAT_007e1984)[local_EAX_3791 + ((uint)(byte)local_EAX_3752 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bf954;
LAB_004bf965:
      uVar7 = 0;
    }
    ((undefined1 *)param_1)[4] = uVar7;
    STField<undefined1>(param_1,0xb) = 0x39;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf9c0:
      if (((this->field_0245 != CASE_0) || (*(int *)&this->field_0x361 != 0)) ||
         (g_packedRecords_A62x8[(int)this->field_0024].field1982_0xa0e != 0)) goto LAB_004bf9f7;
      uVar7 = 1;
    }
    else {
      /* ST_CALLSITE[004BF984]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3860 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BF9AB]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_3899 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_3899 = (int)(byte)local_EAX_3899;
      if ((&DAT_007e1984)[local_EAX_3899 + ((uint)(byte)local_EAX_3860 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bf9c0;
LAB_004bf9f7:
      uVar7 = 0;
    }
    STField<undefined1>(param_1,0x11) = uVar7;
    ((undefined1 *)param_1)[3] = 0x46;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BFA14]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4004 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BFA3B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4043 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_4043 = (int)(byte)local_EAX_4043;
      if ((&DAT_007e1984)[local_EAX_4043 + ((uint)(byte)local_EAX_4004 + iVar21 * 3) * 3] == '\0')
      goto LAB_004bfffc;
    }
    if ((this->field_0245 != CASE_0) || (*(int *)&this->field_0x361 != 0)) goto LAB_004bfffc;
    STField<undefined1>(param_1,0x12) = 1;
    break;
  case CASE_54:
  case CASE_55:
  case CASE_56:
  case CASE_57:
  case CASE_58:
  case CASE_59:
  case CASE_5A:
    STField<undefined1>(param_1,10) = 0x41;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BFDC3]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4947 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BFDEA]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4986 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_4986 = (int)(byte)local_EAX_4986;
      if ((&DAT_007e1984)[local_EAX_4986 + ((uint)(byte)local_EAX_4947 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      pAVar18 = *(AnonPointee_TLOBaseTy_061B **)&this->field_0x361;
      goto joined_r0x004bfcb7;
    }
    goto cf_common_join_004C0278;
  case CASE_5C:
    STField<undefined1>(param_1,10) = 0x3d;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bfbca:
      if (this->field_0245 != CASE_0) goto LAB_004bfbdb;
      uVar7 = 1;
    }
    else {
      /* ST_CALLSITE[004BFB8E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4382 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BFBB5]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4421 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_4421 = (int)(byte)local_EAX_4421;
      if ((&DAT_007e1984)[local_EAX_4421 + ((uint)(byte)local_EAX_4382 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bfbca;
LAB_004bfbdb:
      uVar7 = 0;
    }
    ((undefined1 *)param_1)[4] = uVar7;
    STField<undefined1>(param_1,0xb) = 0x37;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BFBFA]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4490 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BFC21]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4529 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_4529 = (int)(byte)local_EAX_4529;
      if ((&DAT_007e1984)[local_EAX_4529 + ((uint)(byte)local_EAX_4490 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    STField<undefined1>(param_1,0x11) = 1;
    break;
  case CASE_5D:
    STField<undefined1>(param_1,10) = 0x43;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BFCDC]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4716 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BFD03]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4755 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_4755 = (int)(byte)local_EAX_4755;
      if ((&DAT_007e1984)[local_EAX_4755 + ((uint)(byte)local_EAX_4716 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if ((0x27 < this->field_04D4) && (this->field_0245 == CASE_0)) {
      iVar21 = 0x46;
      goto LAB_004bf708;
    }
    goto cf_common_join_004C0278;
  case CASE_5F:
    STField<undefined1>(param_1,10) = 0x3f;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004c0170:
      if (this->field_0245 != CASE_0) goto LAB_004c0181;
      uVar7 = 1;
    }
    else {
      /* ST_CALLSITE[004C0134]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5828 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004C015B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5867 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_5867 = (int)(byte)local_EAX_5867;
      if ((&DAT_007e1984)[local_EAX_5867 + ((uint)(byte)local_EAX_5828 + iVar21 * 3) * 3] != '\0')
      goto LAB_004c0170;
LAB_004c0181:
      uVar7 = 0;
    }
    ((undefined1 *)param_1)[4] = uVar7;
    STField<undefined1>(param_1,0xb) = 0x31;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004C01A0]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5936 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004C01C7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5975 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_5975 = (int)(byte)local_EAX_5975;
      if ((&DAT_007e1984)[local_EAX_5975 + ((uint)(byte)local_EAX_5936 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    STField<undefined1>(param_1,0x11) = 1;
    break;
  case CASE_61:
    STField<undefined1>(param_1,10) = 0x3b;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BFD56]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4838 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BFD7D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4877 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_4877 = (int)(byte)local_EAX_4877;
      if ((&DAT_007e1984)[local_EAX_4877 + ((uint)(byte)local_EAX_4838 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (0 < (int)this->field_04E0[0xe]) goto LAB_004bf17b;
    goto cf_common_join_004C0278;
  case CASE_64:
    STField<undefined1>(param_1,10) = 0x40;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BFC6F]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4607 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BFC96]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_4646 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_4646 = (int)(byte)local_EAX_4646;
      if ((&DAT_007e1984)[local_EAX_4646 + ((uint)(byte)local_EAX_4607 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    pAVar18 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
joined_r0x004bfcb7:
    if (pAVar18 != nullptr) goto cf_common_join_004C0278;
cf_common_join_004BEF5A:
    uVar7 = 1;
    goto LAB_004bef5f;
  case CASE_66:
  case CASE_67:
  case CASE_6B:
  case CASE_71:
    if ((((byte)this->field_0265 & 2) != 2) || (this->field_026D == 0)) {
      STField<undefined1>(param_1,10) = 0x34;
      if (this->field_0245 == CASE_0) {
        if (this->field_0261 != 0) {
          if ((*(byte *)&this->field_0265 & 2) != 0) {
            ((undefined1 *)param_1)[4] = 3;
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
    STField<undefined1>(param_1,10) = 0x52;
    if ((this->field_0245 == CASE_0) || (this->field_0245 == CASE_5)) goto cf_common_join_004BEF5A;
    uVar7 = 0;
    goto LAB_004bef5f;
  case CASE_6C:
    STField<undefined1>(param_1,10) = 0x3e;
    if (this->field_0024 != (byte *)this->field_023D) {
      /* ST_CALLSITE[004BFE36]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5062 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BFE5D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5101 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_5101 = (int)(byte)local_EAX_5101;
      if ((&DAT_007e1984)[local_EAX_5101 + ((uint)(byte)local_EAX_5062 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      pAVar18 = this->field_061B;
      goto joined_r0x004bfcb7;
    }
    goto cf_common_join_004C0278;
  case CASE_6D:
    STField<undefined1>(param_1,10) = 0x42;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bfee5:
      if ((this->field_0245 != CASE_0) || ((this->field_04D0 != CASE_0 && (this->field_04D4 != 0))))
      goto LAB_004bff0a;
      uVar7 = 1;
    }
    else {
      /* ST_CALLSITE[004BFEA9]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5177 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BFED0]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5216 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_5216 = (int)(byte)local_EAX_5216;
      if ((&DAT_007e1984)[local_EAX_5216 + ((uint)(byte)local_EAX_5177 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bfee5;
LAB_004bff0a:
      uVar7 = 0;
    }
    ((undefined1 *)param_1)[4] = uVar7;
    STField<undefined1>(param_1,0xb) = 0x38;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bff65:
      if ((this->field_0245 != CASE_0) || (this->field_04D0 == CASE_0)) goto LAB_004bff80;
      uVar7 = 1;
    }
    else {
      /* ST_CALLSITE[004BFF29]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5305 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BFF50]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5344 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_5344 = (int)(byte)local_EAX_5344;
      if ((&DAT_007e1984)[local_EAX_5344 + ((uint)(byte)local_EAX_5305 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bff65;
LAB_004bff80:
      uVar7 = 0;
    }
    STField<undefined1>(param_1,0x11) = uVar7;
    ((undefined1 *)param_1)[3] = 0x45;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bffdb:
      if ((this->field_0245 == CASE_0) && (this->field_04D4 != 0)) {
        STField<undefined1>(param_1,0x12) = 1;
        break;
      }
    }
    else {
      /* ST_CALLSITE[004BFF9F]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5423 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004BFFC6]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5462 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_5462 = (int)(byte)local_EAX_5462;
      if ((&DAT_007e1984)[local_EAX_5462 + ((uint)(byte)local_EAX_5423 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bffdb;
    }
LAB_004bfffc:
    STField<undefined1>(param_1,0x12) = 0;
    break;
  case CASE_70:
    if (this->field_04E0[4] == 0) {
      STField<undefined1>(param_1,10) = 0x36;
      if (this->field_0024 != (byte *)this->field_023D) {
        /* ST_CALLSITE[004BFB1B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_4267 = LookupRecordByte((char)(byte *)this->field_023D);
        iVar21 = this->field_0235;
        /* ST_CALLSITE[004BFB42]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_4306 = LookupRecordByte(*(char *)&this->field_0024);
        local_EAX_4306 = (int)(byte)local_EAX_4306;
        if ((&DAT_007e1984)[local_EAX_4306 + ((uint)(byte)local_EAX_4267 + iVar21 * 3) * 3] == '\0')
        goto cf_common_join_004C0278;
      }
      if (this->field_0245 != CASE_0) goto cf_common_join_004C0278;
      TVar12 = this->field_04D0;
    }
    else {
      STField<undefined1>(param_1,10) = 0x34;
      if (this->field_0024 != (byte *)this->field_023D) {
        /* ST_CALLSITE[004BFAA1]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_4145 = LookupRecordByte((char)(byte *)this->field_023D);
        iVar21 = this->field_0235;
        /* ST_CALLSITE[004BFAC8]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_4184 = LookupRecordByte(*(char *)&this->field_0024);
        local_EAX_4184 = (int)(byte)local_EAX_4184;
        if ((&DAT_007e1984)[local_EAX_4184 + ((uint)(byte)local_EAX_4145 + iVar21 * 3) * 3] == '\0')
        goto cf_common_join_004C0278;
      }
      TVar12 = this->field_0245;
    }
    if ((TVar12 == CASE_0) && (99 < (int)this->field_04E0[3])) goto cf_common_join_004BEF5A;
cf_common_join_004C0278:
    uVar7 = 0;
LAB_004bef5f:
    ((undefined1 *)param_1)[4] = uVar7;
    break;
  case CASE_72:
    STField<undefined1>(param_1,10) = 0x34;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004c005c:
      if (this->field_0261 == 0) goto LAB_004c006d;
      uVar7 = 1;
    }
    else {
      /* ST_CALLSITE[004C0020]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5552 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004C0047]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_5591 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_5591 = (int)(byte)local_EAX_5591;
      if ((&DAT_007e1984)[local_EAX_5591 + ((uint)(byte)local_EAX_5552 + iVar21 * 3) * 3] != '\0')
      goto LAB_004c005c;
LAB_004c006d:
      uVar7 = 0;
    }
    ((undefined1 *)param_1)[4] = uVar7;
    STField<undefined1>(param_1,0xb) = 0x4f;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004c00cc:
      if ((((this->field_0245 == CASE_0) &&
           (iVar21 = thunk_FUN_004e60d0((int)this->field_0024,0x75), iVar21 != 0)) &&
          (this->field_04D0 == CASE_0)) && (*(int *)&this->field_0x361 == 0)) {
        STField<undefined1>(param_1,0x11) = 1;
        break;
      }
    }
    else {
      /* ST_CALLSITE[004C008C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar13 = LookupRecordByte((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      /* ST_CALLSITE[004C00B3]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar14 = LookupRecordByte(*(char *)&this->field_0024);
      uVar14 = (int)(byte)uVar14;
      if ((&DAT_007e1984)[uVar14 + ((uint)(byte)uVar13 + iVar21 * 3) * 3] != '\0')
      goto LAB_004c00cc;
    }
cf_common_join_004C01F3:
    STField<undefined1>(param_1,0x11) = 0;
  }
  switch(this->field_05AC) {
  case CASE_32:
  case CASE_40:
  case CASE_49:
  case CASE_5C:
    if (*(int *)&this->field_0x361 == 1) {
      STField<undefined4>(param_1,0x1d) = *(undefined4 *)&this->field_0x369;
      /* ST_CALLSITE[004C05C6]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar5 = LookupRecordByte(*(char *)&this->field_0024);
      if (bVar5 == 3) {
        sVar8 = (short)this->field_03A4;
        sVar19 = (short)this->field_03B4;
      }
      else {
        sVar8 = (short)this->field_03A0;
        sVar19 = (short)this->field_03B0;
      }
      STField<short>(param_1,0x27) = sVar8 - sVar19;
      STField<short>(param_1,0x2b) = (short)((this->field_039C * (100 - this->field_0394)) / 100);
      STField<char>(param_1,0x2f) = (char)this->field_0394;
      /* ST_CALLSITE[004C062D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar5 = LookupRecordByte(*(char *)&this->field_0024);
      STField<byte>(param_1,0x25) = bVar5;
      if (this->field_05AC == CASE_40) {
        /* ST_CALLSITE[004C068F]: CALL 0x00401b59; direct=00401B59 TLOBaseTy::sub_004C9370 */
        local_EAX_7199 = sub_004C9370(this,1,9,-1);
        STField<char>(param_1,0x31) = (char)local_EAX_7199;
        if ((*(int *)&this->field_0x361 == 1) && (*(int *)&this->field_0x369 == 9)) {
          STField<char>(param_1,0x31) = this->field_0x36d + (char)local_EAX_7199;
        }
      }
      else if (this->field_05AC == CASE_49) {
        /* ST_CALLSITE[004C0655]: CALL 0x00401b59; direct=00401B59 TLOBaseTy::sub_004C9370 */
        local_EAX_7141 = sub_004C9370(this,1,0x15,-1);
        STField<char>(param_1,0x31) = (char)local_EAX_7141;
        if ((*(int *)&this->field_0x361 == 1) && (*(int *)&this->field_0x369 == 0x15)) {
          STField<char>(param_1,0x31) = this->field_0x36d + (char)local_EAX_7141;
        }
      }
      else {
        STField<undefined1>(param_1,0x31) = 0;
      }
    }
    else {
      STField<undefined4>(param_1,0x1d) = 0;
      STField<undefined2>(param_1,0x27) = 0xffff;
      STField<undefined2>(param_1,0x2b) = 0xffff;
      STField<undefined1>(param_1,0x2f) = 0xff;
      STField<undefined1>(param_1,0x31) = 0;
    }
    break;
  case CASE_33:
    puVar22 = (undefined2 *)((int)param_1 + 0x2b);
    local_8 = (int *)((int)param_1 + 0x1d);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = nullptr;
    piVar25 = &this->field_04D8;
    do {
      if ((piVar25[-2] == 0) || (piVar25[-1] == 0)) {
        *local_8 = 0;
        puVar22[-2] = 0xffff;
        *puVar22 = 0xffff;
        *(undefined1 *)((int)param_1 + 0x2f + (int)piVar4) = 0xff;
      }
      else {
        *local_8 = *piVar25;
        puVar22[-2] = (short)((*(int *)(&DAT_007e085c + *piVar25 * 4) * (piVar25[3] - piVar25[2])) /
                             piVar25[3]);
        *puVar22 = 0xffff;
        *(char *)((int)param_1 + 0x2f + (int)piVar4) = (char)((piVar25[2] * 100) / piVar25[3]);
        /* ST_CALLSITE[004C0753]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar5 = LookupRecordByte(*(char *)&this->field_0024);
        *(byte *)((int)param_1 + 0x25 + (int)piVar4) = bVar5;
      }
      param_1 = (int *)((int)param_1 + 1);
      piVar25 = piVar25 + 10;
      local_8 = local_8 + 1;
      puVar22 = puVar22 + 1;
    } while ((int)param_1 < 2);
    break;
  case CASE_34:
    pTVar23 = &this->field_04D0;
    if (0 < (int)this->field_04D0) {
      puVar17 = &this->field_04DC;
      do {
        if ((&DAT_007bf678)[(*pTVar23 - 0x96) * 3] == 1) {
          if (*(int *)(&DAT_007e6028 + (puVar17[-3] - 0x96) * 0x14) != 0) {
            uVar24 = (undefined2)*(int *)(&DAT_007e6028 + (puVar17[-3] - 0x96) * 0x14);
            switch(puVar17[-3]) {
            case 0x96:
              ((undefined1 *)param_1)[7] = 1;
              *(undefined2 *)(param_1 + 8) = uVar24;
              STField<short>(param_1,0x1e) = (short)puVar17[-2];
              STField<char>(param_1,0x1d) = (char)*puVar17;
              break;
            case 0x97:
              STField<undefined1>(param_1,0x22) = 1;
              STField<undefined2>(param_1,0x26) = uVar24;
              *(short *)(param_1 + 9) = (short)puVar17[-2];
              STField<char>(param_1,0x23) = (char)*puVar17;
              break;
            case 0x98:
              ((undefined1 *)param_1)[10] = 1;
              *(undefined2 *)(param_1 + 0xb) = uVar24;
              STField<short>(param_1,0x2a) = (short)puVar17[-2];
              STField<char>(param_1,0x29) = (char)*puVar17;
              break;
            case 0x99:
              STField<undefined1>(param_1,0x2e) = 1;
              STField<undefined2>(param_1,0x32) = uVar24;
              *(short *)(param_1 + 0xc) = (short)puVar17[-2];
              STField<char>(param_1,0x2f) = (char)*puVar17;
              break;
            case 0x9a:
              ((undefined1 *)param_1)[0xd] = 1;
              *(undefined2 *)(param_1 + 0xe) = uVar24;
              STField<short>(param_1,0x36) = (short)puVar17[-2];
              STField<char>(param_1,0x35) = (char)*puVar17;
              break;
            case 0xa6:
              STField<undefined1>(param_1,0x3a) = 1;
              STField<undefined2>(param_1,0x3e) = uVar24;
              *(short *)(param_1 + 0xf) = (short)puVar17[-2];
              STField<char>(param_1,0x3b) = (char)*puVar17;
              break;
            case 0xa7:
              STField<undefined1>(param_1,0x46) = 1;
              STField<undefined2>(param_1,0x4a) = uVar24;
              *(short *)(param_1 + 0x12) = (short)puVar17[-2];
              STField<char>(param_1,0x47) = (char)*puVar17;
              break;
            case 0xa9:
              ((undefined1 *)param_1)[0x10] = 1;
              *(undefined2 *)(param_1 + 0x11) = uVar24;
              STField<short>(param_1,0x42) = (short)puVar17[-2];
              STField<char>(param_1,0x41) = (char)*puVar17;
              break;
            case 0xab:
              ((undefined1 *)param_1)[0x13] = 1;
              *(undefined2 *)(param_1 + 0x14) = uVar24;
              STField<short>(param_1,0x4e) = (short)puVar17[-2];
              STField<char>(param_1,0x4d) = (char)*puVar17;
              break;
            case 0xac:
              STField<undefined1>(param_1,0x52) = 1;
              STField<undefined2>(param_1,0x56) = uVar24;
              *(short *)(param_1 + 0x15) = (short)puVar17[-2];
              STField<char>(param_1,0x53) = (char)*puVar17;
            }
          }
        }
        puVar1 = puVar17 + 2;
        pTVar23 = puVar17 + 2;
        puVar17 = puVar17 + 5;
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
      ((undefined1 *)param_1)[0xf] = this->field_0x369;
      if (*(byte *)((int)&DAT_00798fd8 + *(int *)&this->field_0x369) < 2) {
        cVar6 = '\0';
      }
      else {
        uVar15 = thunk_FUN_004e60d0((int)this->field_0024,*(int *)&this->field_0x369);
        cVar6 = (char)uVar15 + '\x01';
      }
      STField<char>(param_1,0x3d) = cVar6;
      STField<char>(param_1,0x3e) = (char)this->field_0394;
      STField<short>(param_1,0x27) = (short)this->field_0398 - *(short *)&this->field_03A8;
      STField<undefined2>(param_1,0x2b) = 0xffff;
    }
    else {
      ((undefined1 *)param_1)[0xf] = 0;
      STField<undefined1>(param_1,0x3d) = 0;
      STField<undefined1>(param_1,0x3e) = 0;
      STField<undefined2>(param_1,0x27) = 0xffff;
      STField<undefined2>(param_1,0x2b) = 0xffff;
      STField<undefined2>(param_1,0x3a) = 0;
      TVar3 = this->field_05AC;
      param_1 = nullptr;
      if (TVar3 == CASE_35) {
        do {
          if ((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0') {
            iVar21 = thunk_FUN_004e60d0((int)this->field_0024,(int)param_1);
            local_EAX_6785 = thunk_FUN_004e7f20((int)this->field_0024,(int)param_1,iVar21 + 1);
          }
          else {
            local_EAX_6785 = thunk_FUN_004e5910((int)this->field_0024,(uint)param_1);
          }
          if (local_EAX_6785 != 0) {
            uVar7 = thunk_FUN_004e6140((int)this->field_0024,(int)param_1);
            iVar21 = thunk_FUN_004e60d0((int)this->field_0024,(int)param_1);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (((iVar21 < CONCAT31(extraout_var_01,uVar7)) &&
                (local_EAX_6887 = thunk_FUN_004e5f90((int)this->field_0024,(uint)param_1),
                local_EAX_6887 == 0)) &&
               (((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0' ||
                (bVar25 = thunk_FUN_004e5c40(this->field_0024,(uint)param_1),
                CONCAT31(extraout_var_02,bVar25) != 0)))) {
              STField<short>(piVar4,0x3a) = STField<short>(piVar4,0x3a) + 1;
            }
          }
          param_1 = (int *)((int)param_1 + 1);
        } while ((int)param_1 < 0x9b);
      }
      else if ((&DAT_0079a3fc)[(TVar3 * 3 + -0xfc) * 5] != 0) {
        local_c = &DAT_0079a3fc + (TVar3 * 3 + -0xfc) * 5;
        do {
          if (0xe < (int)param_1) break;
          if ((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0') {
            iVar21 = thunk_FUN_004e60d0((int)this->field_0024,(int)param_1);
            local_EAX_6574 = thunk_FUN_004e7f20((int)this->field_0024,(int)param_1,iVar21 + 1);
          }
          else {
            local_EAX_6574 = thunk_FUN_004e5910((int)this->field_0024,(uint)param_1);
          }
          if (local_EAX_6574 != 0) {
            uVar7 = thunk_FUN_004e6140((int)this->field_0024,(int)param_1);
            iVar21 = thunk_FUN_004e60d0((int)this->field_0024,(int)param_1);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (((iVar21 < CONCAT31(extraout_var,uVar7)) &&
                (local_EAX_6676 = thunk_FUN_004e5f90((int)this->field_0024,(uint)param_1),
                local_EAX_6676 == 0)) &&
               (((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0' ||
                (local_AL_6715 = thunk_FUN_004e5c40(this->field_0024,(uint)param_1),
                CONCAT31(extraout_var_00,local_AL_6715) != 0)))) {
              STField<short>(piVar4,0x3a) = STField<short>(piVar4,0x3a) + 1;
            }
          }
          param_1 = (int *)((int)param_1 + 1);
          local_c = local_c + 1;
        } while (*local_c != 0);
      }
    }
    break;
  case CASE_36:
    iVar21 = this->field_04D4 * 0x28;
    iVar21 = iVar21 / 0x28 + (iVar21 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case CASE_37:
    goto switchD_004bef7c_caseD_37;
  case CASE_38:
  case CASE_39:
  case CASE_4F:
  case CASE_5E:
    if (this->field_04D4 == 0) {
      STField<undefined2>(param_1,0x3f) = 0;
    }
    else {
      STField<short>(param_1,0x3f) = (short)this->field_04E0[0];
    }
    break;
  case CASE_3A:
    iVar21 = this->field_04D0 * 400;
    STField<short>(param_1,0x3f) =
         ((short)(iVar21 / 100) + (short)(iVar21 >> 0x1f)) -
         (short)((longlong)iVar21 * 0x51eb851f >> 0x3f);
    local_EAX_7518 = thunk_FUN_004d8250();
    STField<char>(param_1,0x45) = (char)local_EAX_7518;
    if (this->field_04E0[1] == 0) {
      local_EAX_7579 = thunk_FUN_004d8280();
      STField<char>(param_1,0x46) = (char)local_EAX_7579;
    }
    else {
      local_EAX_7542 = thunk_FUN_004d8280();
      iVar21 = thunk_FUN_004d8230();
      STField<char>(param_1,0x46) = (char)((uint)(iVar21 * local_EAX_7542) / this->field_04E0[1]);
    }
    break;
  case CASE_3C:
  case CASE_53:
    switch(g_packedRecords_A62x8[(int)this->field_0024].field1982_0xa0e) {
    case 0:
      if (g_packedRecords_A62x8[(int)this->field_0024].field1984_0xa16 == 0)
      goto switchD_004bef7c_caseD_52;
      STField<undefined1>(param_1,0x47) = 3;
      break;
    case 1:
      /* ST_CALLSITE[004C0B44]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      local_EAX_8404 = LookupRecordByte(*(char *)&this->field_0024);
      local_EAX_8404 = (int)(byte)local_EAX_8404;
      if (local_EAX_8404 == 1) {
        iVar21 = 0x3d;
      }
      else if (local_EAX_8404 == 2) {
        iVar21 = 0x8d;
      }
      else if (local_EAX_8404 == 3) {
        iVar21 = 0x49;
      }
      else {
        iVar21 = 0;
      }
      STField<undefined1>(param_1,0x47) = 1;
      iVar21 = thunk_FUN_004e60d0((int)this->field_0024,iVar21);
      uVar16 = (g_playSystem_00802A38->field_00E4 * 100 +
               g_packedRecords_A62x8[(int)this->field_0024].field1985_0xa1a * -100) /
               *(uint *)(&DAT_00798f6c + iVar21 * 4);
      param_1[0x12] = uVar16;
      if (100 < uVar16) {
        param_1[0x12] = 100;
      }
      break;
    case 2:
    case 3:
      STField<undefined1>(param_1,0x47) = 2;
      param_1[0x12] = (uint)g_packedRecords_A62x8[(int)this->field_0024].field1986_0xa1e / 0x19;
    }
    break;
  case CASE_41:
    ((undefined1 *)param_1)[7] = 0xff;
    goto switchD_004bef7c_caseD_37;
  case CASE_43:
  case CASE_4C:
    ((char *)param_1)[7] = (char)this->field_04E0[0];
    iVar21 = this->field_04D8 * 0x28;
    iVar21 = iVar21 / 10000 + (iVar21 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case CASE_44:
    if (*(int *)&this->field_0x361 == 6) {
      STField<undefined4>(param_1,0x1d) = 1;
      STField<char>(param_1,0x2f) = (char)this->field_0394;
      STField<short>(param_1,0x27) = (short)this->field_03A0 - *(short *)&this->field_03B0;
      STField<short>(param_1,0x2b) = (short)this->field_039C - *(short *)&this->field_03AC;
      /* ST_CALLSITE[004C092A]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar5 = LookupRecordByte(*(char *)&this->field_0024);
      STField<byte>(param_1,0x25) = bVar5;
      STField<short>(param_1,0x3f) = (short)this->field_04D0;
    }
    else {
      STField<undefined4>(param_1,0x1d) = 0;
      STField<undefined1>(param_1,0x2f) = 0xff;
      STField<undefined2>(param_1,0x27) = 0xffff;
      STField<undefined2>(param_1,0x2b) = 0xffff;
      STField<short>(param_1,0x3f) = (short)this->field_04D0;
    }
    break;
  case CASE_45:
    if (*(int *)&this->field_0x361 != 3) {
      TVar12 = this->field_04D0;
LAB_004c0285:
      if (TVar12 == CASE_1) {
        ((undefined1 *)param_1)[0xd] = 0x28;
      }
      else {
        ((undefined1 *)param_1)[0xd] = 0xff;
      }
      break;
    }
    TVar12 = this->field_0394;
    goto LAB_004c0ae0;
  case CASE_48:
    iVar21 = this->field_04D0 * 0x28;
    iVar21 = iVar21 / 500 + (iVar21 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case CASE_4D:
    iVar21 = this->field_04D4 * 0x28;
    cVar6 = ((char)(iVar21 / 5000) + (char)(iVar21 >> 0x1f)) -
            (char)((longlong)iVar21 * 0x68db8bad >> 0x3f);
    goto LAB_004c0fcc;
  case CASE_4E:
    TVar12 = this->field_04D0;
    if ((TVar12 != CASE_0) || (*(int *)&this->field_0x361 != 4)) goto LAB_004c0285;
    iVar21 = this->field_0394 * 0x28;
LAB_004c0f8e:
    cVar6 = ((char)(iVar21 / 100) + (char)(iVar21 >> 0x1f)) -
            (char)((longlong)iVar21 * 0x51eb851f >> 0x3f);
    goto LAB_004c0fcc;
  case CASE_50:
    ((undefined1 *)param_1)[7] =
         *(undefined1 *)&g_packedRecords_A62x8[(int)this->field_0024].field1942_0x97a;
    STField<undefined1>(param_1,0x1d) =
         *(undefined1 *)&g_packedRecords_A62x8[(int)this->field_0024].field1943_0x97e;
    STField<undefined1>(param_1,0x1e) =
         *(undefined1 *)&g_packedRecords_A62x8[(int)this->field_0024].field1944_0x982;
    STField<undefined1>(param_1,0x1f) =
         *(undefined1 *)&g_packedRecords_A62x8[(int)this->field_0024].field1945_0x986;
    ((undefined1 *)param_1)[8] =
         *(undefined1 *)&g_packedRecords_A62x8[(int)this->field_0024].field1946_0x98a;
    STField<undefined1>(param_1,0x21) =
         *(undefined1 *)&g_packedRecords_A62x8[(int)this->field_0024].field1947_0x98e;
    break;
  case CASE_52:
switchD_004bef7c_caseD_52:
    STField<undefined1>(param_1,0x47) = 0;
    break;
  case CASE_5B:
    pTVar23 = &this->field_04D0;
    if (0 < (int)this->field_04D0) {
      puVar17 = &this->field_04DC;
      do {
        if ((&DAT_007bf678)[(*pTVar23 - 0x96) * 3] == 2) {
          if (*(int *)(&DAT_007e6028 + (puVar17[-3] * 5 + -0x2ee) * 4) != 0) {
            uVar24 = (undefined2)*(int *)(&DAT_007e6028 + (puVar17[-3] * 5 + -0x2ee) * 4);
            switch(puVar17[-3]) {
            case 0xad:
              ((undefined1 *)param_1)[0xd] = 1;
              *(undefined2 *)(param_1 + 0xe) = uVar24;
              STField<short>(param_1,0x36) = (short)puVar17[-2];
              STField<char>(param_1,0x35) = (char)*puVar17;
              break;
            case 0xae:
              ((undefined1 *)param_1)[0x10] = 1;
              *(undefined2 *)(param_1 + 0x11) = uVar24;
              STField<short>(param_1,0x42) = (short)puVar17[-2];
              STField<char>(param_1,0x41) = (char)*puVar17;
              break;
            case 0xb3:
              STField<undefined1>(param_1,0x22) = 1;
              STField<undefined2>(param_1,0x26) = uVar24;
              *(short *)(param_1 + 9) = (short)puVar17[-2];
              STField<char>(param_1,0x23) = (char)*puVar17;
              break;
            case 0xb5:
              ((undefined1 *)param_1)[10] = 1;
              *(undefined2 *)(param_1 + 0xb) = uVar24;
              STField<short>(param_1,0x2a) = (short)puVar17[-2];
              STField<char>(param_1,0x29) = (char)*puVar17;
              break;
            case 0xb8:
              STField<undefined1>(param_1,0x3a) = 1;
              STField<undefined2>(param_1,0x3e) = uVar24;
              *(short *)(param_1 + 0xf) = (short)puVar17[-2];
              STField<char>(param_1,0x3b) = (char)*puVar17;
              break;
            case 0xbc:
              ((undefined1 *)param_1)[7] = 1;
              *(undefined2 *)(param_1 + 8) = uVar24;
              STField<short>(param_1,0x1e) = (short)puVar17[-2];
              STField<char>(param_1,0x1d) = (char)*puVar17;
              break;
            case 0xbd:
              STField<undefined1>(param_1,0x2e) = 1;
              STField<undefined2>(param_1,0x32) = uVar24;
              *(short *)(param_1 + 0xc) = (short)puVar17[-2];
              STField<char>(param_1,0x2f) = (char)*puVar17;
              break;
            case 0xbe:
              STField<undefined1>(param_1,0x46) = 1;
              STField<undefined2>(param_1,0x4a) = uVar24;
              *(short *)(param_1 + 0x12) = (short)puVar17[-2];
              STField<char>(param_1,0x47) = (char)*puVar17;
            }
          }
        }
        puVar1 = puVar17 + 2;
        pTVar23 = puVar17 + 2;
        puVar17 = puVar17 + 5;
      } while (0 < (int)*puVar1);
    }
    break;
  case CASE_5D:
    iVar21 = this->field_04D4 * 0x21;
    iVar21 = iVar21 / 0x28 + (iVar21 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case CASE_61:
    ((char *)param_1)[0xd] = (char)((int)(this->field_04E0[0xe] * 0x21) / DAT_007be8c4);
    if (this->field_04E0[0x10] == 0) {
      STField<undefined1>(param_1,0x35) = 0;
    }
    else {
      STField<char>(param_1,0x35) =
           (char)((int)(this->field_04E0[0] * 100) / (int)this->field_04E0[0x10]);
    }
    break;
  case CASE_62:
    local_EAX_9086 = thunk_FUN_004e41c0((int)this->field_0024);
    STField<uint>(param_1,0x1d) = local_EAX_9086;
    local_EAX_9104 = thunk_FUN_004e4180((int)this->field_0024);
    STField<int>(param_1,0x21) = local_EAX_9104;
    break;
  case CASE_64:
    TVar12 = this->field_04D0;
    STField<undefined4>(param_1,0x21) = 100;
    STField<TLOBaseTy_field_04D0State>(param_1,0x1d) = TVar12;
    break;
  case CASE_68:
    ((undefined1 *)param_1)[7] = 0x21;
    STField<int>(param_1,0x1d) = (this->field_04D4 * 0x21) / 200;
    break;
  case CASE_6D:
    local_c = (int *)((int)param_1 + 0x1d);
    iVar21 = 0;
    param_1 = &this->field_04D8;
    do {
      if (param_1[-2] != 0) {
        *local_c = *param_1;
        /* ST_CALLSITE[004C0E40]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar5 = LookupRecordByte(*(char *)&this->field_0024);
        *(byte *)(iVar21 + 0x25 + (int)piVar4) = bVar5;
        *(char *)(iVar21 + 0x2f + (int)piVar4) = (char)param_1[2];
      }
      iVar21 = iVar21 + 1;
      param_1 = param_1 + 1;
      local_c = local_c + 1;
    } while (iVar21 < 2);
    if ((((this->field_04D0 == CASE_0) || (this->field_04E0[2] == 0)) || (this->field_04D4 == 0)) ||
       (this->field_04E0[3] == 0)) {
      STField<undefined1>(piVar4,0x17) = 0;
      STField<undefined1>(piVar4,0x16) = 0;
      STField<undefined1>(piVar4,0x19) = 0;
      ((undefined1 *)piVar4)[6] = 0;
    }
    else {
      STField<bool>(piVar4,0x17) = (int)this->field_04E0[0] < 100;
      STField<bool>(piVar4,0x16) = 0 < (int)this->field_04E0[0];
      STField<bool>(piVar4,0x19) = (int)this->field_04E0[1] < 100;
      *(bool *)(piVar4 + 6) = 0 < (int)this->field_04E0[1];
    }
    if ((this->field_04D0 == CASE_0) || (uVar7 = 3, this->field_04E0[2] == 0)) {
      uVar7 = 1;
    }
    STField<undefined1>(piVar4,0x1a) = uVar7;
    if ((this->field_04D4 == 0) || (uVar7 = 3, this->field_04E0[3] == 0)) {
      uVar7 = 1;
    }
    STField<undefined1>(piVar4,0x1b) = uVar7;
    break;
  case CASE_6E:
    STField<undefined2>(param_1,0x3a) = 0;
    puVar17 = this->field_04E0;
    iVar21 = 0x28;
    do {
      uVar16 = *puVar17;
      puVar17 = puVar17 + 1;
      STField<short>(param_1,0x3a) = STField<short>(param_1,0x3a) + (short)uVar16;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    break;
  case CASE_6F:
    iVar21 = this->field_04D0 * 0x28;
    goto LAB_004c0fbb;
  case CASE_70:
    iVar21 = this->field_04E0[3] * 0x21;
    cVar6 = ((char)(iVar21 / 100) + (char)(iVar21 >> 0x1f)) -
            (char)((longlong)iVar21 * 0x51eb851f >> 0x3f);
    goto LAB_004c0fcc;
  case CASE_72:
    if ((this->field_04D0 == CASE_0) && (*(int *)&this->field_0x361 == 8)) {
      iVar21 = this->field_0394 * 0x21;
      goto LAB_004c0f8e;
    }
    if (this->field_04D0 == CASE_1) {
      ((undefined1 *)param_1)[0xd] = 0x21;
    }
    else {
      ((undefined1 *)param_1)[0xd] = 0;
    }
    break;
  case CASE_73:
    iVar21 = this->field_04D0 * 0x21;
LAB_004c0fbb:
    iVar21 = iVar21 / 5000 + (iVar21 >> 0x1f);
cf_common_join_004C0FC5:
    cVar6 = (char)iVar21 - (char)(iVar21 >> 0x1f);
LAB_004c0fcc:
    ((char *)param_1)[0xd] = cVar6;
  }
  piVar4[0x16] = 0;
  iVar21 = *(int *)&this->field_0x361;
  bVar26 = SUB41(iVar21,0);
  if (iVar21 != 0) {
    if (this->field_03B8 != 0) {
      piVar4[0x16] = 0xbb9;
      return bVar26;
    }
    if (this->field_03BC != 0) {
      piVar4[0x16] = 0xbba;
      return bVar26;
    }
    if (this->field_03C4 != 0) {
      piVar4[0x16] = 0xbbb;
      return bVar26;
    }
    if (this->field_03C8 != 0) {
      /* ST_CALLSITE[004C103C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar5 = LookupRecordByte(*(char *)&this->field_0024);
      iVar21 = (-(uint)(bVar5 != 3) & 0xffffffe1) + 0xbdb;
      piVar4[0x16] = iVar21;
      return SUB41(iVar21,0);
    }
    if (this->field_03C0 != 0) {
      piVar4[0x16] = 0xbd3;
      return bVar26;
    }
    pAVar18 = (AnonPointee_TLOBaseTy_061B *)(iVar21 - CASE_1);
    bVar26 = SUB41(pAVar18,0);
    switch(pAVar18) {
    case 0:
      local_EAX_9757 = thunk_FUN_0044e1b0((int)this->field_0024);
      if (local_EAX_9757 == 0) {
        piVar4[0x16] = 0xbdf;
        return false;
      }
      if (*(int *)&this->field_0x369 == 9) {
        piVar4[0x16] = 0xbc4;
        return SUB41(local_EAX_9757,0);
      }
      piVar4[0x16] = (-(uint)(*(int *)&this->field_0x369 != 0x15) & 0xfffffffa) + 0xbc3;
      return SUB41(local_EAX_9757,0);
    case (AnonPointee_TLOBaseTy_061B *)0x1:
      piVar4[0x16] = 0xbbe;
      return bVar26;
    case (AnonPointee_TLOBaseTy_061B *)0x2:
      piVar4[0x16] = 0xbbf;
      return bVar26;
    case (AnonPointee_TLOBaseTy_061B *)0x3:
      piVar4[0x16] = 0xbc0;
      return bVar26;
    case (AnonPointee_TLOBaseTy_061B *)0x4:
      piVar4[0x16] = 0xbc1;
      return bVar26;
    case (AnonPointee_TLOBaseTy_061B *)0x5:
      piVar4[0x16] = 0xbc2;
      return bVar26;
    case (AnonPointee_TLOBaseTy_061B *)0x6:
      piVar4[0x16] = 0xbd2;
      return bVar26;
    case (AnonPointee_TLOBaseTy_061B *)0x7:
      piVar4[0x16] = 0xbdc;
      return bVar26;
    }
    goto switchD_004c107c_default;
  }
  if (this->field_04A0 != 0) {
    piVar4[0x16] = 0xbd4;
    return false;
  }
  pAVar18 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
  if (pAVar18 != nullptr) {
    if (pAVar18 == (AnonPointee_TLOBaseTy_061B *)0x4) {
      piVar4[0x16] = 0xbcc;
    }
    goto switchD_004c107c_default;
  }
  pAVar18 = (AnonPointee_TLOBaseTy_061B *)(this->field_05AC + ~CASE_32);
  bVar26 = SUB41(pAVar18,0);
  switch(this->field_05AC) {
  case CASE_33:
    uVar17 = thunk_FUN_004e22f0(this,0);
    if (uVar17 == 0) {
      uVar17 = thunk_FUN_004e22f0(this,1);
      pAVar18 = nullptr;
      if (uVar17 == 0) break;
    }
    piVar4[0x16] = 0xbc5;
    return SUB41(uVar17,0);
  case CASE_34:
    piVar4[0x16] = 0xbc6;
    return bVar26;
  case CASE_36:
    if (this->field_04D4 < 0x28) {
      piVar4[0x16] = 0xbc7;
      return bVar26;
    }
    break;
  case CASE_37:
    if (this->field_04D8 == 0xffff) {
      if ((int)this->field_04D0 < 100) {
        piVar4[0x16] = 0xbd5;
        return bVar26;
      }
      piVar4[0x16] = (-(uint)(this->field_042C != 0) & 0xfffffffe) + 0xbd8;
      return bVar26;
    }
    goto LAB_004c12d3;
  case CASE_3A:
    piVar4[0x16] = 0xbc9;
    return bVar26;
  case CASE_3C:
    piVar4[0x16] = 0;
    return bVar26;
  case CASE_43:
    if (this->field_04D0 == CASE_1) {
      piVar4[0x16] = 0xbca;
      return bVar26;
    }
    if (this->field_04D0 == CASE_2) {
      piVar4[0x16] = 0xbcb;
      return bVar26;
    }
    break;
  case CASE_45:
  case CASE_4E:
    if (this->field_04D0 == CASE_1) {
      piVar4[0x16] = 0xbc8;
      return bVar26;
    }
    break;
  case CASE_4C:
    if (this->field_04D0 == CASE_1) {
      piVar4[0x16] = 0xbcd;
      return bVar26;
    }
    if (this->field_04D0 == CASE_2) {
      piVar4[0x16] = 0xbce;
      return bVar26;
    }
    break;
  case CASE_4D:
    if (this->field_04D0 == CASE_1) {
      piVar4[0x16] = 0xbcf;
      return bVar26;
    }
    if (this->field_04D0 == CASE_2) {
      piVar4[0x16] = 0xbd0;
      return bVar26;
    }
    break;
  case CASE_50:
    piVar4[0x16] = 0xbd1;
    return bVar26;
  case CASE_64:
    if (this->field_04DC != 0) {
      piVar4[0x16] = 0xbdd;
      return bVar26;
    }
    break;
  case CASE_6C:
    pAVar18 = (AnonPointee_TLOBaseTy_061B *)this->field_04D8;
    if ((pAVar18 == (AnonPointee_TLOBaseTy_061B *)0xffff) &&
       (((pAVar18 = this->field_061B, pAVar18 == nullptr ||
         (pAVar18->field_0020 != 1000)) || (pAVar18->field_04D8 == 0xffff)))) {
      local_EAX_10456 = thunk_FUN_004e9930((int)this);
      pAVar18 = nullptr;
      if ((((local_EAX_10456 != 0) &&
           (pAVar18 = this->field_061B, pAVar18 != nullptr)) &&
          (pAVar18->field_0020 == 1000)) &&
         ((pAVar18->field_04D8 == 0xffff && ((int)pAVar18->field_05B8 < g_worldGrid.sizeZ + -1)))) {
        piVar4[0x16] = 0xbe0;
        return SUB41(pAVar18,0);
      }
      piVar4[0x16] = (this->field_061B != nullptr) + 0xbd9;
      return SUB41(pAVar18,0);
    }
LAB_004c12d3:
    piVar4[0x16] = 0xbd7;
    return SUB41(pAVar18,0);
  }
switchD_004c107c_default:
  return SUB41(pAVar18,0);
switchD_004bef7c_caseD_37:
  TVar12 = this->field_04D0;
LAB_004c0ae0:
  iVar21 = (int)(TVar12 * 0x28) / 100 + ((int)(TVar12 * 0x28) >> 0x1f);
  goto cf_common_join_004C0FC5;
}

