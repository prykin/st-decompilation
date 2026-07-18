
void FUN_005061c0(int param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  uint *puVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 extraout_ECX;
  uint uVar10;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char cVar11;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  UINT UVar12;
  void *unaff_EDI;
  undefined4 uVar13;
  char *pcVar14;
  uint *puVar15;
  HINSTANCE pHVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 *local_64;
  undefined4 local_60 [16];
  void *local_20;
  byte *local_1c;
  uint local_18;
  undefined4 local_14;
  int *local_10;
  ushort *local_c;
  UINT local_8;
  
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  iVar3 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = local_64;
    iVar9 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x348,0,iVar3,&DAT_007a4ccc);
    if (iVar9 == 0) {
      FUN_006a5e40(iVar3,0,0x7c2700,0x348);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == 0) goto switchD_00506214_caseD_2;
  switch(*(undefined1 *)((int)local_20 + 0xbfa)) {
  case 0:
  case 3:
  case 4:
    pbVar5 = *(byte **)((int)local_20 + 0x9d9);
    puVar17 = *(undefined4 **)((int)local_20 + 0x194);
    iVar9 = 0;
    iVar3 = 0;
    goto LAB_0050633b;
  case 1:
    if (*(char *)((int)local_20 + 0xbfb) == '\x02') {
      pbVar5 = *(byte **)((int)local_20 + 0x9dd);
      puVar17 = *(undefined4 **)((int)local_20 + 0x194);
      iVar9 = 0;
      iVar3 = 0;
      goto LAB_0050633b;
    }
    break;
  default:
    goto switchD_00506214_caseD_2;
  }
  switch(*(undefined4 *)((int)local_20 + 0xbf5)) {
  case 0x32:
  case 0x3c:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4e:
  case 0x51:
  case 0x52:
    pbVar5 = *(byte **)((int)local_20 + 0x9e5);
    goto LAB_005062d5;
  case 0x33:
  case 0x35:
  case 0x37:
  case 0x3a:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x4c:
    pbVar5 = *(byte **)((int)local_20 + 0x9e1);
LAB_005062d5:
    puVar17 = *(undefined4 **)((int)local_20 + 0x194);
    break;
  case 0x34:
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x3d:
  case 0x41:
  case 0x48:
  case 0x4d:
  case 0x4f:
  case 0x50:
  case 0x6f:
    pbVar5 = *(byte **)((int)local_20 + 0x9dd);
    puVar17 = *(undefined4 **)((int)local_20 + 0x194);
    break;
  case 0x36:
    if (*(char *)((int)local_20 + 0xbf9) == '\x01') {
      pbVar5 = *(byte **)((int)local_20 + 0x9e5);
      puVar17 = *(undefined4 **)((int)local_20 + 0x194);
    }
    else {
      if (*(char *)((int)local_20 + 0xbf9) != '\x02') goto switchD_00506270_caseD_53;
      pbVar5 = *(byte **)((int)local_20 + 0x9e1);
      puVar17 = *(undefined4 **)((int)local_20 + 0x194);
    }
    break;
  default:
    goto switchD_00506270_caseD_53;
  }
  thunk_FUN_00540760(puVar17,0,0,'\x01',pbVar5);
switchD_00506270_caseD_53:
  switch(*(undefined4 *)((int)local_20 + 0xbf5)) {
  case 0x36:
    if (*(char *)((int)local_20 + 0xbf9) == '\x01') {
      pbVar5 = *(byte **)((int)local_20 + 0x9e9);
      puVar17 = *(undefined4 **)((int)local_20 + 0x194);
      iVar9 = 0x35;
      iVar3 = 0xc;
      goto LAB_0050633b;
    }
    break;
  case 0x3e:
  case 0x3f:
  case 0x42:
  case 0x46:
  case 0x47:
  case 0x4a:
  case 0x4b:
  case 0x51:
    pbVar5 = *(byte **)((int)local_20 + 0x9e9);
    puVar17 = *(undefined4 **)((int)local_20 + 0x194);
    iVar9 = 0x35;
    iVar3 = 0xc;
LAB_0050633b:
    thunk_FUN_00540760(puVar17,iVar3,iVar9,'\x01',pbVar5);
  }
