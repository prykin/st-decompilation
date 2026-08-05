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
  AllocationRecord_00690FC0 *pAVar2;
  undefined4 uVar3;
  DArrayTy *pDVar4;
  AllocationRecord_00668330 *pAVar5;
  AllocationRecord_00690FC0 *pAVar6;
  AllocationRecord_00668330 *pAVar7;
  AllocationRecord_00690FC0 *pAVar8;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined1 *local_c;
  AnonShape_00690FC0_955C4112 *local_8;

  local_8 = nullptr;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar1 == 0) {
    pAVar2 = Library::DKW::LIB::MemAllocClear(0x10c);
    pAVar6 = param_1;
    pAVar8 = pAVar2;
    memmove(pAVar8, pAVar6, 0x10c); /* compiler REP MOVS byte copy */
    iVar1 = 0;
    pAVar2->field_0014 = 0x10c;
    pAVar2->field_0018 = 2;
    local_8 = (AnonShape_00690FC0_955C4112 *)pAVar2;
    do {
      if (*(int *)((int)&pAVar2->field_0085 + iVar1) != 0) {
        uVar3 = FUN_006b0060(nullptr,
                             (uint *)(&param_1->field_0x10b + *(int *)(&pAVar2->field_0x89 + iVar1))
                            );
        *(undefined4 *)((int)&local_8->field_0085 + iVar1) = uVar3;
        pAVar2 = (AllocationRecord_00690FC0 *)local_8;
      }
      iVar1 = iVar1 + 0xc;
    } while (iVar1 < 0x60);
    if (pAVar2->field_0085 == 0) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,8,10);
      local_8->field_0085 = &pDVar4->flags;
      pAVar2 = (AllocationRecord_00690FC0 *)local_8;
    }
    if (0 < (short)pAVar2->field_0105) {
      *(undefined4 *)(pAVar2->field_0085 + 0xc) = 0;
      pAVar7 = (AllocationRecord_00668330 *)(&param_1->field_0x10b + *(int *)&param_1->field_0x107);
      iVar1 = 0;
      pAVar2 = (AllocationRecord_00690FC0 *)local_8;
      if (0 < local_8->field_0105) {
        do {
          local_10 = 0;
          local_c = nullptr;
          pAVar5 = thunk_FUN_00668330(pAVar7);
          if (pAVar5 == nullptr) {
            local_c = nullptr;
          }
          else {
            local_c = &pAVar5[-1].field_0x240;
          }
          Library::DKW::TBL::DArrayAppend((DArrayTy *)local_8->field_0085,&local_10);
          pAVar7 = (AllocationRecord_00668330 *)(&pAVar7->field_0x0 + pAVar7->field_0014);
          iVar1 = iVar1 + 1;
          pAVar2 = (AllocationRecord_00690FC0 *)local_8;
        } while (iVar1 < local_8->field_0105);
      }
    }
    g_currentExceptionFrame = local_54.previous;
    return pAVar2;
  }
  g_currentExceptionFrame = local_54.previous;
  thunk_FUN_00691540((int *)&local_8);
  RaiseInternalException(iVar1,0,"E:\\__titans\\ai\\ai_tact_d.cpp",0x51);
  return nullptr;
}

