#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact_d.cpp
   Diagnostic line evidence: 81 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_00690FC0.
   Evidence: exact 268-byte source-parameter copy at 00691012 */

AllocationRecord_00690FC0 * __cdecl FUN_00690fc0(AllocationRecord_00690FC0 *param_1)

{
  int iVar1;
  AllocationRecord_00690FC0 *pAVar1;
  DArrayTy *pDVar2;
  AllocationRecord_00668330 *pAVar3;
  int iVar4;
  AllocationRecord_00690FC0 *pAVar5;
  AllocationRecord_00668330 *pAVar6;
  AllocationRecord_00690FC0 *pAVar7;
  InternalExceptionFrame local_54;
  uint local_10;
  byte *local_c;
  AnonShape_00690FC0_955C4112 *local_8;

  local_8 = nullptr;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;

  iVar1 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar1 == 0) {

    pAVar1 = Library::DKW::LIB::MemAllocClear(0x10c);
    pAVar5 = param_1;
    pAVar7 = pAVar1;
    memmove(pAVar7, pAVar5, 0x10c); /* compiler REP MOVS byte copy */
    iVar4 = 0;
    pAVar1->field_0014 = 0x10c;
    pAVar1->field_0018 = 2;
    local_8 = (AnonShape_00690FC0_955C4112 *)pAVar1;
    do {
      if (STObjectAtByteOffset(pAVar1, iVar4).field_0085 != 0) {
        pDVar2 = FUN_006b0060(nullptr,
                              (uint *)(&param_1->field_0x10b + *(int *)(&pAVar1->field_0x89 + iVar4)
                                      ));
        *(DArrayTy **)((int)&local_8->field_0085 + iVar4) = pDVar2;
        pAVar1 = (AllocationRecord_00690FC0 *)local_8;
      }
      iVar4 = iVar4 + 0xc;
    } while (iVar4 < 0x60);
    if (pAVar1->field_0085 == 0) {
      /* ST_CALLSITE[0069106E]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
      pDVar2 = Library::DKW::TBL::DArrayCreate(nullptr,10,8,10);
      local_8->field_0085 = &pDVar2->flags;
      pAVar1 = (AllocationRecord_00690FC0 *)local_8;
    }
    if (0 < (short)pAVar1->field_0105) {
      *(undefined4 *)(pAVar1->field_0085 + 0xc) = 0;
      pAVar6 = (AllocationRecord_00668330 *)(&param_1->field_0x10b + *(int *)&param_1->field_0x107);
      iVar4 = 0;
      pAVar1 = (AllocationRecord_00690FC0 *)local_8;
      if (0 < local_8->field_0105) {
        do {
          local_10 = 0;
          local_c = nullptr;
          pAVar3 = thunk_FUN_00668330(pAVar6);
          if (pAVar3 == nullptr) {
            local_c = nullptr;
          }
          else {
            local_c = &pAVar3[-1].field_0x240;
          }

          Library::DKW::TBL::DArrayAppend((DArrayTy *)local_8->field_0085,&local_10);
          pAVar6 = (AllocationRecord_00668330 *)(&pAVar6->field_0x0 + pAVar6->field_0014);
          iVar4 = iVar4 + 1;
          pAVar1 = (AllocationRecord_00690FC0 *)local_8;
        } while (iVar4 < local_8->field_0105);
      }
    }
    g_currentExceptionFrame = local_54.previous;
    return pAVar1;
  }
  g_currentExceptionFrame = local_54.previous;
  thunk_FUN_00691540((int *)&local_8);
  RaiseInternalException(iVar1,0,"E:\\__titans\\ai\\ai_tact_d.cpp",0x51);
  return nullptr;
}