switchD_00506214_caseD_2:
  if (*(char *)((int)local_20 + 0xbfa) != '\x01') {
    if (*(char *)((int)local_20 + 0xbfa) == '\x04') {
      switch(*(undefined4 *)((int)local_20 + 0xbf5)) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfe:
        iVar3 = ((*(undefined4 **)((int)local_20 + 0x194))[1] -
                *(int *)(*(byte **)((int)local_20 + 0x9ed) + 4)) / 2;
        thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3,0x50,'\x01',
                           *(byte **)((int)local_20 + 0x9ed));
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2d2),
                                      (uint)*(byte *)((int)local_20 + 0xc11));
        thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3 + 3,0x53,'\x01',pbVar5);
        pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)local_20 + 0x9ed),0,0x49,7,0x67,0xc,0);
        if (pbVar5 != (byte *)0x0) {
          if (*(int *)((int)local_20 + 0xbf5) == 0xfe) {
            local_8 = thunk_FUN_00529480(*(undefined1 *)((int)local_20 + 0xc11));
          }
          else {
            local_8 = thunk_FUN_005293f0(*(int *)((int)local_20 + 0xbf5));
          }
          bVar2 = thunk_FUN_00529500(local_8);
          uVar13 = CONCAT31(extraout_var,bVar2);
          iVar18 = -1;
          iVar9 = -1;
          puVar7 = (uint *)FUN_006b0140(local_8,DAT_00807618);
          FUN_007119c0(puVar7,iVar9,iVar18,uVar13);
          thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3 + 0x49,0x57,'\x01',pbVar5
                            );
          FUN_00710f00();
        }
        local_1c = (byte *)FUN_00710ba0(*(int *)((int)local_20 + 0x9ed),0,100,0x14,0x3c,0x14,0);
        if (local_1c != (byte *)0x0) {
          uVar13 = 0;
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c2744,*(undefined4 *)((int)local_20 + 0xc12));
          switch(*(undefined1 *)((int)local_20 + 0xc11)) {
          case 0:
            uVar13 = 0;
            break;
          case 1:
            uVar13 = 2;
            break;
          case 2:
            uVar13 = 1;
            break;
          case 3:
            uVar13 = 7;
            break;
          case 4:
            uVar13 = 3;
          }
          FUN_007119c0(&DAT_0080f33a,-1,-1,uVar13);
          thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3 + 100,100,'\x01',local_1c
                            );
          FUN_00710f00();
        }
        break;
      case 0xfd:
        iVar3 = ((*(undefined4 **)((int)local_20 + 0x194))[1] -
                *(int *)(*(byte **)((int)local_20 + 0xa11) + 4)) / 2;
        thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3,0x3f,'\x01',
                           *(byte **)((int)local_20 + 0xa11));
        bVar2 = *(byte *)((int)local_20 + 0xc11);
        if ((bVar2 != 0) && (bVar2 < 0x16)) {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2ce),bVar2 - 1);
          thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3 + 6,0x44,'\x01',pbVar5);
        }
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2ca),10);
        thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3 + 4,0x42,'\x06',pbVar5);
        pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)local_20 + 0xa11),0,0x38,4,0x7b,0x19,0);
        if (pbVar5 != (byte *)0x0) {
          iVar20 = -1;
          iVar19 = -1;
          uVar13 = 0;
          iVar18 = -1;
          iVar9 = -2;
          pHVar16 = DAT_00807618;
          UVar12 = thunk_FUN_00525290(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                               *(undefined1 *)((int)local_20 + 0xc11)));
          puVar7 = (uint *)FUN_006b0140(UVar12,pHVar16);
          FUN_00711b70(puVar7,iVar9,iVar18,uVar13,iVar19,iVar20);
          thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3 + 0x38,0x43,'\x01',pbVar5
                            );
          FUN_00710f00();
        }
        pbVar5 = (byte *)FUN_00710ba0(*(int *)((int)local_20 + 0xa11),0,2,0x1e,0xb2,0x22,0);
        if (pbVar5 != (byte *)0x0) {
          FUN_00711b70(*(uint **)((int)local_20 + 0xc16),-2,-1,1,-1,-1);
          thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3 + 2,0x5d,'\x01',pbVar5);
          FUN_00710f00();
        }
      }
    }
    goto switchD_00506377_caseD_df;
  }
  if (*(char *)((int)local_20 + 0xbfb) == '\x02') {
    UVar12 = ((*(undefined4 **)((int)local_20 + 0x194))[1] -
             *(int *)(*(byte **)((int)local_20 + 0x9ed) + 4)) / 2;
    local_8 = UVar12;
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),UVar12,0x50,'\x01',
                       *(byte **)((int)local_20 + 0x9ed));
    if (*(int *)((int)local_20 + 0xc12) != 0) {
      uVar4 = thunk_FUN_00526ba0(*(int *)((int)local_20 + 0xc12),*(char *)((int)local_20 + 0xc1a));
      pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2c2),uVar4);
      thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),UVar12 + 6,0x5d,'\x01',pbVar5);
      FUN_006b4170(*(int *)((int)local_20 + 0x194),0,UVar12 + 0x36,0x5d,7,0x21,0);
      UVar12 = local_8;
      bVar2 = *(byte *)((int)local_20 + 0xc24);
      local_1c = (byte *)CONCAT31(local_1c._1_3_,bVar2);
      cVar11 = (char)(((uint)bVar2 * 0x21) / 100);
      local_10 = (int *)CONCAT31(local_10._1_3_,cVar11);
      if ((bVar2 != 0) && (cVar11 == '\0')) {
        local_10 = (int *)CONCAT31(local_10._1_3_,1);
      }
      if (bVar2 < 0x46) {
        iVar3 = (-(uint)(bVar2 < 0x14) & 5) + 5;
      }
      else {
        iVar3 = 0;
      }
      uVar4 = (uint)local_10 & 0xff;
      FUN_006b55f0(*(undefined4 **)((int)local_20 + 0x194),0,local_8 + 0x37,0x7e - uVar4,
                   *(int *)((int)local_20 + 0x28a),0,iVar3,
                   *(int *)(*(int *)((int)local_20 + 0x28a) + 8) - uVar4,5,uVar4);
      pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2ca),1);
      thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),UVar12 + 5,0x5c,'\x06',pbVar5);
      FUN_00710a90(*(int *)((int)local_20 + 0x194),0,UVar12 + 2,0x52,0xb2,10);
      pHVar16 = DAT_00807618;
      UVar12 = thunk_FUN_00523410(*(undefined4 *)((int)local_20 + 0xc12),
                                  *(char *)((int)local_20 + 0xc1a),0);
      pcVar6 = (char *)FUN_006b0140(UVar12,pHVar16);
      uVar4 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar14 = pcVar6 + 1;
        cVar11 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar11 != '\0');
      uVar4 = ~uVar4;
      puVar7 = (uint *)(pcVar14 + -uVar4);
      puVar15 = (uint *)((int)local_20 + 0x1e1);
      for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar15 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar15 = (char)*puVar7;
        puVar7 = (uint *)((int)puVar7 + 1);
        puVar15 = (uint *)((int)puVar15 + 1);
      }
      for (puVar7 = FUN_0072e560((uint *)((int)local_20 + 0x1e1),'\n'); puVar7 != (uint *)0x0;
          puVar7 = FUN_0072e560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }
      goto LAB_00507034;
    }
    goto switchD_00506878_caseD_3b;
  }
  switch(*(undefined4 *)((int)local_20 + 0xbf5)) {
  case 0x32:
  case 0x40:
  case 0x49:
    UVar12 = ((*(undefined4 **)((int)local_20 + 0x194))[1] -
             *(int *)(*(byte **)((int)local_20 + 0x9ed) + 4)) / 2;
    local_8 = UVar12;
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),UVar12,0x50,'\x01',
                       *(byte **)((int)local_20 + 0x9ed));
    if (*(int *)((int)local_20 + 0xc12) == 0) {
LAB_0050709d:
      FUN_00710a90(*(int *)((int)local_20 + 0x194),0,UVar12 + 2,0x52,0xb2,0x2f);
LAB_005070be:
      uVar13 = 0;
      UVar12 = 0x2713;
      goto LAB_0050777e;
    }
    uVar4 = thunk_FUN_00526ba0(*(int *)((int)local_20 + 0xc12),*(char *)((int)local_20 + 0xc1a));
    pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2ba),uVar4);
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),UVar12 + 6,0x5d,'\x01',pbVar5);
    if (*(byte *)((int)local_20 + 0xc26) != 0) {
      wsprintfA((LPSTR)((int)local_20 + 0x1e1),&DAT_007c1890,(uint)*(byte *)((int)local_20 + 0xc26))
      ;
      FUN_00710a90(*(int *)((int)local_20 + 0x194),0,UVar12 + 6,0x5d,0x30,0x21);
      FUN_007119c0((uint *)((int)local_20 + 0x1e1),-2,-1,0);
    }
    FUN_006b4170(*(int *)((int)local_20 + 0x194),0,UVar12 + 0x36,0x5d,7,0x21,0);
    UVar12 = local_8;
    bVar2 = *(byte *)((int)local_20 + 0xc24);
    cVar11 = (char)(((uint)bVar2 * 0x21) / 100);
    local_1c = (byte *)CONCAT31(local_1c._1_3_,cVar11);
    if ((bVar2 != 0) && (cVar11 == '\0')) {
      local_1c = (byte *)CONCAT31(local_1c._1_3_,1);
    }
    if (bVar2 < 0x46) {
      iVar3 = (-(uint)(bVar2 < 0x14) & 5) + 5;
    }
    else {
      iVar3 = 0;
    }
    uVar4 = (uint)local_1c & 0xff;
    FUN_006b55f0(*(undefined4 **)((int)local_20 + 0x194),0,local_8 + 0x37,0x7e - uVar4,
                 *(int *)((int)local_20 + 0x28a),0,iVar3,
                 *(int *)(*(int *)((int)local_20 + 0x28a) + 8) - uVar4,5,uVar4);
    pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2ca),1);
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),UVar12 + 5,0x5c,'\x06',pbVar5);
    FUN_00710a90(*(int *)((int)local_20 + 0x194),0,UVar12 + 2,0x52,0xb2,10);
    pHVar16 = DAT_00807618;
    UVar12 = thunk_FUN_00523410(*(undefined4 *)((int)local_20 + 0xc12),
                                *(char *)((int)local_20 + 0xc1a),0);
    pcVar6 = (char *)FUN_006b0140(UVar12,pHVar16);
    uVar4 = 0xffffffff;
    do {
      pcVar14 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar14 = pcVar6 + 1;
      cVar11 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar11 != '\0');
    uVar4 = ~uVar4;
    puVar7 = (uint *)(pcVar14 + -uVar4);
    puVar15 = (uint *)((int)local_20 + 0x1e1);
    for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar15 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar15 = (char)*puVar7;
      puVar7 = (uint *)((int)puVar7 + 1);
      puVar15 = (uint *)((int)puVar15 + 1);
    }
    for (puVar7 = FUN_0072e560((uint *)((int)local_20 + 0x1e1),'\n'); puVar7 != (uint *)0x0;
        puVar7 = FUN_0072e560(puVar7,'\n')) {
      *(undefined1 *)puVar7 = 0x20;
    }
    goto LAB_00507034;
  case 0x33:
    iVar9 = ((*(undefined4 **)((int)local_20 + 0x194))[1] -
            *(int *)(*(byte **)((int)local_20 + 0x9f9) + 4)) / 2;
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar9,0x36,'\x01',
                       *(byte **)((int)local_20 + 0x9f9));
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar9 + 5,0x39,'\x01',
                       *(byte **)((int)local_20 + 0x9fd));
    local_c = (ushort *)((int)local_20 + 0xc1c);
    local_10 = (int *)((int)local_20 + 0xc12);
    local_8 = 0;
    iVar3 = 0x3a;
    do {
      if (*local_10 == 0) {
        FUN_00710a90(*(int *)((int)local_20 + 0x194),0,iVar9 + 2,iVar3 + -2,0xb2,0x2f);
        iVar21 = -1;
        iVar20 = -1;
        uVar13 = 0;
        iVar19 = -1;
        iVar18 = -2;
        puVar7 = (uint *)FUN_006b0140(0x2713,DAT_00807618);
        FUN_00711b70(puVar7,iVar18,iVar19,uVar13,iVar20,iVar21);
      }
      else {
        uVar4 = thunk_FUN_00526ba0(*local_10,*(char *)(local_8 + 0xc1a + (int)local_20));
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2ba),uVar4);
        thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar9 + 6,iVar3,'\x01',pbVar5);
        FUN_006b4170(*(int *)((int)local_20 + 0x194),0,iVar9 + 0x36,iVar3,7,0x21,0);
        bVar2 = *(byte *)(local_8 + 0xc24 + (int)local_20);
        local_14 = CONCAT31(local_14._1_3_,bVar2);
        cVar11 = (char)(((uint)bVar2 * 0x21) / 100);
        local_18 = CONCAT31(local_18._1_3_,cVar11);
        if ((bVar2 != 0) && (cVar11 == '\0')) {
          local_18 = CONCAT31(local_18._1_3_,1);
        }
        if (bVar2 < 0x46) {
          local_1c = (byte *)((-(uint)(bVar2 < 0x14) & 5) + 5);
        }
        else {
          local_1c = (byte *)0x0;
        }
        uVar4 = local_18 & 0xff;
        FUN_006b55f0(*(undefined4 **)((int)local_20 + 0x194),0,iVar9 + 0x37,(iVar3 - uVar4) + 0x21,
                     *(int *)((int)local_20 + 0x28a),0,(int)local_1c,
                     *(int *)(*(int *)((int)local_20 + 0x28a) + 8) - uVar4,5,uVar4);
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2ca),1);
        thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar9 + 5,iVar3 + -1,'\x06',
                           pbVar5);
        thunk_FUN_004f1d90(*(int *)((int)local_20 + 0x194),iVar9 + 0x41,iVar3,
                           CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                    'd' - *(char *)(local_8 + 0xc24 + (int)local_20)),0x36b1);
        thunk_FUN_004f2130(*(int *)((int)local_20 + 0x194),iVar9 + 0x41,iVar3 + 0xb,*local_c,
                           local_c[2],4,2);
      }
      iVar3 = iVar3 + 0x23;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
      local_10 = local_10 + 1;
    } while (iVar3 < 0x80);
    break;
  case 0x34:
    iVar3 = (*(undefined4 **)((int)local_20 + 0x194))[1];
    iVar9 = *(int *)(*(int *)((int)local_20 + 0x9f9) + 4);
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),0x60,0x1f,'\x01',
                       *(byte **)((int)local_20 + 0xa05));
    thunk_FUN_00505230(local_20,(iVar3 - iVar9) / 2);
    break;
  case 0x35:
    iVar3 = ((*(undefined4 **)((int)local_20 + 0x194))[1] -
            *(int *)(*(byte **)((int)local_20 + 0x9ed) + 4)) / 2;
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3,0x50,'\x01',
                       *(byte **)((int)local_20 + 0x9ed));
    if (*(char *)((int)local_20 + 0xc31) != '\0') {
      thunk_FUN_00504b80(iVar3);
      thunk_FUN_005047c0(iVar3);
      break;
    }
    FUN_00710a90(*(int *)((int)local_20 + 0x194),0,iVar3 + 2,0x52,0xb2,0x2f);
    if (*(short *)((int)local_20 + 0xc2f) == 0) goto LAB_005070be;
    uVar13 = FUN_006b0140(0x273c,DAT_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,(uint)*(ushort *)((int)local_20 + 0xc2f),uVar13)
    ;
    iVar19 = -1;
    iVar18 = -1;
    uVar13 = 0;
    iVar9 = -1;
    iVar3 = -2;
    puVar7 = &DAT_0080f33a;
    goto LAB_00507784;
  case 0x36:
  case 0x37:
  case 0x43:
  case 0x45:
  case 0x48:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x6f:
    iVar3 = ((*(undefined4 **)((int)local_20 + 0x194))[1] -
            *(int *)(*(byte **)((int)local_20 + 0x9f5) + 4)) / 2;
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3,0x67,'\x01',
                       *(byte **)((int)local_20 + 0x9f5));
    FUN_00710a90(*(int *)((int)local_20 + 0x194),0,iVar3 + 2,0x69,0xa7,0xc);
    iVar20 = -1;
    iVar19 = -1;
    uVar13 = 0;
    iVar18 = -1;
    iVar9 = -2;
    pHVar16 = DAT_00807618;
    UVar12 = thunk_FUN_00525890(*(undefined4 *)((int)local_20 + 0xbf5));
    puVar7 = (uint *)FUN_006b0140(UVar12,pHVar16);
    FUN_00711b70(puVar7,iVar9,iVar18,uVar13,iVar19,iVar20);
    if (*(byte *)((int)local_20 + 0xc29) != 0xff) {
      if (0x28 < *(byte *)((int)local_20 + 0xc29)) {
        *(undefined1 *)((int)local_20 + 0xc29) = 0x28;
      }
      local_8 = local_8 & 0xffffff00;
      if (*(char *)((int)local_20 + 0xc29) != '\0') {
        do {
          if ((*(int *)((int)local_20 + 0xbf5) != 0x4d) ||
             (iVar9 = 4, *(char *)((int)local_20 + 0xc28) == '\0')) {
            iVar9 = 3;
          }
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2b6),iVar9);
          thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),
                             iVar3 + 6 + (local_8 & 0xff) * 4,0x75,'\x01',pbVar5);
          bVar2 = (byte)local_8 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar2);
        } while (bVar2 < *(byte *)((int)local_20 + 0xc29));
      }
      if ((byte)local_8 < 0x28) {
        iVar9 = 0x28 - (local_8 & 0xff);
        iVar3 = iVar3 + 6 + (local_8 & 0xff) * 4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3,0x75,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    break;
  case 0x38:
  case 0x39:
  case 0x4f:
    thunk_FUN_005044b0((*(int *)(*(int *)((int)local_20 + 0x194) + 4) -
                       *(int *)(*(int *)((int)local_20 + 0x9ed) + 4)) / 2);
    break;
  case 0x3a:
    iVar9 = ((*(undefined4 **)((int)local_20 + 0x194))[1] -
            *(int *)(*(byte **)((int)local_20 + 0x9ed) + 4)) / 2;
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar9,0x50,'\x01',
                       *(byte **)((int)local_20 + 0x9ed));
    iVar3 = iVar9 + 2;
    FUN_00710a90(*(int *)((int)local_20 + 0x194),0,iVar3,0x52,0x69,0xc);
    iVar21 = -1;
    iVar20 = -1;
    uVar13 = 1;
    iVar19 = -1;
    iVar18 = -3;
    puVar7 = (uint *)FUN_006b0140(0x36b7,DAT_00807618);
    FUN_00711b70(puVar7,iVar18,iVar19,uVar13,iVar20,iVar21);
    FUN_00710a90(*(int *)((int)local_20 + 0x194),0,iVar3,0x5d,0x69,0xc);
    iVar21 = -1;
    iVar20 = -1;
    uVar13 = 1;
    iVar19 = -1;
    iVar18 = -3;
    puVar7 = (uint *)FUN_006b0140(0x36b8,DAT_00807618);
    FUN_00711b70(puVar7,iVar18,iVar19,uVar13,iVar20,iVar21);
    FUN_00710a90(*(int *)((int)local_20 + 0x194),0,iVar3,0x69,0xb2,0xc);
    iVar20 = -1;
    iVar19 = -1;
    uVar13 = 1;
    iVar18 = -1;
    iVar3 = -2;
    puVar7 = (uint *)FUN_006b0140(0x36b6,DAT_00807618);
    FUN_00711b70(puVar7,iVar3,iVar18,uVar13,iVar19,iVar20);
    local_8 = local_8 & 0xffffff00;
    if (*(char *)((int)local_20 + 0xc3a) != '\0') {
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2b6),3);
        thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),
                           iVar9 + 0x70 + (local_8 & 0xff) * 4,0x54,'\x01',pbVar5);
        bVar2 = (byte)local_8 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar2);
      } while (bVar2 < *(byte *)((int)local_20 + 0xc3a));
    }
    if ((byte)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar3 = iVar9 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3,0x54,'\x01',pbVar5);
        iVar3 = iVar3 + 4;
        local_1c = local_1c + -1;
      } while (local_1c != (byte *)0x0);
    }
    local_8 = local_8 & 0xffffff00;
    if (*(char *)((int)local_20 + 0xc3b) != '\0') {
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2b6),3);
        thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),
                           iVar9 + 0x70 + (local_8 & 0xff) * 4,0x5f,'\x01',pbVar5);
        bVar2 = (byte)local_8 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar2);
      } while (bVar2 < *(byte *)((int)local_20 + 0xc3b));
    }
    if ((byte)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar3 = iVar9 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3,0x5f,'\x01',pbVar5);
        iVar3 = iVar3 + 4;
        local_1c = (byte *)((int)local_1c + -1);
      } while (local_1c != (byte *)0x0);
    }
    local_8 = local_8 & 0xffffff00;
    local_1c = (byte *)(((uint)*(ushort *)((int)local_20 + 0xc34) * 0x28) / 400);
    if (local_1c != (byte *)0x0) {
      pbVar5 = (byte *)0x0;
      do {
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2b6),2);
        thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar9 + 0xb + (int)pbVar5 * 4,
                           0x76,'\x01',pbVar8);
        bVar2 = (byte)local_8 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar2);
        pbVar5 = (byte *)(uint)bVar2;
      } while (pbVar5 < local_1c);
    }
    if ((byte)local_8 < 0x28) {
      iVar18 = 0x28 - (local_8 & 0xff);
      iVar3 = iVar9 + 0xb + (local_8 & 0xff) * 4;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3,0x76,'\x01',pbVar5);
        iVar3 = iVar3 + 4;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    break;
  case 0x3c:
    iVar3 = ((*(undefined4 **)((int)local_20 + 0x194))[1] -
            *(int *)(*(byte **)((int)local_20 + 0x9ed) + 4)) / 2;
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3,0x50,'\x01',
                       *(byte **)((int)local_20 + 0x9ed));
    switch(*(undefined1 *)((int)local_20 + 0xc3c)) {
    case 0:
      FUN_00710a90(*(int *)((int)local_20 + 0x194),0,iVar3,0x50,
                   *(int *)(*(int *)((int)local_20 + 0x9ed) + 4),
                   *(int *)(*(int *)((int)local_20 + 0x9ed) + 8));
      uVar13 = 1;
      UVar12 = 0x36bb;
      goto LAB_0050777e;
    case 1:
      thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3 + 5,0x65,'\x01',
                         *(byte **)((int)local_20 + 0xa0d));
      FUN_00710a90(*(int *)((int)local_20 + 0x194),0,iVar3 + 2,0x52,0xb2,10);
      iVar20 = -1;
      iVar19 = -1;
      uVar13 = 0;
      iVar18 = -1;
      iVar9 = -2;
      puVar7 = (uint *)FUN_006b0140(0x36bd,DAT_00807618);
      FUN_00711b70(puVar7,iVar9,iVar18,uVar13,iVar19,iVar20);
      thunk_FUN_004f1d90(*(int *)((int)local_20 + 0x194),iVar3 + 0x39,0x65,
                         CONCAT31((int3)((uint)extraout_EDX >> 8),
                                  *(undefined1 *)((int)local_20 + 0xc3d)),0x2714);
      uVar4 = (uint)(*(int *)((int)local_20 + 0xc3d) * 0x28) / 100;
      local_18 = 0;
      if (uVar4 != 0) {
        iVar9 = iVar3 + 0xb;
        local_1c = (byte *)uVar4;
        local_18 = uVar4;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2b6),3);
          thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar9,0x5c,'\x01',pbVar5);
          iVar9 = iVar9 + 4;
          local_1c = (byte *)((int)local_1c - 1);
        } while (local_1c != (byte *)0x0);
        local_1c = (byte *)0x0;
      }
      if (local_18 < 0x28) {
        iVar3 = iVar3 + 0xb + local_18 * 4;
        iVar9 = 0x28 - local_18;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),iVar3,0x5c,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      break;
    case 2:
      FUN_00710a90(*(int *)((int)local_20 + 0x194),0,iVar3,0x54,
                   *(int *)(*(int *)((int)local_20 + 0x9ed) + 4),0x21);
      iVar20 = -1;
      iVar19 = -1;
      uVar13 = 1;
      iVar18 = -1;
      iVar9 = -2;
      puVar7 = (uint *)FUN_006b0140(0x36bc,DAT_00807618);
      FUN_00711b70(puVar7,iVar9,iVar18,uVar13,iVar19,iVar20);
      wsprintfA((LPSTR)((int)local_20 + 0x1e1),&DAT_007c1ae4,*(undefined4 *)((int)local_20 + 0xc3d))
      ;
      FUN_00710a90(*(int *)((int)local_20 + 0x194),0,iVar3,0x71,
                   *(int *)(*(int *)((int)local_20 + 0x9ed) + 4),
                   *(int *)(*(int *)((int)local_20 + 0x9ed) + 8) + -0x21);
      FUN_007119c0((uint *)((int)local_20 + 0x1e1),-1,-1,0);
      break;
    case 3:
      FUN_00710a90(*(int *)((int)local_20 + 0x194),0,iVar3,0x50,
                   *(int *)(*(int *)((int)local_20 + 0x9ed) + 4),
                   *(int *)(*(int *)((int)local_20 + 0x9ed) + 8));
      uVar13 = 1;
      UVar12 = 0x36be;
