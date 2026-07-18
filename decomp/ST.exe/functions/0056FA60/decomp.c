
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::GetMessage */

undefined4 __thiscall STAppC::GetMessage(STAppC *this,int param_1)

{
  int *piVar1;
  char cVar2;
  STAppC SVar3;
  STAppC SVar4;
  byte bVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  void *pvVar9;
  DWORD DVar10;
  char *pcVar11;
  undefined4 *puVar12;
  HANDLE pvVar13;
  STAppC *pSVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  undefined4 unaff_ESI;
  STAppC *pSVar18;
  byte *pbVar19;
  char *pcVar20;
  undefined4 *puVar21;
  void *unaff_EDI;
  STAppC *pSVar22;
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
  STAppC local_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  int local_20;
  int local_1c;
  STAppC *local_18;
  byte local_14 [4];
  int local_10;
  uint *local_c;
  byte *local_8;
  
  local_a4 = DAT_00858df8;
  DAT_00858df8 = &local_a4;
  local_18 = this;
  iVar8 = __setjmp3(local_a0,0,unaff_EDI,unaff_ESI);
  pSVar14 = local_18;
  if (iVar8 != 0) {
    DAT_00858df8 = local_a4;
    iVar17 = FUN_006ad4d0(s_E____titans_tapp_cpp_007ca0c8,0x890,0,iVar8,&DAT_007a4ccc);
    if (iVar17 == 0) {
      FUN_006a5e40(iVar8,0,0x7ca0c8,0x891);
      return 0xffff;
    }
    pcVar7 = (code *)swi(3);
    uVar15 = (*pcVar7)();
    return uVar15;
  }
  FUN_006e5150(local_18,param_1);
  pvVar9 = DAT_00802a30;
  uVar23 = *(uint *)(param_1 + 0x10);
  if (uVar23 < 0x6120) {
    if (uVar23 == 0x611f) {
switchD_0056fad2_caseD_6105:
      DAT_0080674c = 0;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar9);
      ChangeResolution(pSVar14,0);
      if (DAT_0081176c == (int *)0x0) {
        pvVar9 = (void *)FUN_0072e530(0x6b6);
        if (pvVar9 != (void *)0x0) {
          thunk_FUN_005da610(pvVar9,pSVar14);
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
      uVar15 = *(undefined4 *)(param_1 + 0x18);
      pSVar14 = local_44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pSVar14 = 0;
        pSVar14 = pSVar14 + 4;
      }
      local_30 = *(undefined4 *)(param_1 + 0x14);
      local_38 = 0;
      local_34 = *(undefined4 *)(param_1 + 0x10);
      local_3c = 0x200;
      local_2c = uVar15;
      FUN_006e3db0((int)local_44);
      DAT_00858df8 = local_a4;
      return 0;
    }
    switch(uVar23) {
    case 0x60ff:
      if (*(int *)(pSVar14 + 0xfc3) != 0) {
        FUN_006c1e20();
        pSVar18 = pSVar14 + 0xe43;
        for (iVar8 = 0x60; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar18 = 0;
          pSVar18 = pSVar18 + 4;
        }
      }
      pvVar9 = DAT_00802a30;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar9);
      if (DAT_0081176c != (int *)0x0) {
        FUN_006e4b80(pSVar14,(int)DAT_0081176c);
      }
      uVar23 = 0xffffffff;
      pcVar11 = &DAT_008016a0;
      do {
        pcVar20 = pcVar11;
        if (uVar23 == 0) break;
        uVar23 = uVar23 - 1;
        pcVar20 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar20;
      } while (cVar2 != '\0');
      uVar23 = ~uVar23;
      pSVar18 = (STAppC *)(pcVar20 + -uVar23);
      pSVar22 = pSVar14 + 0x7a02;
      for (uVar16 = uVar23 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pSVar22 = *(undefined4 *)pSVar18;
        pSVar18 = pSVar18 + 4;
        pSVar22 = pSVar22 + 4;
      }
      for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
        *pSVar22 = *pSVar18;
        pSVar18 = pSVar18 + 1;
        pSVar22 = pSVar22 + 1;
      }
      OpenGameDBs(pSVar14);
      StartGame(pSVar14);
      SVar3 = pSVar14[0x1180];
      if (((byte)SVar3 < 9) || ((0xc < (byte)SVar3 && (SVar3 != (STAppC)0x10)))) {
        pSVar18 = pSVar14 + 0x1196;
        pSVar22 = pSVar14 + 0x2b2f;
        for (iVar8 = 0x666; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar22 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar22 = pSVar22 + 4;
        }
        *pSVar22 = *pSVar18;
        *(undefined4 *)(pSVar14 + 0x44c8) = *(undefined4 *)(pSVar14 + 0x4f0a);
        pSVar18 = pSVar14 + 0x6e1b;
        pSVar22 = pSVar14 + 0x44cc;
        for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar22 = *(undefined4 *)pSVar18;
          pSVar18 = pSVar18 + 4;
          pSVar22 = pSVar22 + 4;
        }
        puVar12 = (undefined4 *)((int)&DAT_007f510b + (uint)DAT_0080874d * 0xa62);
        pSVar18 = pSVar14 + 0x48cc;
        for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar18 = *puVar12;
          puVar12 = puVar12 + 1;
          pSVar18 = pSVar18 + 4;
        }
        puVar12 = (undefined4 *)((int)&DAT_007f511f + (uint)DAT_0080874d * 0xa62);
        pSVar18 = pSVar14 + 0x48e0;
        for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar18 = *puVar12;
          puVar12 = puVar12 + 1;
          pSVar18 = pSVar18 + 4;
        }
        puVar12 = (undefined4 *)((int)&DAT_007f5147 + (uint)DAT_0080874d * 0xa62);
        pSVar18 = pSVar14 + 0x48f4;
        for (iVar8 = 0x9b; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar18 = *puVar12;
          puVar12 = puVar12 + 1;
          pSVar18 = pSVar18 + 4;
        }
        puVar12 = (undefined4 *)((int)&DAT_007f53b3 + (uint)DAT_0080874d * 0xa62);
        pSVar18 = pSVar14 + 0x4b60;
        for (iVar8 = 0x6a; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar18 = *puVar12;
          puVar12 = puVar12 + 1;
          pSVar18 = pSVar18 + 4;
        }
        puVar12 = (undefined4 *)((int)&DAT_007f555b + (uint)DAT_0080874d * 0xa62);
        pSVar14 = pSVar14 + 0x4d08;
        for (iVar8 = 0x26; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          pSVar14 = pSVar14 + 4;
        }
        *(undefined2 *)pSVar14 = *(undefined2 *)puVar12;
        pSVar14[2] = *(STAppC *)((int)puVar12 + 2);
        DAT_00858df8 = local_a4;
        return 0;
      }
      break;
    case 0x6100:
      DAT_0080674c = 0;
      if (*(int *)(pSVar14 + 0xfc3) != 0) {
        FUN_006c1e20();
        pSVar18 = pSVar14 + 0xe43;
        for (iVar8 = 0x60; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar18 = 0;
          pSVar18 = pSVar18 + 4;
        }
      }
      thunk_FUN_005713b0((int)pSVar14);
      uVar15 = FUN_006e51b0((int)pSVar14);
      *(undefined4 *)(pSVar14 + 0x1134) = uVar15;
      pvVar9 = DAT_00802a30;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar9);
      thunk_FUN_005711d0(pSVar14,&DAT_0081163c);
      CloseGameDBs(pSVar14);
      if (DAT_0081176c != (int *)0x0) {
        FUN_006e4b80(pSVar14,(int)DAT_0081176c);
      }
      if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
      }
      else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
      }
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
      ChangeResolution(pSVar14,0);
      uVar23 = 0xffffffff;
      pSVar18 = pSVar14 + 0x77fa;
      do {
        pSVar22 = pSVar18;
        if (uVar23 == 0) break;
        uVar23 = uVar23 - 1;
        pSVar22 = pSVar18 + 1;
        SVar3 = *pSVar18;
        pSVar18 = pSVar22;
      } while (SVar3 != (STAppC)0x0);
      uVar23 = ~uVar23;
      pSVar18 = pSVar22 + -uVar23;
      pSVar22 = pSVar14 + 0x76f6;
      for (uVar16 = uVar23 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pSVar22 = *(undefined4 *)pSVar18;
        pSVar18 = pSVar18 + 4;
        pSVar22 = pSVar22 + 4;
      }
      for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
        *pSVar22 = *pSVar18;
        pSVar18 = pSVar18 + 1;
        pSVar22 = pSVar22 + 1;
      }
      OpenGameDBs(pSVar14);
      StartGame(pSVar14);
      DAT_00858df8 = local_a4;
      return 0;
    case 0x6102:
    case 0x6103:
    case 0x6104:
    case 0x610a:
