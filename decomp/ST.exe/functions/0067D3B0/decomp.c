#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 218 | 219 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006494C0 -> 0067D3B0 @ 00649638 | 00649790 -> 0067D3B0 @ 00649908

   [STPrototypeApplier] Propagated return.
   Evidence: 0067D3B0 returns used as parameter 0 of FUN_006809b0 @ 006857E7 | 0067D3B0 returns used
   as parameter 2 of Library::Ourlib::MFAOBJ::mfAObjSave @ 0067DA63

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_0067D3B0.
   Evidence: exact 299-byte source-parameter copy at 0067D506..0067D50A */

AllocationRecord_0067D3B0 * __cdecl
PlrDataPack(AllocationRecord_0067D3B0 *param_1,undefined4 *param_2,int param_3,uint *param_4)

{
  int iVar1;
  dword dVar2;
  DArrayTy **ppDVar4;
  byte *pbVar5;
  AllocationRecord_0067D3B0 *pAVar6;
  DArrayTy *pDVar7;
  int iVar12;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  byte *puVar11;
  int iVar13;
  uint *puVar14;
  AllocationRecord_0067D3B0 *pAVar15;
  uint *puVar16;
  uint uVar17;
  int *piVar18;
  AllocationRecord_0067D3B0 *pAVar19;
  uint *puVar20;
  bool bVar21;
  InternalExceptionFrame local_5c;
  DArrayTy **local_18;
  uint local_14;
  int local_10;
  void *local_c;
  AllocationRecord_0067D3B0 *local_8;

  uVar17 = 0;
  local_8 = nullptr;
  local_10 = 0;
  local_c = nullptr;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  ppDVar4 = (DArrayTy **)Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  local_18 = ppDVar4;
  if (ppDVar4 == nullptr) {
    local_10 = param_3;
    if (((param_1->field_0018 == '\x02') && (param_1->field_00C2 != nullptr)) &&
       (dVar2 = param_1->field_00C2->count, dVar2 != 0)) {
      local_c = Library::DKW::LIB::MemAllocClear(dVar2 << 2);
      pDVar7 = param_1->field_00C2;
      uVar17 = 0;
      if (0 < (int)pDVar7->count) {
        bVar21 = pDVar7->count != 0;
        do {
          if (bVar21) {
            piVar18 = DArrayAt<int>(pDVar7, uVar17);
          }
          else {
            piVar18 = nullptr;
          }
          iVar13 = *piVar18;
          if ((iVar13 != 0) && (((char *)iVar13)[0x18] == '\x02')) {
            *(int *)((int)local_c + uVar17 * 4) = iVar13;
            /* ST_CALLSITE[0067D45A]: CALL 0x0040518c; direct=0040518C TactDataPack */
            pbVar5 = TactDataPack(*(undefined4 **)((int)local_c + uVar17 * 4),(uint *)(piVar18 + 3));
            *piVar18 = (int)pbVar5;
          }
          uVar17 = uVar17 + 1;
          pDVar7 = param_1->field_00C2;
          bVar21 = uVar17 < pDVar7->count;
        } while ((int)uVar17 < (int)pDVar7->count);
      }
    }
    pDVar7 = param_1->field_00C2;
    local_18 = &param_1->field_00C2;
    iVar13 = local_10;
    if (pDVar7 != nullptr) {
      uVar17 = 0;
      if (0 < (int)pDVar7->count) {
        bVar21 = pDVar7->count != 0;
        do {
          if (bVar21) {
            piVar18 = DArrayAt<int>(pDVar7, uVar17);
          }
          else {
            piVar18 = nullptr;
          }
          if ((*piVar18 != 0) && (*(char *)(*piVar18 + 0x18) == '\0')) {
            iVar13 = iVar13 + piVar18[3];
            local_10 = iVar13;
          }
          uVar17 = uVar17 + 1;
          bVar21 = uVar17 < pDVar7->count;
        } while ((int)uVar17 < (int)pDVar7->count);
      }
    }
    iVar10 = 5;
    ppDVar4 = local_18;
    do {
      pDVar7 = *ppDVar4;
      if (pDVar7 != nullptr) {
        iVar1 = pDVar7->count * pDVar7->elementSize + 0x1c;
        iVar13 = iVar13 + iVar1;
        ppDVar4[2] = (DArrayTy *)iVar1;
        local_10 = iVar13;
      }
      ppDVar4 = ppDVar4 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    *param_4 = iVar13 + 299U;
    pAVar6 = Library::DKW::LIB::MemAllocClear(iVar13 + 299U);
    pAVar15 = param_1;
    pAVar19 = pAVar6;
    memmove(pAVar19, pAVar15, 0x12a); /* compiler REP MOVS byte copy */
    pAVar19 = (AllocationRecord_0067D3B0 *)((byte *)pAVar19 + 0x128);
    pAVar15 = (AllocationRecord_0067D3B0 *)((byte *)pAVar15 + 0x128);
    pAVar19->field_0x2 = pAVar15->field_0x2;
    pAVar6->field_0018 = 0;
    pAVar6->field_0014 = *param_4;
    pAVar6->field_0102 = param_3;
    uVar17 = pAVar6->field_0102;
    puVar9 = &pAVar6->field_0x12a;
    puVar11 = (byte *)puVar9;
    memmove(puVar11, param_2, uVar17); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    pAVar6->field_00FE = puVar9 + (-0x12a - (int)pAVar6);
    pDVar7 = pAVar6->field_00C2;
    puVar14 = (uint *)(puVar9 + pAVar6->field_0102);
    local_14 = 0;
    if (0 < (int)pDVar7->count) {
      bVar21 = pDVar7->count != 0;
      do {
        if (bVar21) {
          puVar11 = DArrayAt<byte>(pDVar7, local_14);
        }
        else {
          puVar11 = nullptr;
        }
        puVar16 = (uint *)*puVar11;
        if ((puVar16 != nullptr) && ((char)puVar16[6] == '\0')) {
          uVar17 = puVar11[3];
          puVar20 = puVar14;
          memmove(puVar20, puVar16, uVar17); /* compiler REP MOVS byte copy */
          puVar9 = (undefined1 *)((int)puVar14 + (-0x12a - (int)pAVar6));
          puVar14 = (uint *)((int)puVar14 + puVar11[3]);
          puVar11[2] = puVar9;
        }
        pDVar7 = pAVar6->field_00C2;
        local_14 = local_14 + 1;
        bVar21 = local_14 < pDVar7->count;
      } while ((int)local_14 < (int)pDVar7->count);
    }
    iVar13 = 0;
    local_8 = pAVar6;
    do {
      puVar16 = *(uint **)((int)&pAVar6->field_00C2 + iVar13);
      if (puVar16 != nullptr) {
        FUN_006affc0(puVar16,puVar14,&local_10);
        *(int *)(&local_8->field_0xc6 + iVar13) = (int)puVar14 + (-0x12a - (int)local_8);
        puVar14 = (uint *)((int)puVar14 + *(int *)(&local_8->field_0xca + iVar13));
        pAVar6 = local_8;
      }
      ppDVar4 = local_18;
      iVar13 = iVar13 + 0xc;
    } while (iVar13 < 0x3c);
    if ((((param_1->field_0018 == '\x02') && (pDVar7 = *local_18, pDVar7 != nullptr)) &&
        (dVar2 = pDVar7->count, dVar2 != 0)) && (local_c != nullptr)) {
      uVar17 = 0;
      if (0 < (int)dVar2) {
        bVar21 = dVar2 != 0;
        do {
          if (bVar21) {
            piVar18 = DArrayAt<int>(pDVar7, uVar17);
          }
          else {
            piVar18 = nullptr;
          }
          if (((*piVar18 != 0) && (*(char *)(*piVar18 + 0x18) == '\0')) &&
             ((iVar13 = *(int *)((int)local_c + uVar17 * 4), iVar13 != 0 &&
              (((char *)iVar13)[0x18] == '\x02')))) {
            FreeAndNull(piVar18);
            *piVar18 = *(int *)((int)local_c + uVar17 * 4);
          }
          pDVar7 = *ppDVar4;
          uVar17 = uVar17 + 1;
          bVar21 = uVar17 < pDVar7->count;
        } while ((int)uVar17 < (int)pDVar7->count);
      }
      FreeAndNull(&local_c);
      pAVar6 = local_8;
    }
    g_currentExceptionFrame = local_5c.previous;
    return pAVar6;
  }
  g_currentExceptionFrame = local_5c.previous;
  if (((param_1->field_0018 == '\x02') && (pDVar7 = param_1->field_00C2, pDVar7 != nullptr))
     && ((dVar2 = pDVar7->count, dVar2 != 0 && (local_c != nullptr)))) {
    if (0 < (int)dVar2) {
      bVar21 = dVar2 != 0;
      do {
        if (bVar21) {
          piVar18 = DArrayAt<int>(pDVar7, uVar17);
        }
        else {
          piVar18 = nullptr;
        }
        if ((((*piVar18 != 0) && (*(char *)(*piVar18 + 0x18) == '\0')) &&
            (iVar13 = *(int *)((int)local_c + uVar17 * 4), iVar13 != 0)) &&
           (((char *)iVar13)[0x18] == '\x02')) {
          FreeAndNull(piVar18);
          *piVar18 = *(int *)((int)local_c + uVar17 * 4);
        }
        pDVar7 = param_1->field_00C2;
        uVar17 = uVar17 + 1;
        bVar21 = uVar17 < pDVar7->count;
      } while ((int)uVar17 < (int)pDVar7->count);
    }
    ppDVar4 = local_18;
    FreeAndNull(&local_c);
  }
  if (local_c != nullptr) {
    FreeAndNull(&local_c);
  }
  if (local_8 != nullptr) {
    FreeAndNull(&local_8);
  }
  iVar12 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr_d.cpp",0xda,0,(int)ppDVar4,
                              "%s","PlrDataPack");
  if (iVar12 == 0) {
    RaiseInternalException((int)ppDVar4,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0xdb);
    return nullptr;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

