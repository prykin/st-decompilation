#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=36, ignored=5, unknown=0

   [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_004AB810_8E5693D5 (current recovered
   extent=20)

   [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790790 (store 004AB814)
   Evidence: final_vptr=00790790; returns_this=true; calls_before=0; field_writes_after=17;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=medium;
   unique_exact_object_extent=64; extent_write_count=17 */

STT3DSprC * __thiscall STT3DSprC::STT3DSprC(STT3DSprC *this)

{
  this->vtable = &STT3DSprCVTable;
  this->field_0014 = 0;
  this->field_0018 = 0xffffffff;
  this->field_0020 = nullptr;
  this->field_0008 = 0;
  this->field_0004 = 0;
  this->field_0034 = nullptr;
  this->field_0011 = 0;
  this->field_0010 = 0;
  this->field_0012 = 0;
  this->field_002C = 0;
  this->field_0028 = 0;
  this->field_0024 = 0;
  this->field_003C = g_sT3DSMAPContext_00807598;
  this->field_0013 = 0;
  this->field_0030 = 0;
  this->field_0038 = 0;
  this->field_001C = 0;
  return this;
}

