
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_boss_d.cpp
   Diagnostic line evidence: 69 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00648780 -> 00648530 @ 006487F3

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_00648530.
   Evidence: exact 133-byte source-parameter copy at 0064857D..0064857F */

AllocationRecord_00648530 * __cdecl FUN_00648530(AllocationRecord_00648530 *param_1)

{
  int iVar1;
  AllocationRecord_0065CB00 *pAVar2;
  AllocationRecord_00648530 *pAVar3;
  AnonShape_00648530_D39EB612 *pAVar4;
  InternalExceptionFrame local_4c;
  AnonShape_00648530_D39EB612 *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    local_8 = Library::DKW::LIB::MemAllocClear(0x85);
    pAVar3 = param_1;
    pAVar4 = local_8;
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pAVar4 = *(undefined4 *)pAVar3;
      pAVar3 = (AllocationRecord_00648530 *)((int)&pAVar3->field_0001 + 3);
      pAVar4 = (AnonShape_00648530_D39EB612 *)((int)&pAVar4->field_0001 + 3);
    }
    *(undefined1 *)pAVar4 = *(undefined1 *)pAVar3;
    local_8->field_0001 = 0x85;
    local_8->field_0005 = 2;
    pAVar2 = thunk_FUN_0065cb00((AllocationRecord_0065CB00 *)
                                (&param_1->field_0x84 + local_8->field_0046));
    local_8->field_004E = (undefined4 *)pAVar2;
    g_currentExceptionFrame = local_4c.previous;
    return (AllocationRecord_00648530 *)local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_006484f0((int *)&local_8);
  RaiseInternalException(iVar1,0,"E:\\__titans\\ai\\ai_boss_d.cpp",0x45);
  return nullptr;
}

