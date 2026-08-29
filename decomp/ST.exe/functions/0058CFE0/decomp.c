#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=4, ignored=0,
   unknown=0 */

int __cdecl FUN_0058cfe0(RecoveredRecord_0058CFE0_6E80059E *param_1)

{
  DAT_00811720 = DAT_00811720 + 1;
  /* ST_CALLSITE[0058CFF9]: CALL 0x006acf50; direct=006ACF50 Library::DKW::LIB::MemRealloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_TLOBaseTy_0607; source view only; no Ghidra override */
  PTR_00811718 = Library::DKW::LIB::MemRealloc(PTR_00811718,DAT_00811720 * 4);
  /* ST_CALLSITE[0058D018]: CALL 0x006acf50; direct=006ACF50 Library::DKW::LIB::MemRealloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_TLOBaseTy_0607; source view only; no Ghidra override */
  PTR_0081171c = Library::DKW::LIB::MemRealloc(PTR_0081171c,DAT_00811720 * 4);
  if ((PTR_00811718 != nullptr) &&
     (PTR_0081171c != nullptr)) {
    *(undefined4 *)((int)PTR_00811718 + DAT_00811720 * 4 + -4) = param_1->field_0018;
    *(RecoveredRecord_0058CFE0_6E80059E **)((int)PTR_0081171c + DAT_00811720 * 4 + -4) = param_1;
    return 1;
  }
  return 0;
}

