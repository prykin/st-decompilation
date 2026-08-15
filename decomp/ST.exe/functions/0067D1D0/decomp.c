#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 119 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067D880 -> 0067D1D0 @ 0067D8F6

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_0067D1D0.
   Evidence: exact 299-byte source-parameter copy at 0067D222..0067D226 */

AllocationRecord_0067D1D0 * __cdecl FUN_0067d1d0(AllocationRecord_0067D1D0 *param_1)

{
  int iVar1;
  AllocationRecord_0065CB00 *pAVar1;
  DArrayTy *pDVar2;
  AllocationRecord_00690FC0 *pAVar3;
  AllocationRecord_0067D1D0 *pAVar4;
  int iVar5;
  undefined4 *puVar6;
  AnonShape_0067D1D0_21940C5B *pAVar7;
  uint uVar8;
  bool bVar9;
  InternalExceptionFrame local_4c;
  AnonShape_0067D1D0_21940C5B *local_8;
  AllocationRecord_0067D1D0 *pAVar4_mg0;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    local_8 = Library::DKW::LIB::MemAllocClear(299);
    pAVar4_mg0 = param_1;
    pAVar7 = local_8;
    memmove(pAVar7, pAVar4_mg0, 0x12a); /* compiler REP MOVS byte copy */
    pAVar7 = (AnonShape_0067D1D0_21940C5B *)((byte *)pAVar7 + 0x128);
    pAVar4_mg0 = (AllocationRecord_0067D1D0 *)((byte *)pAVar4_mg0 + 0x128);
    pAVar7->field_0x2 = pAVar4_mg0->field_0x2;
    *(undefined4 *)&local_8->field_0x14 = 299;
    local_8->field_0x18 = 2;
    pAVar1 = thunk_FUN_0065cb00((AllocationRecord_0065CB00 *)
                                (&param_1->field_0x12a + local_8->field_00FE));
    iVar5 = 0;
    local_8->field_0106 = pAVar1;
    pAVar4 = (AllocationRecord_0067D1D0 *)local_8;
    do {
      if (STObjectAtByteOffset(pAVar4, iVar5).field_00C2 != 0) {
        pDVar2 = FUN_006b0060(nullptr,
                              (uint *)(&param_1->field_0x12a + *(int *)(&pAVar4->field_0xc6 + iVar5)
                                      ));
        *(DArrayTy **)((int)&local_8->field_00C2 + iVar5) = pDVar2;
        pAVar4 = (AllocationRecord_0067D1D0 *)local_8;
      }
      iVar5 = iVar5 + 0xc;
    } while (iVar5 < 0x3c);
    if (pAVar4->field_00C2 == 0) {
      pDVar2 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x10,5);
      local_8->field_00C2 = pDVar2;
      pAVar4 = (AllocationRecord_0067D1D0 *)local_8;
    }
    iVar5 = pAVar4->field_00C2;
    uVar8 = 0;
    if (0 < *(int *)(iVar5 + 0xc)) {
      bVar9 = *(int *)(iVar5 + 0xc) != 0;
      do {
        if (bVar9) {
          puVar6 = (undefined4 *)(*(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c));
        }
        else {
          puVar6 = nullptr;
        }
        if (puVar6[1] == 0) {
          pAVar3 = thunk_FUN_00690fc0((AllocationRecord_00690FC0 *)
                                      (&param_1->field_0x12a + puVar6[2]));
          *puVar6 = pAVar3;
          pAVar4 = (AllocationRecord_0067D1D0 *)local_8;
        }
        iVar5 = pAVar4->field_00C2;
        uVar8 = uVar8 + 1;
        bVar9 = uVar8 < *(uint *)(iVar5 + 0xc);
      } while ((int)uVar8 < (int)*(uint *)(iVar5 + 0xc));
    }
    g_currentExceptionFrame = local_4c.previous;
    return pAVar4;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_0067d160((int *)&local_8);
  RaiseInternalException(iVar1,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0x77);
  return nullptr;
}