LAB_0050777e:
      iVar19 = -1;
      iVar18 = -1;
      iVar9 = -1;
      iVar3 = -2;
      puVar7 = (uint *)FUN_006b0140(UVar12,DAT_00807618);
LAB_00507784:
      FUN_00711b70(puVar7,iVar3,iVar9,uVar13,iVar18,iVar19);
    }
    break;
  case 0x44:
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),
                       ((*(undefined4 **)((int)local_20 + 0x194))[1] -
                       *(int *)(*(byte **)((int)local_20 + 0xa01) + 4)) / 2,0x37,'\x01',
                       *(byte **)((int)local_20 + 0xa01));
    UVar12 = ((*(undefined4 **)((int)local_20 + 0x194))[1] -
             *(int *)(*(byte **)((int)local_20 + 0x9ed) + 4)) / 2;
    local_8 = UVar12;
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),UVar12,0x50,'\x01',
                       *(byte **)((int)local_20 + 0x9ed));
    uVar4 = (uint)*(ushort *)((int)local_20 + 0xc34);
    uVar13 = FUN_006b0140(0x2725,DAT_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__1_s__0_d_007c286c,uVar13,uVar4);
    FUN_00710a90(*(int *)((int)local_20 + 0x194),0,0x56,0x39,0x6d,0x15);
    FUN_00711b70(&DAT_0080f33a,-2,-1,0,-1,-1);
    if (*(int *)((int)local_20 + 0xc12) == 0) goto LAB_0050709d;
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),UVar12 + 6,0x5d,'\x01',
                       *(byte **)((int)local_20 + 0xa09));
    FUN_006b4170(*(int *)((int)local_20 + 0x194),0,UVar12 + 0x36,0x5d,7,0x21,0);
    UVar12 = local_8;
    bVar2 = *(byte *)((int)local_20 + 0xc24);
    cVar11 = (char)(((uint)bVar2 * 0x21) / 100);
    local_1c = (byte *)CONCAT31(local_1c._1_3_,cVar11);
    if ((bVar2 != 0) && (cVar11 == '\0')) {
      local_1c = (byte *)CONCAT31(local_1c._1_3_,1);
    }
    if (bVar2 < 0x46) {
      iVar3 = (-(uint)(bVar2 < 0x14) & 5) + 5;
    }
    else {
      iVar3 = 0;
    }
    uVar4 = (uint)local_1c & 0xff;
    FUN_006b55f0(*(undefined4 **)((int)local_20 + 0x194),0,local_8 + 0x37,0x7e - uVar4,
                 *(int *)((int)local_20 + 0x28a),0,iVar3,
                 *(int *)(*(int *)((int)local_20 + 0x28a) + 8) - uVar4,5,uVar4);
    pbVar5 = (byte *)FUN_0070b3a0(*(int *)((int)local_20 + 0x2ca),1);
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),UVar12 + 5,0x5c,'\x06',pbVar5);
    FUN_00710a90(*(int *)((int)local_20 + 0x194),0,UVar12 + 2,0x52,0xb2,10);
    pcVar6 = (char *)FUN_006b0140(0x2b2c,DAT_00807618);
    uVar4 = 0xffffffff;
    do {
      pcVar14 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar14 = pcVar6 + 1;
      cVar11 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar11 != '\0');
    uVar4 = ~uVar4;
    puVar7 = (uint *)(pcVar14 + -uVar4);
    puVar15 = (uint *)((int)local_20 + 0x1e1);
    for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar15 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar15 = (char)*puVar7;
      puVar7 = (uint *)((int)puVar7 + 1);
      puVar15 = (uint *)((int)puVar15 + 1);
    }
    for (puVar7 = FUN_0072e560((uint *)((int)local_20 + 0x1e1),'\n'); puVar7 != (uint *)0x0;
        puVar7 = FUN_0072e560(puVar7,'\n')) {
      *(undefined1 *)puVar7 = 0x20;
    }
