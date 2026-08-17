#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt.cpp
   Diagnostic line evidence: 1127 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00660180.
   Evidence: incoming_receiver_captures=1; receiver_accesses=5; incoming_edx_uses=0; calls=14;
   ecx_pointer_setup=14; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=1; adopt_untyped_existing_thiscall */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::FUN_00660180
          (AnonReceiver_00660180 *this,short *param_1,char param_2)

{
  uint uVar1;
  int iVar3;
  int iVar2;
  DArrayTy *array;
  STGroupBoatC *pSVar4;
  InternalExceptionFrame local_78;
  undefined4 local_34 [3];
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  DArrayTy *local_1c;
  undefined4 local_18;
  short local_14;
  short sStack_12;
  short asStack_10 [2];
  AnonShape_00660180_1CB7CB7C *local_c;
  DArrayTy *local_8;

  *(undefined4 *)&this->field_0xa7 = 0;
  local_c = (AnonShape_00660180_1CB7CB7C *)this;
  if (param_2 != '\x02') {
    iVar3 = 1;
    if (param_2 != '\x01') {
      uVar1 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this->field_0x1c = uVar1;
      iVar3 = (uVar1 >> 0x10 & 1) + 1;
    }
    if (iVar3 != 2) {
      memset(local_34, 0, 0x18); /* compiler bulk-zero initialization */
      local_34[0] = 1;
      local_28 = *param_1;
      local_26 = param_1[1];
      local_24 = param_1[2];
      local_22 = param_1[3];
      local_20 = param_1[4];
      local_1e = param_1[5];
      if ((*(ushort *)&this->field_0x7d == 0xfffe) ||
         (g_allPlayers_007FA174 == nullptr)) {
        pSVar4 = nullptr;
      }
      else {
        pSVar4 = thunk_FUN_0042b760(this->field_0x24,*(ushort *)&this->field_0x7d);
      }
      if (pSVar4 == nullptr) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[00660377]: CALL dword ptr [EDX + 0x8] */
      pSVar4->sub_00498D20(2,(short)local_34);
      return 0;
    }
  }
  local_1c = nullptr;
  local_18 = 0;
  local_8 = nullptr;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar2 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (local_8 != nullptr) {
      DArrayDestroy(local_8);
    }
    return 0xffffffff;
  }
  array = Library::DKW::TBL::DArrayCreate(nullptr,1,6,10);
  local_14 = param_1[3] / 2 + *param_1;
  sStack_12 = param_1[4] / 2 + param_1[1];
  asStack_10[0] = param_1[5] / 2 + param_1[2];
  local_8 = array;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  thunk_FUN_00675950(CONCAT22(sStack_12,local_14),CONCAT22(asStack_10[0],sStack_12),asStack_10[0],
                     &local_14,&sStack_12,asStack_10,0);
  Library::DKW::TBL::DArrayAppend(array,&local_14);
  local_18 = 1;
  local_1c = array;
  if ((local_c->field_007D == 0xfffe) || (g_allPlayers_007FA174 == nullptr)) {
    pSVar4 = nullptr;
  }
  else {
    pSVar4 = thunk_FUN_0042b760(local_c->field_0024,local_c->field_007D);
  }
  if (pSVar4 == nullptr) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_flt.cpp",0x467);
  }
  else {
    /* ST_CALLSITE[006602A8]: CALL dword ptr [EDX + 0x8] */
    pSVar4->sub_00498D20(6,(short)&local_1c);
  }
  if (array != nullptr) {
    DArrayDestroy(array);
  }
  g_currentExceptionFrame = local_78.previous;
  return 0;
}

