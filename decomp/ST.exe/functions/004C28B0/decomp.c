#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 0040268F
   Slots: 0x5C
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:23 calls=3
   caller_families=2 receiver_extent=1456/1571; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=3; caller_families=2;
   owner_type=/TLOBaseTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115;CASE_FFFFFFFF=4294967295
    */

void __thiscall TLOBaseTy::sub_004C28B0(TLOBaseTy *this,undefined4 *param_1)

{
  byte bVar1;

  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  STField<undefined1>(param_1,10) = 0;
  *(undefined1 *)param_1 = 1;
  /* ST_CALLSITE[004C28DA]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte((char)this->field_023D);
  STField<byte>(param_1,6) = bVar1;
  switch(this->field_0245) {
  case CASE_0:
  case CASE_1:
  case CASE_2:
  case CASE_5:
  case CASE_6:
    STField<undefined1>(param_1,1) = 0;
    break;
  case CASE_3:
  case CASE_4:
    STField<undefined1>(param_1,1) = 1;
  }
  STField<TLOBaseTy_field_05ACState>(param_1,2) = this->field_05AC;
  STField<int *>(param_1,7) = this->field_0018;
  return;
}

