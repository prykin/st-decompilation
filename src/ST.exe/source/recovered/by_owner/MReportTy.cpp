#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/MReportTy.cpp

// 005C00D0 MReportTy::sub_005C00D0
#line 4 "decomp/ST.exe/functions/005C00D0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as MReportTy.
   Evidence: this_call_owners=[MReportTy]; agreed_this_calls=1; incoming_this_accesses=12;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005C00D0(MReportTy *this)

{
  byte bVar1;
  uint local_8;

  bVar1 = 0;
  local_8 = 0;
  this->field_0029 = 2;
  this->field_002D = 0x20;
  do {
    if ((&this->field_008F)[local_8] != 0) {
      this->field_0025 = (&this->field_008F)[local_8];
      if (bVar1 == 0) {
        *(uint *)&this->field_0x31 = (uint)(this->field_0067 != '\0');
      }
      else {
        *(undefined4 *)&this->field_0x31 = 1;
      }
      (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
    }
    bVar1 = bVar1 + 1;
    local_8 = (uint)bVar1;
  } while (bVar1 < 4);
  if ((this->field_009F != 0) && (this->field_0067 != '\0')) {
    this->field_0025 = this->field_009F;
    *(undefined4 *)&this->field_0x31 = 1;
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  return;
}

// 005C0190 MReportTy::sub_005C0190
#line 4 "decomp/ST.exe/functions/005C0190/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as MReportTy.
   Evidence: this_call_owners=[MReportTy]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005C0190(MReportTy *this)

{
  int *piVar1;
  int local_8;

  local_8 = 4;
  this->field_0029 = 2;
  this->field_002D = 0x20;
  piVar1 = &this->field_008F;
  do {
    if (*piVar1 != 0) {
      this->field_0025 = *piVar1;
      *(undefined4 *)&this->field_0x31 = 0;
      (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
    }
    piVar1 = piVar1 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (this->field_009F != 0) {
    this->field_0025 = this->field_009F;
    *(undefined4 *)&this->field_0x31 = 0;
    (*this->field_000C->vtable->vfunc_18)((short)&this->field_0x1d);
  }
  return;
}

// 005C05F0 MReportTy::sub_005C05F0
#line 4 "decomp/ST.exe/functions/005C05F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as MReportTy.
   Evidence: this_call_owners=[MReportTy]; agreed_this_calls=3; incoming_this_accesses=26;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005C05F0(MReportTy *this)

{
  HoloTy *pHVar1;
  int iVar2;
  uint uVar7;
  uint local_EAX_546;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  uint uVar8;
  int local_8;

  local_8 = 4;
  puVar3 = &this->field_008F;
  do {
    if (*puVar3 != 0) {
      st::fn_006E56B0(this->field_000C,*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (this->field_009F != 0) {
    st::fn_006E56B0(this->field_000C,this->field_009F);
    this->field_009F = 0;
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  if (this->field_0453 != nullptr) {
    st::fn_0040128A(this->field_0453);
    st::fn_0072E2B0(this->field_0453);
    this->field_0453 = nullptr;
  }
  if (this->field_0457 != nullptr) {
    st::fn_0040128A(this->field_0457);
    st::fn_0072E2B0(this->field_0457);
    this->field_0457 = nullptr;
  }
  pHVar1 = (HoloTy *)st::fn_0072E530(0x33);
  if (pHVar1 == nullptr) {
    pHVar1 = nullptr;
  }
  else {
    pHVar1->field_0002 = 1;
    pHVar1->field_0000 = 0;
    *(undefined4 *)&pHVar1->field_0x3 = 0xffffffff;
    pHVar1->field_0001 = CASE_2;
    pHVar1->field_0007 = nullptr;
    pHVar1->field_000B = nullptr;
    pHVar1->field_000F = 0;
    *(undefined4 *)&pHVar1->field_0x1b = 1;
    pHVar1->field_0013 = 1;
    pHVar1->field_0017 = -1;
    pHVar1->field_0027 = 0;
    pHVar1->field_0023 = 0;
    pHVar1->field_002F = 1;
    pHVar1->field_002B = 1;
  }
  this->field_0453 = pHVar1;
  if (pHVar1 != nullptr) {
    uVar8 = 0;
    cVar6 = '\x01';
    bVar5 = 0x10;
    iVar4 = 1;
    iVar2 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x47,0x46,0x2bd,0x15e);
    uVar7 = st::fn_0040459D(this->field_0453,CASE_2,0x47,0x46,iVar2,iVar4,bVar5,cVar6,uVar8);
    if (uVar7 != 0) {
      pHVar1 = this->field_0453;
      pHVar1->field_0002 = 0;
      pHVar1->field_0017 = -1;
      uVar8 = *(uint *)&this->field_0453->field_0x3;
      if (-1 < (int)uVar8) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,uVar8);
      }
      st::fn_004055F1(this->field_0453);
    }
    st::fn_004055F1(this->field_0453);
  }
  pHVar1 = (HoloTy *)st::fn_0072E530(0x33);
  if (pHVar1 == nullptr) {
    pHVar1 = nullptr;
  }
  else {
    pHVar1->field_0002 = 1;
    pHVar1->field_0000 = 0;
    *(undefined4 *)&pHVar1->field_0x3 = 0xffffffff;
    pHVar1->field_0001 = CASE_2;
    pHVar1->field_0007 = nullptr;
    pHVar1->field_000B = nullptr;
    pHVar1->field_000F = 0;
    *(undefined4 *)&pHVar1->field_0x1b = 1;
    pHVar1->field_0013 = 1;
    pHVar1->field_0017 = -1;
    pHVar1->field_0027 = 0;
    pHVar1->field_0023 = 0;
    pHVar1->field_002F = 1;
    pHVar1->field_002B = 1;
  }
  this->field_0457 = pHVar1;
  if (pHVar1 != nullptr) {
    uVar8 = 0;
    cVar6 = '\x01';
    bVar5 = 0x10;
    iVar4 = 1;
    iVar2 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x1a,10,0x2e9,0x32);
    local_EAX_546 = st::fn_0040459D(this->field_0457,CASE_3,0x1a,10,iVar2,iVar4,bVar5,cVar6,uVar8);
    if (local_EAX_546 != 0) {
      pHVar1 = this->field_0457;
      pHVar1->field_0002 = 0;
      pHVar1->field_0017 = -1;
      uVar8 = *(uint *)&this->field_0457->field_0x3;
      if (-1 < (int)uVar8) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,uVar8);
      }
      st::fn_004055F1(this->field_0457);
    }
    st::fn_004055F1(this->field_0457);
  }
  st::fn_00403738(0,0,'\x01',(BITMAPINFO *)this->field_005D);
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8A60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      this->field_0065 = 4;
      return;
    }
  }
  this->field_0065 = 4;
  return;
}

