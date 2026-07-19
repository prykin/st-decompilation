
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::GetMessage */

undefined4 __thiscall STAppC::GetMessage(STAppC *this,int param_1)

{
  undefined1 *this_00;
  char cVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  code *pcVar5;
  void *pvVar6;
  STAppC *pSVar7;
  int iVar8;
  StartSystemTy *pSVar9;
  DWORD DVar10;
  char *pcVar11;
  undefined4 *puVar12;
  HANDLE pvVar13;
  int *piVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  STAppCVTable *pSVar18;
  undefined4 unaff_ESI;
  byte *pbVar19;
  char *pcVar20;
  undefined4 *puVar21;
  void *unaff_EDI;
  uint uVar22;
  byte *pbVar23;
  undefined4 *puVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  _WIN32_FIND_DATAA local_68c;
  byte local_54c [256];
  byte local_44c [256];
  byte local_34c [256];
  byte local_24c [256];
  InternalExceptionFrame local_14c;
  InternalExceptionFrame local_108;
  undefined1 local_c4 [12];
  undefined4 local_b8;
  undefined4 local_b4;
  InternalExceptionFrame local_a4;
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
  STAppC *local_18;
  byte local_14 [4];
  int local_10;
  uint *local_c;
  byte *local_8;
  
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_18 = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar7 = local_18;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar17 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x890,0,iVar8,&DAT_007a4ccc,
                                s_STAppC__GetMessage_007ca228);
    if (iVar17 == 0) {
      RaiseInternalException(iVar8,0,s_E____titans_tapp_cpp_007ca0c8,0x891);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return uVar15;
  }
  FUN_006e5150(local_18,param_1);
  pvVar6 = DAT_00802a30;
  uVar22 = *(uint *)(param_1 + 0x10);
  if (uVar22 < 0x6120) {
    if (uVar22 == 0x611f) {
switchD_0056fad2_caseD_6105:
      DAT_0080674c = 0;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar6);
      ChangeResolution(pSVar7,0);
      if (DAT_0081176c == (int *)0x0) {
        pSVar9 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
        if (pSVar9 != (StartSystemTy *)0x0) {
          StartSystemTy::StartSystemTy(pSVar9,pSVar7);
        }
        (**(code **)*DAT_0081176c)();
        AppClassTy::AddSystem((AppClassTy *)pSVar7,DAT_0081176c,0);
      }
      else {
        AppClassTy::AddSystem((AppClassTy *)pSVar7,DAT_0081176c,0);
      }
      if (*(int *)(param_1 + 0x10) != 0x6122) {
        *(char *)((int)DAT_0081176c + 0x2eb) = (*(int *)(param_1 + 0x14) == 2) + '\x01';
      }
      uVar15 = *(undefined4 *)(param_1 + 0x18);
      piVar14 = local_44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar14 = 0;
        piVar14 = piVar14 + 1;
      }
      local_44[5] = *(undefined4 *)(param_1 + 0x14);
      local_44[3] = 0;
      local_44[4] = *(undefined4 *)(param_1 + 0x10);
      local_44[2] = 0x200;
      local_44[6] = uVar15;
      FUN_006e3db0((int)local_44);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    switch(uVar22) {
    case 0x60ff:
      if (*(int *)&pSVar7->field_0xfc3 != 0) {
        FUN_006c1e20();
        puVar12 = (undefined4 *)&pSVar7->field_0xe43;
        for (iVar8 = 0x60; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
      pvVar6 = DAT_00802a30;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar6);
      if (DAT_0081176c != (int *)0x0) {
        FUN_006e4b80(pSVar7,(int)DAT_0081176c);
      }
      uVar22 = 0xffffffff;
      pcVar11 = &DAT_008016a0;
      do {
        pcVar20 = pcVar11;
        if (uVar22 == 0) break;
        uVar22 = uVar22 - 1;
        pcVar20 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar20;
      } while (cVar1 != '\0');
      uVar22 = ~uVar22;
      pcVar11 = pcVar20 + -uVar22;
      pcVar20 = &pSVar7[1].field_0x2b04;
      for (uVar16 = uVar22 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
        *pcVar20 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar20 = pcVar20 + 1;
      }
      OpenGameDBs(pSVar7);
      StartGame(pSVar7);
      bVar3 = pSVar7->field_0x1180;
      if ((bVar3 < 9) || ((0xc < bVar3 && (bVar3 != 0x10)))) {
        puVar12 = (undefined4 *)&pSVar7->field_0x1196;
        puVar21 = (undefined4 *)&pSVar7->field_0x2b2f;
        for (iVar8 = 0x666; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar21 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar21 = puVar21 + 1;
        }
        *(undefined1 *)puVar21 = *(undefined1 *)puVar12;
        *(undefined4 *)&pSVar7->field_0x44c8 = *(undefined4 *)&pSVar7[1].field_0xc;
        puVar12 = (undefined4 *)&pSVar7[1].field_0x1f1d;
        puVar21 = (undefined4 *)&pSVar7->field_0x44cc;
        for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar21 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar21 = puVar21 + 1;
        }
        puVar12 = (undefined4 *)((int)&DAT_007f510b + (uint)DAT_0080874d * 0xa62);
        puVar21 = (undefined4 *)&pSVar7->field_0x48cc;
        for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar21 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar21 = puVar21 + 1;
        }
        puVar12 = (undefined4 *)((int)&DAT_007f511f + (uint)DAT_0080874d * 0xa62);
        puVar21 = (undefined4 *)&pSVar7->field_0x48e0;
        for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar21 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar21 = puVar21 + 1;
        }
        puVar12 = (undefined4 *)((int)&DAT_007f5147 + (uint)DAT_0080874d * 0xa62);
        puVar21 = (undefined4 *)&pSVar7->field_0x48f4;
        for (iVar8 = 0x9b; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar21 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar21 = puVar21 + 1;
        }
        puVar12 = (undefined4 *)((int)&DAT_007f53b3 + (uint)DAT_0080874d * 0xa62);
        puVar21 = (undefined4 *)&pSVar7->field_0x4b60;
        for (iVar8 = 0x6a; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar21 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar21 = puVar21 + 1;
        }
        puVar12 = (undefined4 *)((int)&DAT_007f555b + (uint)DAT_0080874d * 0xa62);
        puVar21 = (undefined4 *)&pSVar7->field_0x4d08;
        for (iVar8 = 0x26; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar21 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar21 = puVar21 + 1;
        }
        *(undefined2 *)puVar21 = *(undefined2 *)puVar12;
        *(undefined1 *)((int)puVar21 + 2) = *(undefined1 *)((int)puVar12 + 2);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case 0x6100:
      DAT_0080674c = 0;
      if (*(int *)&pSVar7->field_0xfc3 != 0) {
        FUN_006c1e20();
        puVar12 = (undefined4 *)&pSVar7->field_0xe43;
        for (iVar8 = 0x60; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
      thunk_FUN_005713b0((int)pSVar7);
      uVar15 = FUN_006e51b0((int)pSVar7);
      *(undefined4 *)&pSVar7->field_0x1134 = uVar15;
      pvVar6 = DAT_00802a30;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar6);
      thunk_FUN_005711d0(pSVar7,&DAT_0081163c);
      CloseGameDBs(pSVar7);
      if (DAT_0081176c != (int *)0x0) {
        FUN_006e4b80(pSVar7,(int)DAT_0081176c);
      }
      if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
      }
      else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
      }
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
      ChangeResolution(pSVar7,0);
      uVar22 = 0xffffffff;
      pcVar11 = &pSVar7[1].field_0x28fc;
      do {
        pcVar20 = pcVar11;
        if (uVar22 == 0) break;
        uVar22 = uVar22 - 1;
        pcVar20 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar20;
      } while (cVar1 != '\0');
      uVar22 = ~uVar22;
      pcVar11 = pcVar20 + -uVar22;
      pcVar20 = &pSVar7[1].field_0x27f8;
      for (uVar16 = uVar22 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
        *pcVar20 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar20 = pcVar20 + 1;
      }
      OpenGameDBs(pSVar7);
      StartGame(pSVar7);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    case 0x6102:
    case 0x6103:
    case 0x6104:
    case 0x610a:
switchD_0056fad2_caseD_6102:
      DAT_0080674c = 0;
      ChangeResolution(pSVar7,0);
      if (*(int *)&pSVar7->field_0xfc3 != 0) {
        FUN_006c1e20();
        puVar12 = (undefined4 *)&pSVar7->field_0xe43;
        for (iVar8 = 0x60; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
      thunk_FUN_005713b0((int)pSVar7);
      pvVar6 = DAT_00802a30;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar6);
      thunk_FUN_005711d0(pSVar7,&DAT_0081163c);
      CloseGameDBs(pSVar7);
      if (DAT_0081176c == (int *)0x0) {
        pSVar9 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
        if (pSVar9 != (StartSystemTy *)0x0) {
          StartSystemTy::StartSystemTy(pSVar9,pSVar7);
        }
        (**(code **)*DAT_0081176c)();
        AppClassTy::AddSystem((AppClassTy *)pSVar7,DAT_0081176c,0);
      }
      else {
        AppClassTy::AddSystem((AppClassTy *)pSVar7,DAT_0081176c,0);
      }
      piVar14 = local_44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar14 = 0;
        piVar14 = piVar14 + 1;
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
          g_currentExceptionFrame = local_a4.previous;
          return 0;
        }
      }
      local_44[5] = *(undefined4 *)(param_1 + 0x14);
      FUN_006e3db0((int)local_44);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    case 0x6105:
      goto switchD_0056fad2_caseD_6105;
    case 0x6106:
      bVar3 = pSVar7->field_0x112d;
      (&pSVar7->field_0x11a7)[(uint)bVar3 * 0x51] = 1;
      pSVar7->field_0x112d = *(undefined1 *)(param_1 + 0x16);
      pSVar7->field_0x112e = *(undefined1 *)(param_1 + 0x14);
      (&pSVar7->field_0x11a7)[(uint)(byte)pSVar7->field_0x112d * 0x51] = 0;
      if (DAT_00802a38 != (int *)0x0) {
        FUN_006e57b0(DAT_00802a38,0x121);
        (**(code **)(*DAT_00802a38 + 8))(0x121,0,0,0,0);
        local_b8 = 0xf;
        local_b4 = 0x4405;
        (**(code **)(*DAT_00802a38 + 0x18))(local_c4);
      }
      if (DAT_00802a28 != 0) {
        thunk_FUN_005711d0(pSVar7,&DAT_00802a28);
      }
      thunk_FUN_00542d80();
      if (DAT_007fa174 != 0) {
        thunk_FUN_0042a9f0(bVar3);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case 0x6107:
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
      if (DAT_00802a28 != 0) {
        thunk_FUN_005711d0(pSVar7,&DAT_00802a28);
      }
      ChangeResolution(pSVar7,_DAT_00807348 & 0xff);
      pvVar6 = DAT_00802a30;
      uVar22 = _DAT_00807348 & 0xff;
      *(undefined4 *)((int)DAT_00802a30 + 0x4b2) = (&DAT_00807568)[uVar22 * 4];
      *(undefined4 *)((int)pvVar6 + 0x4b6) = (&DAT_0080756c)[uVar22 * 4];
      *(undefined4 *)((int)pvVar6 + 0x4ba) = (&DAT_00807570)[uVar22 * 4];
      *(undefined4 *)((int)pvVar6 + 0x4be) = (&DAT_00807574)[uVar22 * 4];
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
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case 0x6108:
      bVar25 = true;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar6);
      piVar14 = local_44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar14 = 0;
        piVar14 = piVar14 + 1;
      }
      bVar3 = pSVar7[1].field_0x1de3;
      bVar2 = pSVar7[1].field_0x1de2;
      local_44[4] = 0x6102;
      if (((bVar2 <= bVar3) && ((byte)pSVar7[1].field_0x1de4 <= bVar3)) && (bVar3 != 0)) {
        bVar25 = false;
        local_44[4] = 0x6103;
        local_44[5] = 0;
        pSVar7[1].field_0x1de3 = 0;
      }
      if (bVar25) {
        bVar25 = true;
        if ((((byte)pSVar7[1].field_0x1de3 < bVar2) && ((byte)pSVar7[1].field_0x1de4 <= bVar2)) &&
           (bVar2 != 0)) {
          local_44[4] = 0x6104;
          local_44[5] = 1;
          pSVar7[1].field_0x1de2 = 0;
          bVar25 = false;
        }
        if (bVar25) {
          bVar3 = pSVar7[1].field_0x1de4;
          bVar25 = true;
          if (((byte)pSVar7[1].field_0x1de3 < bVar3) && ((byte)pSVar7[1].field_0x1de2 < bVar3)) {
            if ((DAT_00807330 & 2) == 0) {
              pSVar7[1].field_0x1de4 = 0;
            }
            else if (bVar3 != 0) {
              local_44[4] = 0x7101;
              local_44[5] = 4;
              pSVar7[1].field_0x1de4 = 0;
              bVar25 = false;
            }
          }
          if ((((bVar25) && (pSVar7[1].field_0x1de3 == '\0')) && (pSVar7[1].field_0x1de2 == '\0'))
             && ((pSVar7[1].field_0x1de4 == '\0' && (pSVar7[1].field_0x114 != '\0')))) {
            wsprintfA(&pSVar7[1].field_0x27f8,&DAT_007c6ee4,&pSVar7->field_0x60,
                      &pSVar7[1].field_0x114);
            wsprintfA(&pSVar7[1].field_0x2a00,&DAT_007a4ccc,&pSVar7[1].field_0x114);
            uVar22 = 0xffffffff;
            pcVar11 = &pSVar7[1].field_0x27f8;
            do {
              pcVar20 = pcVar11;
              if (uVar22 == 0) break;
              uVar22 = uVar22 - 1;
              pcVar20 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar20;
            } while (cVar1 != '\0');
            uVar22 = ~uVar22;
            pcVar11 = pcVar20 + -uVar22;
            pcVar20 = &pSVar7[1].field_0x28fc;
            for (uVar16 = uVar22 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar20 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar20 = pcVar20 + 4;
            }
            for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
              *pcVar20 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar20 = pcVar20 + 1;
            }
            if ((pSVar7->field_0x1180 == '\x03') || (pSVar7->field_0x1180 == '\v')) {
              pSVar7->field_0x1180 = 3;
            }
            else {
              pSVar7->field_0x1180 = 8;
            }
            iVar8 = thunk_FUN_0056e9e0(pSVar7,1);
            if (iVar8 != 0) {
              local_44[4] = 0x6104;
              local_44[5] = 0;
            }
          }
        }
      }
      if ((local_44[4] == 0x6102) && (DAT_008067a0 != '\0')) {
        if ((DAT_00802a98 == '\0') ||
           (iVar8 = CFsgsConnection::IsInitialized((CFsgsConnection *)&DAT_00802a90), iVar8 == 0)) {
          bVar25 = false;
        }
        else {
          bVar25 = true;
        }
        if (bVar25) {
          local_44[4] = 0x610a;
          local_44[5] = 6;
        }
      }
      pSVar18 = pSVar7->vtable;
      piVar14 = local_44;
      goto LAB_00570c77;
    }
  }
  else {
    if (uVar22 < 0x7101) {
      if (uVar22 != 0x7100) {
        if (uVar22 != 0x6122) {
          if (uVar22 == 0x6123) goto switchD_0056fad2_caseD_6102;
          if (uVar22 != 0x6124) {
            g_currentExceptionFrame = local_a4.previous;
            return 0;
          }
        }
        goto switchD_0056fad2_caseD_6105;
      }
      local_8 = (byte *)0x1;
      Library::DKW::DV::FUN_006c4110((int)DAT_008075a0);
      if ((*(uint *)((int)DAT_008075a0 + 4) & 0x40000000) != 0) {
        FUN_006c3f00((int)DAT_008075a0);
      }
      local_10 = FUN_006c2a00((LPCSTR)&DAT_00803408);
      if ((local_10 != 0) && (DAT_008075a4 == (int *)0x0)) {
        FUN_006e3db0((int)&pSVar7->field_0x113a);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      if (*(int *)&pSVar7->field_0xfc3 != 0) {
        FUN_006c1e20();
        puVar12 = (undefined4 *)&pSVar7->field_0xe43;
        for (iVar8 = 0x60; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
      thunk_FUN_005713b0((int)pSVar7);
      pvVar6 = DAT_00802a30;
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 0;
      thunk_FUN_0054b540(pvVar6);
      if (DAT_0081176c != (int *)0x0) {
        FUN_006e4b80(pSVar7,(int)DAT_0081176c);
      }
      thunk_FUN_005711d0(pSVar7,&DAT_0081163c);
      if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
      }
      else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
      }
      FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
      Library::DKW::DDX::FUN_006bab60((int)DAT_0080759c,0);
      Library::DKW::DDX::FUN_006bb370((int)DAT_0080759c,0,0);
      local_14c.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_14c;
      local_4c = Library::MSVCRT::__setjmp3(local_14c.jumpBuffer,0,unaff_EDI,unaff_ESI);
      if (local_4c != 0) {
        g_currentExceptionFrame = local_14c.previous;
        if (local_10 != 0) {
          FUN_006c2c80(DAT_008075a4);
        }
        if (DAT_00806738 != 8) {
          DAT_00806738 = 8;
          Library::DKW::DDX::FUN_006b9b40
                    (DAT_0080759c,0x10000001,DAT_00806730,DAT_00806734,8,DAT_00806730,DAT_00806734,0
                     ,0,0x100);
          Library::DKW::DDX::FUN_006b1470(DAT_008075a8);
        }
        pSVar7 = local_18;
        this_00 = &local_18->field_0x38;
        local_18->field_4EFA = 0;
        thunk_FUN_00567220((int)this_00);
        thunk_FUN_00567180(this_00,DAT_00856d78);
        FUN_006e3db0((int)&pSVar7->field_0x113a);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      uVar22 = 0;
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
        piVar4 = *(int **)&local_18->field_0x115a;
        piVar14 = piVar4 + 1;
        if (0 < *piVar14) {
          do {
            if (((piVar4[2] == local_24) && (piVar4[3] == local_20)) && (piVar4[4] == iVar8)) {
              local_c = (uint *)0x1;
              break;
            }
            iVar17 = iVar17 + 1;
            piVar4 = piVar4 + 3;
          } while (iVar17 < *piVar14);
        }
        if (local_c != (uint *)0x0) {
          local_108.previous = g_currentExceptionFrame;
          DAT_00806738 = iVar8;
          g_currentExceptionFrame = &local_108;
          iVar17 = Library::MSVCRT::__setjmp3(local_108.jumpBuffer,0,unaff_EDI,unaff_ESI);
          iVar8 = local_1c;
          if (iVar17 == 0) {
            DVar10 = Library::DKW::DDX::FUN_006b9b40
                               (DAT_0080759c,0x10000001,local_24,local_20,local_1c,local_24,local_20
                                ,0,0,0);
            local_48 = (uint)(DVar10 == 0);
          }
          uVar22 = local_48;
          g_currentExceptionFrame = local_108.previous;
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
      } while (uVar22 == 0);
      if (iVar8 == 8) {
LAB_00570645:
        if (uVar22 == 0) {
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x792);
        }
      }
      iVar8 = local_10;
      if ((DAT_0080350c._2_1_ == '\x01') ||
         ((DAT_0080350c._2_1_ == '\x02' && (DAT_0080351f == '\x01')))) {
        local_8 = (byte *)((uint)local_8 | 4);
      }
      if (local_10 == 0) {
        Library::DKW::DV::FUN_006c3b00(DAT_008075a0,(LPCSTR)&DAT_00803408,(uint)local_8);
      }
      else {
        Library::DKW::DV::FUN_006c2ae0(DAT_008075a4,&DAT_00803408,(uint)local_8);
      }
      if (DAT_0080350c._2_1_ == '\x01') {
        iVar17 = 0;
        iVar26 = 0;
        iVar27 = DAT_0080759c[6];
        iVar28 = DAT_0080759c[7];
        if (iVar8 != 0) {
          Library::DKW::DV::FUN_006c2d30(DAT_008075a4,0,0,DAT_0080759c[6],DAT_0080759c[7]);
          goto cf_common_exit_0057073B;
        }
      }
      else {
        if (DAT_0080350c._2_1_ != '\x02') goto cf_common_exit_0057073B;
        iVar17 = ram0x0080350f;
        iVar26 = DAT_00803513;
        iVar27 = DAT_00803517;
        iVar28 = DAT_0080351b;
        if (iVar8 != 0) {
          Library::DKW::DV::FUN_006c2d30
                    (DAT_008075a4,ram0x0080350f,DAT_00803513,DAT_00803517,DAT_0080351b);
          goto cf_common_exit_0057073B;
        }
      }
      FUN_006c3fc0((int)DAT_008075a0,iVar17,iVar26,iVar27,iVar28);
cf_common_exit_0057073B:
      pSVar7 = local_18;
      thunk_FUN_00567220((int)&local_18->field_0x38);
      pSVar7->field_4EFA = 1;
      if (iVar8 == 0) {
        Library::DKW::DV::FUN_006c4000((int)DAT_008075a0);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      Library::DKW::DV::FUN_006c2d90(DAT_008075a4);
      RaiseInternalException(local_4c,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x7bc);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    if (uVar22 != 0x7101) {
      if (uVar22 == 0x7102) {
        thunk_FUN_0055dbf0(DAT_0080759c,10,2);
        *(undefined4 *)&pSVar7->field_0x1c = 1;
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      if (uVar22 != 0x7104) {
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      thunk_FUN_005718d0((int)pSVar7);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    iVar8 = *(int *)(param_1 + 0x14);
    local_10 = 1;
    if (iVar8 == 1) {
      puVar12 = (undefined4 *)&pSVar7->field_0x113a;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar12 = &DAT_00803408;
      for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      uVar22 = *(uint *)(DAT_00806740 + 4);
      if (uVar22 < *(uint *)(DAT_00806740 + 0xc)) {
        puVar12 = (undefined4 *)
                  (*(int *)(DAT_00806740 + 8) * uVar22 + *(int *)(DAT_00806740 + 0x1c));
        *(uint *)(DAT_00806740 + 4) = uVar22 + 1;
      }
      else {
        puVar12 = (undefined4 *)0x0;
      }
      if (puVar12 == (undefined4 *)0x0) {
        *(undefined4 *)&pSVar7->field_0x1146 = 1;
        *(undefined4 *)&pSVar7->field_0x114a = 0x6123;
      }
      else {
        *(undefined4 *)&pSVar7->field_0x1146 = 1;
        *(undefined4 *)&pSVar7->field_0x114e = 1;
        *(undefined4 *)&pSVar7->field_0x114a = 0x7101;
        puVar21 = puVar12;
        puVar24 = &DAT_00803408;
        for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar24 = *puVar21;
          puVar21 = puVar21 + 1;
          puVar24 = puVar24 + 1;
        }
        wsprintfA((LPSTR)&DAT_00803408,&DAT_007c6ee4,&pSVar7->field_0x164,puVar12);
      }
      piVar14 = local_44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar14 = 0;
        piVar14 = piVar14 + 1;
      }
      local_44[4] = 0x7100;
    }
    else if (iVar8 == 3) {
      puVar12 = &DAT_00803408;
      for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar12 = (undefined4 *)&pSVar7->field_0x113a;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      *(undefined4 *)&pSVar7->field_0x1146 = 1;
      *(undefined4 *)&pSVar7->field_0x114a = 0x6104;
      *(undefined4 *)&pSVar7->field_0x114e = 0;
      piVar14 = local_44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar14 = 0;
        piVar14 = piVar14 + 1;
      }
      local_44[4] = 0x7100;
      if ((DAT_00807330 & 2) != 0) {
        puVar12 = (undefined4 *)&stack0xfffff65c;
        for (iVar8 = 0xc6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        Library::MSVCRT::FUN_0072e730
                  (&pSVar7[1].field_0x2d0c,local_14,local_24c,local_44c,local_54c);
        Library::MSVCRT::__makepath
                  (&pSVar7[1].field_0x2e1c,(char *)local_14,(char *)local_24c,
                   PTR_s_CAMPAIGN_VPS_0079b03c,(char *)0x0);
        local_c = thunk_FUN_00683c70((uint *)&pSVar7[1].field_0x2e1c,&stack0xfffff65c,&local_50,
                                     (int *)0x0,(undefined *)0x0);
        if ((local_50 == 0x40) && (local_c != (uint *)0x0)) {
          uVar22 = local_c[1];
          if (*(int *)(param_1 + 0x18) == 0) {
            if (uVar22 < local_c[3]) {
              pcVar11 = (char *)(local_c[2] * uVar22 + local_c[7]);
              local_c[1] = uVar22 + 1;
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
              Library::MSVCRT::__makepath
                        ((char *)&DAT_00803408,(char *)local_14,(char *)local_24c,pcVar11,
                         (char *)0x0);
            }
          }
          else {
            if (uVar22 < local_c[3]) {
              local_8 = (byte *)(local_c[2] * uVar22 + local_c[7]);
              local_c[1] = uVar22 + 1;
            }
            else {
              local_8 = (byte *)0x0;
            }
            if (local_8 != (byte *)0x0) {
              do {
                Library::MSVCRT::FUN_0072e730(local_8,(byte *)0x0,(byte *)0x0,local_34c,(byte *)0x0)
                ;
                FUN_006b77e0((char *)local_34c,local_34c);
                FUN_006b77e0((char *)local_44c,local_44c);
                pbVar19 = local_44c;
                pbVar23 = local_34c;
                do {
                  bVar3 = *pbVar23;
                  bVar25 = bVar3 < *pbVar19;
                  if (bVar3 != *pbVar19) {
LAB_00570ab1:
                    iVar8 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
                    goto LAB_00570ab6;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar23[1];
                  bVar25 = bVar3 < pbVar19[1];
                  if (bVar3 != pbVar19[1]) goto LAB_00570ab1;
                  pbVar23 = pbVar23 + 2;
                  pbVar19 = pbVar19 + 2;
                } while (bVar3 != 0);
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
                  Library::MSVCRT::__makepath
                            ((char *)&DAT_00803408,(char *)local_14,(char *)local_24c,
                             (char *)local_8,(char *)0x0);
                  local_8 = (byte *)0x0;
                }
                else {
                  uVar22 = local_c[1];
                  if (uVar22 < local_c[3]) {
                    local_8 = (byte *)(local_c[2] * uVar22 + local_c[7]);
                    local_c[1] = uVar22 + 1;
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
      puVar12 = (undefined4 *)&pSVar7->field_0x113a;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      piVar14 = local_44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar14 = 0;
        piVar14 = piVar14 + 1;
      }
      *(undefined4 *)&pSVar7->field_0x1146 = 1;
      *(undefined4 *)&pSVar7->field_0x114a = 0x6108;
      local_44[4] = 0x7100;
      puVar12 = (undefined4 *)&pSVar7[1].field_0x1e05;
      puVar21 = &DAT_00803408;
      for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar21 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar21 = puVar21 + 1;
      }
    }
    else {
      local_10 = 0;
    }
LAB_00570c2f:
    if (local_10 == 0) {
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    pvVar13 = FindFirstFileA((LPCSTR)&DAT_00803408,&local_68c);
    if (pvVar13 != (HANDLE)0xffffffff) {
      (*pSVar7->vtable->GetMessage)(pSVar7,(int)local_44);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    pSVar18 = pSVar7->vtable;
    piVar14 = (int *)&pSVar7->field_0x113a;
LAB_00570c77:
    (*pSVar18->GetMessage)(pSVar7,(int)piVar14);
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

