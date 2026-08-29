#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115;CASE_FFFFFFFF=4294967295
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004B80D0 @ 004B81D4 -> read as EAX on
   every CFG path | 004B9FA0 @ 004BC524 -> read as EAX on every CFG path | 004C6C70 @ 004C6C80 ->
   read as EAX on every CFG path | 004C6D00 @ 004C6EB7 -> read as EAX on every CFG path | 004E9CE0 @
   004E9ED3 -> killed on every CFG path | 004EA6C0 @ 004EA6C0 -> killed on every CFG path */

int __thiscall TLOBaseTy::sub_004EA620(TLOBaseTy *this)

{
  TLOBaseTy_field_046CState TVar1;

  if (this->field_0245 == CASE_4) {
    TVar1 = this->field_046C;
    if (((TVar1 != 0) && (TVar1 != CASE_1)) && (TVar1 != CASE_2)) {
      return 0;
    }
    this->field_046C = 0;
    this->field_0470 = 0;
    if (this->field_0494 != 0) {
      /* ST_CALLSITE[004EA67E]: CALL 0x00401dd4; direct=00401DD4 TLOFakeTy::sub_004D0A80 */
      TLOFakeTy::sub_004D0A80(g_tLOFake_00800BCC,this->field_0480,this->field_0484,this->field_0488);
      this->field_0494 = 0;
    }
  }
  return 1;
}

