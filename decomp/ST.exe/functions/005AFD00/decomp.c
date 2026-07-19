
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::PrepFiles */

void __thiscall ChooseMapTy::PrepFiles(ChooseMapTy *this,uint param_1)

{
  ChooseMapTy CVar1;
  char cVar2;
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
  ChooseMapTy *pCVar16;
  undefined4 unaff_ESI;
  ChooseMapTy *pCVar17;
  ChooseMapTy *pCVar18;
  CHAR *pCVar19;
  void *unaff_EDI;
  uint uVar20;
  byte *pbVar21;
  CHAR *pCVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  bool bVar25;
  undefined4 uVar26;
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
  ChooseMapTy *local_20;
  int local_1c;
  HANDLE local_18;
  cMf32 **local_14;
  uint local_10;
  cMf32 *local_c;
  bool local_5;
  
  local_2c = 0;
  local_c = (cMf32 *)0x0;
  local_30 = (cMf32 *)0x0;
  switch(this[0x1a5f]) {
  case (ChooseMapTy)0x1:
  case (ChooseMapTy)0x4:
switchD_005afd30_caseD_1:
    local_30 = (cMf32 *)0x8f000405;
  case (ChooseMapTy)0x2:
  case (ChooseMapTy)0x5:
switchD_005afd30_caseD_2:
    local_c = (cMf32 *)0x8f000205;
    break;
  case (ChooseMapTy)0x9:
    local_c = (cMf32 *)0x88000116;
    break;
  case (ChooseMapTy)0xa:
    local_c = (cMf32 *)0x88000216;
    break;
  case (ChooseMapTy)0xb:
    local_c = (cMf32 *)0x88000416;
    break;
  case (ChooseMapTy)0xc:
switchD_005afd30_caseD_c:
    local_c = (cMf32 *)0x88000516;
    break;
  case (ChooseMapTy)0x13:
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
  pCVar16 = local_28;
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
  if (*(byte **)(local_28 + 0x1c97) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(local_28 + 0x1c97));
    *(undefined4 *)(pCVar16 + 0x1c97) = 0;
  }
  if (*(byte **)(pCVar16 + 0x1c9b) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(pCVar16 + 0x1c9b));
    *(undefined4 *)(pCVar16 + 0x1c9b) = 0;
  }
  if (*(byte **)(pCVar16 + 0x1c9f) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(pCVar16 + 0x1c9f));
    *(undefined4 *)(pCVar16 + 0x1c9f) = 0;
  }
  puVar6 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,0x32,10);
  *(uint **)(pCVar16 + 0x1c97) = puVar6;
  puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x32,8,10);
  *(uint **)(pCVar16 + 0x1c9b) = puVar6;
  puVar6 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  *(uint **)(pCVar16 + 0x1c9f) = puVar6;
  *(undefined4 *)(pCVar16 + 0x2d) = 0x20;
  *(undefined4 *)(pCVar16 + 0x31) = 0;
  FUN_006e6080(pCVar16,2,*(undefined4 *)(pCVar16 + 0x1a6c),(undefined4 *)(pCVar16 + 0x1d));
  iVar5 = *(int *)(pCVar16 + 0x1a5b);
  if (*(int *)(iVar5 + 0x2e6) != 0) {
    puVar23 = &local_60;
    for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar23 = 0;
      puVar23 = puVar23 + 1;
    }
    *(undefined2 *)puVar23 = 0;
    local_60._2_2_ = 0xffff;
    local_60._0_2_ = 0xffff;
    MMsgTy::StatePanel(*(MMsgTy **)(iVar5 + 0x2e6),(int)&local_60);
  }
  iVar5 = *(int *)(pCVar16 + 0x1c7b);
  FUN_006b4170(iVar5,0,0,0,*(int *)(iVar5 + 4),*(int *)(iVar5 + 8),0);
  uVar20 = 0x3f;
  pCVar17 = pCVar16 + 0x1c23;
  do {
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)pCVar17,0xffffffff,0x114,uVar20);
    uVar20 = uVar20 + 0x13;
    pCVar17 = pCVar17 + 4;
  } while ((int)uVar20 < 0x1e1);
  uVar20 = 0xffffffff;
  pCVar17 = pCVar16 + 0x1da7;
  do {
    pCVar18 = pCVar17;
    if (uVar20 == 0) break;
    uVar20 = uVar20 - 1;
    pCVar18 = pCVar17 + 1;
    CVar1 = *pCVar17;
    pCVar17 = pCVar18;
  } while (CVar1 != (ChooseMapTy)0x0);
  uVar20 = ~uVar20;
  pCVar17 = pCVar18 + -uVar20;
  pCVar18 = pCVar16 + 0x1faf;
  for (uVar13 = uVar20 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pCVar18 = *(undefined4 *)pCVar17;
    pCVar17 = pCVar17 + 4;
    pCVar18 = pCVar18 + 4;
  }
  for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
    *pCVar18 = *pCVar17;
    pCVar17 = pCVar17 + 1;
    pCVar18 = pCVar18 + 1;
  }
  uVar20 = 0xffffffff;
  pcVar15 = &DAT_007cc8bc;
  do {
    pcVar11 = pcVar15;
    if (uVar20 == 0) break;
    uVar20 = uVar20 - 1;
    pcVar11 = pcVar15 + 1;
    cVar2 = *pcVar15;
    pcVar15 = pcVar11;
  } while (cVar2 != '\0');
  uVar20 = ~uVar20;
  iVar5 = -1;
  pCVar17 = pCVar16 + 0x1faf;
  do {
    pCVar18 = pCVar17;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pCVar18 = pCVar17 + 1;
    CVar1 = *pCVar17;
    pCVar17 = pCVar18;
  } while (CVar1 != (ChooseMapTy)0x0);
  pCVar17 = (ChooseMapTy *)(pcVar11 + -uVar20);
  pCVar18 = pCVar18 + -1;
  for (uVar13 = uVar20 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pCVar18 = *(undefined4 *)pCVar17;
    pCVar17 = pCVar17 + 4;
    pCVar18 = pCVar18 + 4;
  }
  for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
    *pCVar18 = *pCVar17;
    pCVar17 = pCVar17 + 1;
    pCVar18 = pCVar18 + 1;
  }
  CVar1 = pCVar16[0x1a5f];
  if ((CVar1 != (ChooseMapTy)0x0) &&
     (((byte)CVar1 < 6 || ((CVar1 == (ChooseMapTy)0x13 && (DAT_00803400 != '\f')))))) {
    local_2c = 1;
  }
  pCVar17 = pCVar16 + 0x1ca3;
  pCVar18 = pCVar16 + 0x1da7;
  do {
    CVar1 = *pCVar18;
    bVar25 = (byte)CVar1 < (byte)*pCVar17;
    if (CVar1 != *pCVar17) {
LAB_005aff82:
      local_34 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
      goto LAB_005aff87;
    }
    if (CVar1 == (ChooseMapTy)0x0) break;
    CVar1 = pCVar18[1];
    bVar25 = (byte)CVar1 < (byte)pCVar17[1];
    if (CVar1 != pCVar17[1]) goto LAB_005aff82;
    pCVar18 = pCVar18 + 2;
    pCVar17 = pCVar17 + 2;
  } while (CVar1 != (ChooseMapTy)0x0);
  local_34 = 0;
