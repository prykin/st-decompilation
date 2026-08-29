#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190
    */

undefined4 __thiscall TLOBaseTy::sub_004B9A40(TLOBaseTy *this)

{
  TLOBaseTy_field_05ACState TVar1;
  dword dVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX;

  /* ST_CALLSITE[004B9A43]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
  sub_0041C5A0(this);
  TVar1 = this->field_05AC;
  if ((((TVar1 != CASE_4D) || (this->field_04D0 == CASE_2)) &&
      ((TVar1 != CASE_4C || (this->field_04D0 == CASE_2)))) &&
     ((TVar1 != CASE_43 || (this->field_04D0 == CASE_2)))) {
    /* ST_CALLSITE[004B9A7E]: CALL dword ptr [EAX + 0x2c] */
    dVar2 = this->vfunc_2C();
    /* ST_CALLSITE[004B9A8C]: CALL 0x00402f0e; direct=00402F0E STAllPlayersC::sub_004B7710 */
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    STAllPlayersC::sub_004B7710
              (g_allPlayers_007FA174,
               STReplaceLowByte((uint32_t)(extraout_ECX), (uint8_t)(*(undefined1 *)&this->field_0024)),dVar2);
  }
  TVar1 = this->field_05AC;
  if ((TVar1 == CASE_34) || (TVar1 == CASE_5B)) {
    thunk_FUN_004de0d0(this);
  }
  else {
    if (TVar1 == CASE_48) {
      /* ST_CALLSITE[004B9AB0]: CALL 0x00404e12; direct=00404E12 TLOBaseTy::sub_004DF9F0 */
      sub_004DF9F0(this);
      return 0;
    }
    if (TVar1 == CASE_64) {
      thunk_FUN_004e4520(this);
      return 0;
    }
    if (TVar1 == CASE_62) {
      thunk_FUN_004e2970(this);
      return 0;
    }
    if (TVar1 == CASE_6E) {
      thunk_FUN_004dd350(this);
      return 0;
    }
    if (TVar1 == CASE_4D) {
      thunk_FUN_004deff0(this);
      return 0;
    }
    if (TVar1 == CASE_43) {
      thunk_FUN_004df1a0(this);
      return 0;
    }
    if (TVar1 == CASE_73) {
      thunk_FUN_004ecb60(this);
      return 0;
    }
    if (TVar1 == CASE_3A) {
      thunk_FUN_004d9700(this);
      return 0;
    }
    if (TVar1 == CASE_65) {
      thunk_FUN_004e4990(this);
      return 0;
    }
    if ((TVar1 == CASE_3B) || (TVar1 == CASE_60)) {
      thunk_FUN_004dff30(this);
      return 0;
    }
  }
  return 0;
}

