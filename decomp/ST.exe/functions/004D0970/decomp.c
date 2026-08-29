#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 761 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00479600 -> 004D0970 @ 0047A479; MOVSX at 0047A469 establishes signed source width 2 |
   00479600 -> 004D0970 @ 0047B4D3; MOVSX at 0047B4C7 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00479600 -> 004D0970 @ 0047A479; MOVSX at 0047A466 establishes signed source width 2 |
   00479600 -> 004D0970 @ 0047B4D3; MOVSX at 0047B4C0 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00479600 -> 004D0970 @ 0047A479; MOVSX at 0047A463 establishes signed source width 2 |
   00479600 -> 004D0970 @ 0047B4D3; MOVSX at 0047B4BD establishes signed source width 2

   [STMethodOwnerApplier] Structural method owner recovered as TLOFakeTy.
   Evidence: this_call_owners=[TLOFakeTy]; agreed_this_calls=6; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOFakeTy::sub_004D0970(TLOFakeTy *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;

  if (this->field_0249 <= this->field_0245 + 1) {
    iVar1 = this->field_0249 + 10;
    this->field_0249 = iVar1;
    /* ST_CALLSITE[004D099E]: CALL 0x006acf50; direct=006ACF50 Library::DKW::LIB::MemRealloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ushort; source view only; no Ghidra override */
    puVar2 = Library::DKW::LIB::MemRealloc(this->field_024D,iVar1 * 0xc);
    this->field_024D = puVar2;
  }
  *(int *)(this->field_024D + this->field_0245 * 6) = param_1;
  *(int *)(this->field_024D + this->field_0245 * 6 + 2) = param_2;
  *(int *)(this->field_024D + this->field_0245 * 6 + 4) = param_3;
  /* ST_CALLSITE[004D09FC]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
  iVar1 = DumpClassC::WritePtr
                    ((short)param_1,(short)param_2,(short)param_3,0,
                     (RecoveredRecord_DumpClassC_00495EC0 *)this);
  if (iVar1 != 0) {
    RaiseInternalException
              (iVar1,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_dock.cpp",0x2f9);
  }
  this->field_0245 = this->field_0245 + 1;
  return 0;
}

