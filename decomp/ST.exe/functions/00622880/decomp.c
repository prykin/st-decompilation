#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=17;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STMineSetC::sub_00622880(STMineSetC *this)

{
  STMineSetC_field_02ADState SVar1;

  thunk_FUN_004ad310((STT3DSprC *)&this->field_01D5);
  SVar1 = this->field_02AD;
  if (SVar1 < CASE_3) {
    if (g_visibleClass_00802A88 != nullptr) {
      /* ST_CALLSITE[00622924]: CALL 0x004018f2; direct=004018F2 VisibleClassTy::sub_00559110 */
      VisibleClassTy::sub_00559110
                (g_visibleClass_00802A88,(int)this->field_0047,(undefined *)(int)this->field_0049,
                 (int)this->field_004B,this->field_0024,*(int *)(&DAT_007d02b4 + (uint)SVar1 * 4),
                 this->field_0018,0xffffffff);
    }
  }
  else if ((SVar1 == CASE_3) && (g_visibleClass_00802A88 != nullptr)) {
    /* ST_CALLSITE[006228CA]: CALL 0x004018f2; direct=004018F2 VisibleClassTy::sub_00559110 */
    VisibleClassTy::sub_00559110
              (g_visibleClass_00802A88,(int)this->field_0047,(undefined *)(int)this->field_0049,
               (int)this->field_004B,this->field_0024,DAT_007d02c0,this->field_0018,0xffffffff);
    if ((-1 < this->field_005B) && ((-1 < this->field_005D && (-1 < this->field_005F)))) {
      /* ST_CALLSITE[006228ED]: CALL 0x0040216c; direct=0040216C STMineSetC::sub_0041D2B0 */
      sub_0041D2B0(this);
    }
  }
  if (this->field_034A != nullptr) {
    DArrayDestroy(this->field_034A);
    this->field_034A = nullptr;
  }
  return;
}

