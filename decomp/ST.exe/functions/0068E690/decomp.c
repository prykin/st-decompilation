
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact.cpp
   Diagnostic line evidence: 263 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __thiscall FUN_0068e690(void *this,int param_1)

{
  undefined4 local_c;
  int local_8;

  local_c = 0;
  local_8 = 0;
  if (param_1 == 0) {
    RaiseInternalException
              (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_tact.cpp",0x107);
    return 0xfffffffa;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = *(undefined4 *)(param_1 + 0x18);
  local_8 = param_1;
  Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0xa5),&local_c);
  *(void **)(param_1 + 0x284) = this;
  *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)((int)this + 0x9d);
  return 0;
}

