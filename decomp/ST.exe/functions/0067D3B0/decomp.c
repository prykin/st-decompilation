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

byte * __cdecl PlrDataPack(uint *param_1,undefined4 *param_2,int param_3,uint *param_4)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  void **ppvVar12;
  uint uVar13;
  byte *pbVar14;
  uint *puVar15;
  bool bVar16;
  InternalExceptionFrame local_5c;
  int *local_18;
  uint local_14;
  int local_10;
  undefined4 *local_c;
  uint *local_8;

  uVar13 = 0;
  local_8 = (uint *)0x0;
  local_10 = 0;
  local_c = (undefined4 *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  piVar3 = (int *)Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  local_18 = piVar3;
  if (piVar3 == (int *)0x0) {
    local_10 = param_3;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((((char)param_1[6] == '\x02') && (*(int *)((int)param_1 + 0xc2) != 0)) &&
       (iVar7 = *(int *)(*(int *)((int)param_1 + 0xc2) + 0xc), iVar7 != 0)) {
      local_c = Library::DKW::LIB::FUN_006aac10(iVar7 << 2);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar7 = *(int *)((int)param_1 + 0xc2);
      uVar13 = 0;
      if (0 < *(int *)(iVar7 + 0xc)) {
        bVar16 = *(int *)(iVar7 + 0xc) != 0;
        do {
          if (bVar16) {
            piVar3 = (int *)(*(int *)(iVar7 + 8) * uVar13 + *(int *)(iVar7 + 0x1c));
          }
          else {
            piVar3 = (int *)0x0;
          }
          iVar7 = *piVar3;
          if ((iVar7 != 0) && (*(char *)(iVar7 + 0x18) == '\x02')) {
            local_c[uVar13] = iVar7;
            pbVar4 = TactDataPack((undefined4 *)local_c[uVar13],(uint *)(piVar3 + 3));
            *piVar3 = (int)pbVar4;
          }
          uVar13 = uVar13 + 1;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar7 = *(int *)((int)param_1 + 0xc2);
          bVar16 = uVar13 < *(uint *)(iVar7 + 0xc);
        } while ((int)uVar13 < (int)*(uint *)(iVar7 + 0xc));
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar7 = *(int *)((int)param_1 + 0xc2);
    local_18 = (int *)((int)param_1 + 0xc2);
    iVar9 = local_10;
    if (iVar7 != 0) {
      uVar13 = 0;
      if (0 < *(int *)(iVar7 + 0xc)) {
        bVar16 = *(int *)(iVar7 + 0xc) != 0;
        do {
          if (bVar16) {
            piVar3 = (int *)(*(int *)(iVar7 + 8) * uVar13 + *(int *)(iVar7 + 0x1c));
          }
          else {
            piVar3 = (int *)0x0;
          }
          if ((*piVar3 != 0) && (*(char *)(*piVar3 + 0x18) == '\0')) {
            iVar9 = iVar9 + piVar3[3];
            local_10 = iVar9;
          }
          uVar13 = uVar13 + 1;
          bVar16 = uVar13 < *(uint *)(iVar7 + 0xc);
        } while ((int)uVar13 < (int)*(uint *)(iVar7 + 0xc));
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
    puVar5 = Library::DKW::LIB::FUN_006aac10(iVar9 + 299U);
    puVar10 = param_1;
    puVar11 = puVar5;
    for (iVar7 = 0x4a; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    *(short *)puVar11 = (short)*puVar10;
    *(byte *)((int)puVar11 + 2) = *(byte *)((int)puVar10 + 2);
    *(byte *)(puVar5 + 6) = 0;
    puVar5[5] = *param_4;
    *(int *)((int)puVar5 + 0x102) = param_3;
    uVar13 = *(uint *)((int)puVar5 + 0x102);
    pbVar4 = (byte *)((int)puVar5 + 0x12a);
    pbVar14 = pbVar4;
    for (uVar6 = uVar13 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar14 = *param_2;
      param_2 = (undefined4 *)((int)param_2 + 4);
      pbVar14 = pbVar14 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pbVar14 = *(byte *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      pbVar14 = pbVar14 + 1;
    }
    *(byte **)((int)puVar5 + 0xfe) = pbVar4 + (-0x12a - (int)puVar5);
    iVar7 = *(int *)((int)puVar5 + 0xc2);
    puVar10 = (uint *)(pbVar4 + *(int *)((int)puVar5 + 0x102));
    local_14 = 0;
    if (0 < *(int *)(iVar7 + 0xc)) {
      bVar16 = *(int *)(iVar7 + 0xc) != 0;
      do {
        if (bVar16) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          puVar8 = (undefined4 *)(*(int *)(iVar7 + 8) * local_14 + *(int *)(iVar7 + 0x1c));
        }
        else {
          puVar8 = (undefined4 *)0x0;
        }
        puVar11 = (uint *)*puVar8;
        if ((puVar11 != (uint *)0x0) && ((byte)puVar11[6] == 0)) {
          uVar13 = puVar8[3];
          puVar15 = puVar10;
          for (uVar6 = uVar13 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar15 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar15 = puVar15 + 1;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(byte *)puVar15 = (byte)*puVar11;
            puVar11 = (uint *)((int)puVar11 + 1);
            puVar15 = (uint *)((int)puVar15 + 1);
          }
          pbVar4 = (byte *)((int)puVar10 + (-0x12a - (int)puVar5));
          puVar10 = (uint *)((int)puVar10 + puVar8[3]);
          puVar8[2] = pbVar4;
        }
        iVar7 = *(int *)((int)puVar5 + 0xc2);
        local_14 = local_14 + 1;
        bVar16 = local_14 < *(uint *)(iVar7 + 0xc);
      } while ((int)local_14 < (int)*(uint *)(iVar7 + 0xc));
    }
    iVar7 = 0;
    local_8 = puVar5;
    do {
      puVar11 = *(uint **)(iVar7 + 0xc2 + (int)puVar5);
      if (puVar11 != (uint *)0x0) {
        FUN_006affc0(puVar11,puVar10,&local_10);
        *(int *)(iVar7 + 0xc6 + (int)local_8) = (int)puVar10 + (-0x12a - (int)local_8);
        puVar10 = (uint *)((int)puVar10 + *(int *)(iVar7 + 0xca + (int)local_8));
        puVar5 = local_8;
      }
      piVar3 = local_18;
      iVar7 = iVar7 + 0xc;
    } while (iVar7 < 0x3c);
    if (((((char)param_1[6] == '\x02') && (iVar7 = *local_18, iVar7 != 0)) &&
        (iVar9 = *(int *)(iVar7 + 0xc), iVar9 != 0)) && (local_c != (undefined4 *)0x0)) {
      uVar13 = 0;
      if (0 < iVar9) {
        bVar16 = iVar9 != 0;
        do {
          if (bVar16) {
            ppvVar12 = (void **)(*(int *)(iVar7 + 8) * uVar13 + *(int *)(iVar7 + 0x1c));
          }
          else {
            ppvVar12 = (void **)0x0;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (((*ppvVar12 != (void *)0x0) && (*(char *)((int)*ppvVar12 + 0x18) == '\0')) &&
             ((local_c[uVar13] != 0 && (*(char *)(local_c[uVar13] + 0x18) == '\x02')))) {
            FreeAndNull(ppvVar12);
            *ppvVar12 = (void *)local_c[uVar13];
          }
          iVar7 = *piVar3;
          uVar13 = uVar13 + 1;
          bVar16 = uVar13 < *(uint *)(iVar7 + 0xc);
        } while ((int)uVar13 < (int)*(uint *)(iVar7 + 0xc));
      }
      FreeAndNull(&local_c);
      puVar5 = local_8;
    }
    g_currentExceptionFrame = local_5c.previous;
    return (byte *)puVar5;
  }
  g_currentExceptionFrame = local_5c.previous;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((char)param_1[6] == '\x02') && (iVar7 = *(int *)((int)param_1 + 0xc2), iVar7 != 0)) &&
     ((iVar9 = *(int *)(iVar7 + 0xc), iVar9 != 0 && (local_c != (undefined4 *)0x0)))) {
    if (0 < iVar9) {
      bVar16 = iVar9 != 0;
      do {
        if (bVar16) {
          ppvVar12 = (void **)(*(int *)(iVar7 + 8) * uVar13 + *(int *)(iVar7 + 0x1c));
        }
        else {
          ppvVar12 = (void **)0x0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((((*ppvVar12 != (void *)0x0) && (*(char *)((int)*ppvVar12 + 0x18) == '\0')) &&
            (local_c[uVar13] != 0)) && (*(char *)(local_c[uVar13] + 0x18) == '\x02')) {
          FreeAndNull(ppvVar12);
          *ppvVar12 = (void *)local_c[uVar13];
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar7 = *(int *)((int)param_1 + 0xc2);
        uVar13 = uVar13 + 1;
        bVar16 = uVar13 < *(uint *)(iVar7 + 0xc);
      } while ((int)uVar13 < (int)*(uint *)(iVar7 + 0xc));
    }
    piVar3 = local_18;
    FreeAndNull(&local_c);
  }
  if (local_c != (undefined4 *)0x0) {
    FreeAndNull(&local_c);
  }
  if (local_8 != (uint *)0x0) {
    FreeAndNull(&local_8);
  }
  iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr_d.cpp",0xda,0,(int)piVar3,"%s"
                             ,"PlrDataPack");
  if (iVar7 == 0) {
    RaiseInternalException((int)piVar3,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0xdb);
    return (byte *)0x0;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

