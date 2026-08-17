#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::RotateSpr

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_36=54;CASE_39=57;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190
    */

int __thiscall TLOBaseTy::RotateSpr(TLOBaseTy *this,int param_1)

{
  undefined4 *puVar1;
  AnonPointee_TLOBaseTy_01F5 *pAVar2;
  TLOBaseTy *this_00;
  int iVar4;
  int iVar6;
  int iVar7;
  int iVar5;
  InternalExceptionFrame local_50;
  int local_c;
  TLOBaseTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bspr.cpp",0x1a7,0,iVar4,"%s"
                               ,"TLOBaseTy::RotateSpr error");
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Artem\\TLO_bspr.cpp",0x1a8);
      return iVar4;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (((local_8->field_0245 == CASE_1) && (local_8->field_05DF != 5)) &&
     (iVar6 = thunk_FUN_004ac910(&local_8->field_01D5,'\x04'),
     *(int *)(&DAT_007cdf52 + *(int *)(&DAT_0079125c + this_00->field_0235 * 4) * 0x32) < iVar6)) {
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  if (this_00->field_05EF != nullptr) {
    /* ST_CALLSITE[004CAC3D]: CALL 0x0040384b; direct=0040384B TLOBaseTy::sub_004CA7B0 */
    sub_004CA7B0(this_00,(uint *)0xe,param_1);
  }
  if (*(int *)(&DAT_00791a10 + this_00->field_0235 * 4) != 0) {
    /* ST_CALLSITE[004CAC5C]: CALL 0x0040384b; direct=0040384B TLOBaseTy::sub_004CA7B0 */
    sub_004CA7B0(this_00,(uint *)0x9,param_1);
    /* ST_CALLSITE[004CAC66]: CALL 0x0040384b; direct=0040384B TLOBaseTy::sub_004CA7B0 */
    sub_004CA7B0(this_00,(uint *)0x8,param_1);
    if (this_00->field_05AC == CASE_4E) {
      /* ST_CALLSITE[004CAC79]: CALL 0x0040384b; direct=0040384B TLOBaseTy::sub_004CA7B0 */
      sub_004CA7B0(this_00,(uint *)0x7,param_1);
      if (this_00->field_04D0 == CASE_1) {
        thunk_FUN_004ac660(&this_00->field_01D5,'\a');
      }
      else {
        /* ST_CALLSITE[004CAC97]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,7);
      }
    }
    if (this_00->field_05AC == CASE_72) {
      /* ST_CALLSITE[004CACAA]: CALL 0x0040384b; direct=0040384B TLOBaseTy::sub_004CA7B0 */
      sub_004CA7B0(this_00,(uint *)0x7,param_1);
      if (this_00->field_04D0 == CASE_1) {
        thunk_FUN_004ac660(&this_00->field_01D5,'\a');
      }
      else {
        /* ST_CALLSITE[004CACC8]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,7);
      }
    }
    if (this_00->field_05AC == CASE_70) {
      /* ST_CALLSITE[004CACDB]: CALL 0x0040384b; direct=0040384B TLOBaseTy::sub_004CA7B0 */
      sub_004CA7B0(this_00,(uint *)0x7,param_1);
      if (this_00->field_04D0 == CASE_1) {
        thunk_FUN_004ac660(&this_00->field_01D5,'\a');
      }
      else {
        /* ST_CALLSITE[004CACF9]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,7);
      }
    }
  }
  if (this_00->field_05F3 != 0) {
    puVar1 = &this_00->field_01D5;
    /* ST_CALLSITE[004CAD16]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar6 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\x0e');
    /* ST_CALLSITE[004CAD21]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
    /* ST_CALLSITE[004CAD2E]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    if (((iVar7 < iVar6) && (iVar6 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r'), 1 < iVar6))
       && (iVar6 = thunk_FUN_004cba10(), iVar6 == 2)) {
      pAVar2 = this_00->field_01F5;
      iVar6 = pAVar2->field_0208;
      if (iVar6 < (int)pAVar2->field_020C) {
        iVar6 = pAVar2->field_0210 - iVar6;
      }
      else {
        iVar6 = iVar6 - pAVar2->field_0210;
      }
      /* ST_CALLSITE[004CAD72]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      local_c = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\x0e');
      /* ST_CALLSITE[004CAD80]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar7 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
      if ((iVar6 < (local_c - iVar7) + -1) || ((this_00->field_01F1 & 0x2000) != 0))
      goto LAB_004cadb1;
    }
    /* ST_CALLSITE[004CADA2]: CALL 0x0040384b; direct=0040384B TLOBaseTy::sub_004CA7B0 */
    sub_004CA7B0(this_00,(uint *)0xd,param_1);
  }
LAB_004cadb1:
  if (this_00->field_05F7 != nullptr) {
    /* ST_CALLSITE[004CADC0]: CALL 0x0040384b; direct=0040384B TLOBaseTy::sub_004CA7B0 */
    sub_004CA7B0(this_00,(uint *)&DAT_0000000c,param_1);
  }
  if (this_00->field_05FF != nullptr) {
    thunk_FUN_004cbfb0((int)this_00);
  }
  switch(this_00->field_05AC) {
  case CASE_40:
  case CASE_49:
    if (this_00->field_04D0 == CASE_1) {
      thunk_FUN_004ac6b0(&this_00->field_01D5,'\x0e');
      thunk_FUN_004ac6b0(&this_00->field_01D5,'\t');
      break;
    }
  default:
    thunk_FUN_004ac660(&this_00->field_01D5,'\x0e');
    thunk_FUN_004ac660(&this_00->field_01D5,'\t');
    break;
  case CASE_52:
  case CASE_5F:
    puVar1 = &this_00->field_01D5;
    thunk_FUN_004ac6b0(puVar1,'\x0e');
    thunk_FUN_004ac6b0(puVar1,'\r');
    thunk_FUN_004ac6b0(puVar1,'\t');
    thunk_FUN_004ac6b0(puVar1,'\b');
  }
  /* ST_CALLSITE[004CAE5B]: CALL 0x0040197e; direct=0040197E TLOBaseTy::sub_004CBA30 */
  sub_004CBA30(this_00);
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

