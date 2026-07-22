#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 218 | 219 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006494C0 -> 0067D3B0 @ 00649638 | 00649790 -> 0067D3B0 @ 00649908

   [STPrototypeApplier] Propagated return.
   Evidence: 0067D3B0 returns used as parameter 0 of FUN_006809b0 @ 006857E7 | 0067D3B0 returns used
   as parameter 2 of Library::Ourlib::MFAOBJ::mfAObjSave @ 0067DA63 */

byte * __cdecl
PlrDataPack(AnonShape_0067D3B0_B421D52F *param_1,undefined4 *param_2,int param_3,uint *param_4)

{
  int iVar1;
  dword dVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  DArrayTy **ppDVar7;
  byte *pbVar8;
  DArrayTy *pDVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *puVar15;
  AnonShape_0067D3B0_B421D52F *pAVar16;
  uint *puVar17;
  void **ppvVar18;
  uint uVar19;
  int *piVar20;
  byte *pbVar21;
  uint *puVar22;
  bool bVar23;
  InternalExceptionFrame local_5c;
  DArrayTy **local_18;
  uint local_14;
  int local_10;
  undefined4 *local_c;
  byte *local_8;

  uVar19 = 0;
  local_8 = (byte *)0x0;
  local_10 = 0;
  local_c = (undefined4 *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  ppDVar7 = (DArrayTy **)Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  local_18 = ppDVar7;
  if (ppDVar7 == (DArrayTy **)0x0) {
    local_10 = param_3;
    if (((param_1->field_0x18 == '\x02') && (param_1->field_00C2 != (DArrayTy *)0x0)) &&
       (dVar2 = param_1->field_00C2->count, dVar2 != 0)) {
      local_c = Library::DKW::LIB::FUN_006aac10(dVar2 << 2);
      pDVar9 = param_1->field_00C2;
      uVar19 = 0;
      if (0 < (int)pDVar9->count) {
        bVar23 = pDVar9->count != 0;
        do {
          if (bVar23) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar9, uVar19) (runtime stride) */
            piVar20 = (int *)(pDVar9->elementSize * uVar19 + (int)pDVar9->data);
          }
          else {
            piVar20 = (int *)0x0;
          }
          iVar14 = *piVar20;
          if ((iVar14 != 0) && (*(char *)(iVar14 + 0x18) == '\x02')) {
            local_c[uVar19] = iVar14;
            pbVar8 = TactDataPack((undefined4 *)local_c[uVar19],(uint *)(piVar20 + 3));
            *piVar20 = (int)pbVar8;
          }
          uVar19 = uVar19 + 1;
          pDVar9 = param_1->field_00C2;
          bVar23 = uVar19 < pDVar9->count;
        } while ((int)uVar19 < (int)pDVar9->count);
      }
    }
    pDVar9 = param_1->field_00C2;
    local_18 = &param_1->field_00C2;
    iVar14 = local_10;
    if (pDVar9 != (DArrayTy *)0x0) {
      uVar19 = 0;
      if (0 < (int)pDVar9->count) {
        bVar23 = pDVar9->count != 0;
        do {
          if (bVar23) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar9, uVar19) (runtime stride) */
            piVar20 = (int *)(pDVar9->elementSize * uVar19 + (int)pDVar9->data);
          }
          else {
            piVar20 = (int *)0x0;
          }
          if ((*piVar20 != 0) && (*(char *)(*piVar20 + 0x18) == '\0')) {
            iVar14 = iVar14 + piVar20[3];
            local_10 = iVar14;
          }
          uVar19 = uVar19 + 1;
          bVar23 = uVar19 < pDVar9->count;
        } while ((int)uVar19 < (int)pDVar9->count);
      }
    }
    iVar12 = 5;
    ppDVar7 = local_18;
    do {
      pDVar9 = *ppDVar7;
      if (pDVar9 != (DArrayTy *)0x0) {
        iVar1 = pDVar9->count * pDVar9->elementSize + 0x1c;
        iVar14 = iVar14 + iVar1;
        ppDVar7[2] = (DArrayTy *)iVar1;
        local_10 = iVar14;
      }
      ppDVar7 = ppDVar7 + 3;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    *param_4 = iVar14 + 299U;
    pbVar8 = (byte *)Library::DKW::LIB::FUN_006aac10(iVar14 + 299U);
    pAVar16 = param_1;
    pbVar11 = pbVar8;
    for (iVar14 = 0x4a; iVar14 != 0; iVar14 = iVar14 + -1) {
      uVar4 = pAVar16->field_0x1;
      uVar5 = pAVar16->field_0x2;
      uVar6 = pAVar16->field_0x3;
      pbVar11[0] = pAVar16->field_0x0;
      pbVar11[1] = uVar4;
      pbVar11[2] = uVar5;
      pbVar11[3] = uVar6;
      pAVar16 = (AnonShape_0067D3B0_B421D52F *)&pAVar16->field_0x4;
      pbVar11 = pbVar11 + 4;
    }
    uVar4 = pAVar16->field_0x1;
    pbVar11[0] = pAVar16->field_0x0;
    pbVar11[1] = uVar4;
    pbVar11[2] = pAVar16->field_0x2;
    pbVar8[0x18] = 0;
    *(uint *)(pbVar8 + 0x14) = *param_4;
    *(int *)(pbVar8 + 0x102) = param_3;
    uVar19 = *(uint *)(pbVar8 + 0x102);
    pbVar11 = pbVar8 + 0x12a;
    pbVar21 = pbVar11;
    for (uVar10 = uVar19 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pbVar21 = *param_2;
      param_2 = (undefined4 *)((int)param_2 + 4);
      pbVar21 = pbVar21 + 4;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *pbVar21 = *(byte *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      pbVar21 = pbVar21 + 1;
    }
    *(byte **)(pbVar8 + 0xfe) = pbVar11 + (-0x12a - (int)pbVar8);
    iVar14 = *(int *)(pbVar8 + 0xc2);
    puVar15 = (uint *)(pbVar11 + *(int *)(pbVar8 + 0x102));
    local_14 = 0;
    if (0 < *(int *)(iVar14 + 0xc)) {
      bVar23 = *(int *)(iVar14 + 0xc) != 0;
      do {
        if (bVar23) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          puVar13 = (undefined4 *)(*(int *)(iVar14 + 8) * local_14 + *(int *)(iVar14 + 0x1c));
        }
        else {
          puVar13 = (undefined4 *)0x0;
        }
        puVar17 = (uint *)*puVar13;
        if ((puVar17 != (uint *)0x0) && ((byte)puVar17[6] == 0)) {
          uVar19 = puVar13[3];
          puVar22 = puVar15;
          for (uVar10 = uVar19 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar22 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar22 = puVar22 + 1;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(byte *)puVar22 = (byte)*puVar17;
            puVar17 = (uint *)((int)puVar17 + 1);
            puVar22 = (uint *)((int)puVar22 + 1);
          }
          pbVar11 = (byte *)((int)puVar15 + (-0x12a - (int)pbVar8));
          puVar15 = (uint *)((int)puVar15 + puVar13[3]);
          puVar13[2] = pbVar11;
        }
        iVar14 = *(int *)(pbVar8 + 0xc2);
        local_14 = local_14 + 1;
        bVar23 = local_14 < *(uint *)(iVar14 + 0xc);
      } while ((int)local_14 < (int)*(uint *)(iVar14 + 0xc));
    }
    iVar14 = 0;
    local_8 = pbVar8;
    do {
      if (*(uint **)(pbVar8 + iVar14 + 0xc2) != (uint *)0x0) {
        FUN_006affc0(*(uint **)(pbVar8 + iVar14 + 0xc2),puVar15,&local_10);
        *(int *)(local_8 + iVar14 + 0xc6) = (int)puVar15 + (-0x12a - (int)local_8);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        puVar15 = (uint *)((int)puVar15 + *(int *)(local_8 + iVar14 + 0xca));
        pbVar8 = local_8;
      }
      ppDVar7 = local_18;
      iVar14 = iVar14 + 0xc;
    } while (iVar14 < 0x3c);
    if ((((param_1->field_0x18 == '\x02') && (pDVar9 = *local_18, pDVar9 != (DArrayTy *)0x0)) &&
        (dVar2 = pDVar9->count, dVar2 != 0)) && (local_c != (undefined4 *)0x0)) {
      uVar19 = 0;
      if (0 < (int)dVar2) {
        bVar23 = dVar2 != 0;
        do {
          if (bVar23) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar9, uVar19) (runtime stride) */
            ppvVar18 = (void **)(pDVar9->elementSize * uVar19 + (int)pDVar9->data);
          }
          else {
            ppvVar18 = (void **)0x0;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (((*ppvVar18 != (void *)0x0) && (*(char *)((int)*ppvVar18 + 0x18) == '\0')) &&
             ((local_c[uVar19] != 0 && (*(char *)(local_c[uVar19] + 0x18) == '\x02')))) {
            FreeAndNull(ppvVar18);
            *ppvVar18 = (void *)local_c[uVar19];
          }
          pDVar9 = *ppDVar7;
          uVar19 = uVar19 + 1;
          bVar23 = uVar19 < pDVar9->count;
        } while ((int)uVar19 < (int)pDVar9->count);
      }
      FreeAndNull(&local_c);
      pbVar8 = local_8;
    }
    g_currentExceptionFrame = local_5c.previous;
    return pbVar8;
  }
  g_currentExceptionFrame = local_5c.previous;
  if (((param_1->field_0x18 == '\x02') && (pDVar9 = param_1->field_00C2, pDVar9 != (DArrayTy *)0x0))
     && ((dVar2 = pDVar9->count, dVar2 != 0 && (local_c != (undefined4 *)0x0)))) {
    if (0 < (int)dVar2) {
      bVar23 = dVar2 != 0;
      do {
        if (bVar23) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar9, uVar19) (runtime stride) */
          ppvVar18 = (void **)(pDVar9->elementSize * uVar19 + (int)pDVar9->data);
        }
        else {
          ppvVar18 = (void **)0x0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((((*ppvVar18 != (void *)0x0) && (*(char *)((int)*ppvVar18 + 0x18) == '\0')) &&
            (local_c[uVar19] != 0)) && (*(char *)(local_c[uVar19] + 0x18) == '\x02')) {
          FreeAndNull(ppvVar18);
          *ppvVar18 = (void *)local_c[uVar19];
        }
        pDVar9 = param_1->field_00C2;
        uVar19 = uVar19 + 1;
        bVar23 = uVar19 < pDVar9->count;
      } while ((int)uVar19 < (int)pDVar9->count);
    }
    ppDVar7 = local_18;
    FreeAndNull(&local_c);
  }
  if (local_c != (undefined4 *)0x0) {
    FreeAndNull(&local_c);
  }
  if (local_8 != (byte *)0x0) {
    FreeAndNull(&local_8);
  }
  iVar14 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr_d.cpp",0xda,0,(int)ppDVar7,
                              "%s","PlrDataPack");
  if (iVar14 == 0) {
    RaiseInternalException((int)ppDVar7,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0xdb);
    return (byte *)0x0;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

