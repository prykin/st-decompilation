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
  AllocationRecord_0065CB00 *pAVar2;
  undefined4 uVar3;
  DArrayTy *pDVar4;
  AllocationRecord_00690FC0 *pAVar5;
  AllocationRecord_0067D1D0 *pAVar6;
  undefined4 *puVar7;
  AnonShape_0067D1D0_21940C5B *pAVar8;
  uint uVar9;
  bool bVar10;
  InternalExceptionFrame local_4c;
  AnonShape_0067D1D0_21940C5B *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    local_8 = Library::DKW::LIB::MemAllocClear(299);
    pAVar6 = param_1;
    pAVar8 = local_8;
    memmove(pAVar8, pAVar6, 0x12a); /* compiler REP MOVS byte copy */
    pAVar8 = (AnonShape_0067D1D0_21940C5B *)((byte *)pAVar8 + 0x128);
    pAVar6 = (AllocationRecord_0067D1D0 *)((byte *)pAVar6 + 0x128);
    pAVar8->field_0x2 = pAVar6->field_0x2;
    *(undefined4 *)&local_8->field_0x14 = 299;
    local_8->field_0x18 = 2;
    pAVar2 = thunk_FUN_0065cb00((AllocationRecord_0065CB00 *)
                                (&param_1->field_0x12a + local_8->field_00FE));
    iVar1 = 0;
    local_8->field_0106 = pAVar2;
    pAVar6 = (AllocationRecord_0067D1D0 *)local_8;
    do {
      if (*(int *)((int)&pAVar6->field_00C2 + iVar1) != 0) {
        uVar3 = FUN_006b0060(nullptr,
                             (uint *)(&param_1->field_0x12a + *(int *)(&pAVar6->field_0xc6 + iVar1))
                            );
        *(undefined4 *)((int)&local_8->field_00C2 + iVar1) = uVar3;
        pAVar6 = (AllocationRecord_0067D1D0 *)local_8;
      }
      iVar1 = iVar1 + 0xc;
    } while (iVar1 < 0x3c);
    if (pAVar6->field_00C2 == 0) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x10,5);
      local_8->field_00C2 = pDVar4;
      pAVar6 = (AllocationRecord_0067D1D0 *)local_8;
    }
    iVar1 = pAVar6->field_00C2;
    uVar9 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar10 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (bVar10) {
          puVar7 = (undefined4 *)(*(int *)(iVar1 + 8) * uVar9 + *(int *)(iVar1 + 0x1c));
        }
        else {
          puVar7 = nullptr;
        }
        if (puVar7[1] == 0) {
          pAVar5 = thunk_FUN_00690fc0((AllocationRecord_00690FC0 *)
                                      (&param_1->field_0x12a + puVar7[2]));
          *puVar7 = pAVar5;
          pAVar6 = (AllocationRecord_0067D1D0 *)local_8;
        }
        iVar1 = pAVar6->field_00C2;
        uVar9 = uVar9 + 1;
        bVar10 = uVar9 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar9 < (int)*(uint *)(iVar1 + 0xc));
    }
    g_currentExceptionFrame = local_4c.previous;
    return pAVar6;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_0067d160((int *)&local_8);
  RaiseInternalException(iVar1,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0x77);
  return nullptr;
}

