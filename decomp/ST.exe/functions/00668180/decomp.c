
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt_d.cpp
   Diagnostic line evidence: 42 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0068DC80 -> 00668180 @ 0068DE36

   [STPrototypeApplier] Propagated return.
   Evidence: 00668180 returns stored into global 008489C4 @ 00685E0A

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0064E300 -> 00668180 @ 0064E399; FUN_0064e300 parameter param_3 | 00683C70 -> 00668180
   @ 00685E05; unproven partial register write at 00685DF5 | 0068DC80 -> 00668180 @ 0068DE36;
   unproven partial register write at 0068DE24

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00683C70 -> 00668180 @ 00685E05; unproven partial register write at 00685DED | 0068DC80
   -> 00668180 @ 0068DE36; literal 32768 at 0068DE2B

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0064E300 -> 00668180 @ 0064E399; FUN_0064e300 parameter param_5 | 00683C70 -> 00668180
   @ 00685E05; unproven partial register write at 00685DE5 | 0068DC80 -> 00668180 @ 0068DE36;
   literal 0 at 0068DE29

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00683C70 -> 00668180 @ 00685E05; unproven partial register write at 00685DDF | 0068DC80
   -> 00668180 @ 0068DE36; unproven partial register write at 0068DE21 */

AnonShape_GLOBAL_008489C4_F7BABFAC * __cdecl
FUN_00668180(char *text,ushort param_2,ushort param_3,ushort param_4,byte param_5)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  InternalExceptionFrame local_4c;
  AnonShape_00668180_E8377840 *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    local_8 = Library::DKW::LIB::MemAllocClear(0x260);
    *(undefined4 *)local_8 = 900;
    *(undefined4 *)&local_8->field_0x14 = 0x260;
    local_8->field_0x18 = 2;
    Library::MSVCRT::_strncpy(&local_8->field_0x1b,text,0x3f);
    local_8->field_0019 = param_2;
    local_8->field_005B = param_3;
    local_8->field_005F = param_4;
    local_8->field_0061 = param_5;
    local_8->field_023F = 0x3fffffff;
    if (local_8->field_01EB == 0) {
      pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x2c,10);
      local_8->field_01EB = pDVar1;
    }
    if (local_8->field_0203 == 0) {
      pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x14,10);
      local_8->field_0203 = pDVar1;
    }
    if (local_8->field_020F == 0) {
      pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0xc,10);
      local_8->field_020F = pDVar1;
    }
    g_currentExceptionFrame = local_4c.previous;
    return (AnonShape_GLOBAL_008489C4_F7BABFAC *)local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_006686c0((int *)&local_8);
  RaiseInternalException(exceptionCode,0,"E:\\__titans\\ai\\ai_flt_d.cpp",0x2a);
  return nullptr;
}

