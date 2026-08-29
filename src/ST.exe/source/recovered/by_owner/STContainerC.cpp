#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STContainerC.cpp

// 005F0D90 STContainerC::sub_005F0D90
#line 4 "decomp/ST.exe/functions/005F0D90/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STContainerC.
   Evidence: this_call_owners=[STContainerC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005F0D90(STContainerC *this)

{
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = reinterpret_cast<STMessage *>(&pSVar2->unknown_04);
    }
    local_24.arg0.words.high = this->field_0032;
    if ((this->field_030D == '\0') || (this->field_030E == 0xff)) {
      local_24.arg1.words.low = 0xff;
    }
    else {
      local_24.arg1.words.high = this->field_030F;
      local_24.arg1.words.low = (word)(byte)this->field_030E;
    }
    local_24.id = 0x5dd7;
    /* ST_CALLSITE[005F0DF8]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
  return;
}

// 005FC3E0 STContainerC::sub_005FC3E0
#line 4 "decomp/ST.exe/functions/005FC3E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STContainerC.
   Evidence: this_call_owners=[STContainerC]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 005FC3E0 returns return of sub_006E60A0 @ 005FC416 */

int __thiscall st::fn_005FC3E0(STContainerC *this)

{
  int iVar1;
  uint local_24 [3];
  uint local_18;
  uint local_14;
  uint local_10;
  local_18 = 0;
  local_10 = this->field_0008;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(this,local_24);
  this->field_023A = 6;
  return iVar1;
}

// 005FC450 STContainerC::sub_005FC450
#line 4 "decomp/ST.exe/functions/005FC450/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 00405AF6
   Slots: 0x124
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:73 calls=4
   caller_families=2 receiver_extent=578/1147; unique_owner_for_target */

bool __thiscall st::fn_005FC450(STContainerC *this,int param_1)

{
  int iVar1;

  iVar1 = this->field_023E - param_1;
  this->field_023E = iVar1;
  if (iVar1 < 1) {
    this->field_023E = 0;
  }
  return this->field_023E == 0;
}

// 005FCC70 STContainerC::sub_005FCC70
#line 4 "decomp/ST.exe/functions/005FCC70/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 004056E6
   Slots: 0x74
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=864/1147; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall st::fn_005FCC70(STContainerC *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  pcVar4 = (char *)&this->field_0x35c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  memmove(param_1, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 005FCCB0 STContainerC::vfunc_70
#line 4 "decomp/ST.exe/functions/005FCCB0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 00401B5E
   Slots: 0x70
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=864/1147; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall st::fn_005FCCB0(STContainerC *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar4_mg1;
  char *pcVar4_mg0;

  uVar2 = 0xffffffff;
  pcVar4_mg0 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar4_mg0 + 1;
  } while (cVar1 != '\0');
  if (0xe < ~uVar2 - 1) {
    st::fn_0072E340(reinterpret_cast<char *>(&this->field_0x35c),param_1,0xe);
    this->field_036A = 0;
    return;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4_mg1 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4_mg1 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4_mg1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4_mg1 + -uVar2;
  pcVar5 = (char *)&this->field_0x35c;
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 005FCD80 STContainerC::vfunc_12C
#line 4 "decomp/ST.exe/functions/005FCD80/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 0040389B
   Slots: 0x12C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005FCD80(STContainerC *this)

{
  return this->field_032A;
}

// 005FCDA0 STContainerC::vfunc_130
#line 4 "decomp/ST.exe/functions/005FCDA0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 004038C3
   Slots: 0x130
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005FCDA0(STContainerC *this)

{
  return this->field_0346;
}

// 005FCE30 STContainerC::vfunc_138
#line 4 "decomp/ST.exe/functions/005FCE30/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C84C>00401C21 | P:0079C84C>00401C21

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 00401C21
   Slots: 0x138
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005FCE30(STContainerC *this)

{
  return this->field_034A;
}

// 005FCE50 STContainerC::vfunc_13C
#line 4 "decomp/ST.exe/functions/005FCE50/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C850>004020A9 | P:0079C850>004020A9

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 004020A9
   Slots: 0x13C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005FCE50(STContainerC *this)

{
  return (dword)&this->field_0x36b;
}

// 005FCE70 STContainerC::vfunc_140
#line 4 "decomp/ST.exe/functions/005FCE70/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005FCE70 returns return of Library::MSVCRT::_strncpy @ 005FCE97

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 00402C75
   Slots: 0x140
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1135/1147; unique_owner_for_target */

char * __thiscall st::fn_005FCE70(STContainerC *this,char *param_1)

{
  char *pcVar1;

  pcVar1 = st::fn_0072E340(reinterpret_cast<char *>(&this->field_0x36b),param_1,0x103);
  this->field_046E = 0;
  return pcVar1;
}

// 005FD360 STContainerC::vfunc_128
#line 4 "decomp/ST.exe/functions/005FD360/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C83C>00404476 | P:0079C83C>00404476

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C714
   Entries: 00404476
   Slots: 0x128
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005FD360(STContainerC *this)

{
  return this->field_0358;
}
