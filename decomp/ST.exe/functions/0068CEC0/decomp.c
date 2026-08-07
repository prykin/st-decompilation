#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x0068d7c3) */
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
  int iVar7;
  char *local_EAX_1411;
  char *local_EAX_1858;
  int iVar17;
  int local_EAX_2325;
  int local_EAX_2338;
  uint uVar8;
  uint uVar9;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  char *pcVar11;
  char *pcVar12;
  char local_10bc [4100];
  InternalExceptionFrame local_b8;
  InternalExceptionFrame *local_74;
  int local_70 [10];
  int iStackY_48;
  char *pcVar14;
  byte *pbVar15;
  uint *puVar16;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  byte *pbVar5_mg2;
  char *pcVar13;

  Library::MSVCRT::FUN_0072da40();
  uVar8 = 0xffffffff;
  iVar20 = 0;
  pcVar14 = &CHAR_00h_008016a0;
  do {
    pcVar12 = pcVar14;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar14 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar14 = pcVar12 + -uVar8;
  pcVar12 = (char *)&DAT_008488b4;
  memmove(pcVar12, pcVar14, uVar8); /* compiler REP MOVS byte copy */
  uVar9 = 0;
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
    g_currentExceptionFrame = (InternalExceptionFrame *)&local_74;
    local_74 = local_b8.previous;
    iVar3 = Library::MSVCRT::__setjmp3(local_70,0);
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
      GetFullPathNameA(lpFileName,0x104,&DAT_0084868c,nullptr);
      Library::MSVCRT::FUN_0072e730
                (&DAT_0084868c,&DAT_008478a8,&DAT_00848790,&DAT_0084858c,(byte *)&DAT_00811990);
      Library::MSVCRT::__makepath(&DAT_0084868c,&DAT_008478a8,&DAT_00848790,nullptr,nullptr);
      iStackY_48 = 0x68d160;
      iVar4 = thunk_FUN_0067f030("_curr_path",&DAT_0084868c,nullptr);
      if (iVar4 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa5f);
      }
      puVar16 = nullptr;
      pcVar14 = &DAT_0084868c;
      pbVar5_mg0 = thunk_FUN_0067ece0(DAT_00848a24);
      iVar4 = thunk_FUN_0067f030((char *)pbVar5_mg0,pcVar14,puVar16);
      if (iVar4 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa60);
      }
      pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,0x32,0x32);
      Library::DKW::TBL::FUN_006b5aa0(pDVar5,s_include<[_inc_path]_AiScript_dfn_007d56b4);
      Library::DKW::TBL::FUN_006b5aa0(pDVar5,s_include<[_inc_path]_AiScript_mcr_007d5688);
      Library::DKW::TBL::FUN_006b5aa0(pDVar5,&CHAR_00h_008016a0);
      iVar4 = -1;
