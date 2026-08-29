#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt_d.cpp
   Diagnostic line evidence: 78 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_00668330.
   Evidence: exact 608-byte source-parameter copy at 00668382 */

AllocationRecord_00668330 * __cdecl FUN_00668330(AllocationRecord_00668330 *param_1)

{
  int iVar1;
  AllocationRecord_00668330 *pAVar1;
  DArrayTy *pDVar2;
  int iVar3;
  AllocationRecord_00668330 *pAVar4;
  AllocationRecord_00668330 *pAVar5;
  InternalExceptionFrame local_4c;
  AnonShape_00668330_F270680B *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {

    pAVar1 = Library::DKW::LIB::MemAllocClear(0x260);
    pAVar4 = param_1;
    pAVar5 = pAVar1;
    memmove(pAVar5, pAVar4, 0x260); /* compiler REP MOVS byte copy */
    iVar3 = 0;
    pAVar1->field_0014 = 0x260;
    pAVar1->field_0018 = 2;
    local_8 = (AnonShape_00668330_F270680B *)pAVar1;
    do {
      if (STObjectAtByteOffset(pAVar1, iVar3).field_01EB != 0) {
        pDVar2 = FUN_006b0060(nullptr,
                              (uint *)(&param_1->field_0x25f +
                                      *(int *)(&pAVar1->field_0x1ef + iVar3)));
        *(DArrayTy **)((int)&local_8->field_01EB + iVar3) = pDVar2;
        pAVar1 = (AllocationRecord_00668330 *)local_8;
      }
      iVar3 = iVar3 + 0xc;
    } while (iVar3 < 0x54);
    if (pAVar1->field_01EB == 0) {
      /* ST_CALLSITE[006683E2]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
      pDVar2 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x2c,10);
      local_8->field_01EB = &pDVar2->flags;
      pAVar1 = (AllocationRecord_00668330 *)local_8;
    }
    if (pAVar1->field_0203 == 0) {
      /* ST_CALLSITE[00668405]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
      pDVar2 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x14,10);
      local_8->field_0203 = &pDVar2->flags;
      pAVar1 = (AllocationRecord_00668330 *)local_8;
    }
    if (pAVar1->field_020F == 0) {
      /* ST_CALLSITE[00668428]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
      pDVar2 = Library::DKW::TBL::DArrayCreate(nullptr,10,0xc,10);
      local_8->field_020F = &pDVar2->flags;
      pAVar1 = (AllocationRecord_00668330 *)local_8;
    }
    g_currentExceptionFrame = local_4c.previous;
    return pAVar1;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_006686c0((int *)&local_8);
  RaiseInternalException(iVar1,0,"E:\\__titans\\ai\\ai_flt_d.cpp",0x4e);
  return nullptr;
}

