
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
  code *pcVar5;
  int iVar6;
  uint *puVar7;
  cMf32 *pcVar8;
  ushort *puVar9;
  BOOL BVar10;
  LONG LVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  cMf32 *this_00;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *pcVar15;
  cMf32 *extraout_ECX_01;
  char *pcVar16;
  ChooseMapTy *this_01;
  undefined4 unaff_ESI;
  byte *pbVar17;
  CHAR *pCVar18;
  void *unaff_EDI;
  uint uVar19;
  byte *pbVar20;
  CHAR *pCVar21;
  char *pcVar22;
  undefined4 *puVar23;
  bool bVar24;
  undefined4 uVar25;
  AnonShape_006B8200_800652FF *pAVar26;
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
  iVar6 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_28;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x4f5,0,iVar6,
                                &DAT_007a4ccc,s_ChooseMapTy__PrepFiles_007cc898);
    if (iVar13 != 0) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Start_load_obj_cpp_007cc728,0x4f5);
    return;
  }
  if ((AnonShape_006B5570_4D68B99C *)local_28->field_1C97 != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)local_28->field_1C97);
    this_01->field_1C97 = 0;
  }
  if ((byte *)this_01->field_1C9B != (byte *)0x0) {
    FUN_006ae110((byte *)this_01->field_1C9B);
    this_01->field_1C9B = 0;
  }
  if ((AnonShape_006B5570_4D68B99C *)this_01->field_1C9F != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)this_01->field_1C9F);
    this_01->field_1C9F = 0;
  }
  puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,0x32,10);
  this_01->field_1C97 = puVar7;
  puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x32,8,10);
  this_01->field_1C9B = puVar7;
  puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  this_01->field_1C9F = puVar7;
  this_01->field_002D = 0x20;
  *(undefined4 *)&this_01->field_0x31 = 0;
  FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
  pSVar4 = this_01->field_1A5B;
  if (pSVar4->field_02E6 != (MMsgTy *)0x0) {
    puVar23 = &local_60;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar23 = 0;
      puVar23 = puVar23 + 1;
    }
    *(undefined2 *)puVar23 = 0;
    local_60._2_2_ = 0xffff;
    local_60._0_2_ = 0xffff;
    MMsgTy::StatePanel(pSVar4->field_02E6,(int)&local_60);
  }
  iVar6 = this_01->field_1C7B;
  FUN_006b4170(iVar6,0,0,0,*(int *)(iVar6 + 4),*(int *)(iVar6 + 8),0);
  uVar19 = 0x3f;
  puVar7 = &this_01->field_1C23;
  do {
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar7,0xffffffff,0x114,uVar19);
    uVar19 = uVar19 + 0x13;
    puVar7 = puVar7 + 1;
  } while ((int)uVar19 < 0x1e1);
  uVar19 = 0xffffffff;
  pcVar16 = &this_01->field_1DA7;
  do {
    pcVar12 = pcVar16;
    if (uVar19 == 0) break;
    uVar19 = uVar19 - 1;
    pcVar12 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar12;
  } while (cVar1 != '\0');
  uVar19 = ~uVar19;
  pcVar16 = pcVar12 + -uVar19;
  pcVar12 = &this_01->field_0x1faf;
  for (uVar14 = uVar19 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *pcVar12 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar19 = 0xffffffff;
  pcVar16 = &DAT_007cc8bc;
  do {
    pcVar12 = pcVar16;
    if (uVar19 == 0) break;
    uVar19 = uVar19 - 1;
    pcVar12 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar12;
  } while (cVar1 != '\0');
  uVar19 = ~uVar19;
  iVar6 = -1;
  pcVar16 = &this_01->field_0x1faf;
  do {
    pcVar22 = pcVar16;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar22 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar22;
  } while (cVar1 != '\0');
  pcVar16 = pcVar12 + -uVar19;
  pcVar12 = pcVar22 + -1;
  for (uVar14 = uVar19 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *pcVar12 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar12 = pcVar12 + 1;
  }
  CVar2 = this_01->field_1A5F;
  if ((CVar2 != CASE_0) && ((CVar2 < CASE_6 || ((CVar2 == CASE_13 && (DAT_00803400 != '\f')))))) {
    local_2c = 1;
  }
  pbVar20 = &this_01->field_1CA3;
  pbVar17 = &this_01->field_1DA7;
  do {
    bVar3 = *pbVar17;
    bVar24 = bVar3 < *pbVar20;
    if (bVar3 != *pbVar20) {
LAB_005aff82:
      local_34 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
      goto LAB_005aff87;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar17[1];
    bVar24 = bVar3 < pbVar20[1];
    if (bVar3 != pbVar20[1]) goto LAB_005aff82;
    pbVar17 = pbVar17 + 2;
    pbVar20 = pbVar20 + 2;
  } while (bVar3 != 0);
  local_34 = 0;
LAB_005aff87:
  if (local_2c != 0) {
    local_18 = FindFirstFileA(&this_01->field_0x1faf,&local_26c);
    if (local_18 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_26c.dwFileAttributes & 0x10) != 0) {
          pbVar20 = &DAT_007cc8b8;
          pCVar18 = local_26c.cFileName;
          do {
            bVar3 = *pCVar18;
            bVar24 = bVar3 < *pbVar20;
            if (bVar3 != *pbVar20) {
LAB_005afffc:
              iVar6 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
              goto LAB_005b0001;
            }
            if (bVar3 == 0) break;
            bVar3 = pCVar18[1];
            bVar24 = bVar3 < pbVar20[1];
            if (bVar3 != pbVar20[1]) goto LAB_005afffc;
            pCVar18 = pCVar18 + 2;
            pbVar20 = pbVar20 + 2;
          } while (bVar3 != 0);
          iVar6 = 0;
LAB_005b0001:
          if (iVar6 != 0) {
            pbVar20 = &DAT_007cc8b4;
            pCVar18 = local_26c.cFileName;
            do {
              bVar3 = *pCVar18;
              bVar24 = bVar3 < *pbVar20;
              if (bVar3 != *pbVar20) {
LAB_005b003c:
                iVar6 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
                goto LAB_005b0041;
              }
              if (bVar3 == 0) break;
              bVar3 = pCVar18[1];
              bVar24 = bVar3 < pbVar20[1];
              if (bVar3 != pbVar20[1]) goto LAB_005b003c;
              pCVar18 = pCVar18 + 2;
              pbVar20 = pbVar20 + 2;
            } while (bVar3 != 0);
            iVar6 = 0;
LAB_005b0041:
            if ((iVar6 != 0) || (local_34 != 0)) {
              if (this_01->field_1A5F == CASE_3) {
                uVar19 = 0xffffffff;
                local_20 = &this_01->field_0x1faf;
                pcVar16 = &this_01->field_1DA7;
                do {
                  pcVar12 = pcVar16;
                  if (uVar19 == 0) break;
                  uVar19 = uVar19 - 1;
                  pcVar12 = pcVar16 + 1;
                  cVar1 = *pcVar16;
                  pcVar16 = pcVar12;
                } while (cVar1 != '\0');
                uVar19 = ~uVar19;
                pcVar16 = pcVar12 + -uVar19;
                pcVar12 = local_20;
                for (uVar14 = uVar19 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
                  pcVar16 = pcVar16 + 4;
                  pcVar12 = pcVar12 + 4;
                }
                for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  *pcVar12 = *pcVar16;
                  pcVar16 = pcVar16 + 1;
                  pcVar12 = pcVar12 + 1;
                }
                FUN_006b8280(local_20,local_20);
                pcVar16 = local_20;
                uVar19 = 0xffffffff;
                pCVar18 = local_26c.cFileName;
                do {
                  pCVar21 = pCVar18;
                  if (uVar19 == 0) break;
                  uVar19 = uVar19 - 1;
                  pCVar21 = pCVar18 + 1;
                  cVar1 = *pCVar18;
                  pCVar18 = pCVar21;
                } while (cVar1 != '\0');
                uVar19 = ~uVar19;
                iVar6 = -1;
                pcVar12 = local_20;
                do {
                  pcVar22 = pcVar12;
                  if (iVar6 == 0) break;
                  iVar6 = iVar6 + -1;
                  pcVar22 = pcVar12 + 1;
                  cVar1 = *pcVar12;
                  pcVar12 = pcVar22;
                } while (cVar1 != '\0');
                pCVar18 = pCVar21 + -uVar19;
                pcVar12 = pcVar22 + -1;
                for (uVar14 = uVar19 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *(undefined4 *)pcVar12 = *(undefined4 *)pCVar18;
                  pCVar18 = pCVar18 + 4;
                  pcVar12 = pcVar12 + 4;
                }
                for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  *pcVar12 = *pCVar18;
                  pCVar18 = pCVar18 + 1;
                  pcVar12 = pcVar12 + 1;
                }
                FUN_006b8280(local_20,local_20);
                uVar19 = 0xffffffff;
                pcVar12 = PTR_s_ADDON_0079c060;
                do {
                  pcVar22 = pcVar12;
                  if (uVar19 == 0) break;
                  uVar19 = uVar19 - 1;
                  pcVar22 = pcVar12 + 1;
                  cVar1 = *pcVar12;
                  pcVar12 = pcVar22;
                } while (cVar1 != '\0');
                uVar19 = ~uVar19;
                local_10 = 1;
                iVar6 = -1;
                do {
                  pcVar12 = pcVar16;
                  if (iVar6 == 0) break;
                  iVar6 = iVar6 + -1;
                  pcVar12 = pcVar16 + 1;
                  cVar1 = *pcVar16;
                  pcVar16 = pcVar12;
                } while (cVar1 != '\0');
                pcVar16 = pcVar22 + -uVar19;
                pcVar12 = pcVar12 + -1;
                for (uVar14 = uVar19 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
                  pcVar16 = pcVar16 + 4;
                  pcVar12 = pcVar12 + 4;
                }
                for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  *pcVar12 = *pcVar16;
                  pcVar16 = pcVar16 + 1;
                  pcVar12 = pcVar12 + 1;
                }
                local_e8.previous = g_currentExceptionFrame;
                g_currentExceptionFrame = &local_e8;
                iVar6 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0,unaff_EDI,unaff_ESI);
                this_01 = local_28;
                if (iVar6 == 0) {
                  pcVar8 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                              (0x345,&local_28->field_0x1faf,0,0,0);
                  if (PTR_0080c4cb != (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
                    FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4cb);
                  }
                  PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                                 Library::Ourlib::MFSARR::mfSarLoad
                                           (pcVar8,PTR_s_OBJECTIVES_0079c074,0);
                  if (PTR_0080c4cb == (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
                    PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                                   Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
                  }
                  puVar23 = (undefined4 *)&DAT_0080ed16;
                  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *puVar23 = 0;
                    puVar23 = puVar23 + 1;
                  }
                  local_14 = (cMf32 **)&DAT_0080ed16;
                  puVar9 = cMf32::RecGet(pcVar8,0xc,PTR_s_MISSION_0079c064,(int *)&local_14,0);
                  if (puVar9 == (ushort *)0x0) {
                    local_10 = 0;
                  }
                  cMf32::delete(this_00,pcVar8);
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
        BVar10 = FindNextFileA(local_18,&local_26c);
      } while (BVar10 != 0);
    }
    if (local_18 != (HANDLE)0xffffffff) {
      FindClose(local_18);
    }
  }
  uVar19 = 0xffffffff;
  pcVar16 = &this_01->field_1DA7;
  do {
    pcVar12 = pcVar16;
    if (uVar19 == 0) break;
    uVar19 = uVar19 - 1;
    pcVar12 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar12;
  } while (cVar1 != '\0');
  uVar19 = ~uVar19;
  pcVar16 = pcVar12 + -uVar19;
  pcVar12 = &this_01->field_0x1faf;
  for (uVar14 = uVar19 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *pcVar12 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar12 = pcVar12 + 1;
  }
  if ((8 < this_01->field_1A5F) && (this_01->field_1A5F < (CASE_C|CASE_1))) {
    uVar19 = 0xffffffff;
    pcVar16 = PTR_DAT_0079c06c;
    do {
      pcVar12 = pcVar16;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar12 = pcVar16 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar12;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar6 = -1;
    pcVar16 = &this_01->field_0x1faf;
    do {
      pcVar22 = pcVar16;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar22 = pcVar16 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar22;
    } while (cVar1 != '\0');
    pcVar16 = pcVar12 + -uVar19;
    pcVar12 = pcVar22 + -1;
    for (uVar14 = uVar19 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *pcVar12 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar12 = pcVar12 + 1;
    }
  }
  uVar19 = 0xffffffff;
  pcVar16 = &DAT_007c72d8;
  do {
    pcVar12 = pcVar16;
    if (uVar19 == 0) break;
    uVar19 = uVar19 - 1;
    pcVar12 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar12;
  } while (cVar1 != '\0');
  uVar19 = ~uVar19;
  iVar6 = -1;
  pcVar16 = &this_01->field_0x1faf;
  do {
    pcVar22 = pcVar16;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar22 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar22;
  } while (cVar1 != '\0');
  pcVar16 = pcVar12 + -uVar19;
  pcVar12 = pcVar22 + -1;
  for (uVar14 = uVar19 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *pcVar12 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar19 = 0xffffffff;
  pcVar16 = PTR_DAT_0079c058;
  do {
    pcVar12 = pcVar16;
    if (uVar19 == 0) break;
    uVar19 = uVar19 - 1;
    pcVar12 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar12;
  } while (cVar1 != '\0');
  uVar19 = ~uVar19;
  iVar6 = -1;
  pcVar16 = &this_01->field_0x1faf;
  do {
    pcVar22 = pcVar16;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar22 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar22;
  } while (cVar1 != '\0');
  pcVar16 = pcVar12 + -uVar19;
  pcVar12 = pcVar22 + -1;
  for (uVar14 = uVar19 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *pcVar12 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar12 = pcVar12 + 1;
  }
  if (this_01->field_1A5F == CASE_3) {
    bVar24 = false;
  }
  else {
    local_18 = FindFirstFileA(&this_01->field_0x1faf,&local_26c);
    bVar24 = local_18 != (HANDLE)0xffffffff;
  }
  if (bVar24) {
    do {
      if (((byte)local_26c.dwFileAttributes & 0x10) == 0) {
        pCVar18 = local_26c.cFileName;
        uVar25 = 0;
        local_24 = (cMf32 *)0x0;
        Library::MSVCRT::FUN_0072e730((byte *)pCVar18,(byte *)0x0,(byte *)0x0,local_370,(byte *)0x0)
        ;
        local_12c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_12c;
        iVar6 = Library::MSVCRT::__setjmp3(local_12c.jumpBuffer,0,pCVar18,uVar25);
        this_01 = local_28;
        if (iVar6 == 0) {
          uVar19 = 0xffffffff;
          pcVar16 = &local_28->field_1DA7;
          do {
            pcVar12 = pcVar16;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar12 = pcVar16 + 1;
            cVar1 = *pcVar16;
            pcVar16 = pcVar12;
          } while (cVar1 != '\0');
          uVar19 = ~uVar19;
          pcVar16 = pcVar12 + -uVar19;
          pcVar12 = &local_28->field_0x1faf;
          for (uVar14 = uVar19 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar12 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar12 = pcVar12 + 1;
          }
          uVar19 = 0xffffffff;
          pbVar20 = local_370;
          do {
            pbVar17 = pbVar20;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pbVar17 = pbVar20 + 1;
            bVar3 = *pbVar20;
            pbVar20 = pbVar17;
          } while (bVar3 != 0);
          uVar19 = ~uVar19;
          iVar6 = -1;
          pcVar16 = &local_28->field_0x1faf;
          do {
            pcVar12 = pcVar16;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar12 = pcVar16 + 1;
            cVar1 = *pcVar16;
            pcVar16 = pcVar12;
          } while (cVar1 != '\0');
          pbVar20 = pbVar17 + -uVar19;
          pbVar17 = (byte *)(pcVar12 + -1);
          for (uVar14 = uVar19 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pbVar17 = *(undefined4 *)pbVar20;
            pbVar20 = pbVar20 + 4;
            pbVar17 = pbVar17 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pbVar17 = *pbVar20;
            pbVar20 = pbVar20 + 1;
            pbVar17 = pbVar17 + 1;
          }
          pcVar8 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                      (0x345,&local_28->field_0x1faf,0,0,0);
          bVar24 = false;
          switch(this_01->field_1A5F) {
          case CASE_1:
          case CASE_2:
          case CASE_4:
          case CASE_5:
            bVar24 = false;
            break;
          case CASE_9:
          case CASE_A:
          case CASE_B:
          case CASE_C:
            bVar24 = true;
            break;
          case CASE_13:
            bVar24 = DAT_00803400 == '\f';
          }
          if (bVar24) {
            local_14 = &local_24;
            puVar9 = cMf32::RecGet(pcVar8,0x80,PTR_s_SAVE_DESC_0079c070,(int *)&local_14,0);
            pcVar15 = extraout_ECX;
            if ((puVar9 != (ushort *)0x0) && (pcVar15 = local_24, local_c == local_24)) {
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_01->field_1C9B,&local_26c.ftLastWriteTime.dwLowDateTime);
              uVar19 = 0xffffffff;
              pcVar16 = PTR_DAT_0079c06c;
              do {
                if (uVar19 == 0) break;
                uVar19 = uVar19 - 1;
                cVar1 = *pcVar16;
                pcVar16 = pcVar16 + 1;
              } while (cVar1 != '\0');
              pbVar20 = (byte *)FUN_006b8240((char *)local_370,~uVar19 - 1);
LAB_005b051b:
              puVar7 = (uint *)this_01->field_1C97;
LAB_005b0523:
              Library::DKW::TBL::FUN_006b5aa0(puVar7,(char *)pbVar20);
              pcVar15 = extraout_ECX_01;
            }
          }
          else {
            local_14 = (cMf32 **)&DAT_008087b6;
            puVar9 = cMf32::RecGet(pcVar8,0,PTR_s_DESCRIPTOR_0079c078,(int *)&local_14,0);
            pcVar15 = extraout_ECX_00;
            if (((puVar9 != (ushort *)0x0) && (DAT_008087b6 != 0)) &&
               ((_DAT_008087ba == local_c ||
                ((((CVar2 = this_01->field_1A5F, pcVar15 = _DAT_008087ba, CVar2 == CASE_1 ||
                   (CVar2 == CASE_13)) || (CVar2 == CASE_4)) && (_DAT_008087ba == local_30)))))) {
              if (this_01->field_1A5F != CASE_2) {
                pbVar20 = local_370;
                goto LAB_005b051b;
              }
              pcVar15 = (cMf32 *)((uint)_DAT_008087ba & 0xffffff00);
              pcVar16 = (char *)((int)&DAT_008087c4 + 3);
              iVar6 = 8;
              do {
                if (((byte)pcVar16[0x22] < 8) && (*pcVar16 == '\0')) {
                  pcVar15 = (cMf32 *)CONCAT31((int3)((uint)pcVar15 >> 8),(char)pcVar15 + '\x01');
                }
                pcVar16 = pcVar16 + 0x51;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              if ((byte)pcVar15 < 2) {
                puVar7 = (uint *)this_01->field_1C97;
                pbVar20 = local_370;
                goto LAB_005b0523;
              }
            }
          }
          cMf32::delete(pcVar15,pcVar8);
          g_currentExceptionFrame = local_12c.previous;
        }
        else {
          g_currentExceptionFrame = local_12c.previous;
        }
      }
      BVar10 = FindNextFileA(local_18,&local_26c);
    } while (BVar10 != 0);
  }
  if (local_18 != (HANDLE)0xffffffff) {
    FindClose(local_18);
  }
  uVar19 = *(uint *)(this_01->field_1C9F + 8);
  if ((int)(*(int *)(this_01->field_1C97 + 8) + uVar19) < 1) {
    this_01->field_002D = 0x22;
    *(undefined4 *)&this_01->field_0x31 = 0;
    FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    uVar25 = this_01->field_1A6C;
    this_01->field_002D = 5;
    goto LAB_005b07ac;
  }
  if (1 < uVar19) {
    local_10 = uVar19 - 1;
    do {
      local_1c = 0;
      uVar19 = 0;
      if (local_10 != 0) {
        do {
          iVar6 = this_01->field_1C9F;
          uVar14 = uVar19 + 1;
          if ((int)uVar14 < *(int *)(iVar6 + 8)) {
            pcVar16 = *(char **)(*(int *)(iVar6 + 0x14) + 4 + uVar19 * 4);
          }
          else {
            pcVar16 = (char *)0x0;
          }
          if ((int)uVar19 < *(int *)(iVar6 + 8)) {
            pcVar12 = *(char **)(*(int *)(iVar6 + 0x14) + uVar19 * 4);
          }
          else {
            pcVar12 = (char *)0x0;
          }
          iVar6 = Library::MSVCRT::__strcmpi(pcVar12,pcVar16);
          if (0 < iVar6) {
            FUN_006b8200((AnonShape_006B8200_800652FF *)this_01->field_1C9F,uVar19,uVar14);
            local_1c = 1;
          }
          uVar19 = uVar14;
        } while (uVar14 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar19 = *(uint *)(this_01->field_1C97 + 8);
  if (1 < uVar19) {
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
    local_10 = uVar19 - 1;
    do {
      uVar19 = 0;
      local_1c = 0;
      if (local_10 != 0) {
        do {
          if (local_5 == false) {
            iVar6 = this_01->field_1C97;
            if ((int)(uVar19 + 1) < *(int *)(iVar6 + 8)) {
              pcVar16 = *(char **)(*(int *)(iVar6 + 0x14) + 4 + uVar19 * 4);
            }
            else {
              pcVar16 = (char *)0x0;
            }
            if ((int)uVar19 < *(int *)(iVar6 + 8)) {
              pcVar12 = *(char **)(*(int *)(iVar6 + 0x14) + uVar19 * 4);
            }
            else {
              pcVar12 = (char *)0x0;
            }
            iVar6 = Library::MSVCRT::__strcmpi(pcVar12,pcVar16);
            if (0 < iVar6) {
              pAVar26 = (AnonShape_006B8200_800652FF *)this_01->field_1C97;
              goto LAB_005b06e8;
            }
          }
          else {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)this_01->field_1C9B,uVar19,
                         &local_3c.dwLowDateTime);
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)this_01->field_1C9B,uVar19 + 1,
                         &local_44.dwLowDateTime);
            LVar11 = CompareFileTime(&local_3c,&local_44);
            if (LVar11 < 0) {
              FUN_006b0cd0((AnonShape_006B0CD0_C8D121FA *)this_01->field_1C9B,uVar19,uVar19 + 1);
              pAVar26 = (AnonShape_006B8200_800652FF *)this_01->field_1C97;
LAB_005b06e8:
              FUN_006b8200(pAVar26,uVar19,uVar19 + 1);
              local_1c = 1;
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar19 = *(int *)(this_01->field_1C9F + 8) + *(int *)(this_01->field_1C97 + 8);
  this_01->field_002D = 0x28;
  *(uint *)&this_01->field_0x31 = uVar19;
  FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
  this_01->field_002D = 0x20;
  *(undefined4 *)&this_01->field_0x31 = 1;
  FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
  this_01->field_002D = 0x22;
  if (uVar19 <= param_1) {
    param_1 = uVar19 - 1;
  }
  *(uint *)&this_01->field_0x31 = param_1;
  uVar25 = this_01->field_1A6C;
LAB_005b07ac:
  FUN_006e6080(this_01,2,uVar25,(undefined4 *)&this_01->field_0x1d);
  this_01->field_1A64 = 1;
  this_01->field_1A68 = this_01->field_0061;
  g_currentExceptionFrame = local_a4.previous;
  return;
}

