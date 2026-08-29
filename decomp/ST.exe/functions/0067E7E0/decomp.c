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
  bool bVar4;
  int iVar8;
  char *pcVar5;
  void *pvVar6;
  int iVar11;
  uint *puVar7;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ushort *_Source;
  byte *pbVar13;
  char *pcVar15;
  char *pcVar16;
  byte *pbVar17;
  bool bVar18;
  byte local_33c [516];
  char local_138 [76];
  char local_ec [36];
  char local_c8 [32];
  uint local_a8;
  uint local_a4;
  InternalExceptionFrame local_a0;
  byte local_5c [64];
  int local_1c;
  int local_18;
  int local_14;
  DArrayTy *local_10;
  ushort *local_c;
  DArrayTy *local_8;
  char *pcVar16_mg3;
  char *pcVar5_mg0;
  char *pcVar5_mg3;

  memset((void *)local_33c, 0, 0x201); /* compiler bulk-zero initialization */
  iVar9 = 0;
  local_8 = nullptr;
  local_10 = nullptr;
  local_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a0;

  iVar8 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0);
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_a0.previous;

    iVar11 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr_d.cpp",0x245,0,iVar8,"%s",
                                "CreateArbList");
    if (iVar11 == 0) {
      if (local_8 != nullptr) {
        DArrayDestroy(local_8);
      }
      if (local_10 != nullptr) {
        DArrayDestroy(local_10);
      }
      RaiseInternalException(iVar8,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0x248);
      return nullptr;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == nullptr) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_plr_d.cpp",0x216);
  }
  local_8 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x98,5);
  if (param_2 != 0) {
    /* ST_CALLSITE[0067E870]: CALL 0x00403f44; direct=00403F44 CreateOpponentList */
    local_10 = (DArrayTy *)CreateOpponentList(param_1,0,0xffffffff);
  }
  uVar10 = 0xffffffff;
  local_33c[0] = 0xc;
  pcVar5_mg0 = PTR_s_AIBOSS_0079d720;
  do {
    pcVar5 = pcVar5_mg0;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar5 = pcVar5_mg0 + 1;
    cVar1 = *pcVar5_mg0;
    pcVar5_mg0 = pcVar5;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pcVar5 = pcVar5 + -uVar10;
  pcVar16 = local_33c + 1;
  memmove(pcVar16, pcVar5, uVar10); /* compiler REP MOVS byte copy */
  uVar11 = 0;
  cMf32::ToBeg(param_1,FUN_006f2d10,local_33c);
  /* ST_CALLSITE[0067E8C0]: CALL 0x006f2790; direct=006F2790 cMf32::RecNameGetNext; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__thiscall;pointer:/char;pointer:/cMf32 */
  pcVar5 = cMf32::RecNameGetNext(param_1);
  do {
    if (pcVar5 == nullptr) {
      if (local_10 != nullptr) {
        DArrayDestroy(local_10);
      }
      g_currentExceptionFrame = local_a0.previous;
      return &local_8->flags;
    }
    local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(param_1,pcVar5,0,1);
    if (local_c != nullptr) {
      _Source = local_c + 3;
      pcVar16 = local_138;
      for (iVar9 = 0x26; iVar9 != 0; iVar9 = iVar9 + -1) {
        pcVar16[0] = '\0';
        pcVar16[1] = '\0';
        pcVar16[2] = '\0';
        pcVar16[3] = '\0';
        pcVar16 = pcVar16 + 4;
      }
      Library::MSVCRT::_strncpy(local_138,(char *)_Source,0x3f);
      Library::MSVCRT::_strncpy(local_ec,pcVar5,0x1f);
      uVar10 = 0xffffffff;
      pcVar16_mg3 = PTR_s_AIBOSS_0079d720;
      do {
        pcVar16 = pcVar16_mg3;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar16 = pcVar16_mg3 + 1;
        cVar1 = *pcVar16_mg3;
        pcVar16_mg3 = pcVar16;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pbVar13 = (byte *)(pcVar16 + -uVar10);
      pbVar17 = local_5c;
      memmove(pbVar17, pbVar13, uVar10); /* compiler REP MOVS byte copy */
      uVar11 = 0;
      uVar10 = 0xffffffff;
      pcVar16 = "%d";
      do {
        pcVar15 = pcVar16;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar15 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar15;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      local_18 = 0;
      iVar9 = -1;
      pbVar13 = local_5c;
      do {
        pbVar17 = pbVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pbVar17 = pbVar13 + 1;
        bVar2 = *pbVar13;
        pbVar13 = pbVar17;
      } while (bVar2 != 0);
      pbVar13 = (byte *)(pcVar15 + -uVar10);
      pbVar17 = pbVar17 + -1;
      memmove(pbVar17, pbVar13, uVar10); /* compiler REP MOVS byte copy */
      uVar11 = 0;

      Library::MSVCRT::FUN_0072ee80(pcVar5,local_5c);
      iVar9 = local_18;
      if (local_18 == 0) {
        Library::MSVCRT::_strncpy(local_c8,PTR_s_OBJECTIVES_0079d718,0x1f);
      }
      else {
        uVar10 = 0xffffffff;
        pcVar5_mg3 = PTR_s_OBJECTIVES_0079d718;
        do {
          pcVar5 = pcVar5_mg3;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar5 = pcVar5_mg3 + 1;
          cVar1 = *pcVar5_mg3;
          pcVar5_mg3 = pcVar5;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pbVar13 = (byte *)(pcVar5 + -uVar10);
        pbVar17 = local_5c;
        memmove(pbVar17, pbVar13, uVar10); /* compiler REP MOVS byte copy */
        uVar11 = 0;
        uVar10 = 0xffffffff;
        pcVar5 = "%03d";
        do {
          pcVar16 = pcVar5;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar12 = -1;
        pbVar13 = local_5c;
        do {
          pbVar17 = pbVar13;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pbVar17 = pbVar13 + 1;
          bVar2 = *pbVar13;
          pbVar13 = pbVar17;
        } while (bVar2 != 0);
        pbVar13 = (byte *)(pcVar16 + -uVar10);
        pbVar17 = pbVar17 + -1;
        memmove(pbVar17, pbVar13, uVar10); /* compiler REP MOVS byte copy */
        /* ST_CALLSITE[0067EA01]: CALL dword ptr [0x0085bde8] */
        wsprintfA(local_c8,(char *)local_5c,iVar9);
      }
      uVar10 = 0;
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
        uVar11 = local_10->count;
        if (0 < (int)uVar11) {
          bVar18 = uVar11 != 0;
          do {
            if (bVar18) {
              pvVar6 = DArrayAt<void>(local_10, uVar10);
            }
            else {
              pvVar6 = nullptr;
            }
            if ((pvVar6 != nullptr) && ((STField<uint>(pvVar6,0x90) & local_a8) != 0)) {
              iVar9 = STField<int>(pvVar6,0x94);
              if (iVar9 == 1) {
                bVar4 = true;
              }
              else if (iVar9 == 2) {
                local_14 = 1;
              }
              else if (iVar9 == 3) {
                local_1c = 1;
              }
            }
            uVar10 = uVar10 + 1;
            bVar18 = uVar10 < uVar11;
          } while ((int)uVar10 < (int)uVar11);
        }
        if (((bVar4) && (local_14 != 0)) && (local_1c != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
      if (bVar4) {

        Library::DKW::TBL::DArrayAppend(local_8,local_138);
      }
      cMf32::RecMemFree(param_1,(uint *)&local_c);
    }

    pcVar5 = STPointerBoundaryCast<char *>(cMf32::RecNameGetNext(param_1));
  } while( true );
}

