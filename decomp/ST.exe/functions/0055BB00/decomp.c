#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=6; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00558DC0 -> 0055BB00 @ 00558E28; literal 0 at 00558E24 | 005594A0 -> 0055BB00 @
   00559511; literal 1 at 0055950F | 005597A0 -> 0055BB00 @ 00559860; literal 2 at 0055985C |
   00559B30 -> 0055BB00 @ 00559BF0; literal 3 at 00559BEC | 00559EC0 -> 0055BB00 @ 00559F86; literal
   4 at 00559F82 | 0055A270 -> 0055BB00 @ 0055A336; literal 5 at 0055A332 | 0055A620 -> 0055BB00 @
   0055A6E6; literal 6 at 0055A6E2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00558DC0 -> 0055BB00 @ 00558E28; VisibleClassTy::sub_00558DC0 parameter param_1 |
   005597A0 -> 0055BB00 @ 00559860; VisibleClassTy::SetZoneDes parameter param_1 | 00559B30 ->
   0055BB00 @ 00559BF0; VisibleClassTy::SetZoneAst parameter param_1 | 00559EC0 -> 0055BB00 @
   00559F86; VisibleClassTy::SetZoneTsh parameter param_1 | 0055A270 -> 0055BB00 @ 0055A336;
   VisibleClassTy::SetZoneMin1 parameter param_1 | 0055A620 -> 0055BB00 @ 0055A6E6;
   VisibleClassTy::SetZoneMin2 parameter param_1

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00558DC0 -> 0055BB00 @ 00558E28; VisibleClassTy::sub_00558DC0 parameter param_2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 005594A0 -> 0055BB00 @ 00559511; VisibleClassTy::sub_005594A0 parameter param_3 |
   005597A0 -> 0055BB00 @ 00559860; VisibleClassTy::SetZoneDes parameter param_3 | 00559B30 ->
   0055BB00 @ 00559BF0; VisibleClassTy::SetZoneAst parameter param_3 | 00559EC0 -> 0055BB00 @
   00559F86; VisibleClassTy::SetZoneTsh parameter param_3 | 0055A270 -> 0055BB00 @ 0055A336;
   VisibleClassTy::SetZoneMin1 parameter param_3 | 0055A620 -> 0055BB00 @ 0055A6E6;
   VisibleClassTy::SetZoneMin2 parameter param_3

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: raw retained-width parameter lifetime: width=1, reads=1, sites=0055BB48 MOV AL,byte ptr
   [EBP + 0x1c]

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=0,
   ignored=4, unknown=3 */

void __thiscall
VisibleClassTy::sub_0055BB00
          (VisibleClassTy *this,byte param_1,short param_2,short param_3,char param_4,uint param_5,
          byte param_6,undefined4 param_7)

{
  undefined4 local_10;
  short local_c;
  char cStack_a;
  byte bStack_9;
  undefined4 local_8;

  if ((((this->field_0114 != 0) && (this->field_0110 != nullptr)) &&
      (param_5 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_5].field_0022 < 8)))) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10 = CONCAT22(param_2,(short)CONCAT31((int3)param_5,param_1));
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_c = CONCAT13(param_6,CONCAT12(param_4,param_3));
    local_8 = param_7;
    Library::DKW::TBL::DArrayAppend((DArrayTy *)this->field_0110,&local_10);
  }
  return;
}

