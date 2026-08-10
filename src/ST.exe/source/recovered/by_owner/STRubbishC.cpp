#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STRubbishC.cpp

// 0062ED10 STRubbishC::STRubbishC
#line 4 "decomp/ST.exe/functions/0062ED10/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D098 (store 0062ED37)
   Evidence: final_vptr=0079D098; returns_this=true; calls_before=1; field_writes_after=8;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0062ED10 returns STRubbishC::STRubbishC this @ 0062ED60 */

STRubbishC * __thiscall st::fn_0062ED10(STRubbishC *this)

{
  st::fn_00401933((STGameObjC *)this);
  this->field_01D5 = -1;
  this->field_01D9 = -1;
  this->field_01DD = -1;
  this->vtable = &st_global_0079D098;
  this->field_01E1 = 0;
  this->field_01E5 = 0;
  this->field_01E9 = 0;
  this->field_01ED = 0;
  this->field_01F1 = 0;
  this->field_01F5 = 0;
  this->field_01F9 = 0;
  this->field_01FA = 0;
  return this;
}

// 0062EF00 STRubbishC::sub_0062EF00
#line 4 "decomp/ST.exe/functions/0062EF00/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0062FCA0 -> 0062EF00 @ 0062FCCF

   [STMethodOwnerApplier] Structural method owner recovered as STRubbishC.
   Evidence: this_call_owners=[STRubbishC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_0062EF00(STRubbishC *this,int param_1,AnonShape_0062FCA0_22A9EE35 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  uVar2 = 0;
  if ((&this->field_01E5)[param_1] != 0) {
    *(uint *)((&this->field_01E5)[param_1] + 0x14) = (uint)*(ushort *)&param_2->field_0028;
    *(undefined4 *)((&this->field_01E5)[param_1] + 0x20) = *(undefined4 *)&param_2->field_0x14;
    *(undefined4 *)((&this->field_01E5)[param_1] + 0x24) = *(undefined4 *)&param_2->field_0x18;
    *(undefined4 *)((&this->field_01E5)[param_1] + 0x28) = *(undefined4 *)&param_2->field_0x1c;
    *(int *)(&this->field_01E5)[param_1] = param_2->field_0020;
    *(uint *)((&this->field_01E5)[param_1] + 0x35) = g_playSystem_00802A38->field_00E4;
    *(undefined4 *)((&this->field_01E5)[param_1] + 0x39) = 3000;
    uVar1 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
    this->field_001C = uVar1;
    *(uint *)((&this->field_01E5)[param_1] + 0x1c) = (uVar1 >> 0x10) % 5;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar5 = *(int *)((&this->field_01E5)[param_1] + 0x1c);
    iVar3 = st::fn_0040581C();
    iVar4 = st::fn_004038F5(iVar3,iVar5);
    *(int *)((&this->field_01E5)[param_1] + 0x2c) = iVar4;
    *(uint *)((&this->field_01E5)[param_1] + 4) = (uint)param_2->field_0028 >> 0x10;
    *(uint *)((&this->field_01E5)[param_1] + 0xc) = (uint)*(ushort *)&param_2->field_0x24;
    *(undefined4 *)((&this->field_01E5)[param_1] + 8) = *(undefined4 *)(param_2 + 1);
    iVar5 = *(int *)((&this->field_01E5)[param_1] + 4);
    if ((iVar5 == 3) || (iVar5 == 6)) {
      st::fn_004050C9(this,param_1,1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

// 0062F900 STRubbishC::sub_0062F900
#line 4 "decomp/ST.exe/functions/0062F900/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STRubbishC.
   Evidence: this_call_owners=[STRubbishC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 0062F900 returns return of sub_006E60A0 @ 0062F926 */

int __thiscall st::fn_0062F900(STRubbishC *this)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = this->field_0008;
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(this,local_24);
  return iVar1;
}

// 0062FCA0 STRubbishC::sub_0062FCA0
#line 4 "decomp/ST.exe/functions/0062FCA0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STRubbishC.
   Evidence: this_call_owners=[STRubbishC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_0062FCA0(STRubbishC *this,AnonShape_0062FCA0_22A9EE35 *param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;

  iVar3 = st::fn_004017F3(this);
  iVar4 = this->field_01E1;
  if (iVar3 < 0) {
    if (iVar4 == 0) {
      st::fn_00405885(this);
      return 0xffff;
    }
  }
  else {
    if (4 < iVar4) {
      sVar2 = (short)((uint)param_1->field_0028 >> 0x10);
      if ((sVar2 != 3) && (sVar2 != 6)) {
        iVar4 = param_1->field_0020;
        puVar6 = &this->field_01E5;
        iVar5 = 5;
        do {
          piVar1 = (int *)*puVar6;
          if (((piVar1 != nullptr) && (piVar1[1] != 3)) && (piVar1[1] != 6)) {
            *piVar1 = *piVar1 + iVar4 / 5;
          }
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      return this->field_01E1;
    }
    this->field_01E1 = iVar4 + 1;
    st::fn_004036CA(this,iVar3,param_1);
    if (this->field_01F9 != '\0') {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = st::fn_0040318E(this,iVar3,*(undefined4 *)((&this->field_01E5)[iVar3] + 0xc),
                                 *(undefined4 *)((&this->field_01E5)[iVar3] + 4));
      if (iVar4 != 0) {
        st::fn_004047BE(this,iVar3);
        return iVar3;
      }
      if (this->field_01E1 == 0) {
        st::fn_00405885(this);
        return 0xffff;
      }
      st::fn_00404728(this,iVar3);
      iVar3 = -1;
    }
  }
  return iVar3;
}

// 0062FEA0 STRubbishC::sub_0062FEA0
#line 4 "decomp/ST.exe/functions/0062FEA0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STRubbishC.
   Evidence: this_call_owners=[STRubbishC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_0062FEA0(STRubbishC *this,int param_1,int param_2)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  int iVar3;
  STRubbishC *local_8;

  if ((((g_sT3DSMAPContext_00807598->field_0048 <= param_1) &&
       (param_1 <= g_sT3DSMAPContext_00807598->field_0058)) &&
      (g_sT3DSMAPContext_00807598->field_0044 <= param_2)) &&
     (param_2 <= g_sT3DSMAPContext_00807598->field_0054)) {
    local_8 = this;
    iVar2 = st::fn_006DDBD0();
    pVVar1 = g_visibleClass_00802A88;
    if (iVar2 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == nullptr) {
      return iVar2;
    }
    iVar3 = this->field_01DD;
    if (DAT_0080874d == -1) {
      return iVar2;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return iVar2;
    }
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,this->field_01D5,
               this->field_01D9,&param_2,(int *)&local_8);
    if (iVar3 < 0) {
      return iVar2;
    }
    if (4 < iVar3) {
      return iVar2;
    }
    if (param_2 < 0) {
      return iVar2;
    }
    if ((int)pVVar1->field_0030 <= param_2) {
      return iVar2;
    }
    iVar3 = (int)&local_8->vtable + g_centeredOffsets5[iVar3];
    if (iVar3 < 0) {
      return iVar2;
    }
    if (pVVar1->field_0034 <= iVar3) {
      return iVar2;
    }
    if (pVVar1->field_004C == nullptr) {
      return iVar2;
    }
    if (pVVar1->field_004C[param_2 + iVar3 * pVVar1->field_0030] != 0) {
      return iVar2;
    }
  }
  return 0;
}

// 00630260 STRubbishC::sub_00630260
#line 4 "decomp/ST.exe/functions/00630260/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STRubbishC.
   Evidence: this_call_owners=[STRubbishC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00630260(STRubbishC *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int local_24 [4];
  undefined4 local_14;
  int local_10;
  undefined4 local_c;

  if (g_manRub3_008117A4 != nullptr) {
    puVar1 = (undefined4 *)(&this->field_01E5)[param_1];
    if ((puVar1 != nullptr) && ((puVar1[1] == 3 || (puVar1[1] == 6)))) {
      memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
      local_24[0] = puVar1[3];
      local_24[1] = this->field_01D5;
      local_24[2] = this->field_01D9;
      local_24[3] = this->field_01DD;
      local_14 = *puVar1;
      local_10 = param_1;
      local_c = puVar1[2];
      if (param_2 != 0) {
        st::fn_00404AF2(g_manRub3_008117A4,local_24);
        return;
      }
      st::fn_00402E6E(g_manRub3_008117A4,local_24);
    }
  }
  return;
}

