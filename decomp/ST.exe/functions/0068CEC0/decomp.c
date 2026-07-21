
/* WARNING: Removing unreachable block (ram,0x0068d7c3) */
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
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar6;
  uint uVar7;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  char local_10bc [4100];
  InternalExceptionFrame local_b8;
  InternalExceptionFrame *local_74;
  undefined4 local_70 [10];
  int iStackY_48;
  char *pcVar12;
  uint *puVar13;
  int iVar14;
  byte *pbVar15;
  void *pvVar16;
  int iVar17;
  
  Library::MSVCRT::FUN_0072da40();
  uVar6 = 0xffffffff;
  pvVar16 = (void *)0xffffffff;
  iVar17 = 0;
  pcVar12 = &DAT_008016a0;
  do {
    pcVar10 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar12 = pcVar10 + -uVar6;
  pcVar10 = (char *)&DAT_008488b4;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar10 = pcVar10 + 1;
  }
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  iVar4 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0,(void *)0xffffffff,0);
  if (iVar4 == 0) {
    if (lpFileName == (LPCSTR)0x0) {
      RaiseInternalException
                (-6,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xa39);
    }
    thunk_FUN_00672b60(lpFileName,(AnonShape_GLOBAL_0081194C_4D1525E6 *)&PTR_LAB_007d3fa8);
    g_currentExceptionFrame = (InternalExceptionFrame *)&local_74;
    local_74 = local_b8.previous;
    iVar4 = Library::MSVCRT::__setjmp3(local_70,0,pvVar16,iVar17);
    if (iVar4 == 0) {
      thunk_FUN_006729b0(this,1);
      thunk_FUN_006729f0(this_00,1);
      thunk_FUN_00672a30(this_01,0);
      thunk_FUN_00672a70(this_02,0);
      thunk_FUN_00672930(1);
      thunk_FUN_00672970(this_03,1);
      thunk_FUN_006728f0((undefined4 *)&DAT_007d3f78);
      thunk_FUN_00680040();
      if (param_2 == (AnonShape_00683C70_22193481 *)0x0) {
        RaiseInternalException
                  (-0x34,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xa55);
      }
      iVar4 = thunk_FUN_0067f030(s__main_path_007d5674,(char *)param_2,(uint *)0x0);
      if (iVar4 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xa56);
      }
      iVar4 = thunk_FUN_0067f030(s__inc_path_007d5668,&param_2->field_0x104,(uint *)0x0);
      if (iVar4 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xa57);
      }
      iVar4 = thunk_FUN_0067f030(s__maps_path_007d5658,&param_2->field_0x208,(uint *)0x0);
      if (iVar4 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xa58);
      }
      uVar6 = thunk_FUN_0067f740(s__env_var0_007d564c,param_2->field_030C);
      if ((int)uVar6 < 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xa59);
      }
      uVar6 = thunk_FUN_0067f740(s__env_var1_007d5640,param_2->field_0310);
      if ((int)uVar6 < 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xa5a);
      }
      uVar6 = thunk_FUN_0067f740(s__env_var2_007d5634,param_2->field_0314);
      if ((int)uVar6 < 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xa5b);
      }
      GetFullPathNameA(lpFileName,0x104,&DAT_0084868c,(LPSTR *)0x0);
      Library::MSVCRT::FUN_0072e730
                (&DAT_0084868c,&DAT_008478a8,&DAT_00848790,&DAT_0084858c,(byte *)&DAT_00811990);
      Library::MSVCRT::__makepath(&DAT_0084868c,&DAT_008478a8,&DAT_00848790,(char *)0x0,(char *)0x0)
      ;
      iStackY_48 = 0x68d160;
      iVar4 = thunk_FUN_0067f030(s__curr_path_007d55f4,&DAT_0084868c,(uint *)0x0);
      if (iVar4 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xa5f);
      }
      puVar13 = (uint *)0x0;
      pcVar12 = &DAT_0084868c;
      pbVar5 = thunk_FUN_0067ece0(DAT_00848a24);
      iVar4 = thunk_FUN_0067f030((char *)pbVar5,pcVar12,puVar13);
      if (iVar4 == 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xa60);
      }
      puVar13 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,0x32,0x32);
      Library::DKW::TBL::FUN_006b5aa0(puVar13,s_include<[_inc_path]_AiScript_dfn_007d56b4);
      Library::DKW::TBL::FUN_006b5aa0(puVar13,s_include<[_inc_path]_AiScript_mcr_007d5688);
      Library::DKW::TBL::FUN_006b5aa0(puVar13,&DAT_008016a0);
