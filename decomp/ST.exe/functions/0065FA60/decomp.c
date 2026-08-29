#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0065FA60.
   Evidence: incoming_receiver_captures=1; receiver_accesses=4; incoming_edx_uses=0; calls=4;
   ecx_pointer_setup=4; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=1

   [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint * __thiscall
AiFltClassTy::sub_0065FA60(AiFltClassTy *this,int param_1,int param_2,short *param_3)

{
  AiFltClassTy *pAVar1;
  int iVar2;
  uint *puVar3;
  uint index;
  DArrayTy *array;
  InternalExceptionFrame local_5c;
  uint local_18;
  AiFltClassTy *local_14;
  DArrayTy *local_10;
  short local_a;
  short local_8;
  short local_6;

  local_10 = nullptr;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pAVar1 = local_14;
  if (iVar2 == 0) {
    if (param_2 == 0) {
      if (local_14->field_0284 != nullptr) {
        local_10 = (DArrayTy *)thunk_FUN_0068e4f0(local_14->field_0284,param_1);
      }
    }
    else if (param_2 == 1) {
      if (local_14->field_0284 != nullptr) {
        local_10 = (DArrayTy *)thunk_FUN_0068e4f0(local_14->field_0284,param_1);
      }
      if ((local_10 == nullptr) && (g_allPlayers_007FA174 != nullptr)) {
        local_10 = (DArrayTy *)
                   /* ST_CALLSITE[0065FB1A]: CALL 0x00401415; direct=00401415 STAllPlayersC::GetTOBJList */
                   STAllPlayersC::GetTOBJList
                             (g_allPlayers_007FA174,(char)pAVar1->field_0024,param_1,0,-1);
      }
    }
    else if ((param_2 == 2) && (g_allPlayers_007FA174 != nullptr)) {
      local_10 = (DArrayTy *)
                 /* ST_CALLSITE[0065FACD]: CALL 0x00401415; direct=00401415 STAllPlayersC::GetTOBJList */
                 STAllPlayersC::GetTOBJList
                           (g_allPlayers_007FA174,(char)local_14->field_0024,param_1,0,-1);
    }
  }
  array = local_10;
  g_currentExceptionFrame = local_5c.previous;
  if (local_10 != nullptr) {
    if (local_10->count == 0) {
      DArrayDestroy(local_10);
      local_10 = nullptr;
    }
    array = local_10;
    if ((((local_10 != nullptr) && (param_3 != nullptr)) && (0 < param_3[3])) &&
       ((0 < param_3[4] && (0 < param_3[5])))) {
      local_18 = local_10->count;
      while (index = local_18 - 1, -1 < (int)index) {
        if (index < array->count) {
          puVar3 = DArrayAt<undefined4>(array, index);
        }
        else {
          puVar3 = nullptr;
        }
        local_18 = index;
        if ((STFishC *)*puVar3 != nullptr) {
          /* ST_CALLSITE[0065FBEF]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0((STFishC *)*puVar3,&local_6,&local_8,&local_a);
          if (((local_6 < *param_3) || (local_8 < param_3[1])) ||
             ((index = local_18, local_a < param_3[2] ||
              ((((int)*param_3 + (int)param_3[3] <= (int)local_6 ||
                ((int)param_3[1] + (int)param_3[4] <= (int)local_8)) ||
               ((int)param_3[2] + (int)param_3[5] <= (int)local_a)))))) {

            DArrayRemoveAt(array,index);
            local_18 = index;
          }
        }
      }
    }
  }
  return &array->flags;
}

