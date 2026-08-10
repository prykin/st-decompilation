#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/MoneyTy.cpp

// 0052B760 MoneyTy::sub_0052B760
#line 4 "decomp/ST.exe/functions/0052B760/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0068 uses
   /SubmarineTitans/Recovered/Enums/MoneyTy_field_0068State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_0068 uses
   /SubmarineTitans/Recovered/Enums/MoneyTy_field_0068State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0052B760(MoneyTy *this,AnonShape_0052B760_30F4E0D5 *param_1)

{
  ushort uVar1;

  switch(this->field_0068) {
  case CASE_1:
    param_1->field_0014 = 3;
    goto cf_common_exit_0052B7B9;
  case CASE_2:
    param_1->field_0014 = 2;
    goto cf_common_exit_0052B7B9;
  case CASE_3:
    uVar1 = (-(ushort)(DAT_0080874e != '\x03') & 0xfffd) + 4;
    break;
  default:
    uVar1 = (DAT_0080874e != '\x03') - 1 & 5;
  }
  param_1->field_0014 = uVar1;
cf_common_exit_0052B7B9:
  param_1->field_0016 = 2;
  switch(this->field_0068) {
  case CASE_1:
    param_1->field_0018 = 0x271c;
    return;
  case CASE_2:
    param_1->field_0018 = 0x271d;
    return;
  case CASE_3:
    param_1->field_0018 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffed) + 0x2731;
    return;
  case CASE_4:
    param_1->field_0018 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff0) + 0x2730;
    return;
  default:
    param_1->field_0018 = (DAT_00808a97 == -1) + 0x2748;
    return;
  }
}

// 0052B8A0 MoneyTy::sub_0052B8A0
#line 4 "decomp/ST.exe/functions/0052B8A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=2; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0052B8A0(MoneyTy *this)

{
  st::fn_006B5F80((int *)g_ddxContext_008075A8,this->field_0018,this->field_001C,this->field_0040,
               this->field_0044);
  st::fn_00403738(this->field_0018,this->field_001C,'\x01',(BITMAPINFO *)this->field_0072);
  return;
}

// 0052B8F0 MoneyTy::sub_0052B8F0
#line 4 "decomp/ST.exe/functions/0052B8F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=2; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0052B8F0(MoneyTy *this)

{
  st::fn_006B5F80((int *)g_ddxContext_008075A8,this->field_0020,this->field_0024,this->field_0048,
               this->field_004C);
  st::fn_00403738(this->field_0020,this->field_0024,'\x01',(BITMAPINFO *)this->field_0076);
  return;
}

// 0052B940 MoneyTy::sub_0052B940
#line 4 "decomp/ST.exe/functions/0052B940/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=2; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0052B940(MoneyTy *this)

{
  st::fn_006B5F80((int *)g_ddxContext_008075A8,this->field_0028,this->field_002C,this->field_0050,
               this->field_0054);
  st::fn_00403738(this->field_0028,this->field_002C,'\x01',(BITMAPINFO *)this->field_007A);
  return;
}

// 0052B990 MoneyTy::sub_0052B990
#line 4 "decomp/ST.exe/functions/0052B990/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=2; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0052B990(MoneyTy *this)

{
  uint uVar1;
  byte bVar2;
  BITMAPINFO *pBVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_8;

  bVar2 = ((DAT_0080874e == '\x03') - 1U & 0xf9) + 0x14;
  st::fn_006B5F80((int *)g_ddxContext_008075A8,this->field_0030,this->field_0034,this->field_0058,
               this->field_005C);
  if (this->field_00A4 == '\0') {
    uVar1 = (uint)bVar2;
    STPiece<0,1>(local_8) = 1;
    if (0 < (int)(uVar1 - (byte)this->field_00A2)) {
      uVar7 = 1;
      do {
        pBVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0082,0);
        st::fn_00403738(st::machine_word_boundary_cast<int>(this->field_0030 + -4 + uVar7 * 4),this->field_0034,'\x01',pBVar3);
        STPiece<0,1>(local_8) = (byte)local_8 + 1;
        uVar7 = (uint)(byte)local_8;
      } while ((int)uVar7 <= (int)(uVar1 - (byte)this->field_00A2));
    }
    bVar4 = (bVar2 - this->field_00A2) + 1;
    if (bVar4 <= bVar2) {
      iVar5 = (uint)bVar4 * 4;
      iVar6 = (uVar1 - bVar4) + 1;
      do {
        pBVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0082,4);
        st::fn_00403738(st::machine_word_boundary_cast<int>(this->field_0030 + -4 + iVar5),this->field_0034,'\x01',pBVar3);
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    bVar4 = 1;
    local_8 = 1;
    if (this->field_00A2 != '\0') {
      do {
        pBVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0082,
                              (-(uint)(DAT_0080874e != '\x03') & 2) + 1);
        st::fn_00403738(st::machine_word_boundary_cast<int>(this->field_0030 + -4 + local_8 * 4),this->field_0034,'\x01',pBVar3);
        bVar4 = bVar4 + 1;
        local_8 = (uint)bVar4;
      } while (bVar4 <= (byte)this->field_00A2);
    }
    bVar4 = this->field_00A2 + 1;
    if (bVar4 <= bVar2) {
      iVar5 = (uint)bVar4 * 4;
      iVar6 = ((uint)bVar2 - (uint)bVar4) + 1;
      do {
        pBVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0082,0);
        st::fn_00403738(st::machine_word_boundary_cast<int>(this->field_0030 + -4 + iVar5),this->field_0034,'\x01',pBVar3);
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return;
    }
  }
  return;
}

