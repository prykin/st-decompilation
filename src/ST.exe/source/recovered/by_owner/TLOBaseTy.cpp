#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/TLOBaseTy.cpp

// 00417D30 TLOBaseTy::sub_00417D30
#line 4 "decomp/ST.exe/functions/00417D30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_00417D30(TLOBaseTy *this)

{
  undefined4 uVar1;
  int iVar2;

  if (this->field_002C == 0) {
    uVar1 = st::fn_00404EC1(this->field_0047,this->field_0049,this->field_004B,this->field_008E,
                               (AnonShape_00495FF0_59081BDD *)this);
    return uVar1;
  }
  iVar2 = st::fn_00404EC1(this->field_0047,this->field_0049,this->field_004B,this->field_008E,
                             (AnonShape_00495FF0_59081BDD *)this);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = st::fn_00404EC1(this->field_0047 + 1,this->field_0049,this->field_004B,this->field_008E
                             ,(AnonShape_00495FF0_59081BDD *)this);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = st::fn_00404EC1(this->field_0047,this->field_0049 + 1,this->field_004B,this->field_008E
                             ,(AnonShape_00495FF0_59081BDD *)this);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  uVar1 = st::fn_00404EC1(this->field_0047 + 1,this->field_0049 + 1,this->field_004B,
                             this->field_008E,(AnonShape_00495FF0_59081BDD *)this);
  return uVar1;
}

// 00419D30 TLOBaseTy::sub_00419D30
#line 4 "decomp/ST.exe/functions/00419D30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00419D30(TLOBaseTy *this,int param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_0040494E
            (g_allPlayers_007FA174,0,(int *)this->field_0024,
             STReplaceLowWord((uint32_t)(in_EAX), (uint16_t)(this->field_0032)));
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  st::fn_004019A6(0,(int *)this->field_0024,CONCAT22(extraout_var_00,this->field_0032));
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  st::fn_004020AE
            (g_allPlayers_007FA174,*(char *)&this->field_0024,
             CONCAT22(extraout_var,this->field_0030),CONCAT22(extraout_var_01,this->field_0032),
             (int *)this,param_1);
  return;
}

// 0041D590 TLOBaseTy::sub_0041D590
#line 4 "decomp/ST.exe/functions/0041D590/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0041D590(TLOBaseTy *this)

{
  if ((g_visibleClass_00802A88 != nullptr) && ((this->field_01D1 & 1) == 0)) {
    st::fn_00401FD2
              (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
               (undefined *)(int)this->field_005F,(uint)this->field_0024,
               (undefined *)this->field_0101,0x19);
  }
  return;
}

// 004B7EF0 TLOBaseTy::TLOBaseTy
#line 4 "decomp/ST.exe/functions/004B7EF0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790AA0 (store 004B7F47)
   Evidence: final_vptr=00790AA0; returns_this=true; calls_before=2; field_writes_after=3;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 004B7EF0 returns TLOBaseTy::TLOBaseTy this @ 004B7F63

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115;CASE_FFFFFFFF=4294967295
    */

TLOBaseTy * __thiscall st::fn_004B7EF0(TLOBaseTy *this)

{
  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = st::machine_word_boundary_cast<undefined4>(&st_global_00790C00);
  this->field_05EF = nullptr;
  this->field_05F3 = 0;
  this->field_05F7 = nullptr;
  this->field_05FF = nullptr;
  this->field_0603 = nullptr;
  this->field_0607 = nullptr;
  this->field_0251 = 0;
  this->field_061B = nullptr;
  this->field_061F = nullptr;
  this->vtable = &st_global_00790AA0;
  this->field_0245 = CASE_FFFFFFFF;
  this->field_0249 = 0xffffffff;
  this->field_024D = 0xffffffff;
  return this;
}

// 004B7F90 TLOBaseTy::sub_004B7F90
#line 4 "decomp/ST.exe/functions/004B7F90/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115;CASE_FFFFFFFF=4294967295
    */

undefined4 __thiscall st::fn_004B7F90(TLOBaseTy *this,int param_1)

{
  TLOBaseTy_field_046CState TVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  switch(this->field_0245) {
  case CASE_0:
    if (((this->field_0255 != 0) && (param_1 == 2)) && (this->field_0259 != 0)) {
      return 0;
    }
    break;
  case CASE_4:
    if ((this->field_03DC != 0) ||
       (((TVar1 = this->field_046C, TVar1 != 0 && (TVar1 != CASE_1)) && (TVar1 != CASE_2)))) {
      uVar3 = 0;
      goto cf_common_exit_004B8058;
    }
    break;
  case CASE_5:
    if (((param_1 != 0) && (param_1 != 1)) && (param_1 != 6)) goto cf_common_exit_004B8058;
    break;
  case CASE_FFFFFFFF:
    goto switchD_004b7fa6_caseD_ffffffff;
  }
  iVar2 = st::fn_004042AF(&this->field_01D5,'\x0e');
  if ((iVar2 == this->field_01F5->field_0208) ||
     (iVar2 = st::fn_004042AF(&this->field_01D5,'\x0e'), iVar2 == this->field_01F5->field_020C))
  {
    if (*(int *)(&DAT_00791a10 + this->field_0235 * 4) == 0) {
switchD_004b7fa6_caseD_ffffffff:
      uVar3 = 1;
    }
    else {
      uVar3 = st::fn_00405515(this);
    }
  }
cf_common_exit_004B8058:
  if (param_1 != 3) {
    return uVar3;
  }
  uVar3 = st::fn_004015A5(this,1);
  return uVar3;
}

// 004B98E0 TLOBaseTy::sub_004B98E0
#line 4 "decomp/ST.exe/functions/004B98E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 004B98E0 returns zeroed full register at 004B98FD @ 004B9900 */

uint __thiscall st::fn_004B98E0(TLOBaseTy *this,int param_1)

{
  if (this->field_0255 != 0) {
    this->field_0259 = param_1;
    st::fn_00402CF7(this,1);
  }
  return 0;
}

// 004B9A40 TLOBaseTy::sub_004B9A40
#line 4 "decomp/ST.exe/functions/004B9A40/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190
    */

undefined4 __thiscall st::fn_004B9A40(TLOBaseTy *this)

{
  TLOBaseTy_field_05ACState TVar1;
  dword dVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX;

  st::fn_0040464C(this);
  TVar1 = this->field_05AC;
  if ((((TVar1 != CASE_4D) || (this->field_04D0 == CASE_2)) &&
      ((TVar1 != CASE_4C || (this->field_04D0 == CASE_2)))) &&
     ((TVar1 != CASE_43 || (this->field_04D0 == CASE_2)))) {
    dVar2 = this->slot_2C();
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    st::fn_00402F0E(STReplaceLowByte((uint32_t)(extraout_ECX), (uint8_t)(*(undefined1 *)&this->field_0024)),
                       dVar2);
  }
  TVar1 = this->field_05AC;
  if ((TVar1 == CASE_34) || (TVar1 == CASE_5B)) {
    st::fn_0040303A(this);
  }
  else {
    if (TVar1 == CASE_48) {
      st::fn_00404E12(this);
      return 0;
    }
    if (TVar1 == CASE_64) {
      st::fn_004032E2(this);
      return 0;
    }
    if (TVar1 == CASE_62) {
      st::fn_00403A08(this);
      return 0;
    }
    if (TVar1 == CASE_6E) {
      st::fn_00403C65(this);
      return 0;
    }
    if (TVar1 == CASE_4D) {
      st::fn_0040385F(this);
      return 0;
    }
    if (TVar1 == CASE_43) {
      st::fn_00405E11(this);
      return 0;
    }
    if (TVar1 == CASE_73) {
      st::fn_00405B91(this);
      return 0;
    }
    if (TVar1 == CASE_3A) {
      st::fn_004027F7(this);
      return 0;
    }
    if (TVar1 == CASE_65) {
      st::fn_004025C2(this);
      return 0;
    }
    if ((TVar1 == CASE_3B) || (TVar1 == CASE_60)) {
      st::fn_0040481D(this);
      return 0;
    }
  }
  return 0;
}

// 004BE0F0 TLOBaseTy::FUN_004be0f0
#line 4 "decomp/ST.exe/functions/004BE0F0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00403FB2
   Slots: 0x2C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_004BE0F0(TLOBaseTy *this)

{
  return this->field_05AC;
}

// 004BE140 TLOBaseTy::FUN_004be140
#line 4 "decomp/ST.exe/functions/004BE140/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00404214
   Slots: 0xF8
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_004BE140(TLOBaseTy *this)

{
  return (uint)(this->field_0245 != CASE_1);
}

// 004BE160 TLOBaseTy::FUN_004be160
#line 4 "decomp/ST.exe/functions/004BE160/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00404F02
   Slots: 0xC4
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_004BE160(TLOBaseTy *this)

{
  return this->field_05DB;
}

// 004BE220 TLOBaseTy::FUN_004be220
#line 4 "decomp/ST.exe/functions/004BE220/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00404DEA
   Slots: 0x6C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_004BE220(TLOBaseTy *this)

{
  return this->field_05C0;
}

// 004BE450 TLOBaseTy::FUN_004be450
#line 4 "decomp/ST.exe/functions/004BE450/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00401A64
   Slots: 0x78
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_004BE450(TLOBaseTy *this)

{
  return this->field_0241;
}

// 004BEA70 TLOBaseTy::FUN_004bea70
#line 4 "decomp/ST.exe/functions/004BEA70/decomp.c"
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

