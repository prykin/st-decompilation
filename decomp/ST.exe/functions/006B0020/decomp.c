
/* [STReturnSemanticsApplier] pointer_producer_argument_roundtrip.
   Evidence: every reachable RET carries the same trusted pointer-producer ABI pointer:/void; at
   least one path passes that exact live EAX value into a pointer parameter which the helper's
   complete machine CFG returns unchanged in EAX (roundtrip_calls=1); machine CFG audit: used=96,
   ignored=0, unknown=0 */

void * FUN_006b0020(uint *param_1,int *param_2)

{
  uint *puVar1;

  if (param_2 != nullptr) {
    *param_2 = 0;
  }
  /* ST_CALLSITE[006B0040]: CALL 0x006aac70; direct=006AAC70 Library::DKW::LIB::MemAlloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
  puVar1 = Library::DKW::LIB::MemAlloc(param_1[3] * param_1[2] + 0x1c);
  if (puVar1 == nullptr) {
    return nullptr;
  }
  FUN_006affc0(param_1,puVar1,param_2);
  return puVar1;
}

