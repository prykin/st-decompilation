#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00558C00.
   Evidence: incoming_receiver_captures=1; receiver_accesses=5; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[28];
   expected_stack=28; receiver_family_members=15; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=2; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=23; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041C5A0 -> 00559620 @ 0041C60F; MOVSX at 0041C5F9 establishes signed source width 2 |
   0041CF50 -> 00559620 @ 0041CF7D; MOVSX at 0041CF6D establishes signed source width 2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00559620 -> 0055BBC0 @ 00559691 */

void __thiscall
VisibleClassTy::sub_00559620
          (VisibleClassTy *this,int param_1,int param_2,char param_3,undefined *param_4,int param_5,
          int param_6,uint param_7)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((((this->field_0114 != 0) && (this->field_0038 != nullptr)) && (-1 < param_5)) &&
     ((param_4 < (undefined *)0x8 &&
      ((g_playSystem_00802A38 == nullptr ||
       (g_bulkInitializedRecords_008087C7[(int)param_4].field_0022 < 8)))))) {
    if ((param_7 & 0x1000) != 0) {
      sub_0055BBC0(this,1,(short)param_1,(short)param_2,param_3,(uint)param_4,(byte)param_5,param_6);
    }
    if (((param_4 + 0xfc)[(int)this] != '\0') && ((param_7 & 2) != 0)) {
      iVar1 = param_5 * 2 + 1;
      iVar5 = param_1 - param_5;
      iVar8 = param_2 - param_5;
      pbVar3 = thunk_FUN_005532f0(param_5);
      param_4 = pbVar3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = iVar1;
      if (0 < iVar1) {
        do {
          iVar4 = 0;
          iVar7 = iVar5;
          do {
            if (((((pbVar3 == nullptr) || (param_4[iVar4] != '\0')) && (-1 < iVar7)) &&
                ((iVar7 < this->field_0020 && (-1 < iVar8)))) && (iVar8 < this->field_0024)) {
              iVar6 = iVar8 * this->field_0020 + iVar7;
              bVar2 = this->field_0038[iVar6 * 2 + 1];
              if (bVar2 != 0) {
                this->field_0038[iVar6 * 2 + 1] = bVar2 - 1;
              }
            }
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 1;
          } while (iVar4 < iVar1);
          iVar8 = iVar8 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = param_5 + -1;
          param_4 = param_4 + iVar1;
        } while (param_5 != 0);
      }
    }
  }
  return;
}