cf_continue_loop_0068D1EB:
      iVar14 = 0x68d1f0;
      iVar4 = thunk_FUN_006736f0();
      if (iVar4 < 0) {
        iVar14 = 0xa68;
        RaiseInternalException
                  (iVar4,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xa68);
      }
      if (param_4 != (undefined *)0x0) {
        pbVar15 = (byte *)&DAT_00811990;
        pbVar5 = (byte *)0x0;
        puVar8 = (undefined4 *)&stack0xffffffd0;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        Library::MSVCRT::FUN_0072e730(DAT_0085753c,(byte *)0x0,(byte *)0x0,pbVar5,pbVar15);
        pbVar5 = (byte *)lpFileName;
        if (DAT_00811990 != '\0') {
          pbVar5 = DAT_0085753c;
        }
        if (pbVar5 != (byte *)0x0) {
          uVar6 = 0xffffffff;
          do {
            pbVar15 = pbVar5;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pbVar15 = pbVar5 + 1;
            bVar2 = *pbVar5;
            pbVar5 = pbVar15;
          } while (bVar2 != 0);
          uVar6 = ~uVar6;
          pbVar5 = pbVar15 + -uVar6;
          pbVar15 = (byte *)&DAT_0084790c;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pbVar15 = *(undefined4 *)pbVar5;
            pbVar5 = pbVar5 + 4;
            pbVar15 = pbVar15 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pbVar15 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            pbVar15 = pbVar15 + 1;
          }
        }
        iVar14 = 0x3fe;
        Library::MSVCRT::_strncpy((char *)&DAT_00847d0c,DAT_0085755c,0x3fe);
        iVar4 = (*(code *)param_4)();
        if (iVar4 != 0) {
          iVar14 = 0xa74;
          RaiseInternalException
                    (-0x65,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xa74
                    );
        }
      }
      if (DAT_007d2d18 == 0x1c) {
        if (0 < (int)pvVar16) {
          RaiseInternalException
                    (-0x8d,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xac2
                    );
        }
        thunk_FUN_00680070();
        bVar3 = thunk_FUN_00672f00();
        iVar17 = CONCAT31(extraout_var,bVar3);
        while (iVar17 != 0) {
          bVar3 = thunk_FUN_00672f00();
          iVar17 = CONCAT31(extraout_var_00,bVar3);
        }
        g_currentExceptionFrame = local_74;
        return puVar13;
      }
      switch(DAT_007d2d18) {
      case 0x3b9:
        if (iVar17 != 0x44c) {
          if (-1 < (int)pvVar16) {
            RaiseInternalException
                      (-0x90,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,
                       0xa9a);
          }
          local_10bc[0] = '\0';
          iVar17 = DAT_00857544;
          if (0 < DAT_00857544) {
            do {
              uVar6 = 0xffffffff;
              pcVar12 = &DAT_007c3b5c;
              do {
                pcVar10 = pcVar12;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar10 = pcVar12 + 1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar10;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              iVar4 = -1;
              pcVar12 = local_10bc;
              do {
                pcVar9 = pcVar12;
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                pcVar9 = pcVar12 + 1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar9;
              } while (cVar1 != '\0');
              pcVar12 = pcVar10 + -uVar6;
              pcVar10 = pcVar9 + -1;
              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
                pcVar12 = pcVar12 + 4;
                pcVar10 = pcVar10 + 4;
              }
              iVar17 = iVar17 + -1;
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar10 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                pcVar10 = pcVar10 + 1;
              }
            } while (iVar17 != 0);
          }
          Library::MSVCRT::_strncat(local_10bc,DAT_0085755c + DAT_00857544,0x1000);
          iVar17 = 0x3b9;
          pvVar16 = DAT_00857554;
          goto cf_continue_loop_0068D1EB;
        }
        break;
      case 0x3ba:
        if (iVar17 != 0x44c) {
          if ((int)pvVar16 < 0) {
            iVar14 = 0xaa5;
            RaiseInternalException
                      (-0x8f,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,
                       0xaa5);
          }
          if ((int)pvVar16 < (int)DAT_00857554) {
            Library::DKW::TBL::FUN_006b5aa0(puVar13,local_10bc);
            Library::MSVCRT::_strncpy(local_10bc,DAT_0085755c,0x1000);
            iVar14 = 0;
          }
          local_10bc[DAT_00857544 - iVar14] = '\0';
          pcVar12 = thunk_FUN_00674af0(DAT_007d2d18);
          uVar6 = 0xffffffff;
          do {
            pcVar10 = pcVar12;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar10 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar10;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar17 = -1;
          pcVar12 = local_10bc;
          do {
            pcVar9 = pcVar12;
            if (iVar17 == 0) break;
            iVar17 = iVar17 + -1;
            pcVar9 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar9;
          } while (cVar1 != '\0');
          pcVar12 = pcVar10 + -uVar6;
          pcVar10 = pcVar9 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar10 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar10 = pcVar10 + 1;
          }
          Library::DKW::TBL::FUN_006b5aa0(puVar13,local_10bc);
          Library::DKW::TBL::FUN_006b5aa0(puVar13,&DAT_008016a0);
          iVar17 = 0;
          pvVar16 = (void *)0xffffffff;
          goto cf_continue_loop_0068D1EB;
        }
        break;
      case 0x44c:
        if (iVar17 != 0x3b9) {
          if (-1 < (int)pvVar16) {
            RaiseInternalException
                      (-0x8c,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,
                       0xa7a);
          }
          local_10bc[0] = '\0';
          iVar17 = DAT_00857544;
          if (0 < DAT_00857544) {
            do {
              uVar6 = 0xffffffff;
              pcVar12 = &DAT_007c3b5c;
              do {
                pcVar10 = pcVar12;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar10 = pcVar12 + 1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar10;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              iVar4 = -1;
              pcVar12 = local_10bc;
              do {
                pcVar9 = pcVar12;
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                pcVar9 = pcVar12 + 1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar9;
              } while (cVar1 != '\0');
              pcVar12 = pcVar10 + -uVar6;
              pcVar10 = pcVar9 + -1;
              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
                pcVar12 = pcVar12 + 4;
                pcVar10 = pcVar10 + 4;
              }
              iVar17 = iVar17 + -1;
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar10 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                pcVar10 = pcVar10 + 1;
              }
            } while (iVar17 != 0);
          }
          Library::MSVCRT::_strncat(local_10bc,DAT_0085755c + DAT_00857544,0x1002 - DAT_00857544);
          iVar17 = 0x44c;
          pvVar16 = DAT_00857554;
          goto cf_continue_loop_0068D1EB;
        }
        break;
      case 0x44d:
        if (iVar17 == 0x3b9) break;
        if ((int)pvVar16 < 0) {
          iVar14 = 0xa85;
          RaiseInternalException
                    (-0x8d,g_overwriteContext_007ED77C,s_E____titans_ai_ai_script_cpp_007d5604,0xa85
                    );
        }
        if ((int)pvVar16 < (int)DAT_00857554) {
          Library::DKW::TBL::FUN_006b5aa0(puVar13,local_10bc);
          Library::MSVCRT::_strncpy(local_10bc,DAT_0085755c,0x1000);
          iVar14 = 0;
        }
        local_10bc[DAT_00857544 - iVar14] = '\0';
        pcVar12 = thunk_FUN_00674af0(DAT_007d2d18);
        uVar6 = 0xffffffff;
        do {
          pcVar10 = pcVar12;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar10;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar17 = -1;
        pcVar12 = local_10bc;
        do {
          pcVar9 = pcVar12;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar9 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar9;
        } while (cVar1 != '\0');
        pcVar12 = pcVar10 + -uVar6;
        pcVar10 = pcVar9 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar10 = pcVar10 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar12 = &DAT_007d5684;
        do {
          pcVar10 = pcVar12;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar10;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar17 = -1;
        pcVar12 = local_10bc;
        do {
          pcVar9 = pcVar12;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar9 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar9;
        } while (cVar1 != '\0');
        pcVar12 = pcVar10 + -uVar6;
        pcVar10 = pcVar9 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar10 = pcVar10 + 1;
        }
        Library::DKW::TBL::FUN_006b5aa0(puVar13,local_10bc);
        Library::DKW::TBL::FUN_006b5aa0(puVar13,&DAT_008016a0);
        iVar17 = 0;
        pvVar16 = (void *)0xffffffff;
        goto cf_continue_loop_0068D1EB;
      }
      if ((-1 < (int)pvVar16) && ((int)pvVar16 < (int)DAT_00857554)) {
        Library::DKW::TBL::FUN_006b5aa0(puVar13,local_10bc);
        Library::MSVCRT::_strncpy(local_10bc,DAT_0085755c,0x1000);
        pvVar16 = DAT_00857554;
      }
      goto cf_continue_loop_0068D1EB;
    }
    g_currentExceptionFrame = local_74;
    if (param_3 != (int *)0x0) {
      piVar11 = param_3;
      for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
        *piVar11 = 0;
        piVar11 = piVar11 + 1;
      }
      *param_3 = iVar4;
      param_3[2] = (int)DAT_00857554;
      Library::MSVCRT::FUN_0072e730
                (DAT_0085753c,(byte *)0x0,(byte *)0x0,(byte *)0x0,(byte *)&DAT_00811990);
      if (DAT_00811990 != '\0') {
        lpFileName = (LPCSTR)DAT_0085753c;
      }
      if ((byte *)lpFileName != (byte *)0x0) {
        uVar6 = 0xffffffff;
        do {
          pbVar5 = (byte *)lpFileName;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pbVar5 = (byte *)(lpFileName + 1);
          bVar2 = *lpFileName;
          lpFileName = (LPCSTR)pbVar5;
        } while (bVar2 != 0);
        uVar6 = ~uVar6;
        pbVar5 = pbVar5 + -uVar6;
        pbVar15 = (byte *)&DAT_0084790c;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar15 = *(undefined4 *)pbVar5;
          pbVar5 = pbVar5 + 4;
          pbVar15 = pbVar15 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar15 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          pbVar15 = pbVar15 + 1;
        }
      }
      param_3[1] = (int)&DAT_0084790c;
      Library::MSVCRT::_strncpy((char *)&DAT_00847d0c,DAT_0085755c,0x3fe);
      param_3[3] = (int)&DAT_00847d0c;
      param_3[4] = (int)&DAT_008488b4;
      param_3[5] = DAT_00857544;
    }
    thunk_FUN_00680070();
    bVar3 = thunk_FUN_00672f00();
    if (CONCAT31(extraout_var_01,bVar3) != 0) {
      do {
        bVar3 = thunk_FUN_00672f00();
      } while (CONCAT31(extraout_var_02,bVar3) != 0);
      return (uint *)0x0;
    }
  }
  else {
    g_currentExceptionFrame = local_b8.previous;
    if (param_3 != (int *)0x0) {
      piVar11 = param_3;
      for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
        *piVar11 = 0;
        piVar11 = piVar11 + 1;
      }
      *param_3 = iVar4;
      param_3[2] = 0;
      if (lpFileName != (LPCSTR)0x0) {
        uVar6 = 0xffffffff;
        do {
          pcVar12 = lpFileName;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = lpFileName + 1;
          cVar1 = *lpFileName;
          lpFileName = pcVar12;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar12 = pcVar12 + -uVar6;
        pcVar10 = (char *)&DAT_0084790c;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
      param_3[1] = (int)&DAT_0084790c;
      uVar6 = 0xffffffff;
      pcVar12 = &DAT_008016a0;
      do {
        pcVar10 = pcVar12;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar12 = pcVar10 + -uVar6;
      pcVar10 = (char *)&DAT_00847d0c;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar10 = pcVar10 + 1;
      }
      param_3[3] = (int)&DAT_00847d0c;
      param_3[4] = (int)&DAT_008488b4;
    }
  }
  return (uint *)0x0;
}

