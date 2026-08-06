#include "../../pseudocode_runtime.h"


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

void __thiscall CursorClassTy::sub_0054B700(CursorClassTy *this,int param_1)

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
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
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
  FUN_006b5f80((int *)g_ddxContext_008075A8,iVar3,iVar4,iVar5,iVar6);
  pCVar1 = local_8;
  if (local_8->field_04DF < 0) goto LAB_0054b81b;
  if (DAT_0080874e == '\x01') {
    iVar3 = 1;
LAB_0054b7e0:
    pBVar2 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_8->field_04E3,iVar3);
    iVar3 = pCVar1->field_04DF * -0x1d + 0x115;
    iVar4 = g_nWidth_00806730 + -0x18;
  }
  else {
    if (DAT_0080874e == '\x02') {
      iVar3 = 3;
      goto LAB_0054b7e0;
    }
    if (DAT_0080874e != '\x03') goto LAB_0054b81b;
    pBVar2 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_8->field_04E3,5);
    iVar3 = pCVar1->field_04DF * -0x13 + 0x136;
    iVar4 = g_nWidth_00806730 + -0x15;
  }
  PutDDX(iVar4,iVar3,'\x06',pBVar2);
LAB_0054b81b:
  pCVar1->field_04DF = param_1;
  if (-1 < param_1) {
    if (DAT_0080874e == '\x01') {
      pBVar2 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar1->field_04E3,0);
      iVar4 = pCVar1->field_04DF * -0x1d + 0x115;
      iVar3 = g_nWidth_00806730 + -0x18;
    }
    else if (DAT_0080874e == '\x02') {
      pBVar2 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar1->field_04E3,2);
      iVar4 = pCVar1->field_04DF * -0x1d + 0x115;
      iVar3 = g_nWidth_00806730 + -0x18;
    }
    else {
      if (DAT_0080874e != '\x03') {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      pBVar2 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar1->field_04E3,4);
      iVar4 = pCVar1->field_04DF * -0x13 + 0x136;
      iVar3 = g_nWidth_00806730 + -0x15;
    }
    PutDDX(iVar3,iVar4,'\x06',pBVar2);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

