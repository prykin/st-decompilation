
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005afd00(void *this,uint param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  BOOL BVar7;
  LONG LVar8;
  char *pcVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  void *this_00;
  undefined4 unaff_ESI;
  byte *pbVar14;
  CHAR *pCVar15;
  void *unaff_EDI;
  uint uVar16;
  byte *pbVar17;
  CHAR *pCVar18;
  char *pcVar19;
  undefined4 *puVar20;
  bool bVar21;
  undefined4 uVar22;
  byte local_370 [260];
  _WIN32_FIND_DATAA local_26c;
  undefined4 *local_12c;
  undefined4 local_128 [16];
  undefined4 *local_e8;
  undefined4 local_e4 [16];
  undefined4 local_a4;
  undefined4 local_a0 [16];
  undefined4 local_60;
  FILETIME local_44;
  FILETIME local_3c;
  int local_34;
  int local_30;
  int local_2c;
  void *local_28;
  int local_24;
  char *local_20;
  int local_1c;
  HANDLE local_18;
  int *local_14;
  uint local_10;
  int local_c;
  bool local_5;
  
  local_2c = 0;
  local_c = 0;
  local_30 = 0;
  switch(*(undefined1 *)((int)this + 0x1a5f)) {
  case 1:
  case 4:
switchD_005afd30_caseD_1:
    local_30 = -0x70fffbfb;
  case 2:
  case 5:
switchD_005afd30_caseD_2:
    local_c = -0x70fffdfb;
    break;
  case 9:
    local_c = -0x77fffeea;
    break;
  case 10:
    local_c = -0x77fffdea;
    break;
  case 0xb:
    local_c = -0x77fffbea;
    break;
  case 0xc:
switchD_005afd30_caseD_c:
    local_c = -0x77fffaea;
    break;
  case 0x13:
    switch(DAT_00803400) {
    case '\x04':
      goto switchD_005afd30_caseD_1;
    case '\x05':
      goto switchD_005afd30_caseD_2;
    case '\f':
      goto switchD_005afd30_caseD_c;
    case '\x14':
    case '\x15':
      local_c = -0x70fff7fb;
    }
  }
  local_a4 = DAT_00858df8;
  DAT_00858df8 = (undefined4 **)&local_a4;
  local_28 = this;
  iVar3 = __setjmp3(local_a0,0,unaff_EDI,unaff_ESI);
  this_00 = local_28;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 **)local_a4;
    iVar11 = FUN_006ad4d0(s_E____titans_Start_load_obj_cpp_007cc728,0x4f5,0,iVar3,&DAT_007a4ccc);
    if (iVar11 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cc728,0x4f5);
    return;
  }
  if (*(byte **)((int)local_28 + 0x1c97) != (byte *)0x0) {
    FUN_006b5570(*(byte **)((int)local_28 + 0x1c97));
    *(undefined4 *)((int)this_00 + 0x1c97) = 0;
  }
  if (*(byte **)((int)this_00 + 0x1c9b) != (byte *)0x0) {
    FUN_006ae110(*(byte **)((int)this_00 + 0x1c9b));
    *(undefined4 *)((int)this_00 + 0x1c9b) = 0;
  }
  if (*(byte **)((int)this_00 + 0x1c9f) != (byte *)0x0) {
    FUN_006b5570(*(byte **)((int)this_00 + 0x1c9f));
    *(undefined4 *)((int)this_00 + 0x1c9f) = 0;
  }
  puVar4 = FUN_006b54f0((uint *)0x0,0x32,10);
  *(uint **)((int)this_00 + 0x1c97) = puVar4;
  puVar4 = FUN_006ae290((uint *)0x0,0x32,8,10);
  *(uint **)((int)this_00 + 0x1c9b) = puVar4;
  puVar4 = FUN_006b54f0((uint *)0x0,10,10);
  *(uint **)((int)this_00 + 0x1c9f) = puVar4;
  *(undefined4 *)((int)this_00 + 0x2d) = 0x20;
  *(undefined4 *)((int)this_00 + 0x31) = 0;
  FUN_006e6080(this_00,2,*(undefined4 *)((int)this_00 + 0x1a6c),(undefined4 *)((int)this_00 + 0x1d))
  ;
  iVar3 = *(int *)((int)this_00 + 0x1a5b);
  if (*(int *)(iVar3 + 0x2e6) != 0) {
    puVar5 = &local_60;
    for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    local_60._2_2_ = 0xffff;
    local_60._0_2_ = 0xffff;
    thunk_FUN_005b9010(*(void **)(iVar3 + 0x2e6),(int)&local_60);
  }
  iVar3 = *(int *)((int)this_00 + 0x1c7b);
  FUN_006b4170(iVar3,0,0,0,*(int *)(iVar3 + 4),*(int *)(iVar3 + 8),0);
  uVar16 = 0x3f;
  puVar4 = (uint *)((int)this_00 + 0x1c23);
  do {
    FUN_006b3640(DAT_008075a8,*puVar4,0xffffffff,0x114,uVar16);
    uVar16 = uVar16 + 0x13;
    puVar4 = puVar4 + 1;
  } while ((int)uVar16 < 0x1e1);
  uVar16 = 0xffffffff;
  pcVar13 = (char *)((int)this_00 + 0x1da7);
  do {
    pcVar9 = pcVar13;
    if (uVar16 == 0) break;
    uVar16 = uVar16 - 1;
    pcVar9 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar9;
  } while (cVar1 != '\0');
  uVar16 = ~uVar16;
  pcVar13 = pcVar9 + -uVar16;
  pcVar9 = (char *)((int)this_00 + 0x1faf);
  for (uVar12 = uVar16 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
    *pcVar9 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar16 = 0xffffffff;
  pcVar13 = &DAT_007cc8bc;
  do {
    pcVar9 = pcVar13;
    if (uVar16 == 0) break;
    uVar16 = uVar16 - 1;
    pcVar9 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar9;
  } while (cVar1 != '\0');
  uVar16 = ~uVar16;
  iVar3 = -1;
  pcVar13 = (char *)((int)this_00 + 0x1faf);
  do {
    pcVar19 = pcVar13;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar19 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar19;
  } while (cVar1 != '\0');
  pcVar13 = pcVar9 + -uVar16;
  pcVar9 = pcVar19 + -1;
  for (uVar12 = uVar16 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
    *pcVar9 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar9 = pcVar9 + 1;
  }
  bVar10 = *(byte *)((int)this_00 + 0x1a5f);
  if ((bVar10 != 0) && ((bVar10 < 6 || ((bVar10 == 0x13 && (DAT_00803400 != '\f')))))) {
    local_2c = 1;
  }
  pbVar17 = (byte *)((int)this_00 + 0x1ca3);
  pbVar14 = (byte *)((int)this_00 + 0x1da7);
  do {
    bVar10 = *pbVar14;
    bVar21 = bVar10 < *pbVar17;
    if (bVar10 != *pbVar17) {
LAB_005aff82:
      local_34 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
      goto LAB_005aff87;
    }
    if (bVar10 == 0) break;
    bVar10 = pbVar14[1];
    bVar21 = bVar10 < pbVar17[1];
    if (bVar10 != pbVar17[1]) goto LAB_005aff82;
    pbVar14 = pbVar14 + 2;
    pbVar17 = pbVar17 + 2;
  } while (bVar10 != 0);
  local_34 = 0;
LAB_005aff87:
  if (local_2c != 0) {
    local_18 = FindFirstFileA((LPCSTR)((int)this_00 + 0x1faf),&local_26c);
    if (local_18 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_26c.dwFileAttributes & 0x10) != 0) {
          pbVar17 = &DAT_007cc8b8;
          pCVar15 = local_26c.cFileName;
          do {
            bVar10 = *pCVar15;
            bVar21 = bVar10 < *pbVar17;
            if (bVar10 != *pbVar17) {
LAB_005afffc:
              iVar3 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
              goto LAB_005b0001;
            }
            if (bVar10 == 0) break;
            bVar10 = pCVar15[1];
            bVar21 = bVar10 < pbVar17[1];
            if (bVar10 != pbVar17[1]) goto LAB_005afffc;
            pCVar15 = pCVar15 + 2;
            pbVar17 = pbVar17 + 2;
          } while (bVar10 != 0);
          iVar3 = 0;
LAB_005b0001:
          if (iVar3 != 0) {
            pbVar17 = &DAT_007cc8b4;
            pCVar15 = local_26c.cFileName;
            do {
              bVar10 = *pCVar15;
              bVar21 = bVar10 < *pbVar17;
              if (bVar10 != *pbVar17) {
LAB_005b003c:
                iVar3 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                goto LAB_005b0041;
              }
              if (bVar10 == 0) break;
              bVar10 = pCVar15[1];
              bVar21 = bVar10 < pbVar17[1];
              if (bVar10 != pbVar17[1]) goto LAB_005b003c;
              pCVar15 = pCVar15 + 2;
              pbVar17 = pbVar17 + 2;
            } while (bVar10 != 0);
            iVar3 = 0;
LAB_005b0041:
            if ((iVar3 != 0) || (local_34 != 0)) {
              if (*(char *)((int)this_00 + 0x1a5f) == '\x03') {
                uVar16 = 0xffffffff;
                local_20 = (char *)((int)this_00 + 0x1faf);
                pcVar13 = (char *)((int)this_00 + 0x1da7);
                do {
                  pcVar9 = pcVar13;
                  if (uVar16 == 0) break;
                  uVar16 = uVar16 - 1;
                  pcVar9 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar9;
                } while (cVar1 != '\0');
                uVar16 = ~uVar16;
                pcVar13 = pcVar9 + -uVar16;
                pcVar9 = local_20;
                for (uVar12 = uVar16 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar13;
                  pcVar13 = pcVar13 + 4;
                  pcVar9 = pcVar9 + 4;
                }
                for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *pcVar9 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                  pcVar9 = pcVar9 + 1;
                }
                FUN_006b8280(local_20,local_20);
                pcVar13 = local_20;
                uVar16 = 0xffffffff;
                pCVar15 = local_26c.cFileName;
                do {
                  pCVar18 = pCVar15;
                  if (uVar16 == 0) break;
                  uVar16 = uVar16 - 1;
                  pCVar18 = pCVar15 + 1;
                  cVar1 = *pCVar15;
                  pCVar15 = pCVar18;
                } while (cVar1 != '\0');
                uVar16 = ~uVar16;
                iVar3 = -1;
                pcVar9 = local_20;
                do {
                  pcVar19 = pcVar9;
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  pcVar19 = pcVar9 + 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar19;
                } while (cVar1 != '\0');
                pCVar15 = pCVar18 + -uVar16;
                pcVar9 = pcVar19 + -1;
                for (uVar12 = uVar16 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pCVar15;
                  pCVar15 = pCVar15 + 4;
                  pcVar9 = pcVar9 + 4;
                }
                for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *pcVar9 = *pCVar15;
                  pCVar15 = pCVar15 + 1;
                  pcVar9 = pcVar9 + 1;
                }
                FUN_006b8280(local_20,local_20);
                uVar16 = 0xffffffff;
                pcVar9 = PTR_s_ADDON_0079c060;
                do {
                  pcVar19 = pcVar9;
                  if (uVar16 == 0) break;
                  uVar16 = uVar16 - 1;
                  pcVar19 = pcVar9 + 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar19;
                } while (cVar1 != '\0');
                uVar16 = ~uVar16;
                local_10 = 1;
                iVar3 = -1;
                do {
                  pcVar9 = pcVar13;
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  pcVar9 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar9;
                } while (cVar1 != '\0');
                pcVar13 = pcVar19 + -uVar16;
                pcVar9 = pcVar9 + -1;
                for (uVar12 = uVar16 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar13;
                  pcVar13 = pcVar13 + 4;
                  pcVar9 = pcVar9 + 4;
                }
                for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *pcVar9 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                  pcVar9 = pcVar9 + 1;
                }
                local_e8 = DAT_00858df8;
                DAT_00858df8 = &local_e8;
                iVar3 = __setjmp3(local_e4,0,unaff_EDI,unaff_ESI);
                this_00 = local_28;
                if (iVar3 == 0) {
                  puVar5 = FUN_006f0ec0(0x345,(byte *)((int)local_28 + 0x1faf),0,0,0);
                  if (DAT_0080c4cb != (uint *)0x0) {
                    FUN_006b5570((byte *)DAT_0080c4cb);
                  }
                  DAT_0080c4cb = FUN_0071aa10((int)puVar5,PTR_s_OBJECTIVES_0079c074,0);
                  if (DAT_0080c4cb == (uint *)0x0) {
                    DAT_0080c4cb = FUN_006b54f0((uint *)0x0,10,10);
                  }
                  puVar20 = (undefined4 *)&DAT_0080ed16;
                  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *puVar20 = 0;
                    puVar20 = puVar20 + 1;
                  }
                  local_14 = (int *)&DAT_0080ed16;
                  puVar6 = FUN_006f1ce0(0xc,PTR_s_MISSION_0079c064,(int *)&local_14,0);
                  if (puVar6 == (ushort *)0x0) {
                    local_10 = 0;
                  }
                  FUN_006f1170(puVar5);
                }
                else {
                  local_10 = 0;
                }
                DAT_00858df8 = (undefined4 **)local_e8;
                if (local_10 == 0) goto LAB_005b01f3;
              }
              FUN_006b5aa0(*(int *)((int)this_00 + 0x1c9f),local_26c.cFileName);
            }
          }
        }
