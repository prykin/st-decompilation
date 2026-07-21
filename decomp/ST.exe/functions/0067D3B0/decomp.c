#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 218 | 219 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl
PlrDataPack(AnonShape_0067D3B0_A3AACF30 *param_1,undefined4 *param_2,int param_3,uint *param_4)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  AnonShape_0067D3B0_A3AACF30 *pAVar11;
  uint *puVar12;
  void **ppvVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  bool bVar17;
  InternalExceptionFrame local_5c;
  int *local_18;
  uint local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;

  uVar14 = 0;
  local_8 = (undefined4 *)0x0;
  local_10 = 0;
  local_c = (undefined4 *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  piVar3 = (int *)Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  local_18 = piVar3;
  if (piVar3 == (int *)0x0) {
    local_10 = param_3;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((param_1->field_0x18 == '\x02') && (param_1->field_00C2 != 0)) &&
       (iVar7 = *(int *)(param_1->field_00C2 + 0xc), iVar7 != 0)) {
      local_c = Library::DKW::LIB::FUN_006aac10(iVar7 << 2);
      iVar7 = param_1->field_00C2;
      uVar14 = 0;
      if (0 < *(int *)(iVar7 + 0xc)) {
        bVar17 = *(int *)(iVar7 + 0xc) != 0;
        do {
          if (bVar17) {
            piVar3 = (int *)(*(int *)(iVar7 + 8) * uVar14 + *(int *)(iVar7 + 0x1c));
          }
          else {
            piVar3 = (int *)0x0;
          }
          iVar7 = *piVar3;
          if ((iVar7 != 0) && (*(char *)(iVar7 + 0x18) == '\x02')) {
            local_c[uVar14] = iVar7;
            puVar4 = TactDataPack((undefined4 *)local_c[uVar14],(uint *)(piVar3 + 3));
            *piVar3 = (int)puVar4;
          }
          uVar14 = uVar14 + 1;
          iVar7 = param_1->field_00C2;
          bVar17 = uVar14 < *(uint *)(iVar7 + 0xc);
        } while ((int)uVar14 < (int)*(uint *)(iVar7 + 0xc));
      }
    }
    iVar7 = param_1->field_00C2;
    local_18 = &param_1->field_00C2;
    iVar9 = local_10;
    if (iVar7 != 0) {
      uVar14 = 0;
      if (0 < *(int *)(iVar7 + 0xc)) {
        bVar17 = *(int *)(iVar7 + 0xc) != 0;
        do {
          if (bVar17) {
            piVar3 = (int *)(*(int *)(iVar7 + 8) * uVar14 + *(int *)(iVar7 + 0x1c));
          }
          else {
            piVar3 = (int *)0x0;
          }
          if ((*piVar3 != 0) && (*(char *)(*piVar3 + 0x18) == '\0')) {
            iVar9 = iVar9 + piVar3[3];
            local_10 = iVar9;
          }
          uVar14 = uVar14 + 1;
          bVar17 = uVar14 < *(uint *)(iVar7 + 0xc);
        } while ((int)uVar14 < (int)*(uint *)(iVar7 + 0xc));
      }
    }
    iVar7 = 5;
    piVar3 = local_18;
    do {
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8) + 0x1c;
        iVar9 = iVar9 + iVar1;
        piVar3[2] = iVar1;
        local_10 = iVar9;
      }
      piVar3 = piVar3 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *param_4 = iVar9 + 299U;
    puVar4 = Library::DKW::LIB::FUN_006aac10(iVar9 + 299U);
    pAVar11 = param_1;
    puVar8 = puVar4;
    for (iVar7 = 0x4a; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *(undefined4 *)pAVar11;
      pAVar11 = (AnonShape_0067D3B0_A3AACF30 *)&pAVar11->field_0x4;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = *(undefined2 *)pAVar11;
    *(undefined1 *)((int)puVar8 + 2) = pAVar11->field_0x2;
    *(undefined1 *)(puVar4 + 6) = 0;
    puVar4[5] = *param_4;
    *(int *)((int)puVar4 + 0x102) = param_3;
    uVar14 = *(uint *)((int)puVar4 + 0x102);
    puVar8 = (undefined4 *)((int)puVar4 + 0x12a);
    puVar15 = puVar8;
    for (uVar5 = uVar14 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar15 = *param_2;
      param_2 = param_2 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar15 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
    *(undefined1 **)((int)puVar4 + 0xfe) = (undefined1 *)((int)puVar8 + (-0x12a - (int)puVar4));
    iVar7 = *(int *)((int)puVar4 + 0xc2);
    puVar10 = (uint *)((int)puVar8 + *(int *)((int)puVar4 + 0x102));
    local_14 = 0;
    if (0 < *(int *)(iVar7 + 0xc)) {
      bVar17 = *(int *)(iVar7 + 0xc) != 0;
      do {
        if (bVar17) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          puVar8 = (undefined4 *)(*(int *)(iVar7 + 8) * local_14 + *(int *)(iVar7 + 0x1c));
        }
        else {
          puVar8 = (undefined4 *)0x0;
        }
        puVar12 = (uint *)*puVar8;
        if ((puVar12 != (uint *)0x0) && ((char)puVar12[6] == '\0')) {
          uVar14 = puVar8[3];
          puVar16 = puVar10;
          for (uVar5 = uVar14 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar16 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar16 = puVar16 + 1;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(char *)puVar16 = (char)*puVar12;
            puVar12 = (uint *)((int)puVar12 + 1);
            puVar16 = (uint *)((int)puVar16 + 1);
          }
          puVar6 = (undefined1 *)((int)puVar10 + (-0x12a - (int)puVar4));
          puVar10 = (uint *)((int)puVar10 + puVar8[3]);
          puVar8[2] = puVar6;
        }
        iVar7 = *(int *)((int)puVar4 + 0xc2);
        local_14 = local_14 + 1;
        bVar17 = local_14 < *(uint *)(iVar7 + 0xc);
      } while ((int)local_14 < (int)*(uint *)(iVar7 + 0xc));
    }
    iVar7 = 0;
    local_8 = puVar4;
    do {
      puVar12 = *(uint **)(iVar7 + 0xc2 + (int)puVar4);
      if (puVar12 != (uint *)0x0) {
        FUN_006affc0(puVar12,puVar10,&local_10);
        *(int *)(iVar7 + 0xc6 + (int)local_8) = (int)puVar10 + (-0x12a - (int)local_8);
        puVar10 = (uint *)((int)puVar10 + *(int *)(iVar7 + 0xca + (int)local_8));
        puVar4 = local_8;
      }
      piVar3 = local_18;
      iVar7 = iVar7 + 0xc;
    } while (iVar7 < 0x3c);
    if ((((param_1->field_0x18 == '\x02') && (iVar7 = *local_18, iVar7 != 0)) &&
        (iVar9 = *(int *)(iVar7 + 0xc), iVar9 != 0)) && (local_c != (undefined4 *)0x0)) {
      uVar14 = 0;
      if (0 < iVar9) {
        bVar17 = iVar9 != 0;
        do {
          if (bVar17) {
            ppvVar13 = (void **)(*(int *)(iVar7 + 8) * uVar14 + *(int *)(iVar7 + 0x1c));
          }
          else {
            ppvVar13 = (void **)0x0;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (((*ppvVar13 != (void *)0x0) && (*(char *)((int)*ppvVar13 + 0x18) == '\0')) &&
             ((local_c[uVar14] != 0 && (*(char *)(local_c[uVar14] + 0x18) == '\x02')))) {
            FreeAndNull(ppvVar13);
            *ppvVar13 = (void *)local_c[uVar14];
          }
          iVar7 = *piVar3;
          uVar14 = uVar14 + 1;
          bVar17 = uVar14 < *(uint *)(iVar7 + 0xc);
        } while ((int)uVar14 < (int)*(uint *)(iVar7 + 0xc));
      }
      FreeAndNull(&local_c);
      puVar4 = local_8;
    }
    g_currentExceptionFrame = local_5c.previous;
    return puVar4;
  }
  g_currentExceptionFrame = local_5c.previous;
  if (((param_1->field_0x18 == '\x02') && (iVar7 = param_1->field_00C2, iVar7 != 0)) &&
     ((iVar9 = *(int *)(iVar7 + 0xc), iVar9 != 0 && (local_c != (undefined4 *)0x0)))) {
    if (0 < iVar9) {
      bVar17 = iVar9 != 0;
      do {
        if (bVar17) {
          ppvVar13 = (void **)(*(int *)(iVar7 + 8) * uVar14 + *(int *)(iVar7 + 0x1c));
        }
        else {
          ppvVar13 = (void **)0x0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((((*ppvVar13 != (void *)0x0) && (*(char *)((int)*ppvVar13 + 0x18) == '\0')) &&
            (local_c[uVar14] != 0)) && (*(char *)(local_c[uVar14] + 0x18) == '\x02')) {
          FreeAndNull(ppvVar13);
          *ppvVar13 = (void *)local_c[uVar14];
        }
        iVar7 = param_1->field_00C2;
        uVar14 = uVar14 + 1;
        bVar17 = uVar14 < *(uint *)(iVar7 + 0xc);
      } while ((int)uVar14 < (int)*(uint *)(iVar7 + 0xc));
    }
    piVar3 = local_18;
    FreeAndNull(&local_c);
  }
  if (local_c != (undefined4 *)0x0) {
    FreeAndNull(&local_c);
  }
  if (local_8 != (undefined4 *)0x0) {
    FreeAndNull(&local_8);
  }
  iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr_d.cpp",0xda,0,(int)piVar3,"%s"
                             ,"PlrDataPack");
  if (iVar7 == 0) {
    RaiseInternalException((int)piVar3,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0xdb);
    return (undefined4 *)0x0;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