LAB_00507034:
    FUN_00711b70((uint *)((int)local_20 + 0x1e1),-2,-1,0,-1,-1);
    iVar3 = local_8 + 0x41;
    thunk_FUN_004f1d90(*(int *)((int)local_20 + 0x194),iVar3,0x5d,
                       CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                                *(undefined1 *)((int)local_20 + 0xc24)),0x2714);
    thunk_FUN_004f2130(*(int *)((int)local_20 + 0x194),iVar3,0x68,*(ushort *)((int)local_20 + 0xc1c)
                       ,*(ushort *)((int)local_20 + 0xc20),4,2);
    break;
  case 0x50:
    thunk_FUN_00540760(*(undefined4 **)((int)local_20 + 0x194),
                       ((*(undefined4 **)((int)local_20 + 0x194))[1] -
                       *(int *)(*(byte **)((int)local_20 + 0x9f9) + 4)) / 2,0x36,'\x01',
                       *(byte **)((int)local_20 + 0x9f9));
  }
switchD_00506878_caseD_3b:
  thunk_FUN_00504e60();
switchD_00506377_caseD_df:
  if (-1 < (int)*(uint *)((int)local_20 + 0x15c)) {
    FUN_006b3640(DAT_008075a8,*(uint *)((int)local_20 + 0x15c),0xffffffff,
                 *(uint *)((int)local_20 + 0x50),*(uint *)((int)local_20 + 0xa8));
  }
  DAT_00858df8 = local_64;
  return;
}

