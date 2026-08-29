#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STVolcanoC.cpp

// 00646C90 STVolcanoC::STVolcanoC
#line 4 "decomp/ST.exe/functions/00646C90/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D610 (store 00646C9B)
   Evidence: final_vptr=0079D610; returns_this=true; calls_before=1; field_writes_after=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

STVolcanoC * __thiscall st::fn_00646C90(STVolcanoC *this)

{

  st::fn_006E60E0(this);
  this->vtable = &st_global_0079D610;
  memset(&this->field_0x1c, 0, 0x95); /* compiler bulk-zero initialization */
  this->field_005D = -1;
  this->field_007A = -1;
  this->field_0086 = -1;
  return this;
}

// 00646D40 STVolcanoC::sub_00646D40
#line 4 "decomp/ST.exe/functions/00646D40/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STVolcanoC.
   Evidence: this_call_owners=[STVolcanoC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 00646D40 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 006469B1 */

byte * __thiscall st::fn_00646D40(STVolcanoC *this,undefined4 *param_1)

{
  byte *pbVar1;
  byte *pbVar3;
  byte *pbVar4;

  /* ST_CALLSITE[00646D4C]: CALL 0x006aac70; direct=006AAC70 Library::DKW::LIB::MemAlloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/byte; source view only; no Ghidra override */
  pbVar1 = (byte *)st::fn_006AAC70(0x95);
  this->field_0028 = 2;
  this->field_00AD = this->field_00B1;
  if (this == nullptr) {
    pbVar3 = nullptr;
  }
  else {
    pbVar3 = &this->field_0x1c;
  }
  pbVar4 = pbVar1;
  memmove(pbVar4, pbVar3, 0x95); /* compiler REP MOVS byte copy */
  *param_1 = 0x95;
  return pbVar1;
}

// 00646DB0 STVolcanoC::sub_00646DB0
#line 4 "decomp/ST.exe/functions/00646DB0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STVolcanoC.
   Evidence: this_call_owners=[STVolcanoC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_00646DB0(STVolcanoC *this,undefined4 *param_1)

{
  byte *puVar2;

  if (this == nullptr) {
    puVar2 = nullptr;
  }
  else {
    puVar2 = reinterpret_cast<byte *>(&this->field_0x1c);
  }
  memmove(puVar2, param_1, 0x95); /* compiler REP MOVS byte copy */
  this->field_0061 = nullptr;
  this->field_005D = -1;
  this->field_007A = -1;
  this->field_0086 = -1;
  return 0x95;
}

// 006472B0 STVolcanoC::sub_006472B0
#line 4 "decomp/ST.exe/functions/006472B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STVolcanoC.
   Evidence: this_call_owners=[STVolcanoC]; agreed_this_calls=1; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_006472B0(STVolcanoC *this)

{
  uint uVar1;
  int iVar2;

  uVar1 = 0;
  iVar2 = this->field_0050 + 1;
  this->field_0050 = iVar2;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    this->field_003C = (this->field_0030 + 2) * 0xc9;
    this->field_0040 = (this->field_0034 + 2) * 0xc9;
    this->field_0044 = this->field_0038 * 200 + 0x78;
    uVar1 = 1;
  }
  else if (iVar2 == 2) {
    this->field_003C = (this->field_0030 + 2) * 0xc9;
    this->field_0040 = (this->field_0034 + 2) * 0xc9;
    this->field_0044 = this->field_0038 * 200 + 0xde;
    return 1;
  }
  return uVar1;
}

// 006479E0 STVolcanoC::sub_006479E0
#line 4 "decomp/ST.exe/functions/006479E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STVolcanoC.
   Evidence: this_call_owners=[STVolcanoC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_006479E0(STVolcanoC *this)

{
  if (-1 < this->field_005D) {
    st::fn_006E8BA0(g_sT3DSMAPContext_00807598,this->field_005D);
    this->field_005D = -1;
  }
  if (-1 < this->field_007A) {
    st::fn_006E8BA0(g_sT3DSMAPContext_00807598,this->field_007A);
    this->field_007A = -1;
  }
  if (-1 < this->field_0086) {
    st::fn_006E8BA0(g_sT3DSMAPContext_00807598,this->field_0086);
    this->field_0086 = -1;
  }
  return;
}
