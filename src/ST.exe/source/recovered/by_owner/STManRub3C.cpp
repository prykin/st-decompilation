#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STManRub3C.cpp

// 0062CF00 STManRub3C::STManRub3C
#line 4 "decomp/ST.exe/functions/0062CF00/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D084 (store 0062CF0B)
   Evidence: final_vptr=0079D084; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

STManRub3C * __thiscall st::fn_0062CF00(STManRub3C *this)

{

  st::fn_006E60E0(this);
  this->vtable = &st_global_0079D084;
  if (this != nullptr) {
    memset(&this->field_001C, 0, 0x98); /* compiler bulk-zero initialization */
    return this;
  }
  memset(nullptr, 0, 0x98); /* compiler bulk-zero initialization */
  return nullptr;
}

// 0062CF50 STManRub3C::sub_0062CF50
#line 4 "decomp/ST.exe/functions/0062CF50/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRub3C.
   Evidence: this_call_owners=[STManRub3C]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0062CF50(STManRub3C *this)

{
  uint *puVar1;
  int iVar2;

  puVar1 = this->field_0030;
  iVar2 = 8;
  do {
    if ((DArrayTy *)*puVar1 != nullptr) {
      st::fn_006AE110((DArrayTy *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 0062D670 STManRub3C::sub_0062D670
#line 4 "decomp/ST.exe/functions/0062D670/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0062D670 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 0062CD19

   [STMethodOwnerApplier] Structural method owner recovered as STManRub3C.
   Evidence: this_call_owners=[STManRub3C]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall st::fn_0062D670(STManRub3C *this,uint *param_1)

{
  uint *puVar1;
  DArrayTy **ppDVar2;
  uint uVar4;
  byte *puVar5;
  uint *puVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *local_14;
  byte *local_10;
  uint local_c;
  STManRub3C *local_8;

  puVar1 = param_1;
  local_c = 0;
  this->field_00B0 = this->field_00B4;
  local_8 = this;
  local_10 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(0x98));
  this->field_0028 = 2;
  if (this == nullptr) {
    puVar5 = nullptr;
  }
  else {
    puVar5 = (byte *)(&this->field_001C);
  }
  pbVar7 = local_10;
  memmove(pbVar7, puVar5, 0x98); /* compiler REP MOVS byte copy */
  *param_1 = 0x98;
  param_1 = nullptr;
  do {
    switch(param_1) {
    case nullptr:
      ppDVar2 = (DArrayTy **)local_8->field_0030;
      break;
    case (uint *)0x1:
      ppDVar2 = &local_8->field_0050;
      break;
    case (uint *)0x2:
      ppDVar2 = &local_8->field_0070;
      break;
    case (uint *)0x3:
      ppDVar2 = (DArrayTy **)&local_8->field_0x90;
      break;
    default:
      goto switchD_0062d6cc_default;
    }
    if ((ppDVar2 != nullptr) &&
       (local_14 = st::fn_00404C78((int *)ppDVar2,(int *)&local_c), local_c != 0)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + local_c;
      local_10 = st::pointer_boundary_cast<byte *>(st::fn_006ACF50(local_10,uVar4 + local_c));
      puVar6 = local_14;
      puVar8 = (uint *)(local_10 + (*puVar1 - local_c));
      memmove(puVar8, puVar6, local_c); /* compiler REP MOVS byte copy */
      st::fn_006AB060(&local_14);
    }
switchD_0062d6cc_default:
    param_1 = (uint *)((int)param_1 + 1);
    if (3 < (int)param_1) {
      return local_10;
    }
  } while( true );
}

// 0062D840 STManRub3C::sub_0062D840
#line 4 "decomp/ST.exe/functions/0062D840/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRub3C.
   Evidence: this_call_owners=[STManRub3C]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_0062D840(STManRub3C *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int *piVar5;
  byte *puVar6;
  DArrayTy **ppDVar7;

  puVar1 = param_1;
  if (this == nullptr) {
    puVar6 = nullptr;
  }
  else {
    puVar6 = (byte *)(&this->field_001C);
  }
  param_1 = (undefined4 *)0x98;
  puVar4 = (byte *)(puVar1);
  memmove(puVar6, puVar4, 0x98); /* compiler REP MOVS byte copy */
  piVar5 = st::pointer_boundary_cast<int *>(puVar1 + 0x26);
  this->field_00B4 = this->field_00B0;
  iVar3 = 0;
  do {
    iVar2 = 0;
    switch(iVar3) {
    case 0:
      ppDVar7 = (DArrayTy **)this->field_0030;
      break;
    case 1:
      ppDVar7 = &this->field_0050;
      break;
    case 2:
      ppDVar7 = &this->field_0070;
      break;
    case 3:
      ppDVar7 = (DArrayTy **)&this->field_0x90;
      break;
    default:
      goto switchD_0062d881_default;
    }
    iVar2 = st::fn_00404AA7((int *)ppDVar7,piVar5);
switchD_0062d881_default:
    piVar5 = (int *)((int)piVar5 + iVar2);
    param_1 = (undefined4 *)((int)param_1 + iVar2);
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return (int)param_1;
    }
  } while( true );
}

// 0062DD40 STManRub3C::sub_0062DD40
#line 4 "decomp/ST.exe/functions/0062DD40/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRub3C.
   Evidence: this_call_owners=[STManRub3C]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0062DD40(STManRub3C *this)

{
  DArrayTy **ppDVar1;
  int iVar2;

  ppDVar1 = &this->field_0050;
  iVar2 = 8;
  do {
    if (*ppDVar1 != nullptr) {
      st::fn_006AE110(*ppDVar1);
      *ppDVar1 = nullptr;
    }
    ppDVar1 = ppDVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 0062E130 STManRub3C::sub_0062E130
#line 4 "decomp/ST.exe/functions/0062E130/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STManRub3C.
   Evidence: this_call_owners=[STManRub3C]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0062E130(STManRub3C *this)

{
  DArrayTy **ppDVar1;
  int iVar2;

  ppDVar1 = &this->field_0070;
  iVar2 = 8;
  do {
    if (*ppDVar1 != nullptr) {
      st::fn_006AE110(*ppDVar1);
      *ppDVar1 = nullptr;
    }
    ppDVar1 = ppDVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

