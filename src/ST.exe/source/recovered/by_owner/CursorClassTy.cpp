#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/CursorClassTy.cpp

// 005440C0 CursorClassTy::sub_005440C0
#line 4 "decomp/ST.exe/functions/005440C0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=4; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
st::fn_005440C0
          (CursorClassTy *this,int param_1,undefined4 *param_2,
          RecoveredRecord_005440C0_A2D6FA40 *param_3)

{
  param_3->field_0004 = (&DAT_00807ff6)[param_1];
  param_3->field_001C = (&DAT_00808136)[param_1];

  st::fn_006E6000(this,3,1,param_2);
  return;
}

// 00544100 CursorClassTy::sub_00544100
#line 4 "decomp/ST.exe/functions/00544100/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00544100 returns return of FUN_006e6000 @ 00544137

   [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

int __thiscall
st::fn_00544100
          (CursorClassTy *this,int param_1,undefined4 *param_2,
          RecoveredRecordView_00544100_1AA291CA *param_3)

{
  int iVar1;

  param_3->field_0004 = *(uint *)(&DAT_00808276 + param_1 * 4);
  param_3->field_001C = *(uint *)(&DAT_008082ee + param_1 * 4);
  param_3->field_003C = *(uint *)(&DAT_00808366 + param_1 * 4);

  iVar1 = st::fn_006E6000(this,3,1,param_2);
  return iVar1;
}

// 00544150 CursorClassTy::sub_00544150
#line 4 "decomp/ST.exe/functions/00544150/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
st::fn_00544150
          (CursorClassTy *this,int param_1,undefined4 *param_2,
          RecoveredRecord_00544150_A51B387C *param_3)

{
  param_3->field_0004 = *(undefined4 *)(&DAT_008083de + param_1 * 4);
  param_3->field_001C = param_1 + 0xa6ff;
  if (*(int *)(&DAT_008083de + param_1 * 4) != 0) {

    st::fn_006E6000(this,3,1,param_2);
  }
  return;
}

// 00544940 CursorClassTy::sub_00544940
#line 4 "decomp/ST.exe/functions/00544940/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=3; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00544940(CursorClassTy *this)

{
  this->field_04DA = 0;
  st::fn_006B2800(g_ddxContext_008075A8,this->field_04D6,0,0);
  st::fn_006B3AF0(reinterpret_cast<int *>(g_ddxContext_008075A8),this->field_04D6);
  return;
}

// 00544990 CursorClassTy::sub_00544990
#line 4 "decomp/ST.exe/functions/00544990/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (6), none consume AL/AX, and every RET path defines full EAX; sites=005449B0 @ 00545079
   -> TEST TEST EAX,EAX | 005449B0 @ 00545337 -> TEST TEST EAX,EAX | 005449B0 @ 0054545E -> TEST
   TEST EAX,EAX | 005449B0 @ 005455EC -> TEST TEST EAX,EAX | 005449B0 @ 0054614F -> TEST TEST
   EAX,EAX | 0054AEE0 @ 0054AF24 -> TEST TEST EAX,EAX

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0054AEE0 -> 00544990 @ 0054AF24

   [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=6; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

int __thiscall st::fn_00544990(CursorClassTy *this)

{
  return (uint)(this->field_0493 == 2);
}

// 0054A8D0 CursorClassTy::sub_0054A8D0
#line 4 "decomp/ST.exe/functions/0054A8D0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0054A8D0(CursorClassTy *this)

{
  if ((g_tLOBldMark_007FB2AC != nullptr) && (g_tLOBldMark_007FB2AC->field_0018 == 0)) {
    /* ST_CALLSITE[0054A8E5]: CALL 0x0040153c; direct=0040153C TLOBldMark::sub_004C63F0 */
    st::fn_0040153C(g_tLOBldMark_007FB2AC);
  }
  if ((this->field_00DE == CASE_5) && (-1 < this->field_010B)) {
    if (g_sT3DSMAPContext_00807598 != nullptr) {
      st::fn_006E8BA0(g_sT3DSMAPContext_00807598,this->field_010B);
    }
    this->field_010B = -1;
    if (this->field_00A9 == 0) {
      st::fn_006B8A60((byte *)this->field_00AD);
    }
    else if (this->field_001C != 0xffffffff) {
      st::fn_006B34D0
                (reinterpret_cast<uint *>(this->field_0060),this->field_001C,0xfffffffe,this->field_0034,
                 this->field_0038);
    }
    /* ST_CALLSITE[0054A95B]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    st::fn_0040241E(this,this->field_00C5,this->field_00C9);
    this->field_00DE = CASE_0;
  }
  this->field_04A2 = 0;
  this->field_04AA = 0;
  this->field_04A6 = 0;
  return;
}

// 0054B540 CursorClassTy::sub_0054B540
#line 4 "decomp/ST.exe/functions/0054B540/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=23; incoming_this_accesses=20;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=31, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0054B540(CursorClassTy *this)

{
  uint uVar1;

  this->field_00CD = CASE_0;
  *(undefined4 *)&this->field_0xd3 = 0;
  this->field_00D7 = 0;
  this->field_00DB = 0;
  this->field_00DD = 0;
  uVar1 = this->field_010B;
  if (-1 < (int)uVar1) {
    if (this->field_00DE == CASE_5) {
      if (g_sT3DSMAPContext_00807598 != nullptr) {
        st::fn_006E8BA0(g_sT3DSMAPContext_00807598,uVar1);
      }
      if (this->field_00A9 == 0) {

        st::fn_006B8A60((byte *)this->field_00AD);
      }
      else if (this->field_001C != 0xffffffff) {

        st::fn_006B34D0
                  (reinterpret_cast<uint *>(this->field_0060),this->field_001C,0xfffffffe,this->field_0034,
                   this->field_0038);
      }
      /* ST_CALLSITE[0054B5C5]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      st::fn_0040241E(this,this->field_00C5,this->field_00C9);
    }
    else {
      st::fn_006B3BB0(reinterpret_cast<int *>(g_ddxContext_008075A8),uVar1);
    }
    this->field_010B = -1;
  }
  this->field_00DE = CASE_0;
  this->field_0496 = 0;
  this->field_049A = nullptr;
  this->field_04AE = 0;
  return;
}

// 0054B630 CursorClassTy::sub_0054B630
#line 4 "decomp/ST.exe/functions/0054B630/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=7; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004EE4D0 -> 0054B630 @ 004EE5A4; zero-filled partial register load at 004EE594

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0054B630(CursorClassTy *this,uint param_1,undefined4 param_2)

{
  /* ST_CALLSITE[0054B636]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
  st::fn_004040FC(this);
  /* ST_CALLSITE[0054B63D]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
  st::fn_00403058(this);
  this->field_04A2 = param_1;
  this->field_04AA = param_2;
  if ((this->field_04B2 <= this->field_00C5) &&
     (this->field_00C5 < this->field_04BA + this->field_04B2)) {
    if ((this->field_04B6 <= this->field_00C9) &&
       (this->field_00C9 < this->field_04BE + this->field_04B6)) {
      this->field_0496 = 1;
      return;
    }
  }
  this->field_0496 = 0;
  return;
}

// 0054B6D0 CursorClassTy::sub_0054B6D0
#line 4 "decomp/ST.exe/functions/0054B6D0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004F5690 -> 0054B6D0 @ 004F6B6E | 004FB060 -> 0054B6D0 @ 004FB3AF | 004FB060 ->
   0054B6D0 @ 004FB591

   [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0054B6D0(CursorClassTy *this)

{
  if (g_cPanel_00801688 != nullptr) {
    this->field_04BE = (g_cPanel_00801688->field_0094 - this->field_04B6) + 1;
  }
  return;
}

// 0054B700 CursorClassTy::sub_0054B700
#line 4 "decomp/ST.exe/functions/0054B700/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0054B700.
   Evidence: incoming_receiver_captures=1; receiver_accesses=9; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=1; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=2; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0054B700(CursorClassTy *this,int param_1)

{
  CursorClassTy *pCVar1;
  int iVar2;
  BITMAPINFO *pBVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  InternalExceptionFrame local_4c;
  CursorClassTy *local_8;

  if (param_1 == this->field_04DF) {
    return;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (DAT_0080874e == '\x03') {
    iVar6 = 0x68;
    iVar5 = 0xb;
    iVar3 = g_nWidth_00806730 + -0x15;
    iVar4 = 0xea;
  }
  else {
    iVar6 = 0x8f;
    iVar5 = 0x10;
    iVar3 = g_nWidth_00806730 + -0x18;
    iVar4 = 0xa1;
  }
  st::fn_006B5F80(reinterpret_cast<int *>(g_ddxContext_008075A8),iVar3,iVar4,iVar5,iVar6);
  pCVar1 = local_8;
  if (local_8->field_04DF < 0) goto LAB_0054b81b;
  if (DAT_0080874e == '\x01') {
    iVar3 = 1;
LAB_0054b7e0:
    pBVar2 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(local_8->field_04E3),iVar3);
    iVar3 = pCVar1->field_04DF * -0x1d + 0x115;
    iVar4 = g_nWidth_00806730 + -0x18;
  }
  else {
    if (DAT_0080874e == '\x02') {
      iVar3 = 3;
      goto LAB_0054b7e0;
    }
    if (DAT_0080874e != '\x03') goto LAB_0054b81b;
    pBVar2 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(local_8->field_04E3),5);
    iVar3 = pCVar1->field_04DF * -0x13 + 0x136;
    iVar4 = g_nWidth_00806730 + -0x15;
  }
  /* ST_CALLSITE[0054B813]: CALL 0x00403738; direct=00403738 PutDDX */
  st::fn_00403738(iVar4,iVar3,'\x06',pBVar2);
LAB_0054b81b:
  pCVar1->field_04DF = param_1;
  if (-1 < param_1) {
    if (DAT_0080874e == '\x01') {
      pBVar2 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(pCVar1->field_04E3),0);
      iVar4 = pCVar1->field_04DF * -0x1d + 0x115;
      iVar3 = g_nWidth_00806730 + -0x18;
    }
    else if (DAT_0080874e == '\x02') {
      pBVar2 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(pCVar1->field_04E3),2);
      iVar4 = pCVar1->field_04DF * -0x1d + 0x115;
      iVar3 = g_nWidth_00806730 + -0x18;
    }
    else {
      if (DAT_0080874e != '\x03') {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      pBVar2 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(pCVar1->field_04E3),4);
      iVar4 = pCVar1->field_04DF * -0x13 + 0x136;
      iVar3 = g_nWidth_00806730 + -0x15;
    }
    /* ST_CALLSITE[0054B8DC]: CALL 0x00403738; direct=00403738 PutDDX */
    st::fn_00403738(iVar3,iVar4,'\x06',pBVar2);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}
