#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 534 | 581 | 584 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 0067E7E0 @ 0056B0F4 */

uint * __cdecl CreateArbList(cMf32 *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  char *pcVar5;
  void *pvVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ushort *_Source;
  byte *pbVar12;
  undefined4 *puVar13;
  char *pcVar14;
  char *pcVar15;
  byte *pbVar16;
  bool bVar17;
  undefined1 local_33c [516];
  char local_138 [76];
  char local_ec [36];
  char local_c8 [32];
  uint local_a8;
  undefined4 local_a4;
  InternalExceptionFrame local_a0;
  byte local_5c [64];
  int local_1c;
  int local_18;
  int local_14;
  DArrayTy *local_10;
  ushort *local_c;
  DArrayTy *local_8;

  puVar13 = (undefined4 *)local_33c;
  for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  *(undefined1 *)puVar13 = 0;
  local_8 = (DArrayTy *)0x0;
  local_10 = (DArrayTy *)0x0;
  local_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a0;
  iVar8 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0);
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar11 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x245,0,iVar8,&DAT_007a4ccc,
                                s_CreateArbList_007d30e0);
    if (iVar11 == 0) {
      if (local_8 != (DArrayTy *)0x0) {
        DArrayDestroy(local_8);
      }
      if (local_10 != (DArrayTy *)0x0) {
        DArrayDestroy(local_10);
      }
      RaiseInternalException(iVar8,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x248);
      return (uint *)0x0;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == (cMf32 *)0x0) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x216);
  }
  local_8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x98,5);
  if (param_2 != 0) {
    local_10 = (DArrayTy *)CreateOpponentList(param_1,0,0xffffffff);
  }
  uVar9 = 0xffffffff;
  local_33c[0] = 0xc;
  pcVar5 = PTR_s_AIBOSS_0079d720;
  do {
    pcVar15 = pcVar5;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar5 = pcVar15 + -uVar9;
  pcVar15 = local_33c + 1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar15 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar15 = pcVar15 + 1;
  }
  cMf32::ToBeg(param_1,FUN_006f2d10,local_33c);
  pcVar5 = (char *)cMf32::RecNameGetNext(param_1);
  do {
    if (pcVar5 == (char *)0x0) {
      if (local_10 != (DArrayTy *)0x0) {
        DArrayDestroy(local_10);
      }
      g_currentExceptionFrame = local_a0.previous;
      return &local_8->flags;
    }
    local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(param_1,pcVar5,0,1);
    if (local_c != (ushort *)0x0) {
      _Source = local_c + 3;
      pcVar15 = local_138;
      for (iVar8 = 0x26; iVar8 != 0; iVar8 = iVar8 + -1) {
        pcVar15[0] = '\0';
        pcVar15[1] = '\0';
        pcVar15[2] = '\0';
        pcVar15[3] = '\0';
        pcVar15 = pcVar15 + 4;
      }
      Library::MSVCRT::_strncpy(local_138,(char *)_Source,0x3f);
      Library::MSVCRT::_strncpy(local_ec,pcVar5,0x1f);
      uVar9 = 0xffffffff;
      pcVar15 = PTR_s_AIBOSS_0079d720;
      do {
        pcVar14 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar15 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar14;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      pbVar12 = (byte *)(pcVar14 + -uVar9);
      pbVar16 = local_5c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pbVar16 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar16 = pbVar16 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pbVar16 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar16 = pbVar16 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_007c1890;
      do {
        pcVar14 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar15 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar14;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      local_18 = 0;
      iVar8 = -1;
      pbVar12 = local_5c;
      do {
        pbVar16 = pbVar12;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pbVar16 = pbVar12 + 1;
        bVar2 = *pbVar12;
        pbVar12 = pbVar16;
      } while (bVar2 != 0);
      pbVar12 = (byte *)(pcVar14 + -uVar9);
      pbVar16 = pbVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pbVar16 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar16 = pbVar16 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pbVar16 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar16 = pbVar16 + 1;
      }
      Library::MSVCRT::FUN_0072ee80(pcVar5,local_5c);
      iVar8 = local_18;
      if (local_18 == 0) {
        Library::MSVCRT::_strncpy(local_c8,PTR_s_OBJECTIVES_0079d718,0x1f);
      }
      else {
        uVar9 = 0xffffffff;
        pcVar5 = PTR_s_OBJECTIVES_0079d718;
        do {
          pcVar15 = pcVar5;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pbVar12 = (byte *)(pcVar15 + -uVar9);
        pbVar16 = local_5c;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pbVar16 = *(undefined4 *)pbVar12;
          pbVar12 = pbVar12 + 4;
          pbVar16 = pbVar16 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pbVar16 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          pbVar16 = pbVar16 + 1;
        }
        uVar9 = 0xffffffff;
        pcVar5 = &DAT_007d30f0;
        do {
          pcVar15 = pcVar5;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        iVar11 = -1;
        pbVar12 = local_5c;
        do {
          pbVar16 = pbVar12;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pbVar16 = pbVar12 + 1;
          bVar2 = *pbVar12;
          pbVar12 = pbVar16;
        } while (bVar2 != 0);
        pbVar12 = (byte *)(pcVar15 + -uVar9);
        pbVar16 = pbVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pbVar16 = *(undefined4 *)pbVar12;
          pbVar12 = pbVar12 + 4;
          pbVar16 = pbVar16 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pbVar16 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          pbVar16 = pbVar16 + 1;
        }
        wsprintfA(local_c8,(char *)local_5c,iVar8);
      }
      uVar9 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_a8 = *(uint *)(local_c + 0x29);
      if (local_a8 == 0) {
        local_a8 = 1;
      }
      local_a4 = 0;
      bVar4 = true;
      if (param_2 != 0) {
        bVar4 = false;
        local_14 = 0;
        local_1c = 0;
        uVar10 = local_10->count;
        if (0 < (int)uVar10) {
          bVar17 = uVar10 != 0;
          do {
            if (bVar17) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_10, uVar9) (runtime stride) */
              pvVar6 = (void *)(local_10->elementSize * uVar9 + (int)local_10->data);
            }
            else {
              pvVar6 = (void *)0x0;
            }
            if ((pvVar6 != (void *)0x0) && ((*(uint *)((int)pvVar6 + 0x90) & local_a8) != 0)) {
              iVar8 = *(int *)((int)pvVar6 + 0x94);
              if (iVar8 == 1) {
                bVar4 = true;
              }
              else if (iVar8 == 2) {
                local_14 = 1;
              }
              else if (iVar8 == 3) {
                local_1c = 1;
              }
            }
            uVar9 = uVar9 + 1;
            bVar17 = uVar9 < uVar10;
          } while ((int)uVar9 < (int)uVar10);
        }
        if (((bVar4) && (local_14 != 0)) && (local_1c != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
      if (bVar4) {
        Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)local_138);
      }
      cMf32::RecMemFree(param_1,(uint *)&local_c);
    }
    pcVar5 = (char *)cMf32::RecNameGetNext(param_1);
  } while( true );
}

