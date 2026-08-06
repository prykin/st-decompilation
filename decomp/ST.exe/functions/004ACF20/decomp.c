#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=13, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0044EE30 -> 004ACF20 @ 00450DA6; data at 008032B8 | 004ACF20 -> 006EA790 @ 004ACF32 |
   004C9770 -> 004ACF20 @ 004C9E4E; data at 008032B8 | 00584380 -> 004ACF20 @ 005843EC; data at
   008032B8 | 00589740 -> 004ACF20 @ 005897AC; data at 008032B8 | 005EC9F0 -> 004ACF20 @ 005ECC44;
   data at 008032B8 | 005F6AF0 -> 004ACF20 @ 005F6CBA; data at 008032B8 | 005FDB50 -> 004ACF20 @
   005FDCD2; data at 008032B8 | 006132F0 -> 004ACF20 @ 006135BE; data at 008032B8 | 00623170 ->
   004ACF20 @ 006233B3; data at 008032B8 | 00639990 -> 004ACF20 @ 00639A80; data at 008032B8 |
   006406D0 -> 004ACF20 @ 006426CF; data at 008032B8 */

void __thiscall STT3DSprC::sub_004ACF20(STT3DSprC *this,ushort *param_1,int param_2)

{
  Library::Ourlib::ST3DSMAP::SprSetMShadowTbl(this->field_003C,this->field_0018,param_1,param_2);
  return;
}