// 0052BBE0 MoneyTy::sub_0052BBE0
#line 4 "decomp/ST.exe/functions/0052BBE0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0052BBE0(MoneyTy *this)

{
  st::fn_006B5F80((int *)g_ddxContext_008075A8,this->field_0038,this->field_003C,this->field_0060,
               this->field_0064);
  st::fn_00403738(this->field_0038,this->field_003C,'\x01',(BITMAPINFO *)this->field_007E);
  return;
}

// 0052BC30 MoneyTy::sub_0052BC30
#line 4 "decomp/ST.exe/functions/0052BC30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 004D8B70 -> 0052BC30 @ 004D8C18; literal 1 at 004D8BFD | 004D8B70 -> 0052BC30 @
   004D8C55; literal 0 at 004D8C48 | 004D8B70 -> 0052BC30 @ 004D8C9A; literal 1 at 004D8C88 */

void __thiscall
st::fn_0052BC30
          (MoneyTy *this,uint param_1,uint param_2,uint param_3,byte param_4,byte param_5,
          int param_6)

{
  if (DAT_0080874e == '\x03') {
    if (param_1 == 0xffffffff) goto LAB_0052bc8f;
    if (0xf423e < param_1) {
      param_1 = 999999;
    }
    this->field_008A = param_1;
  }
  else {
    if (param_1 == 0xffffffff) goto LAB_0052bc8f;
    if (0x1869e < param_1) {
      param_1 = 99999;
    }
    this->field_008A = param_1;
  }
  if (param_6 != 0) {
    this->field_0086 = param_1 + 1;
  }
LAB_0052bc8f:
  if (param_2 != 0xffffffff) {
    if (0xf423e < param_2) {
      param_2 = 999999;
    }
    this->field_0092 = param_2;
    if (param_6 != 0) {
      this->field_008E = param_2 + 1;
    }
  }
  if (param_3 != 0xffffffff) {
    if (0xf423e < param_3) {
      param_3 = 999999;
    }
    this->field_009A = param_3;
    if (param_6 != 0) {
      this->field_0096 = param_3 + 1;
    }
  }
  if (param_4 != 0xff) {
    if ((int)((-(uint)(DAT_0080874e != '\x03') & 0xfffffff9) + 0x15) <= (int)(uint)param_4) {
      param_4 = (-(DAT_0080874e != '\x03') & 0xf9U) + 0x14;
    }
    this->field_00A3 = param_4;
    this->field_00A5 = param_5;
  }
  if ((g_tradePanel_00802A44 != nullptr) && (g_tradePanel_00802A44->field_0172 == 1)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)&g_tradePanel_00802A44->field_0000[1].field_0xc)();
  }
  return;
}

// 0052BDA0 MoneyTy::sub_0052BDA0
#line 4 "decomp/ST.exe/functions/0052BDA0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0052BDA0(MoneyTy *this,char param_1,int param_2)

{
  undefined1 uVar1;
  ushort *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  CHAR local_c [8];

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == DAT_0080874d) {
    if (DAT_00808a97 != -1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = DAT_00808a97 - param_2;
    }
    this->field_009E = param_2;
    st::external_00000080(local_c,st::mutable_c_string("%5d"),param_2);
    if (DAT_00808a97 == -1) {
      bVar3 = 0;
    }
    else {
      bVar3 = (-(0x14 < (uint)this->field_009E) & 0xfeU) + 2;
    }
    if (DAT_0080874e == '\x03') {
      bVar3 = bVar3 + 1;
    }
    puVar2 = this->field_007E;
    uVar5 = *(uint *)(puVar2 + 10);
    if (uVar5 == 0) {
      uVar5 = ((uint)puVar2[7] * *(int *)(puVar2 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar2 + 4);
    }
    uVar1 = this->field_0069;
    puVar4 = (undefined4 *)st::fn_006B4FA0((int *)puVar2);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
      puVar4 = puVar4 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar4 = uVar1;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    st::fn_00710A90(this->field_006E,(int)this->field_007E,0,0,0,this->field_0060,this->field_0064);
    st::fn_007119C0(this->field_006E,local_c,-1,-1,(uint)bVar3);
    st::fn_004033CD(this);
  }
  return;
}

