
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::PrepFiles
   
   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_13=19
   
   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
    */

void __thiscall ChooseMapTy::PrepFiles(ChooseMapTy *this,uint param_1)

{
  char cVar1;
  ChooseMapTy_field_1A5FState CVar2;
  byte bVar3;
  StartSystemTy *pSVar4;
  AnonShape_006C7610_838EDECF *pAVar5;
  code *pcVar6;
  int iVar7;
  AnonPointee_ChooseMapTy_1C97 *pAVar8;
  uint *puVar9;
  AnonPointee_ChooseMapTy_1C9F *pAVar10;
  cMf32 *pcVar11;
  ushort *puVar12;
  BOOL BVar13;
  LONG LVar14;
  char *pcVar15;
  int iVar16;
  uint uVar17;
  cMf32 *this_00;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *pcVar18;
  cMf32 *extraout_ECX_01;
  char *pcVar19;
  ChooseMapTy *this_01;
  undefined4 unaff_ESI;
  byte *pbVar20;
  CHAR *pCVar21;
  void *unaff_EDI;
  uint uVar22;
  byte *pbVar23;
  CHAR *pCVar24;
  char *pcVar25;
  undefined4 *puVar26;
  bool bVar27;
  undefined4 uVar28;
  AnonShape_006B8200_800652FF *pAVar29;
  byte local_370 [260];
  _WIN32_FIND_DATAA local_26c;
  InternalExceptionFrame local_12c;
  InternalExceptionFrame local_e8;
  InternalExceptionFrame local_a4;
  undefined4 local_60;
  FILETIME local_44;
  FILETIME local_3c;
  int local_34;
  cMf32 *local_30;
  int local_2c;
  ChooseMapTy *local_28;
  cMf32 *local_24;
  char *local_20;
  int local_1c;
  HANDLE local_18;
  cMf32 **local_14;
  uint local_10;
  cMf32 *local_c;
  bool local_5;
  
  local_2c = 0;
  local_c = (cMf32 *)0x0;
  local_30 = (cMf32 *)0x0;
  switch(this->field_1A5F) {
  case CASE_1:
  case CASE_4:
switchD_005afd30_caseD_1:
    local_30 = (cMf32 *)0x8f000405;
  case CASE_2:
  case CASE_5:
switchD_005afd30_caseD_2:
    local_c = (cMf32 *)0x8f000205;
    break;
  case CASE_9:
    local_c = (cMf32 *)0x88000116;
    break;
  case CASE_A:
    local_c = (cMf32 *)0x88000216;
    break;
  case CASE_B:
    local_c = (cMf32 *)0x88000416;
    break;
  case CASE_C:
switchD_005afd30_caseD_c:
    local_c = (cMf32 *)0x88000516;
    break;
  case CASE_13:
    switch(DAT_00803400) {
    case '\x04':
      goto switchD_005afd30_caseD_1;
    case '\x05':
      goto switchD_005afd30_caseD_2;
    case '\f':
      goto switchD_005afd30_caseD_c;
    case '\x14':
    case '\x15':
      local_c = (cMf32 *)0x8f000805;
    }
  }
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_28 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_28;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar16 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x4f5,0,iVar7,
                                &DAT_007a4ccc,s_ChooseMapTy__PrepFiles_007cc898);
    if (iVar16 != 0) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    RaiseInternalException(iVar7,0,s_E____titans_Start_load_obj_cpp_007cc728,0x4f5);
    return;
  }
  if ((AnonShape_006B5570_4D68B99C *)local_28->field_1C97 != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)local_28->field_1C97);
    this_01->field_1C97 = (AnonPointee_ChooseMapTy_1C97 *)0x0;
  }
  if ((DArrayTy *)this_01->field_1C9B != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this_01->field_1C9B);
    this_01->field_1C9B = 0;
  }
  if ((AnonShape_006B5570_4D68B99C *)this_01->field_1C9F != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)this_01->field_1C9F);
    this_01->field_1C9F = (AnonPointee_ChooseMapTy_1C9F *)0x0;
  }
  pAVar8 = (AnonPointee_ChooseMapTy_1C97 *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,0x32,10);
  this_01->field_1C97 = pAVar8;
  puVar9 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x32,8,10);
  this_01->field_1C9B = puVar9;
  pAVar10 = (AnonPointee_ChooseMapTy_1C9F *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  this_01->field_1C9F = pAVar10;
  this_01->field_002D = 0x20;
  *(undefined4 *)&this_01->field_0x31 = 0;
  FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
  pSVar4 = this_01->field_1A5B;
  if (pSVar4->field_02E6 != (MMsgTy *)0x0) {
    puVar26 = &local_60;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar26 = 0;
      puVar26 = puVar26 + 1;
    }
    *(undefined2 *)puVar26 = 0;
    local_60._2_2_ = 0xffff;
    local_60._0_2_ = 0xffff;
    MMsgTy::StatePanel(pSVar4->field_02E6,(int)&local_60);
  }
  pAVar5 = (AnonShape_006C7610_838EDECF *)this_01->field_1C7B;
  FUN_006b4170(pAVar5,0,0,0,pAVar5->field_0004,pAVar5->field_0008,0);
  uVar22 = 0x3f;
  puVar9 = &this_01->field_1C23;
  do {
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar9,0xffffffff,0x114,uVar22);
    uVar22 = uVar22 + 0x13;
    puVar9 = puVar9 + 1;
  } while ((int)uVar22 < 0x1e1);
  uVar22 = 0xffffffff;
  pcVar19 = &this_01->field_1DA7;
  do {
    pcVar15 = pcVar19;
    if (uVar22 == 0) break;
    uVar22 = uVar22 - 1;
    pcVar15 = pcVar19 + 1;
    cVar1 = *pcVar19;
    pcVar19 = pcVar15;
  } while (cVar1 != '\0');
  uVar22 = ~uVar22;
  pcVar19 = pcVar15 + -uVar22;
  pcVar15 = &this_01->field_0x1faf;
  for (uVar17 = uVar22 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar19;
    pcVar19 = pcVar19 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
    *pcVar15 = *pcVar19;
    pcVar19 = pcVar19 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar22 = 0xffffffff;
  pcVar19 = &DAT_007cc8bc;
  do {
    pcVar15 = pcVar19;
    if (uVar22 == 0) break;
    uVar22 = uVar22 - 1;
    pcVar15 = pcVar19 + 1;
    cVar1 = *pcVar19;
    pcVar19 = pcVar15;
  } while (cVar1 != '\0');
  uVar22 = ~uVar22;
  iVar7 = -1;
  pcVar19 = &this_01->field_0x1faf;
  do {
    pcVar25 = pcVar19;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar25 = pcVar19 + 1;
    cVar1 = *pcVar19;
    pcVar19 = pcVar25;
  } while (cVar1 != '\0');
  pcVar19 = pcVar15 + -uVar22;
  pcVar15 = pcVar25 + -1;
  for (uVar17 = uVar22 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar19;
    pcVar19 = pcVar19 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
    *pcVar15 = *pcVar19;
    pcVar19 = pcVar19 + 1;
    pcVar15 = pcVar15 + 1;
  }
  CVar2 = this_01->field_1A5F;
  if ((CVar2 != CASE_0) && ((CVar2 < CASE_6 || ((CVar2 == CASE_13 && (DAT_00803400 != '\f')))))) {
    local_2c = 1;
  }
  pbVar23 = &this_01->field_1CA3;
  pbVar20 = &this_01->field_1DA7;
  do {
    bVar3 = *pbVar20;
    bVar27 = bVar3 < *pbVar23;
    if (bVar3 != *pbVar23) {
LAB_005aff82:
      local_34 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
      goto LAB_005aff87;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar20[1];
    bVar27 = bVar3 < pbVar23[1];
    if (bVar3 != pbVar23[1]) goto LAB_005aff82;
    pbVar20 = pbVar20 + 2;
    pbVar23 = pbVar23 + 2;
  } while (bVar3 != 0);
  local_34 = 0;
LAB_005aff87:
  if (local_2c != 0) {
    local_18 = FindFirstFileA(&this_01->field_0x1faf,&local_26c);
    if (local_18 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_26c.dwFileAttributes & 0x10) != 0) {
          pbVar23 = &DAT_007cc8b8;
          pCVar21 = local_26c.cFileName;
          do {
            bVar3 = *pCVar21;
            bVar27 = bVar3 < *pbVar23;
            if (bVar3 != *pbVar23) {
LAB_005afffc:
              iVar7 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
              goto LAB_005b0001;
            }
            if (bVar3 == 0) break;
            bVar3 = pCVar21[1];
            bVar27 = bVar3 < pbVar23[1];
            if (bVar3 != pbVar23[1]) goto LAB_005afffc;
            pCVar21 = pCVar21 + 2;
            pbVar23 = pbVar23 + 2;
          } while (bVar3 != 0);
          iVar7 = 0;
LAB_005b0001:
          if (iVar7 != 0) {
            pbVar23 = &DAT_007cc8b4;
            pCVar21 = local_26c.cFileName;
            do {
              bVar3 = *pCVar21;
              bVar27 = bVar3 < *pbVar23;
              if (bVar3 != *pbVar23) {
LAB_005b003c:
                iVar7 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                goto LAB_005b0041;
              }
              if (bVar3 == 0) break;
              bVar3 = pCVar21[1];
              bVar27 = bVar3 < pbVar23[1];
              if (bVar3 != pbVar23[1]) goto LAB_005b003c;
              pCVar21 = pCVar21 + 2;
              pbVar23 = pbVar23 + 2;
            } while (bVar3 != 0);
            iVar7 = 0;
LAB_005b0041:
            if ((iVar7 != 0) || (local_34 != 0)) {
              if (this_01->field_1A5F == CASE_3) {
                uVar22 = 0xffffffff;
                local_20 = &this_01->field_0x1faf;
                pcVar19 = &this_01->field_1DA7;
                do {
                  pcVar15 = pcVar19;
                  if (uVar22 == 0) break;
                  uVar22 = uVar22 - 1;
                  pcVar15 = pcVar19 + 1;
                  cVar1 = *pcVar19;
                  pcVar19 = pcVar15;
                } while (cVar1 != '\0');
                uVar22 = ~uVar22;
                pcVar19 = pcVar15 + -uVar22;
                pcVar15 = local_20;
                for (uVar17 = uVar22 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *(undefined4 *)pcVar15 = *(undefined4 *)pcVar19;
                  pcVar19 = pcVar19 + 4;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                  *pcVar15 = *pcVar19;
                  pcVar19 = pcVar19 + 1;
                  pcVar15 = pcVar15 + 1;
                }
                FUN_006b8280(local_20,local_20);
                pcVar19 = local_20;
                uVar22 = 0xffffffff;
                pCVar21 = local_26c.cFileName;
                do {
                  pCVar24 = pCVar21;
                  if (uVar22 == 0) break;
                  uVar22 = uVar22 - 1;
                  pCVar24 = pCVar21 + 1;
                  cVar1 = *pCVar21;
                  pCVar21 = pCVar24;
                } while (cVar1 != '\0');
                uVar22 = ~uVar22;
                iVar7 = -1;
                pcVar15 = local_20;
                do {
                  pcVar25 = pcVar15;
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  pcVar25 = pcVar15 + 1;
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar25;
                } while (cVar1 != '\0');
                pCVar21 = pCVar24 + -uVar22;
                pcVar15 = pcVar25 + -1;
                for (uVar17 = uVar22 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *(undefined4 *)pcVar15 = *(undefined4 *)pCVar21;
                  pCVar21 = pCVar21 + 4;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                  *pcVar15 = *pCVar21;
                  pCVar21 = pCVar21 + 1;
                  pcVar15 = pcVar15 + 1;
                }
                FUN_006b8280(local_20,local_20);
                uVar22 = 0xffffffff;
                pcVar15 = PTR_s_ADDON_0079c060;
                do {
                  pcVar25 = pcVar15;
                  if (uVar22 == 0) break;
                  uVar22 = uVar22 - 1;
                  pcVar25 = pcVar15 + 1;
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar25;
                } while (cVar1 != '\0');
                uVar22 = ~uVar22;
                local_10 = 1;
                iVar7 = -1;
                do {
                  pcVar15 = pcVar19;
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  pcVar15 = pcVar19 + 1;
                  cVar1 = *pcVar19;
                  pcVar19 = pcVar15;
                } while (cVar1 != '\0');
                pcVar19 = pcVar25 + -uVar22;
                pcVar15 = pcVar15 + -1;
                for (uVar17 = uVar22 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *(undefined4 *)pcVar15 = *(undefined4 *)pcVar19;
                  pcVar19 = pcVar19 + 4;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                  *pcVar15 = *pcVar19;
                  pcVar19 = pcVar19 + 1;
                  pcVar15 = pcVar15 + 1;
                }
                local_e8.previous = g_currentExceptionFrame;
                g_currentExceptionFrame = &local_e8;
                iVar7 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0,unaff_EDI,unaff_ESI);
                this_01 = local_28;
                if (iVar7 == 0) {
                  pcVar11 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                               (0x345,&local_28->field_0x1faf,0,0,0);
                  if (PTR_0080c4cb != (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
                    FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4cb);
                  }
                  PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                                 Library::Ourlib::MFSARR::mfSarLoad
                                           (pcVar11,PTR_s_OBJECTIVES_0079c074,0);
                  if (PTR_0080c4cb == (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
                    PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                                   Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
                  }
                  puVar26 = (undefined4 *)&DAT_0080ed16;
                  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *puVar26 = 0;
                    puVar26 = puVar26 + 1;
                  }
                  local_14 = (cMf32 **)&DAT_0080ed16;
                  puVar12 = cMf32::RecGet(pcVar11,0xc,PTR_s_MISSION_0079c064,(int *)&local_14,0);
                  if (puVar12 == (ushort *)0x0) {
                    local_10 = 0;
                  }
                  cMf32::delete(this_00,pcVar11);
                }
                else {
                  local_10 = 0;
                }
                g_currentExceptionFrame = local_e8.previous;
                if (local_10 == 0) goto LAB_005b01f3;
              }
              Library::DKW::TBL::FUN_006b5aa0((uint *)this_01->field_1C9F,local_26c.cFileName);
            }
          }
        }
LAB_005b01f3:
        BVar13 = FindNextFileA(local_18,&local_26c);
      } while (BVar13 != 0);
    }
    if (local_18 != (HANDLE)0xffffffff) {
      FindClose(local_18);
    }
  }
  uVar22 = 0xffffffff;
  pcVar19 = &this_01->field_1DA7;
  do {
    pcVar15 = pcVar19;
    if (uVar22 == 0) break;
    uVar22 = uVar22 - 1;
    pcVar15 = pcVar19 + 1;
    cVar1 = *pcVar19;
    pcVar19 = pcVar15;
  } while (cVar1 != '\0');
  uVar22 = ~uVar22;
  pcVar19 = pcVar15 + -uVar22;
  pcVar15 = &this_01->field_0x1faf;
  for (uVar17 = uVar22 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar19;
    pcVar19 = pcVar19 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
    *pcVar15 = *pcVar19;
    pcVar19 = pcVar19 + 1;
    pcVar15 = pcVar15 + 1;
  }
  if ((8 < this_01->field_1A5F) && (this_01->field_1A5F < (CASE_C|CASE_1))) {
    uVar22 = 0xffffffff;
    pcVar19 = PTR_DAT_0079c06c;
    do {
      pcVar15 = pcVar19;
      if (uVar22 == 0) break;
      uVar22 = uVar22 - 1;
      pcVar15 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar15;
    } while (cVar1 != '\0');
    uVar22 = ~uVar22;
    iVar7 = -1;
    pcVar19 = &this_01->field_0x1faf;
    do {
      pcVar25 = pcVar19;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar25 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar25;
    } while (cVar1 != '\0');
    pcVar19 = pcVar15 + -uVar22;
    pcVar15 = pcVar25 + -1;
    for (uVar17 = uVar22 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
      *pcVar15 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar15 = pcVar15 + 1;
    }
  }
  uVar22 = 0xffffffff;
  pcVar19 = &DAT_007c72d8;
  do {
    pcVar15 = pcVar19;
    if (uVar22 == 0) break;
    uVar22 = uVar22 - 1;
    pcVar15 = pcVar19 + 1;
    cVar1 = *pcVar19;
    pcVar19 = pcVar15;
  } while (cVar1 != '\0');
  uVar22 = ~uVar22;
  iVar7 = -1;
  pcVar19 = &this_01->field_0x1faf;
  do {
    pcVar25 = pcVar19;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar25 = pcVar19 + 1;
    cVar1 = *pcVar19;
    pcVar19 = pcVar25;
  } while (cVar1 != '\0');
  pcVar19 = pcVar15 + -uVar22;
  pcVar15 = pcVar25 + -1;
  for (uVar17 = uVar22 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar19;
    pcVar19 = pcVar19 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
    *pcVar15 = *pcVar19;
    pcVar19 = pcVar19 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar22 = 0xffffffff;
  pcVar19 = PTR_DAT_0079c058;
  do {
    pcVar15 = pcVar19;
    if (uVar22 == 0) break;
    uVar22 = uVar22 - 1;
    pcVar15 = pcVar19 + 1;
    cVar1 = *pcVar19;
    pcVar19 = pcVar15;
  } while (cVar1 != '\0');
  uVar22 = ~uVar22;
  iVar7 = -1;
  pcVar19 = &this_01->field_0x1faf;
  do {
    pcVar25 = pcVar19;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar25 = pcVar19 + 1;
    cVar1 = *pcVar19;
    pcVar19 = pcVar25;
  } while (cVar1 != '\0');
  pcVar19 = pcVar15 + -uVar22;
  pcVar15 = pcVar25 + -1;
  for (uVar17 = uVar22 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar19;
    pcVar19 = pcVar19 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
    *pcVar15 = *pcVar19;
    pcVar19 = pcVar19 + 1;
    pcVar15 = pcVar15 + 1;
  }
  if (this_01->field_1A5F == CASE_3) {
    bVar27 = false;
  }
  else {
    local_18 = FindFirstFileA(&this_01->field_0x1faf,&local_26c);
    bVar27 = local_18 != (HANDLE)0xffffffff;
  }
  if (bVar27) {
    do {
      if (((byte)local_26c.dwFileAttributes & 0x10) == 0) {
        pCVar21 = local_26c.cFileName;
        uVar28 = 0;
        local_24 = (cMf32 *)0x0;
        Library::MSVCRT::FUN_0072e730((byte *)pCVar21,(byte *)0x0,(byte *)0x0,local_370,(byte *)0x0)
        ;
        local_12c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_12c;
        iVar7 = Library::MSVCRT::__setjmp3(local_12c.jumpBuffer,0,pCVar21,uVar28);
        this_01 = local_28;
        if (iVar7 == 0) {
          uVar22 = 0xffffffff;
          pcVar19 = &local_28->field_1DA7;
          do {
            pcVar15 = pcVar19;
            if (uVar22 == 0) break;
            uVar22 = uVar22 - 1;
            pcVar15 = pcVar19 + 1;
            cVar1 = *pcVar19;
            pcVar19 = pcVar15;
          } while (cVar1 != '\0');
          uVar22 = ~uVar22;
          pcVar19 = pcVar15 + -uVar22;
          pcVar15 = &local_28->field_0x1faf;
          for (uVar17 = uVar22 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
            *pcVar15 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar15 = pcVar15 + 1;
          }
          uVar22 = 0xffffffff;
          pbVar23 = local_370;
          do {
            pbVar20 = pbVar23;
            if (uVar22 == 0) break;
            uVar22 = uVar22 - 1;
            pbVar20 = pbVar23 + 1;
            bVar3 = *pbVar23;
            pbVar23 = pbVar20;
          } while (bVar3 != 0);
          uVar22 = ~uVar22;
          iVar7 = -1;
          pcVar19 = &local_28->field_0x1faf;
          do {
            pcVar15 = pcVar19;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar15 = pcVar19 + 1;
            cVar1 = *pcVar19;
            pcVar19 = pcVar15;
          } while (cVar1 != '\0');
          pbVar23 = pbVar20 + -uVar22;
          pbVar20 = (byte *)(pcVar15 + -1);
          for (uVar17 = uVar22 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pbVar20 = *(undefined4 *)pbVar23;
            pbVar23 = pbVar23 + 4;
            pbVar20 = pbVar20 + 4;
          }
          for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
            *pbVar20 = *pbVar23;
            pbVar23 = pbVar23 + 1;
            pbVar20 = pbVar20 + 1;
          }
          pcVar11 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                       (0x345,&local_28->field_0x1faf,0,0,0);
          bVar27 = false;
          switch(this_01->field_1A5F) {
          case CASE_1:
          case CASE_2:
          case CASE_4:
          case CASE_5:
            bVar27 = false;
            break;
          case CASE_9:
          case CASE_A:
          case CASE_B:
          case CASE_C:
            bVar27 = true;
            break;
          case CASE_13:
            bVar27 = DAT_00803400 == '\f';
          }
          if (bVar27) {
            local_14 = &local_24;
            puVar12 = cMf32::RecGet(pcVar11,0x80,PTR_s_SAVE_DESC_0079c070,(int *)&local_14,0);
            pcVar18 = extraout_ECX;
            if ((puVar12 != (ushort *)0x0) && (pcVar18 = local_24, local_c == local_24)) {
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_01->field_1C9B,&local_26c.ftLastWriteTime.dwLowDateTime);
              uVar22 = 0xffffffff;
              pcVar19 = PTR_DAT_0079c06c;
              do {
                if (uVar22 == 0) break;
                uVar22 = uVar22 - 1;
                cVar1 = *pcVar19;
                pcVar19 = pcVar19 + 1;
              } while (cVar1 != '\0');
              pbVar23 = (byte *)FUN_006b8240((char *)local_370,~uVar22 - 1);
LAB_005b051b:
              pAVar8 = this_01->field_1C97;
LAB_005b0523:
              Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar8,(char *)pbVar23);
              pcVar18 = extraout_ECX_01;
            }
          }
          else {
            local_14 = (cMf32 **)&DAT_008087b6;
            puVar12 = cMf32::RecGet(pcVar11,0,PTR_s_DESCRIPTOR_0079c078,(int *)&local_14,0);
            pcVar18 = extraout_ECX_00;
            if (((puVar12 != (ushort *)0x0) && (DAT_008087b6 != 0)) &&
               ((_DAT_008087ba == local_c ||
                ((((CVar2 = this_01->field_1A5F, pcVar18 = _DAT_008087ba, CVar2 == CASE_1 ||
                   (CVar2 == CASE_13)) || (CVar2 == CASE_4)) && (_DAT_008087ba == local_30)))))) {
              if (this_01->field_1A5F != CASE_2) {
                pbVar23 = local_370;
                goto LAB_005b051b;
              }
              pcVar18 = (cMf32 *)((uint)_DAT_008087ba & 0xffffff00);
              pcVar19 = (char *)((int)&DAT_008087c4 + 3);
              iVar7 = 8;
              do {
                if (((byte)pcVar19[0x22] < 8) && (*pcVar19 == '\0')) {
                  pcVar18 = (cMf32 *)CONCAT31((int3)((uint)pcVar18 >> 8),(char)pcVar18 + '\x01');
                }
                pcVar19 = pcVar19 + 0x51;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              if ((byte)pcVar18 < 2) {
                pAVar8 = this_01->field_1C97;
                pbVar23 = local_370;
                goto LAB_005b0523;
              }
            }
          }
          cMf32::delete(pcVar18,pcVar11);
          g_currentExceptionFrame = local_12c.previous;
        }
        else {
          g_currentExceptionFrame = local_12c.previous;
        }
      }
      BVar13 = FindNextFileA(local_18,&local_26c);
    } while (BVar13 != 0);
  }
  if (local_18 != (HANDLE)0xffffffff) {
    FindClose(local_18);
  }
  uVar22 = this_01->field_1C9F->field_0008;
  if ((int)(this_01->field_1C97->field_0008 + uVar22) < 1) {
    this_01->field_002D = 0x22;
    *(undefined4 *)&this_01->field_0x31 = 0;
    FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    uVar28 = this_01->field_1A6C;
    this_01->field_002D = 5;
    goto LAB_005b07ac;
  }
  if (1 < uVar22) {
    local_10 = uVar22 - 1;
    do {
      local_1c = 0;
      uVar22 = 0;
      if (local_10 != 0) {
        do {
          pAVar10 = this_01->field_1C9F;
          uVar17 = uVar22 + 1;
          if ((int)uVar17 < (int)pAVar10->field_0008) {
            pcVar19 = *(char **)(pAVar10->field_0014 + 4 + uVar22 * 4);
          }
          else {
            pcVar19 = (char *)0x0;
          }
          if ((int)uVar22 < (int)pAVar10->field_0008) {
            pcVar15 = *(char **)(pAVar10->field_0014 + uVar22 * 4);
          }
          else {
            pcVar15 = (char *)0x0;
          }
          iVar7 = Library::MSVCRT::__strcmpi(pcVar15,pcVar19);
          if (0 < iVar7) {
            FUN_006b8200((AnonShape_006B8200_800652FF *)this_01->field_1C9F,uVar22,uVar17);
            local_1c = 1;
          }
          uVar22 = uVar17;
        } while (uVar17 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar22 = this_01->field_1C97->field_0008;
  if (1 < uVar22) {
    CVar2 = this_01->field_1A5F;
    if (CVar2 < CASE_9) {
LAB_005b0639:
      local_5 = false;
    }
    else if (CVar2 < (CASE_C|CASE_1)) {
      local_5 = true;
    }
    else {
      if (CVar2 != CASE_13) goto LAB_005b0639;
      local_5 = DAT_00803400 == '\f';
    }
    local_10 = uVar22 - 1;
    do {
      uVar22 = 0;
      local_1c = 0;
      if (local_10 != 0) {
        do {
          if (local_5 == false) {
            pAVar8 = this_01->field_1C97;
            if ((int)(uVar22 + 1) < (int)pAVar8->field_0008) {
              pcVar19 = *(char **)(pAVar8->field_0014 + 4 + uVar22 * 4);
            }
            else {
              pcVar19 = (char *)0x0;
            }
            if ((int)uVar22 < (int)pAVar8->field_0008) {
              pcVar15 = *(char **)(pAVar8->field_0014 + uVar22 * 4);
            }
            else {
              pcVar15 = (char *)0x0;
            }
            iVar7 = Library::MSVCRT::__strcmpi(pcVar15,pcVar19);
            if (0 < iVar7) {
              pAVar29 = (AnonShape_006B8200_800652FF *)this_01->field_1C97;
              goto LAB_005b06e8;
            }
          }
          else {
            DArrayGetElement((DArrayTy *)this_01->field_1C9B,uVar22,&local_3c);
            DArrayGetElement((DArrayTy *)this_01->field_1C9B,uVar22 + 1,&local_44);
            LVar14 = CompareFileTime(&local_3c,&local_44);
            if (LVar14 < 0) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)this_01->field_1C9B,uVar22,uVar22 + 1);
              pAVar29 = (AnonShape_006B8200_800652FF *)this_01->field_1C97;
LAB_005b06e8:
              FUN_006b8200(pAVar29,uVar22,uVar22 + 1);
              local_1c = 1;
            }
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar22 = this_01->field_1C9F->field_0008 + this_01->field_1C97->field_0008;
  this_01->field_002D = 0x28;
  *(uint *)&this_01->field_0x31 = uVar22;
  FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
  this_01->field_002D = 0x20;
  *(undefined4 *)&this_01->field_0x31 = 1;
  FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
  this_01->field_002D = 0x22;
  if (uVar22 <= param_1) {
    param_1 = uVar22 - 1;
  }
  *(uint *)&this_01->field_0x31 = param_1;
  uVar28 = this_01->field_1A6C;
LAB_005b07ac:
  FUN_006e6080(this_01,2,uVar28,(undefined4 *)&this_01->field_0x1d);
  this_01->field_1A64 = 1;
  this_01->field_1A68 = this_01->field_0061;
  g_currentExceptionFrame = local_a4.previous;
  return;
}

