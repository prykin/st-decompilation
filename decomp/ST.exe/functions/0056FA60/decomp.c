
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0056fa60(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  void *pvVar6;
  DWORD DVar7;
  char *pcVar8;
  undefined4 *puVar9;
  HANDLE pvVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined4 unaff_ESI;
  int *piVar15;
  LPSTR pCVar16;
  byte *pbVar17;
  char *pcVar18;
  undefined4 *puVar19;
  void *unaff_EDI;
  int *piVar20;
  LPSTR pCVar21;
  CHAR *pCVar22;
  uint uVar23;
  byte *pbVar24;
  undefined4 *puVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  _WIN32_FIND_DATAA local_68c;
  byte local_54c [256];
  byte local_44c [256];
  byte local_34c [256];
  byte local_24c [256];
  undefined4 ***local_14c;
  undefined4 local_148 [16];
  undefined4 ***local_108;
  undefined4 local_104 [16];
  undefined1 local_c4 [12];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 ***local_a4;
  undefined4 local_a0 [16];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44 [8];
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  byte local_14 [4];
  int local_10;
  uint *local_c;
  byte *local_8;
  
  local_a4 = DAT_00858df8;
  DAT_00858df8 = &local_a4;
  iVar5 = __setjmp3(local_a0,0,unaff_EDI,unaff_ESI);
  piVar11 = local_18;
  if (iVar5 != 0) {
    DAT_00858df8 = local_a4;
    iVar14 = FUN_006ad4d0(s_E____titans_tapp_cpp_007ca0c8,0x890,0,iVar5,&DAT_007a4ccc);
    if (iVar14 == 0) {
      FUN_006a5e40(iVar5,0,0x7ca0c8,0x891);
      return 0xffff;
    }
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return uVar12;
  }
  FUN_006e5150(local_18,param_1);
  pvVar6 = DAT_00802a30;
  uVar23 = *(uint *)(param_1 + 0x10);
  if (uVar23 < 0x6120) {
    if (uVar23 == 0x611f) {
switchD_0056fad2_caseD_6105:
      DAT_0080674c = 0;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar6);
      thunk_FUN_0056d740(0);
      if (DAT_0081176c == (int *)0x0) {
        pvVar6 = (void *)FUN_0072e530(0x6b6);
        if (pvVar6 != (void *)0x0) {
          thunk_FUN_005da610(pvVar6,piVar11);
        }
        (**(code **)*DAT_0081176c)();
        FUN_006e4650(DAT_0081176c,0);
      }
      else {
        FUN_006e47e0(DAT_0081176c,0);
      }
      if (*(int *)(param_1 + 0x10) != 0x6122) {
        *(char *)((int)DAT_0081176c + 0x2eb) = (*(int *)(param_1 + 0x14) == 2) + '\x01';
      }
      uVar12 = *(undefined4 *)(param_1 + 0x18);
      piVar11 = local_44;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar11 = 0;
        piVar11 = piVar11 + 1;
      }
      local_44[5] = *(undefined4 *)(param_1 + 0x14);
      local_44[3] = 0;
      local_44[4] = *(undefined4 *)(param_1 + 0x10);
      local_44[2] = 0x200;
      local_44[6] = uVar12;
      FUN_006e3db0((int)local_44);
      DAT_00858df8 = local_a4;
      return 0;
    }
    switch(uVar23) {
    case 0x60ff:
      if (*(int *)((int)piVar11 + 0xfc3) != 0) {
        FUN_006c1e20();
        puVar9 = (undefined4 *)((int)piVar11 + 0xe43);
        for (iVar5 = 0x60; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
      }
      pvVar6 = DAT_00802a30;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar6);
      if (DAT_0081176c != (int *)0x0) {
        FUN_006e4b80(piVar11,(int)DAT_0081176c);
      }
      uVar23 = 0xffffffff;
      pcVar8 = &DAT_008016a0;
      do {
        pcVar18 = pcVar8;
        if (uVar23 == 0) break;
        uVar23 = uVar23 - 1;
        pcVar18 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar1 != '\0');
      uVar23 = ~uVar23;
      pcVar8 = pcVar18 + -uVar23;
      pcVar18 = (char *)((int)piVar11 + 0x7a02);
      for (uVar13 = uVar23 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
        *pcVar18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar18 = pcVar18 + 1;
      }
      thunk_FUN_0056d370();
      thunk_FUN_0056db80();
      bVar3 = *(byte *)(piVar11 + 0x460);
      if ((bVar3 < 9) || ((0xc < bVar3 && (bVar3 != 0x10)))) {
        puVar9 = (undefined4 *)((int)piVar11 + 0x1196);
        puVar19 = (undefined4 *)((int)piVar11 + 0x2b2f);
        for (iVar5 = 0x666; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar19 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar19 = puVar19 + 1;
        }
        *(undefined1 *)puVar19 = *(undefined1 *)puVar9;
        piVar11[0x1132] = *(int *)((int)piVar11 + 0x4f0a);
        piVar15 = (int *)((int)piVar11 + 0x6e1b);
        piVar20 = piVar11 + 0x1133;
        for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar20 = *piVar15;
          piVar15 = piVar15 + 1;
          piVar20 = piVar20 + 1;
        }
        piVar15 = (int *)((int)&DAT_007f510b + (uint)DAT_0080874d * 0xa62);
        piVar20 = piVar11 + 0x1233;
        for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar20 = *piVar15;
          piVar15 = piVar15 + 1;
          piVar20 = piVar20 + 1;
        }
        piVar15 = (int *)((int)&DAT_007f511f + (uint)DAT_0080874d * 0xa62);
        piVar20 = piVar11 + 0x1238;
        for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar20 = *piVar15;
          piVar15 = piVar15 + 1;
          piVar20 = piVar20 + 1;
        }
        piVar15 = (int *)((int)&DAT_007f5147 + (uint)DAT_0080874d * 0xa62);
        piVar20 = piVar11 + 0x123d;
        for (iVar5 = 0x9b; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar20 = *piVar15;
          piVar15 = piVar15 + 1;
          piVar20 = piVar20 + 1;
        }
        piVar15 = (int *)((int)&DAT_007f53b3 + (uint)DAT_0080874d * 0xa62);
        piVar20 = piVar11 + 0x12d8;
        for (iVar5 = 0x6a; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar20 = *piVar15;
          piVar15 = piVar15 + 1;
          piVar20 = piVar20 + 1;
        }
        piVar15 = (int *)((int)&DAT_007f555b + (uint)DAT_0080874d * 0xa62);
        piVar11 = piVar11 + 0x1342;
        for (iVar5 = 0x26; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar11 = *piVar15;
          piVar15 = piVar15 + 1;
          piVar11 = piVar11 + 1;
        }
        *(short *)piVar11 = (short)*piVar15;
        *(undefined1 *)((int)piVar11 + 2) = *(undefined1 *)((int)piVar15 + 2);
        DAT_00858df8 = local_a4;
        return 0;
      }
      break;
    case 0x6100:
      DAT_0080674c = 0;
      if (*(int *)((int)piVar11 + 0xfc3) != 0) {
        FUN_006c1e20();
        puVar9 = (undefined4 *)((int)piVar11 + 0xe43);
        for (iVar5 = 0x60; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
      }
      thunk_FUN_005713b0((int)piVar11);
      iVar5 = FUN_006e51b0((int)piVar11);
      piVar11[0x44d] = iVar5;
      pvVar6 = DAT_00802a30;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar6);
      thunk_FUN_005711d0(piVar11,&DAT_0081163c);
      thunk_FUN_0056d580();
      if (DAT_0081176c != (int *)0x0) {
        FUN_006e4b80(piVar11,(int)DAT_0081176c);
      }
      if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
      }
      else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
      }
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
      thunk_FUN_0056d740(0);
      uVar23 = 0xffffffff;
      pcVar8 = (char *)((int)piVar11 + 0x77fa);
      do {
        pcVar18 = pcVar8;
        if (uVar23 == 0) break;
        uVar23 = uVar23 - 1;
        pcVar18 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar1 != '\0');
      uVar23 = ~uVar23;
      pcVar8 = pcVar18 + -uVar23;
      pcVar18 = (char *)((int)piVar11 + 0x76f6);
      for (uVar13 = uVar23 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
        *pcVar18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar18 = pcVar18 + 1;
      }
      thunk_FUN_0056d370();
      thunk_FUN_0056db80();
      DAT_00858df8 = local_a4;
      return 0;
    case 0x6102:
    case 0x6103:
    case 0x6104:
    case 0x610a:
switchD_0056fad2_caseD_6102:
      DAT_0080674c = 0;
      thunk_FUN_0056d740(0);
      if (*(int *)((int)piVar11 + 0xfc3) != 0) {
        FUN_006c1e20();
        puVar9 = (undefined4 *)((int)piVar11 + 0xe43);
        for (iVar5 = 0x60; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
      }
      thunk_FUN_005713b0((int)piVar11);
      pvVar6 = DAT_00802a30;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar6);
      thunk_FUN_005711d0(piVar11,&DAT_0081163c);
      thunk_FUN_0056d580();
      if (DAT_0081176c == (int *)0x0) {
        pvVar6 = (void *)FUN_0072e530(0x6b6);
        if (pvVar6 != (void *)0x0) {
          thunk_FUN_005da610(pvVar6,piVar11);
        }
        (**(code **)*DAT_0081176c)();
        FUN_006e4650(DAT_0081176c,0);
      }
      else {
        FUN_006e47e0(DAT_0081176c,0);
      }
      piVar11 = local_44;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar11 = 0;
        piVar11 = piVar11 + 1;
      }
      local_44[3] = 0;
      local_44[4] = *(int *)(param_1 + 0x10);
      local_44[2] = 0x200;
      if (local_44[4] != 0x6103) {
        if (local_44[4] == 0x6104) {
          local_44[6] = *(undefined4 *)(param_1 + 0x18);
        }
        else if (local_44[4] != 0x610a) {
          FUN_006e3db0((int)local_44);
          DAT_00858df8 = local_a4;
          return 0;
        }
      }
      local_44[5] = *(undefined4 *)(param_1 + 0x14);
      FUN_006e3db0((int)local_44);
      DAT_00858df8 = local_a4;
      return 0;
    case 0x6105:
      goto switchD_0056fad2_caseD_6105;
    case 0x6106:
      bVar3 = *(byte *)((int)piVar11 + 0x112d);
      *(undefined1 *)((uint)bVar3 * 0x51 + 0x11a7 + (int)piVar11) = 1;
      *(undefined1 *)((int)piVar11 + 0x112d) = *(undefined1 *)(param_1 + 0x16);
      *(undefined1 *)((int)piVar11 + 0x112e) = *(undefined1 *)(param_1 + 0x14);
      *(undefined1 *)((uint)*(byte *)((int)piVar11 + 0x112d) * 0x51 + 0x11a7 + (int)piVar11) = 0;
      if (DAT_00802a38 != (int *)0x0) {
        FUN_006e57b0(DAT_00802a38,0x121);
        (**(code **)(*DAT_00802a38 + 8))(0x121,0,0,0,0);
        local_b8 = 0xf;
        local_b4 = 0x4405;
        (**(code **)(*DAT_00802a38 + 0x18))(local_c4);
      }
      if (DAT_00802a28 != 0) {
        thunk_FUN_005711d0(piVar11,&DAT_00802a28);
      }
      thunk_FUN_00542d80();
      if (DAT_007fa174 != 0) {
        thunk_FUN_0042a9f0(bVar3);
        DAT_00858df8 = local_a4;
        return 0;
      }
      break;
    case 0x6107:
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
      if (DAT_00802a28 != 0) {
        thunk_FUN_005711d0(piVar11,&DAT_00802a28);
      }
      thunk_FUN_0056d740(_DAT_00807348 & 0xff);
      pvVar6 = DAT_00802a30;
      uVar23 = _DAT_00807348 & 0xff;
      *(undefined4 *)((int)DAT_00802a30 + 0x4b2) = (&DAT_00807568)[uVar23 * 4];
      *(undefined4 *)((int)pvVar6 + 0x4b6) = (&DAT_0080756c)[uVar23 * 4];
      *(undefined4 *)((int)pvVar6 + 0x4ba) = (&DAT_00807570)[uVar23 * 4];
      *(undefined4 *)((int)pvVar6 + 0x4be) = (&DAT_00807574)[uVar23 * 4];
      if (DAT_007fb2a0 != 0) {
        thunk_FUN_004a9540(_DAT_00807348 & 0xff);
        FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,&local_60);
        if (DAT_00801688 != 0) {
          thunk_FUN_004a9b60(local_60,local_5c,local_58,
                             local_54 -
                             ((-(uint)(*(short *)(DAT_00801688 + 0x23f) != 1) & 0xffffff65) + 0x9b))
          ;
        }
      }
      thunk_FUN_00542d80();
      if ((DAT_0081163c != 0) && (*(int *)(param_1 + 0x14) == 0)) {
        thunk_FUN_00577690(DAT_0081163c);
        DAT_00858df8 = local_a4;
        return 0;
      }
      break;
    case 0x6108:
      bVar26 = true;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar6);
      piVar15 = local_44;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar15 = 0;
        piVar15 = piVar15 + 1;
      }
      bVar3 = *(byte *)((int)piVar11 + 0x6ce1);
      bVar2 = *(byte *)(piVar11 + 0x1b38);
      local_44[4] = 0x6102;
      if (((bVar2 <= bVar3) && (*(byte *)((int)piVar11 + 0x6ce2) <= bVar3)) && (bVar3 != 0)) {
        bVar26 = false;
        local_44[4] = 0x6103;
        local_44[5] = 0;
        *(undefined1 *)((int)piVar11 + 0x6ce1) = 0;
      }
      if (bVar26) {
        bVar26 = true;
        if (((*(byte *)((int)piVar11 + 0x6ce1) < bVar2) &&
            (*(byte *)((int)piVar11 + 0x6ce2) <= bVar2)) && (bVar2 != 0)) {
          local_44[4] = 0x6104;
          local_44[5] = 1;
          *(undefined1 *)(piVar11 + 0x1b38) = 0;
          bVar26 = false;
        }
        if (bVar26) {
          bVar3 = *(byte *)((int)piVar11 + 0x6ce2);
          bVar26 = true;
          if ((*(byte *)((int)piVar11 + 0x6ce1) < bVar3) && (*(byte *)(piVar11 + 0x1b38) < bVar3)) {
            if ((DAT_00807330 & 2) == 0) {
              *(undefined1 *)((int)piVar11 + 0x6ce2) = 0;
            }
            else if (bVar3 != 0) {
              local_44[4] = 0x7101;
              local_44[5] = 4;
              *(undefined1 *)((int)piVar11 + 0x6ce2) = 0;
              bVar26 = false;
            }
          }
          if ((((bVar26) && (*(char *)((int)piVar11 + 0x6ce1) == '\0')) &&
              ((char)piVar11[0x1b38] == '\0')) &&
             ((*(char *)((int)piVar11 + 0x6ce2) == '\0' &&
              (*(char *)((int)piVar11 + 0x5012) != '\0')))) {
            wsprintfA((LPSTR)((int)piVar11 + 0x76f6),&DAT_007c6ee4,piVar11 + 0x18,
                      (int)piVar11 + 0x5012);
            wsprintfA((LPSTR)((int)piVar11 + 0x78fe),&DAT_007a4ccc,(int)piVar11 + 0x5012);
            uVar23 = 0xffffffff;
            pCVar16 = (LPSTR)((int)piVar11 + 0x76f6);
            do {
              pCVar21 = pCVar16;
              if (uVar23 == 0) break;
              uVar23 = uVar23 - 1;
              pCVar21 = pCVar16 + 1;
              cVar1 = *pCVar16;
              pCVar16 = pCVar21;
            } while (cVar1 != '\0');
            uVar23 = ~uVar23;
            pCVar16 = pCVar21 + -uVar23;
            pCVar22 = (CHAR *)((int)piVar11 + 0x77fa);
            for (uVar13 = uVar23 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pCVar22 = *(undefined4 *)pCVar16;
              pCVar16 = pCVar16 + 4;
              pCVar22 = pCVar22 + 4;
            }
            for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
              *pCVar22 = *pCVar16;
              pCVar16 = pCVar16 + 1;
              pCVar22 = pCVar22 + 1;
            }
            if (((char)piVar11[0x460] == '\x03') || ((char)piVar11[0x460] == '\v')) {
              *(undefined1 *)(piVar11 + 0x460) = 3;
            }
            else {
              *(undefined1 *)(piVar11 + 0x460) = 8;
            }
            iVar5 = thunk_FUN_0056e9e0(piVar11,1);
            if (iVar5 != 0) {
              local_44[4] = 0x6104;
              local_44[5] = 0;
            }
          }
        }
      }
      if ((local_44[4] == 0x6102) && (DAT_008067a0 != '\0')) {
        if ((DAT_00802a98 == '\0') ||
           (iVar5 = CFsgsConnection::IsInitialized((CFsgsConnection *)&DAT_00802a90), iVar5 == 0)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if (bVar26) {
          local_44[4] = 0x610a;
          local_44[5] = 6;
        }
      }
      iVar5 = *piVar11;
      piVar11 = local_44;
      goto LAB_00570c77;
    }
  }
  else {
    if (uVar23 < 0x7101) {
      if (uVar23 != 0x7100) {
        if (uVar23 != 0x6122) {
          if (uVar23 == 0x6123) goto switchD_0056fad2_caseD_6102;
          if (uVar23 != 0x6124) {
            DAT_00858df8 = local_a4;
            return 0;
          }
        }
        goto switchD_0056fad2_caseD_6105;
      }
      local_8 = (byte *)0x1;
      FUN_006c4110((int)DAT_008075a0);
      if ((*(uint *)((int)DAT_008075a0 + 4) & 0x40000000) != 0) {
        FUN_006c3f00((int)DAT_008075a0);
      }
      local_10 = FUN_006c2a00((LPCSTR)&DAT_00803408);
      if ((local_10 != 0) && (DAT_008075a4 == (int *)0x0)) {
        FUN_006e3db0((int)piVar11 + 0x113a);
        DAT_00858df8 = local_a4;
        return 0;
      }
      if (*(int *)((int)piVar11 + 0xfc3) != 0) {
        FUN_006c1e20();
        puVar9 = (undefined4 *)((int)piVar11 + 0xe43);
        for (iVar5 = 0x60; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
      }
      thunk_FUN_005713b0((int)piVar11);
      pvVar6 = DAT_00802a30;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar6);
      if (DAT_0081176c != (int *)0x0) {
        FUN_006e4b80(piVar11,(int)DAT_0081176c);
      }
      thunk_FUN_005711d0(piVar11,&DAT_0081163c);
      if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
      }
      else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
      }
      FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
      FUN_006bab60((int)DAT_0080759c,0);
      FUN_006bb370((int)DAT_0080759c,0,0);
      local_14c = DAT_00858df8;
      DAT_00858df8 = &local_14c;
      local_4c = __setjmp3(local_148,0,unaff_EDI,unaff_ESI);
      if (local_4c != 0) {
        DAT_00858df8 = local_14c;
        if (local_10 != 0) {
          FUN_006c2c80(DAT_008075a4);
        }
        if (DAT_00806738 != 8) {
          DAT_00806738 = 8;
          FUN_006b9b40(DAT_0080759c,0x10000001,DAT_00806730,DAT_00806734,8,DAT_00806730,DAT_00806734
                       ,0,0,0x100);
          FUN_006b1470(DAT_008075a8);
        }
        *(undefined4 *)((int)local_18 + 0x4efa) = 0;
        thunk_FUN_00567220((int)(local_18 + 0xe));
        thunk_FUN_00567180(local_18 + 0xe,DAT_00856d78);
        FUN_006e3db0((int)local_18 + 0x113a);
        DAT_00858df8 = local_a4;
        return 0;
      }
      uVar23 = 0;
      local_48 = 0;
      FUN_006b13e0(DAT_008075a8);
      if (((ushort)DAT_0080350c & 0xff) == 1) {
        local_24 = 0x280;
        local_20 = 0x1e0;
      }
      else {
        local_24 = 800;
        local_20 = 600;
      }
      iVar5 = 0x10;
      local_1c = iVar5;
      if ((ushort)DAT_0080350c >> 8 == 2) {
        iVar5 = 0x18;
        local_1c = iVar5;
      }
      do {
        if (iVar5 == 8) goto LAB_00570645;
        iVar14 = 0;
        local_c = (uint *)0x0;
        piVar15 = *(int **)((int)local_18 + 0x115a);
        piVar11 = piVar15 + 1;
        if (0 < *piVar11) {
          do {
            if (((piVar15[2] == local_24) && (piVar15[3] == local_20)) && (piVar15[4] == iVar5)) {
              local_c = (uint *)0x1;
              break;
            }
            iVar14 = iVar14 + 1;
            piVar15 = piVar15 + 3;
          } while (iVar14 < *piVar11);
        }
        if (local_c != (uint *)0x0) {
          local_108 = DAT_00858df8;
          DAT_00806738 = iVar5;
          DAT_00858df8 = &local_108;
          iVar14 = __setjmp3(local_104,0,unaff_EDI,unaff_ESI);
          iVar5 = local_1c;
          if (iVar14 == 0) {
            DVar7 = FUN_006b9b40(DAT_0080759c,0x10000001,local_24,local_20,local_1c,local_24,
                                 local_20,0,0,0);
            local_48 = (uint)(DVar7 == 0);
          }
          uVar23 = local_48;
          DAT_00858df8 = local_108;
          if ((local_c != (uint *)0x0) && (local_48 != 0)) break;
        }
        if (iVar5 == 0x10) {
          iVar5 = 8;
          local_1c = iVar5;
        }
        else if (iVar5 == 0x18) {
          iVar5 = 0x20;
          local_1c = iVar5;
        }
        else if (iVar5 == 0x20) {
          iVar5 = 0x10;
          local_1c = iVar5;
        }
      } while (uVar23 == 0);
      if (iVar5 == 8) {
LAB_00570645:
        if (uVar23 == 0) {
          FUN_006a5e40(-1,DAT_007ed77c,0x7ca0c8,0x792);
        }
      }
      iVar5 = local_10;
      if ((DAT_0080350c._2_1_ == '\x01') ||
         ((DAT_0080350c._2_1_ == '\x02' && (DAT_0080351f == '\x01')))) {
        local_8 = (byte *)((uint)local_8 | 4);
      }
      if (local_10 == 0) {
        FUN_006c3b00(DAT_008075a0,(LPCSTR)&DAT_00803408,(uint)local_8);
      }
      else {
        FUN_006c2ae0(DAT_008075a4,&DAT_00803408,(uint)local_8);
      }
      if (DAT_0080350c._2_1_ == '\x01') {
        iVar14 = 0;
        iVar27 = 0;
        iVar28 = DAT_0080759c[6];
        iVar29 = DAT_0080759c[7];
        if (iVar5 != 0) {
          FUN_006c2d30(DAT_008075a4,0,0,DAT_0080759c[6],DAT_0080759c[7]);
          goto LAB_0057073b;
        }
      }
      else {
        if (DAT_0080350c._2_1_ != '\x02') goto LAB_0057073b;
        iVar14 = ram0x0080350f;
        iVar27 = DAT_00803513;
        iVar28 = DAT_00803517;
        iVar29 = DAT_0080351b;
        if (iVar5 != 0) {
          FUN_006c2d30(DAT_008075a4,ram0x0080350f,DAT_00803513,DAT_00803517,DAT_0080351b);
          goto LAB_0057073b;
        }
      }
      FUN_006c3fc0((int)DAT_008075a0,iVar14,iVar27,iVar28,iVar29);
