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
  TLOBaseTy_field_046CState TVar1;
  TLOBaseTy_field_05ACState TVar2;
  int *piVar3;
  char cVar4;
  undefined1 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  AiPlrClassTy *pAVar9;
  STGroupBoatC *pSVar10;
  TLOBaseTy_field_04D0State TVar11;
  uint uVar12;
  uint uVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_02;
  uint *puVar14;
  undefined4 uVar15;
  int *piVar16;
  AnonPointee_TLOBaseTy_061B *pAVar17;
  short sVar18;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  undefined2 *puVar19;
  TLOBaseTy_field_04D0State *pTVar20;
  undefined2 uVar21;
  bool bVar22;
  int *local_c;
  int *local_8;

  piVar3 = param_1;
  *param_1 = this->field_05AC;
  *(byte *)((int)param_1 + 5) =
       ((this->field_0024 != (byte *)(uint)(byte)this->field_0010->field_112D) - 1U & 0xfe) + 3;
  iVar7 = GetPlayerRaceId(*(char *)&this->field_023D);
  *(char *)(param_1 + 1) = (char)iVar7;
  if (((this->field_01D1 & 4) == 0) && (this->field_0420 == 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  *(undefined1 *)((int)param_1 + 7) = uVar5;
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
  iVar7 = thunk_FUN_004e8030(this->field_05AC);
  if (iVar7 == 3) {
    iVar8 = GetPlayerRaceId(*(char *)&this->field_0024);
    if ((char)iVar8 != '\x03') {
LAB_004beb5f:
      *(undefined1 *)((int)param_1 + 5) = 3;
      goto LAB_004beb63;
    }
LAB_004beb6d:
    *(undefined1 *)((int)param_1 + 9) = 0x33;
    if (((this->field_0245 == CASE_0) && (iVar7 = sub_004D6DF0(this), iVar7 != 0)) &&
       (iVar7 = thunk_FUN_004e4140((int)this->field_0024), iVar7 != 0)) {
      uVar5 = 1;
    }
    else {
LAB_004bebed:
      uVar5 = 0;
    }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004bebef:
    *(undefined1 *)((int)param_1 + 0xf) = uVar5;
  }
  else {
    iVar8 = GetPlayerRaceId(*(char *)&this->field_0024);
    if ((char)iVar8 == '\x03') goto LAB_004beb5f;
LAB_004beb63:
    if ((iVar7 != 1) && (iVar7 != 2)) goto LAB_004beb6d;
    if (*(int *)&this->field_0x361 != 5) {
      *(undefined1 *)((int)param_1 + 9) = 0x20;
      iVar7 = (*this->vtable->vfunc_7C)(this);
      if ((iVar7 == 100) ||
         (((this->field_0245 != CASE_0 && (this->field_0245 != CASE_5)) ||
          (*(int *)&this->field_0x361 != 0)))) goto LAB_004bebed;
      uVar5 = 1;
      goto LAB_004bebef;
    }
    *(undefined1 *)((int)param_1 + 9) = 0x32;
    *(bool *)((int)param_1 + 0xf) = this->field_0245 == CASE_0;
  }
  pAVar9 = thunk_FUN_004357f0(*(char *)&this->field_0024);
  if (pAVar9 == (AiPlrClassTy *)0x0) {
    *(undefined1 *)((int)param_1 + 0x15) = 0;
  }
  else {
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pSVar10 = thunk_FUN_0042b760(*(char *)&this->field_0024,
                                 CONCAT22(extraout_var_03,this->field_0030));
    if ((pSVar10 == (STGroupBoatC *)0x0) || (pSVar10->field_001C == 0)) {
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
      uVar5 = 1;
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
      goto LAB_004bf427;
LAB_004bf438:
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar5;
    *(undefined1 *)((int)param_1 + 0xb) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_33:
    *(undefined1 *)((int)param_1 + 10) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    pAVar17 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
    goto joined_r0x004bfcb7;
  case CASE_35:
    *(undefined1 *)((int)param_1 + 10) = 0x21;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      bVar22 = *(int *)&this->field_0x361 == 0;
LAB_004bef54:
      if (bVar22) goto cf_common_join_004BEF5A;
    }
    goto cf_common_join_004C0278;
  case CASE_36:
    goto switchD_004bec4d_caseD_36;
  case CASE_37:
    *(undefined1 *)((int)param_1 + 10) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_04D8 != 0xffff) goto cf_common_join_004C0278;
    goto cf_common_join_004BEF5A;
  case CASE_3A:
    *(undefined1 *)((int)param_1 + 10) = 0x22;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    pAVar17 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
    goto joined_r0x004bfcb7;
  case CASE_3C:
    *(undefined1 *)((int)param_1 + 10) = 0x28;
    if (this->field_0245 == CASE_0) {
      if (this->field_0024 != (byte *)this->field_023D) {
        uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
        iVar7 = this->field_0235;
        uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
        if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
        goto LAB_004bf7a5;
      }
      if (g_playerRuntime[(int)this->field_0024].field2180_0xa0e != 0) goto LAB_004bf7a5;
      uVar5 = 1;
    }
    else {
LAB_004bf7a5:
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar5;
    *(undefined1 *)((int)param_1 + 0xb) = 0x29;
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
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
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
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
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar5;
switchD_004bec4d_caseD_36:
    uVar12 = GetPlayerRaceId(*(char *)&this->field_0024);
    uVar12 = uVar12 & 0xff;
    if (uVar12 == 1) {
      iVar7 = 0x1d;
    }
    else if (uVar12 == 2) {
      iVar7 = 0x89;
    }
    else if (uVar12 == 3) {
      iVar7 = 0x46;
    }
    else {
      iVar7 = 0;
    }
    if (this->field_05AC == CASE_36) {
      *(undefined1 *)((int)param_1 + 10) = 0x2a;
      if (((this->field_04D4 < 0x28) || (this->field_0245 != CASE_0)) ||
         (iVar7 = thunk_FUN_004e60d0((int)this->field_0024,iVar7), iVar7 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)(param_1 + 4) = uVar5;
    }
    uVar12 = GetPlayerRaceId(*(char *)&this->field_0024);
    if ((uVar12 & 0xff) == 1) {
      iVar7 = 0x10;
    }
    else if ((uVar12 & 0xff) == 2) {
      iVar7 = 0x85;
    }
    else {
      iVar7 = 0;
    }
    uVar12 = GetPlayerRaceId(*(char *)&this->field_023D);
    if (*(int *)(&DAT_00791b14 + ((uVar12 & 0xff) + this->field_0235 * 3) * 4) != 0) {
      if (((iVar7 == 0) || (iVar8 = thunk_FUN_004e60d0((int)this->field_0024,iVar7), iVar8 == 0)) ||
         (this->field_0245 != CASE_4)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      *(undefined1 *)((int)param_1 + 0xb) = 0x17;
      if (this->field_0245 == CASE_4) {
        cVar4 = (-(this->field_046C != 0) & 2U) + 1;
      }
      else {
        cVar4 = '\0';
      }
      *(char *)((int)param_1 + 0x11) = cVar4;
      if ((this->field_0245 == CASE_4) || (this->field_0245 == CASE_3)) {
        *(undefined1 *)(param_1 + 3) = 0x16;
        if ((this->field_0245 != CASE_4) || (iVar7 = sub_004C7070(this,0), iVar7 == 0))
        goto LAB_004bee65;
        uVar5 = 1;
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0x15;
        if (((iVar7 == 0) || (iVar7 = thunk_FUN_004e60d0((int)this->field_0024,iVar7), iVar7 == 0))
           || (((this->field_0245 != CASE_0 && (this->field_0245 != CASE_5)) ||
               (*(int *)&this->field_0x361 != 0)))) {
LAB_004bee65:
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
      }
      *(undefined1 *)((int)param_1 + 0x12) = uVar5;
      *(undefined1 *)((int)param_1 + 0xe) = 2;
      if (bVar22) {
        if ((this->field_03DC == 0) || (this->field_046C != 0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = 3;
        }
      }
      else {
        uVar5 = 0;
      }
      *(undefined1 *)(param_1 + 5) = uVar5;
      *(undefined1 *)((int)param_1 + 0xd) = 1;
      if ((bVar22) &&
         (((TVar1 = this->field_046C, TVar1 == 0 || (TVar1 == CASE_1)) || (TVar1 == CASE_2)))) {
        if ((this->field_03DC == 0) && (TVar1 == 0)) {
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
      if ((this->field_0245 != CASE_0) || (iVar7 = sub_004C7860(this,1,9,1,0,1), iVar7 == 0))
      goto LAB_004bf624;
      uVar5 = 1;
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
      goto LAB_004bf5fe;
LAB_004bf624:
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar5;
    *(undefined1 *)((int)param_1 + 0xb) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_43:
    *(undefined1 *)((int)param_1 + 10) = 0x23;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      iVar7 = this->field_04D8;
joined_r0x004bf200:
      if (4999 < iVar7) goto cf_common_join_004BEF5A;
    }
    goto cf_common_join_004C0278;
  case CASE_44:
    *(undefined1 *)((int)param_1 + 10) = 0x1b;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      iVar7 = 0x19;
LAB_004bf708:
      iVar7 = thunk_FUN_004e60d0((int)this->field_0024,iVar7);
      if (iVar7 != 0) goto cf_common_join_004BEF5A;
    }
    goto cf_common_join_004C0278;
  case CASE_45:
    *(undefined1 *)((int)param_1 + 10) = 0x1a;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      bVar22 = this->field_04D0 == CASE_1;
      goto LAB_004bef54;
    }
    goto cf_common_join_004C0278;
  case CASE_49:
    *(undefined1 *)((int)param_1 + 10) = 0x1f;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf508:
      if ((this->field_0245 != CASE_0) || (iVar7 = sub_004C7860(this,1,0x15,1,0,1), iVar7 == 0))
      goto LAB_004bf52e;
      uVar5 = 1;
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
      goto LAB_004bf508;
LAB_004bf52e:
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar5;
    *(undefined1 *)((int)param_1 + 0xb) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_4C:
    if (this->field_04D0 != CASE_1) {
      *(undefined1 *)((int)param_1 + 10) = 0x24;
      if (this->field_0024 != (byte *)this->field_023D) {
        uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
        iVar7 = this->field_0235;
        uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
        if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
        goto cf_common_join_004C0278;
      }
      if (this->field_0245 != CASE_0) goto cf_common_join_004C0278;
      iVar7 = this->field_04D8;
      goto joined_r0x004bf200;
    }
    *(undefined1 *)((int)param_1 + 10) = 0x25;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
LAB_004bf17b:
    pAVar17 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
    goto joined_r0x004bfcb7;
  case CASE_4E:
    *(undefined1 *)((int)param_1 + 10) = 0x1c;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004beff1:
      if (((this->field_0245 != CASE_0) ||
          (iVar7 = thunk_FUN_004e60d0((int)this->field_0024,0x31), iVar7 == 0)) ||
         ((this->field_04D0 != CASE_0 || (*(int *)&this->field_0x361 != 0)))) goto LAB_004bf02b;
      uVar5 = 1;
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
      goto LAB_004beff1;
LAB_004bf02b:
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar5;
    *(undefined1 *)((int)param_1 + 0xb) = 0x19;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0261 == 0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_52:
    *(undefined1 *)((int)param_1 + 10) = 0x30;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf873:
      if (this->field_0245 != CASE_0) goto LAB_004bf884;
      uVar5 = 1;
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
      goto LAB_004bf873;
LAB_004bf884:
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar5;
    *(undefined1 *)((int)param_1 + 0xb) = 0x31;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_53:
    *(undefined1 *)((int)param_1 + 10) = 0x44;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf954:
      if (this->field_0245 != CASE_0) goto LAB_004bf965;
      uVar5 = 1;
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
      goto LAB_004bf954;
LAB_004bf965:
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar5;
    *(undefined1 *)((int)param_1 + 0xb) = 0x39;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf9c0:
      if (((this->field_0245 != CASE_0) || (*(int *)&this->field_0x361 != 0)) ||
         (g_playerRuntime[(int)this->field_0024].field2180_0xa0e != 0)) goto LAB_004bf9f7;
      uVar5 = 1;
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
      goto LAB_004bf9c0;
LAB_004bf9f7:
      uVar5 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x11) = uVar5;
    *(undefined1 *)(param_1 + 3) = 0x46;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto LAB_004bfffc;
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
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
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
      uVar5 = 1;
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
      goto LAB_004bfbca;
LAB_004bfbdb:
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar5;
    *(undefined1 *)((int)param_1 + 0xb) = 0x37;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_5D:
    *(undefined1 *)((int)param_1 + 10) = 0x43;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if ((0x27 < this->field_04D4) && (this->field_0245 == CASE_0)) {
      iVar7 = 0x46;
      goto LAB_004bf708;
    }
    goto cf_common_join_004C0278;
  case CASE_5F:
    *(undefined1 *)((int)param_1 + 10) = 0x3f;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004c0170:
      if (this->field_0245 != CASE_0) goto LAB_004c0181;
      uVar5 = 1;
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
      goto LAB_004c0170;
LAB_004c0181:
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar5;
    *(undefined1 *)((int)param_1 + 0xb) = 0x31;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C01F3;
    }
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    break;
  case CASE_61:
    *(undefined1 *)((int)param_1 + 10) = 0x3b;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (0 < this->field_0518) goto LAB_004bf17b;
    goto cf_common_join_004C0278;
  case CASE_64:
    *(undefined1 *)((int)param_1 + 10) = 0x40;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    pAVar17 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
joined_r0x004bfcb7:
    if (pAVar17 != (AnonPointee_TLOBaseTy_061B *)0x0) goto cf_common_join_004C0278;
cf_common_join_004BEF5A:
    uVar5 = 1;
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
    uVar5 = 0;
    goto LAB_004bef5f;
  case CASE_6C:
    *(undefined1 *)((int)param_1 + 10) = 0x3e;
    if (this->field_0024 != (byte *)this->field_023D) {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
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
      uVar5 = 1;
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
      goto LAB_004bfee5;
LAB_004bff0a:
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar5;
    *(undefined1 *)((int)param_1 + 0xb) = 0x38;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bff65:
      if ((this->field_0245 != CASE_0) || (this->field_04D0 == CASE_0)) goto LAB_004bff80;
      uVar5 = 1;
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
      goto LAB_004bff65;
LAB_004bff80:
      uVar5 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x11) = uVar5;
    *(undefined1 *)(param_1 + 3) = 0x45;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bffdb:
      if ((this->field_0245 == CASE_0) && (this->field_04D4 != 0)) {
        *(undefined1 *)((int)param_1 + 0x12) = 1;
        break;
      }
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
      goto LAB_004bffdb;
    }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004bfffc:
    *(undefined1 *)((int)param_1 + 0x12) = 0;
    break;
  case CASE_70:
    if (this->field_04F0 == 0) {
      *(undefined1 *)((int)param_1 + 10) = 0x36;
      if (this->field_0024 != (byte *)this->field_023D) {
        uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
        iVar7 = this->field_0235;
        uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
        if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
        goto cf_common_join_004C0278;
      }
      if (this->field_0245 != CASE_0) goto cf_common_join_004C0278;
      TVar11 = this->field_04D0;
    }
    else {
      *(undefined1 *)((int)param_1 + 10) = 0x34;
      if (this->field_0024 != (byte *)this->field_023D) {
        uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
        iVar7 = this->field_0235;
        uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
        if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] == '\0')
        goto cf_common_join_004C0278;
      }
      TVar11 = this->field_0245;
    }
    if ((TVar11 == CASE_0) && (99 < (int)this->field_04EC)) goto cf_common_join_004BEF5A;
cf_common_join_004C0278:
    uVar5 = 0;
LAB_004bef5f:
    *(undefined1 *)(param_1 + 4) = uVar5;
    break;
  case CASE_72:
    *(undefined1 *)((int)param_1 + 10) = 0x34;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004c005c:
      if (this->field_0261 == 0) goto LAB_004c006d;
      uVar5 = 1;
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
      goto LAB_004c005c;
LAB_004c006d:
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar5;
    *(undefined1 *)((int)param_1 + 0xb) = 0x4f;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004c00cc:
      if ((((this->field_0245 == CASE_0) &&
           (iVar7 = thunk_FUN_004e60d0((int)this->field_0024,0x75), iVar7 != 0)) &&
          (this->field_04D0 == CASE_0)) && (*(int *)&this->field_0x361 == 0)) {
        *(undefined1 *)((int)param_1 + 0x11) = 1;
        break;
      }
    }
    else {
      uVar12 = GetPlayerRaceId((char)(byte *)this->field_023D);
      iVar7 = this->field_0235;
      uVar13 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((&DAT_007e1984)[(uVar13 & 0xff) + ((uVar12 & 0xff) + iVar7 * 3) * 3] != '\0')
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
      iVar7 = GetPlayerRaceId(*(char *)&this->field_0024);
      if ((char)iVar7 == '\x03') {
        sVar6 = (short)this->field_03A4;
        sVar18 = (short)this->field_03B4;
      }
      else {
        sVar6 = (short)this->field_03A0;
        sVar18 = (short)this->field_03B0;
      }
      *(short *)((int)param_1 + 0x27) = sVar6 - sVar18;
      *(short *)((int)param_1 + 0x2b) = (short)((this->field_039C * (100 - this->field_0394)) / 100)
      ;
      *(char *)((int)param_1 + 0x2f) = (char)this->field_0394;
      iVar7 = GetPlayerRaceId(*(char *)&this->field_0024);
      *(char *)((int)param_1 + 0x25) = (char)iVar7;
      if (this->field_05AC == CASE_40) {
        iVar7 = sub_004C9370(this,1,9,-1);
        *(char *)((int)param_1 + 0x31) = (char)iVar7;
        if ((*(int *)&this->field_0x361 == 1) && (*(int *)&this->field_0x369 == 9)) {
          *(char *)((int)param_1 + 0x31) = this->field_0x36d + (char)iVar7;
        }
      }
      else if (this->field_05AC == CASE_49) {
        iVar7 = sub_004C9370(this,1,0x15,-1);
        *(char *)((int)param_1 + 0x31) = (char)iVar7;
        if ((*(int *)&this->field_0x361 == 1) && (*(int *)&this->field_0x369 == 0x15)) {
          *(char *)((int)param_1 + 0x31) = this->field_0x36d + (char)iVar7;
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
    param_1 = (int *)0x0;
    piVar16 = &this->field_04D8;
    do {
      if ((piVar16[-2] == 0) || (piVar16[-1] == 0)) {
        *local_8 = 0;
        puVar19[-2] = 0xffff;
        *puVar19 = 0xffff;
        *(undefined1 *)((int)param_1 + 0x2f + (int)piVar3) = 0xff;
      }
      else {
        *local_8 = *piVar16;
        puVar19[-2] = (short)((*(int *)(&DAT_007e085c + *piVar16 * 4) * (piVar16[3] - piVar16[2])) /
                             piVar16[3]);
        *puVar19 = 0xffff;
        *(char *)((int)param_1 + 0x2f + (int)piVar3) = (char)((piVar16[2] * 100) / piVar16[3]);
        iVar7 = GetPlayerRaceId(*(char *)&this->field_0024);
        *(char *)((int)param_1 + 0x25 + (int)piVar3) = (char)iVar7;
      }
      param_1 = (int *)((int)param_1 + 1);
      piVar16 = piVar16 + 10;
      local_8 = local_8 + 1;
      puVar19 = puVar19 + 1;
    } while ((int)param_1 < 2);
    break;
  case CASE_34:
    pTVar20 = &this->field_04D0;
    if (0 < (int)this->field_04D0) {
      puVar14 = &this->field_04DC;
      do {
        if ((&DAT_007bf678)[(*pTVar20 - 0x96) * 3] == 1) {
          if (*(int *)(&DAT_007e6028 + (puVar14[-3] - 0x96) * 0x14) != 0) {
            uVar21 = (undefined2)*(int *)(&DAT_007e6028 + (puVar14[-3] - 0x96) * 0x14);
            switch(puVar14[-3]) {
            case 0x96:
              *(undefined1 *)(param_1 + 7) = 1;
              *(undefined2 *)(param_1 + 8) = uVar21;
              *(short *)((int)param_1 + 0x1e) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x1d) = (char)*puVar14;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0x97:
              *(undefined1 *)((int)param_1 + 0x22) = 1;
              *(undefined2 *)((int)param_1 + 0x26) = uVar21;
              *(short *)(param_1 + 9) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x23) = (char)*puVar14;
              break;
            case 0x98:
              *(undefined1 *)(param_1 + 10) = 1;
              *(undefined2 *)(param_1 + 0xb) = uVar21;
              *(short *)((int)param_1 + 0x2a) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x29) = (char)*puVar14;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0x99:
              *(undefined1 *)((int)param_1 + 0x2e) = 1;
              *(undefined2 *)((int)param_1 + 0x32) = uVar21;
              *(short *)(param_1 + 0xc) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x2f) = (char)*puVar14;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0x9a:
              *(undefined1 *)(param_1 + 0xd) = 1;
              *(undefined2 *)(param_1 + 0xe) = uVar21;
              *(short *)((int)param_1 + 0x36) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x35) = (char)*puVar14;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xa6:
              *(undefined1 *)((int)param_1 + 0x3a) = 1;
              *(undefined2 *)((int)param_1 + 0x3e) = uVar21;
              *(short *)(param_1 + 0xf) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x3b) = (char)*puVar14;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xa7:
              *(undefined1 *)((int)param_1 + 0x46) = 1;
              *(undefined2 *)((int)param_1 + 0x4a) = uVar21;
              *(short *)(param_1 + 0x12) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x47) = (char)*puVar14;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xa9:
              *(undefined1 *)(param_1 + 0x10) = 1;
              *(undefined2 *)(param_1 + 0x11) = uVar21;
              *(short *)((int)param_1 + 0x42) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x41) = (char)*puVar14;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xab:
              *(undefined1 *)(param_1 + 0x13) = 1;
              *(undefined2 *)(param_1 + 0x14) = uVar21;
              *(short *)((int)param_1 + 0x4e) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x4d) = (char)*puVar14;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xac:
              *(undefined1 *)((int)param_1 + 0x52) = 1;
              *(undefined2 *)((int)param_1 + 0x56) = uVar21;
              *(short *)(param_1 + 0x15) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x53) = (char)*puVar14;
            }
          }
        }
        piVar16 = (int *)(puVar14 + 2);
        pTVar20 = puVar14 + 2;
        puVar14 = puVar14 + 5;
      } while (0 < *piVar16);
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
        cVar4 = '\0';
      }
      else {
        uVar15 = thunk_FUN_004e60d0((int)this->field_0024,*(int *)&this->field_0x369);
        cVar4 = (char)uVar15 + '\x01';
      }
      *(char *)((int)param_1 + 0x3d) = cVar4;
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
      TVar2 = this->field_05AC;
      param_1 = (int *)0x0;
      if (TVar2 == CASE_35) {
        do {
          if ((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0') {
            iVar7 = thunk_FUN_004e60d0((int)this->field_0024,(int)param_1);
            iVar7 = thunk_FUN_004e7f20((int)this->field_0024,(int)param_1,iVar7 + 1);
          }
          else {
            iVar7 = thunk_FUN_004e5910((int)this->field_0024,(uint)param_1);
          }
          if (iVar7 != 0) {
            uVar5 = thunk_FUN_004e6140((int)this->field_0024,(int)param_1);
            iVar7 = thunk_FUN_004e60d0((int)this->field_0024,(int)param_1);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (((iVar7 < CONCAT31(extraout_var_01,uVar5)) &&
                (iVar7 = thunk_FUN_004e5f90((int)this->field_0024,(uint)param_1), iVar7 == 0)) &&
               (((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0' ||
                (bVar22 = thunk_FUN_004e5c40((int)this->field_0024,(uint)param_1),
                CONCAT31(extraout_var_02,bVar22) != 0)))) {
              *(short *)((int)piVar3 + 0x3a) = *(short *)((int)piVar3 + 0x3a) + 1;
            }
          }
          param_1 = (int *)((int)param_1 + 1);
        } while ((int)param_1 < 0x9b);
      }
      else if ((&DAT_0079a3fc)[(TVar2 * 3 + -0xfc) * 5] != 0) {
        local_c = &DAT_0079a3fc + (TVar2 * 3 + -0xfc) * 5;
        do {
          if (0xe < (int)param_1) break;
          if ((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0') {
            iVar7 = thunk_FUN_004e60d0((int)this->field_0024,(int)param_1);
            iVar7 = thunk_FUN_004e7f20((int)this->field_0024,(int)param_1,iVar7 + 1);
          }
          else {
            iVar7 = thunk_FUN_004e5910((int)this->field_0024,(uint)param_1);
          }
          if (iVar7 != 0) {
            uVar5 = thunk_FUN_004e6140((int)this->field_0024,(int)param_1);
            iVar7 = thunk_FUN_004e60d0((int)this->field_0024,(int)param_1);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (((iVar7 < CONCAT31(extraout_var,uVar5)) &&
                (iVar7 = thunk_FUN_004e5f90((int)this->field_0024,(uint)param_1), iVar7 == 0)) &&
               (((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0' ||
                (bVar22 = thunk_FUN_004e5c40((int)this->field_0024,(uint)param_1),
                CONCAT31(extraout_var_00,bVar22) != 0)))) {
              *(short *)((int)piVar3 + 0x3a) = *(short *)((int)piVar3 + 0x3a) + 1;
            }
          }
          param_1 = (int *)((int)param_1 + 1);
          local_c = local_c + 1;
        } while (*local_c != 0);
      }
    }
    break;
  case CASE_36:
    iVar7 = this->field_04D4 * 0x28;
    iVar7 = iVar7 / 0x28 + (iVar7 >> 0x1f);
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
      *(short *)((int)param_1 + 0x3f) = (short)this->field_04E0;
    }
    break;
  case CASE_3A:
    iVar7 = this->field_04D0 * 400;
    *(short *)((int)param_1 + 0x3f) =
         ((short)(iVar7 / 100) + (short)(iVar7 >> 0x1f)) -
         (short)((longlong)iVar7 * 0x51eb851f >> 0x3f);
    iVar7 = thunk_FUN_004d8250();
    *(char *)((int)param_1 + 0x45) = (char)iVar7;
    if (this->field_04E4 == 0) {
      iVar7 = thunk_FUN_004d8280();
      *(char *)((int)param_1 + 0x46) = (char)iVar7;
    }
    else {
      iVar7 = thunk_FUN_004d8280();
      iVar8 = thunk_FUN_004d8230();
      *(char *)((int)param_1 + 0x46) = (char)((uint)(iVar8 * iVar7) / (uint)this->field_04E4);
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
      uVar12 = GetPlayerRaceId(*(char *)&this->field_0024);
      uVar12 = uVar12 & 0xff;
      if (uVar12 == 1) {
        iVar7 = 0x3d;
      }
      else if (uVar12 == 2) {
        iVar7 = 0x8d;
      }
      else if (uVar12 == 3) {
        iVar7 = 0x49;
      }
      else {
        iVar7 = 0;
      }
      *(undefined1 *)((int)param_1 + 0x47) = 1;
      iVar7 = thunk_FUN_004e60d0((int)this->field_0024,iVar7);
      uVar12 = (g_playSystem_00802A38->field_00E4 * 100 +
               g_playerRuntime[(int)this->field_0024].field2183_0xa1a * -100) /
               *(uint *)(&DAT_00798f6c + iVar7 * 4);
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
    *(char *)(param_1 + 7) = (char)this->field_04E0;
    iVar7 = this->field_04D8 * 0x28;
    iVar7 = iVar7 / 10000 + (iVar7 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case CASE_44:
    if (*(int *)&this->field_0x361 == 6) {
      *(undefined4 *)((int)param_1 + 0x1d) = 1;
      *(char *)((int)param_1 + 0x2f) = (char)this->field_0394;
      *(short *)((int)param_1 + 0x27) = (short)this->field_03A0 - *(short *)&this->field_03B0;
      *(short *)((int)param_1 + 0x2b) = (short)this->field_039C - *(short *)&this->field_03AC;
      iVar7 = GetPlayerRaceId(*(char *)&this->field_0024);
      *(char *)((int)param_1 + 0x25) = (char)iVar7;
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
      TVar11 = this->field_04D0;
LAB_004c0285:
      if (TVar11 == CASE_1) {
        *(undefined1 *)(param_1 + 0xd) = 0x28;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 0xff;
      }
      break;
    }
    TVar11 = this->field_0394;
    goto LAB_004c0ae0;
  case CASE_48:
    iVar7 = this->field_04D0 * 0x28;
    iVar7 = iVar7 / 500 + (iVar7 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case CASE_4D:
    iVar7 = this->field_04D4 * 0x28;
    cVar4 = ((char)(iVar7 / 5000) + (char)(iVar7 >> 0x1f)) -
            (char)((longlong)iVar7 * 0x68db8bad >> 0x3f);
    goto LAB_004c0fcc;
  case CASE_4E:
    TVar11 = this->field_04D0;
    if ((TVar11 != CASE_0) || (*(int *)&this->field_0x361 != 4)) goto LAB_004c0285;
    iVar7 = this->field_0394 * 0x28;
LAB_004c0f8e:
    cVar4 = ((char)(iVar7 / 100) + (char)(iVar7 >> 0x1f)) -
            (char)((longlong)iVar7 * 0x51eb851f >> 0x3f);
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
      puVar14 = &this->field_04DC;
      do {
        if ((&DAT_007bf678)[(*pTVar20 - 0x96) * 3] == 2) {
          if (*(int *)(&DAT_007e6028 + (puVar14[-3] * 5 + -0x2ee) * 4) != 0) {
            uVar21 = (undefined2)*(int *)(&DAT_007e6028 + (puVar14[-3] * 5 + -0x2ee) * 4);
            switch(puVar14[-3]) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xad:
              *(undefined1 *)(param_1 + 0xd) = 1;
              *(undefined2 *)(param_1 + 0xe) = uVar21;
              *(short *)((int)param_1 + 0x36) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x35) = (char)*puVar14;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xae:
              *(undefined1 *)(param_1 + 0x10) = 1;
              *(undefined2 *)(param_1 + 0x11) = uVar21;
              *(short *)((int)param_1 + 0x42) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x41) = (char)*puVar14;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xb3:
              *(undefined1 *)((int)param_1 + 0x22) = 1;
              *(undefined2 *)((int)param_1 + 0x26) = uVar21;
              *(short *)(param_1 + 9) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x23) = (char)*puVar14;
              break;
            case 0xb5:
              *(undefined1 *)(param_1 + 10) = 1;
              *(undefined2 *)(param_1 + 0xb) = uVar21;
              *(short *)((int)param_1 + 0x2a) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x29) = (char)*puVar14;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xb8:
              *(undefined1 *)((int)param_1 + 0x3a) = 1;
              *(undefined2 *)((int)param_1 + 0x3e) = uVar21;
              *(short *)(param_1 + 0xf) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x3b) = (char)*puVar14;
              break;
            case 0xbc:
              *(undefined1 *)(param_1 + 7) = 1;
              *(undefined2 *)(param_1 + 8) = uVar21;
              *(short *)((int)param_1 + 0x1e) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x1d) = (char)*puVar14;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xbd:
              *(undefined1 *)((int)param_1 + 0x2e) = 1;
              *(undefined2 *)((int)param_1 + 0x32) = uVar21;
              *(short *)(param_1 + 0xc) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x2f) = (char)*puVar14;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xbe:
              *(undefined1 *)((int)param_1 + 0x46) = 1;
              *(undefined2 *)((int)param_1 + 0x4a) = uVar21;
              *(short *)(param_1 + 0x12) = (short)puVar14[-2];
              *(char *)((int)param_1 + 0x47) = (char)*puVar14;
            }
          }
        }
        piVar16 = (int *)(puVar14 + 2);
        pTVar20 = puVar14 + 2;
        puVar14 = puVar14 + 5;
      } while (0 < *piVar16);
    }
    break;
  case CASE_5D:
    iVar7 = this->field_04D4 * 0x21;
    iVar7 = iVar7 / 0x28 + (iVar7 >> 0x1f);
    goto cf_common_join_004C0FC5;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case CASE_61:
    *(char *)(param_1 + 0xd) = (char)((this->field_0518 * 0x21) / DAT_007be8c4);
    if (this->field_0520 == 0) {
      *(undefined1 *)((int)param_1 + 0x35) = 0;
    }
    else {
      *(char *)((int)param_1 + 0x35) = (char)((this->field_04E0 * 100) / this->field_0520);
    }
    break;
  case CASE_62:
    uVar15 = thunk_FUN_004e41c0((int)this->field_0024);
    *(undefined4 *)((int)param_1 + 0x1d) = uVar15;
    iVar7 = thunk_FUN_004e4180((int)this->field_0024);
    *(int *)((int)param_1 + 0x21) = iVar7;
    break;
  case CASE_64:
    TVar11 = this->field_04D0;
    *(undefined4 *)((int)param_1 + 0x21) = 100;
    *(TLOBaseTy_field_04D0State *)((int)param_1 + 0x1d) = TVar11;
    break;
  case CASE_68:
    *(undefined1 *)(param_1 + 7) = 0x21;
    *(int *)((int)param_1 + 0x1d) = (this->field_04D4 * 0x21) / 200;
    break;
  case CASE_6D:
    local_c = (int *)((int)param_1 + 0x1d);
    iVar7 = 0;
    param_1 = &this->field_04D8;
    do {
      if (param_1[-2] != 0) {
        *local_c = *param_1;
        iVar8 = GetPlayerRaceId(*(char *)&this->field_0024);
        *(char *)(iVar7 + 0x25 + (int)piVar3) = (char)iVar8;
        *(char *)(iVar7 + 0x2f + (int)piVar3) = (char)param_1[2];
      }
      iVar7 = iVar7 + 1;
      param_1 = param_1 + 1;
      local_c = local_c + 1;
    } while (iVar7 < 2);
    if ((((this->field_04D0 == CASE_0) || (this->field_04E8 == 0)) || (this->field_04D4 == 0)) ||
       (this->field_04EC == 0)) {
      *(undefined1 *)((int)piVar3 + 0x17) = 0;
      *(undefined1 *)((int)piVar3 + 0x16) = 0;
      *(undefined1 *)((int)piVar3 + 0x19) = 0;
      *(undefined1 *)(piVar3 + 6) = 0;
    }
    else {
      *(bool *)((int)piVar3 + 0x17) = this->field_04E0 < 100;
      *(bool *)((int)piVar3 + 0x16) = 0 < this->field_04E0;
      *(bool *)((int)piVar3 + 0x19) = (int)this->field_04E4 < 100;
      *(bool *)(piVar3 + 6) = 0 < (int)this->field_04E4;
    }
    if ((this->field_04D0 == CASE_0) || (uVar5 = 3, this->field_04E8 == 0)) {
      uVar5 = 1;
    }
    *(undefined1 *)((int)piVar3 + 0x1a) = uVar5;
    if ((this->field_04D4 == 0) || (uVar5 = 3, this->field_04EC == 0)) {
      uVar5 = 1;
    }
    *(undefined1 *)((int)piVar3 + 0x1b) = uVar5;
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case CASE_6E:
    *(undefined2 *)((int)param_1 + 0x3a) = 0;
    piVar16 = &this->field_04E0;
    iVar7 = 0x28;
    do {
      iVar8 = *piVar16;
      piVar16 = piVar16 + 1;
      *(short *)((int)param_1 + 0x3a) = *(short *)((int)param_1 + 0x3a) + (short)iVar8;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    break;
  case CASE_6F:
    iVar7 = this->field_04D0 * 0x28;
    goto LAB_004c0fbb;
  case CASE_70:
    iVar7 = this->field_04EC * 0x21;
    cVar4 = ((char)(iVar7 / 100) + (char)(iVar7 >> 0x1f)) -
            (char)((longlong)iVar7 * 0x51eb851f >> 0x3f);
    goto LAB_004c0fcc;
  case CASE_72:
    if ((this->field_04D0 == CASE_0) && (*(int *)&this->field_0x361 == 8)) {
      iVar7 = this->field_0394 * 0x21;
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
    iVar7 = this->field_04D0 * 0x21;
LAB_004c0fbb:
    iVar7 = iVar7 / 5000 + (iVar7 >> 0x1f);
cf_common_join_004C0FC5:
    cVar4 = (char)iVar7 - (char)(iVar7 >> 0x1f);
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004c0fcc:
    *(char *)(param_1 + 0xd) = cVar4;
  }
  piVar3[0x16] = 0;
  iVar7 = *(int *)&this->field_0x361;
  bVar22 = SUB41(iVar7,0);
  if (iVar7 != 0) {
    if (this->field_03B8 != 0) {
      piVar3[0x16] = 0xbb9;
      return bVar22;
    }
    if (this->field_03BC != 0) {
      piVar3[0x16] = 0xbba;
      return bVar22;
    }
    if (this->field_03C4 != 0) {
      piVar3[0x16] = 0xbbb;
      return bVar22;
    }
    if (this->field_03C8 != 0) {
      iVar7 = GetPlayerRaceId(*(char *)&this->field_0024);
      iVar7 = (-(uint)((char)iVar7 != '\x03') & 0xffffffe1) + 0xbdb;
      piVar3[0x16] = iVar7;
      return SUB41(iVar7,0);
    }
    if (this->field_03C0 != 0) {
      piVar3[0x16] = 0xbd3;
      return bVar22;
    }
    pAVar17 = (AnonPointee_TLOBaseTy_061B *)(iVar7 - CASE_1);
    bVar22 = SUB41(pAVar17,0);
    switch(pAVar17) {
    case (AnonPointee_TLOBaseTy_061B *)0x0:
      iVar7 = thunk_FUN_0044e1b0((int)this->field_0024);
      if (iVar7 == 0) {
        piVar3[0x16] = 0xbdf;
        return false;
      }
      if (*(int *)&this->field_0x369 == 9) {
        piVar3[0x16] = 0xbc4;
        return SUB41(iVar7,0);
      }
      piVar3[0x16] = (-(uint)(*(int *)&this->field_0x369 != 0x15) & 0xfffffffa) + 0xbc3;
      return SUB41(iVar7,0);
    case (AnonPointee_TLOBaseTy_061B *)0x1:
      piVar3[0x16] = 0xbbe;
      return bVar22;
    case (AnonPointee_TLOBaseTy_061B *)0x2:
      piVar3[0x16] = 0xbbf;
      return bVar22;
    case (AnonPointee_TLOBaseTy_061B *)0x3:
      piVar3[0x16] = 0xbc0;
      return bVar22;
    case (AnonPointee_TLOBaseTy_061B *)0x4:
      piVar3[0x16] = 0xbc1;
      return bVar22;
    case (AnonPointee_TLOBaseTy_061B *)0x5:
      piVar3[0x16] = 0xbc2;
      return bVar22;
    case (AnonPointee_TLOBaseTy_061B *)0x6:
      piVar3[0x16] = 0xbd2;
      return bVar22;
    case (AnonPointee_TLOBaseTy_061B *)0x7:
      piVar3[0x16] = 0xbdc;
      return bVar22;
    }
    goto switchD_004c107c_default;
  }
  if (this->field_04A0 != 0) {
    piVar3[0x16] = 0xbd4;
    return false;
  }
  pAVar17 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
  if (pAVar17 != (AnonPointee_TLOBaseTy_061B *)0x0) {
    if (pAVar17 == (AnonPointee_TLOBaseTy_061B *)0x4) {
      piVar3[0x16] = 0xbcc;
    }
    goto switchD_004c107c_default;
  }
  pAVar17 = (AnonPointee_TLOBaseTy_061B *)(this->field_05AC + ~CASE_32);
  bVar22 = SUB41(pAVar17,0);
  switch(this->field_05AC) {
  case CASE_33:
    iVar7 = thunk_FUN_004e22f0(this,0);
    if (iVar7 == 0) {
      iVar7 = thunk_FUN_004e22f0(this,1);
      pAVar17 = (AnonPointee_TLOBaseTy_061B *)0x0;
      if (iVar7 == 0) break;
    }
    piVar3[0x16] = 0xbc5;
    return SUB41(iVar7,0);
  case CASE_34:
    piVar3[0x16] = 0xbc6;
    return bVar22;
  case CASE_36:
    if (this->field_04D4 < 0x28) {
      piVar3[0x16] = 0xbc7;
      return bVar22;
    }
    break;
  case CASE_37:
    if (this->field_04D8 == 0xffff) {
      if ((int)this->field_04D0 < 100) {
        piVar3[0x16] = 0xbd5;
        return bVar22;
      }
      piVar3[0x16] = (-(uint)(this->field_042C != 0) & 0xfffffffe) + 0xbd8;
      return bVar22;
    }
    goto LAB_004c12d3;
  case CASE_3A:
    piVar3[0x16] = 0xbc9;
    return bVar22;
  case CASE_3C:
    piVar3[0x16] = 0;
    return bVar22;
  case CASE_43:
    if (this->field_04D0 == CASE_1) {
      piVar3[0x16] = 0xbca;
      return bVar22;
    }
    if (this->field_04D0 == CASE_2) {
      piVar3[0x16] = 0xbcb;
      return bVar22;
    }
    break;
  case CASE_45:
  case CASE_4E:
    if (this->field_04D0 == CASE_1) {
      piVar3[0x16] = 0xbc8;
      return bVar22;
    }
    break;
  case CASE_4C:
    if (this->field_04D0 == CASE_1) {
      piVar3[0x16] = 0xbcd;
      return bVar22;
    }
    if (this->field_04D0 == CASE_2) {
      piVar3[0x16] = 0xbce;
      return bVar22;
    }
    break;
  case CASE_4D:
    if (this->field_04D0 == CASE_1) {
      piVar3[0x16] = 0xbcf;
      return bVar22;
    }
    if (this->field_04D0 == CASE_2) {
      piVar3[0x16] = 0xbd0;
      return bVar22;
    }
    break;
  case CASE_50:
    piVar3[0x16] = 0xbd1;
    return bVar22;
  case CASE_64:
    if (this->field_04DC != 0) {
      piVar3[0x16] = 0xbdd;
      return bVar22;
    }
    break;
  case CASE_6C:
    pAVar17 = (AnonPointee_TLOBaseTy_061B *)this->field_04D8;
    if ((pAVar17 == (AnonPointee_TLOBaseTy_061B *)0xffff) &&
       (((pAVar17 = this->field_061B, pAVar17 == (AnonPointee_TLOBaseTy_061B *)0x0 ||
         (pAVar17->field_0020 != 1000)) || (pAVar17->field_04D8 == 0xffff)))) {
      iVar7 = thunk_FUN_004e9930((int)this);
      pAVar17 = (AnonPointee_TLOBaseTy_061B *)0x0;
      if ((((iVar7 != 0) &&
           (pAVar17 = this->field_061B, pAVar17 != (AnonPointee_TLOBaseTy_061B *)0x0)) &&
          (pAVar17->field_0020 == 1000)) &&
         ((pAVar17->field_04D8 == 0xffff && ((int)pAVar17->field_05B8 < g_worldGrid.sizeZ + -1)))) {
        piVar3[0x16] = 0xbe0;
        return SUB41(pAVar17,0);
      }
      piVar3[0x16] = (this->field_061B != (AnonPointee_TLOBaseTy_061B *)0x0) + 0xbd9;
      return SUB41(pAVar17,0);
    }
LAB_004c12d3:
    piVar3[0x16] = 0xbd7;
    return SUB41(pAVar17,0);
  }
switchD_004c107c_default:
  return SUB41(pAVar17,0);
switchD_004bef7c_caseD_37:
  TVar11 = this->field_04D0;
LAB_004c0ae0:
  iVar7 = (int)(TVar11 * 0x28) / 100 + ((int)(TVar11 * 0x28) >> 0x1f);
  goto cf_common_join_004C0FC5;
}

