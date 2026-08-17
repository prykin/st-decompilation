#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to use type for symbol pcVar13 */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 2617 | 2645 | 2646 | 2647 | 2648 | 2649 | 2650 | 2651 | 2655 | 2656 |
   2664 | 2676 | 2682 | 2693 | 2714 | 2725 | 2754 (metadata/report site, not the function
   definition)
   [STSourceProvenanceApplier end]

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0068CEC0 -> EXTERNAL:0000001F @ 0068D116

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

uint * __cdecl
FUN_0068cec0(LPCSTR lpFileName,AnonShape_00683C70_22193481 *param_2,int *param_3,undefined *param_4)

{
  char cVar1;
  byte bVar2;
  int local_EAX_114;
  int iVar3;
  int iVar4;
  uint uVar7;
  uint local_EAX_499;
  uint local_EAX_547;
  byte *pbVar5_mg0;
  DArrayTy *pDVar5;
  int iVar6;
  char *local_EAX_1411;
  char *local_EAX_1858;
  int iVar17;
  int local_EAX_2325;
  int local_EAX_2338;
  uint uVar6;
  uint uVar8;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  int iVar9;
  byte *pbVar10;
  undefined4 **ppuVar11;
  byte *pbVar12;
  char *pcVar14;
  char *pcVar15;
  char *pcVar17;
  uint *puVar18;
  char local_10bc [4100];
  InternalExceptionFrame local_b8;
  InternalExceptionFrame local_74;
  undefined4 *local_30;
  int local_2c;
  char *local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  DArrayTy *local_8;
  byte *pbVar5_mg2;
  char *pcVar13;

  uVar6 = 0xffffffff;
  local_8 = nullptr;
  local_10 = -1;
  local_14 = 0;
  local_c = 0;
  pcVar17 = &CHAR_00h_008016a0;
  do {
    pcVar15 = pcVar17;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar15 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar15;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar17 = pcVar15 + -uVar6;
  pcVar15 = (char *)&DAT_008488b4;
  memmove(pcVar15, pcVar17, uVar6); /* compiler REP MOVS byte copy */
  uVar8 = 0;
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_EAX_114 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0);
  if (local_EAX_114 == 0) {
    if (lpFileName == (LPCSTR)0x0) {
      RaiseInternalException
                (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa39);
    }
    thunk_FUN_00672b60(lpFileName,
                       (AnonShape_GLOBAL_0081194C_4D1525E6 *)&PTR_thunk_FUN_00680270_007d3fa8);
    g_currentExceptionFrame = &local_74;
    local_74.previous = local_b8.previous;
    iVar3 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
    if (iVar3 == 0) {
      thunk_FUN_006729b0(this,1);
      thunk_FUN_006729f0(this_00,1);
      thunk_FUN_00672a30(this_01,0);
      thunk_FUN_00672a70(this_02,0);
      thunk_FUN_00672930(1);
      thunk_FUN_00672970(this_03,1);
      thunk_FUN_006728f0((undefined4 *)&DAT_007d3f78);
      thunk_FUN_00680040();
      if (param_2 == nullptr) {
        RaiseInternalException
                  (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa55);
      }
      iVar4 = thunk_FUN_0067f030("_main_path",(char *)param_2,nullptr);
      if (iVar4 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa56);
      }
      iVar4 = thunk_FUN_0067f030("_inc_path",&param_2->field_0x104,nullptr);
      if (iVar4 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa57);
      }
      iVar4 = thunk_FUN_0067f030("_maps_path",&param_2->field_0x208,nullptr);
      if (iVar4 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa58);
      }
      uVar7 = thunk_FUN_0067f740("_env_var0",param_2->field_030C);
      if ((int)uVar7 < 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa59);
      }
      local_EAX_499 = thunk_FUN_0067f740("_env_var1",param_2->field_0310);
      if ((int)local_EAX_499 < 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa5a);
      }
      local_EAX_547 = thunk_FUN_0067f740("_env_var2",param_2->field_0314);
      if ((int)local_EAX_547 < 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa5b);
      }
      /* ST_CALLSITE[0068D116]: CALL dword ptr [0x0085bba8] */
      GetFullPathNameA(lpFileName,0x104,&DAT_0084868c,nullptr);
      Library::MSVCRT::FUN_0072e730
                (&DAT_0084868c,&DAT_008478a8,&DAT_00848790,&DAT_0084858c,(byte *)&DAT_00811990);
      Library::MSVCRT::__makepath(&DAT_0084868c,&DAT_008478a8,&DAT_00848790,nullptr,nullptr);
      iVar4 = thunk_FUN_0067f030("_curr_path",&DAT_0084868c,nullptr);
      if (iVar4 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa5f);
      }
      puVar18 = nullptr;
      pcVar17 = &DAT_0084868c;
      pbVar5_mg0 = thunk_FUN_0067ece0(DAT_00848a24);
      iVar4 = thunk_FUN_0067f030((char *)pbVar5_mg0,pcVar17,puVar18);
      if (iVar4 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa60);
      }
      pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,0x32,0x32);
      local_8 = pDVar5;
      Library::DKW::TBL::FUN_006b5aa0(pDVar5,s_include<[_inc_path]_AiScript_dfn_007d56b4);
      Library::DKW::TBL::FUN_006b5aa0(pDVar5,s_include<[_inc_path]_AiScript_mcr_007d5688);
      Library::DKW::TBL::FUN_006b5aa0(pDVar5,&CHAR_00h_008016a0);
      iVar4 = local_10;
