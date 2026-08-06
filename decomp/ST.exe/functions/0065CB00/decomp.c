#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event_d.cpp
   Diagnostic line evidence: 76 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_0065CB00.
   Evidence: exact 1183-byte source-parameter copy at 0065CB52..0065CB56 */

AllocationRecord_0065CB00 * __cdecl FUN_0065cb00(AllocationRecord_0065CB00 *param_1)

{
  int iVar1;
  byte *puVar1;
  DArrayTy *pDVar2;
  uint *puVar3;
  AllocationRecord_0065CB00 *pAVar4;
  int iVar5;
  uint uVar7;
  AnonShape_0065CB00_C527AFF0 *pAVar8;
  byte *puVar9;
  bool bVar10;
  InternalExceptionFrame local_4c;
  AnonShape_0065CB00_C527AFF0 *local_8;
  AllocationRecord_0065CB00 *pAVar4_mg0;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    local_8 = Library::DKW::LIB::MemAllocClear(0x49f);
    pAVar4_mg0 = param_1;
    pAVar8 = local_8;
    memmove(pAVar8, pAVar4_mg0, 0x49e); /* compiler REP MOVS byte copy */
    pAVar8 = (AnonShape_0065CB00_C527AFF0 *)((byte *)pAVar8 + 0x49c);
    pAVar4_mg0 = (AllocationRecord_0065CB00 *)((byte *)pAVar4_mg0 + 0x49c);
    *(undefined1 *)((int)&pAVar8->field_0001 + 1) =
         *(undefined1 *)((int)&pAVar4_mg0->field_0001 + 1);
    local_8->field_0001 = 0x49f;
    local_8->field_0005 = 2;
    iVar5 = local_8->field_047A;
    if (&local_8->field_046E == nullptr) {
      uVar7 = 0;
    }
    else {
      uVar7 = local_8->field_046E * 5;
    }
    puVar1 = (byte *)(Library::DKW::LIB::MemAllocClear(uVar7));
    local_8->field_0476 = puVar1;
    if (&local_8->field_046E == nullptr) {
      uVar7 = 0;
    }
    else {
      uVar7 = local_8->field_046E * 5;
    }
    puVar1 = (byte *)(&param_1->field_0x49e + iVar5);
    puVar9 = (byte *)(local_8->field_0476);
    memmove(puVar9, puVar1, uVar7); /* compiler REP MOVS byte copy */
    pDVar2 = FUN_006b0060(nullptr,(uint *)(&param_1->field_0x49e + local_8->field_0466));
    local_8->field_0462 = pDVar2;
    puVar3 = Library::DKW::TBL::FUN_006c8680
                       (nullptr,(uint *)(&param_1->field_0x49e + local_8->field_045A));
    uVar7 = 0;
    local_8->field_0456 = puVar3;
    iVar5 = local_8->field_0462;
    pAVar4 = (AllocationRecord_0065CB00 *)local_8;
    if (0 < *(int *)(iVar5 + 0xc)) {
      bVar10 = *(int *)(iVar5 + 0xc) != 0;
      do {
        if (bVar10) {
          iVar5 = *(int *)(iVar5 + 8) * uVar7 + *(int *)(iVar5 + 0x1c);
        }
        else {
          iVar5 = 0;
        }
        if (*(int *)(iVar5 + 0xf) != 0) {
          pDVar2 = FUN_006b0060(nullptr,(uint *)(&param_1->field_0x49e + *(int *)(iVar5 + 0x13))
                               );
          *(DArrayTy **)(iVar5 + 0xf) = pDVar2;
          pAVar4 = (AllocationRecord_0065CB00 *)local_8;
        }
        iVar5 = pAVar4->field_0462;
        uVar7 = uVar7 + 1;
        bVar10 = uVar7 < *(uint *)(iVar5 + 0xc);
      } while ((int)uVar7 < (int)*(uint *)(iVar5 + 0xc));
    }
    g_currentExceptionFrame = local_4c.previous;
    return pAVar4;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_0065d0f0((int *)&local_8);
  RaiseInternalException(iVar1,0,"E:\\__titans\\ai\\ai_event_d.cpp",0x4c);
  return nullptr;
}

