
/* WARNING: Type propagation algorithm not settling */

void FUN_005bd7a0(undefined1 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  void *pvVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar14;
  int *piVar15;
  char *pcVar16;
  int iVar17;
  char cVar18;
  undefined4 local_6a4 [256];
  undefined1 local_2a4 [516];
  undefined4 **local_a0;
  undefined4 local_9c [16];
  undefined4 **local_5c;
  undefined4 local_58 [16];
  void *local_18;
  undefined4 *local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar3 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = local_5c;
    iVar17 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0xc6,0,iVar3,&DAT_007a4ccc);
    if (iVar17 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7ccec8,0xc6);
    return;
  }
  if (DAT_00802a30 != (void *)0x0) {
    if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
    }
    else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
    }
    thunk_FUN_00544940((int)DAT_00802a30);
  }
  thunk_FUN_0055dbf0(DAT_0080759c,1,0);
  thunk_FUN_005daf20(DAT_0081176c);
  pvVar13 = local_18;
  DAT_0080877e = 1;
  DAT_0080877f = 0;
  *(undefined1 *)((int)local_18 + 0x66) = param_1;
  if (DAT_0080874e == '\x01') {
    puVar4 = &DAT_007ca250;
  }
  else {
    puVar4 = &DAT_007ca248;
    if (DAT_0080874e != '\x02') {
      puVar4 = &DAT_007ca24c;
    }
  }
  wsprintfA((LPSTR)&DAT_0080f33a,s_REPORT__s__c_007ccf6c,puVar4,
            (int)(char)((-(DAT_0080c522 != 0) & 0xfbU) + 0x46));
  iVar3 = FUN_0070a9f0(DAT_00806780,(char *)&DAT_0080f33a,0,1);
  *(int *)((int)pvVar13 + 0x5d) = iVar3;
  FUN_006bc360(iVar3,local_6a4,(int *)0x0);
  *(undefined4 *)(DAT_0081176c + 0x140) = 0x18;
  FUN_00718780((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)(DAT_0081176c + 0x144));
  puVar5 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_STATS_007ccf64,0xffffffff,0,1,0,(undefined4 *)0x0
                       );
  *(ushort **)((int)pvVar13 + 0x7f) = puVar5;
  uVar6 = FUN_0070aa50(DAT_00806780,s_RPT_IND_007ccf58,0,1);
  *(undefined4 *)((int)pvVar13 + 0x6f) = uVar6;
  iVar3 = thunk_FUN_005defe0(*(int *)((int)pvVar13 + 0x5d),(undefined *)0x0,DAT_00807dd9);
  *(int *)((int)pvVar13 + 0x83) = iVar3;
  *(undefined4 *)(iVar3 + 0x58) = 1;
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  uVar6 = thunk_FUN_005df290(*(int *)((int)pvVar13 + 0x5d),(undefined *)0x0,DAT_00807dd9);
  *(undefined4 *)((int)pvVar13 + 0x87) = uVar6;
  *(undefined4 *)(DAT_0081176c + 0x38) = uVar6;
  puVar7 = FUN_0070ceb0(0x19d,DAT_00806780,s_RPT_FNTN_007ccf4c,0);
  *(undefined4 **)((int)pvVar13 + 0x8b) = puVar7;
  puVar7[0x16] = 1;
  puVar7[0x17] = 0;
  iVar3 = 1;
  puVar7 = (undefined4 *)(*(int *)((int)pvVar13 + 0x5d) + 0x28);
  uVar8 = FUN_006b4fe0(*(int *)((int)pvVar13 + 0x5d));
  uVar6 = FUN_006b50c0(0x91,0x28,(uint)*(ushort *)(*(int *)((int)pvVar13 + 0x5d) + 0xe),uVar8,puVar7
                       ,iVar3);
  *(undefined4 *)((int)pvVar13 + 0x77) = uVar6;
  iVar3 = 1;
  puVar7 = (undefined4 *)(*(int *)((int)pvVar13 + 0x5d) + 0x28);
  uVar8 = FUN_006b4fe0(*(int *)((int)pvVar13 + 0x5d));
  uVar6 = FUN_006b50c0(300,0x1e,(uint)*(ushort *)(*(int *)((int)pvVar13 + 0x5d) + 0xe),uVar8,puVar7,
                       iVar3);
  *(undefined4 *)((int)pvVar13 + 0x7b) = uVar6;
  iVar3 = 1;
  puVar7 = (undefined4 *)(*(int *)((int)pvVar13 + 0x5d) + 0x28);
  uVar8 = FUN_006b4fe0(*(int *)((int)pvVar13 + 0x5d));
  iVar3 = FUN_006b50c0(0x2e9,0x15e,(uint)*(ushort *)(*(int *)((int)pvVar13 + 0x5d) + 0xe),uVar8,
                       puVar7,iVar3);
  *(int *)((int)pvVar13 + 0x73) = iVar3;
  FUN_006b4170(iVar3,0,0,0,0x2e9,0x15e,0xff);
  FUN_006b5ee0(*(int *)((int)pvVar13 + 0x73),0,0x2d,0,700,0x15e,0x18,0xd);
  FUN_00718780((int)local_6a4,0,0x100,0x1a,0x10,(undefined4 *)((int)pvVar13 + 0xa3));
  FUN_00718780((int)local_6a4,0,0x100,0x2e,0x10,(undefined4 *)((int)pvVar13 + 0x1a3));
  puVar7 = (undefined4 *)((int)pvVar13 + 0x2c7);
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 **)((int)pvVar13 + 0x323) = (undefined4 *)((int)pvVar13 + 0xa3);
  iVar3 = *(int *)((int)pvVar13 + 0x87);
  *(undefined4 *)((int)pvVar13 + 0x2ef) = *(undefined4 *)((int)pvVar13 + 8);
  *(undefined4 *)((int)pvVar13 + 0x2cf) = *(undefined4 *)((int)pvVar13 + 8);
  *(undefined4 *)((int)pvVar13 + 0x2f3) = 2;
  *(undefined4 *)((int)pvVar13 + 0x2d3) = 2;
  *(undefined4 *)((int)pvVar13 + 0x313) = *(undefined4 *)((int)pvVar13 + 0x5d);
  *(undefined4 *)((int)pvVar13 + 0x31b) = 0x18;
  *(undefined4 *)((int)pvVar13 + 0x317) = 0x4c;
  if (*(int *)(iVar3 + 0xa0) != 0) {
    FUN_00710790(iVar3);
  }
  *(undefined4 *)((int)pvVar13 + 0x30b) = *(undefined4 *)(iVar3 + 0x8a);
  if (*(char *)((int)pvVar13 + 0x66) == '\x01') {
    local_14 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)((int)pvVar13 + 0x347);
    iVar3 = 3;
    do {
      puVar9 = FUN_006ae290((uint *)0x0,0x18,4,0x18);
      *puVar7 = puVar9;
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    pcVar16 = s__s_s_s__s_007ca1ec;
    puVar7 = &DAT_0080f33a;
    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079c0d4,
              &DAT_00807ddd,PTR_s_PL_LOG_0079c0d8);
    local_a0 = DAT_00858df8;
    DAT_00858df8 = &local_a0;
    iVar3 = __setjmp3(local_9c,0,puVar7,pcVar16);
    if (iVar3 == 0) {
      local_14 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
    }
    DAT_00858df8 = local_a0;
    if (local_14 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)local_2a4;
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined1 *)puVar7 = 0;
      uVar8 = 0xffffffff;
      local_2a4[0] = 0xc;
      pcVar16 = PTR_DAT_0079c0dc;
      do {
        pcVar14 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar16 + 1;
        cVar18 = *pcVar16;
        pcVar16 = pcVar14;
      } while (cVar18 != '\0');
      uVar8 = ~uVar8;
      piVar12 = (int *)(pcVar14 + -uVar8);
      piVar15 = (int *)(local_2a4 + 1);
      for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *piVar15 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar15 = piVar15 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(char *)piVar15 = (char)*piVar12;
        piVar12 = (int *)((int)piVar12 + 1);
        piVar15 = (int *)((int)piVar15 + 1);
      }
      local_c = (int *)(local_2a4 + 1);
      FUN_006f12b0(FUN_006f2d10,local_2a4);
      puVar7 = local_14;
      pcVar16 = (char *)FUN_006f2790();
      while (pcVar16 != (char *)0x0) {
        local_10 = 0;
        local_c = (int *)0x0;
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,PTR_DAT_0079c0dc,s__01d_02d_007ccf40);
        iVar3 = FUN_0072ee80(pcVar16,(byte *)&DAT_0080f33a);
        if (((iVar3 == 2) && (local_10 != 0)) && (local_10 < 4)) {
          FUN_006ae1c0(*(uint **)((int)local_18 + local_10 * 4 + 0x343),&local_c);
        }
        pcVar16 = (char *)FUN_006f2790();
      }
      FUN_006f1170(puVar7);
    }
    do {
      local_c = (int *)((int)local_18 + 0x347);
      local_8 = 0;
      local_10 = 3;
      do {
        uVar8 = 0;
        if (*(int *)(*local_c + 0xc) != 1 && -1 < *(int *)(*local_c + 0xc) + -1) {
          do {
            iVar3 = *local_c;
            if (uVar8 < *(uint *)(iVar3 + 0xc)) {
              puVar9 = (uint *)(*(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c));
            }
            else {
              puVar9 = (uint *)0x0;
            }
            uVar10 = uVar8 + 1;
            if (uVar10 < *(uint *)(iVar3 + 0xc)) {
              puVar11 = (uint *)(*(int *)(iVar3 + 8) * uVar10 + *(int *)(iVar3 + 0x1c));
            }
            else {
              puVar11 = (uint *)0x0;
            }
            if (*puVar11 < *puVar9) {
              FUN_006b0cd0(iVar3,uVar8,uVar10);
              local_8 = 1;
            }
            uVar8 = uVar10;
          } while ((int)uVar10 < *(int *)(*local_c + 0xc) + -1);
        }
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    } while (local_8 != 0);
    iVar3 = 2;
    piVar12 = (int *)((int)local_18 + 0x34f);
    do {
      if (*(int *)(*piVar12 + 0xc) != 0) {
        *(char *)((int)local_18 + 0x6a) = (char)iVar3;
      }
      iVar3 = iVar3 + -1;
      piVar12 = piVar12 + -1;
    } while (-1 < iVar3);
    local_10 = 0;
    pvVar13 = local_18;
  }
  else {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,2 - (DAT_0080c522 != 0));
    }
    *(undefined1 *)((int)pvVar13 + 0x67) = 1;
  }
  if (*(void **)(DAT_0081176c + 0x2e6) != (void *)0x0) {
    thunk_FUN_005b8c70(*(void **)(DAT_0081176c + 0x2e6),0,0,1);
  }
  thunk_FUN_005c1340(pvVar13,0);
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)((int)pvVar13 + 0x5d));
  local_8 = 0xffffffff;
  FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0x2bd,0x15e,DAT_0081176c + 0x140);
  FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x47,0x46);
  puVar4 = (undefined1 *)FUN_0072e530(0x33);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4[2] = 1;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 3) = 0xffffffff;
    puVar4[1] = 2;
    *(undefined4 *)(puVar4 + 7) = 0;
    *(undefined4 *)(puVar4 + 0xb) = 0;
    *(undefined4 *)(puVar4 + 0xf) = 0;
    *(undefined4 *)(puVar4 + 0x1b) = 1;
    *(undefined4 *)(puVar4 + 0x13) = 1;
    *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
    *(undefined4 *)(puVar4 + 0x27) = 0;
    *(undefined4 *)(puVar4 + 0x23) = 0;
    *(undefined4 *)(puVar4 + 0x2f) = 1;
    *(undefined4 *)(puVar4 + 0x2b) = 1;
  }
  *(undefined1 **)((int)pvVar13 + 0x453) = puVar4;
  if (puVar4 != (undefined1 *)0x0) {
    uVar10 = 0;
    cVar18 = '\x01';
    uVar8 = 0x10;
    iVar17 = 1;
    iVar3 = FUN_006bf9f0(DAT_008075a8,0x47,0x46,0x2bd,0x15e);
    uVar8 = thunk_FUN_005aacb0(2,0x47,0x46,iVar3,iVar17,uVar8,cVar18,uVar10);
    if (uVar8 != 0) {
      iVar3 = *(int *)((int)pvVar13 + 0x453);
      *(undefined1 *)(iVar3 + 2) = 1;
      *(undefined4 *)(iVar3 + 0x17) = *(undefined4 *)(iVar3 + 0x13);
      uVar8 = *(uint *)(*(int *)((int)pvVar13 + 0x453) + 3);
      if (-1 < (int)uVar8) {
        FUN_006b3af0(DAT_008075a8,uVar8);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0(DAT_008075a8,local_8);
    local_8 = 0xffffffff;
  }
  FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x401217,0x2e9,0x32,(uint)pvVar13);
  FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x1a,10);
  puVar4 = (undefined1 *)FUN_0072e530(0x33);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4[2] = 1;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 3) = 0xffffffff;
    puVar4[1] = 2;
    *(undefined4 *)(puVar4 + 7) = 0;
    *(undefined4 *)(puVar4 + 0xb) = 0;
    *(undefined4 *)(puVar4 + 0xf) = 0;
    *(undefined4 *)(puVar4 + 0x1b) = 1;
    *(undefined4 *)(puVar4 + 0x13) = 1;
    *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
    *(undefined4 *)(puVar4 + 0x27) = 0;
    *(undefined4 *)(puVar4 + 0x23) = 0;
    *(undefined4 *)(puVar4 + 0x2f) = 1;
    *(undefined4 *)(puVar4 + 0x2b) = 1;
  }
  *(undefined1 **)((int)pvVar13 + 0x457) = puVar4;
  if (puVar4 != (undefined1 *)0x0) {
    uVar10 = 0;
    cVar18 = '\x01';
    uVar8 = 0x10;
    iVar17 = 1;
    iVar3 = FUN_006bf9f0(DAT_008075a8,0x1a,10,0x2e9,0x32);
    uVar8 = thunk_FUN_005aacb0(3,0x1a,10,iVar3,iVar17,uVar8,cVar18,uVar10);
    if (uVar8 != 0) {
      iVar3 = *(int *)((int)pvVar13 + 0x457);
      *(undefined1 *)(iVar3 + 2) = 1;
      *(undefined4 *)(iVar3 + 0x17) = *(undefined4 *)(iVar3 + 0x13);
      uVar8 = *(uint *)(*(int *)((int)pvVar13 + 0x457) + 3);
      if (-1 < (int)uVar8) {
        FUN_006b3af0(DAT_008075a8,uVar8);
      }
    }
  }
  if (local_8 != 0xffffffff) {
    FUN_006b3bb0(DAT_008075a8,local_8);
  }
  *(undefined1 *)((int)pvVar13 + 0x65) = 3;
  thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)((int)pvVar13 + 0x5d),10,2);
  pcVar16 = *(char **)((int)pvVar13 + 0x457);
  if (((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) && (-1 < (int)*(uint *)(pcVar16 + 3))) {
    FUN_006b3430(DAT_008075a8,*(uint *)(pcVar16 + 3));
  }
  pcVar16 = *(char **)((int)pvVar13 + 0x453);
  if (((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) && (-1 < (int)*(uint *)(pcVar16 + 3))) {
    FUN_006b3430(DAT_008075a8,*(uint *)(pcVar16 + 3));
  }
  pvVar13 = DAT_00802a30;
  if (DAT_00802a30 != (void *)0x0) {
    uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
    uVar1 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
    *(undefined1 *)((int)DAT_00802a30 + 0x493) = 3;
    *(undefined2 *)((int)pvVar13 + 0x494) = 0xffff;
    thunk_FUN_0054bf40(0,uVar1,uVar6);
    thunk_FUN_00543c90(pvVar13,*(int *)((int)pvVar13 + 0xc5),*(int *)((int)pvVar13 + 0xc9));
    *(undefined1 *)((int)pvVar13 + 0xd2) = 0;
    *(undefined4 *)((int)pvVar13 + 0x4df) = 0xffffffff;
  }
  thunk_FUN_00568bc0(&DAT_00807658,0);
  if ((DAT_00807300._1_1_ & 8) != 0) {
    thunk_FUN_0056a130(&DAT_00807658,0x14,'\x02',0,(uint *)0x0);
  }
  DAT_00858df8 = local_5c;
  return;
}

