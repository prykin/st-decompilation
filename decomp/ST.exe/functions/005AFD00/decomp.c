
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::PrepFiles
   
   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_13=19 */

void __thiscall ChooseMapTy::PrepFiles(ChooseMapTy *this,uint param_1)

{
  char cVar1;
  ChooseMapTy_field_1A5FState CVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  uint *puVar6;
  cMf32 *pcVar7;
  ushort *puVar8;
  BOOL BVar9;
  LONG LVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  cMf32 *this_00;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *pcVar14;
  cMf32 *extraout_ECX_01;
  char *pcVar15;
  ChooseMapTy *this_01;
  undefined4 unaff_ESI;
  byte *pbVar16;
  CHAR *pCVar17;
  void *unaff_EDI;
  uint uVar18;
  byte *pbVar19;
  CHAR *pCVar20;
  char *pcVar21;
  undefined4 *puVar22;
  bool bVar23;
  undefined4 uVar24;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_28;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x4f5,0,iVar5,
                                &DAT_007a4ccc,s_ChooseMapTy__PrepFiles_007cc898);
    if (iVar12 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Start_load_obj_cpp_007cc728,0x4f5);
    return;
  }
  if (*(byte **)&local_28[1].field_0x237 != (byte *)0x0) {
    FUN_006b5570(*(byte **)&local_28[1].field_0x237);
    *(undefined4 *)&this_01[1].field_0x237 = 0;
  }
  if (*(byte **)&this_01[1].field_0x23b != (byte *)0x0) {
    FUN_006ae110(*(byte **)&this_01[1].field_0x23b);
    *(undefined4 *)&this_01[1].field_0x23b = 0;
  }
  if (*(byte **)&this_01[1].field_0x23f != (byte *)0x0) {
    FUN_006b5570(*(byte **)&this_01[1].field_0x23f);
    *(undefined4 *)&this_01[1].field_0x23f = 0;
  }
  puVar6 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,0x32,10);
  *(uint **)&this_01[1].field_0x237 = puVar6;
  puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x32,8,10);
  *(uint **)&this_01[1].field_0x23b = puVar6;
  puVar6 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  uVar24 = *(undefined4 *)&this_01[1].field_0xc;
  *(uint **)&this_01[1].field_0x23f = puVar6;
  *(undefined4 *)&this_01->field_0x2d = 0x20;
  *(undefined4 *)&this_01->field_0x31 = 0;
  FUN_006e6080(this_01,2,uVar24,(undefined4 *)&this_01->field_0x1d);
  iVar5 = *(int *)&this_01->field_0x1a5b;
  if (*(int *)(iVar5 + 0x2e6) != 0) {
    puVar22 = &local_60;
    for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar22 = 0;
      puVar22 = puVar22 + 1;
    }
    *(undefined2 *)puVar22 = 0;
    local_60._2_2_ = 0xffff;
    local_60._0_2_ = 0xffff;
    MMsgTy::StatePanel(*(MMsgTy **)(iVar5 + 0x2e6),(int)&local_60);
  }
  iVar5 = *(int *)&this_01[1].field_0x21b;
  FUN_006b4170(iVar5,0,0,0,*(int *)(iVar5 + 4),*(int *)(iVar5 + 8),0);
  uVar18 = 0x3f;
  puVar6 = (uint *)&this_01[1].field_0x1c3;
  do {
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar6,0xffffffff,0x114,uVar18);
    uVar18 = uVar18 + 0x13;
    puVar6 = puVar6 + 1;
  } while ((int)uVar18 < 0x1e1);
  uVar18 = 0xffffffff;
  pcVar15 = &this_01[1].field_0x347;
  do {
    pcVar11 = pcVar15;
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    pcVar11 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar11;
  } while (cVar1 != '\0');
  uVar18 = ~uVar18;
  pcVar15 = pcVar11 + -uVar18;
  pcVar11 = &this_01[1].field_0x54f;
  for (uVar13 = uVar18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *pcVar11 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar18 = 0xffffffff;
  pcVar15 = &DAT_007cc8bc;
  do {
    pcVar11 = pcVar15;
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    pcVar11 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar11;
  } while (cVar1 != '\0');
  uVar18 = ~uVar18;
  iVar5 = -1;
  pcVar15 = &this_01[1].field_0x54f;
  do {
    pcVar21 = pcVar15;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar21 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar21;
  } while (cVar1 != '\0');
  pcVar15 = pcVar11 + -uVar18;
  pcVar11 = pcVar21 + -1;
  for (uVar13 = uVar18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *pcVar11 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar11 = pcVar11 + 1;
  }
  CVar2 = this_01->field_1A5F;
  if ((CVar2 != 0) && ((CVar2 < (CASE_4|CASE_2) || ((CVar2 == CASE_13 && (DAT_00803400 != '\f'))))))
  {
    local_2c = 1;
  }
  pbVar19 = &this_01[1].field_0x243;
  pbVar16 = &this_01[1].field_0x347;
  do {
    bVar3 = *pbVar16;
    bVar23 = bVar3 < *pbVar19;
    if (bVar3 != *pbVar19) {
LAB_005aff82:
      local_34 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
      goto LAB_005aff87;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar16[1];
    bVar23 = bVar3 < pbVar19[1];
    if (bVar3 != pbVar19[1]) goto LAB_005aff82;
    pbVar16 = pbVar16 + 2;
    pbVar19 = pbVar19 + 2;
  } while (bVar3 != 0);
  local_34 = 0;
LAB_005aff87:
  if (local_2c != 0) {
    local_18 = FindFirstFileA(&this_01[1].field_0x54f,&local_26c);
    if (local_18 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_26c.dwFileAttributes & 0x10) != 0) {
          pbVar19 = &DAT_007cc8b8;
          pCVar17 = local_26c.cFileName;
          do {
            bVar3 = *pCVar17;
            bVar23 = bVar3 < *pbVar19;
            if (bVar3 != *pbVar19) {
LAB_005afffc:
              iVar5 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
              goto LAB_005b0001;
            }
            if (bVar3 == 0) break;
            bVar3 = pCVar17[1];
            bVar23 = bVar3 < pbVar19[1];
            if (bVar3 != pbVar19[1]) goto LAB_005afffc;
            pCVar17 = pCVar17 + 2;
            pbVar19 = pbVar19 + 2;
          } while (bVar3 != 0);
          iVar5 = 0;
LAB_005b0001:
          if (iVar5 != 0) {
            pbVar19 = &DAT_007cc8b4;
            pCVar17 = local_26c.cFileName;
            do {
              bVar3 = *pCVar17;
              bVar23 = bVar3 < *pbVar19;
              if (bVar3 != *pbVar19) {
LAB_005b003c:
                iVar5 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                goto LAB_005b0041;
              }
              if (bVar3 == 0) break;
              bVar3 = pCVar17[1];
              bVar23 = bVar3 < pbVar19[1];
              if (bVar3 != pbVar19[1]) goto LAB_005b003c;
              pCVar17 = pCVar17 + 2;
              pbVar19 = pbVar19 + 2;
            } while (bVar3 != 0);
            iVar5 = 0;
LAB_005b0041:
            if ((iVar5 != 0) || (local_34 != 0)) {
              if (this_01->field_1A5F == (CASE_2|CASE_1)) {
                uVar18 = 0xffffffff;
                local_20 = &this_01[1].field_0x54f;
                pcVar15 = &this_01[1].field_0x347;
                do {
                  pcVar11 = pcVar15;
                  if (uVar18 == 0) break;
                  uVar18 = uVar18 - 1;
                  pcVar11 = pcVar15 + 1;
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar11;
                } while (cVar1 != '\0');
                uVar18 = ~uVar18;
                pcVar15 = pcVar11 + -uVar18;
                pcVar11 = local_20;
                for (uVar13 = uVar18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined4 *)pcVar11 = *(undefined4 *)pcVar15;
                  pcVar15 = pcVar15 + 4;
                  pcVar11 = pcVar11 + 4;
                }
                for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *pcVar11 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                  pcVar11 = pcVar11 + 1;
                }
                FUN_006b8280(local_20,local_20);
                pcVar15 = local_20;
                uVar18 = 0xffffffff;
                pCVar17 = local_26c.cFileName;
                do {
                  pCVar20 = pCVar17;
                  if (uVar18 == 0) break;
                  uVar18 = uVar18 - 1;
                  pCVar20 = pCVar17 + 1;
                  cVar1 = *pCVar17;
                  pCVar17 = pCVar20;
                } while (cVar1 != '\0');
                uVar18 = ~uVar18;
                iVar5 = -1;
                pcVar11 = local_20;
                do {
                  pcVar21 = pcVar11;
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  pcVar21 = pcVar11 + 1;
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar21;
                } while (cVar1 != '\0');
                pCVar17 = pCVar20 + -uVar18;
                pcVar11 = pcVar21 + -1;
                for (uVar13 = uVar18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined4 *)pcVar11 = *(undefined4 *)pCVar17;
                  pCVar17 = pCVar17 + 4;
                  pcVar11 = pcVar11 + 4;
                }
                for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *pcVar11 = *pCVar17;
                  pCVar17 = pCVar17 + 1;
                  pcVar11 = pcVar11 + 1;
                }
                FUN_006b8280(local_20,local_20);
                uVar18 = 0xffffffff;
                pcVar11 = PTR_s_ADDON_0079c060;
                do {
                  pcVar21 = pcVar11;
                  if (uVar18 == 0) break;
                  uVar18 = uVar18 - 1;
                  pcVar21 = pcVar11 + 1;
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar21;
                } while (cVar1 != '\0');
                uVar18 = ~uVar18;
                local_10 = 1;
                iVar5 = -1;
                do {
                  pcVar11 = pcVar15;
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  pcVar11 = pcVar15 + 1;
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar11;
                } while (cVar1 != '\0');
                pcVar15 = pcVar21 + -uVar18;
                pcVar11 = pcVar11 + -1;
                for (uVar13 = uVar18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined4 *)pcVar11 = *(undefined4 *)pcVar15;
                  pcVar15 = pcVar15 + 4;
                  pcVar11 = pcVar11 + 4;
                }
                for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *pcVar11 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                  pcVar11 = pcVar11 + 1;
                }
                local_e8.previous = g_currentExceptionFrame;
                g_currentExceptionFrame = &local_e8;
                iVar5 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0,unaff_EDI,unaff_ESI);
                this_01 = local_28;
                if (iVar5 == 0) {
                  pcVar7 = (cMf32 *)FUN_006f0ec0(0x345,&local_28[1].field_0x54f,0,0,0);
                  if (DAT_0080c4cb != (uint *)0x0) {
                    FUN_006b5570((byte *)DAT_0080c4cb);
                  }
                  DAT_0080c4cb = FUN_0071aa10((int)pcVar7,PTR_s_OBJECTIVES_0079c074,0);
                  if (DAT_0080c4cb == (uint *)0x0) {
                    DAT_0080c4cb = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
                  }
                  puVar22 = (undefined4 *)&DAT_0080ed16;
                  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar22 = 0;
                    puVar22 = puVar22 + 1;
                  }
                  local_14 = (cMf32 **)&DAT_0080ed16;
                  puVar8 = cMf32::RecGet(pcVar7,0xc,PTR_s_MISSION_0079c064,(int *)&local_14,0);
                  if (puVar8 == (ushort *)0x0) {
                    local_10 = 0;
                  }
                  cMf32::delete(this_00,(undefined4 *)pcVar7);
                }
                else {
                  local_10 = 0;
                }
                g_currentExceptionFrame = local_e8.previous;
                if (local_10 == 0) goto LAB_005b01f3;
              }
              Library::DKW::TBL::FUN_006b5aa0(*(int *)&this_01[1].field_0x23f,local_26c.cFileName);
            }
          }
        }