switchD_0056fad2_caseD_6102:
      DAT_0080674c = 0;
      ChangeResolution(pSVar14,0);
      if (*(int *)(pSVar14 + 0xfc3) != 0) {
        FUN_006c1e20();
        pSVar18 = pSVar14 + 0xe43;
        for (iVar8 = 0x60; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar18 = 0;
          pSVar18 = pSVar18 + 4;
        }
      }
      thunk_FUN_005713b0((int)pSVar14);
      pvVar9 = DAT_00802a30;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar9);
      thunk_FUN_005711d0(pSVar14,&DAT_0081163c);
      CloseGameDBs(pSVar14);
      if (DAT_0081176c == (int *)0x0) {
        pvVar9 = (void *)FUN_0072e530(0x6b6);
        if (pvVar9 != (void *)0x0) {
          thunk_FUN_005da610(pvVar9,pSVar14);
        }
        (**(code **)*DAT_0081176c)();
        FUN_006e4650(DAT_0081176c,0);
      }
      else {
        FUN_006e47e0(DAT_0081176c,0);
      }
      pSVar14 = local_44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pSVar14 = 0;
        pSVar14 = pSVar14 + 4;
      }
      local_38 = 0;
      local_34 = *(int *)(param_1 + 0x10);
      local_3c = 0x200;
      if (local_34 != 0x6103) {
        if (local_34 == 0x6104) {
          local_2c = *(undefined4 *)(param_1 + 0x18);
        }
        else if (local_34 != 0x610a) {
          FUN_006e3db0((int)local_44);
          DAT_00858df8 = local_a4;
          return 0;
        }
      }
      local_30 = *(undefined4 *)(param_1 + 0x14);
      FUN_006e3db0((int)local_44);
      DAT_00858df8 = local_a4;
      return 0;
    case 0x6105:
      goto switchD_0056fad2_caseD_6105;
    case 0x6106:
      SVar3 = pSVar14[0x112d];
      pSVar14[(uint)(byte)SVar3 * 0x51 + 0x11a7] = (STAppC)0x1;
      pSVar14[0x112d] = *(STAppC *)(param_1 + 0x16);
      pSVar14[0x112e] = *(STAppC *)(param_1 + 0x14);
      pSVar14[(uint)(byte)pSVar14[0x112d] * 0x51 + 0x11a7] = (STAppC)0x0;
      if (DAT_00802a38 != (int *)0x0) {
        FUN_006e57b0(DAT_00802a38,0x121);
        (**(code **)(*DAT_00802a38 + 8))(0x121,0,0,0,0);
        local_b8 = 0xf;
        local_b4 = 0x4405;
        (**(code **)(*DAT_00802a38 + 0x18))(local_c4);
      }
      if (DAT_00802a28 != 0) {
        thunk_FUN_005711d0(pSVar14,&DAT_00802a28);
      }
      thunk_FUN_00542d80();
      if (DAT_007fa174 != 0) {
        thunk_FUN_0042a9f0((char)SVar3);
        DAT_00858df8 = local_a4;
        return 0;
      }
      break;
    case 0x6107:
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
      if (DAT_00802a28 != 0) {
        thunk_FUN_005711d0(pSVar14,&DAT_00802a28);
      }
      ChangeResolution(pSVar14,_DAT_00807348 & 0xff);
      pvVar9 = DAT_00802a30;
      uVar23 = _DAT_00807348 & 0xff;
      *(undefined4 *)((int)DAT_00802a30 + 0x4b2) = (&DAT_00807568)[uVar23 * 4];
      *(undefined4 *)((int)pvVar9 + 0x4b6) = (&DAT_0080756c)[uVar23 * 4];
      *(undefined4 *)((int)pvVar9 + 0x4ba) = (&DAT_00807570)[uVar23 * 4];
      *(undefined4 *)((int)pvVar9 + 0x4be) = (&DAT_00807574)[uVar23 * 4];
      if (DAT_007fb2a0 != (OpticClassC *)0x0) {
        OpticClassC::ReInitOptic(DAT_007fb2a0,_DAT_00807348 & 0xff);
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
      thunk_FUN_0054b540(pvVar9);
      pSVar18 = local_44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pSVar18 = 0;
        pSVar18 = pSVar18 + 4;
      }
      SVar3 = pSVar14[0x6ce1];
      SVar4 = pSVar14[0x6ce0];
      local_34 = 0x6102;
      if ((((byte)SVar4 <= (byte)SVar3) && ((byte)pSVar14[0x6ce2] <= (byte)SVar3)) &&
         (SVar3 != (STAppC)0x0)) {
        bVar26 = false;
        local_34 = 0x6103;
        local_30 = 0;
        pSVar14[0x6ce1] = (STAppC)0x0;
      }
      if (bVar26) {
        bVar26 = true;
        if ((((byte)pSVar14[0x6ce1] < (byte)SVar4) && ((byte)pSVar14[0x6ce2] <= (byte)SVar4)) &&
           (SVar4 != (STAppC)0x0)) {
          local_34 = 0x6104;
          local_30 = 1;
          pSVar14[0x6ce0] = (STAppC)0x0;
          bVar26 = false;
        }
        if (bVar26) {
          SVar3 = pSVar14[0x6ce2];
          bVar26 = true;
          if (((byte)pSVar14[0x6ce1] < (byte)SVar3) && ((byte)pSVar14[0x6ce0] < (byte)SVar3)) {
            if ((DAT_00807330 & 2) == 0) {
              pSVar14[0x6ce2] = (STAppC)0x0;
            }
            else if (SVar3 != (STAppC)0x0) {
              local_34 = 0x7101;
              local_30 = 4;
              pSVar14[0x6ce2] = (STAppC)0x0;
              bVar26 = false;
            }
          }
          if ((((bVar26) && (pSVar14[0x6ce1] == (STAppC)0x0)) && (pSVar14[0x6ce0] == (STAppC)0x0))
             && ((pSVar14[0x6ce2] == (STAppC)0x0 && (pSVar14[0x5012] != (STAppC)0x0)))) {
            wsprintfA((LPSTR)(pSVar14 + 0x76f6),&DAT_007c6ee4,pSVar14 + 0x60,pSVar14 + 0x5012);
            wsprintfA((LPSTR)(pSVar14 + 0x78fe),&DAT_007a4ccc,pSVar14 + 0x5012);
            uVar23 = 0xffffffff;
            pSVar18 = pSVar14 + 0x76f6;
            do {
              pSVar22 = pSVar18;
              if (uVar23 == 0) break;
              uVar23 = uVar23 - 1;
              pSVar22 = pSVar18 + 1;
              SVar3 = *pSVar18;
              pSVar18 = pSVar22;
            } while (SVar3 != (STAppC)0x0);
            uVar23 = ~uVar23;
            pSVar18 = pSVar22 + -uVar23;
            pSVar22 = pSVar14 + 0x77fa;
            for (uVar16 = uVar23 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pSVar22 = *(undefined4 *)pSVar18;
              pSVar18 = pSVar18 + 4;
              pSVar22 = pSVar22 + 4;
            }
            for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
              *pSVar22 = *pSVar18;
              pSVar18 = pSVar18 + 1;
              pSVar22 = pSVar22 + 1;
            }
            if ((pSVar14[0x1180] == (STAppC)0x3) || (pSVar14[0x1180] == (STAppC)0xb)) {
              pSVar14[0x1180] = (STAppC)0x3;
            }
            else {
              pSVar14[0x1180] = (STAppC)0x8;
            }
            iVar8 = thunk_FUN_0056e9e0(pSVar14,1);
            if (iVar8 != 0) {
              local_34 = 0x6104;
              local_30 = 0;
            }
          }
        }
      }
      if ((local_34 == 0x6102) && (DAT_008067a0 != '\0')) {
        if ((DAT_00802a98 == '\0') ||
           (iVar8 = CFsgsConnection::IsInitialized((CFsgsConnection *)&DAT_00802a90), iVar8 == 0)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if (bVar26) {
          local_34 = 0x610a;
          local_30 = 6;
        }
      }
      iVar8 = *(int *)pSVar14;
      pSVar14 = local_44;
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
        FUN_006e3db0((int)(pSVar14 + 0x113a));
        DAT_00858df8 = local_a4;
        return 0;
      }
      if (*(int *)(pSVar14 + 0xfc3) != 0) {
        FUN_006c1e20();
        pSVar18 = pSVar14 + 0xe43;
        for (iVar8 = 0x60; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar18 = 0;
          pSVar18 = pSVar18 + 4;
        }
      }
      thunk_FUN_005713b0((int)pSVar14);
      pvVar9 = DAT_00802a30;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar9);
      if (DAT_0081176c != (int *)0x0) {
        FUN_006e4b80(pSVar14,(int)DAT_0081176c);
      }
      thunk_FUN_005711d0(pSVar14,&DAT_0081163c);
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
        pSVar18 = local_18;
        pSVar14 = local_18 + 0x38;
        *(undefined4 *)(local_18 + 0x4efa) = 0;
        thunk_FUN_00567220((int)pSVar14);
        thunk_FUN_00567180(pSVar14,DAT_00856d78);
        FUN_006e3db0((int)(pSVar18 + 0x113a));
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
      iVar8 = 0x10;
      local_1c = iVar8;
      if ((ushort)DAT_0080350c >> 8 == 2) {
        iVar8 = 0x18;
        local_1c = iVar8;
      }
      do {
        if (iVar8 == 8) goto LAB_00570645;
        iVar17 = 0;
        local_c = (uint *)0x0;
        piVar6 = *(int **)(local_18 + 0x115a);
        piVar1 = piVar6 + 1;
        if (0 < *piVar1) {
          do {
            if (((piVar6[2] == local_24) && (piVar6[3] == local_20)) && (piVar6[4] == iVar8)) {
              local_c = (uint *)0x1;
              break;
            }
            iVar17 = iVar17 + 1;
            piVar6 = piVar6 + 3;
          } while (iVar17 < *piVar1);
        }
        if (local_c != (uint *)0x0) {
          local_108 = DAT_00858df8;
          DAT_00806738 = iVar8;
          DAT_00858df8 = &local_108;
          iVar17 = __setjmp3(local_104,0,unaff_EDI,unaff_ESI);
          iVar8 = local_1c;
          if (iVar17 == 0) {
            DVar10 = FUN_006b9b40(DAT_0080759c,0x10000001,local_24,local_20,local_1c,local_24,
                                  local_20,0,0,0);
            local_48 = (uint)(DVar10 == 0);
          }
          uVar23 = local_48;
          DAT_00858df8 = local_108;
          if ((local_c != (uint *)0x0) && (local_48 != 0)) break;
        }
        if (iVar8 == 0x10) {
          iVar8 = 8;
          local_1c = iVar8;
        }
        else if (iVar8 == 0x18) {
          iVar8 = 0x20;
          local_1c = iVar8;
        }
        else if (iVar8 == 0x20) {
          iVar8 = 0x10;
          local_1c = iVar8;
        }
      } while (uVar23 == 0);
      if (iVar8 == 8) {
LAB_00570645:
        if (uVar23 == 0) {
          FUN_006a5e40(-1,DAT_007ed77c,0x7ca0c8,0x792);
        }
      }
      iVar8 = local_10;
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
        iVar17 = 0;
        iVar27 = 0;
        iVar28 = DAT_0080759c[6];
        iVar29 = DAT_0080759c[7];
        if (iVar8 != 0) {
          FUN_006c2d30(DAT_008075a4,0,0,DAT_0080759c[6],DAT_0080759c[7]);
          goto LAB_0057073b;
        }
      }
      else {
        if (DAT_0080350c._2_1_ != '\x02') goto LAB_0057073b;
        iVar17 = ram0x0080350f;
        iVar27 = DAT_00803513;
        iVar28 = DAT_00803517;
        iVar29 = DAT_0080351b;
        if (iVar8 != 0) {
          FUN_006c2d30(DAT_008075a4,ram0x0080350f,DAT_00803513,DAT_00803517,DAT_0080351b);
          goto LAB_0057073b;
        }
      }
      FUN_006c3fc0((int)DAT_008075a0,iVar17,iVar27,iVar28,iVar29);