cf_continue_loop_0068D1EB:
      iVar18 = 0x68d1f0;
      iVar6 = thunk_FUN_006736f0();
      if (iVar6 < 0) {
        iVar18 = 0xa68;
        RaiseInternalException
                  (iVar6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa68);
      }
      if (param_4 != nullptr) {
        pbVar19 = (byte *)&DAT_00811990;
        pbVar15 = nullptr;
        memset(&stack0xffffffd0, 0, 0x18); /* compiler bulk-zero initialization */
        Library::MSVCRT::FUN_0072e730(DAT_0085753c,nullptr,nullptr,pbVar15,pbVar19);
        pbVar5_mg2 = (byte *)lpFileName;
        if (DAT_00811990 != '\0') {
          pbVar5_mg2 = DAT_0085753c;
        }
        if (pbVar5_mg2 != nullptr) {
          uVar8 = 0xffffffff;
          do {
            pbVar15 = pbVar5_mg2;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pbVar15 = pbVar5_mg2 + 1;
            bVar2 = *pbVar5_mg2;
            pbVar5_mg2 = pbVar15;
          } while (bVar2 != 0);
          uVar8 = ~uVar8;
          pbVar15 = pbVar15 + -uVar8;
          pbVar19 = (byte *)&DAT_0084790c;
          memmove(pbVar19, pbVar15, uVar8); /* compiler REP MOVS byte copy */
        }
        iVar18 = 0x3fe;
        Library::MSVCRT::_strncpy(&CHAR_00h_00847d0c,DAT_0085755c,0x3fe);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar7 = (*(code *)param_4)();
        if (iVar7 != 0) {
          iVar18 = 0xa74;
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
        g_currentExceptionFrame = local_74;
        return &pDVar5->flags;
      }
      switch(DAT_007d2d18) {
      case 0x3b9:
        if (iVar20 != 0x44c) {
          if (-1 < iVar4) {
            RaiseInternalException
                      (-0x90,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0xa9a);
          }
          local_10bc[0] = '\0';
          iVar20 = DAT_00857544;
          if (0 < DAT_00857544) {
            do {
              uVar8 = 0xffffffff;
              pcVar14 = &CHAR___007c3b5c;
              do {
                pcVar12 = pcVar14;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar12 = pcVar14 + 1;
                cVar1 = *pcVar14;
                pcVar14 = pcVar12;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              iVar4 = -1;
              pcVar14 = local_10bc;
              do {
                pcVar11 = pcVar14;
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                pcVar11 = pcVar14 + 1;
                cVar1 = *pcVar14;
                pcVar14 = pcVar11;
              } while (cVar1 != '\0');
              pcVar14 = pcVar12 + -uVar8;
              pcVar12 = pcVar11 + -1;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar12 = *(undefined4 *)pcVar14;
                pcVar14 = pcVar14 + 4;
                pcVar12 = pcVar12 + 4;
              }
              iVar20 = iVar20 + -1;
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar12 = *pcVar14;
                pcVar14 = pcVar14 + 1;
                pcVar12 = pcVar12 + 1;
              }
            } while (iVar20 != 0);
          }
          Library::MSVCRT::_strncat(local_10bc,DAT_0085755c + DAT_00857544,0x1000);
          iVar20 = 0x3b9;
          iVar4 = DAT_00857554;
          goto cf_continue_loop_0068D1EB;
        }
        break;
      case 0x3ba:
        if (iVar20 != 0x44c) {
          if (iVar4 < 0) {
            iVar18 = 0xaa5;
            RaiseInternalException
                      (-0x8f,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0xaa5);
          }
          if (iVar4 < DAT_00857554) {
            Library::DKW::TBL::FUN_006b5aa0(pDVar5,local_10bc);
            Library::MSVCRT::_strncpy(local_10bc,DAT_0085755c,0x1000);
            iVar18 = 0;
          }
          local_10bc[DAT_00857544 - iVar18] = '\0';
          local_EAX_1858 = thunk_FUN_00674af0(DAT_007d2d18);
          uVar8 = 0xffffffff;
          do {
            pcVar14 = local_EAX_1858;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar14 = local_EAX_1858 + 1;
            cVar1 = *local_EAX_1858;
            local_EAX_1858 = pcVar14;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar20 = -1;
          pcVar12 = local_10bc;
          do {
            pcVar11 = pcVar12;
            if (iVar20 == 0) break;
            iVar20 = iVar20 + -1;
            pcVar11 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar11;
          } while (cVar1 != '\0');
          pcVar14 = pcVar14 + -uVar8;
          pcVar12 = pcVar11 + -1;
          memmove(pcVar12, pcVar14, uVar8); /* compiler REP MOVS byte copy */
          uVar9 = 0;
          Library::DKW::TBL::FUN_006b5aa0(pDVar5,local_10bc);
          Library::DKW::TBL::FUN_006b5aa0(pDVar5,&CHAR_00h_008016a0);
          iVar20 = 0;
          iVar4 = -1;
          goto cf_continue_loop_0068D1EB;
        }
        break;
      case 0x44c:
        if (iVar20 != 0x3b9) {
          if (-1 < iVar4) {
            RaiseInternalException
                      (-0x8c,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",
                       0xa7a);
          }
          local_10bc[0] = '\0';
          iVar20 = DAT_00857544;
          if (0 < DAT_00857544) {
            do {
              uVar8 = 0xffffffff;
              pcVar14 = &CHAR___007c3b5c;
              do {
                pcVar12 = pcVar14;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar12 = pcVar14 + 1;
                cVar1 = *pcVar14;
                pcVar14 = pcVar12;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              iVar4 = -1;
              pcVar14 = local_10bc;
              do {
                pcVar11 = pcVar14;
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                pcVar11 = pcVar14 + 1;
                cVar1 = *pcVar14;
                pcVar14 = pcVar11;
              } while (cVar1 != '\0');
              pcVar14 = pcVar12 + -uVar8;
              pcVar12 = pcVar11 + -1;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar12 = *(undefined4 *)pcVar14;
                pcVar14 = pcVar14 + 4;
                pcVar12 = pcVar12 + 4;
              }
              iVar20 = iVar20 + -1;
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar12 = *pcVar14;
                pcVar14 = pcVar14 + 1;
                pcVar12 = pcVar12 + 1;
              }
            } while (iVar20 != 0);
          }
          Library::MSVCRT::_strncat(local_10bc,DAT_0085755c + DAT_00857544,0x1002 - DAT_00857544);
          iVar20 = 0x44c;
          iVar4 = DAT_00857554;
          goto cf_continue_loop_0068D1EB;
        }
        break;
      case 0x44d:
        if (iVar20 == 0x3b9) break;
        if (iVar4 < 0) {
          iVar18 = 0xa85;
          RaiseInternalException
                    (-0x8d,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0xa85
                    );
        }
        if (iVar4 < DAT_00857554) {
          Library::DKW::TBL::FUN_006b5aa0(pDVar5,local_10bc);
          Library::MSVCRT::_strncpy(local_10bc,DAT_0085755c,0x1000);
          iVar18 = 0;
        }
        local_10bc[DAT_00857544 - iVar18] = '\0';
        local_EAX_1411 = thunk_FUN_00674af0(DAT_007d2d18);
        uVar8 = 0xffffffff;
        do {
          pcVar14 = local_EAX_1411;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = local_EAX_1411 + 1;
          cVar1 = *local_EAX_1411;
          local_EAX_1411 = pcVar14;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar20 = -1;
        pcVar12 = local_10bc;
        do {
          pcVar11 = pcVar12;
          if (iVar20 == 0) break;
          iVar20 = iVar20 + -1;
          pcVar11 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar11;
        } while (cVar1 != '\0');
        pcVar14 = pcVar14 + -uVar8;
        pcVar12 = pcVar11 + -1;
        memmove(pcVar12, pcVar14, uVar8); /* compiler REP MOVS byte copy */
        uVar9 = 0;
        uVar8 = 0xffffffff;
        pcVar14 = &CHAR___007d5684;
        do {
          pcVar12 = pcVar14;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar12 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar12;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar20 = -1;
        pcVar14 = local_10bc;
        do {
          pcVar11 = pcVar14;
          if (iVar20 == 0) break;
          iVar20 = iVar20 + -1;
          pcVar11 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar11;
        } while (cVar1 != '\0');
        pcVar14 = pcVar12 + -uVar8;
        pcVar12 = pcVar11 + -1;
        memmove(pcVar12, pcVar14, uVar8); /* compiler REP MOVS byte copy */
        uVar9 = 0;
        Library::DKW::TBL::FUN_006b5aa0(pDVar5,local_10bc);
        Library::DKW::TBL::FUN_006b5aa0(pDVar5,&CHAR_00h_008016a0);
        iVar20 = 0;
        iVar4 = -1;
        goto cf_continue_loop_0068D1EB;
      }
      if ((-1 < iVar4) && (iVar4 < DAT_00857554)) {
        Library::DKW::TBL::FUN_006b5aa0(pDVar5,local_10bc);
        Library::MSVCRT::_strncpy(local_10bc,DAT_0085755c,0x1000);
        iVar4 = DAT_00857554;
      }
      goto cf_continue_loop_0068D1EB;
    }
    g_currentExceptionFrame = local_74;
    if (param_3 != nullptr) {
      memset(param_3, 0, 0x18); /* compiler bulk-zero initialization */
      *param_3 = iVar3;
      param_3[2] = DAT_00857554;
      Library::MSVCRT::FUN_0072e730
                (DAT_0085753c,nullptr,nullptr,nullptr,(byte *)&DAT_00811990);
      if (DAT_00811990 != '\0') {
        lpFileName = (LPCSTR)DAT_0085753c;
      }
      if ((byte *)lpFileName != nullptr) {
        uVar8 = 0xffffffff;
        do {
          pbVar15 = (byte *)lpFileName;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pbVar15 = (byte *)(lpFileName + 1);
          bVar2 = *lpFileName;
          lpFileName = (LPCSTR)pbVar15;
        } while (bVar2 != 0);
        uVar8 = ~uVar8;
        pbVar15 = pbVar15 + -uVar8;
        pbVar19 = (byte *)&DAT_0084790c;
        memmove(pbVar19, pbVar15, uVar8); /* compiler REP MOVS byte copy */
      }
      param_3[1] = (int)&DAT_0084790c;
      Library::MSVCRT::_strncpy(&CHAR_00h_00847d0c,DAT_0085755c,0x3fe);
      param_3[3] = (int)&CHAR_00h_00847d0c;
      param_3[4] = (int)&DAT_008488b4;
      param_3[5] = DAT_00857544;
    }
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
        uVar8 = 0xffffffff;
        do {
          pcVar13 = lpFileName;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar13 = lpFileName + 1;
          cVar1 = *lpFileName;
          lpFileName = pcVar13;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar14 = pcVar13 + -uVar8;
        pcVar12 = (char *)&DAT_0084790c;
        memmove(pcVar12, pcVar14, uVar8); /* compiler REP MOVS byte copy */
        uVar9 = 0;
      }
      param_3[1] = (int)&DAT_0084790c;
      uVar8 = 0xffffffff;
      pcVar14 = &CHAR_00h_008016a0;
      do {
        pcVar12 = pcVar14;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar14 = pcVar12 + -uVar8;
      pcVar12 = &CHAR_00h_00847d0c;
      memmove(pcVar12, pcVar14, uVar8); /* compiler REP MOVS byte copy */
      param_3[3] = (int)&CHAR_00h_00847d0c;
      param_3[4] = (int)&DAT_008488b4;
    }
  }
  return nullptr;
}