LAB_005b01f3:
        BVar9 = FindNextFileA(local_18,&local_26c);
      } while (BVar9 != 0);
    }
    if (local_18 != (HANDLE)0xffffffff) {
      FindClose(local_18);
    }
  }
  uVar18 = 0xffffffff;
  pcVar15 = &this_01[1].field_0x347;
  do {
    pcVar11 = pcVar15;
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    pcVar11 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar11;
  } while (cVar1 != '\0');
  uVar18 = ~uVar18;
  pcVar15 = pcVar11 + -uVar18;
  pcVar11 = &this_01[1].field_0x54f;
  for (uVar13 = uVar18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *pcVar11 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar11 = pcVar11 + 1;
  }
  if ((8 < this_01->field_1A5F) && (this_01->field_1A5F < (CASE_C|CASE_1))) {
    uVar18 = 0xffffffff;
    pcVar15 = PTR_DAT_0079c06c;
    do {
      pcVar11 = pcVar15;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar11 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar11;
    } while (cVar1 != '\0');
    uVar18 = ~uVar18;
    iVar5 = -1;
    pcVar15 = &this_01[1].field_0x54f;
    do {
      pcVar21 = pcVar15;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar21 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar21;
    } while (cVar1 != '\0');
    pcVar15 = pcVar11 + -uVar18;
    pcVar11 = pcVar21 + -1;
    for (uVar13 = uVar18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *pcVar11 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  uVar18 = 0xffffffff;
  pcVar15 = &DAT_007c72d8;
  do {
    pcVar11 = pcVar15;
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    pcVar11 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar11;
  } while (cVar1 != '\0');
  uVar18 = ~uVar18;
  iVar5 = -1;
  pcVar15 = &this_01[1].field_0x54f;
  do {
    pcVar21 = pcVar15;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar21 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar21;
  } while (cVar1 != '\0');
  pcVar15 = pcVar11 + -uVar18;
  pcVar11 = pcVar21 + -1;
  for (uVar13 = uVar18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *pcVar11 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar18 = 0xffffffff;
  pcVar15 = PTR_DAT_0079c058;
  do {
    pcVar11 = pcVar15;
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    pcVar11 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar11;
  } while (cVar1 != '\0');
  uVar18 = ~uVar18;
  iVar5 = -1;
  pcVar15 = &this_01[1].field_0x54f;
  do {
    pcVar21 = pcVar15;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar21 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar21;
  } while (cVar1 != '\0');
  pcVar15 = pcVar11 + -uVar18;
  pcVar11 = pcVar21 + -1;
  for (uVar13 = uVar18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *pcVar11 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar11 = pcVar11 + 1;
  }
  if (this_01->field_1A5F == (CASE_2|CASE_1)) {
    bVar23 = false;
  }
  else {
    local_18 = FindFirstFileA(&this_01[1].field_0x54f,&local_26c);
    bVar23 = local_18 != (HANDLE)0xffffffff;
  }
  if (bVar23) {
    do {
      if (((byte)local_26c.dwFileAttributes & 0x10) == 0) {
        pCVar17 = local_26c.cFileName;
        uVar24 = 0;
        local_24 = (cMf32 *)0x0;
        Library::MSVCRT::FUN_0072e730((byte *)pCVar17,(byte *)0x0,(byte *)0x0,local_370,(byte *)0x0)
        ;
        local_12c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_12c;
        iVar5 = Library::MSVCRT::__setjmp3(local_12c.jumpBuffer,0,pCVar17,uVar24);
        this_01 = local_28;
        if (iVar5 == 0) {
          uVar18 = 0xffffffff;
          pcVar15 = &local_28[1].field_0x347;
          do {
            pcVar11 = pcVar15;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar11 = pcVar15 + 1;
            cVar1 = *pcVar15;
            pcVar15 = pcVar11;
          } while (cVar1 != '\0');
          uVar18 = ~uVar18;
          pcVar15 = pcVar11 + -uVar18;
          pcVar11 = &local_28[1].field_0x54f;
          for (uVar13 = uVar18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar11 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar11 = pcVar11 + 1;
          }
          uVar18 = 0xffffffff;
          pbVar19 = local_370;
          do {
            pbVar16 = pbVar19;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pbVar16 = pbVar19 + 1;
            bVar3 = *pbVar19;
            pbVar19 = pbVar16;
          } while (bVar3 != 0);
          uVar18 = ~uVar18;
          iVar5 = -1;
          pcVar15 = &local_28[1].field_0x54f;
          do {
            pcVar11 = pcVar15;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar11 = pcVar15 + 1;
            cVar1 = *pcVar15;
            pcVar15 = pcVar11;
          } while (cVar1 != '\0');
          pbVar19 = pbVar16 + -uVar18;
          pbVar16 = (byte *)(pcVar11 + -1);
          for (uVar13 = uVar18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pbVar16 = *(undefined4 *)pbVar19;
            pbVar19 = pbVar19 + 4;
            pbVar16 = pbVar16 + 4;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pbVar16 = *pbVar19;
            pbVar19 = pbVar19 + 1;
            pbVar16 = pbVar16 + 1;
          }
          pcVar7 = (cMf32 *)FUN_006f0ec0(0x345,&local_28[1].field_0x54f,0,0,0);
          bVar23 = false;
          switch(this_01->field_1A5F) {
          case CASE_1:
          case CASE_2:
          case CASE_4:
          case CASE_5:
            bVar23 = false;
            break;
          case CASE_9:
          case CASE_A:
          case CASE_B:
          case CASE_C:
            bVar23 = true;
            break;
          case CASE_13:
            bVar23 = DAT_00803400 == '\f';
          }
          if (bVar23) {
            local_14 = &local_24;
            puVar8 = cMf32::RecGet(pcVar7,0x80,PTR_s_SAVE_DESC_0079c070,(int *)&local_14,0);
            pcVar14 = extraout_ECX;
            if ((puVar8 != (ushort *)0x0) && (pcVar14 = local_24, local_c == local_24)) {
              Library::DKW::TBL::FUN_006ae1c0
                        (*(uint **)&this_01[1].field_0x23b,&local_26c.ftLastWriteTime.dwLowDateTime)
              ;
              uVar18 = 0xffffffff;
              pcVar15 = PTR_DAT_0079c06c;
              do {
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1;
                cVar1 = *pcVar15;
                pcVar15 = pcVar15 + 1;
              } while (cVar1 != '\0');
              pbVar19 = (byte *)FUN_006b8240((char *)local_370,~uVar18 - 1);
LAB_005b051b:
              iVar5 = *(int *)&this_01[1].field_0x237;
LAB_005b0523:
              Library::DKW::TBL::FUN_006b5aa0(iVar5,(char *)pbVar19);
              pcVar14 = extraout_ECX_01;
            }
          }
          else {
            local_14 = (cMf32 **)&DAT_008087b6;
            puVar8 = cMf32::RecGet(pcVar7,0,PTR_s_DESCRIPTOR_0079c078,(int *)&local_14,0);
            pcVar14 = extraout_ECX_00;
            if (((puVar8 != (ushort *)0x0) && (DAT_008087b6 != 0)) &&
               ((_DAT_008087ba == local_c ||
                ((((CVar2 = this_01->field_1A5F, pcVar14 = _DAT_008087ba, CVar2 == CASE_1 ||
                   (CVar2 == CASE_13)) || (CVar2 == CASE_4)) && (_DAT_008087ba == local_30)))))) {
              if (this_01->field_1A5F != CASE_2) {
                pbVar19 = local_370;
                goto LAB_005b051b;
              }
              pcVar14 = (cMf32 *)((uint)_DAT_008087ba & 0xffffff00);
              pcVar15 = (char *)((int)&DAT_008087c4 + 3);
              iVar5 = 8;
              do {
                if (((byte)pcVar15[0x22] < 8) && (*pcVar15 == '\0')) {
                  pcVar14 = (cMf32 *)CONCAT31((int3)((uint)pcVar14 >> 8),(char)pcVar14 + '\x01');
                }
                pcVar15 = pcVar15 + 0x51;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              if ((byte)pcVar14 < 2) {
                iVar5 = *(int *)&this_01[1].field_0x237;
                pbVar19 = local_370;
                goto LAB_005b0523;
              }
            }
          }
          cMf32::delete(pcVar14,(undefined4 *)pcVar7);
          g_currentExceptionFrame = local_12c.previous;
        }
        else {
          g_currentExceptionFrame = local_12c.previous;
        }
      }
      BVar9 = FindNextFileA(local_18,&local_26c);
    } while (BVar9 != 0);
  }
  if (local_18 != (HANDLE)0xffffffff) {
    FindClose(local_18);
  }
  uVar18 = *(uint *)(*(int *)&this_01[1].field_0x23f + 8);
  if ((int)(*(int *)(*(int *)&this_01[1].field_0x237 + 8) + uVar18) < 1) {
    uVar24 = *(undefined4 *)&this_01[1].field_0xc;
    *(undefined4 *)&this_01->field_0x2d = 0x22;
    *(undefined4 *)&this_01->field_0x31 = 0;
    FUN_006e6080(this_01,2,uVar24,(undefined4 *)&this_01->field_0x1d);
    uVar24 = *(undefined4 *)&this_01[1].field_0xc;
    *(undefined4 *)&this_01->field_0x2d = 5;
    goto LAB_005b07ac;
  }
  if (1 < uVar18) {
    local_10 = uVar18 - 1;
    do {
      local_1c = 0;
      uVar18 = 0;
      if (local_10 != 0) {
        do {
          iVar5 = *(int *)&this_01[1].field_0x23f;
          uVar13 = uVar18 + 1;
          if ((int)uVar13 < *(int *)(iVar5 + 8)) {
            pcVar15 = *(char **)(*(int *)(iVar5 + 0x14) + 4 + uVar18 * 4);
          }
          else {
            pcVar15 = (char *)0x0;
          }
          if ((int)uVar18 < *(int *)(iVar5 + 8)) {
            pcVar11 = *(char **)(*(int *)(iVar5 + 0x14) + uVar18 * 4);
          }
          else {
            pcVar11 = (char *)0x0;
          }
          iVar5 = Library::MSVCRT::__strcmpi(pcVar11,pcVar15);
          if (0 < iVar5) {
            FUN_006b8200(*(int *)&this_01[1].field_0x23f,uVar18,uVar13);
            local_1c = 1;
          }
          uVar18 = uVar13;
        } while (uVar13 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar18 = *(uint *)(*(int *)&this_01[1].field_0x237 + 8);
  if (1 < uVar18) {
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
    local_10 = uVar18 - 1;
    do {
      uVar18 = 0;
      local_1c = 0;
      if (local_10 != 0) {
        do {
          if (local_5 == false) {
            iVar5 = *(int *)&this_01[1].field_0x237;
            if ((int)(uVar18 + 1) < *(int *)(iVar5 + 8)) {
              pcVar15 = *(char **)(*(int *)(iVar5 + 0x14) + 4 + uVar18 * 4);
            }
            else {
              pcVar15 = (char *)0x0;
            }
            if ((int)uVar18 < *(int *)(iVar5 + 8)) {
              pcVar11 = *(char **)(*(int *)(iVar5 + 0x14) + uVar18 * 4);
            }
            else {
              pcVar11 = (char *)0x0;
            }
            iVar5 = Library::MSVCRT::__strcmpi(pcVar11,pcVar15);
            if (0 < iVar5) {
              iVar5 = *(int *)&this_01[1].field_0x237;
              goto LAB_005b06e8;
            }
          }
          else {
            FUN_006acc70(*(int *)&this_01[1].field_0x23b,uVar18,&local_3c.dwLowDateTime);
            FUN_006acc70(*(int *)&this_01[1].field_0x23b,uVar18 + 1,&local_44.dwLowDateTime);
            LVar10 = CompareFileTime(&local_3c,&local_44);
            if (LVar10 < 0) {
              FUN_006b0cd0(*(int *)&this_01[1].field_0x23b,uVar18,uVar18 + 1);
              iVar5 = *(int *)&this_01[1].field_0x237;
LAB_005b06e8:
              FUN_006b8200(iVar5,uVar18,uVar18 + 1);
              local_1c = 1;
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar24 = *(undefined4 *)&this_01[1].field_0xc;
  uVar18 = *(int *)(*(int *)&this_01[1].field_0x23f + 8) +
           *(int *)(*(int *)&this_01[1].field_0x237 + 8);
  *(undefined4 *)&this_01->field_0x2d = 0x28;
  *(uint *)&this_01->field_0x31 = uVar18;
  FUN_006e6080(this_01,2,uVar24,(undefined4 *)&this_01->field_0x1d);
  uVar24 = *(undefined4 *)&this_01[1].field_0xc;
  *(undefined4 *)&this_01->field_0x2d = 0x20;
  *(undefined4 *)&this_01->field_0x31 = 1;
  FUN_006e6080(this_01,2,uVar24,(undefined4 *)&this_01->field_0x1d);
  *(undefined4 *)&this_01->field_0x2d = 0x22;
  if (uVar18 <= param_1) {
    param_1 = uVar18 - 1;
  }
  *(uint *)&this_01->field_0x31 = param_1;
  uVar24 = *(undefined4 *)&this_01[1].field_0xc;
LAB_005b07ac:
  FUN_006e6080(this_01,2,uVar24,(undefined4 *)&this_01->field_0x1d);
  uVar24 = this_01->field_0061;
  *(undefined4 *)&this_01[1].field_0x4 = 1;
  *(undefined4 *)&this_01[1].field_0x8 = uVar24;
  g_currentExceptionFrame = local_a4.previous;
  return;
}