LAB_005b01f3:
        BVar7 = FindNextFileA(local_18,&local_26c);
      } while (BVar7 != 0);
    }
    if (local_18 != (HANDLE)0xffffffff) {
      FindClose(local_18);
    }
  }
  uVar16 = 0xffffffff;
  pcVar13 = (char *)((int)this_00 + 0x1da7);
  do {
    pcVar9 = pcVar13;
    if (uVar16 == 0) break;
    uVar16 = uVar16 - 1;
    pcVar9 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar9;
  } while (cVar1 != '\0');
  uVar16 = ~uVar16;
  pcVar13 = pcVar9 + -uVar16;
  pcVar9 = (char *)((int)this_00 + 0x1faf);
  for (uVar12 = uVar16 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
    *pcVar9 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar9 = pcVar9 + 1;
  }
  if ((8 < *(byte *)((int)this_00 + 0x1a5f)) && (*(byte *)((int)this_00 + 0x1a5f) < 0xd)) {
    uVar16 = 0xffffffff;
    pcVar13 = PTR_DAT_0079c06c;
    do {
      pcVar9 = pcVar13;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar9 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar3 = -1;
    pcVar13 = (char *)((int)this_00 + 0x1faf);
    do {
      pcVar19 = pcVar13;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar19 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar19;
    } while (cVar1 != '\0');
    pcVar13 = pcVar9 + -uVar16;
    pcVar9 = pcVar19 + -1;
    for (uVar12 = uVar16 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pcVar9 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  uVar16 = 0xffffffff;
  pcVar13 = &DAT_007c72d8;
  do {
    pcVar9 = pcVar13;
    if (uVar16 == 0) break;
    uVar16 = uVar16 - 1;
    pcVar9 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar9;
  } while (cVar1 != '\0');
  uVar16 = ~uVar16;
  iVar3 = -1;
  pcVar13 = (char *)((int)this_00 + 0x1faf);
  do {
    pcVar19 = pcVar13;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar19 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar19;
  } while (cVar1 != '\0');
  pcVar13 = pcVar9 + -uVar16;
  pcVar9 = pcVar19 + -1;
  for (uVar12 = uVar16 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
    *pcVar9 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar16 = 0xffffffff;
  pcVar13 = PTR_DAT_0079c058;
  do {
    pcVar9 = pcVar13;
    if (uVar16 == 0) break;
    uVar16 = uVar16 - 1;
    pcVar9 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar9;
  } while (cVar1 != '\0');
  uVar16 = ~uVar16;
  iVar3 = -1;
  pcVar13 = (char *)((int)this_00 + 0x1faf);
  do {
    pcVar19 = pcVar13;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar19 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar19;
  } while (cVar1 != '\0');
  pcVar13 = pcVar9 + -uVar16;
  pcVar9 = pcVar19 + -1;
  for (uVar12 = uVar16 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
    *pcVar9 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar9 = pcVar9 + 1;
  }
  if (*(char *)((int)this_00 + 0x1a5f) == '\x03') {
    bVar21 = false;
  }
  else {
    local_18 = FindFirstFileA((LPCSTR)((int)this_00 + 0x1faf),&local_26c);
    bVar21 = local_18 != (HANDLE)0xffffffff;
  }
  if (bVar21) {
    do {
      if (((byte)local_26c.dwFileAttributes & 0x10) == 0) {
        pCVar15 = local_26c.cFileName;
        uVar22 = 0;
        local_24 = 0;
        FUN_0072e730((byte *)pCVar15,(byte *)0x0,(byte *)0x0,local_370,(byte *)0x0);
        local_12c = DAT_00858df8;
        DAT_00858df8 = &local_12c;
        iVar3 = __setjmp3(local_128,0,pCVar15,uVar22);
        this_00 = local_28;
        if (iVar3 == 0) {
          uVar16 = 0xffffffff;
          pcVar13 = (char *)((int)local_28 + 0x1da7);
          do {
            pcVar9 = pcVar13;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar9 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar9;
          } while (cVar1 != '\0');
          uVar16 = ~uVar16;
          pcVar13 = pcVar9 + -uVar16;
          pcVar9 = (char *)((int)local_28 + 0x1faf);
          for (uVar12 = uVar16 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar9 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar9 = pcVar9 + 1;
          }
          uVar16 = 0xffffffff;
          pbVar17 = local_370;
          do {
            pbVar14 = pbVar17;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pbVar14 = pbVar17 + 1;
            bVar10 = *pbVar17;
            pbVar17 = pbVar14;
          } while (bVar10 != 0);
          uVar16 = ~uVar16;
          iVar3 = -1;
          pcVar13 = (char *)((int)local_28 + 0x1faf);
          do {
            pcVar9 = pcVar13;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar9 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar9;
          } while (cVar1 != '\0');
          pbVar17 = pbVar14 + -uVar16;
          pbVar14 = (byte *)(pcVar9 + -1);
          for (uVar12 = uVar16 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pbVar14 = *(undefined4 *)pbVar17;
            pbVar17 = pbVar17 + 4;
            pbVar14 = pbVar14 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pbVar14 = *pbVar17;
            pbVar17 = pbVar17 + 1;
            pbVar14 = pbVar14 + 1;
          }
          puVar5 = FUN_006f0ec0(0x345,(byte *)((int)local_28 + 0x1faf),0,0,0);
          bVar21 = false;
          switch(*(undefined1 *)((int)this_00 + 0x1a5f)) {
          case 1:
          case 2:
          case 4:
          case 5:
            bVar21 = false;
            break;
          case 9:
          case 10:
          case 0xb:
          case 0xc:
            bVar21 = true;
            break;
          case 0x13:
            bVar21 = DAT_00803400 == '\f';
          }
          if (bVar21) {
            local_14 = &local_24;
            puVar6 = FUN_006f1ce0(0x80,PTR_s_SAVE_DESC_0079c070,(int *)&local_14,0);
            if ((puVar6 != (ushort *)0x0) && (local_c == local_24)) {
              FUN_006ae1c0(*(uint **)((int)this_00 + 0x1c9b),
                           &local_26c.ftLastWriteTime.dwLowDateTime);
              uVar16 = 0xffffffff;
              pcVar13 = PTR_DAT_0079c06c;
              do {
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar13 + 1;
              } while (cVar1 != '\0');
              pbVar17 = (byte *)FUN_006b8240((char *)local_370,~uVar16 - 1);
LAB_005b051b:
              iVar3 = *(int *)((int)this_00 + 0x1c97);
LAB_005b0523:
              FUN_006b5aa0(iVar3,(char *)pbVar17);
            }
          }
          else {
            local_14 = &DAT_008087b6;
            puVar6 = FUN_006f1ce0(0,PTR_s_DESCRIPTOR_0079c078,(int *)&local_14,0);
            if (((puVar6 != (ushort *)0x0) && (DAT_008087b6 != 0)) &&
               ((_DAT_008087ba == local_c ||
                ((((cVar1 = *(char *)((int)this_00 + 0x1a5f), cVar1 == '\x01' || (cVar1 == '\x13'))
                  || (cVar1 == '\x04')) && (_DAT_008087ba == local_30)))))) {
              if (*(char *)((int)this_00 + 0x1a5f) != '\x02') {
                pbVar17 = local_370;
                goto LAB_005b051b;
              }
              bVar10 = 0;
              pcVar13 = (char *)((int)&DAT_008087c4 + 3);
              iVar3 = 8;
              do {
                if (((byte)pcVar13[0x22] < 8) && (*pcVar13 == '\0')) {
                  bVar10 = bVar10 + 1;
                }
                pcVar13 = pcVar13 + 0x51;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
              if (bVar10 < 2) {
                iVar3 = *(int *)((int)this_00 + 0x1c97);
                pbVar17 = local_370;
                goto LAB_005b0523;
              }
            }
          }
          FUN_006f1170(puVar5);
          DAT_00858df8 = (undefined4 **)local_12c;
        }
        else {
          DAT_00858df8 = (undefined4 **)local_12c;
        }
      }
      BVar7 = FindNextFileA(local_18,&local_26c);
    } while (BVar7 != 0);
  }
  if (local_18 != (HANDLE)0xffffffff) {
    FindClose(local_18);
  }
  uVar16 = *(uint *)(*(int *)((int)this_00 + 0x1c9f) + 8);
  if ((int)(*(int *)(*(int *)((int)this_00 + 0x1c97) + 8) + uVar16) < 1) {
    *(undefined4 *)((int)this_00 + 0x2d) = 0x22;
    *(undefined4 *)((int)this_00 + 0x31) = 0;
    FUN_006e6080(this_00,2,*(undefined4 *)((int)this_00 + 0x1a6c),
                 (undefined4 *)((int)this_00 + 0x1d));
    uVar22 = *(undefined4 *)((int)this_00 + 0x1a6c);
    *(undefined4 *)((int)this_00 + 0x2d) = 5;
    goto LAB_005b07ac;
  }
  if (1 < uVar16) {
    local_10 = uVar16 - 1;
    do {
      local_1c = 0;
      uVar16 = 0;
      if (local_10 != 0) {
        do {
          iVar3 = *(int *)((int)this_00 + 0x1c9f);
          uVar12 = uVar16 + 1;
          if ((int)uVar12 < *(int *)(iVar3 + 8)) {
            pcVar13 = *(char **)(*(int *)(iVar3 + 0x14) + 4 + uVar16 * 4);
          }
          else {
            pcVar13 = (char *)0x0;
          }
          if ((int)uVar16 < *(int *)(iVar3 + 8)) {
            pcVar9 = *(char **)(*(int *)(iVar3 + 0x14) + uVar16 * 4);
          }
          else {
            pcVar9 = (char *)0x0;
          }
          iVar3 = __strcmpi(pcVar9,pcVar13);
          if (0 < iVar3) {
            FUN_006b8200(*(int *)((int)this_00 + 0x1c9f),uVar16,uVar12);
            local_1c = 1;
          }
          uVar16 = uVar12;
        } while (uVar12 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar16 = *(uint *)(*(int *)((int)this_00 + 0x1c97) + 8);
  if (1 < uVar16) {
    bVar10 = *(byte *)((int)this_00 + 0x1a5f);
    if (bVar10 < 9) {
LAB_005b0639:
      local_5 = false;
    }
    else if (bVar10 < 0xd) {
      local_5 = true;
    }
    else {
      if (bVar10 != 0x13) goto LAB_005b0639;
      local_5 = DAT_00803400 == '\f';
    }
    local_10 = uVar16 - 1;
    do {
      uVar16 = 0;
      local_1c = 0;
      if (local_10 != 0) {
        do {
          if (local_5 == false) {
            iVar3 = *(int *)((int)this_00 + 0x1c97);
            if ((int)(uVar16 + 1) < *(int *)(iVar3 + 8)) {
              pcVar13 = *(char **)(*(int *)(iVar3 + 0x14) + 4 + uVar16 * 4);
            }
            else {
              pcVar13 = (char *)0x0;
            }
            if ((int)uVar16 < *(int *)(iVar3 + 8)) {
              pcVar9 = *(char **)(*(int *)(iVar3 + 0x14) + uVar16 * 4);
            }
            else {
              pcVar9 = (char *)0x0;
            }
            iVar3 = __strcmpi(pcVar9,pcVar13);
            if (0 < iVar3) {
              iVar3 = *(int *)((int)this_00 + 0x1c97);
              goto LAB_005b06e8;
            }
          }
          else {
            FUN_006acc70(*(int *)((int)this_00 + 0x1c9b),uVar16,&local_3c.dwLowDateTime);
            FUN_006acc70(*(int *)((int)this_00 + 0x1c9b),uVar16 + 1,&local_44.dwLowDateTime);
            LVar8 = CompareFileTime(&local_3c,&local_44);
            if (LVar8 < 0) {
              FUN_006b0cd0(*(int *)((int)this_00 + 0x1c9b),uVar16,uVar16 + 1);
              iVar3 = *(int *)((int)this_00 + 0x1c97);
LAB_005b06e8:
              FUN_006b8200(iVar3,uVar16,uVar16 + 1);
              local_1c = 1;
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar16 = *(int *)(*(int *)((int)this_00 + 0x1c9f) + 8) +
           *(int *)(*(int *)((int)this_00 + 0x1c97) + 8);
  *(undefined4 *)((int)this_00 + 0x2d) = 0x28;
  *(uint *)((int)this_00 + 0x31) = uVar16;
  FUN_006e6080(this_00,2,*(undefined4 *)((int)this_00 + 0x1a6c),(undefined4 *)((int)this_00 + 0x1d))
  ;
  *(undefined4 *)((int)this_00 + 0x2d) = 0x20;
  *(undefined4 *)((int)this_00 + 0x31) = 1;
  FUN_006e6080(this_00,2,*(undefined4 *)((int)this_00 + 0x1a6c),(undefined4 *)((int)this_00 + 0x1d))
  ;
  *(undefined4 *)((int)this_00 + 0x2d) = 0x22;
  if (uVar16 <= param_1) {
    param_1 = uVar16 - 1;
  }
  *(uint *)((int)this_00 + 0x31) = param_1;
  uVar22 = *(undefined4 *)((int)this_00 + 0x1a6c);
LAB_005b07ac:
  FUN_006e6080(this_00,2,uVar22,(undefined4 *)((int)this_00 + 0x1d));
  *(undefined4 *)((int)this_00 + 0x1a64) = 1;
  *(undefined4 *)((int)this_00 + 0x1a68) = *(undefined4 *)((int)this_00 + 0x61);
  DAT_00858df8 = (undefined4 **)local_a4;
  return;
}