bool __thiscall st::fn_004BEA70(TLOBaseTy *this,int *param_1)

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
  bVar5 = st::fn_004049B7(*(char *)&this->field_023D);
  *(byte *)(param_1 + 1) = bVar5;
  if (((this->field_01D1 & 4) == 0) && (this->field_0420 == 0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  STField<undefined1>(param_1,7) = uVar7;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)&this->field_021D;
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
  iVar20 = st::fn_00401F5A(this->field_05AC);
  if (iVar20 == 3) {
    bVar5 = st::fn_004049B7(*(char *)&this->field_0024);
    if (bVar5 != 3) {
LAB_004beb5f:
      STField<undefined1>(param_1,5) = 3;
      goto LAB_004beb63;
    }
LAB_004beb6d:
    STField<undefined1>(param_1,9) = 0x33;
    if (((this->field_0245 == CASE_0) && (local_EAX_269 = st::fn_00403594(this), local_EAX_269 != 0))
       && (iVar21 = st::fn_00405330((int)this->field_0024), iVar21 != 0)) {
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
    bVar5 = st::fn_004049B7(*(char *)&this->field_0024);
    if (bVar5 == 3) goto LAB_004beb5f;
LAB_004beb63:
    if ((iVar20 != 1) && (iVar20 != 2)) goto LAB_004beb6d;
    if (*(int *)&this->field_0x361 != 5) {
      STField<undefined1>(param_1,9) = 0x20;
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
  pAVar9 = st::fn_00401DC5(*(char *)&this->field_0024);
  if (pAVar9 == nullptr) {
    STField<undefined1>(param_1,0x15) = 0;
  }
  else {
    pSVar10 = st::fn_00405CF9(*(char *)&this->field_0024,this->field_0030);
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
      local_EAX_2427 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_2466 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_2466 = (int)(byte)local_EAX_2466;
      if ((&DAT_007e1984)[local_EAX_2466 + ((uint)(byte)local_EAX_2427 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bf427;
LAB_004bf438:
      uVar7 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar7;
    STField<undefined1>(param_1,0xb) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_2535 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_2574 = st::fn_004049B7(*(char *)&this->field_0024);
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
      local_EAX_2318 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_2357 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_2357 = (int)(byte)local_EAX_2357;
      if ((&DAT_007e1984)[local_EAX_2357 + ((uint)(byte)local_EAX_2318 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    pAVar18 = (AnonPointee_TLOBaseTy_061B *)this->field_0245;
    goto joined_r0x004bfcb7;
  case CASE_35:
    STField<undefined1>(param_1,10) = 0x21;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_1613 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_1652 = st::fn_004049B7(*(char *)&this->field_0024);
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
      local_EAX_2207 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_2246 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_2246 = (int)(byte)local_EAX_2246;
      if ((&DAT_007e1984)[local_EAX_2246 + ((uint)(byte)local_EAX_2207 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_04D8 != 0xffff) goto cf_common_join_004C0278;
    goto cf_common_join_004BEF5A;
  case CASE_3A:
    STField<undefined1>(param_1,10) = 0x22;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_2098 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_2137 = st::fn_004049B7(*(char *)&this->field_0024);
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
        local_EAX_3286 = st::fn_004049B7((char)(byte *)this->field_023D);
        iVar21 = this->field_0235;
        local_EAX_3325 = st::fn_004049B7(*(char *)&this->field_0024);
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
    *(undefined1 *)(param_1 + 4) = uVar7;
    STField<undefined1>(param_1,0xb) = 0x29;
    if (this->field_0245 != CASE_0) goto cf_common_join_004C01F3;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_3424 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_3463 = st::fn_004049B7(*(char *)&this->field_0024);
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
      uVar7 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar7;
switchD_004bec4d_caseD_36:
    local_EAX_607 = st::fn_004049B7(*(char *)&this->field_0024);
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
         (iVar21 = st::fn_0040186B((int)this->field_0024,iVar21), iVar21 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 4) = uVar7;
    }
    local_EAX_725 = st::fn_004049B7(*(char *)&this->field_0024);
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
    local_EAX_770 = st::fn_004049B7(*(char *)&this->field_023D);
    if (*(int *)(&DAT_00791b14 + ((uint)(byte)local_EAX_770 + this->field_0235 * 3) * 4) != 0) {
      if (((iVar21 == 0) || (iVar11 = st::fn_0040186B((int)this->field_0024,iVar21), iVar11 == 0)
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
        *(undefined1 *)(param_1 + 3) = 0x16;
        if ((this->field_0245 != CASE_4) || (iVar21 = st::fn_004015A5(this,0), iVar21 == 0))
        goto LAB_004bee65;
        uVar7 = 1;
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0x15;
        if (((iVar21 == 0) ||
            (iVar21 = st::fn_0040186B((int)this->field_0024,iVar21), iVar21 == 0)) ||
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
      *(undefined1 *)(param_1 + 5) = uVar7;
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
         (local_EAX_2980 = st::fn_00405ACE(this,1,9,1,0,1), local_EAX_2980 == 0)) goto LAB_004bf624;
      uVar7 = 1;
    }
    else {
      local_EAX_2898 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_2937 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_2937 = (int)(byte)local_EAX_2937;
      if ((&DAT_007e1984)[local_EAX_2937 + ((uint)(byte)local_EAX_2898 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bf5fe;
LAB_004bf624:
      uVar7 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar7;
    STField<undefined1>(param_1,0xb) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_3027 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_3066 = st::fn_004049B7(*(char *)&this->field_0024);
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
      local_EAX_1973 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_2012 = st::fn_004049B7(*(char *)&this->field_0024);
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
      local_EAX_3144 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_3183 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_3183 = (int)(byte)local_EAX_3183;
      if ((&DAT_007e1984)[local_EAX_3183 + ((uint)(byte)local_EAX_3144 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (this->field_0245 == CASE_0) {
      iVar21 = 0x19;
LAB_004bf708:
      iVar21 = st::fn_0040186B((int)this->field_0024,iVar21);
      if (iVar21 != 0) goto cf_common_join_004BEF5A;
    }
    goto cf_common_join_004C0278;
  case CASE_45:
    STField<undefined1>(param_1,10) = 0x1a;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_1167 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_1206 = st::fn_004049B7(*(char *)&this->field_0024);
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
         (local_EAX_2734 = st::fn_00405ACE(this,1,0x15,1,0,1), local_EAX_2734 == 0)) goto LAB_004bf52e;
      uVar7 = 1;
    }
    else {
      local_EAX_2652 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_2691 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_2691 = (int)(byte)local_EAX_2691;
      if ((&DAT_007e1984)[local_EAX_2691 + ((uint)(byte)local_EAX_2652 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bf508;
LAB_004bf52e:
      uVar7 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar7;
    STField<undefined1>(param_1,0xb) = 0x26;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_2781 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_2820 = st::fn_004049B7(*(char *)&this->field_0024);
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
        local_EAX_1848 = st::fn_004049B7((char)(byte *)this->field_023D);
        iVar21 = this->field_0235;
        local_EAX_1887 = st::fn_004049B7(*(char *)&this->field_0024);
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
      local_EAX_1739 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_1778 = st::fn_004049B7(*(char *)&this->field_0024);
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
          (iVar21 = st::fn_0040186B((int)this->field_0024,0x31), iVar21 == 0)) ||
         ((this->field_04D0 != CASE_0 || (*(int *)&this->field_0x361 != 0)))) goto LAB_004bf02b;
      uVar7 = 1;
    }
    else {
      local_EAX_1349 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_1388 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_1388 = (int)(byte)local_EAX_1388;
      if ((&DAT_007e1984)[local_EAX_1388 + ((uint)(byte)local_EAX_1349 + iVar21 * 3) * 3] != '\0')
      goto LAB_004beff1;
LAB_004bf02b:
      uVar7 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar7;
    STField<undefined1>(param_1,0xb) = 0x19;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_1496 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_1535 = st::fn_004049B7(*(char *)&this->field_0024);
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
      local_EAX_3527 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_3566 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_3566 = (int)(byte)local_EAX_3566;
      if ((&DAT_007e1984)[local_EAX_3566 + ((uint)(byte)local_EAX_3527 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bf873;
LAB_004bf884:
      uVar7 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar7;
    STField<undefined1>(param_1,0xb) = 0x31;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_3635 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_3674 = st::fn_004049B7(*(char *)&this->field_0024);
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
      local_EAX_3752 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_3791 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_3791 = (int)(byte)local_EAX_3791;
      if ((&DAT_007e1984)[local_EAX_3791 + ((uint)(byte)local_EAX_3752 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bf954;
LAB_004bf965:
      uVar7 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar7;
    STField<undefined1>(param_1,0xb) = 0x39;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bf9c0:
      if (((this->field_0245 != CASE_0) || (*(int *)&this->field_0x361 != 0)) ||
         (g_packedRecords_A62x8[(int)this->field_0024].field1982_0xa0e != 0)) goto LAB_004bf9f7;
      uVar7 = 1;
    }
    else {
      local_EAX_3860 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_3899 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_3899 = (int)(byte)local_EAX_3899;
      if ((&DAT_007e1984)[local_EAX_3899 + ((uint)(byte)local_EAX_3860 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bf9c0;
LAB_004bf9f7:
      uVar7 = 0;
    }
    STField<undefined1>(param_1,0x11) = uVar7;
    *(undefined1 *)(param_1 + 3) = 0x46;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_4004 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_4043 = st::fn_004049B7(*(char *)&this->field_0024);
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
      local_EAX_4947 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_4986 = st::fn_004049B7(*(char *)&this->field_0024);
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
      local_EAX_4382 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_4421 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_4421 = (int)(byte)local_EAX_4421;
      if ((&DAT_007e1984)[local_EAX_4421 + ((uint)(byte)local_EAX_4382 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bfbca;
LAB_004bfbdb:
      uVar7 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar7;
    STField<undefined1>(param_1,0xb) = 0x37;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_4490 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_4529 = st::fn_004049B7(*(char *)&this->field_0024);
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
      local_EAX_4716 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_4755 = st::fn_004049B7(*(char *)&this->field_0024);
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
      local_EAX_5828 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_5867 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_5867 = (int)(byte)local_EAX_5867;
      if ((&DAT_007e1984)[local_EAX_5867 + ((uint)(byte)local_EAX_5828 + iVar21 * 3) * 3] != '\0')
      goto LAB_004c0170;
LAB_004c0181:
      uVar7 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar7;
    STField<undefined1>(param_1,0xb) = 0x31;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_5936 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_5975 = st::fn_004049B7(*(char *)&this->field_0024);
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
      local_EAX_4838 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_4877 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_4877 = (int)(byte)local_EAX_4877;
      if ((&DAT_007e1984)[local_EAX_4877 + ((uint)(byte)local_EAX_4838 + iVar21 * 3) * 3] == '\0')
      goto cf_common_join_004C0278;
    }
    if (0 < (int)this->field_04E0[0xe]) goto LAB_004bf17b;
    goto cf_common_join_004C0278;
  case CASE_64:
    STField<undefined1>(param_1,10) = 0x40;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_4607 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_4646 = st::fn_004049B7(*(char *)&this->field_0024);
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
    STField<undefined1>(param_1,10) = 0x52;
    if ((this->field_0245 == CASE_0) || (this->field_0245 == CASE_5)) goto cf_common_join_004BEF5A;
    uVar7 = 0;
    goto LAB_004bef5f;
  case CASE_6C:
    STField<undefined1>(param_1,10) = 0x3e;
    if (this->field_0024 != (byte *)this->field_023D) {
      local_EAX_5062 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_5101 = st::fn_004049B7(*(char *)&this->field_0024);
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
      local_EAX_5177 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_5216 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_5216 = (int)(byte)local_EAX_5216;
      if ((&DAT_007e1984)[local_EAX_5216 + ((uint)(byte)local_EAX_5177 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bfee5;
LAB_004bff0a:
      uVar7 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar7;
    STField<undefined1>(param_1,0xb) = 0x38;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bff65:
      if ((this->field_0245 != CASE_0) || (this->field_04D0 == CASE_0)) goto LAB_004bff80;
      uVar7 = 1;
    }
    else {
      local_EAX_5305 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_5344 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_5344 = (int)(byte)local_EAX_5344;
      if ((&DAT_007e1984)[local_EAX_5344 + ((uint)(byte)local_EAX_5305 + iVar21 * 3) * 3] != '\0')
      goto LAB_004bff65;
LAB_004bff80:
      uVar7 = 0;
    }
    STField<undefined1>(param_1,0x11) = uVar7;
    *(undefined1 *)(param_1 + 3) = 0x45;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004bffdb:
      if ((this->field_0245 == CASE_0) && (this->field_04D4 != 0)) {
        STField<undefined1>(param_1,0x12) = 1;
        break;
      }
    }
    else {
      local_EAX_5423 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_5462 = st::fn_004049B7(*(char *)&this->field_0024);
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
        local_EAX_4267 = st::fn_004049B7((char)(byte *)this->field_023D);
        iVar21 = this->field_0235;
        local_EAX_4306 = st::fn_004049B7(*(char *)&this->field_0024);
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
        local_EAX_4145 = st::fn_004049B7((char)(byte *)this->field_023D);
        iVar21 = this->field_0235;
        local_EAX_4184 = st::fn_004049B7(*(char *)&this->field_0024);
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
    *(undefined1 *)(param_1 + 4) = uVar7;
    break;
  case CASE_72:
    STField<undefined1>(param_1,10) = 0x34;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004c005c:
      if (this->field_0261 == 0) goto LAB_004c006d;
      uVar7 = 1;
    }
    else {
      local_EAX_5552 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      local_EAX_5591 = st::fn_004049B7(*(char *)&this->field_0024);
      local_EAX_5591 = (int)(byte)local_EAX_5591;
      if ((&DAT_007e1984)[local_EAX_5591 + ((uint)(byte)local_EAX_5552 + iVar21 * 3) * 3] != '\0')
      goto LAB_004c005c;
LAB_004c006d:
      uVar7 = 0;
    }
    *(undefined1 *)(param_1 + 4) = uVar7;
    STField<undefined1>(param_1,0xb) = 0x4f;
    if (this->field_0024 == (byte *)this->field_023D) {
LAB_004c00cc:
      if ((((this->field_0245 == CASE_0) &&
           (iVar21 = st::fn_0040186B((int)this->field_0024,0x75), iVar21 != 0)) &&
          (this->field_04D0 == CASE_0)) && (*(int *)&this->field_0x361 == 0)) {
        STField<undefined1>(param_1,0x11) = 1;
        break;
      }
    }
    else {
      uVar13 = st::fn_004049B7((char)(byte *)this->field_023D);
      iVar21 = this->field_0235;
      uVar14 = st::fn_004049B7(*(char *)&this->field_0024);
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
      bVar5 = st::fn_004049B7(*(char *)&this->field_0024);
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
      bVar5 = st::fn_004049B7(*(char *)&this->field_0024);
      STField<byte>(param_1,0x25) = bVar5;
      if (this->field_05AC == CASE_40) {
        local_EAX_7199 = st::fn_00401B59(this,1,9,-1);
        STField<char>(param_1,0x31) = (char)local_EAX_7199;
        if ((*(int *)&this->field_0x361 == 1) && (*(int *)&this->field_0x369 == 9)) {
          STField<char>(param_1,0x31) = this->field_0x36d + (char)local_EAX_7199;
        }
      }
      else if (this->field_05AC == CASE_49) {
        local_EAX_7141 = st::fn_00401B59(this,1,0x15,-1);
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
    param_1 = nullptr;
    piVar25 = st::pointer_boundary_cast<int *>(&this->field_04D8);
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
        bVar5 = st::fn_004049B7(*(char *)&this->field_0024);
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
              *(undefined1 *)(param_1 + 7) = 1;
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
              *(undefined1 *)(param_1 + 10) = 1;
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
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0x9a:
              *(undefined1 *)(param_1 + 0xd) = 1;
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
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xa9:
              *(undefined1 *)(param_1 + 0x10) = 1;
              *(undefined2 *)(param_1 + 0x11) = uVar24;
              STField<short>(param_1,0x42) = (short)puVar17[-2];
              STField<char>(param_1,0x41) = (char)*puVar17;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xab:
              *(undefined1 *)(param_1 + 0x13) = 1;
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
      *(undefined1 *)(param_1 + 0xf) = this->field_0x369;
      if (*(byte *)((int)&DAT_00798fd8 + *(int *)&this->field_0x369) < 2) {
        cVar6 = '\0';
      }
      else {
        uVar15 = st::fn_0040186B((int)this->field_0024,*(int *)&this->field_0x369);
        cVar6 = (char)uVar15 + '\x01';
      }
      STField<char>(param_1,0x3d) = cVar6;
      STField<char>(param_1,0x3e) = (char)this->field_0394;
      STField<short>(param_1,0x27) = (short)this->field_0398 - *(short *)&this->field_03A8;
      STField<undefined2>(param_1,0x2b) = 0xffff;
    }
    else {
      *(undefined1 *)(param_1 + 0xf) = 0;
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
            iVar21 = st::fn_0040186B((int)this->field_0024,(int)param_1);
            local_EAX_6785 = st::fn_00402342((int)this->field_0024,(int)param_1,iVar21 + 1);
          }
          else {
            local_EAX_6785 = st::fn_0040524F((int)this->field_0024,(uint)param_1);
          }
          if (local_EAX_6785 != 0) {
            uVar7 = st::fn_0040530D((int)this->field_0024,(int)param_1);
            iVar21 = st::fn_0040186B((int)this->field_0024,(int)param_1);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (((iVar21 < CONCAT31(extraout_var_01,uVar7)) &&
                (local_EAX_6887 = st::fn_00401E1F((int)this->field_0024,(uint)param_1),
                local_EAX_6887 == 0)) &&
               (((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0' ||
                (bVar25 = st::fn_00403396(this->field_0024,(uint)param_1),
                CONCAT31(extraout_var_02,bVar25) != 0)))) {
              STField<short>(piVar4,0x3a) = STField<short>(piVar4,0x3a) + 1;
            }
          }
          param_1 = (int *)((int)param_1 + 1);
        } while ((int)param_1 < 0x9b);
      }
      else if ((&DAT_0079a3fc)[(TVar3 * 3 + -0xfc) * 5] != 0) {
        local_c = st::pointer_boundary_cast<int *>(&DAT_0079a3fc + (TVar3 * 3 + -0xfc) * 5);
        do {
          if (0xe < (int)param_1) break;
          if ((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0') {
            iVar21 = st::fn_0040186B((int)this->field_0024,(int)param_1);
            local_EAX_6574 = st::fn_00402342((int)this->field_0024,(int)param_1,iVar21 + 1);
          }
          else {
            local_EAX_6574 = st::fn_0040524F((int)this->field_0024,(uint)param_1);
          }
          if (local_EAX_6574 != 0) {
            uVar7 = st::fn_0040530D((int)this->field_0024,(int)param_1);
            iVar21 = st::fn_0040186B((int)this->field_0024,(int)param_1);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (((iVar21 < CONCAT31(extraout_var,uVar7)) &&
                (local_EAX_6676 = st::fn_00401E1F((int)this->field_0024,(uint)param_1),
                local_EAX_6676 == 0)) &&
               (((&PTR_DAT_007bfc04)[this->field_0239][(int)param_1] == '\0' ||
                (local_AL_6715 = st::fn_00403396(this->field_0024,(uint)param_1),
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
    iVar21 = st::machine_word_boundary_cast<int>(this->field_04D4 * 0x28);
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
    iVar21 = st::machine_word_boundary_cast<int>(this->field_04D0 * 400);
    STField<short>(param_1,0x3f) =
         ((short)(iVar21 / 100) + (short)(iVar21 >> 0x1f)) -
         (short)((longlong)iVar21 * 0x51eb851f >> 0x3f);
    local_EAX_7518 = st::fn_004023E7();
    STField<char>(param_1,0x45) = (char)local_EAX_7518;
    if (this->field_04E0[1] == 0) {
      local_EAX_7579 = st::fn_0040532B();
      STField<char>(param_1,0x46) = (char)local_EAX_7579;
    }
    else {
      local_EAX_7542 = st::fn_0040532B();
      iVar21 = st::fn_00401267();
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
      local_EAX_8404 = st::fn_004049B7(*(char *)&this->field_0024);
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
      iVar21 = st::fn_0040186B((int)this->field_0024,iVar21);
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
    *(undefined1 *)(param_1 + 7) = 0xff;
    goto switchD_004bef7c_caseD_37;
  case CASE_43:
  case CASE_4C:
    *(char *)(param_1 + 7) = (char)this->field_04E0[0];
    iVar21 = st::machine_word_boundary_cast<int>(this->field_04D8 * 0x28);
    iVar21 = iVar21 / 10000 + (iVar21 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case CASE_44:
    if (*(int *)&this->field_0x361 == 6) {
      STField<undefined4>(param_1,0x1d) = 1;
      STField<char>(param_1,0x2f) = (char)this->field_0394;
      STField<short>(param_1,0x27) = (short)this->field_03A0 - *(short *)&this->field_03B0;
      STField<short>(param_1,0x2b) = (short)this->field_039C - *(short *)&this->field_03AC;
      bVar5 = st::fn_004049B7(*(char *)&this->field_0024);
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
        *(undefined1 *)(param_1 + 0xd) = 0x28;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 0xff;
      }
      break;
    }
    TVar12 = this->field_0394;
    goto LAB_004c0ae0;
  case CASE_48:
    iVar21 = st::machine_word_boundary_cast<int>(this->field_04D0 * 0x28);
    iVar21 = iVar21 / 500 + (iVar21 >> 0x1f);
    goto cf_common_join_004C0FC5;
  case CASE_4D:
    iVar21 = st::machine_word_boundary_cast<int>(this->field_04D4 * 0x28);
    cVar6 = ((char)(iVar21 / 5000) + (char)(iVar21 >> 0x1f)) -
            (char)((longlong)iVar21 * 0x68db8bad >> 0x3f);
    goto LAB_004c0fcc;
  case CASE_4E:
    TVar12 = this->field_04D0;
    if ((TVar12 != CASE_0) || (*(int *)&this->field_0x361 != 4)) goto LAB_004c0285;
    iVar21 = st::machine_word_boundary_cast<int>(this->field_0394 * 0x28);
LAB_004c0f8e:
    cVar6 = ((char)(iVar21 / 100) + (char)(iVar21 >> 0x1f)) -
            (char)((longlong)iVar21 * 0x51eb851f >> 0x3f);
    goto LAB_004c0fcc;
  case CASE_50:
    *(undefined1 *)(param_1 + 7) =
         *(undefined1 *)&g_packedRecords_A62x8[(int)this->field_0024].field1942_0x97a;
    STField<undefined1>(param_1,0x1d) =
         *(undefined1 *)&g_packedRecords_A62x8[(int)this->field_0024].field1943_0x97e;
    STField<undefined1>(param_1,0x1e) =
         *(undefined1 *)&g_packedRecords_A62x8[(int)this->field_0024].field1944_0x982;
    STField<undefined1>(param_1,0x1f) =
         *(undefined1 *)&g_packedRecords_A62x8[(int)this->field_0024].field1945_0x986;
    *(undefined1 *)(param_1 + 8) =
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
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xad:
              *(undefined1 *)(param_1 + 0xd) = 1;
              *(undefined2 *)(param_1 + 0xe) = uVar24;
              STField<short>(param_1,0x36) = (short)puVar17[-2];
              STField<char>(param_1,0x35) = (char)*puVar17;
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0xae:
              *(undefined1 *)(param_1 + 0x10) = 1;
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
              *(undefined1 *)(param_1 + 10) = 1;
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
              *(undefined1 *)(param_1 + 7) = 1;
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
    iVar21 = st::machine_word_boundary_cast<int>(this->field_04D4 * 0x21);
    iVar21 = iVar21 / 0x28 + (iVar21 >> 0x1f);
    goto cf_common_join_004C0FC5;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case CASE_61:
    *(char *)(param_1 + 0xd) = (char)((int)(this->field_04E0[0xe] * 0x21) / DAT_007be8c4);
    if (this->field_04E0[0x10] == 0) {
      STField<undefined1>(param_1,0x35) = 0;
    }
    else {
      STField<char>(param_1,0x35) =
           (char)((int)(this->field_04E0[0] * 100) / (int)this->field_04E0[0x10]);
    }
    break;
  case CASE_62:
    local_EAX_9086 = st::fn_004036A7((int)this->field_0024);
    STField<uint>(param_1,0x1d) = local_EAX_9086;
    local_EAX_9104 = st::fn_00405D80((int)this->field_0024);
    STField<int>(param_1,0x21) = local_EAX_9104;
    break;
  case CASE_64:
    TVar12 = this->field_04D0;
    STField<undefined4>(param_1,0x21) = 100;
    STField<TLOBaseTy_field_04D0State>(param_1,0x1d) = TVar12;
    break;
  case CASE_68:
    *(undefined1 *)(param_1 + 7) = 0x21;
    STField<int>(param_1,0x1d) = (this->field_04D4 * 0x21) / 200;
    break;
  case CASE_6D:
    local_c = (int *)((int)param_1 + 0x1d);
    iVar21 = 0;
    param_1 = st::pointer_boundary_cast<int *>(&this->field_04D8);
    do {
      if (param_1[-2] != 0) {
        *local_c = *param_1;
        bVar5 = st::fn_004049B7(*(char *)&this->field_0024);
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
      *(undefined1 *)(piVar4 + 6) = 0;
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
    iVar21 = st::machine_word_boundary_cast<int>(this->field_04D0 * 0x28);
    goto LAB_004c0fbb;
  case CASE_70:
    iVar21 = st::machine_word_boundary_cast<int>(this->field_04E0[3] * 0x21);
    cVar6 = ((char)(iVar21 / 100) + (char)(iVar21 >> 0x1f)) -
            (char)((longlong)iVar21 * 0x51eb851f >> 0x3f);
    goto LAB_004c0fcc;
  case CASE_72:
    if ((this->field_04D0 == CASE_0) && (*(int *)&this->field_0x361 == 8)) {
      iVar21 = st::machine_word_boundary_cast<int>(this->field_0394 * 0x21);
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
    iVar21 = st::machine_word_boundary_cast<int>(this->field_04D0 * 0x21);
LAB_004c0fbb:
    iVar21 = iVar21 / 5000 + (iVar21 >> 0x1f);
cf_common_join_004C0FC5:
    cVar6 = (char)iVar21 - (char)(iVar21 >> 0x1f);
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004c0fcc:
    *(char *)(param_1 + 0xd) = cVar6;
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
      bVar5 = st::fn_004049B7(*(char *)&this->field_0024);
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
    case nullptr:
      local_EAX_9757 = st::fn_00402815((int)this->field_0024);
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
    uVar17 = st::fn_00404A9D(this,0);
    if (uVar17 == 0) {
      uVar17 = st::fn_00404A9D(this,1);
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
      local_EAX_10456 = st::fn_00404160((int)this);
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

// 004C2F70 TLOBaseTy::sub_004C2F70
#line 4 "decomp/ST.exe/functions/004C2F70/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004C2F70(TLOBaseTy *this)

{
  int iVar1;
  AnonShape_0060A470_93FA2EC1 *local_8;

  local_8 = nullptr;
  if ((*(int *)(&DAT_007951b4 + this->field_0235 * 4) != 0) && (this->field_0408 != 0)) {
    iVar1 = st::fn_006E62D0(g_playSystem_00802A38,this->field_040C,(int *)&local_8);
    if (iVar1 == 0) {
      if (this->field_021D != 0) {
        st::fn_00403580(local_8,1);
        return 0;
      }
      st::fn_00403CE7(local_8);
    }
  }
  return 0;
}

// 004C34A0 TLOBaseTy::sub_004C34A0
#line 4 "decomp/ST.exe/functions/004C34A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=9; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004C34A0(TLOBaseTy *this,int param_1)

{
  int iVar1;

  iVar1 = st::machine_word_boundary_cast<int>(this->field_0259 / 0xf);
  if (*(int *)(&DAT_007be8c8 + (param_1 / 0xf + iVar1 * 0x18) * 4) == 0) {
    return 0;
  }
  iVar1 = (((*(int *)(&DAT_007be8c8 + (param_1 / 0xf + iVar1 * 0x18) * 4) < 1) - 1 & 2) - 1) + iVar1
  ;
  if (0x17 < iVar1) {
    st::fn_00403AD0(this,0);
    return 1;
  }
  if (iVar1 < 0) {
    iVar1 = 0x17;
  }
  st::fn_00403AD0(this,iVar1 * 0xf);
  return 1;
}

// 004C4550 TLOBaseTy::sub_004C4550
#line 4 "decomp/ST.exe/functions/004C4550/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=2; incoming_stack_parameter_uses=33; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004C4550(TLOBaseTy *this,int *param_1)

{
  alignas(4) byte st_stack_frame[228];

  int iVar1;
  int *piVar2;
  int iVar3;
  int uVar4;
  int local_EAX_1150;
  int local_EAX_1394;
  void *this_00;
  undefined4 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int *piVar8;
  int iVar9;
  byte **ppbVar10;
  int iVar11;
  undefined4 local_c0 [2];
  undefined4 local_b8 [2];
  byte *local_b0 [5];
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_92;
  byte *local_84 [5];
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  undefined2 local_5e;
  int local_5c;
  undefined1 local_58;
  int *local_57;
  undefined2 local_53;
  AnonShape_005EFAE0_B406B78B *local_41;
  short local_2c;
  short sStack_2a;
  short local_28;
  STJellyManC *local_24;
  undefined2 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;

  piVar2 = param_1;
  sVar5 = 0;
  local_c = 0;
  local_8 = 0;
  iVar3 = (int)param_1 + this->field_0235 * 2;
  local_10 = 0;
  iVar9 = *(int *)(&DAT_00792a90 + iVar3 * 4);
  if (iVar9 == 1) {
    iVar9 = (int)param_1 * 0x80;
    if ((&this->field_0291)[(int)param_1 * 0x20] != nullptr) {
      if ((&DAT_00792ca0)[iVar3 * 3] == 0xb1) {
        ppbVar10 = local_b0;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppbVar10 = nullptr;
          ppbVar10 = ppbVar10 + 1;
        }
        *(undefined4 *)(&this->field_0x29d + iVar9) = 1;
        *(undefined2 *)ppbVar10 = 0;
        local_b0[1] = this->field_0024;
        local_b0[3] = (byte *)0x1;
        local_b0[0] = (byte *)0x168;
        local_b0[2] = (byte *)0x1;
        if ((st_stack_frame + 224) != &DAT_0000000c) {
          local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(this->field_0041));
        }
        if ((st_stack_frame + 224) != (undefined1 *)0x8) {
          local_8 = STReplaceLowWord((uint32_t)(local_8), (uint16_t)(this->field_0043));
        }
        if ((st_stack_frame + 224) != (undefined1 *)0x10) {
          local_10 = STReplaceLowWord((uint32_t)(local_10), (uint16_t)(this->field_0045));
        }
        local_9c = (short)local_c;
        local_96 = *(undefined2 *)(&this->field_0x2a5 + iVar9);
        local_9a = (short)local_8;
        local_94 = *(undefined2 *)(&this->field_02A9 + (int)param_1 * 0x20);
        local_98 = (undefined2)local_10;
        local_92 = *(undefined2 *)(&this->field_0x2ad + iVar9);
        st::fn_00401BC2(g_playSystem_00802A38,0x168,0,0,st::machine_word_boundary_cast<undefined4>(local_b0),0);
        return 0;
      }
      *(undefined4 *)(&this->field_0x29d + iVar9) = 1;
      ppbVar10 = local_84;
      for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppbVar10 = nullptr;
        ppbVar10 = ppbVar10 + 1;
      }
      local_18 = *(int *)(&DAT_007932d0 + ((int)param_1 + this->field_0235 * 2) * 0x16);
      if (local_18 == 0) {
        local_18 = 1;
        if ((st_stack_frame + 224) != (undefined1 *)0x6a) {
          local_6a = this->field_0041;
        }
        if ((st_stack_frame + 224) != (undefined1 *)0x68) {
          local_68 = this->field_0043;
        }
        if ((st_stack_frame + 224) != &DAT_00000066) {
          local_66 = this->field_0045;
        }
      }
      else {
        if ((st_stack_frame + 224) != &DAT_0000000c) {
          local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(this->field_0041));
        }
        if ((st_stack_frame + 224) != (undefined1 *)0x8) {
          local_8 = STReplaceLowWord((uint32_t)(local_8), (uint16_t)(this->field_0043));
        }
        if ((st_stack_frame + 224) != (undefined1 *)0x10) {
          local_10 = STReplaceLowWord((uint32_t)(local_10), (uint16_t)(this->field_0045));
        }
      }
      local_64 = *(short *)(&this->field_0x2a5 + iVar9);
      local_58 = 0;
      local_62 = *(short *)(&this->field_02A9 + (int)param_1 * 0x20);
      local_60 = *(short *)(&this->field_0x2ad + iVar9);
      local_5e = (undefined2)this->field_0259;
      local_57 = this->field_0018;
      local_53 = this->field_0032;
      local_41 = (&this->field_028D)[(int)param_1 * 0x20];
      local_84[1] = this->field_0024;
      local_84[3] = (byte *)0x1;
      local_84[0] = (byte *)0x28;
      local_14 = 0;
      iVar3 = local_18;
      piVar8 = param_1;
      if (0 < local_18) {
        iVar11 = 0;
        do {
          if (((int)piVar8 < 1) || (local_14 == *(int *)(&this->field_0x2c1 + iVar9))) {
            iVar3 = ((int)piVar8 + this->field_0235 * 2) * 0x16;
            if (*(int *)(&DAT_007932d0 + iVar3) != 0) {
              puVar4 = st::fn_0040342C(local_b8,(short)*(undefined4 *)
                                                           (&DAT_007932d4 + iVar3 + iVar11),
                                          *(ushort *)((int)(&DAT_007932d4 + iVar3 + iVar11) + 4),
                                          -(short)this->field_0259);
              local_2c = (short)*puVar4;
              sStack_2a = (short)((uint)*puVar4 >> 0x10);
              local_28 = *(short *)(puVar4 + 1);
              local_6a = local_2c + (short)local_c;
              local_68 = sStack_2a + (short)local_8;
              local_66 = local_28 + (short)local_10;
              iVar3 = (int)param_1 + this->field_0235 * 2;
              local_20 = *(undefined2 *)(&DAT_007932d8 + iVar11 + iVar3 * 0x16);
              local_24 = (STJellyManC *)
                         (*(uint *)(&DAT_007932d4 + iVar3 * 0x16 + iVar11) & 0xffff0000);
              puVar4 = st::fn_0040342C(local_c0,0,0,-(short)this->field_0259);
              local_2c = (short)*puVar4;
              sStack_2a = (short)((uint)*puVar4 >> 0x10);
              local_64 = local_2c + *(short *)(&this->field_0x2a5 + iVar9);
              local_62 = *(short *)(&this->field_02A9 + (int)piVar2 * 0x20) + sStack_2a;
              local_60 = *(short *)(&this->field_0x2ad + iVar9) + *(short *)(puVar4 + 1);
            }
            iVar1 = (int)param_1 + this->field_0235 * 2;
            if ((*(int *)(&DAT_00793e28 + iVar1 * 4) == 0) ||
               (iVar3 = local_18, piVar8 = param_1, *(int *)(&this->field_0x2c5 + iVar9) != 0)) {
              iVar3 = (&DAT_00792ca0)[local_14 + iVar1 * 3];
              if (iVar3 == 0xab) {
                st::fn_00403837((int)local_6a,(int)local_68,(int)local_66,
                                   st::machine_word_boundary_cast<undefined4>((&this->field_028D)[(int)piVar2 * 0x20]),st::machine_word_boundary_cast<undefined4>(this->field_0024),
                                   st::machine_word_boundary_cast<undefined4>(this->field_0018),this->field_0032);
                if (this->field_05AC == CASE_47) {
                  this->vfunc_90(4,0x315);
                }
              }
              else {
                local_70 = local_6a;
                local_6e = local_68;
                local_6c = local_66;
                local_5c = iVar3;
                if (iVar3 == 0xb0) {
                  local_84[0] = (byte *)0x15e;
                  if (this->field_05AC == CASE_68) {
                    local_5c = 1;
                    this->field_04D4 = st::machine_word_boundary_cast<int>(this->field_04D4 + -10);
                  }
                  else if (this->field_05AC == CASE_71) {
                    local_5c = 0;
                  }
                  iVar3 = 0x15e;
                }
                else {
                  iVar3 = 0x28;
                }
                st::fn_00401BC2(g_playSystem_00802A38,iVar3,0,0,st::machine_word_boundary_cast<undefined4>(local_84),0);
              }
              *(int *)(&this->field_0x2c5 + iVar9) = *(int *)(&this->field_0x2c5 + iVar9) + -1;
              *(uint *)(&this->field_0x2c9 + iVar9) = g_playSystem_00802A38->field_00E4;
              iVar3 = local_18;
              piVar8 = param_1;
            }
          }
          local_14 = local_14 + 1;
          iVar11 = iVar11 + 6;
        } while (local_14 < iVar3);
      }
      if ((0 < (int)piVar8) &&
         (iVar11 = *(int *)(&this->field_0x2c1 + iVar9) + 1,
         *(int *)(&this->field_0x2c1 + iVar9) = iVar11, iVar3 <= iVar11)) {
        *(undefined4 *)(&this->field_0x2c1 + iVar9) = 0;
      }
    }
  }
  else if (iVar9 == 2) {
    *(undefined4 *)(&this->field_0x29d + (int)param_1 * 0x80) = 1;
    switch((&DAT_00792ca0)[((int)param_1 + this->field_0235 * 2) * 3]) {
    case 0xa3:
      iVar3 = (int)param_1 * 0x20;
      iVar9 = (int)param_1 * 0x80;
      iVar11 = (int)param_1 * 0x80;
      param_1 = (int *)(&this->field_0x2a5 + iVar9);
      st::fn_00403909
                (g_allPlayers_007FA174,(int)this->field_0024,0xa8,
                 (int *)(&this->field_0x2a5 + iVar9),st::pointer_boundary_cast<int *>(&this->field_02A9 + iVar3),
                 (int *)(&this->field_0x2ad + iVar11),&local_1c);
      st::fn_00402E0F(this->field_04E0[0],this->field_04E0[1],this->field_04E0[2],
                         *param_1 * 0xc9 + 100,(&this->field_02A9)[iVar3] * 0xc9 + 100,
                         st::machine_word_boundary_cast<undefined4>(this->field_0024),local_1c,st::machine_word_boundary_cast<undefined4>(this->field_0018),this->field_0032);
      local_EAX_1394 = st::fn_004049B7(DAT_0080874d);
      local_EAX_1394 = (int)(byte)local_EAX_1394;
      if (local_EAX_1394 == 1) {
        this->vfunc_90(6,0x9e);
        return 0;
      }
      if (local_EAX_1394 == 2) {
        this->vfunc_90(6,0x9f);
        return 0;
      }
      if (local_EAX_1394 == 3) {
        this->vfunc_90(6,0xa0);
        return 0;
      }
      break;
    case 0xa8:
      iVar3 = (int)param_1 * 0x20;
      iVar11 = (int)param_1 * 0x80;
      iVar9 = (int)param_1 * 0x80;
      param_1 = (int *)(&this->field_0x2a5 + iVar11);
      st::fn_00403909
                (g_allPlayers_007FA174,(int)this->field_0024,0xa8,
                 (int *)(&this->field_0x2a5 + iVar11),st::pointer_boundary_cast<int *>(&this->field_02A9 + iVar3),
                 (int *)(&this->field_0x2ad + iVar9),&local_1c);
      st::fn_004044CB(0xa8,st::machine_word_boundary_cast<undefined4>(this->field_0024),st::machine_word_boundary_cast<undefined4>(this->field_0018),this->field_0032,
                         (ushort)this->field_04E0[0],(ushort)this->field_04E0[1],
                         (ushort)this->field_04E0[2],(short)*param_1 * 0xc9 + 100,
                         (short)(&this->field_02A9)[iVar3] * 0xc9 + 100,(ushort)local_1c);
      uVar4 = st::fn_004049B7(DAT_0080874d);
      uVar4 = (int)(byte)uVar4;
      if (uVar4 == 1) {
        this->vfunc_90(6,0x98);
        return 0;
      }
      if (uVar4 == 2) {
        this->vfunc_90(6,0x99);
        return 0;
      }
      if (uVar4 == 3) {
        this->vfunc_90(6,0x9a);
        return 0;
      }
      break;
    case 0xb2:
      if ((this->field_05AC == CASE_70) && (this->field_04E0[4] == 0)) {
        this_00 = (void *)st::fn_00401758(this->field_04E0[0],this->field_04E0[1],
                                             this->field_04E0[2],st::machine_word_boundary_cast<undefined4>(this->field_0024),st::machine_word_boundary_cast<undefined4>(this->field_0018),
                                             this->field_0032);
        this->field_04E0[4] = STField<uint>(this_00,0x18);
        if ((-1 < *(int *)(&this->field_0x2a5 + (int)piVar2 * 0x80)) &&
           (-1 < (int)(&this->field_02A9)[(int)piVar2 * 0x20])) {
          st::fn_004021F3(this_00,*(int *)(&this->field_0x2a5 + (int)piVar2 * 0x80),
                             (&this->field_02A9)[(int)piVar2 * 0x20]);
          return 0;
        }
      }
      break;
    case 0xbe:
      iVar3 = (int)param_1 * 0x20;
      iVar9 = (int)param_1 * 0x80;
      iVar11 = (int)param_1 * 0x80;
      param_1 = (int *)(&this->field_0x2a5 + iVar9);
      st::fn_00403909
                (g_allPlayers_007FA174,(int)this->field_0024,0xa8,
                 (int *)(&this->field_0x2a5 + iVar9),st::pointer_boundary_cast<int *>(&this->field_02A9 + iVar3),
                 (int *)(&this->field_0x2ad + iVar11),&local_1c);
      st::fn_004044CB(0xbe,st::machine_word_boundary_cast<undefined4>(this->field_0024),st::machine_word_boundary_cast<undefined4>(this->field_0018),this->field_0032,
                         (ushort)this->field_04E0[0],(ushort)this->field_04E0[1],
                         (ushort)this->field_04E0[2],(short)*param_1 * 0xc9 + 100,
                         (short)(&this->field_02A9)[iVar3] * 0xc9 + 100,(ushort)local_1c);
      local_EAX_1150 = st::fn_004049B7(DAT_0080874d);
      local_EAX_1150 = (int)(byte)local_EAX_1150;
      if (local_EAX_1150 == 1) {
        this->vfunc_90(6,0x9b);
        return 0;
      }
      if (local_EAX_1150 == 2) {
        this->vfunc_90(6,0x9c);
        return 0;
      }
      if (local_EAX_1150 == 3) {
        this->vfunc_90(6,0x9d);
        return 0;
      }
    }
  }
  else if (iVar9 == 3) {
    if ((&DAT_00792ca0)[iVar3 * 3] == 0xbc) {
      if ((st_stack_frame + 224) != &DAT_0000000c) {
        local_c = (uint)(ushort)this->field_0041;
      }
      if ((st_stack_frame + 224) != (undefined1 *)0x8) {
        local_8 = (uint)(ushort)this->field_0043;
      }
      if ((st_stack_frame + 224) != (undefined1 *)0x10) {
        sVar5 = this->field_0045;
      }
      if ((AnonShape_005EFAE0_B406B78B *)this->field_04D0 != nullptr) {
        iVar3 = st::fn_006E62D0
                          (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)this->field_04D0,
                           (int *)&local_24);
        if (iVar3 != 0) {
          this->field_04D0 = CASE_0;
          *(undefined4 *)(&this->field_0x29d + (int)piVar2 * 0x80) = 1;
          return 0;
        }
        iVar3 = ((int)piVar2 + this->field_0235 * 2) * 0x16;
        local_10 = (int)*(short *)(&DAT_007932d8 + iVar3) + (int)sVar5;
        local_14 = STBiasedDiv16(local_10, 200); /* exact signed 16-bit grid-index division */
        param_1 = (int *)((int)(short)local_8 + (int)*(short *)(&DAT_007932d6 + iVar3));
        sVar5 = (short)((int)param_1 >> 0x1f);
        if ((int)param_1 < 0) {
          sVar5 = (((short)((int)param_1 / 0xc9) + sVar5) -
                  (short)((longlong)(int)param_1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar5 = ((short)((int)param_1 / 0xc9) + sVar5) -
                  (short)((longlong)(int)param_1 * 0x28c1979 >> 0x3f);
        }
        local_18 = (int)*(short *)(&DAT_007932d4 + iVar3) + (int)(short)local_c;
        sVar6 = STBiasedDiv16(local_18, 0xc9); /* exact signed 16-bit grid-index division */
        if ((((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) || (sVar5 < 0)) ||
           (((g_worldGrid.sizeY <= sVar5 || (sVar7 = (short)local_14, sVar7 < 0)) ||
            ((g_worldGrid.sizeZ <= sVar7 ||
             (STGridAt3D(g_worldGrid, sVar6, sVar5, sVar7).objects[1] == nullptr)))))) {
          st::fn_00404BF6(local_24,local_18,param_1,local_10);
          *(undefined4 *)(&this->field_0x29d + (int)piVar2 * 0x80) = 1;
          *(int *)(&this->field_0x2c5 + (int)piVar2 * 0x80) =
               *(int *)(&this->field_0x2c5 + (int)piVar2 * 0x80) + -1;
          return 0;
        }
      }
    }
    else if ((&DAT_00792ca0)[iVar3 * 3] == 0xb3) {
      param_1 = nullptr;
      if (((AnonShape_005EFAE0_B406B78B *)this->field_04E0[3] != nullptr)
         && (iVar3 = st::fn_006E62D0
                               (g_playSystem_00802A38,
                                (AnonShape_005EFAE0_B406B78B *)this->field_04E0[3],(int *)&param_1),
            iVar3 == 0)) {
        st::fn_00401DC0(param_1,*(undefined4 *)(&this->field_0x2a5 + (int)piVar2 * 0x80),
                           (&this->field_02A9)[(int)piVar2 * 0x20],
                           *(undefined4 *)(&this->field_0x2ad + (int)piVar2 * 0x80),
                           this->field_04E0[5],this->field_04E0[6],this->field_04E0[7]);
        *(undefined4 *)(&this->field_0x29d + (int)piVar2 * 0x80) = 1;
        *(int *)(&this->field_0x2c5 + (int)piVar2 * 0x80) =
             *(int *)(&this->field_0x2c5 + (int)piVar2 * 0x80) + -1;
        return 0;
      }
    }
  }
  return 0;
}

// 004C56B0 TLOBaseTy::sub_004C56B0
#line 4 "decomp/ST.exe/functions/004C56B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=2; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004C56B0(TLOBaseTy *this,void *param_1)

{
  alignas(4) byte st_stack_frame[40];

  void *pvVar1;
  void *pvVar2;
  int iVar4;
  uint uVar5;
  int iVar3;
  int iVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;

  pvVar2 = param_1;
  sVar7 = 0;
  sVar8 = 0;
  local_8 = 0;
  if ((st_stack_frame + 36) != (undefined1 *)0x8) {
    local_8 = (uint)(ushort)this->field_0041;
  }
  if ((st_stack_frame + 36) != (undefined1 *)0xfffffffc) {
    sVar8 = this->field_0043;
    sVar7 = this->field_0045;
  }
  iVar6 = (int)param_1 * 0x80;
  if (*(int *)((int)&this->field_02CC + iVar6 + 1) < *(int *)((int)&this->field_02D0 + iVar6 + 1)) {
    pvVar1 = (void *)((int)param_1 + this->field_0235 * 2);
    if ((&DAT_00792ca0)[(int)pvVar1 * 3] == 0xb3) {
      param_1 = nullptr;
      if (((AnonShape_005EFAE0_B406B78B *)this->field_04E0[3] != nullptr)
         && (iVar4 = st::fn_006E62D0
                               (g_playSystem_00802A38,
                                (AnonShape_005EFAE0_B406B78B *)this->field_04E0[3],(int *)&param_1),
            iVar4 == 0)) {
        uVar5 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
        this->field_001C = uVar5;
        iVar3 = st::fn_0040122B(param_1,(int *)&local_8,&local_10,&local_18,(int *)&local_c,
                                   (int *)&local_14,(int *)&local_1c,uVar5 >> 0x10);
        if (iVar3 != 0) {
          *(uint *)(&this->field_0x2a5 + iVar6) = local_8;
          this->field_04E0[5] = local_c;
          (&this->field_02A9)[(int)pvVar2 * 0x20] = local_10;
          this->field_04E0[6] = local_14;
          *(undefined4 *)(&this->field_0x2ad + iVar6) = local_18;
          this->field_04E0[7] = local_1c;
          return 1;
        }
      }
    }
    else {
      iVar6 = (int)pvVar1 * 0x16;
      iVar4 = (int)sVar7 + (int)*(short *)(&DAT_007932d8 + iVar6);
      sVar7 = STBiasedDiv16(iVar4, 200); /* exact signed 16-bit grid-index division */
      iVar4 = (int)*(short *)(&DAT_007932d6 + iVar6) + (int)sVar8;
      sVar8 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
      iVar6 = (int)*(short *)(&DAT_007932d4 + iVar6) + (int)(short)local_8;
      sVar9 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
      if (((((sVar9 < 0) || (g_worldGrid.sizeX <= sVar9)) || (sVar8 < 0)) ||
          ((g_worldGrid.sizeY <= sVar8 || (sVar7 < 0)))) ||
         ((g_worldGrid.sizeZ <= sVar7 ||
          (STGridAt3D(g_worldGrid, sVar9, sVar8, sVar7).objects[1] == nullptr)))) {
        return 1;
      }
    }
  }
  return 0;
}

// 004C6C70 TLOBaseTy::sub_004C6C70
#line 4 "decomp/ST.exe/functions/004C6C70/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_004C6C70(TLOBaseTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  if (this->field_03DC == 0) {
    st::fn_00405CBD(this,param_1,param_2,param_3);
  }
  else {
    iVar1 = st::fn_00404E9E(this);
    if (iVar1 != 0) {
      this->field_0400 = 0;
      this->field_03FC = 1;
      this->field_03EC = 1;
      this->field_03F4 = param_2;
      this->field_03F0 = param_1;
      this->field_03F8 = param_3;
      return 0;
    }
  }
  return 0;
}

// 004C7070 TLOBaseTy::sub_004C7070
#line 4 "decomp/ST.exe/functions/004C7070/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004C7070(TLOBaseTy *this,int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  undefined4 local_8;

  local_8 = 0;
  uVar3 = 0;
  if (this->field_03DC == 0) {
    if (this->field_05B8 == 0) {
      return 1;
    }
    iVar5 = st::machine_word_boundary_cast<int>(this->field_05B8 + -1);
    if (-1 < iVar5) {
      sVar1 = *(short *)&this->field_05B4;
      sVar2 = (short)this->field_05B0;
      do {
        if (sVar2 < 0) {
LAB_004c719b:
          sVar4 = -1;
LAB_004c716e:
          local_8 = 1;
LAB_004c7175:
          if (param_1 != 0) {
            return local_8;
          }
          if (sVar4 != 0) {
            return local_8;
          }
          if (iVar5 == 0) {
            return 1;
          }
        }
        else {
          sVar4 = (short)iVar5;
          if ((((g_worldGrid.sizeX <= sVar2) || (sVar1 < 0)) || (g_worldGrid.sizeY <= sVar1)) ||
             (((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)) ||
              (STGridAt3D(g_worldGrid, sVar2, sVar1, sVar4).objects[0] == nullptr)))) {
            if (((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) ||
               ((sVar1 < 0 ||
                (((g_worldGrid.sizeY <= sVar1 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4))))))
            goto LAB_004c719b;
            sVar4 = STGridAt3D(g_pathingGrid, sVar2, sVar1, sVar4);
            if (sVar4 == -1) goto LAB_004c716e;
            goto LAB_004c7175;
          }
        }
        iVar5 = iVar5 + -1;
        uVar3 = local_8;
      } while (-1 < iVar5);
    }
  }
  return uVar3;
}

// 004C7460 TLOBaseTy::sub_004C7460
#line 4 "decomp/ST.exe/functions/004C7460/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=2; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004C7460(TLOBaseTy *this)

{
  byte bVar1;
  AnonPointee_TLOBaseTy_0607 *pAVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = *(int *)&this->field_0x361;
  if ((iVar4 == 0) && (this->field_03D4 == 0)) {
    if (*(int *)(&DAT_00794d70 + *(int *)&this->field_0x365 * 4) != -1) {
      st::fn_004051EB(*(char *)&this->field_0024,
                         *(int *)(&DAT_00794d70 + *(int *)&this->field_0x365 * 4),this->field_0018);
      return 0;
    }
  }
  else {
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_8 = 0;
    if (iVar4 != 0) {
      if (iVar4 == 5) {
        local_8 = this->field_0398;
        local_14 = this->field_039C;
        local_10 = this->field_03A0;
        local_c = this->field_03A4;
      }
      else {
        iVar4 = 100 - this->field_0394;
        iVar3 = *(int *)&this->field_0x36d + -1;
        local_8 = (iVar4 * this->field_0398) / 100 + iVar3 * this->field_0398;
        local_14 = (iVar4 * this->field_039C) / 100 + iVar3 * this->field_039C;
        local_10 = (iVar4 * this->field_03A0) / 100 + iVar3 * this->field_03A0;
        local_c = (iVar4 * this->field_03A4) / 100 + iVar3 * this->field_03A4;
      }
    }
    if ((this->field_03D4 != 0) && (local_18 = 0, 0 < this->field_03D4)) {
      pAVar2 = this->field_0607;
      iVar4 = 0;
      do {
        st::fn_004035DF(this,*(Global_sub_004C7260_param_1Enum *)
                                 ((int)&pAVar2->field_0000 + iVar4),
                           *(int *)((int)&pAVar2->field_0004 + iVar4),st::pointer_boundary_cast<undefined4 *>(&local_1c),st::pointer_boundary_cast<undefined4 *>(&local_20),&local_24,
                           st::pointer_boundary_cast<undefined4 *>(&local_28));
        pAVar2 = this->field_0607;
        iVar3 = *(int *)((int)&pAVar2->field_0008 + iVar4);
        iVar4 = iVar4 + 0x27;
        local_8 = local_8 + iVar3 * local_1c;
        local_14 = local_14 + iVar3 * local_20;
        local_10 = local_10 + iVar3 * local_24;
        local_c = local_c + iVar3 * local_28;
        local_18 = local_18 + 1;
      } while (local_18 < this->field_03D4);
    }
    iVar4 = *(int *)&this->field_0x361;
    if (iVar4 == 0) {
      iVar4 = this->field_0607->field_0000;
    }
    if (*(int *)(&DAT_00794d70 + iVar4 * 4) != -1) {
      bVar1 = st::fn_004049B7(*(char *)&this->field_0024);
      iVar3 = local_8;
      if (bVar1 == 3) {
        iVar3 = 0;
      }
      st::fn_0040497B(*(char *)&this->field_0024,*(int *)(&DAT_00794d70 + iVar4 * 4),
                         this->field_0018,iVar3,local_14,local_10,local_c);
    }
  }
  return 0;
}

// 004C7860 TLOBaseTy::sub_004C7860
#line 4 "decomp/ST.exe/functions/004C7860/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=2; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=15; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115;CASE_FFFFFFFF=4294967295
    */

int __thiscall
st::fn_004C7860
          (TLOBaseTy *this,int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  bool bVar2;
  int local_EAX_52;
  int iVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int local_EAX_285;
  dword dVar5;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int iVar6;
  byte *pbVar7;

  iVar6 = 0;
  switch(param_1 + -1) {
  case 0:
    local_EAX_52 = st::fn_0040413D(this->field_0024,param_2);
    if ((local_EAX_52 != 0) && (this->field_05B8 < g_worldGrid.sizeZ + -1))
    goto switchD_004c787f_caseD_2;
    break;
  case 1:
    iVar3 = st::fn_0040524F((int)this->field_0024,param_2);
    if (iVar3 == 0) {
      iVar4 = st::fn_0040186B((int)this->field_0024,param_2);
      iVar4 = st::fn_00402342((int)this->field_0024,param_2,iVar4 + 1);
      if (iVar4 == 0) break;
    }
    uVar1 = st::fn_0040530D((int)this->field_0024,param_2);
    iVar4 = st::fn_0040186B((int)this->field_0024,param_2);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (iVar4 < CONCAT31(extraout_var,uVar1)) {
      iVar6 = 1;
      goto LAB_004c796d;
    }
    break;
  case 2:
  case 4:
  case 6:
switchD_004c787f_caseD_2:
    iVar6 = 1;
    goto LAB_004c796d;
  case 3:
    pbVar7 = this->field_0024;
    iVar6 = 0x31;
    goto LAB_004c795c;
  case 5:
    iVar6 = st::fn_00405821(this,param_1,param_2,param_3);
    goto LAB_004c7967;
  case 7:
    pbVar7 = this->field_0024;
    iVar6 = 0x75;
LAB_004c795c:
    iVar6 = st::fn_0040186B((int)pbVar7,iVar6);
LAB_004c7967:
    if (iVar6 != 0) {
LAB_004c796d:
      if (param_5 != 0) {
        local_EAX_285 = st::fn_00401B59(this,param_1,param_2,-1);
        if ((*(int *)&this->field_0x361 == param_1) && (*(uint *)&this->field_0x369 == param_2)) {
          local_EAX_285 = local_EAX_285 + *(int *)&this->field_0x36d;
        }
        if (99 < local_EAX_285 + param_3) {
          iVar6 = 0;
        }
      }
    }
  }
  if (param_4 == 0) {
    return iVar6;
  }
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = 0;
  dVar5 = this->slot_F8();
  if (dVar5 == 0) {
    return 0;
  }
  if (this->field_0245 == CASE_6) {
    return 0;
  }
  switch(param_1 + -1) {
  case 0:
    goto cf_common_exit_004C7B08;
  case 1:
    if (*(int *)&this->field_0x361 != 0) {
      return 0;
    }
    iVar5 = st::fn_00401E1F((int)this->field_0024,param_2);
    if (iVar5 != 0) {
      return 0;
    }
    if ((&PTR_DAT_007bfc04)[this->field_0239][param_2] != '\0') {
      bVar2 = st::fn_00403396(this->field_0024,param_2);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var_00,bVar2) == 0) {
        return 0;
      }
      return 1;
    }
    goto cf_common_exit_004C7B08;
  case 2:
  case 3:
    if (this->field_04D0 == CASE_0) {
      return 1;
    }
    break;
  case 4:
    iVar4 = this->vfunc_7C();
    if (iVar4 == 100) {
      return 0;
    }
  case 5:
    if (*(int *)&this->field_0x361 == 0) {
      return 1;
    }
    break;
  case 6:
    iVar4 = st::fn_00405470((STBoatC *)this);
    if (iVar4 != 0) {
      if (param_2 == 0xdd) {
        iVar4 = st::fn_00403954(*(char *)&this->field_0024);
        if (param_3 <= iVar4) {
          return 1;
        }
      }
      else if ((param_2 == 0xde) &&
              (iVar4 = st::fn_00402284(*(char *)&this->field_0024), param_3 <= iVar4)) {
        return 1;
      }
    }
    break;
  case 7:
    if (this->field_04D0 != CASE_0) {
      return 0;
    }
cf_common_exit_004C7B08:
    iVar6 = 1;
  }
  return iVar6;
}

// 004C7CC0 TLOBaseTy::FUN_004c7cc0
#line 4 "decomp/ST.exe/functions/004C7CC0/decomp.c"
/* [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00662240 -> 004C7CC0 @ 00662BBF; zero-filled partial register load at 00662BAD

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 00662240 -> 004C7CC0 @ 00662BBF; MOVSX at 00662B9F establishes signed source width 1 */

undefined4 __thiscall
st::fn_004C7CC0
          (TLOBaseTy *this,int param_1,uint param_2,uint param_3,int param_4,uint param_5,
          undefined4 param_6,int param_7,char *param_8)

{
  int iVar1;
  int iVar2;
  TLOBaseTyVTable *pTVar3;
  bool bVar4;
  byte bVar5;
  int iVar7;
  int local_EAX_331;
  int iVar6;
  int local_EAX_538;
  int local_EAX_559;
  uint uVar11;
  int uVar9;
  int local_EAX_1031;
  int local_EAX_1126;
  AnonPointee_TLOBaseTy_0607 *pAVar8;
  int *piVar9;
  uint uVar12;
  int iVar13;
  byte *puVar14;
  byte *puVar15;

  if ((int)param_3 < 0) {
    iVar7 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
    if ((this->field_03D4 != 0) && (this->field_0607 != nullptr)) {
      do {
        iVar1 = this->field_03D4;
        bVar4 = false;
        iVar13 = iVar1 + -1;
        if (-1 < iVar13) {
          piVar9 = (int *)(iVar13 * 0x27 + (int)this->field_0607);
LAB_004c7d1c:
          if ((*piVar9 != param_1) || (piVar9[1] != param_2)) goto LAB_004c7d2b;
          bVar4 = true;
          puVar15 = (byte *)(iVar13 * 0x27 + (int)this->field_0607);
          iVar2 = puVar15[2];
          if (iVar2 <= iVar7) {
            iVar7 = iVar7 - iVar2;
            if (iVar13 < iVar1 + -1) {
              uVar12 = ((iVar1 - iVar13) + -1) * 0x27;
              puVar14 = (byte *)((iVar13 + 1) * 0x27 + (int)this->field_0607);
              memmove(puVar15, puVar14, uVar12); /* compiler REP MOVS byte copy */
            }
            this->field_03D4 = st::machine_word_boundary_cast<int>(this->field_03D4 + -1);
            goto LAB_004c7d8c;
          }
          piVar9 = (int *)(iVar13 * 0x27 + 8 + (int)this->field_0607);
          *piVar9 = *piVar9 - iVar7;
          goto cf_common_exit_004C8287;
        }
LAB_004c7d8c:
        if (iVar7 == 0) goto cf_common_exit_004C8287;
      } while (bVar4);
    }
    if (((iVar7 != 0) && (*(int *)&this->field_0x361 == param_1)) &&
       (*(uint *)&this->field_0x369 == param_2)) {
      if (*(int *)&this->field_0x36d < iVar7) {
        iVar7 = *(int *)&this->field_0x36d;
      }
      iVar7 = *(int *)&this->field_0x36d - iVar7;
      *(int *)&this->field_0x36d = iVar7;
      if (iVar7 == 0) {
        *(int *)&this->field_0x365 = *(int *)&this->field_0x361;
        local_EAX_331 = st::fn_00404B6A(this);
        if (local_EAX_331 == 0) {
          *(undefined4 *)&this->field_0x36d = 1;
        }
        else {
          bVar5 = st::fn_004049B7(*(char *)&this->field_0024);
          if ((bVar5 != 3) && (this->field_03A8 != 0)) {
            st::fn_00404336(*(char *)&this->field_0024,this->field_03A8);
          }
          if (this->field_03AC != 0) {
            st::fn_00404412(*(char *)&this->field_0024,this->field_03AC);
          }
          if (this->field_03B0 != 0) {
            st::fn_004055E7(*(char *)&this->field_0024,this->field_03B0);
          }
          if (this->field_03B4 != 0) {
            st::fn_00405E6B((int)this->field_0024,this->field_03B4);
          }
          st::fn_004028F6(*(char *)&this->field_0024);
        }
      }
    }
  }
  else {
    iVar6 = st::fn_00405ACE(this,param_1,param_2,param_3,0,0);
    if (iVar6 != 0) {
      local_EAX_538 = st::fn_00405ACE(this,param_1,param_2,param_3,1,0);
      if ((local_EAX_538 == 0) || (local_EAX_559 = st::fn_0040283D(this), local_EAX_559 == 0)) {
        if (param_4 != 0) {
          local_EAX_1126 = st::fn_00401B59(this,param_1,param_2,-1);
          if ((*(int *)&this->field_0x361 == param_1) && (*(uint *)&this->field_0x369 == param_2)) {
            local_EAX_1126 = local_EAX_1126 + *(int *)&this->field_0x36d;
          }
          if ((int)(local_EAX_1126 + param_3) < 100) {
            if (this->field_03D8 <= this->field_03D4 + 1) {
              iVar7 = st::machine_word_boundary_cast<int>(this->field_03D8 + 0x14);
              this->field_03D8 = iVar7;
              pAVar8 = st::pointer_boundary_cast<AnonPointee_TLOBaseTy_0607 *>(st::fn_006ACF50(this->field_0607,iVar7 * 0x27));
              this->field_0607 = pAVar8;
            }
            *(int *)(this->field_03D4 * 0x27 + (int)this->field_0607) = param_1;
            *(uint *)(this->field_03D4 * 0x27 + 4 + (int)this->field_0607) = param_2;
            *(uint *)(this->field_03D4 * 0x27 + 8 + (int)this->field_0607) = param_3;
            *(uint *)(this->field_03D4 * 0x27 + 0xc + (int)this->field_0607) = param_5;
            *(undefined4 *)(this->field_03D4 * 0x27 + 0x10 + (int)this->field_0607) = param_6;
            *(int *)(this->field_03D4 * 0x27 + 0x14 + (int)this->field_0607) = param_7;
            puVar15 = (byte *)(this->field_03D4 * 0x27 + 0x18 + (int)this->field_0607);
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar15[2] = 0;
            *(undefined2 *)(puVar15 + 3) = 0;
            STField<undefined1>(puVar15,0xe) = 0;
            if (param_8 != nullptr) {
              st::fn_0072E340
                        ((char *)(this->field_03D4 * 0x27 + 0x18 + (int)this->field_0607),param_8,
                         0xf);
            }
            this->field_03D4 = st::machine_word_boundary_cast<int>(this->field_03D4 + 1);
            st::fn_00405A2E(this);
          }
        }
      }
      else {
        if (*(int *)&this->field_0x361 == 0) {
          *(int *)&this->field_0x361 = param_1;
          *(uint *)&this->field_0x369 = param_2;
          this->field_038C = g_playSystem_00802A38->field_00E4;
          uVar11 = st::fn_004048D1(this,param_1,param_2);
          this->field_0390 = uVar11;
          this->field_0394 = 0;
          this->field_03CC = 0;
          *(undefined4 *)&this->field_0x36d = 0;
          this->field_0375 = param_6;
          this->field_0379 = param_7;
          this->field_0371 = param_5;
          this->field_037D = 0;
          this->field_0381 = 0;
          this->field_0385 = 0;
          this->field_0389 = 0;
          this->field_038B = 0;
          if (param_8 != nullptr) {
            st::fn_0072E340((char *)&this->field_037D,param_8,0xf);
          }
          st::fn_004035DF(this,*(Global_sub_004C7260_param_1Enum *)&this->field_0x361,
                             *(int *)&this->field_0x369,st::pointer_boundary_cast<undefined4 *>(&this->field_0398),st::pointer_boundary_cast<undefined4 *>(&this->field_039C),
                             &this->field_03A0,st::pointer_boundary_cast<undefined4 *>(&this->field_03A4));
          this->field_03A8 = 0;
          this->field_03AC = 0;
          this->field_03B0 = 0;
          this->field_03B4 = 0;
          switch(this->field_05AC) {
          case CASE_32:
          case CASE_40:
          case CASE_49:
          case CASE_5C:
            st::fn_004058DA(this);
          }
        }
        *(uint *)&this->field_0x36d = *(int *)&this->field_0x36d + param_3;
        switch(this->field_05AC) {
        case CASE_32:
        case CASE_40:
        case CASE_49:
        case CASE_5C:
          st::fn_004032D8(this,param_1);
          break;
        case CASE_35:
        case CASE_54:
        case CASE_55:
        case CASE_56:
        case CASE_57:
        case CASE_58:
        case CASE_59:
        case CASE_5A:
          st::fn_00405EB6(this,param_1,param_2);
        }
        st::fn_00405A2E(this);
        st::fn_00402CF7(this,1);
        if (*(int *)(&DAT_00792778 + this->field_0235 * 4) != 0) {
          this->field_0261 = 0;
          *(undefined4 *)&this->field_0x2e1 = 0;
        }
        if (*(int *)&this->field_0x361 == 5) {
          st::fn_004028F1(this,3);
          uVar9 = st::fn_004049B7(*(char *)&this->field_023D);
          if (*(int *)(&DAT_00796230 + ((uint)(byte)uVar9 + this->field_0235 * 3) * 4) != 0) {
            pTVar3 = this->vtable;
            local_EAX_1031 = st::fn_004049B7(*(char *)&this->field_023D);
            (*pTVar3->vfunc_90)(this,3,(short)*(undefined4 *)
                                               (&DAT_00796230 +
                                               ((uint)(byte)local_EAX_1031 + this->field_0235 * 3) *
                                               4));
          }
        }
        else if (*(int *)&this->field_0x361 == 6) {
          this->vfunc_90(3,0x272);
        }
      }
    }
  }
cf_common_exit_004C8287:
  if (this->field_0024 == (byte *)(uint)(byte)this->field_0010->field_112D) {
    st::fn_00404B8D((char)this->field_0024);
  }
  return 0;
LAB_004c7d2b:
  iVar13 = iVar13 + -1;
  piVar9 = (int *)((int)piVar9 + -0x27);
  if (iVar13 < 0) goto LAB_004c7d8c;
  goto LAB_004c7d1c;
}

// 004C90C0 TLOBaseTy::sub_004C90C0
#line 4 "decomp/ST.exe/functions/004C90C0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_004C90C0(TLOBaseTy *this)

{
  int iVar1;
  TLOBaseTy_field_05ACState TVar2;
  int iVar2;

  iVar1 = *(int *)&this->field_0x361;
  if (iVar1 == 0) {
    return 1;
  }
  if (iVar1 == 1) {
    iVar2 = st::fn_00401FDC(this);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 5) {
        st::fn_00405768(this);
      }
      iVar2 = 1;
      goto LAB_004c9106;
    }
    iVar2 = st::fn_00403481(this);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_004c9106:
  *(undefined4 *)&this->field_0x361 = 0;
  if ((((*(int *)(&DAT_00792778 + this->field_0235 * 4) != 0) &&
       ((TVar2 = this->field_05AC, TVar2 != CASE_45 || (this->field_04D0 == CASE_1)))) &&
      ((TVar2 != CASE_4E || (this->field_04D0 == CASE_1)))) &&
     ((TVar2 != CASE_72 || (this->field_04D0 == CASE_1)))) {
    this->field_0261 = 1;
    *(undefined4 *)&this->field_0x2e1 = 1;
  }
  st::fn_00402CF7(this,1);
  return iVar2;
}

// 004C9370 TLOBaseTy::sub_004C9370
#line 4 "decomp/ST.exe/functions/004C9370/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_004C9370(TLOBaseTy *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  AnonPointee_TLOBaseTy_0607 *pAVar2;
  int iVar3;

  iVar3 = this->field_03D4;
  iVar1 = 0;
  if (((iVar3 != 0) && (pAVar2 = this->field_0607, pAVar2 != nullptr)) &&
     (0 < iVar3)) {
    do {
      if (((pAVar2->field_0000 == param_1) && (pAVar2->field_0004 == param_2)) &&
         ((param_3 < 0 || (param_3 == pAVar2->field_000C)))) {
        iVar1 = iVar1 + pAVar2->field_0008;
      }
      pAVar2 = (AnonPointee_TLOBaseTy_0607 *)((int)&pAVar2[1].field_000C + 3);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

// 004C96E0 TLOBaseTy::sub_004C96E0
#line 4 "decomp/ST.exe/functions/004C96E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_004C96E0(TLOBaseTy *this)

{
  TLOBaseTy_field_0245State TVar1;
  byte bVar2;
  int iVar3;

  bVar2 = st::fn_004049B7(*(char *)&this->field_023D);
  TVar1 = this->field_0245;
  iVar3 = ((bVar2 - 1) + this->field_0235 * 3) * 0xc;
  this->field_05EF = *(char **)((&PTR_PTR_007bb198)[TVar1] + iVar3);
  this->field_05F3 = *(undefined4 *)((&PTR_PTR_007bb198)[TVar1] + iVar3 + 4);
  this->field_05F7 = *(char **)((&PTR_PTR_007bb198)[TVar1] + iVar3 + 8);
  return;
}

// 004CA7B0 TLOBaseTy::sub_004CA7B0
#line 4 "decomp/ST.exe/functions/004CA7B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=8; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=13; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004CA7B0 -> 004CAFC0 @ 004CA7FB */

undefined4 __thiscall st::fn_004CA7B0(TLOBaseTy *this,uint *param_1,int param_2)

{
  undefined4 *this_00;
  AnonPointee_TLOBaseTy_01F5 *pAVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint **ppuVar5;
  byte bVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_10;
  int local_c;
  TLOBaseTy_field_0245State local_8;

  puVar8 = param_1;
  local_c = 0;
  this_00 = &this->field_01D5;
  bVar6 = (byte)param_1;
  iVar2 = st::fn_004022AC((STT3DSprC *)this_00,bVar6);
  if (iVar2 == 0) {
    return 0;
  }
  local_8 = this->field_0245;
  puVar7 = &local_10;
  ppuVar5 = &param_1;
  uVar3 = st::fn_0040581C();
  st::fn_00404101(this,(TLOBaseTy_sub_004CAFC0_param_1Enum)puVar8,uVar3,(uint *)ppuVar5,puVar7);
  if (((int)param_1 < 0) || ((int)local_10 < 0)) {
    st::fn_00404264((STT3DSprC *)this_00,bVar6);
    return 0;
  }
  if (this->field_0255 == 0) goto LAB_004ca835;
  if (local_8 == CASE_0) {
cf_common_exit_004CA871:
    iVar2 = st::fn_004022AC((STT3DSprC *)this_00,bVar6);
    if (iVar2 != 1) {
      iVar4 = ((0x18 - this->field_0259 / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
      iVar2 = (int)param_1 * iVar4;
      st::fn_00401EBA(this_00,bVar6,iVar2,iVar2,'\0');
      int scalar_puVar8 = (int)param_1 * iVar4; /* split integer lifetime from pointer-typed SSA storage */
      goto cf_common_exit_004CAAA4;
    }
  }
  else {
    if (local_8 == CASE_1) {
      if (this->field_024D != 4) goto cf_common_exit_004CA871;
    }
    else if (local_8 == CASE_6) goto cf_common_exit_004CA871;
LAB_004ca835:
    if ((this->field_0255 == 0) || (local_8 != CASE_5)) {
      iVar2 = st::fn_004022AC((STT3DSprC *)this_00,bVar6);
      if (iVar2 < (int)((local_10 - (int)param_1) + 1)) {
        iVar2 = st::fn_004022AC((STT3DSprC *)this_00,bVar6);
        local_10 = iVar2 + -1 + (int)param_1;
      }
      pAVar1 = this->field_01F5;
      iVar2 = *(int *)(&pAVar1->field_0x10 + scalar_puVar8 * 0x24);
      if (iVar2 < *(int *)(&pAVar1->field_0x14 + scalar_puVar8 * 0x24)) {
        iVar2 = *(int *)(&pAVar1->field_0x18 + scalar_puVar8 * 0x24) - iVar2;
      }
      else {
        iVar2 = iVar2 - *(int *)(&pAVar1->field_0x18 + scalar_puVar8 * 0x24);
      }
      st::fn_00401EBA(this_00,bVar6,(int)param_1,local_10,'\0');
      puVar8 = param_1;
      if (param_2 != 0) {
        if ((int)param_1 < (int)local_10) {
          if ((int)local_10 < iVar2 + (int)param_1) {
            iVar2 = 0;
          }
          puVar8 = (uint *)((int)param_1 + iVar2);
        }
        else {
          if ((int)param_1 - iVar2 < (int)local_10) {
            iVar2 = 0;
          }
          puVar8 = (uint *)((int)param_1 - iVar2);
        }
      }
      goto cf_common_exit_004CAAA4;
    }
    iVar2 = st::fn_004022AC((STT3DSprC *)this_00,bVar6);
    if (iVar2 != 1) {
      if (this->field_027D == 0x18) {
        local_c = ((0x18 - this->field_0259 / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
      }
      else if (this->field_027D == 8) {
        local_c = (((0x18 - this->field_0259 / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18) / 3;
      }
      pAVar1 = this->field_01F5;
      iVar2 = *(int *)(&pAVar1->field_0x10 + (int)puVar8 * 0x24);
      if (iVar2 < *(int *)(&pAVar1->field_0x14 + (int)puVar8 * 0x24)) {
        local_8 = *(int *)(&pAVar1->field_0x18 + (int)puVar8 * 0x24) - iVar2;
      }
      else {
        local_8 = iVar2 - *(int *)(&pAVar1->field_0x18 + (int)puVar8 * 0x24);
      }
      iVar2 = local_c + 1;
      st::fn_00401EBA(this_00,bVar6,(int)param_1 * local_c,iVar2 * (int)param_1 + -1,'\0');
      if (param_2 == 0) {
        puVar8 = (uint *)((int)param_1 * local_c);
      }
      else {
        iVar4 = (int)param_1 * local_c;
        iVar2 = iVar2 * (int)param_1 + -1;
        if (iVar4 < iVar2) {
          if (iVar2 < (int)(iVar4 + local_8)) {
            local_8 = CASE_0;
          }
          puVar8 = (uint *)(iVar4 + local_8);
        }
        else {
          if ((int)(iVar4 - local_8) < iVar2) {
            local_8 = CASE_0;
          }
          puVar8 = (uint *)(iVar4 - local_8);
        }
      }
      goto cf_common_exit_004CAAA4;
    }
  }
  st::fn_00401EBA(this_00,bVar6,0,0,'\0');
  puVar8 = nullptr;
cf_common_exit_004CAAA4:
  st::fn_00401064((STT3DSprC *)this_00,bVar6,(uint)puVar8);
  st::fn_00405240((STT3DSprC *)this_00,bVar6,g_playSystem_00802A38->field_00E4);
  return 0;
}

// 004CAFC0 TLOBaseTy::sub_004CAFC0
#line 4 "decomp/ST.exe/functions/004CAFC0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004CAFC0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_7=7;CASE_8=8;CASE_9=9;CASE_C=12;CASE_D=13;CASE_E=14;CASE_33=51;CASE_35=53;CASE_38=56;CASE_39=57;CASE_45=69;CASE_4E=78;CASE_4F=79;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5E=94;CASE_70=112

   [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=101; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_sub_004CAFC0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_7=7;CASE_8=8;CASE_9=9;CASE_C=12;CASE_D=13;CASE_E=14;CASE_33=51;CASE_35=53;CASE_38=56;CASE_39=57;CASE_45=69;CASE_4E=78;CASE_4F=79;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5E=94;CASE_70=112
    */

void __thiscall
st::fn_004CAFC0
          (TLOBaseTy *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,uint param_2,uint *param_3,
          uint *param_4)

{
  uint uVar2;
  byte bVar3;
  int uVar1;
  int iVar4;
  TLOBaseTy_field_05ACState TVar5;
  TLOBaseTy_field_0245State TVar6;

  uVar1 = st::fn_004049B7(*(char *)&this->field_023D);
  uVar1 = (int)(byte)uVar1;
  iVar4 = uVar1 + -1;
  TVar5 = this->field_05AC;
  if (TVar5 == CASE_32) {
    st::fn_00404895(this,param_1,param_2,(int *)param_3,(int *)param_4);
    return;
  }
  if (TVar5 == CASE_5C) {
    st::fn_0040253B(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_40) {
    st::fn_00403D5A(this,param_1,param_2,(int *)param_3,(int *)param_4);
    return;
  }
  if (TVar5 == CASE_49) {
    st::fn_0040288D(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_4D) {
    st::fn_004028AB(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_4C) {
    st::fn_004058B7(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_43) {
    st::fn_00405ABF(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_44) {
    st::fn_004025D6(this,param_1,param_2,(int *)param_3,(int *)param_4);
    return;
  }
  if (TVar5 == CASE_52) {
    st::fn_00403620(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_5F) {
    st::fn_00405AD3(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_68) {
    st::fn_00404AFC(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_37) {
    st::fn_004032DD(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_63) {
    st::fn_0040573B(this,param_1,param_2,param_3,param_4);
    return;
  }
  TVar6 = this->field_0245;
  if ((TVar6 == CASE_1) && (this->field_024D == 4)) {
    TVar6 = CASE_4;
  }
  switch(param_1) {
  case CASE_7:
    if (TVar5 == CASE_4E) {
      switch(this->field_04D0) {
      case CASE_0:
      case CASE_2:
      case CASE_3:
      case CASE_4:
      case CASE_5:
        *param_4 = 0;
        *param_3 = 0;
        break;
      case CASE_1:
        *param_3 = 0;
        *param_4 = 0x11;
      }
    }
    if (this->field_05AC == CASE_72) {
      switch(this->field_04D0) {
      case CASE_0:
      case CASE_2:
      case CASE_3:
      case CASE_4:
      case CASE_5:
        *param_4 = 0;
        *param_3 = 0;
        break;
      case CASE_1:
        *param_3 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        *param_4 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
      }
    }
    if (this->field_05AC != CASE_70) {
      return;
    }
    switch(this->field_04D0) {
    case CASE_0:
    case CASE_2:
    case CASE_3:
    case CASE_4:
    case CASE_5:
      *param_4 = 0;
      *param_3 = 0;
      return;
    case CASE_1:
      *param_3 = 0;
      *param_4 = 0x11;
      return;
    default:
      return;
    }
  case CASE_8:
  case CASE_9:
    goto switchD_004cb1d7_caseD_8;
  default:
    goto cf_common_exit_004CB6D2;
  case CASE_C:
    switch(TVar5) {
    case CASE_33:
      if (this->field_04E0[0x10] == 0) {
cf_common_exit_004CB489:
        uVar2 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                         (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        *param_4 = uVar2;
        *param_3 = uVar2;
        return;
      }
      break;
    case CASE_35:
    case CASE_45:
    case CASE_54:
    case CASE_55:
    case CASE_56:
    case CASE_57:
    case CASE_58:
    case CASE_59:
    case CASE_5A:
      if (this->field_04D0 != CASE_0) {
        *param_3 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        *param_4 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        return;
      }
cf_common_exit_004CB504:
      uVar2 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                       (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
      *param_4 = uVar2;
      *param_3 = uVar2;
      return;
    case CASE_38:
    case CASE_39:
    case CASE_4F:
    case CASE_5E:
      if (this->field_04D0 == CASE_0) goto cf_common_exit_004CB489;
      if (this->field_04D0 != CASE_1) {
        return;
      }
      break;
    case CASE_4E:
      switch(this->field_04D0) {
      case CASE_0:
switchD_004cb5c6_caseD_0:
        *param_4 = 0;
        *param_3 = 0;
        return;
      case CASE_1:
        goto cf_common_exit_004CB489;
      case CASE_2:
        goto cf_common_exit_004CB504;
      case CASE_3:
        break;
      case CASE_4:
switchD_004cb5c6_caseD_4:
        uVar2 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                         (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        *param_4 = uVar2;
        *param_3 = uVar2;
        return;
      case CASE_5:
switchD_004cb5c6_caseD_5:
        *param_3 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        *param_4 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        return;
      default:
        goto cf_common_exit_004CB6D2;
      }
    case CASE_70:
      switch(this->field_04D0) {
      case CASE_0:
        goto switchD_004cb5c6_caseD_0;
      case CASE_1:
        goto cf_common_exit_004CB489;
      case CASE_2:
        goto cf_common_exit_004CB504;
      case CASE_3:
        break;
      case CASE_4:
        goto switchD_004cb5c6_caseD_4;
      case CASE_5:
        goto switchD_004cb5c6_caseD_5;
      default:
        goto cf_common_exit_004CB6D2;
      }
    }
    *param_3 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                        (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
    *param_4 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                        (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
    return;
  case CASE_D:
    break;
  case CASE_E:
    goto switchD_004cb1d7_caseD_e;
  }
  if ((TVar5 == CASE_4F) && (bVar3 = st::fn_004049B7(*(char *)&this->field_023D), bVar3 == 2)) {
    *param_4 = 0;
    *param_3 = 0;
    return;
  }
switchD_004cb1d7_caseD_e:
  if ((this->field_05AC == CASE_4F) &&
     (bVar3 = st::fn_004049B7(*(char *)&this->field_023D), bVar3 == 2)) {
    if (this->field_04D0 != CASE_1) {
      uVar2 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                       (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
      *param_4 = uVar2;
      *param_3 = uVar2;
      return;
    }
  }
  else {
    TVar5 = this->field_05AC;
    if (TVar5 == CASE_6E) {
      switch(this->field_04D0) {
      case CASE_0:
        goto switchD_004cb2cd_caseD_0;
      case CASE_1:
switchD_004cb2cd_caseD_1:
        *param_3 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        *param_4 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        return;
      case CASE_2:
switchD_004cb2cd_caseD_2:
        uVar2 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                         (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        *param_4 = uVar2;
        *param_3 = uVar2;
        return;
      case CASE_3:
        *param_3 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        *param_4 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        return;
      default:
cf_common_exit_004CB6D2:
        return;
      }
    }
switchD_004cb1d7_caseD_8:
    if (TVar5 == CASE_72) {
      switch(this->field_04D0) {
      case CASE_0:
      case CASE_1:
      case CASE_2:
switchD_004cb2cd_caseD_0:
        uVar2 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                         (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        *param_4 = uVar2;
        *param_3 = uVar2;
        return;
      case CASE_3:
        goto switchD_004cb2cd_caseD_1;
      case CASE_4:
        goto switchD_004cb2cd_caseD_2;
      case CASE_5:
        *param_3 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        *param_4 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        return;
      default:
        goto cf_common_exit_004CB6D2;
      }
    }
  }
  *param_3 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                      (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
  *param_4 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                      (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
  return;
}

// 004CBA30 TLOBaseTy::sub_004CBA30
#line 4 "decomp/ST.exe/functions/004CBA30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004CBA30(TLOBaseTy *this)

{
  byte bVar1;

  bVar1 = st::fn_004049B7(*(char *)&this->field_023D);
  if (*(int *)(&DAT_00790d30 + ((uint)bVar1 + this->field_0235 * 3) * 4) != 0) {
    if (DAT_0080732c != 0) {
      st::fn_00404854(&this->field_01D5,0xc);
      st::fn_00404854(&this->field_01D5,7);
      return 0;
    }
    st::fn_00402761((STT3DSprC *)&this->field_01D5,0xc);
    st::fn_00402761((STT3DSprC *)&this->field_01D5,7);
  }
  return 0;
}

// 004CBF30 TLOBaseTy::sub_004CBF30
#line 4 "decomp/ST.exe/functions/004CBF30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_004CBF30(TLOBaseTy *this)

{
  if ((STT3DSprC *)this->field_05FF != nullptr) {
    st::fn_004021D5((STT3DSprC *)this->field_05FF);
    st::fn_0072E2B0(this->field_05FF);
    this->field_05FF = nullptr;
  }
  return;
}

// 004CC330 TLOBaseTy::sub_004CC330
#line 4 "decomp/ST.exe/functions/004CC330/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004CC330(TLOBaseTy *this)

{
  if (this->field_0603 != nullptr) {
    st::fn_004021D5(this->field_0603);
    st::fn_0072E2B0((HoloTy *)this->field_0603);
    this->field_0603 = nullptr;
  }
  return 0;
}

// 004CC880 TLOBaseTy::sub_004CC880
#line 4 "decomp/ST.exe/functions/004CC880/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004CC880(TLOBaseTy *this,undefined4 param_1)

{
  int iVar1;
  byte bVar2;

  iVar1 = this->field_0440;
  if ((((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) &&
     (this->field_0440 = param_1, this->field_0444 != 0)) {
    bVar2 = st::fn_004049B7(*(char *)&this->field_0024);
    if ((bVar2 != 3) || (this->field_043C == 2)) {
      this->field_0448 = 1;
    }
  }
  return 0;
}

// 004CC900 TLOBaseTy::sub_004CC900
#line 4 "decomp/ST.exe/functions/004CC900/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004CC900(TLOBaseTy *this)

{
  uint uVar1;

  if (((this->field_0603 != nullptr) && (this->field_0444 != 0)) && (this->field_0448 != 0)
     ) {
    this->field_0448 = 0;
    st::fn_00404264(this->field_0603,0xe);
    st::fn_00403D0F(this->field_0603);
    uVar1 = st::fn_004052CC(this->field_0603);
    st::fn_006EA2F0((void *)this->field_0211,uVar1);
    st::fn_0040498A(this->field_0603,0xe);
    this->field_044C = -1;
    uVar1 = g_playSystem_00802A38->field_00E4;
    this->field_043C = 0;
    this->field_0450 = uVar1;
  }
  return 0;
}

// 004CE7D0 TLOBaseTy::sub_004CE7D0
#line 4 "decomp/ST.exe/functions/004CE7D0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_004CE7D0(TLOBaseTy *this)

{
  TLOBaseTy_field_04D0State TVar1;
  int iVar2;

  iVar2 = 1;
  TVar1 = this->field_04D0;
  if (TVar1 != CASE_0) {
    if ((TVar1 != CASE_1) && (TVar1 != CASE_2)) {
      iVar2 = 0;
    }
    if ((this->field_05AC == CASE_40) || (this->field_05AC == CASE_49)) {
      return 0;
    }
    if ((iVar2 != 0) && (this->field_04DC != 0)) {
      st::fn_00401DD4(st::pointer_boundary_cast<void *>(DAT_00800bcc),this->field_04E0[0],this->field_04E0[1],this->field_04E0[2]);
      this->field_04DC = 0;
    }
  }
  return iVar2;
}

// 004CE860 TLOBaseTy::sub_004CE860
#line 4 "decomp/ST.exe/functions/004CE860/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004CE860(TLOBaseTy *this)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_packedRecords_A62x8[(int)this->field_0024].field1970_0x9de;
  if ((array != nullptr) && (index = 0, local_8 = this, 0 < (int)array->count)) {
    while( true ) {
      st::fn_006ACC70(array,index,&local_8);
      if (local_8->field_04E0[*(int *)&this->field_0x369 + -1] != 0) break;
      index = index + 1;
      array = g_packedRecords_A62x8[(int)this->field_0024].field1970_0x9de;
      if ((int)array->count <= (int)index) {
        return 0;
      }
    }
    local_8->field_04E0[*(int *)&this->field_0x369 + -1] =st::machine_word_boundary_cast<uint>(
         local_8->field_04E0[*(int *)&this->field_0x369 + -1] - 1);
    this->field_0398 = (this->field_0398 * 0x32) / 100;
    this->field_039C = (this->field_039C * 0x32) / 100;
    this->field_03A0 = (this->field_03A0 * 0x32) / 100;
    this->field_03A4 = (this->field_03A4 * 0x32) / 100;
  }
  return 0;
}

// 004CEB00 TLOBaseTy::sub_004CEB00
#line 4 "decomp/ST.exe/functions/004CEB00/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=2; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004CEC35 TEST DX,DX classifies dword parameter loaded at 004CEC1A | 004CEC3A CMP
   DX,word ptr [0x007fb244] classifies dword parameter loaded at 004CEC1A */

undefined4 __thiscall st::fn_004CEB00(TLOBaseTy *this,int param_1)

{
  char cVar1;
  TLOBaseTy_field_05ACState TVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int uVar7;
  int iVar6;
  short sVar7;
  uint uVar8;
  short sVar10;
  TLOBaseTyVTable *pTVar11;
  char *pcVar12;
  byte **ppbVar13;
  char *pcVar14;
  undefined2 arg_2;
  byte *local_6c [5];
  byte *local_58;
  int local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  char local_3a [15];
  undefined4 local_2b;
  int local_24;
  undefined2 local_20 [2];
  int local_1c;
  uint local_18;
  int local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;

  local_10 = 0;
  if (g_playSystem_00802A38->field_00E4 < this->field_03CC + this->field_03D0) {
    return 0;
  }
  this->field_03CC = g_playSystem_00802A38->field_00E4;
  switch(this->field_04D0) {
  case CASE_1:
    switch(this->field_05AC) {
    case CASE_32:
    case CASE_5C:
      goto switchD_004ceb68_caseD_32;
    default:
      return 0;
    case CASE_40:
    case CASE_49:
      iVar6 = st::fn_004042AF(&this->field_01D5,'\x0e');
      if (iVar6 != this->field_01F5->field_020C) {
        return local_10;
      }
switchD_004ceb68_caseD_32:
      this->field_04DC = 0;
      this->field_04D0 = CASE_2;
      return local_10;
    }
  case CASE_2:
    iVar6 = st::fn_00402E87((int *)this->field_0024,0);
    if (iVar6 == 0) {
      if (DAT_00811798 == nullptr) {
        return local_10;
      }
      st::fn_00402AF4(st::pointer_boundary_cast<void *>(DAT_00811798),this->field_0024,8);
      return local_10;
    }
    if ((this->field_05AC == CASE_32) || (local_14 = 1, this->field_05AC == CASE_5C)) {
      local_14 = 2;
    }
    local_c = this->field_05B4;
    local_1c = local_c + local_14;
    if (local_1c <= (int)local_c) {
      return local_10;
    }
    local_18 = this->field_05B0;
    local_14 = local_14 + local_18;
    do {
      if ((int)local_18 < local_14) {
        sVar10 = (short)this->field_05B8 + 1;
        local_8 = local_18;
        do {
          sVar4 = (short)local_8;
          if ((((sVar4 < 0) || (g_worldGrid.sizeX <= sVar4)) || (sVar7 = (short)local_c, sVar7 < 0))
             || (((g_worldGrid.sizeY <= sVar7 || (sVar10 < 0)) ||
                 ((g_worldGrid.sizeZ <= sVar10 ||
                  (STGridAt3D(g_worldGrid, sVar4, sVar7, sVar10).objects[0] == nullptr)))))) {
            this->field_04E0[0] = local_8;
            iVar6 = this->field_05B8;
            this->field_04DC = 1;
            this->field_04E0[1] = local_c;
            this->field_04E0[2] = iVar6 + 1;
            if (DAT_00800bcc == nullptr) {
              st::fn_004032B5();
            }
            st::fn_00401582(st::pointer_boundary_cast<void *>(DAT_00800bcc),this->field_04E0[0],this->field_04E0[1],
                               this->field_04E0[2]);
            this->field_04D0 = CASE_3;
            this->field_03D0 = 1;
            st::fn_00402CF7(this,0);
            TVar2 = this->field_05AC;
            if (TVar2 == CASE_5C) {
              this->vfunc_90(3,0x39b);
              return local_10;
            }
            if (TVar2 == CASE_32) {
              bVar3 = st::fn_004049B7(*(char *)&this->field_023D);
              if (bVar3 != 2) {
                this->vfunc_90(3,0x1f9);
                return local_10;
              }
              this->vfunc_90(3,0x2c1);
              return local_10;
            }
            if (TVar2 != CASE_40) {
              if (TVar2 != CASE_49) {
                return local_10;
              }
              this->vfunc_90(3,800);
              return local_10;
            }
            this->vfunc_90(3,0x254);
            return local_10;
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < local_14);
      }
      local_c = local_c + 1;
      if (local_1c <= (int)local_c) {
        return local_10;
      }
    } while( true );
  case CASE_3:
    if ((this->field_05AC == CASE_32) || (iVar6 = 1, this->field_05AC == CASE_5C)) {
      iVar6 = 2;
    }
    iVar5 = st::fn_004042AF(&this->field_01D5,'\t');
    if ((*(int *)&this->field_01F5->field_0x154 + iVar6 <= iVar5) &&
       ((*(uint *)&this->field_05FF->field_0x1c & 0x4000) == 0)) {
      st::fn_00402E1E(this);
    }
    iVar6 = st::fn_004042AF(&this->field_01D5,'\x0e');
    if (iVar6 != this->field_01F5->field_020C) {
      return local_10;
    }
    st::fn_00401DD4(st::pointer_boundary_cast<void *>(DAT_00800bcc),this->field_04E0[0],this->field_04E0[1],this->field_04E0[2]);
    iVar6 = 0x11;
    ppbVar13 = local_6c;
    while( true ) {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      *ppbVar13 = nullptr;
      ppbVar13 = ppbVar13 + 1;
    }
    *(undefined1 *)ppbVar13 = 0;
    this->field_04DC = 0;
    st::fn_00405795(this,(int *)&local_8,(int *)&local_c,(int *)local_20);
    local_50 = (undefined2)this->field_04E0[0];
    local_6c[3] = (byte *)0x1;
    local_6c[2] = (byte *)0x1;
    local_6c[1] = this->field_0024;
    local_54 = param_1;
    local_4e = (undefined2)this->field_04E0[1];
    local_4c = (undefined2)this->field_04E0[2];
    local_4a = (undefined2)local_8;
    local_46 = local_20[0];
    local_48 = (undefined2)local_c;
    local_44 = this->field_0032;
    local_6c[0] = (byte *)0x14;
    local_42 = 0xfffe;
    if (-1 < (int)this->field_0371) {
      local_42 = (undefined2)this->field_0371;
    }
    uVar8 = 0xffffffff;
    if (this->field_042C == 0) {
      local_3c = 0xffff;
      local_3e = 0xffff;
      local_40 = 0xffff;
    }
    else {
      local_40 = *(undefined2 *)&this->field_0430;
      local_3e = *(undefined2 *)&this->field_0434;
      local_3c = *(undefined2 *)&this->field_0438;
    }
    local_58 = local_6c[1];
    if ((byte *)this->field_0379 != (byte *)0xff) {
      local_58 = (byte *)this->field_0379;
    }
    pcVar12 = (char *)&this->field_037D;
    do {
      pcVar14 = pcVar12;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar12 = pcVar14 + -uVar8;
    pcVar14 = local_3a;
    memmove(pcVar14, pcVar12, uVar8); /* compiler REP MOVS byte copy */
    local_2b = this->field_0375;
    st::fn_00401BC2(g_playSystem_00802A38,0x14,0,st::machine_word_boundary_cast<undefined4>(&local_24),st::machine_word_boundary_cast<undefined4>(local_6c),0);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this->field_04D4 = *(int *)(local_24 + 0x18);
    this->field_04D8 = 0;
    if (this->field_0024 != (byte *)(uint)(byte)this->field_0010->field_112D)
    goto cf_common_exit_004CF029;
    st::fn_00402D5B(0,(float)this->field_01F9,(float)this->field_01FD);
    uVar7 = st::fn_004049B7(*(char *)&this->field_0024);
    uVar7 = (int)(byte)uVar7;
    if (uVar7 == 1) {
      pTVar11 = this->vtable;
      arg_2 = 0x65;
    }
    else {
      if (uVar7 == 2) {
        this->vfunc_90(6,0x66);
        goto cf_common_exit_004CF029;
      }
      if (uVar7 != 3) goto cf_common_exit_004CF029;
      pTVar11 = this->vtable;
      arg_2 = 0x67;
    }
    (*pTVar11->vfunc_90)(this,6,arg_2);
cf_common_exit_004CF029:
    this->field_04D0 = CASE_4;
    this->field_03D0 = 5;
    st::fn_00402CF7(this,1);
    st::fn_00403616(this);
    return local_10;
  case CASE_4:
    if (this->field_04D8 == 0) {
      return 0;
    }
    TVar2 = this->field_05AC;
    switch(TVar2) {
    case CASE_32:
    case CASE_5C:
      this->field_04D0 = CASE_5;
      this->field_03D0 = 1;
      if (TVar2 == CASE_5C) {
        this->vfunc_90(3,0x39c);
      }
      else if (TVar2 == CASE_32) {
        bVar3 = st::fn_004049B7(*(char *)&this->field_023D);
        if (bVar3 == 2) {
          this->vfunc_90(3,0x2c2);
        }
        else {
          this->vfunc_90(3,0x1fa);
        }
      }
      else if (TVar2 == CASE_40) {
        this->vfunc_90(3,0x255);
      }
      else if (TVar2 == CASE_49) {
        this->vfunc_90(3,0x321);
      }
      break;
    case CASE_40:
    case CASE_49:
switchD_004cf07f_caseD_40:
      this->field_04D0 = CASE_0;
      local_10 = 1;
    }
    break;
  case CASE_5:
    iVar6 = st::fn_004042AF(&this->field_01D5,'\x0e');
    if (iVar6 != this->field_01F5->field_020C) {
      return local_10;
    }
    this->field_03D0 = 5;
    if ((this->field_05AC == CASE_32) || (this->field_05AC == CASE_5C))
    goto switchD_004cf07f_caseD_40;
    break;
  default:
    goto switchD_004ceb47_default;
  }
  st::fn_00402CF7(this,1);
switchD_004ceb47_default:
  return local_10;
}

// 004CF4E0 TLOBaseTy::FUN_004cf4e0
#line 4 "decomp/ST.exe/functions/004CF4E0/decomp.c"
undefined4 __thiscall
st::fn_004CF4E0
          (TLOBaseTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,char *param_6)

{
  int iVar1;
  AnonPointee_TLOBaseTy_0607 *pAVar2;

  if (*(int *)&this->field_0x361 != 0) {
    st::fn_00404B6A(this);
  }
  if (this->field_03D8 <= this->field_03D4 + 1) {
    iVar1 = st::machine_word_boundary_cast<int>(this->field_03D8 + 0x14);
    this->field_03D8 = iVar1;
    pAVar2 = st::pointer_boundary_cast<AnonPointee_TLOBaseTy_0607 *>(st::fn_006ACF50(this->field_0607,iVar1 * 0x27));
    this->field_0607 = pAVar2;
  }
  st::fn_0072DA70
            ((undefined4 *)((int)&this->field_0607[1].field_000C + 3),this->field_0607,
             st::machine_word_boundary_cast<uint>(this->field_03D4 * 0x27));
  this->field_0607->field_0000 = 1;
  this->field_0607->field_0004 = param_1;
  this->field_0607->field_0008 = param_2;
  this->field_0607->field_000C = param_3;
  this->field_0607->field_0010 = param_4;
  this->field_0607->field_0014 = param_5;
  pAVar2 = this->field_0607;
  pAVar2[1].field_0000 = 0;
  pAVar2[1].field_0004 = 0;
  pAVar2[1].field_0008 = 0;
  *(undefined2 *)&pAVar2[1].field_000C = 0;
  *(undefined1 *)((int)&pAVar2[1].field_000C + 2) = 0;
  if (param_6 != nullptr) {
    st::fn_0072E340((char *)(this->field_0607 + 1),param_6,0xf);
  }
  this->field_03D4 = st::machine_word_boundary_cast<int>(this->field_03D4 + 1);
  st::fn_00405A2E(this);
  return 0;
}

// 004CFA00 TLOBaseTy::sub_004CFA00
#line 4 "decomp/ST.exe/functions/004CFA00/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004CFA00_param_1Enum. Cases:
   CASE_8=8;CASE_9=9;CASE_D=13;CASE_E=14

   [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=13; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_sub_004CFA00_param_1Enum. Cases:
   CASE_8=8;CASE_9=9;CASE_D=13;CASE_E=14 */

void __thiscall
st::fn_004CFA00
          (TLOBaseTy *this,TLOBaseTy_sub_004CFA00_param_1Enum param_1,int param_2,int *param_3,
          int *param_4)

{
  TLOBaseTy_field_0245State TVar1;
  TLOBaseTy_field_04D0State TVar2;
  byte bVar3;
  int iVar4;
  int iVar5;

  bVar3 = st::fn_004049B7(*(char *)&this->field_023D);
  iVar4 = (-(uint)(bVar3 != 1) & 0xfffffffd) + 0x13;
  bVar3 = st::fn_004049B7(*(char *)&this->field_023D);
  TVar1 = this->field_0245;
  iVar5 = bVar3 - 1;
  switch(param_1) {
  case CASE_8:
  case CASE_9:
    TVar2 = this->field_04D0;
    break;
  default:
    goto switchD_004cfa5c_caseD_a;
  case CASE_D:
  case CASE_E:
    TVar2 = this->field_04D0;
  }
  if (TVar2 == CASE_3) {
    iVar5 = *(int *)((&PTR_DAT_007b5170)[TVar1] + (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8
                    );
    *param_3 = iVar5;
    *param_4 = iVar5 + iVar4;
    return;
  }
  if (TVar2 == CASE_4) {
    iVar5 = *(int *)((&PTR_DAT_007b5170)[TVar1] + (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8
                    );
    *param_3 = iVar5 + iVar4;
    *param_4 = iVar5 + iVar4;
    return;
  }
  if (TVar2 == CASE_5) {
    iVar5 = *(int *)((&PTR_DAT_007b5170)[TVar1] + (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8
                    );
    *param_4 = iVar5;
    *param_3 = iVar5 + iVar4;
    return;
  }
  *param_3 = *(int *)((&PTR_DAT_007b5170)[TVar1] +
                     (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8);
  *param_4 = *(int *)((&PTR_DAT_007b5170)[TVar1] +
                     (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8 + 4);
switchD_004cfa5c_caseD_a:
  return;
}

// 004D6DF0 TLOBaseTy::sub_004D6DF0
#line 4 "decomp/ST.exe/functions/004D6DF0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_004D6DF0(TLOBaseTy *this)

{
  dword dVar1;
  int iVar2;

  dVar1 = this->slot_2C();
  if (((int)dVar1 < 0x32) || (dVar1 = this->slot_2C(), 0x73 < (int)dVar1)) {
    dVar1 = this->slot_2C();
    if ((int)dVar1 < 1) {
      return 0;
    }
    dVar1 = this->slot_2C();
    if (0x28 < (int)dVar1) {
      return 0;
    }
    dVar1 = this->slot_2C();
    iVar2 = *(int *)(&DAT_007e061c + dVar1 * 4);
  }
  else {
    dVar1 = this->slot_2C();
    iVar2 = *(int *)(&DAT_007e22f8 + dVar1 * 4);
  }
  if (iVar2 == 0) {
    return 0;
  }
  dVar1 = this->slot_C4();
  return (int)((100 - dVar1) * iVar2) / 100;
}

// 004DC150 TLOBaseTy::sub_004DC150
#line 4 "decomp/ST.exe/functions/004DC150/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_004DC150(TLOBaseTy *this)

{
  int iVar1;
  TLOBaseTy *local_8;

  if (this->field_04C0 != 0) {
    this->field_04C0 = 0;
    local_8 = this;
    if (this->field_061F != nullptr) {
      st::fn_004049EE((int *)this->field_061F);
      st::fn_0072E2B0(this->field_061F);
      this->field_061F = nullptr;
    }
    iVar1 = st::fn_006E62D0(g_playSystem_00802A38,this->field_04C4,(int *)&local_8);
    if (iVar1 == 0) {
      st::fn_00401C2B(local_8,this->field_0018);
    }
  }
  return;
}

// 004DE7D0 TLOBaseTy::sub_004DE7D0
#line 4 "decomp/ST.exe/functions/004DE7D0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_004DE7D0(TLOBaseTy *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;

  if (((int)(this->field_04D0 + param_3) < DAT_007e6190) &&
     (iVar1 = st::fn_0040186B((int)this->field_0024,0x19), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

// 004DF9F0 TLOBaseTy::sub_004DF9F0
#line 4 "decomp/ST.exe/functions/004DF9F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004DF9F0(TLOBaseTy *this)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_packedRecords_A62x8[(int)this->field_0024].field1967_0x9d2;
  if (array != nullptr) {
    index = 0;
    local_8 = this;
    if (0 < (int)array->count) {
      do {
        st::fn_006ACC70(array,index,&local_8);
        if (local_8 == this) {
          st::fn_006B0C70(g_packedRecords_A62x8[(int)this->field_0024].field1967_0x9d2,index);
          break;
        }
        index = index + 1;
        array = g_packedRecords_A62x8[(int)this->field_0024].field1967_0x9d2;
      } while ((int)index < (int)array->count);
    }
    if ((g_packedRecords_A62x8[(int)this->field_0024].field1967_0x9d2)->count == 0) {
      st::fn_006AE110(g_packedRecords_A62x8[(int)this->field_0024].field1967_0x9d2);
      g_packedRecords_A62x8[(int)this->field_0024].field1967_0x9d2 = nullptr;
    }
  }
  return 0;
}

// 004E2AD0 TLOBaseTy::sub_004E2AD0
#line 4 "decomp/ST.exe/functions/004E2AD0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92
    */

undefined4 __thiscall st::fn_004E2AD0(TLOBaseTy *this,int param_1,uint param_2)

{
  byte *pbVar1;
  int uVar2;
  undefined4 uVar3;
  TLOBaseTyVTable *pTVar5;
  undefined2 arg_2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;

  if (param_1 != 2) {
    return 0;
  }
  this->field_04D0 = CASE_1;
  st::fn_00402CF7(this,1);
  st::fn_0040380A(this->field_0024,param_2);
  if (this->field_0024 != (byte *)(uint)(byte)this->field_0010->field_112D)
  goto cf_common_exit_004E2B69;
  uVar2 = st::fn_004049B7(*(char *)&this->field_023D);
  uVar2 = (int)(byte)uVar2;
  if (uVar2 == 1) {
    pTVar5 = this->vtable;
    arg_2 = 0x20c;
  }
  else {
    if (uVar2 == 2) {
      this->vfunc_90(4,0x2d4);
      goto cf_common_exit_004E2B69;
    }
    if (uVar2 != 3) goto cf_common_exit_004E2B69;
    pTVar5 = this->vtable;
    arg_2 = 0x38f;
  }
  (*pTVar5->vfunc_90)(this,4,arg_2);
cf_common_exit_004E2B69:
  if (DAT_008117bc == nullptr) {
    return 0;
  }
  pbVar1 = this->field_0024;
  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  local_e = this->field_0032;
  local_10 = *(undefined2 *)&this->field_0024;
  local_14 = 0x5de6;
  local_c = (undefined2)param_2;
  uVar3 = st::fn_0040186B((int)pbVar1,param_2);
  local_a = (short)uVar3 + 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)*DAT_008117bc)(local_24);
  return 0;
}

// 004E2C30 TLOBaseTy::FUN_004e2c30
#line 4 "decomp/ST.exe/functions/004E2C30/decomp.c"
/* [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92
    */

undefined4 __thiscall st::fn_004E2C30(TLOBaseTy *this,uint param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 uVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar4;
  undefined4 uVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int local_EAX_634;
  int uVar5;
  int local_EAX_741;
  int local_EAX_816;
  int local_EAX_884;
  TLOBaseTyVTable *pTVar7;
  byte *puVar8;
  byte *puVar9;
  byte *pbVar10;
  int *piVar11;
  undefined2 uVar12;
  int *piVar13;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  short local_46;
  byte local_40 [20];
  undefined4 local_2c [5];
  byte *local_18;
  undefined4 *local_14;
  uint local_10;
  int local_c;
  int local_8;

  uVar3 = st::fn_0040530D((int)this->field_0024,param_1);
  iVar4 = st::fn_0040186B((int)this->field_0024,param_1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT31(extraout_var,uVar3) <= iVar4) goto cf_common_exit_004E2FE4;
  iVar4 = st::fn_004042AF(&this->field_01D5,'\f');
  if (iVar4 != this->field_01F5->field_01C4) {
    return 0;
  }
  local_10 = st::fn_0040186B((int)this->field_0024,param_1);
  pbVar1 = this->field_0024;
  puVar8 = (byte *)&g_packedRecords_A62x8[(int)pbVar1].field_0x2eb;
  puVar9 = (byte *)(local_2c);
  memmove(puVar9, puVar8, 0x14); /* compiler REP MOVS byte copy */
  iVar4 = 0;
  puVar8 = (byte *)(&g_packedRecords_A62x8[(int)pbVar1].field376_0x2ff);
  pbVar10 = local_40;
  memmove(pbVar10, puVar8, 0x14); /* compiler REP MOVS byte copy */
  st::fn_00402130(pbVar1,param_1,local_10 + 1);
  st::fn_00401D66(this->field_0024,param_1);
  if (DAT_008117bc != nullptr) {
    pbVar1 = this->field_0024;
    memset(local_60, 0, 0x20); /* compiler bulk-zero initialization */
    iVar4 = 0;
    local_4a = this->field_0032;
    local_4c = *(undefined2 *)&this->field_0024;
    local_50 = 0x5de7;
    local_48 = (undefined2)param_1;
    uVar6 = st::fn_0040186B((int)pbVar1,param_1);
    local_46 = (short)uVar6;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*DAT_008117bc)(local_60);
    memset(local_60, 0, 0x20); /* compiler bulk-zero initialization */
    local_4c = *(undefined2 *)&this->field_0024;
    local_14 = local_2c;
    local_50 = 0x5dea;
    local_10 = 0;
    do {
      uVar2 = local_10;
      if (((((*(byte *)((int)local_14 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) !=
             0) && (local_18 = local_40,
                   (local_18[(int)(local_10 ^ 7) >> 3] >> ((local_10 ^ 7) & 7) & 1) == 0)) &&
          (local_18 = st::pointer_boundary_cast<byte *>(&g_packedRecords_A62x8[(int)this->field_0024].field_0x2eb),
          (local_18[(int)(local_10 ^ 7) >> 3] >> ((local_10 ^ 7) & 7) & 1) != 0)) &&
         (local_18 = (byte *)&g_packedRecords_A62x8[(int)this->field_0024].field376_0x2ff,
         (*(byte *)((int)local_18 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) != 0))
      {
        uVar3 = st::fn_0040530D((int)this->field_0024,local_10);
        iVar4 = st::fn_0040186B((int)this->field_0024,uVar2);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (iVar4 < CONCAT31(extraout_var_00,uVar3)) {
          local_48 = (undefined2)uVar2;
          uVar6 = st::fn_0040186B((int)this->field_0024,uVar2);
          local_46 = (short)uVar6 + 1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)*DAT_008117bc)(local_60);
        }
      }
      local_10 = uVar2 + 1;
    } while ((int)local_10 < 0x9b);
  }
  if (this->field_0024 != (byte *)(uint)(byte)this->field_0010->field_112D)
  goto cf_common_exit_004E2FE4;
  st::fn_00402D5B(0,(float)this->field_01F9,(float)this->field_01FD);
  piVar13 = &local_c;
  piVar11 = &local_8;
  local_8 = 0;
  local_c = 0;
  local_EAX_634 = st::fn_004049B7(*(char *)&this->field_0024);
  local_EAX_634 = (int)(byte)local_EAX_634;
  st::fn_00405448(local_EAX_634,param_1,st::pointer_boundary_cast<undefined4 *>(piVar11),st::pointer_boundary_cast<undefined4 *>(piVar13));
  if (local_8 != 0) {
    uVar5 = st::fn_004049B7(*(char *)&this->field_0024);
    uVar5 = (int)(byte)uVar5;
    if (uVar5 == 1) {
      pTVar7 = this->vtable;
      uVar12 = 0x5f;
LAB_004e2efc:
      (*pTVar7->vfunc_90)(this,6,uVar12);
    }
    else if (uVar5 == 2) {
      this->vfunc_90(6,0x60);
    }
    else if (uVar5 == 3) {
      pTVar7 = this->vtable;
      uVar12 = 0x61;
      goto LAB_004e2efc;
    }
  }
  if (local_c != 0) {
    local_EAX_741 = st::fn_004049B7(*(char *)&this->field_0024);
    local_EAX_741 = (int)(byte)local_EAX_741;
    if (local_EAX_741 == 1) {
      pTVar7 = this->vtable;
      uVar12 = 0x5c;
LAB_004e2f42:
      (*pTVar7->vfunc_90)(this,6,uVar12);
    }
    else if (local_EAX_741 == 2) {
      this->vfunc_90(6,0x5d);
    }
    else if (local_EAX_741 == 3) {
      pTVar7 = this->vtable;
      uVar12 = 0x5e;
      goto LAB_004e2f42;
    }
  }
  if ((local_8 == 0) && (local_c == 0)) {
    local_EAX_816 = st::fn_004049B7(*(char *)&this->field_0024);
    local_EAX_816 = (int)(byte)local_EAX_816;
    if (local_EAX_816 == 1) {
      pTVar7 = this->vtable;
      uVar12 = 0x59;
LAB_004e2f8d:
      (*pTVar7->vfunc_90)(this,6,uVar12);
    }
    else if (local_EAX_816 == 2) {
      this->vfunc_90(6,0x5a);
    }
    else if (local_EAX_816 == 3) {
      pTVar7 = this->vtable;
      uVar12 = 0x5b;
      goto LAB_004e2f8d;
    }
  }
  local_EAX_884 = st::fn_004049B7(*(char *)&this->field_023D);
  local_EAX_884 = (int)(byte)local_EAX_884;
  if (local_EAX_884 == 1) {
    pTVar7 = this->vtable;
    uVar12 = 0x20d;
  }
  else {
    if (local_EAX_884 == 2) {
      this->vfunc_90(4,0x2d5);
      goto cf_common_exit_004E2FE4;
    }
    if (local_EAX_884 != 3) goto cf_common_exit_004E2FE4;
    pTVar7 = this->vtable;
    uVar12 = 0x390;
  }
  (*pTVar7->vfunc_90)(this,4,uVar12);
cf_common_exit_004E2FE4:
  this->field_04D0 = CASE_0;
  st::fn_00402CF7(this,1);
  return 1;
}

// 004E3120 TLOBaseTy::sub_004E3120
#line 4 "decomp/ST.exe/functions/004E3120/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92
    */

undefined4 __thiscall st::fn_004E3120(TLOBaseTy *this)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;

  if (*(int *)&this->field_0x361 == 2) {
    st::fn_00401D66(this->field_0024,*(uint *)&this->field_0x369);
    if (DAT_008117bc != nullptr) {
      uVar1 = *(undefined2 *)&this->field_0024;
      memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
      local_e = this->field_0032;
      local_c = *(undefined2 *)&this->field_0x369;
      local_14 = 0x5de8;
      local_10 = uVar1;
      uVar2 = st::fn_0040186B((int)this->field_0024,*(int *)&this->field_0x369);
      local_a = (short)uVar2 + 1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)*DAT_008117bc)(local_24);
    }
    this->field_04D0 = CASE_0;
    st::fn_00402CF7(this,1);
  }
  return 1;
}

// 004EA620 TLOBaseTy::sub_004EA620
#line 4 "decomp/ST.exe/functions/004EA620/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115;CASE_FFFFFFFF=4294967295
    */

undefined4 __thiscall st::fn_004EA620(TLOBaseTy *this)

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
      st::fn_00401DD4(st::pointer_boundary_cast<void *>(DAT_00800bcc),this->field_0480,this->field_0484,this->field_0488);
      this->field_0494 = 0;
    }
  }
  return 1;
}