cf_continue_loop_0068D1EB:
      iVar6 = thunk_FUN_006736f0();
      if (iVar6 < 0) {
        RaiseInternalException
                  (iVar6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa68);
      }
      if (param_4 != nullptr) {
        ppuVar11 = &local_30;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *ppuVar11 = nullptr;
          ppuVar11 = ppuVar11 + 1;
        }
        local_2c = DAT_00857554;
        Library::MSVCRT::FUN_0072e730
                  (PTR_0085753c,nullptr,nullptr,nullptr,(byte *)&DAT_00811990);
        pbVar5_mg2 = (byte *)lpFileName;
        if (DAT_00811990 != '\0') {
          pbVar5_mg2 = PTR_0085753c;
        }
        if (pbVar5_mg2 != nullptr) {
          uVar6 = 0xffffffff;
          do {
            pbVar10 = pbVar5_mg2;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pbVar10 = pbVar5_mg2 + 1;
            bVar2 = *pbVar5_mg2;
            pbVar5_mg2 = pbVar10;
          } while (bVar2 != 0);
          uVar6 = ~uVar6;
          pbVar10 = pbVar10 + -uVar6;
          pbVar12 = (byte *)&DAT_0084790c;
          memmove(pbVar12, pbVar10, uVar6); /* compiler REP MOVS byte copy */
        }
        local_30 = &DAT_0084790c;
        Library::MSVCRT::_strncpy(&CHAR_00h_00847d0c,PTR_0085755c,0x3fe);
        local_28 = &CHAR_00h_00847d0c;
        /* ST_CALLSITE[0068D2B8]: CALL dword ptr [EBP + 0x14] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar9 = (*(code *)param_4)(&local_30);
        if (iVar9 != 0) {
          RaiseInternalException
                    (-0x65,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa74
                    );
        }
      }
      if (DAT_007d2d18 == 0x1c) {
        if (0 < iVar4) {
          RaiseInternalException
                    (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xac2
                    );
        }
        thunk_FUN_00680070();
        iVar17 = thunk_FUN_00672f00();
        while (iVar17 != 0) {
          iVar17 = thunk_FUN_00672f00();
        }
        g_currentExceptionFrame = local_74.previous;
        return &local_8->flags;
      }
      switch(DAT_007d2d18) {
      case 0x3b9:
        if (local_c != 0x44c) {
          if (-1 < iVar4) {
            RaiseInternalException
                      (-0x90,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0xa9a);
          }
          local_10bc[0] = '\0';
          iVar4 = DAT_00857544;
          if (0 < DAT_00857544) {
            do {
              uVar6 = 0xffffffff;
              pcVar17 = &CHAR___007c3b5c;
              do {
                pcVar15 = pcVar17;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar15 = pcVar17 + 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar15;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              iVar9 = -1;
              pcVar17 = local_10bc;
              do {
                pcVar14 = pcVar17;
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                pcVar14 = pcVar17 + 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar14;
              } while (cVar1 != '\0');
              pcVar17 = pcVar15 + -uVar6;
              pcVar15 = pcVar14 + -1;
              for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar17;
                pcVar17 = pcVar17 + 4;
                pcVar15 = pcVar15 + 4;
              }
              iVar4 = iVar4 + -1;
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar15 = *pcVar17;
                pcVar17 = pcVar17 + 1;
                pcVar15 = pcVar15 + 1;
              }
            } while (iVar4 != 0);
          }
          Library::MSVCRT::_strncat(local_10bc,PTR_0085755c + DAT_00857544,0x1000);
          local_10 = DAT_00857554;
          local_14 = DAT_00857544;
          local_c = 0x3b9;
          iVar4 = DAT_00857554;
          goto cf_continue_loop_0068D1EB;
        }
        break;
      case 0x3ba:
        if (local_c != 0x44c) {
          if (iVar4 < 0) {
            RaiseInternalException
                      (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0xaa5);
          }
          if (iVar4 < DAT_00857554) {
            Library::DKW::TBL::FUN_006b5aa0(local_8,local_10bc);
            Library::MSVCRT::_strncpy(local_10bc,PTR_0085755c,0x1000);
            local_10 = DAT_00857554;
            local_14 = 0;
          }
          local_10bc[DAT_00857544 - local_14] = '\0';
          local_EAX_1858 = thunk_FUN_00674af0(DAT_007d2d18);
          pDVar5 = local_8;
          uVar6 = 0xffffffff;
          do {
            pcVar17 = local_EAX_1858;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar17 = local_EAX_1858 + 1;
            cVar1 = *local_EAX_1858;
            local_EAX_1858 = pcVar17;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar4 = -1;
          pcVar15 = local_10bc;
          do {
            pcVar14 = pcVar15;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar14 = pcVar15 + 1;
            cVar1 = *pcVar15;
            pcVar15 = pcVar14;
          } while (cVar1 != '\0');
          pcVar17 = pcVar17 + -uVar6;
          pcVar15 = pcVar14 + -1;
          memmove(pcVar15, pcVar17, uVar6); /* compiler REP MOVS byte copy */
          uVar8 = 0;
          Library::DKW::TBL::FUN_006b5aa0(local_8,local_10bc);
          Library::DKW::TBL::FUN_006b5aa0(pDVar5,&CHAR_00h_008016a0);
          iVar4 = -1;
          local_c = 0;
          local_10 = -1;
          goto cf_continue_loop_0068D1EB;
        }
        break;
      case 0x44c:
        if (local_c != 0x3b9) {
          if (-1 < iVar4) {
            RaiseInternalException
                      (-0x8c,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0xa7a);
          }
          local_10bc[0] = '\0';
          if (0 < DAT_00857544) {
            local_18 = DAT_00857544;
            do {
              uVar6 = 0xffffffff;
              pcVar17 = &CHAR___007c3b5c;
              do {
                pcVar15 = pcVar17;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar15 = pcVar17 + 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar15;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              iVar4 = -1;
              pcVar17 = local_10bc;
              do {
                pcVar14 = pcVar17;
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                pcVar14 = pcVar17 + 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar14;
              } while (cVar1 != '\0');
              pcVar17 = pcVar15 + -uVar6;
              pcVar15 = pcVar14 + -1;
              for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar17;
                pcVar17 = pcVar17 + 4;
                pcVar15 = pcVar15 + 4;
              }
              local_18 = local_18 + -1;
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar15 = *pcVar17;
                pcVar17 = pcVar17 + 1;
                pcVar15 = pcVar15 + 1;
              }
            } while (local_18 != 0);
          }
          Library::MSVCRT::_strncat(local_10bc,PTR_0085755c + DAT_00857544,0x1002 - DAT_00857544);
          local_14 = DAT_00857544;
          local_10 = DAT_00857554;
          local_c = 0x44c;
          iVar4 = DAT_00857554;
          goto cf_continue_loop_0068D1EB;
        }
        break;
      case 0x44d:
        if (local_c == 0x3b9) break;
        if (iVar4 < 0) {
          RaiseInternalException
                    (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa85
                    );
        }
        if (iVar4 < DAT_00857554) {
          Library::DKW::TBL::FUN_006b5aa0(local_8,local_10bc);
          Library::MSVCRT::_strncpy(local_10bc,PTR_0085755c,0x1000);
          local_10 = DAT_00857554;
          local_14 = 0;
        }
        local_10bc[DAT_00857544 - local_14] = '\0';
        local_EAX_1411 = thunk_FUN_00674af0(DAT_007d2d18);
        pDVar5 = local_8;
        uVar6 = 0xffffffff;
        do {
          pcVar17 = local_EAX_1411;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar17 = local_EAX_1411 + 1;
          cVar1 = *local_EAX_1411;
          local_EAX_1411 = pcVar17;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar4 = -1;
        pcVar15 = local_10bc;
        do {
          pcVar14 = pcVar15;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar15 + 1;
          cVar1 = *pcVar15;
          pcVar15 = pcVar14;
        } while (cVar1 != '\0');
        pcVar17 = pcVar17 + -uVar6;
        pcVar15 = pcVar14 + -1;
        memmove(pcVar15, pcVar17, uVar6); /* compiler REP MOVS byte copy */
        uVar8 = 0;
        uVar6 = 0xffffffff;
        pcVar17 = &CHAR___007d5684;
        do {
          pcVar15 = pcVar17;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar15 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar15;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar4 = -1;
        pcVar17 = local_10bc;
        do {
          pcVar14 = pcVar17;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar14;
        } while (cVar1 != '\0');
        pcVar17 = pcVar15 + -uVar6;
        pcVar15 = pcVar14 + -1;
        memmove(pcVar15, pcVar17, uVar6); /* compiler REP MOVS byte copy */
        uVar8 = 0;
        Library::DKW::TBL::FUN_006b5aa0(local_8,local_10bc);
        Library::DKW::TBL::FUN_006b5aa0(pDVar5,&CHAR_00h_008016a0);
        iVar4 = -1;
        local_c = 0;
        local_10 = -1;
        goto cf_continue_loop_0068D1EB;
      }
      if ((-1 < iVar4) && (iVar4 < DAT_00857554)) {
        Library::DKW::TBL::FUN_006b5aa0(local_8,local_10bc);
        Library::MSVCRT::_strncpy(local_10bc,PTR_0085755c,0x1000);
        local_10 = DAT_00857554;
        local_14 = 0;
        iVar4 = DAT_00857554;
      }
      goto cf_continue_loop_0068D1EB;
    }
    g_currentExceptionFrame = local_74.previous;
    if (param_3 != nullptr) {
      memset(param_3, 0, 0x18); /* compiler bulk-zero initialization */
      *param_3 = iVar3;
      param_3[2] = DAT_00857554;
      Library::MSVCRT::FUN_0072e730
                (PTR_0085753c,nullptr,nullptr,nullptr,(byte *)&DAT_00811990);
      if (DAT_00811990 != '\0') {
        lpFileName = (LPCSTR)PTR_0085753c;
      }
      if ((byte *)lpFileName != nullptr) {
        uVar6 = 0xffffffff;
        do {
          pbVar10 = (byte *)lpFileName;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pbVar10 = (byte *)(lpFileName + 1);
          bVar2 = *lpFileName;
          lpFileName = (LPCSTR)pbVar10;
        } while (bVar2 != 0);
        uVar6 = ~uVar6;
        pbVar10 = pbVar10 + -uVar6;
        pbVar12 = (byte *)&DAT_0084790c;
        memmove(pbVar12, pbVar10, uVar6); /* compiler REP MOVS byte copy */
      }
      param_3[1] = (int)&DAT_0084790c;
      Library::MSVCRT::_strncpy(&CHAR_00h_00847d0c,PTR_0085755c,0x3fe);
      param_3[3] = (int)&CHAR_00h_00847d0c;
      param_3[4] = (int)&DAT_008488b4;
      param_3[5] = DAT_00857544;
    }
    if (local_8 != nullptr) {
      FUN_006b5570(local_8);
    }
    local_8 = nullptr;
    thunk_FUN_00680070();
    local_EAX_2325 = thunk_FUN_00672f00();
    if (local_EAX_2325 != 0) {
      do {
        local_EAX_2338 = thunk_FUN_00672f00();
      } while (local_EAX_2338 != 0);
      return nullptr;
    }
  }
  else {
    g_currentExceptionFrame = local_b8.previous;
    if (param_3 != nullptr) {
      memset(param_3, 0, 0x18); /* compiler bulk-zero initialization */
      *param_3 = local_EAX_114;
      param_3[2] = 0;
      if (lpFileName != (LPCSTR)0x0) {
        uVar6 = 0xffffffff;
        do {
          pcVar13 = lpFileName;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar13 = lpFileName + 1;
          cVar1 = *lpFileName;
          lpFileName = pcVar13;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar17 = pcVar13 + -uVar6;
        pcVar15 = (char *)&DAT_0084790c;
        memmove(pcVar15, pcVar17, uVar6); /* compiler REP MOVS byte copy */
        uVar8 = 0;
      }
      param_3[1] = (int)&DAT_0084790c;
      uVar6 = 0xffffffff;
      pcVar17 = &CHAR_00h_008016a0;
      do {
        pcVar15 = pcVar17;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar15 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar15;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar17 = pcVar15 + -uVar6;
      pcVar15 = &CHAR_00h_00847d0c;
      memmove(pcVar15, pcVar17, uVar6); /* compiler REP MOVS byte copy */
      param_3[3] = (int)&CHAR_00h_00847d0c;
      param_3[4] = (int)&DAT_008488b4;
    }
  }
  return nullptr;
}