LAB_005aff87:
  if (local_2c != 0) {
    local_18 = FindFirstFileA((LPCSTR)(pCVar16 + 0x1faf),&local_26c);
    if (local_18 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_26c.dwFileAttributes & 0x10) != 0) {
          pbVar21 = &DAT_007cc8b8;
          pCVar19 = local_26c.cFileName;
          do {
            bVar3 = *pCVar19;
            bVar25 = bVar3 < *pbVar21;
            if (bVar3 != *pbVar21) {
LAB_005afffc:
              iVar5 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
              goto LAB_005b0001;
            }
            if (bVar3 == 0) break;
            bVar3 = pCVar19[1];
            bVar25 = bVar3 < pbVar21[1];
            if (bVar3 != pbVar21[1]) goto LAB_005afffc;
            pCVar19 = pCVar19 + 2;
            pbVar21 = pbVar21 + 2;
          } while (bVar3 != 0);
          iVar5 = 0;
LAB_005b0001:
          if (iVar5 != 0) {
            pbVar21 = &DAT_007cc8b4;
            pCVar19 = local_26c.cFileName;
            do {
              bVar3 = *pCVar19;
              bVar25 = bVar3 < *pbVar21;
              if (bVar3 != *pbVar21) {
LAB_005b003c:
                iVar5 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
                goto LAB_005b0041;
              }
              if (bVar3 == 0) break;
              bVar3 = pCVar19[1];
              bVar25 = bVar3 < pbVar21[1];
              if (bVar3 != pbVar21[1]) goto LAB_005b003c;
              pCVar19 = pCVar19 + 2;
              pbVar21 = pbVar21 + 2;
            } while (bVar3 != 0);
            iVar5 = 0;
LAB_005b0041:
            if ((iVar5 != 0) || (local_34 != 0)) {
              if (pCVar16[0x1a5f] == (ChooseMapTy)0x3) {
                uVar20 = 0xffffffff;
                local_20 = pCVar16 + 0x1faf;
                pCVar16 = pCVar16 + 0x1da7;
                do {
                  pCVar17 = pCVar16;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pCVar17 = pCVar16 + 1;
                  CVar1 = *pCVar16;
                  pCVar16 = pCVar17;
                } while (CVar1 != (ChooseMapTy)0x0);
                uVar20 = ~uVar20;
                pCVar16 = pCVar17 + -uVar20;
                pCVar17 = local_20;
                for (uVar13 = uVar20 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined4 *)pCVar17 = *(undefined4 *)pCVar16;
                  pCVar16 = pCVar16 + 4;
                  pCVar17 = pCVar17 + 4;
                }
                for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *pCVar17 = *pCVar16;
                  pCVar16 = pCVar16 + 1;
                  pCVar17 = pCVar17 + 1;
                }
                FUN_006b8280((char *)local_20,(char *)local_20);
                pCVar16 = local_20;
                uVar20 = 0xffffffff;
                pCVar19 = local_26c.cFileName;
                do {
                  pCVar22 = pCVar19;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pCVar22 = pCVar19 + 1;
                  cVar2 = *pCVar19;
                  pCVar19 = pCVar22;
                } while (cVar2 != '\0');
                uVar20 = ~uVar20;
                iVar5 = -1;
                pCVar17 = local_20;
                do {
                  pCVar18 = pCVar17;
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  pCVar18 = pCVar17 + 1;
                  CVar1 = *pCVar17;
                  pCVar17 = pCVar18;
                } while (CVar1 != (ChooseMapTy)0x0);
                pCVar17 = (ChooseMapTy *)(pCVar22 + -uVar20);
                pCVar18 = pCVar18 + -1;
                for (uVar13 = uVar20 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined4 *)pCVar18 = *(undefined4 *)pCVar17;
                  pCVar17 = pCVar17 + 4;
                  pCVar18 = pCVar18 + 4;
                }
                for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *pCVar18 = *pCVar17;
                  pCVar17 = pCVar17 + 1;
                  pCVar18 = pCVar18 + 1;
                }
                FUN_006b8280((char *)local_20,(char *)local_20);
                uVar20 = 0xffffffff;
                pcVar15 = PTR_s_ADDON_0079c060;
                do {
                  pcVar11 = pcVar15;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pcVar11 = pcVar15 + 1;
                  cVar2 = *pcVar15;
                  pcVar15 = pcVar11;
                } while (cVar2 != '\0');
                uVar20 = ~uVar20;
                local_10 = 1;
                iVar5 = -1;
                do {
                  pCVar17 = pCVar16;
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  pCVar17 = pCVar16 + 1;
                  CVar1 = *pCVar16;
                  pCVar16 = pCVar17;
                } while (CVar1 != (ChooseMapTy)0x0);
                pCVar16 = (ChooseMapTy *)(pcVar11 + -uVar20);
                pCVar17 = pCVar17 + -1;
                for (uVar13 = uVar20 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined4 *)pCVar17 = *(undefined4 *)pCVar16;
                  pCVar16 = pCVar16 + 4;
                  pCVar17 = pCVar17 + 4;
                }
                for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *pCVar17 = *pCVar16;
                  pCVar16 = pCVar16 + 1;
                  pCVar17 = pCVar17 + 1;
                }
                local_e8.previous = g_currentExceptionFrame;
                g_currentExceptionFrame = &local_e8;
                iVar5 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0,unaff_EDI,unaff_ESI);
                pCVar16 = local_28;
                if (iVar5 == 0) {
                  pcVar7 = (cMf32 *)FUN_006f0ec0(0x345,(byte *)(local_28 + 0x1faf),0,0,0);
                  if (DAT_0080c4cb != (uint *)0x0) {
                    FUN_006b5570((byte *)DAT_0080c4cb);
                  }
                  DAT_0080c4cb = FUN_0071aa10((int)pcVar7,PTR_s_OBJECTIVES_0079c074,0);
                  if (DAT_0080c4cb == (uint *)0x0) {
                    DAT_0080c4cb = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
                  }
                  puVar23 = (undefined4 *)&DAT_0080ed16;
                  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar23 = 0;
                    puVar23 = puVar23 + 1;
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
              Library::DKW::TBL::FUN_006b5aa0(*(int *)(pCVar16 + 0x1c9f),local_26c.cFileName);
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
  uVar20 = 0xffffffff;
  pCVar17 = pCVar16 + 0x1da7;
  do {
    pCVar18 = pCVar17;
    if (uVar20 == 0) break;
    uVar20 = uVar20 - 1;
    pCVar18 = pCVar17 + 1;
    CVar1 = *pCVar17;
    pCVar17 = pCVar18;
  } while (CVar1 != (ChooseMapTy)0x0);
  uVar20 = ~uVar20;
  pCVar17 = pCVar18 + -uVar20;
  pCVar18 = pCVar16 + 0x1faf;
  for (uVar13 = uVar20 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pCVar18 = *(undefined4 *)pCVar17;
    pCVar17 = pCVar17 + 4;
    pCVar18 = pCVar18 + 4;
  }
  for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
    *pCVar18 = *pCVar17;
    pCVar17 = pCVar17 + 1;
    pCVar18 = pCVar18 + 1;
  }
  if ((8 < (byte)pCVar16[0x1a5f]) && ((byte)pCVar16[0x1a5f] < 0xd)) {
    uVar20 = 0xffffffff;
    pcVar15 = PTR_DAT_0079c06c;
    do {
      pcVar11 = pcVar15;
      if (uVar20 == 0) break;
      uVar20 = uVar20 - 1;
      pcVar11 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar11;
    } while (cVar2 != '\0');
    uVar20 = ~uVar20;
    iVar5 = -1;
    pCVar17 = pCVar16 + 0x1faf;
    do {
      pCVar18 = pCVar17;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pCVar18 = pCVar17 + 1;
      CVar1 = *pCVar17;
      pCVar17 = pCVar18;
    } while (CVar1 != (ChooseMapTy)0x0);
    pCVar17 = (ChooseMapTy *)(pcVar11 + -uVar20);
    pCVar18 = pCVar18 + -1;
    for (uVar13 = uVar20 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pCVar18 = *(undefined4 *)pCVar17;
      pCVar17 = pCVar17 + 4;
      pCVar18 = pCVar18 + 4;
    }
    for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
      *pCVar18 = *pCVar17;
      pCVar17 = pCVar17 + 1;
      pCVar18 = pCVar18 + 1;
    }
  }
  uVar20 = 0xffffffff;
  pcVar15 = &DAT_007c72d8;
  do {
    pcVar11 = pcVar15;
    if (uVar20 == 0) break;
    uVar20 = uVar20 - 1;
    pcVar11 = pcVar15 + 1;
    cVar2 = *pcVar15;
    pcVar15 = pcVar11;
  } while (cVar2 != '\0');
  uVar20 = ~uVar20;
  iVar5 = -1;
  pCVar17 = pCVar16 + 0x1faf;
  do {
    pCVar18 = pCVar17;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pCVar18 = pCVar17 + 1;
    CVar1 = *pCVar17;
    pCVar17 = pCVar18;
  } while (CVar1 != (ChooseMapTy)0x0);
  pCVar17 = (ChooseMapTy *)(pcVar11 + -uVar20);
  pCVar18 = pCVar18 + -1;
  for (uVar13 = uVar20 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pCVar18 = *(undefined4 *)pCVar17;
    pCVar17 = pCVar17 + 4;
    pCVar18 = pCVar18 + 4;
  }
  for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
    *pCVar18 = *pCVar17;
    pCVar17 = pCVar17 + 1;
    pCVar18 = pCVar18 + 1;
  }
  uVar20 = 0xffffffff;
  pcVar15 = PTR_DAT_0079c058;
  do {
    pcVar11 = pcVar15;
    if (uVar20 == 0) break;
    uVar20 = uVar20 - 1;
    pcVar11 = pcVar15 + 1;
    cVar2 = *pcVar15;
    pcVar15 = pcVar11;
  } while (cVar2 != '\0');
  uVar20 = ~uVar20;
  iVar5 = -1;
  pCVar17 = pCVar16 + 0x1faf;
  do {
    pCVar18 = pCVar17;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pCVar18 = pCVar17 + 1;
    CVar1 = *pCVar17;
    pCVar17 = pCVar18;
  } while (CVar1 != (ChooseMapTy)0x0);
  pCVar17 = (ChooseMapTy *)(pcVar11 + -uVar20);
  pCVar18 = pCVar18 + -1;
  for (uVar13 = uVar20 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pCVar18 = *(undefined4 *)pCVar17;
    pCVar17 = pCVar17 + 4;
    pCVar18 = pCVar18 + 4;
  }
  for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
    *pCVar18 = *pCVar17;
    pCVar17 = pCVar17 + 1;
    pCVar18 = pCVar18 + 1;
  }
  if (pCVar16[0x1a5f] == (ChooseMapTy)0x3) {
    bVar25 = false;
  }
  else {
    local_18 = FindFirstFileA((LPCSTR)(pCVar16 + 0x1faf),&local_26c);
    bVar25 = local_18 != (HANDLE)0xffffffff;
  }
  if (bVar25) {
    do {
      if (((byte)local_26c.dwFileAttributes & 0x10) == 0) {
        pCVar19 = local_26c.cFileName;
        uVar26 = 0;
        local_24 = (cMf32 *)0x0;
        Library::MSVCRT::FUN_0072e730((byte *)pCVar19,(byte *)0x0,(byte *)0x0,local_370,(byte *)0x0)
        ;
        local_12c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_12c;
        iVar5 = Library::MSVCRT::__setjmp3(local_12c.jumpBuffer,0,pCVar19,uVar26);
        pCVar16 = local_28;
        if (iVar5 == 0) {
          uVar20 = 0xffffffff;
          pCVar17 = local_28 + 0x1da7;
          do {
            pCVar18 = pCVar17;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pCVar18 = pCVar17 + 1;
            CVar1 = *pCVar17;
            pCVar17 = pCVar18;
          } while (CVar1 != (ChooseMapTy)0x0);
          uVar20 = ~uVar20;
          pCVar17 = pCVar18 + -uVar20;
          pCVar18 = local_28 + 0x1faf;
          for (uVar13 = uVar20 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pCVar18 = *(undefined4 *)pCVar17;
            pCVar17 = pCVar17 + 4;
            pCVar18 = pCVar18 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pCVar18 = *pCVar17;
            pCVar17 = pCVar17 + 1;
            pCVar18 = pCVar18 + 1;
          }
          uVar20 = 0xffffffff;
          pbVar21 = local_370;
          do {
            pbVar24 = pbVar21;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pbVar24 = pbVar21 + 1;
            bVar3 = *pbVar21;
            pbVar21 = pbVar24;
          } while (bVar3 != 0);
          uVar20 = ~uVar20;
          iVar5 = -1;
          pCVar17 = local_28 + 0x1faf;
          do {
            pCVar18 = pCVar17;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pCVar18 = pCVar17 + 1;
            CVar1 = *pCVar17;
            pCVar17 = pCVar18;
          } while (CVar1 != (ChooseMapTy)0x0);
          pCVar17 = (ChooseMapTy *)(pbVar24 + -uVar20);
          pCVar18 = pCVar18 + -1;
          for (uVar13 = uVar20 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pCVar18 = *(undefined4 *)pCVar17;
            pCVar17 = pCVar17 + 4;
            pCVar18 = pCVar18 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pCVar18 = *pCVar17;
            pCVar17 = pCVar17 + 1;
            pCVar18 = pCVar18 + 1;
          }
          pcVar7 = (cMf32 *)FUN_006f0ec0(0x345,(byte *)(local_28 + 0x1faf),0,0,0);
          bVar25 = false;
          switch(pCVar16[0x1a5f]) {
          case (ChooseMapTy)0x1:
          case (ChooseMapTy)0x2:
          case (ChooseMapTy)0x4:
          case (ChooseMapTy)0x5:
            bVar25 = false;
            break;
          case (ChooseMapTy)0x9:
          case (ChooseMapTy)0xa:
          case (ChooseMapTy)0xb:
          case (ChooseMapTy)0xc:
            bVar25 = true;
            break;
          case (ChooseMapTy)0x13:
            bVar25 = DAT_00803400 == '\f';
          }
          if (bVar25) {
            local_14 = &local_24;
            puVar8 = cMf32::RecGet(pcVar7,0x80,PTR_s_SAVE_DESC_0079c070,(int *)&local_14,0);
            pcVar14 = extraout_ECX;
            if ((puVar8 != (ushort *)0x0) && (pcVar14 = local_24, local_c == local_24)) {
              Library::DKW::TBL::FUN_006ae1c0
                        (*(uint **)(pCVar16 + 0x1c9b),&local_26c.ftLastWriteTime.dwLowDateTime);
              uVar20 = 0xffffffff;
              pcVar15 = PTR_DAT_0079c06c;
              do {
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar15 + 1;
              } while (cVar2 != '\0');
              pbVar21 = (byte *)FUN_006b8240((char *)local_370,~uVar20 - 1);
LAB_005b051b:
              iVar5 = *(int *)(pCVar16 + 0x1c97);
LAB_005b0523:
              Library::DKW::TBL::FUN_006b5aa0(iVar5,(char *)pbVar21);
              pcVar14 = extraout_ECX_01;
            }
          }
          else {
            local_14 = (cMf32 **)&DAT_008087b6;
            puVar8 = cMf32::RecGet(pcVar7,0,PTR_s_DESCRIPTOR_0079c078,(int *)&local_14,0);
            pcVar14 = extraout_ECX_00;
            if (((puVar8 != (ushort *)0x0) && (DAT_008087b6 != 0)) &&
               ((_DAT_008087ba == local_c ||
                ((((CVar1 = pCVar16[0x1a5f], pcVar14 = _DAT_008087ba, CVar1 == (ChooseMapTy)0x1 ||
                   (CVar1 == (ChooseMapTy)0x13)) || (CVar1 == (ChooseMapTy)0x4)) &&
                 (_DAT_008087ba == local_30)))))) {
              if (pCVar16[0x1a5f] != (ChooseMapTy)0x2) {
                pbVar21 = local_370;
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
                iVar5 = *(int *)(pCVar16 + 0x1c97);
                pbVar21 = local_370;
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
  uVar20 = *(uint *)(*(int *)(pCVar16 + 0x1c9f) + 8);
  if ((int)(*(int *)(*(int *)(pCVar16 + 0x1c97) + 8) + uVar20) < 1) {
    *(undefined4 *)(pCVar16 + 0x2d) = 0x22;
    *(undefined4 *)(pCVar16 + 0x31) = 0;
    FUN_006e6080(pCVar16,2,*(undefined4 *)(pCVar16 + 0x1a6c),(undefined4 *)(pCVar16 + 0x1d));
    uVar26 = *(undefined4 *)(pCVar16 + 0x1a6c);
    *(undefined4 *)(pCVar16 + 0x2d) = 5;
    goto LAB_005b07ac;
  }
  if (1 < uVar20) {
    local_10 = uVar20 - 1;
    do {
      local_1c = 0;
      uVar20 = 0;
      if (local_10 != 0) {
        do {
          iVar5 = *(int *)(pCVar16 + 0x1c9f);
          uVar13 = uVar20 + 1;
          if ((int)uVar13 < *(int *)(iVar5 + 8)) {
            pcVar15 = *(char **)(*(int *)(iVar5 + 0x14) + 4 + uVar20 * 4);
          }
          else {
            pcVar15 = (char *)0x0;
          }
          if ((int)uVar20 < *(int *)(iVar5 + 8)) {
            pcVar11 = *(char **)(*(int *)(iVar5 + 0x14) + uVar20 * 4);
          }
          else {
            pcVar11 = (char *)0x0;
          }
          iVar5 = Library::MSVCRT::__strcmpi(pcVar11,pcVar15);
          if (0 < iVar5) {
            FUN_006b8200(*(int *)(pCVar16 + 0x1c9f),uVar20,uVar13);
            local_1c = 1;
          }
          uVar20 = uVar13;
        } while (uVar13 < local_10);
      }
    } while (local_1c != 0);
  }
  if (1 < *(uint *)(*(int *)(pCVar16 + 0x1c97) + 8)) {
    CVar1 = pCVar16[0x1a5f];
    if ((byte)CVar1 < 9) {
LAB_005b0639:
      local_5 = false;
    }
    else if ((byte)CVar1 < 0xd) {
      local_5 = true;
    }
    else {
      if (CVar1 != (ChooseMapTy)0x13) goto LAB_005b0639;
      local_5 = DAT_00803400 == '\f';
    }
    local_10 = *(uint *)(*(int *)(pCVar16 + 0x1c97) + 8) - 1;
    do {
      uVar20 = 0;
      local_1c = 0;
      if (local_10 != 0) {
        do {
          if (local_5 == false) {
            iVar5 = *(int *)(pCVar16 + 0x1c97);
            if ((int)(uVar20 + 1) < *(int *)(iVar5 + 8)) {
              pcVar15 = *(char **)(*(int *)(iVar5 + 0x14) + 4 + uVar20 * 4);
            }
            else {
              pcVar15 = (char *)0x0;
            }
            if ((int)uVar20 < *(int *)(iVar5 + 8)) {
              pcVar11 = *(char **)(*(int *)(iVar5 + 0x14) + uVar20 * 4);
            }
            else {
              pcVar11 = (char *)0x0;
            }
            iVar5 = Library::MSVCRT::__strcmpi(pcVar11,pcVar15);
            if (0 < iVar5) {
              iVar5 = *(int *)(pCVar16 + 0x1c97);
              goto LAB_005b06e8;
            }
          }
          else {
            FUN_006acc70(*(int *)(pCVar16 + 0x1c9b),uVar20,&local_3c.dwLowDateTime);
            FUN_006acc70(*(int *)(pCVar16 + 0x1c9b),uVar20 + 1,&local_44.dwLowDateTime);
            LVar10 = CompareFileTime(&local_3c,&local_44);
            if (LVar10 < 0) {
              FUN_006b0cd0(*(int *)(pCVar16 + 0x1c9b),uVar20,uVar20 + 1);
              iVar5 = *(int *)(pCVar16 + 0x1c97);
LAB_005b06e8:
              FUN_006b8200(iVar5,uVar20,uVar20 + 1);
              local_1c = 1;
            }
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar20 = *(int *)(*(int *)(pCVar16 + 0x1c9f) + 8) + *(int *)(*(int *)(pCVar16 + 0x1c97) + 8);
  *(undefined4 *)(pCVar16 + 0x2d) = 0x28;
  *(uint *)(pCVar16 + 0x31) = uVar20;
  FUN_006e6080(pCVar16,2,*(undefined4 *)(pCVar16 + 0x1a6c),(undefined4 *)(pCVar16 + 0x1d));
  *(undefined4 *)(pCVar16 + 0x2d) = 0x20;
  *(undefined4 *)(pCVar16 + 0x31) = 1;
  FUN_006e6080(pCVar16,2,*(undefined4 *)(pCVar16 + 0x1a6c),(undefined4 *)(pCVar16 + 0x1d));
  *(undefined4 *)(pCVar16 + 0x2d) = 0x22;
  if (uVar20 <= param_1) {
    param_1 = uVar20 - 1;
  }
  *(uint *)(pCVar16 + 0x31) = param_1;
  uVar26 = *(undefined4 *)(pCVar16 + 0x1a6c);
LAB_005b07ac:
  FUN_006e6080(pCVar16,2,uVar26,(undefined4 *)(pCVar16 + 0x1d));
  *(undefined4 *)(pCVar16 + 0x1a64) = 1;
  *(undefined4 *)(pCVar16 + 0x1a68) = *(undefined4 *)(pCVar16 + 0x61);
  g_currentExceptionFrame = local_a4.previous;
  return;
}

