
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PrepFiles */

void __thiscall SIDTy::PrepFiles(SIDTy *this)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  uint *puVar5;
  HANDLE hFindFile;
  cMf32 *this_00;
  BOOL BVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *this_01;
  int iVar11;
  SIDTy *this_02;
  undefined4 unaff_ESI;
  CHAR *pCVar12;
  void *unaff_EDI;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  bool bVar16;
  void *pvVar17;
  char *pcVar18;
  undefined4 uVar19;
  _WIN32_FIND_DATAA local_21c;
  byte local_dc [64];
  InternalExceptionFrame local_9c;
  InternalExceptionFrame local_58;
  HANDLE local_14;
  int local_10;
  SIDTy *local_c;
  int local_8;
  
  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_02 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x167,0,iVar4,&DAT_007a4ccc
                                ,s_SIDTy__PrepFiles_007cd694);
    if (iVar11 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x167);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pbVar14 = *(byte **)((int)&local_c[0x48].field_0061 + 3);
  if (pbVar14 != (byte *)0x0) {
    FUN_006b5570(pbVar14);
    *(undefined4 *)((int)&this_02[0x48].field_0061 + 3) = 0;
  }
  puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  *(uint **)((int)&this_02[0x48].field_0061 + 3) = puVar5;
  uVar19 = *(undefined4 *)&this_02[0x44].field_0x1d;
  *(undefined4 *)&this_02->field_0x2d = 0x20;
  *(undefined4 *)&this_02->field_0x31 = 0;
  FUN_006e6080(this_02,2,uVar19,(undefined4 *)&this_02->field_0x1d);
  uVar19 = *(undefined4 *)&this_02[0x44].field_0x21;
  *(undefined4 *)&this_02->field_0x2d = 0x29;
  *(undefined4 *)&this_02->field_0x31 = 0x19;
  FUN_006e6080(this_02,2,uVar19,(undefined4 *)&this_02->field_0x1d);
  FUN_006b4170(*(int *)&this_02[0x48].field_0x50,0,3,0x15,0x142,0x62,0xff);
  FUN_006b35d0(DAT_008075a8,*(uint *)&this_02[0x48].field_0x4c);
  wsprintfA(&this_02[0x49].field_0x7,&DAT_007c6ee4,&DAT_00807680,PTR_s_SAVEGAME__0079c19c);
  uVar9 = 0xffffffff;
  pcVar18 = &DAT_007cc8bc;
  do {
    pcVar7 = pcVar18;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar7 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar7;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar4 = -1;
  pcVar18 = &this_02[0x49].field_0x7;
  do {
    pcVar13 = pcVar18;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar13 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar13;
  } while (cVar1 != '\0');
  pcVar18 = pcVar7 + -uVar9;
  pcVar7 = pcVar13 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar18;
    pcVar18 = pcVar18 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar7 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    pcVar7 = pcVar7 + 1;
  }
  hFindFile = FindFirstFileA(&this_02[0x49].field_0x7,&local_21c);
  local_14 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_21c.dwFileAttributes & 0x10) != 0) {
        pbVar14 = &DAT_007cc8b8;
        pCVar12 = local_21c.cFileName;
        do {
          bVar2 = *pCVar12;
          bVar16 = bVar2 < *pbVar14;
          if (bVar2 != *pbVar14) {
LAB_005d8d7a:
            iVar4 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_005d8d7f;
          }
          if (bVar2 == 0) break;
          bVar2 = pCVar12[1];
          bVar16 = bVar2 < pbVar14[1];
          if (bVar2 != pbVar14[1]) goto LAB_005d8d7a;
          pCVar12 = pCVar12 + 2;
          pbVar14 = pbVar14 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_005d8d7f:
        if (iVar4 != 0) {
          pbVar14 = &DAT_007cc8b4;
          pCVar12 = local_21c.cFileName;
          do {
            bVar2 = *pCVar12;
            bVar16 = bVar2 < *pbVar14;
            if (bVar2 != *pbVar14) {
LAB_005d8dba:
              iVar4 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_005d8dbf;
            }
            if (bVar2 == 0) break;
            bVar2 = pCVar12[1];
            bVar16 = bVar2 < pbVar14[1];
            if (bVar2 != pbVar14[1]) goto LAB_005d8dba;
            pCVar12 = pCVar12 + 2;
            pbVar14 = pbVar14 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_005d8dbf:
          if (iVar4 != 0) {
            uVar9 = 0xffffffff;
            pCVar12 = local_21c.cFileName;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar1 = *pCVar12;
              pCVar12 = pCVar12 + 1;
            } while (cVar1 != '\0');
            if (~uVar9 - 1 < 0x40) {
              pvVar17 = &this_02[0x49].field_0x7;
              pcVar18 = s__s_s_s__s_007ca1ec;
              wsprintfA(pvVar17,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079c19c,
                        local_21c.cFileName,PTR_s_PL_LOG_0079c1a0);
              local_9c.previous = g_currentExceptionFrame;
              g_currentExceptionFrame = &local_9c;
              iVar4 = Library::MSVCRT::__setjmp3(local_9c.jumpBuffer,0,pvVar17,pcVar18);
              this_02 = local_c;
              if (iVar4 == 0) {
                this_00 = (cMf32 *)FUN_006f0ec0(0x345,&local_c[0x49].field_0x7,0,0,0);
                if (this_00 != (cMf32 *)0x0) {
                  iVar4 = cMf32::RecChk(this_00,0xc,PTR_s_OPTIONS_PLAYER_0079c1a4);
                  this_01 = extraout_ECX;
                  if (iVar4 == 0) {
                    Library::DKW::TBL::FUN_006b5aa0
                              (*(int *)((int)&this_02[0x48].field_0061 + 3),local_21c.cFileName);
                    this_01 = extraout_ECX_00;
                  }
                  cMf32::delete(this_01,(undefined4 *)this_00);
                }
                g_currentExceptionFrame = local_9c.previous;
              }
              else {
                g_currentExceptionFrame = local_9c.previous;
              }
            }
          }
        }
      }
      hFindFile = local_14;
      BVar6 = FindNextFileA(local_14,&local_21c);
    } while (BVar6 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  uVar9 = 0xffffffff;
  pcVar18 = (char *)&DAT_00807ddd;
  do {
    pcVar7 = pcVar18;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar7 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar7;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pbVar14 = (byte *)(pcVar7 + -uVar9);
  pbVar15 = local_dc;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pbVar15 = *(undefined4 *)pbVar14;
    pbVar14 = pbVar14 + 4;
    pbVar15 = pbVar15 + 4;
  }
  uVar19 = *(undefined4 *)&this_02[0x44].field_0x1d;
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pbVar15 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    pbVar15 = pbVar15 + 1;
  }
  iVar4 = *(int *)((int)&this_02[0x48].field_0061 + 3);
  *(undefined4 *)&this_02->field_0x2d = 0x28;
  *(undefined4 *)&this_02->field_0x31 = *(undefined4 *)(iVar4 + 8);
  FUN_006e6080(this_02,2,uVar19,(undefined4 *)&this_02->field_0x1d);
  iVar4 = *(int *)((int)&this_02[0x48].field_0061 + 3);
  iVar11 = *(int *)(iVar4 + 8);
  if (iVar11 < 1) {
    uVar19 = *(undefined4 *)&this_02[0x44].field_0x1d;
    *(undefined4 *)&this_02->field_0x2d = 0x22;
    *(undefined4 *)&this_02->field_0x31 = 0;
    FUN_006e6080(this_02,2,uVar19,(undefined4 *)&this_02->field_0x1d);
    uVar19 = *(undefined4 *)&this_02[0x44].field_0x1d;
    *(undefined4 *)&this_02->field_0x2d = 5;
  }
  else {
    if (1 < iVar11) {
      do {
        local_8 = 0;
        uVar9 = 0;
        if (0 < iVar11 + -1) {
          do {
            uVar10 = uVar9 + 1;
            if ((int)uVar10 < iVar11) {
              pcVar18 = *(char **)(*(int *)(iVar4 + 0x14) + 4 + uVar9 * 4);
            }
            else {
              pcVar18 = (char *)0x0;
            }
            if ((int)uVar9 < iVar11) {
              pcVar7 = *(char **)(*(int *)(iVar4 + 0x14) + uVar9 * 4);
            }
            else {
              pcVar7 = (char *)0x0;
            }
            iVar4 = Library::MSVCRT::__strcmpi(pcVar7,pcVar18);
            if (0 < iVar4) {
              FUN_006b8200(*(int *)((int)&this_02[0x48].field_0061 + 3),uVar9,uVar10);
              local_8 = 1;
            }
            iVar4 = *(int *)((int)&this_02[0x48].field_0061 + 3);
            iVar11 = *(int *)(iVar4 + 8);
            uVar9 = uVar10;
          } while ((int)uVar10 < iVar11 + -1);
        }
      } while (local_8 != 0);
    }
    uVar19 = *(undefined4 *)&this_02[0x44].field_0x1d;
    *(undefined4 *)&this_02->field_0x2d = 0x20;
    *(undefined4 *)&this_02->field_0x31 = 1;
    FUN_006e6080(this_02,2,uVar19,(undefined4 *)&this_02->field_0x1d);
    iVar11 = 0;
    local_8 = *(int *)(*(int *)((int)&this_02[0x48].field_0061 + 3) + 8);
    iVar4 = local_10;
    if (0 < local_8) {
      if (local_8 < 1) {
        pbVar14 = (byte *)0x0;
        goto LAB_005d8fe2;
      }
      do {
        pbVar14 = *(byte **)(*(int *)(*(int *)((int)&this_02[0x48].field_0061 + 3) + 0x14) +
                            iVar11 * 4);
LAB_005d8fe2:
        pbVar15 = local_dc;
        do {
          bVar2 = *pbVar14;
          bVar16 = bVar2 < *pbVar15;
          if (bVar2 != *pbVar15) {
LAB_005d900c:
            iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_005d9011;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar14[1];
          bVar16 = bVar2 < pbVar15[1];
          if (bVar2 != pbVar15[1]) goto LAB_005d900c;
          pbVar14 = pbVar14 + 2;
          pbVar15 = pbVar15 + 2;
        } while (bVar2 != 0);
        iVar8 = 0;
LAB_005d9011:
        iVar4 = iVar11;
      } while ((iVar8 != 0) && (iVar11 = iVar11 + 1, iVar4 = local_10, iVar11 < local_8));
    }
    local_10 = iVar4;
    uVar19 = *(undefined4 *)&this_02[0x44].field_0x1d;
    *(undefined4 *)&this_02->field_0x2d = 0x22;
    *(int *)&this_02->field_0x31 = local_10;
  }
  FUN_006e6080(this_02,2,uVar19,(undefined4 *)&this_02->field_0x1d);
  uVar19 = *(undefined4 *)&this_02[0x44].field_0x21;
  *(undefined4 *)&this_02->field_0x2d = 0x29;
  *(undefined4 *)&this_02->field_0x31 = 9;
  FUN_006e6080(this_02,2,uVar19,(undefined4 *)&this_02->field_0x1d);
  FUN_006b35d0(DAT_008075a8,*(uint *)&this_02[0x48].field_0x4c);
  g_currentExceptionFrame = local_58.previous;
  return;
}