LAB_0057073b:
      thunk_FUN_00567220((int)(local_18 + 0xe));
      *(undefined4 *)((int)local_18 + 0x4efa) = 1;
      if (iVar5 == 0) {
        FUN_006c4000((int)DAT_008075a0);
        DAT_00858df8 = local_a4;
        return 0;
      }
      FUN_006c2d90(DAT_008075a4);
      FUN_006a5e40(local_4c,DAT_007ed77c,0x7ca0c8,0x7bc);
      DAT_00858df8 = local_a4;
      return 0;
    }
    if (uVar23 != 0x7101) {
      if (uVar23 == 0x7102) {
        thunk_FUN_0055dbf0(DAT_0080759c,10,2);
        piVar11[7] = 1;
        DAT_00858df8 = local_a4;
        return 0;
      }
      if (uVar23 != 0x7104) {
        DAT_00858df8 = local_a4;
        return 0;
      }
      thunk_FUN_005718d0((int)piVar11);
      DAT_00858df8 = local_a4;
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x14);
    local_10 = 1;
    if (iVar5 == 1) {
      puVar9 = (undefined4 *)((int)piVar11 + 0x113a);
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      puVar9 = &DAT_00803408;
      for (iVar5 = 0x46; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      uVar23 = *(uint *)(DAT_00806740 + 4);
      if (uVar23 < *(uint *)(DAT_00806740 + 0xc)) {
        puVar9 = (undefined4 *)(*(int *)(DAT_00806740 + 8) * uVar23 + *(int *)(DAT_00806740 + 0x1c))
        ;
        *(uint *)(DAT_00806740 + 4) = uVar23 + 1;
      }
      else {
        puVar9 = (undefined4 *)0x0;
      }
      if (puVar9 == (undefined4 *)0x0) {
        *(undefined4 *)((int)piVar11 + 0x1146) = 1;
        *(undefined4 *)((int)piVar11 + 0x114a) = 0x6123;
      }
      else {
        *(undefined4 *)((int)piVar11 + 0x1146) = 1;
        *(undefined4 *)((int)piVar11 + 0x114e) = 1;
        *(undefined4 *)((int)piVar11 + 0x114a) = 0x7101;
        puVar19 = puVar9;
        puVar25 = &DAT_00803408;
        for (iVar5 = 0x46; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar25 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar25 = puVar25 + 1;
        }
        wsprintfA((LPSTR)&DAT_00803408,&DAT_007c6ee4,piVar11 + 0x59,puVar9);
      }
      piVar15 = local_44;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar15 = 0;
        piVar15 = piVar15 + 1;
      }
      local_44[4] = 0x7100;
    }
    else if (iVar5 == 3) {
      puVar9 = &DAT_00803408;
      for (iVar5 = 0x46; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      puVar9 = (undefined4 *)((int)piVar11 + 0x113a);
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined4 *)((int)piVar11 + 0x1146) = 1;
      *(undefined4 *)((int)piVar11 + 0x114a) = 0x6104;
      *(undefined4 *)((int)piVar11 + 0x114e) = 0;
      piVar15 = local_44;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar15 = 0;
        piVar15 = piVar15 + 1;
      }
      local_44[4] = 0x7100;
      if ((DAT_00807330 & 2) != 0) {
        puVar9 = (undefined4 *)&stack0xfffff65c;
        for (iVar5 = 0xc6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        FUN_0072e730((byte *)((int)piVar11 + 0x7c0a),local_14,local_24c,local_44c,local_54c);
        __makepath((char *)((int)piVar11 + 0x7d1a),(char *)local_14,(char *)local_24c,
                   PTR_s_CAMPAIGN_VPS_0079b03c,(char *)0x0);
        local_c = thunk_FUN_00683c70((uint *)((int)piVar11 + 0x7d1a),&stack0xfffff65c,&local_50,
                                     (int *)0x0,(undefined *)0x0);
        if ((local_50 == 0x40) && (local_c != (uint *)0x0)) {
          uVar23 = local_c[1];
          if (*(int *)(param_1 + 0x18) == 0) {
            if (uVar23 < local_c[3]) {
              pcVar8 = (char *)(local_c[2] * uVar23 + local_c[7]);
              local_c[1] = uVar23 + 1;
            }
            else {
              pcVar8 = (char *)0x0;
            }
            if (pcVar8 != (char *)0x0) {
              pcVar18 = pcVar8;
              puVar9 = &DAT_00803408;
              for (iVar5 = 0x46; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *(undefined4 *)pcVar18;
                pcVar18 = pcVar18 + 4;
                puVar9 = puVar9 + 1;
              }
              __makepath((char *)&DAT_00803408,(char *)local_14,(char *)local_24c,pcVar8,(char *)0x0
                        );
            }
          }
          else {
            if (uVar23 < local_c[3]) {
              local_8 = (byte *)(local_c[2] * uVar23 + local_c[7]);
              local_c[1] = uVar23 + 1;
            }
            else {
              local_8 = (byte *)0x0;
            }
            if (local_8 != (byte *)0x0) {
              do {
                FUN_0072e730(local_8,(byte *)0x0,(byte *)0x0,local_34c,(byte *)0x0);
                FUN_006b77e0((char *)local_34c,local_34c);
                FUN_006b77e0((char *)local_44c,local_44c);
                pbVar17 = local_44c;
                pbVar24 = local_34c;
                do {
                  bVar3 = *pbVar24;
                  bVar26 = bVar3 < *pbVar17;
                  if (bVar3 != *pbVar17) {
LAB_00570ab1:
                    iVar5 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
                    goto LAB_00570ab6;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar24[1];
                  bVar26 = bVar3 < pbVar17[1];
                  if (bVar3 != pbVar17[1]) goto LAB_00570ab1;
                  pbVar24 = pbVar24 + 2;
                  pbVar17 = pbVar17 + 2;
                } while (bVar3 != 0);
                iVar5 = 0;
LAB_00570ab6:
                if (iVar5 == 0) {
                  pbVar17 = local_8;
                  puVar9 = &DAT_00803408;
                  for (iVar5 = 0x46; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar9 = *(undefined4 *)pbVar17;
                    pbVar17 = pbVar17 + 4;
                    puVar9 = puVar9 + 1;
                  }
                  __makepath((char *)&DAT_00803408,(char *)local_14,(char *)local_24c,
                             (char *)local_8,(char *)0x0);
                  local_8 = (byte *)0x0;
                }
                else {
                  uVar23 = local_c[1];
                  if (uVar23 < local_c[3]) {
                    local_8 = (byte *)(local_c[2] * uVar23 + local_c[7]);
                    local_c[1] = uVar23 + 1;
                  }
                  else {
                    local_8 = (byte *)0x0;
                  }
                }
              } while (local_8 != (byte *)0x0);
              FUN_006ae110((byte *)local_c);
              goto LAB_00570c2f;
            }
          }
          FUN_006ae110((byte *)local_c);
        }
      }
    }
    else if (iVar5 == 4) {
      puVar9 = (undefined4 *)((int)piVar11 + 0x113a);
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      piVar15 = local_44;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar15 = 0;
        piVar15 = piVar15 + 1;
      }
      *(undefined4 *)((int)piVar11 + 0x1146) = 1;
      *(undefined4 *)((int)piVar11 + 0x114a) = 0x6108;
      local_44[4] = 0x7100;
      puVar9 = (undefined4 *)((int)piVar11 + 0x6d03);
      puVar19 = &DAT_00803408;
      for (iVar5 = 0x46; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar19 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar19 = puVar19 + 1;
      }
    }
    else {
      local_10 = 0;
    }
LAB_00570c2f:
    if (local_10 == 0) {
      DAT_00858df8 = local_a4;
      return 0;
    }
    pvVar10 = FindFirstFileA((LPCSTR)&DAT_00803408,&local_68c);
    if (pvVar10 != (HANDLE)0xffffffff) {
      (**(code **)(*piVar11 + 0x18))(local_44);
      DAT_00858df8 = local_a4;
      return 0;
    }
    iVar5 = *piVar11;
    piVar11 = (int *)((int)piVar11 + 0x113a);
LAB_00570c77:
    (**(code **)(iVar5 + 0x18))(piVar11);
  }
  DAT_00858df8 = local_a4;
  return 0;
}

