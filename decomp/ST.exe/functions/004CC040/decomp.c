
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B7F90 -> 004CC040 @ 004B804A; TLOBaseTy::sub_004B7F90 this; stable alias ESI

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190
    */

undefined4 __fastcall FUN_004cc040(TLOBaseTy *param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  switch(param_1->field_05AC) {
  case CASE_32:
  case CASE_40:
  case CASE_49:
  case CASE_5C:
    uVar1 = thunk_FUN_004d08e0();
    return uVar1;
  case CASE_45:
    uVar1 = thunk_FUN_004eaf60((int)param_1);
    return uVar1;
  case CASE_4E:
    uVar1 = thunk_FUN_004da230((int)param_1);
    return uVar1;
  case CASE_52:
  case CASE_5F:
    uVar1 = thunk_FUN_004ec6c0();
    return uVar1;
  case CASE_69:
    uVar1 = thunk_FUN_004dd240();
    break;
  case CASE_70:
    uVar1 = thunk_FUN_004d95a0((int)param_1);
    return uVar1;
  case CASE_72:
    uVar1 = thunk_FUN_004ed430((int)param_1);
    return uVar1;
  }
  return uVar1;
}