LAB_0057073b:
      pSVar14 = local_18;
      thunk_FUN_00567220((int)(local_18 + 0x38));
      *(undefined4 *)(pSVar14 + 0x4efa) = 1;
      if (iVar8 == 0) {
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
        *(undefined4 *)(pSVar14 + 0x1c) = 1;
        DAT_00858df8 = local_a4;
        return 0;
      }
      if (uVar23 != 0x7104) {
        DAT_00858df8 = local_a4;
        return 0;
      }
      thunk_FUN_005718d0((int)pSVar14);
      DAT_00858df8 = local_a4;
      return 0;
    }
    iVar8 = *(int *)(param_1 + 0x14);
    local_10 = 1;
    if (iVar8 == 1) {
      pSVar18 = pSVar14 + 0x113a;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pSVar18 = 0;
        pSVar18 = pSVar18 + 4;
      }
      puVar12 = &DAT_00803408;
      for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      uVar23 = *(uint *)(DAT_00806740 + 4);
      if (uVar23 < *(uint *)(DAT_00806740 + 0xc)) {
        puVar12 = (undefined4 *)
                  (*(int *)(DAT_00806740 + 8) * uVar23 + *(int *)(DAT_00806740 + 0x1c));
        *(uint *)(DAT_00806740 + 4) = uVar23 + 1;
      }
      else {
        puVar12 = (undefined4 *)0x0;
      }
      if (puVar12 == (undefined4 *)0x0) {
        *(undefined4 *)(pSVar14 + 0x1146) = 1;
        *(undefined4 *)(pSVar14 + 0x114a) = 0x6123;
      }
      else {
        *(undefined4 *)(pSVar14 + 0x1146) = 1;
        *(undefined4 *)(pSVar14 + 0x114e) = 1;
        *(undefined4 *)(pSVar14 + 0x114a) = 0x7101;
        puVar21 = puVar12;
        puVar25 = &DAT_00803408;
        for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar25 = *puVar21;
          puVar21 = puVar21 + 1;
          puVar25 = puVar25 + 1;
        }
        wsprintfA((LPSTR)&DAT_00803408,&DAT_007c6ee4,pSVar14 + 0x164,puVar12);
      }
      pSVar18 = local_44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pSVar18 = 0;
        pSVar18 = pSVar18 + 4;
      }
      local_34 = 0x7100;
    }
    else if (iVar8 == 3) {
      puVar12 = &DAT_00803408;
      for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      pSVar18 = pSVar14 + 0x113a;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pSVar18 = 0;
        pSVar18 = pSVar18 + 4;
      }
      *(undefined4 *)(pSVar14 + 0x1146) = 1;
      *(undefined4 *)(pSVar14 + 0x114a) = 0x6104;
      *(undefined4 *)(pSVar14 + 0x114e) = 0;
      pSVar18 = local_44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pSVar18 = 0;
        pSVar18 = pSVar18 + 4;
      }
      local_34 = 0x7100;
      if ((DAT_00807330 & 2) != 0) {
        puVar12 = (undefined4 *)&stack0xfffff65c;
        for (iVar8 = 0xc6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        FUN_0072e730((byte *)(pSVar14 + 0x7c0a),local_14,local_24c,local_44c,local_54c);
        __makepath((char *)(pSVar14 + 0x7d1a),(char *)local_14,(char *)local_24c,
                   PTR_s_CAMPAIGN_VPS_0079b03c,(char *)0x0);
        local_c = thunk_FUN_00683c70((uint *)(pSVar14 + 0x7d1a),&stack0xfffff65c,&local_50,
                                     (int *)0x0,(undefined *)0x0);
        if ((local_50 == 0x40) && (local_c != (uint *)0x0)) {
          uVar23 = local_c[1];
          if (*(int *)(param_1 + 0x18) == 0) {
            if (uVar23 < local_c[3]) {
              pcVar11 = (char *)(local_c[2] * uVar23 + local_c[7]);
              local_c[1] = uVar23 + 1;
            }
            else {
              pcVar11 = (char *)0x0;
            }
            if (pcVar11 != (char *)0x0) {
              pcVar20 = pcVar11;
              puVar12 = &DAT_00803408;
              for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar12 = *(undefined4 *)pcVar20;
                pcVar20 = pcVar20 + 4;
                puVar12 = puVar12 + 1;
              }
              __makepath((char *)&DAT_00803408,(char *)local_14,(char *)local_24c,pcVar11,
                         (char *)0x0);
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
                pbVar19 = local_44c;
                pbVar24 = local_34c;
                do {
                  bVar5 = *pbVar24;
                  bVar26 = bVar5 < *pbVar19;
                  if (bVar5 != *pbVar19) {
LAB_00570ab1:
                    iVar8 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
                    goto LAB_00570ab6;
                  }
                  if (bVar5 == 0) break;
                  bVar5 = pbVar24[1];
                  bVar26 = bVar5 < pbVar19[1];
                  if (bVar5 != pbVar19[1]) goto LAB_00570ab1;
                  pbVar24 = pbVar24 + 2;
                  pbVar19 = pbVar19 + 2;
                } while (bVar5 != 0);
                iVar8 = 0;
LAB_00570ab6:
                if (iVar8 == 0) {
                  pbVar19 = local_8;
                  puVar12 = &DAT_00803408;
                  for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
                    *puVar12 = *(undefined4 *)pbVar19;
                    pbVar19 = pbVar19 + 4;
                    puVar12 = puVar12 + 1;
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
    else if (iVar8 == 4) {
      pSVar18 = pSVar14 + 0x113a;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pSVar18 = 0;
        pSVar18 = pSVar18 + 4;
      }
      pSVar18 = local_44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pSVar18 = 0;
        pSVar18 = pSVar18 + 4;
      }
      *(undefined4 *)(pSVar14 + 0x1146) = 1;
      *(undefined4 *)(pSVar14 + 0x114a) = 0x6108;
      local_34 = 0x7100;
      pSVar18 = pSVar14 + 0x6d03;
      puVar12 = &DAT_00803408;
      for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *(undefined4 *)pSVar18;
        pSVar18 = pSVar18 + 4;
        puVar12 = puVar12 + 1;
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
    pvVar13 = FindFirstFileA((LPCSTR)&DAT_00803408,&local_68c);
    if (pvVar13 != (HANDLE)0xffffffff) {
      (**(code **)(*(int *)pSVar14 + 0x18))(local_44);
      DAT_00858df8 = local_a4;
      return 0;
    }
    iVar8 = *(int *)pSVar14;
    pSVar14 = pSVar14 + 0x113a;
LAB_00570c77:
    (**(code **)(iVar8 + 0x18))(pSVar14);
  }
  DAT_00858df8 = local_a4;
  return 0;
}

