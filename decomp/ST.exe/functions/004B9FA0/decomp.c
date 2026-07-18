
int FUN_004b9fa0(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  void *pvVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  code *pcVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  undefined *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  undefined4 extraout_ECX;
  uint uVar21;
  undefined2 extraout_var;
  undefined4 unaff_ESI;
  int *piVar22;
  byte *pbVar23;
  void *unaff_EDI;
  int *piVar24;
  undefined4 *puVar25;
  byte *pbVar26;
  bool bVar27;
  char cVar28;
  int aiStack_6dc [17];
  undefined4 auStack_698 [17];
  undefined4 auStack_654 [17];
  undefined4 auStack_610 [17];
  int aiStack_5cc [17];
  undefined4 auStack_588 [17];
  int aiStack_544 [17];
  int aiStack_500 [17];
  int local_4bc [5];
  undefined4 local_4a8;
  undefined4 local_465;
  int local_ea;
  uint local_e6;
  int local_e2;
  uint local_de;
  int local_da;
  uint local_d6;
  int local_d2;
  uint local_ce;
  int local_ca;
  undefined4 local_c4;
  undefined4 local_c0 [16];
  int *local_80;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined2 local_62;
  int local_5c [2];
  int local_54;
  undefined2 local_50;
  int local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint *local_18;
  int local_14;
  byte *local_10;
  int local_c;
  byte *local_8;
  
  local_c4 = DAT_00858df8;
  DAT_00858df8 = &local_c4;
  iVar14 = __setjmp3(local_c0,0,unaff_EDI,unaff_ESI);
  if (iVar14 != 0) {
    DAT_00858df8 = (undefined4 *)local_c4;
    iVar20 = FUN_006ad4d0(s_E____titans_Artem_TLO_base_cpp_007ac820,0x6d9,0,iVar14,
                          (byte *)s_TLOBaseTy__GetMessage_error_mess_007ac848);
    if (iVar20 != 0) {
      pcVar11 = (code *)swi(3);
      iVar14 = (*pcVar11)();
      return iVar14;
    }
    FUN_006a5e40(iVar14,0,0x7ac820,0x6da);
    return iVar14;
  }
  thunk_FUN_0041e530(param_1);
  uVar15 = *(uint *)(param_1 + 0x10);
  if (uVar15 < 0x112) {
    if (uVar15 == 0x111) {
      iVar14 = local_80[0x16b];
      if (iVar14 - 0x37U < 0x38) {
        switch(iVar14) {
        case 0x37:
        case 0x6c:
          thunk_FUN_004e8d40(local_80);
          break;
        case 0x38:
        case 0x39:
        case 0x4f:
        case 0x5e:
        case 0x61:
          thunk_FUN_004e0220((int)local_80);
          break;
        case 0x53:
          thunk_FUN_004cd790((int)local_80);
          break;
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
          thunk_FUN_004ce6e0(local_80);
          break;
        case 0x69:
          thunk_FUN_004dcbc0((int)local_80);
          break;
        case 0x6a:
          thunk_FUN_004c5e30((int)local_80);
          break;
        case 0x6e:
          thunk_FUN_004dd500((int)local_80,(uint)(&BYTE_004bd2b1)[iVar14]);
        }
      }
      if (*(int *)(&DAT_00794d94 + *(int *)((int)local_80 + 0x235) * 4) == 0) {
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      thunk_FUN_004c2e20((int)local_80);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if (uVar15 < 0x109) {
      if (uVar15 == 0x108) {
        iVar20 = 0;
        iVar14 = 0;
        do {
          piVar24 = (int *)(*(int *)((int)local_80 + 0x1f5) + iVar14);
          auStack_588[iVar20] = *(undefined4 *)(*(int *)((int)local_80 + 0x1f5) + 0x1c + iVar14);
          aiStack_6dc[iVar20] = piVar24[8];
          if (*piVar24 != 0) {
            cVar28 = (char)iVar20;
            iVar19 = thunk_FUN_004ac910((void *)((int)local_80 + 0x1d5),cVar28);
            aiStack_500[iVar20] = iVar19;
            iVar19 = thunk_FUN_004ac910((void *)((int)local_80 + 0x1d5),cVar28);
            uVar18 = thunk_FUN_004acdd0((void *)((int)local_80 + 0x1d5),cVar28,iVar19);
            auStack_698[iVar20] = uVar18;
          }
          iVar14 = iVar14 + 0x24;
          iVar20 = iVar20 + 1;
        } while (iVar14 < 0x264);
        if (*(int *)((int)local_80 + 0x5ff) != 0) {
          iVar20 = 0;
          iVar14 = 0;
          do {
            pvVar5 = *(void **)((int)local_80 + 0x5ff);
            iVar19 = *(int *)((int)pvVar5 + 0x20);
            piVar24 = (int *)(iVar19 + iVar14);
            auStack_610[iVar20] = *(undefined4 *)(iVar19 + 0x1c + iVar14);
            aiStack_544[iVar20] = piVar24[8];
            if (*piVar24 != 0) {
              cVar28 = (char)iVar20;
              iVar19 = thunk_FUN_004ac910(pvVar5,cVar28);
              pvVar5 = *(void **)((int)local_80 + 0x5ff);
              aiStack_5cc[iVar20] = iVar19;
              iVar19 = thunk_FUN_004ac910(pvVar5,cVar28);
              uVar18 = thunk_FUN_004acdd0(*(void **)((int)local_80 + 0x5ff),cVar28,iVar19);
              auStack_654[iVar20] = uVar18;
            }
            iVar14 = iVar14 + 0x24;
            iVar20 = iVar20 + 1;
          } while (iVar14 < 0x264);
        }
        thunk_FUN_004cabb0(1);
        iVar20 = 0;
        iVar14 = 0;
        do {
          *(undefined4 *)(*(int *)((int)local_80 + 0x1f5) + 0x1c + iVar14) = auStack_588[iVar20];
          *(int *)(*(int *)((int)local_80 + 0x1f5) + 0x20 + iVar14) = aiStack_6dc[iVar20];
          piVar24 = (int *)(*(int *)((int)local_80 + 0x1f5) + iVar14);
          iVar19 = *piVar24;
          if (iVar19 != 0) {
            *(undefined4 *)(piVar24[1] + aiStack_500[iVar20] * 4) =
                 *(undefined4 *)(aiStack_500[iVar20] * 4 + 0x31 + iVar19);
            uVar18 = auStack_698[iVar20];
            iVar19 = thunk_FUN_004ac910((void *)((int)local_80 + 0x1d5),(char)iVar20);
            thunk_FUN_004ace00((void *)((int)local_80 + 0x1d5),(char)iVar20,iVar19,uVar18);
          }
          iVar14 = iVar14 + 0x24;
          iVar20 = iVar20 + 1;
        } while (iVar14 < 0x264);
        if (*(int *)((int)local_80 + 0x5ff) == 0) {
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        iVar20 = 0;
        iVar14 = 0;
        do {
          *(undefined4 *)(*(int *)(*(int *)((int)local_80 + 0x5ff) + 0x20) + 0x1c + iVar14) =
               auStack_610[iVar20];
          *(int *)(*(int *)(*(int *)((int)local_80 + 0x5ff) + 0x20) + 0x20 + iVar14) =
               aiStack_544[iVar20];
          iVar19 = *(int *)(*(int *)((int)local_80 + 0x5ff) + 0x20);
          iVar6 = *(int *)(iVar19 + iVar14);
          if (iVar6 != 0) {
            *(undefined4 *)(*(int *)(iVar19 + iVar14 + 4) + aiStack_5cc[iVar20] * 4) =
                 *(undefined4 *)(aiStack_5cc[iVar20] * 4 + 0x31 + iVar6);
            uVar18 = auStack_654[iVar20];
            iVar19 = thunk_FUN_004ac910(*(void **)((int)local_80 + 0x5ff),(char)iVar20);
            thunk_FUN_004ace00(*(void **)((int)local_80 + 0x5ff),(char)iVar20,iVar19,uVar18);
          }
          iVar14 = iVar14 + 0x24;
          iVar20 = iVar20 + 1;
        } while (iVar14 < 0x264);
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      if (uVar15 == 0) {
        if (local_80[0x12d] != 0) {
          if ((*(int *)((int)local_80 + 0x245) == 0) && (*(int *)((int)local_80 + 0x361) == 0)) {
            bVar27 = true;
          }
          else {
            bVar27 = false;
          }
          if ((bVar27) && (*(int *)((int)local_80 + 0x249) != 6)) {
            iVar14 = *(int *)((int)DAT_00802a38 + 0xe4);
            local_80[0x12f] = 1;
            local_80[0x12e] = iVar14;
            (**(code **)(*local_80 + 0x90))(3,0x360);
            thunk_FUN_004b80d0(6,1);
            thunk_FUN_004cc880(local_80,4);
          }
        }
        thunk_FUN_004cbad0((int)local_80);
        thunk_FUN_004b8c80(local_80);
        if (*(int *)((int)local_80 + 0x5ff) != 0) {
          thunk_FUN_004cbe10(local_80);
        }
        if (*(int *)((int)local_80 + 0x245) == 0) {
          if (*(int *)((int)local_80 + 0x261) != 0) {
            thunk_FUN_004c3570();
          }
          thunk_FUN_004c84c0(local_80);
          switch(local_80[0x16b]) {
          case 0x32:
          case 0x40:
          case 0x49:
          case 0x5c:
            thunk_FUN_004cf410();
            break;
          case 0x33:
            thunk_FUN_004e27e0((int)local_80);
            break;
          case 0x34:
          case 0x5b:
            thunk_FUN_004ddd50(local_80);
            break;
          case 0x36:
          case 0x5d:
            thunk_FUN_004e4b10((int)local_80);
            break;
          case 0x37:
          case 0x6c:
            thunk_FUN_004e9050((int)local_80);
            break;
          case 0x38:
          case 0x39:
          case 0x3b:
          case 0x4f:
          case 0x52:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x61:
            thunk_FUN_004e0830(local_80);
            break;
          case 0x3a:
            thunk_FUN_004d9820(local_80);
            break;
          case 0x41:
            thunk_FUN_004e3910(local_80);
            break;
          case 0x43:
            thunk_FUN_004df3b0(local_80);
            break;
          case 0x45:
            thunk_FUN_004ea870(local_80);
            break;
          case 0x48:
            thunk_FUN_004dfb00((int)local_80);
            break;
          case 0x4c:
            thunk_FUN_004dc760(local_80);
            break;
          case 0x4d:
            thunk_FUN_004dec10(local_80);
            break;
          case 0x4e:
            thunk_FUN_004d9c60();
            break;
          case 99:
            thunk_FUN_004b7aa0((int)local_80);
            break;
          case 100:
            thunk_FUN_004e46f0(local_80);
            break;
          case 0x68:
            thunk_FUN_004dc260((int)local_80);
            break;
          case 0x69:
            thunk_FUN_004dcbf0((int)local_80);
            break;
          case 0x6a:
            thunk_FUN_004c5eb0((int)local_80);
            break;
          case 0x6e:
            thunk_FUN_004dd570((int)local_80);
            break;
          case 0x6f:
          case 0x73:
            thunk_FUN_004eccf0((int)local_80);
            break;
          case 0x70:
            thunk_FUN_004d8f80((int)local_80);
            break;
          case 0x72:
            thunk_FUN_004ece80();
          }
        }
        if (local_80[0xf7] != 0) {
          thunk_FUN_004c6d00(local_80);
        }
        thunk_FUN_004e9ce0();
        if ((local_80[0x104] != 0) &&
           ((uint)(local_80[0x107] + local_80[0x106]) <= *(uint *)((int)DAT_00802a38 + 0xe4))) {
          local_80[0x104] = 0;
        }
        if ((local_80[0x108] != 0) &&
           ((uint)(local_80[0x10a] + local_80[0x109]) <= *(uint *)((int)DAT_00802a38 + 0xe4))) {
          local_80[0x108] = 0;
        }
        if (local_80[0x128] != 0) {
          iVar14 = (**(code **)(*local_80 + 0x7c))();
          if (iVar14 < 100) {
            if (local_80[0x129] + 0x7dU <= *(uint *)((int)DAT_00802a38 + 0xe4)) {
              thunk_FUN_004b9bb0(local_80,(-(uint)(local_80[0x12a] != 0) & 5) + 5,
                                 (short)local_80[299],0xffff);
              local_80[0x129] = *(int *)((int)DAT_00802a38 + 0xe4);
            }
          }
          else {
            local_80[0x128] = 0;
          }
        }
        thunk_FUN_004cc370(local_80);
        if (local_80[0x130] == 0) {
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        pvVar5 = *(void **)((int)local_80 + 0x61f);
        if (pvVar5 == (void *)0x0) {
          puVar17 = thunk_FUN_00631fd0();
          *(undefined4 **)((int)local_80 + 0x61f) = puVar17;
          uVar18 = (**(code **)(*local_80 + 0x2c))();
          thunk_FUN_006324c0(*(void **)((int)local_80 + 0x61f),2,uVar18);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (local_80[0xb] == 0) {
          thunk_FUN_00636060(pvVar5,(int)*(short *)((int)local_80 + 0x41),
                             (int)*(short *)((int)local_80 + 0x43),
                             *(short *)((int)local_80 + 0x45) + 0x14,(int)(short)local_80[0x1b],100)
          ;
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        thunk_FUN_00636060(pvVar5,(local_80[0x16c] + 1) * 0xc9,(local_80[0x16d] + 1) * 0xc9,
                           local_80[0x16e] * 200 + 0x78,(int)(short)local_80[0x1b],100);
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      if (uVar15 == 2) {
        iVar14 = *(int *)(param_1 + 0x14);
        if (local_80 == (int *)0x0) {
          piVar24 = (int *)0x0;
        }
        else {
          piVar24 = local_80 + 0x16b;
        }
        piVar22 = (int *)(iVar14 + 0x14);
        for (iVar20 = 0x10; iVar20 != 0; iVar20 = iVar20 + -1) {
          *piVar24 = *piVar22;
          piVar22 = piVar22 + 1;
          piVar24 = piVar24 + 1;
        }
        *(short *)piVar24 = (short)*piVar22;
        *(undefined1 *)((int)piVar24 + 2) = *(undefined1 *)((int)piVar22 + 2);
        *(undefined4 *)((int)local_80 + 0x231) = *(undefined4 *)(iVar14 + 0xc);
        *(int *)((int)local_80 + 0x235) = local_80[0x16b] + -0x32;
        uVar15 = thunk_FUN_004406c0((char)local_80[9]);
        *(uint *)((int)local_80 + 0x239) = (uVar15 & 0xff) - 1;
        *(int *)((int)local_80 + 0x23d) = local_80[9];
        if (*(int *)(&DAT_00791f38 + *(int *)((int)local_80 + 0x235) * 4) == 2) {
          *(undefined **)((int)local_80 + 0x5fb) = &DAT_007aca60;
        }
        else if (*(int *)(&DAT_00791f38 + *(int *)((int)local_80 + 0x235) * 4) == 1) {
          *(undefined **)((int)local_80 + 0x5fb) = &DAT_007ace00;
        }
        else {
          *(undefined **)((int)local_80 + 0x5fb) = &DAT_007ac988;
        }
        local_80[0x12d] = 0;
        local_80[300] = 0;
        *(undefined4 *)((int)local_80 + 0x255) =
             *(undefined4 *)(&DAT_007914e8 + *(int *)((int)local_80 + 0x235) * 4);
        local_80[0x115] = 0;
        local_80[0x116] = 0xff;
        if (local_80[0xb] == 0) {
          *(undefined4 *)((int)local_80 + 0x60b) = 0xb4;
          *(undefined4 *)((int)local_80 + 0x60f) = 0x8c;
          *(undefined4 *)((int)local_80 + 0x613) = 0x5a;
          *(undefined4 *)((int)local_80 + 0x617) = 0x45;
        }
        else if (local_80[0xb] == 1) {
          *(undefined4 *)((int)local_80 + 0x60b) = 0xf0;
          *(undefined4 *)((int)local_80 + 0x60f) = 0xbe;
          *(undefined4 *)((int)local_80 + 0x613) = 0x78;
          *(undefined4 *)((int)local_80 + 0x617) = 0x56;
        }
        else {
          *(undefined4 *)((int)local_80 + 0x617) = 0xffffffff;
          *(undefined4 *)((int)local_80 + 0x613) = 0xffffffff;
          *(undefined4 *)((int)local_80 + 0x60f) = 0xffffffff;
          *(undefined4 *)((int)local_80 + 0x60b) = 0xffffffff;
        }
        thunk_FUN_00417a00(local_80,0);
        iVar14 = thunk_FUN_00417a20(local_80,(short)local_80[0x16c],(short)local_80[0x16d],
                                    (short)local_80[0x16e],1);
        if (iVar14 != 0) {
          FUN_006a5e40(-5,DAT_007ed77c,0x7ac820,0x290);
        }
        thunk_FUN_0041d900(local_80,(short)local_80[0x16c],(short)local_80[0x16d],
                           (short)local_80[0x16e]);
        thunk_FUN_004b9920((int)local_80);
        switch(*(undefined4 *)((int)local_80 + 0x231)) {
        case 0:
        case 1:
        case 3:
          if ((100 < *(int *)((int)local_80 + 0x5db)) || (*(int *)((int)local_80 + 0x5db) < 0)) {
            *(undefined4 *)((int)local_80 + 0x5db) = 100;
          }
          if ((100 < *(int *)((int)local_80 + 0x5d7)) || (*(int *)((int)local_80 + 0x5d7) < 0)) {
            *(undefined4 *)((int)local_80 + 0x5d7) = 100;
          }
          uVar15 = thunk_FUN_004406c0(*(char *)((int)local_80 + 0x23d));
          *(int *)((int)local_80 + 0x241) =
               (*(int *)(&DAT_007e4178 + ((uVar15 & 0xff) + *(int *)((int)local_80 + 0x235) * 3) * 4
                        ) * *(int *)((int)local_80 + 0x5d7)) / 100;
          local_80[0x104] = 0;
          local_80[0x10b] = 0;
          local_80[0x128] = 0;
          local_80[0x130] = 0;
          iVar14 = local_80[0x16b];
          if ((((iVar14 != 0x4d) || (local_80[0x134] == 2)) &&
              ((iVar14 != 0x4c || (local_80[0x134] == 2)))) &&
             ((iVar14 != 0x43 || (local_80[0x134] == 2)))) {
            iVar14 = (**(code **)(*local_80 + 0x2c))();
            thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar14 >> 8),(char)local_80[9]),iVar14);
          }
          *(undefined4 *)((int)local_80 + 0x259) = 0;
          thunk_FUN_004c3020((int)local_80);
          thunk_FUN_004c71f0((int)local_80);
          thunk_FUN_004c6b50(local_80);
          thunk_FUN_004cc220((int)local_80);
          thunk_FUN_004cd390((int)local_80);
          thunk_FUN_004e9c00((int)local_80);
          switch(local_80[0x16b]) {
          case 0x32:
          case 0x40:
          case 0x49:
          case 0x5c:
            thunk_FUN_004ce700((int)local_80);
            break;
          case 0x33:
            thunk_FUN_004e1e30((int)local_80);
            break;
          case 0x34:
          case 0x5b:
            thunk_FUN_004dd850((int)local_80);
            break;
          case 0x36:
          case 0x3d:
          case 0x5d:
            thunk_FUN_004e4aa0(local_80);
            break;
          case 0x37:
          case 0x6c:
            thunk_FUN_004e8cc0(local_80);
            break;
          case 0x38:
          case 0x39:
          case 0x3b:
          case 0x4f:
          case 0x52:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x61:
            thunk_FUN_004e0040((int)local_80);
            break;
          case 0x3a:
            thunk_FUN_004d9790((int)local_80);
            break;
          case 0x41:
            thunk_FUN_004e3880((int)local_80);
            break;
          case 0x43:
            thunk_FUN_004df2b0((int)local_80);
            break;
          case 0x44:
            thunk_FUN_004de7b0((int)local_80);
            break;
          case 0x45:
            thunk_FUN_004ea7a0((int)local_80);
            break;
          case 0x48:
            thunk_FUN_004df8c0((int)local_80);
            break;
          case 0x4c:
            thunk_FUN_004dc660((int)local_80);
            break;
          case 0x4d:
            thunk_FUN_004deba0((int)local_80);
            break;
          case 0x4e:
            thunk_FUN_004d9bb0((int)local_80);
            break;
          case 0x50:
            thunk_FUN_004b6d20((int)local_80);
            break;
          case 0x53:
            thunk_FUN_004cd6b0((int)local_80);
            break;
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5a:
            thunk_FUN_004ce640(local_80);
          case 0x35:
            thunk_FUN_004e2a90((int)local_80);
            break;
          case 99:
            thunk_FUN_004b7a60((int)local_80);
            break;
          case 100:
            thunk_FUN_004e4630((int)local_80);
            break;
          case 0x68:
            thunk_FUN_004dc1e0((int)local_80);
            break;
          case 0x69:
            thunk_FUN_004dcb70((int)local_80);
            break;
          case 0x6a:
            thunk_FUN_004c5de0((int)local_80);
            break;
          case 0x6d:
            thunk_FUN_004dba20((int)local_80);
            break;
          case 0x6e:
            thunk_FUN_004dd460((int)local_80);
            break;
          case 0x6f:
          case 0x73:
            thunk_FUN_004ecc70(local_80);
            break;
          case 0x70:
            thunk_FUN_004d8d00((int)local_80);
            break;
          case 0x72:
            thunk_FUN_004ecdd0((int)local_80);
          }
          if (-1 < local_80[0x16f]) {
            *(short *)(local_80 + 0xc) = (short)local_80[0x16f];
          }
          thunk_FUN_00419c70(local_80,*(int *)((int)local_80 + 0x231),
                             (uint)(*(int *)((int)local_80 + 0x231) == 0));
          if (*(int *)(&DAT_00794d94 + *(int *)((int)local_80 + 0x235) * 4) != 0) {
            thunk_FUN_004c2dd0((int)local_80);
          }
          thunk_FUN_004b80d0(0,1);
          if (*(int *)((int)local_80 + 0x245) == 0) {
            iVar14 = *(int *)(*(int *)((int)local_80 + 0x1f5) + 0x20c);
            iVar20 = *(int *)(*(int *)((int)local_80 + 0x1f5) + 0x208);
            if (iVar20 < iVar14) {
              uVar15 = local_80[7] * 0x41c64e6d + 0x3039;
              local_80[7] = uVar15;
              iVar20 = (uVar15 >> 0x10) % ((iVar14 - iVar20) + 1U) + iVar20;
              thunk_FUN_004abe40((void *)((int)local_80 + 0x1d5),'\x0e',iVar20);
              thunk_FUN_004abe40((void *)((int)local_80 + 0x1d5),'\r',iVar20);
            }
          }
          if ((*(int *)(&DAT_00792778 + *(int *)((int)local_80 + 0x235) * 4) == 0) ||
             (iVar14 = thunk_FUN_004e81b0(local_80[9],*(int *)((int)local_80 + 0x235),0),
             iVar14 == 0)) {
            puVar16 = (undefined *)0x5;
          }
          else {
            puVar16 = (undefined *)thunk_FUN_004e81b0(local_80[9],*(int *)((int)local_80 + 0x235),0)
            ;
          }
          thunk_FUN_0041c3f0(local_80,puVar16);
          if ((*(int *)((int)local_80 + 0x231) == 1) &&
             (local_14 = 0, DAT_008117bc != (undefined4 *)0x0)) {
            local_64 = (undefined2)local_80[9];
            local_68 = CONCAT22(*(undefined2 *)((int)local_80 + 0x32),local_64);
            local_6c = 0x5dd0;
            iVar14 = FUN_006e62d0(DAT_00802a38,*(int *)((int)local_80 + 0x5d3),&local_14);
            if ((iVar14 == 0) && (local_14 != 0)) {
              local_62 = *(undefined2 *)(local_14 + 0x32);
            }
            else {
              local_62 = 0xffff;
            }
            (**(code **)*DAT_008117bc)(local_7c);
          }
          uVar15 = thunk_FUN_004406c0(*(char *)((int)local_80 + 0x23d));
          if (*(int *)((int)local_80 + 0x241) !=
              *(int *)(&DAT_007e4178 + ((uVar15 & 0xff) + *(int *)((int)local_80 + 0x235) * 3) * 4))
          {
            thunk_FUN_004cc840(local_80);
          }
          if (local_80[9] == (uint)*(byte *)(local_80[4] + 0x112d)) {
            thunk_FUN_004d8b70((char)local_80[9]);
          }
          if (((*(int *)((int)local_80 + 0x231) == 1) &&
              (local_80[9] == (uint)*(byte *)(local_80[4] + 0x112d))) &&
             (uVar15 = thunk_FUN_004406c0(*(char *)((int)local_80 + 0x23d)),
             *(int *)(&DAT_007952b8 + ((uVar15 & 0xff) + *(int *)((int)local_80 + 0x235) * 3) * 4)
             != 0)) {
            iVar14 = *local_80;
            uVar15 = thunk_FUN_004406c0(*(char *)((int)local_80 + 0x23d));
            (**(code **)(iVar14 + 0x90))
                      (4,*(undefined4 *)
                          (&DAT_007952b8 +
                          ((uVar15 & 0xff) + *(int *)((int)local_80 + 0x235) * 3) * 4));
          }
          if (((*(int *)((int)local_80 + 0x231) == 0) || (*(int *)((int)local_80 + 0x231) == 3)) &&
             (DAT_00811784 != (void *)0x0)) {
            uVar15 = thunk_FUN_004406c0((char)local_80[9]);
            thunk_FUN_005f23d0(DAT_00811784,local_80[0x16c],local_80[0x16d],local_80[0x16e],
                               CONCAT31((int3)((uint)extraout_ECX >> 8),(char)local_80[0xb]),
                               local_80[0x16b],uVar15 & 0xff);
          }
          if (*(int *)((int)local_80 + 0x5df) != 0) {
            pvVar5 = (void *)((int)local_80 + 0x1d5);
            local_80[0x132] = *(short *)(DAT_00806724 + 0x23) + -1;
            local_80[0x133] = *(int *)((int)DAT_00802a38 + 0xe4);
            thunk_FUN_004ace60(pvVar5,'\x0e');
            thunk_FUN_004ace60(pvVar5,'\r');
            thunk_FUN_004ace60(pvVar5,'\f');
            thunk_FUN_004ace60(pvVar5,'\v');
            thunk_FUN_004ace60(pvVar5,'\t');
            thunk_FUN_004ace60(pvVar5,'\b');
            thunk_FUN_004ace60(pvVar5,'\a');
            thunk_FUN_004ace30(pvVar5,*(uint *)(DAT_00806724 + 0x30 + local_80[0x132] * 4),
                               (int)*(short *)(DAT_00806724 + 0x2c));
            thunk_FUN_0041f630(local_80);
            thunk_FUN_004cba30((int)local_80);
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          break;
        case 2:
          local_c = *(int *)(param_1 + 0x14);
          puVar17 = (undefined4 *)(local_c + 0x57);
          puVar25 = (undefined4 *)(-(uint)(local_80 != (int *)0x0) & (uint)((int)local_80 + 0x231));
          for (iVar14 = 0xde; iVar14 != 0; iVar14 = iVar14 + -1) {
            *puVar25 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar25 = puVar25 + 1;
          }
          *(undefined2 *)puVar25 = *(undefined2 *)puVar17;
          *(undefined1 *)((int)puVar25 + 2) = *(undefined1 *)((int)puVar17 + 2);
          *(undefined4 *)((int)local_80 + 0x231) = 2;
          if (local_80[0xf6] != 0) {
            iVar14 = FUN_006aac70(local_80[0xf6] * 0x27);
            *(int *)((int)local_80 + 0x607) = iVar14;
          }
          if (local_80[0xf5] != 0) {
            uVar21 = local_80[0xf5] * 0x27;
            puVar17 = (undefined4 *)(*(int *)(local_c + 0x3d2) + local_c);
            puVar25 = *(undefined4 **)((int)local_80 + 0x607);
            for (uVar15 = uVar21 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *puVar25 = *puVar17;
              puVar17 = puVar17 + 1;
              puVar25 = puVar25 + 1;
            }
            for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
              *(undefined1 *)puVar25 = *(undefined1 *)puVar17;
              puVar17 = (undefined4 *)((int)puVar17 + 1);
              puVar25 = (undefined4 *)((int)puVar25 + 1);
            }
          }
          thunk_FUN_004c96e0((int)local_80);
          local_34 = (undefined4 *)FUN_006aac70(0x44);
          iVar14 = local_c;
          local_28 = DAT_008073cc;
          local_30 = 0;
          local_1c = 0;
          local_24 = DAT_008032b8;
          local_20 = 0;
          local_34[1] = DAT_00806774;
          local_34[2] = DAT_00806774;
          *local_34 = DAT_00806774;
          local_34[0xf] = DAT_00806774;
          local_34[0x10] = DAT_0080678c;
          local_34[0xe] = DAT_0080678c;
          local_34[0xd] = DAT_0080678c;
          local_34[0xc] = DAT_0080678c;
          local_34[0xb] = DAT_0080678c;
          local_34[10] = 0;
          local_34[9] = DAT_0080678c;
          local_34[8] = DAT_0080678c;
          local_34[7] = DAT_0080678c;
          if (*(int *)((int)local_80 + 0x245) == 1) {
            if (*(int *)((int)local_80 + 0x5df) == 5) {
              local_30 = *(undefined4 *)(DAT_00806724 + 0x30 + local_80[0x132] * 4);
              local_2c = (int)*(short *)(DAT_00806724 + 0x2c);
            }
            else {
              local_34[5] = DAT_00806764;
              local_34[4] = DAT_00806774;
              local_34[6] = DAT_00806774;
            }
          }
          if (*(int *)((int)local_80 + 0x245) == 6) {
            local_34[5] = DAT_0080678c;
            local_34[4] = DAT_00806764;
          }
          thunk_FUN_004adba0((int *)&local_34,(undefined4 *)(*(int *)(local_c + 0x3da) + local_c));
          if ((*(int *)((int)local_80 + 0x5f7) != 0) &&
             (*(int *)(&DAT_00790c2c + *(int *)((int)local_80 + 0x235) * 4) != 0)) {
            iVar20 = 1;
            uVar21 = 0xc;
            uVar15 = thunk_FUN_004ad650((int)local_80 + 0x1d5);
            FUN_006ea190(*(void **)((int)local_80 + 0x211),uVar15,uVar21,iVar20);
          }
          if (*(int *)(iVar14 + 0x3de) != 0) {
            puVar17 = (undefined4 *)FUN_0072e530(0x40);
            if (puVar17 == (undefined4 *)0x0) {
              uVar18 = 0;
            }
            else {
              uVar18 = thunk_FUN_004ab810(puVar17);
            }
            *(undefined4 *)((int)local_80 + 0x5ff) = uVar18;
            iVar14 = thunk_FUN_004ad1f0(DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
            if (iVar14 != 0) {
              FUN_006a5e40(iVar14,DAT_007ed77c,0x7ac820,0x365);
            }
            puVar17 = local_34;
            for (iVar14 = 0x11; iVar14 != 0; iVar14 = iVar14 + -1) {
              *puVar17 = 0;
              puVar17 = puVar17 + 1;
            }
            switch(local_80[0x16b]) {
            case 0x32:
            case 0x40:
            case 0x49:
            case 0x5c:
              local_34[0xe] = DAT_0080677c;
              local_34[0xc] = DAT_0080677c;
              local_34[0xd] = DAT_0080677c;
              break;
            case 0x45:
            case 0x4e:
            case 0x52:
            case 0x5f:
            case 0x69:
            case 0x70:
            case 0x72:
              local_34[0xe] = DAT_00806774;
            }
            local_30 = 0;
            local_1c = 0;
            local_28 = 0;
            thunk_FUN_004adba0((int *)&local_34,(undefined4 *)(*(int *)(local_c + 0x3e2) + local_c))
            ;
            uVar21 = 10;
            iVar14 = thunk_FUN_004ad650((int)local_80 + 0x1d5);
            uVar15 = thunk_FUN_004ad650(*(int *)((int)local_80 + 0x5ff));
            FUN_006ea340(*(void **)((int)local_80 + 0x211),uVar15,iVar14,uVar21);
            iVar14 = local_c;
          }
          if (*(int *)(iVar14 + 0x3ee) != 0) {
            puVar17 = (undefined4 *)FUN_0072e530(0x40);
            if (puVar17 == (undefined4 *)0x0) {
              uVar18 = 0;
            }
            else {
              uVar18 = thunk_FUN_004ab810(puVar17);
            }
            *(undefined4 *)((int)local_80 + 0x603) = uVar18;
            iVar14 = thunk_FUN_004ad1f0(DAT_008073cc,*(uint *)((int)local_80 + 0x613),
                                        *(uint *)((int)local_80 + 0x617),0,
                                        *(uint *)((int)local_80 + 0x60b),
                                        *(uint *)((int)local_80 + 0x60f),0x11);
            if (iVar14 != 0) {
              FUN_006a5e40(iVar14,DAT_007ed77c,0x7ac820,0x386);
            }
            puVar17 = local_34;
            for (iVar14 = 0x11; iVar14 != 0; iVar14 = iVar14 + -1) {
              *puVar17 = 0;
              puVar17 = puVar17 + 1;
            }
            if (local_80[0x10f] == 1) {
              local_34[0xe] = DAT_00806764;
            }
            else {
              local_34[0xe] = DAT_0080678c;
            }
            local_30 = 0;
            local_1c = 0;
            local_28 = 0;
            thunk_FUN_004adba0((int *)&local_34,(undefined4 *)(*(int *)(local_c + 0x3f2) + local_c))
            ;
            if (((local_80[0x111] != 0) && (local_80[0x112] != 0)) && (-1 < local_80[0x113])) {
              thunk_FUN_004abb30(6);
              uVar21 = 6;
              iVar14 = thunk_FUN_004ad650((int)local_80 + 0x1d5);
              uVar15 = thunk_FUN_004ad650(*(int *)((int)local_80 + 0x603));
              FUN_006ea340(*(void **)((int)local_80 + 0x211),uVar15,iVar14,uVar21);
            }
          }
          FUN_006ab060(&local_34);
          if ((local_80[0x11b] == 4) && (local_80[0x124] != 0)) {
            iVar14 = 0;
            uVar15 = thunk_FUN_004ad650((int)local_80 + 0x1d5);
            FUN_006eabf0(*(void **)((int)local_80 + 0x211),uVar15,iVar14);
            if (*(int *)((int)local_80 + 0x5ff) != 0) {
              iVar14 = 0;
              uVar15 = thunk_FUN_004ad650(*(int *)((int)local_80 + 0x5ff));
              FUN_006eabf0(*(void **)((int)local_80 + 0x211),uVar15,iVar14);
            }
            if (*(int *)((int)local_80 + 0x603) != 0) {
              iVar14 = 0;
              uVar15 = thunk_FUN_004ad650(*(int *)((int)local_80 + 0x603));
              FUN_006eabf0(*(void **)((int)local_80 + 0x211),uVar15,iVar14);
            }
          }
          thunk_FUN_00422210((undefined4 *)(*(int *)(local_c + 0x3ea) + local_c));
          uVar18 = CONCAT22(extraout_var,*(undefined2 *)((int)local_80 + 0x32));
          thunk_FUN_00419cf0(local_80,uVar18,uVar18);
          if (*(int *)((int)local_80 + 0x251) != 0) {
            local_8 = (byte *)local_80[0x16d];
            iVar14 = 2 - (uint)(*(int *)(&DAT_00791e30 + *(int *)((int)local_80 + 0x235) * 4) != 1);
            if ((int)local_8 < (int)(local_8 + iVar14)) {
              do {
                iVar20 = local_80[0x16c];
                if (iVar20 < iVar20 + iVar14) {
                  do {
                    iVar19 = thunk_FUN_004960d0((short)iVar20,(short)local_8,(short)local_80[0x16e])
                    ;
                    if (iVar19 != 0) {
                      FUN_006a5e40(-5,DAT_007ed77c,0x7ac820,0x3a5);
                    }
                    iVar20 = iVar20 + 1;
                  } while (iVar20 < local_80[0x16c] + iVar14);
                }
                local_8 = local_8 + 1;
              } while ((int)local_8 < local_80[0x16d] + iVar14);
              thunk_FUN_0041f630(local_80);
              thunk_FUN_004cba30((int)local_80);
              DAT_00858df8 = (undefined4 *)local_c4;
              return 0;
            }
          }
          break;
        default:
          iVar14 = FUN_006ad4d0(s_E____titans_Artem_TLO_base_cpp_007ac820,0x3ac,0,0,&DAT_007a4ccc);
          if (iVar14 != 0) {
            pcVar11 = (code *)swi(3);
            iVar14 = (*pcVar11)();
            return iVar14;
          }
        }
        thunk_FUN_0041f630(local_80);
        thunk_FUN_004cba30((int)local_80);
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      if (uVar15 != 3) {
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      thunk_FUN_004b9a40(local_80);
      thunk_FUN_00419d30(local_80,local_80[0x116]);
      thunk_FUN_0041d590((int)local_80);
      thunk_FUN_00417d30((int)local_80);
      thunk_FUN_004c3480();
      thunk_FUN_004167a0((int)local_80);
      thunk_FUN_004c7230((int)local_80);
      thunk_FUN_004cc330((int)local_80);
      thunk_FUN_004cd3b0((int)local_80);
      thunk_FUN_004dc150(local_80);
      if (*(int *)(&DAT_00791a10 + *(int *)((int)local_80 + 0x235) * 4) != 0) {
        thunk_FUN_004cbf30((int)local_80);
      }
      thunk_FUN_004ad310((int)local_80 + 0x1d5);
      if (local_80[9] != (uint)*(byte *)(local_80[4] + 0x112d)) {
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      thunk_FUN_004d8b70((char)local_80[9]);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if (uVar15 == 0x10f) {
      iVar14 = local_80[0xb];
      piVar24 = local_4bc;
      for (iVar20 = 0xfd; iVar20 != 0; iVar20 = iVar20 + -1) {
        *piVar24 = 0;
        piVar24 = piVar24 + 1;
      }
      iVar20 = local_80[9];
      piVar22 = (int *)0x0;
      *(undefined2 *)piVar24 = 0;
      local_40 = (byte *)0x0;
      local_3c = (byte *)0x0;
      local_8 = (byte *)0x0;
      local_10 = (byte *)0x0;
      local_38 = (byte *)0x0;
      local_4bc[3] = 2;
      local_4bc[2] = 1;
      local_4bc[0] = 1000;
      if (local_80 != (int *)0x0) {
        piVar22 = local_80 + 0x16b;
      }
      piVar24 = &local_4a8;
      for (iVar19 = 0x10; iVar19 != 0; iVar19 = iVar19 + -1) {
        *piVar24 = *piVar22;
        piVar22 = piVar22 + 1;
        piVar24 = piVar24 + 1;
      }
      *(short *)piVar24 = (short)*piVar22;
      *(undefined1 *)((int)piVar24 + 2) = *(undefined1 *)((int)piVar22 + 2);
      if (local_80 == (int *)0x0) {
        puVar17 = (undefined4 *)0x0;
      }
      else {
        puVar17 = (undefined4 *)((int)local_80 + 0x231);
      }
      puVar25 = &local_465;
      for (iVar19 = 0xde; iVar19 != 0; iVar19 = iVar19 + -1) {
        *puVar25 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar25 = puVar25 + 1;
      }
      *(undefined2 *)puVar25 = *(undefined2 *)puVar17;
      *(undefined1 *)((int)puVar25 + 2) = *(undefined1 *)((int)puVar17 + 2);
      local_ea = 0x3f6;
      local_4bc[1] = iVar20;
      local_4bc[4] = iVar14;
      local_40 = (byte *)thunk_FUN_004ad790(&local_e6);
      local_e2 = local_80[0xf5] * 0x27 + local_ea;
      if ((*(int *)(&DAT_00791a10 + *(int *)((int)local_80 + 0x235) * 4) != 0) &&
         (*(int *)((int)local_80 + 0x5ff) != 0)) {
        local_3c = (byte *)thunk_FUN_004ad790(&local_de);
      }
      local_da = local_e6 + local_e2;
      local_38 = (byte *)thunk_FUN_004210e0((int *)&local_d6);
      local_d2 = local_de + local_da;
      if (*(int *)((int)local_80 + 0x603) != 0) {
        local_8 = (byte *)thunk_FUN_004ad790(&local_ce);
        local_ca = local_d6 + local_d2;
      }
      local_18 = (uint *)((local_80[0xf5] + 0x1a) * 0x27 + local_ce + local_d6 + local_de + local_e6
                         );
      local_10 = (byte *)FUN_006aac10((uint)local_18);
      piVar24 = local_4bc;
      pbVar23 = local_10;
      for (iVar14 = 0xfd; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(int *)pbVar23 = *piVar24;
        piVar24 = piVar24 + 1;
        pbVar23 = pbVar23 + 4;
      }
      *(short *)pbVar23 = (short)*piVar24;
      iVar14 = local_80[0xf5];
      pbVar23 = *(byte **)((int)local_80 + 0x607);
      pbVar26 = local_10 + local_ea;
      for (uVar15 = (uint)(iVar14 * 0x27) >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pbVar26 = *(undefined4 *)pbVar23;
        pbVar23 = pbVar23 + 4;
        pbVar26 = pbVar26 + 4;
      }
      for (uVar15 = iVar14 * 0x27 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pbVar26 = *pbVar23;
        pbVar23 = pbVar23 + 1;
        pbVar26 = pbVar26 + 1;
      }
      pbVar23 = local_40;
      pbVar26 = local_10 + local_e2;
      for (uVar15 = local_e6 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pbVar26 = *(undefined4 *)pbVar23;
        pbVar23 = pbVar23 + 4;
        pbVar26 = pbVar26 + 4;
      }
      for (local_e6 = local_e6 & 3; local_e6 != 0; local_e6 = local_e6 - 1) {
        *pbVar26 = *pbVar23;
        pbVar23 = pbVar23 + 1;
        pbVar26 = pbVar26 + 1;
      }
      if (local_de != 0) {
        pbVar23 = local_3c;
        pbVar26 = local_10 + local_da;
        for (uVar15 = local_de >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pbVar26 = *(undefined4 *)pbVar23;
          pbVar23 = pbVar23 + 4;
          pbVar26 = pbVar26 + 4;
        }
        for (local_de = local_de & 3; local_de != 0; local_de = local_de - 1) {
          *pbVar26 = *pbVar23;
          pbVar23 = pbVar23 + 1;
          pbVar26 = pbVar26 + 1;
        }
      }
      pbVar23 = local_38;
      pbVar26 = local_10 + local_d2;
      for (uVar15 = local_d6 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pbVar26 = *(undefined4 *)pbVar23;
        pbVar23 = pbVar23 + 4;
        pbVar26 = pbVar26 + 4;
      }
      for (local_d6 = local_d6 & 3; local_d6 != 0; local_d6 = local_d6 - 1) {
        *pbVar26 = *pbVar23;
        pbVar23 = pbVar23 + 1;
        pbVar26 = pbVar26 + 1;
      }
      pbVar23 = local_8;
      pbVar26 = local_10 + local_ca;
      for (uVar15 = local_ce >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pbVar26 = *(undefined4 *)pbVar23;
        pbVar23 = pbVar23 + 4;
        pbVar26 = pbVar26 + 4;
      }
      for (local_ce = local_ce & 3; local_ce != 0; local_ce = local_ce - 1) {
        *pbVar26 = *pbVar23;
        pbVar23 = pbVar23 + 1;
        pbVar26 = pbVar26 + 1;
      }
      thunk_FUN_0054d430(DAT_00802a38,local_80[6],local_10,(uint)local_18);
      if (local_40 != (byte *)0x0) {
        FUN_006ab060(&local_40);
      }
      if (local_3c != (byte *)0x0) {
        FUN_006ab060(&local_3c);
      }
      if (local_10 != (byte *)0x0) {
        FUN_006ab060(&local_10);
      }
      if (local_38 != (byte *)0x0) {
        FUN_006ab060(&local_38);
      }
      if (local_8 == (byte *)0x0) {
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      FUN_006ab060(&local_8);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if (uVar15 != 0x110) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    piVar24 = *(int **)(param_1 + 0x14);
    piVar22 = local_5c;
    for (iVar14 = 7; iVar14 != 0; iVar14 = iVar14 + -1) {
      *piVar22 = *piVar24;
      piVar24 = piVar24 + 1;
      piVar22 = piVar22 + 1;
    }
    iVar14 = 0;
    if ((0x9a < local_5c[1]) &&
       (((local_5c[1] < 0x9f || (local_5c[1] == 0xa5)) &&
        (iVar20 = thunk_FUN_004e60d0(local_80[9],0x68), iVar20 != 0)))) {
      thunk_FUN_004d6eb0(local_80,local_5c[0] / 2);
    }
    if (local_80[0x16b] == 0x68) {
      thunk_FUN_004dc240();
    }
    iVar20 = local_c;
    if (local_5c[1] == 0x9a) {
      iVar20 = thunk_FUN_004e60d0(local_54,0x93);
      if ((local_80[0x128] == 0) || (local_80[0x12a] < iVar20)) {
        local_80[0x12a] = iVar20;
        local_80[299] = local_54;
      }
      local_80[0x128] = 1;
      local_80[0x129] = *(int *)((int)DAT_00802a38 + 0xe4);
      local_c = iVar20;
      (**(code **)(*local_80 + 200))(0);
    }
    if (local_80[0x104] != 0) {
      local_5c[0] = (local_80[0x105] * local_5c[0]) / 100;
    }
    if (local_80[0x130] != 0) {
      local_5c[0] = (local_80[0x130] * local_5c[0] * 0x32) / 10000;
    }
    if (local_5c[1] == 0x65) goto LAB_004bb5dd;
    if (local_5c[1] != 0x42) {
      switch(local_5c[1]) {
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xa4:
      case 0xa5:
      case 0xb0:
      case 0xb2:
      case 0xb6:
      case 0xb7:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbf:
        iVar20 = thunk_FUN_004e60d0(local_80[9],0x67);
        iVar14 = 0;
        if (iVar20 == 1) {
          iVar14 = (local_5c[0] * 9) / 10 + (local_5c[0] * 9 >> 0x1f);
LAB_004bb547:
          iVar14 = local_5c[0] - (iVar14 - (iVar14 >> 0x1f));
        }
        else {
          if (iVar20 == 2) {
            iVar14 = (local_5c[0] * 0x11) / 0x14 + (local_5c[0] * 0x11 >> 0x1f);
            goto LAB_004bb547;
          }
          if (iVar20 == 3) {
            iVar14 = (local_5c[0] * 4) / 5 + (local_5c[0] * 4 >> 0x1f);
            goto LAB_004bb547;
          }
        }
        local_5c[0] = local_5c[0] - iVar14;
        local_c = iVar20;
      }
      uVar15 = thunk_FUN_004406c0((char)local_80[9]);
      uVar15 = uVar15 & 0xff;
      if (uVar15 == 1) {
        iVar14 = local_80[9];
        iVar20 = 4;
LAB_004bb58d:
        iVar20 = thunk_FUN_004e60d0(iVar14,iVar20);
        local_c = iVar20;
      }
      else {
        if (uVar15 == 2) {
          iVar14 = local_80[9];
          iVar20 = 0x81;
          goto LAB_004bb58d;
        }
        if (uVar15 == 3) {
          iVar14 = local_80[9];
          iVar20 = 0x65;
          goto LAB_004bb58d;
        }
      }
      iVar14 = 0;
      if (iVar20 == 1) {
        iVar14 = local_5c[0] * 8;
      }
      else if (iVar20 == 2) {
        iVar14 = local_5c[0] * 6;
      }
      else {
        if (iVar20 != 3) goto LAB_004bb5dd;
        iVar14 = local_5c[0] * 4;
      }
      iVar14 = local_5c[0] - iVar14 / 10;
      goto LAB_004bb5dd;
    }
    uVar15 = thunk_FUN_004406c0((char)local_80[9]);
    uVar15 = uVar15 & 0xff;
    if (uVar15 == 1) {
      iVar20 = local_80[9];
      iVar19 = 0x2d;
LAB_004bb4a1:
      iVar20 = thunk_FUN_004e60d0(iVar20,iVar19);
      local_c = iVar20;
    }
    else {
      if (uVar15 == 2) {
        iVar20 = local_80[9];
        iVar19 = 0x2d;
        goto LAB_004bb4a1;
      }
      if (uVar15 == 3) {
        iVar20 = local_80[9];
        iVar19 = 0x6a;
        goto LAB_004bb4a1;
      }
    }
    if (iVar20 == 1) {
      iVar14 = local_5c[0] - (local_5c[0] * 9) / 10;
    }
    local_5c[0] = local_5c[0] - iVar14;
LAB_004bb5dd:
    if (200 < iVar14) {
      iVar14 = 200;
    }
    local_5c[0] = local_5c[0] - iVar14;
    if (local_5c[0] < 0) {
      local_5c[0] = 0;
    }
    thunk_FUN_004b9bb0(local_80,local_5c[0],(short)local_54,local_50);
    if (*(int *)((int)local_80 + 0x245) == 1) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if ((DAT_008117bc != (undefined4 *)0x0) && (local_5c[0] != 0)) {
      local_68 = CONCAT22(*(undefined2 *)((int)local_80 + 0x32),(short)local_80[9]);
      local_62 = local_50;
      local_6c = 0x5dd5;
      local_64 = (undefined2)local_54;
      (**(code **)*DAT_008117bc)(local_7c);
    }
    if (DAT_00811798 != (void *)0x0) {
      thunk_FUN_0061f8b0(DAT_00811798,local_80[0x16c],local_80[0x16d],local_80[9]);
    }
    local_80[0x115] = *(int *)((int)DAT_00802a38 + 0xe4);
    if (local_80[0x116] == 0xfe) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    local_80[0x116] = local_54;
    DAT_00858df8 = (undefined4 *)local_c4;
    return 0;
  }
  if (uVar15 < 0x129) {
    if (uVar15 == 0x128) {
      iVar14 = *(int *)((int)local_80 + 0x245);
      piVar24 = *(int **)(param_1 + 0x14);
      piVar22 = local_5c;
      for (iVar20 = 7; iVar20 != 0; iVar20 = iVar20 + -1) {
        *piVar22 = *piVar24;
        piVar24 = piVar24 + 1;
        piVar22 = piVar22 + 1;
      }
      if ((iVar14 != 1) && (iVar14 != 6)) {
        *(undefined4 *)((int)local_80 + 0x241) = 0;
        *(undefined4 *)((int)local_80 + 0x5d7) = 0;
        *(int *)((int)local_80 + 0x5df) = local_44;
        if ((local_44 == 2) || (local_44 == 5)) {
          iVar14 = 1;
        }
        else {
          iVar14 = 0;
        }
        thunk_FUN_004b80d0(1,iVar14);
        if ((*(int *)((int)local_80 + 0x5df) == 0) || (*(int *)((int)local_80 + 0x5df) == 4)) {
          uVar21 = (uint)(*(int *)((int)local_80 + 0x24d) == 4);
          uVar15 = thunk_FUN_004406c0((char)local_80[9]);
          thunk_FUN_0062b830((int)*(short *)((int)local_80 + 0x41),
                             (int)*(short *)((int)local_80 + 0x43),
                             (int)*(short *)((int)local_80 + 0x45),local_80[0x16b],local_80,
                             0xffffffff,0xffffffff,uVar15 & 0xff,uVar21);
        }
        if ((*(int *)((int)local_80 + 0x5df) == 2) || (*(int *)((int)local_80 + 0x5df) == 5)) {
          local_80[0x115] = *(int *)((int)DAT_00802a38 + 0xe4);
          if (local_80[0x116] != 0xfe) {
            local_80[0x116] = local_54;
          }
        }
        else {
          if ((local_54 != 0xfe) && (DAT_008117bc != (undefined4 *)0x0)) {
            local_62 = local_50;
            local_6c = 0x5dd1;
            local_68 = CONCAT22(*(undefined2 *)((int)local_80 + 0x32),(short)local_80[9]);
            local_64 = (short)local_54;
            (**(code **)*DAT_008117bc)(local_7c);
          }
          local_68 = local_80[2];
          local_74 = *(undefined4 *)(local_80[3] + 0x14);
          local_70 = 0;
          local_6c = 10;
          FUN_006e60a0(local_80,local_7c);
        }
      }
      if (DAT_008117bc == (undefined4 *)0x0) {
        local_6c = 0x5dd5;
        local_68 = CONCAT22(*(undefined2 *)((int)local_80 + 0x32),(short)local_80[9]);
        local_62 = 0xffff;
        local_64 = (short)local_54;
        (*(code *)*puRam00000000)(local_7c);
      }
      if (DAT_00811798 != (void *)0x0) {
        thunk_FUN_0061f8b0(DAT_00811798,local_80[0x16c],local_80[0x16d],local_80[9]);
      }
      local_80[0x115] = *(int *)((int)DAT_00802a38 + 0xe4);
      if (local_80[0x116] == 0xfe) {
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      local_80[0x116] = local_54;
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if (uVar15 != 0x121) {
      if (uVar15 == 0x122) {
        piVar24 = *(int **)(param_1 + 0x14);
        if (*piVar24 != local_80[9]) {
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        local_80[0x104] = 1;
        local_80[0x105] = piVar24[2];
        local_80[0x106] = *(int *)((int)DAT_00802a38 + 0xe4);
        local_80[0x107] = piVar24[1];
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      if (uVar15 != 0x123) {
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      if (local_80[0x16b] == 0x4d) {
        thunk_FUN_004debd0(local_80,*(int *)(param_1 + 0x14));
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      if (local_80[0x16b] != 0x73) {
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      iVar14 = *(int *)(param_1 + 0x14);
      local_80[0x134] = iVar14;
      if (iVar14 < 0) {
        local_80[0x134] = 0;
      }
      if (5000 < local_80[0x134]) {
        local_80[0x134] = 5000;
      }
      local_80[0x135] = *(int *)((int)DAT_00802a38 + 0xe4);
      if (local_80[0x16b] != 0x73) {
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      if (local_80[0x134] != 0) {
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      thunk_FUN_004c2d40((int)local_80);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    local_18 = *(uint **)(param_1 + 0x14);
    if ((7 < *local_18) ||
       ((DAT_00802a38 != (void *)0x0 && (7 < (byte)(&DAT_008087e9)[*local_18 * 0x51]))))
    goto LAB_004bbcb2;
    bVar2 = (byte)*local_18;
    bVar1 = *(byte *)(local_80 + 9);
    local_14 = CONCAT31(local_14._1_3_,bVar2);
    local_8 = (byte *)CONCAT31(local_8._1_3_,bVar1);
    if (DAT_00808a8f == '\0') {
      if (bVar2 == bVar1) {
LAB_004bbc2b:
        iVar14 = 0;
      }
      else {
        uVar15 = (uint)bVar2;
        uVar21 = (uint)bVar1;
        cVar28 = *(char *)((int)&DAT_00808a4f + uVar15 * 8 + uVar21);
        if ((cVar28 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar15) == '\0')) {
          iVar14 = -2;
        }
        else if ((cVar28 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar15) == '\0')
                ) {
          iVar14 = -1;
        }
        else if ((cVar28 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar15) == '\x01')
                ) {
          iVar14 = 1;
        }
        else {
          if ((cVar28 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar15) != '\x01'))
          goto LAB_004bbc2b;
          iVar14 = 2;
        }
      }
      bVar27 = iVar14 < 0;
    }
    else {
      bVar27 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)bVar2 * 0x51];
    }
    if ((bVar27) && (iVar14 = FUN_006b0fd0(0x800f90), iVar14 != 0)) {
      local_80[0x108] = 1;
      *(uint *)((int)local_80 + 0x265) = *(uint *)((int)local_80 + 0x265) & 0xfffffffd;
      *(undefined4 *)((int)local_80 + 0x26d) = 0;
      local_80[0x109] = *(int *)((int)DAT_00802a38 + 0xe4);
      local_80[0x10a] = local_18[1];
      *(undefined4 *)(param_1 + 0x18) = 1;
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
LAB_004bbcb2:
    *(undefined4 *)(param_1 + 0x18) = 0;
    DAT_00858df8 = (undefined4 *)local_c4;
    return 0;
  }
  if (uVar15 != 0x4401) {
    if (uVar15 != 0x440f) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    thunk_FUN_004cba30((int)local_80);
    DAT_00858df8 = (undefined4 *)local_c4;
    return 0;
  }
  iVar14 = *(int *)(param_1 + 0x14);
  bVar2 = *(byte *)(iVar14 + 0xe);
  switch(bVar2) {
  case 8:
    if ((*(int *)((int)local_80 + 0x245) == 4) && (local_80[0xf7] != 0)) {
      if (*(int *)((int)local_80 + 0x249) != -1) {
        *(undefined4 *)((int)local_80 + 0x249) = 0xffffffff;
      }
      iVar14 = thunk_FUN_004ea620((int)local_80);
      if (iVar14 != 0) {
        local_80[0xff] = 1;
        local_80[0x100] = 0;
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
    }
    break;
  case 9:
    iVar20 = local_80[0x16b];
    if (iVar20 == 0x33) {
      bVar2 = **(byte **)(iVar14 + 0x17);
      if ((bVar2 != 0) && (bVar2 != 1)) {
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      thunk_FUN_004e2190(local_80,(uint)bVar2);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if ((iVar20 != 0x3c) && (iVar20 != 0x53)) {
      thunk_FUN_004c91a0(local_80);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if (local_80[9] == *(int *)((int)local_80 + 0x23d)) {
LAB_004bc117:
      bVar27 = true;
    }
    else {
      uVar15 = thunk_FUN_004406c0((char)*(int *)((int)local_80 + 0x23d));
      iVar14 = *(int *)((int)local_80 + 0x235);
      uVar21 = thunk_FUN_004406c0((char)local_80[9]);
      if ((&DAT_007e1984)[(uVar21 & 0xff) + (iVar14 * 3 + (uVar15 & 0xff)) * 3] != '\0')
      goto LAB_004bc117;
      bVar27 = false;
    }
    if (bVar27) {
      thunk_FUN_004db0a0(local_80[9]);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    break;
  case 0x14:
    iVar19 = **(int **)(iVar14 + 0x17);
    if (iVar19 < 0) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if (DAT_007fb240 <= iVar19) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    iVar20 = (*(int **)(iVar14 + 0x17))[1];
    if (iVar20 < 0) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if (DAT_007fb242 <= iVar20) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    switch(local_80[0x16b]) {
    case 0x32:
    case 0x33:
    case 0x37:
    case 0x40:
    case 0x49:
    case 0x5c:
    case 0x6c:
      local_80[0x10b] = 1;
      local_80[0x10c] = **(int **)(iVar14 + 0x17);
      local_80[0x10d] = *(int *)(*(int *)(iVar14 + 0x17) + 4);
      local_80[0x10e] = 2;
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if (*(int *)((int)local_80 + 0x245) != 4) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    iVar14 = local_80[0x16e];
    goto LAB_004bc4c0;
  case 0x15:
    if (*(int *)((int)local_80 + 0x245) != 4) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if (DAT_007fb240 <= (short)(ushort)**(byte **)(iVar14 + 0x17)) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    iVar20 = local_80[0x16d];
    iVar14 = 4 - (uint)**(byte **)(iVar14 + 0x17);
    iVar19 = local_80[0x16c];
LAB_004bc4c0:
    thunk_FUN_004c6c70(local_80,iVar19,iVar20,iVar14);
    if (*(int *)((int)local_80 + 0x249) != -1) {
      *(undefined4 *)((int)local_80 + 0x249) = 0xffffffff;
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    break;
  case 0x16:
    pcVar10 = *(char **)(iVar14 + 0x17);
    if (*(int *)(&DAT_00792778 + *(int *)((int)local_80 + 0x235) * 4) != 0) {
      if (*pcVar10 == '\a') {
        *(uint *)((int)local_80 + 0x265) = *(uint *)((int)local_80 + 0x265) & 0xfffffffd;
        *(undefined4 *)((int)local_80 + 0x26d) = 0;
      }
      else if (*(int *)((int)local_80 + 0x261) != 0) {
        if (*(int *)(&DAT_00792a90 + *(int *)((int)local_80 + 0x235) * 8) == 1) {
          if (*pcVar10 == '\0') {
            uVar18 = *(undefined4 *)(pcVar10 + 1);
            *(uint *)((int)local_80 + 0x265) = *(uint *)((int)local_80 + 0x265) | 2;
            *(undefined4 *)((int)local_80 + 0x26d) = uVar18;
          }
        }
        else if ((((*(int *)(&DAT_00792a90 + *(int *)((int)local_80 + 0x235) * 8) == 2) &&
                  (bVar2 = pcVar10[5], (short)(ushort)bVar2 < DAT_007fb240)) &&
                 (bVar1 = pcVar10[6], (short)(ushort)bVar1 < DAT_007fb242)) &&
                (bVar3 = pcVar10[7], (short)(ushort)bVar3 < DAT_007fb240)) {
          if (local_80[0x16b] == 0x70) {
            thunk_FUN_004d8e70(local_80,(uint)bVar2,(uint)bVar1,(uint)bVar3);
          }
          else {
            *(uint *)((int)local_80 + 0x265) = *(uint *)((int)local_80 + 0x265) | 2;
            *(uint *)((int)local_80 + 0x2a5) = (uint)bVar2;
            *(uint *)((int)local_80 + 0x2a9) = (uint)bVar1;
            *(uint *)((int)local_80 + 0x2ad) = (uint)bVar3;
          }
        }
      }
      if (local_80[9] == (uint)*(byte *)(local_80[4] + 0x112d)) {
        iVar14 = local_80[0x16b];
        if (iVar14 == 0x3e) {
          (**(code **)(*local_80 + 0x90))(4,0x23f);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 == 0x3f) {
          (**(code **)(*local_80 + 0x90))(4,0x248);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 == 0x51) {
          (**(code **)(*local_80 + 0x90))(4,0x28a);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 == 0x46) {
          (**(code **)(*local_80 + 0x90))(4,0x305);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 == 0x47) {
          (**(code **)(*local_80 + 0x90))(4,0x30e);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 == 0x4a) {
          (**(code **)(*local_80 + 0x90))(4,0x324);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 == 0x4b) {
          (**(code **)(*local_80 + 0x90))(4,0x32d);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 == 0x66) {
          (**(code **)(*local_80 + 0x90))(4,0x3dc);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 == 0x67) {
          (**(code **)(*local_80 + 0x90))(4,0x3e3);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 == 0x6b) {
          (**(code **)(*local_80 + 0x90))(4,0x3fe);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 == 0x70) {
          (**(code **)(*local_80 + 0x90))(4,0x419);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 == 0x71) {
          (**(code **)(*local_80 + 0x90))(4,0x420);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
      }
    }
    break;
  case 0x17:
    pcVar10 = *(char **)(iVar14 + 0x17);
    iVar14 = local_80[0x16b];
    if (iVar14 == 0x4c) {
      cVar28 = *pcVar10;
      if (cVar28 == '\x06') {
        local_80[0x138] = 1;
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      if (cVar28 == '\a') {
        local_80[0x138] = 0;
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      if (cVar28 != '\b') {
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      iVar14 = local_80[0x134];
      if (iVar14 != 0) {
        if (iVar14 == 1) {
          local_80[0x135] = 2;
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 != 2) {
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
      }
    }
    else {
      if (iVar14 != 0x43) {
        if (((iVar14 == 0x36) || (iVar14 == 0x5d)) && (*pcVar10 == '\v')) {
          iVar14 = thunk_FUN_004e60d0(local_80[9],
                                      *(int *)(&DAT_00798fb0 + *(int *)((int)local_80 + 0x239) * 4))
          ;
          if (iVar14 != 0) {
            thunk_FUN_004e4e90(local_80,*(int *)(pcVar10 + 1),*(int *)(pcVar10 + 5));
          }
          if (local_80[9] != (uint)*(byte *)(local_80[4] + 0x112d)) {
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          uVar15 = thunk_FUN_004406c0(*(char *)((int)local_80 + 0x23d));
          uVar15 = uVar15 & 0xff;
          if (uVar15 == 1) {
            (**(code **)(*local_80 + 0x90))(4,0x210);
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          if (uVar15 != 2) {
            if (uVar15 != 3) {
              DAT_00858df8 = (undefined4 *)local_c4;
              return 0;
            }
            (**(code **)(*local_80 + 0x90))(4,0x39f);
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          (**(code **)(*local_80 + 0x90))(4,0x2d8);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if ((iVar14 == 0x3c) || (iVar14 == 0x53)) {
          if (*pcVar10 == '\f') {
            if (*(int *)((int)&DAT_007f582e + local_80[9] * 0xa62) != 0) {
              DAT_00858df8 = (undefined4 *)local_c4;
              return 0;
            }
            uVar15 = local_80[7] * 0x41c64e6d + 0x3039;
            local_80[7] = uVar15;
            thunk_FUN_004db020(local_80[9],uVar15 >> 0x10);
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          if (*pcVar10 != '\r') {
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          thunk_FUN_004db0f0(local_80[9]);
          if (local_80[9] != (uint)*(byte *)(local_80[4] + 0x112d)) {
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          if (DAT_00801698 == (int *)0x0) {
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          (**(code **)(*DAT_00801698 + 0x1c))(1);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 == 0x70) {
          if (*pcVar10 != '\x12') {
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          if (local_80[0x13c] != 0) {
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          if (local_80[0x13b] < 100) {
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          local_80[0x134] = 1;
          *(undefined4 *)((int)local_80 + 0x261) = 1;
          *(uint *)((int)local_80 + 0x265) = *(uint *)((int)local_80 + 0x265) | 2;
          *(undefined4 *)((int)local_80 + 0x2a5) = 0xffffffff;
          *(undefined4 *)((int)local_80 + 0x2a9) = 0xffffffff;
          *(undefined4 *)((int)local_80 + 0x2ad) = 0xffffffff;
          local_80[0x13b] = 0;
          local_80[0x136] = *(int *)((int)DAT_00802a38 + 0xe4);
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (iVar14 != 0x6d) {
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        if (*pcVar10 == '\x19') {
          iVar14 = FUN_006e62d0(DAT_00802a38,*(int *)(pcVar10 + 0x1d),(int *)&local_18);
          if (iVar14 != 0) {
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          iVar14 = thunk_FUN_004dbb10(local_80,(int)local_18);
          if (iVar14 == 0) {
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          if ((local_80[0x134] != 0) || (iVar14 = 100, local_80[0x135] != 0)) {
            iVar14 = 0x32;
          }
          thunk_FUN_004dbb60(local_80,(int *)local_18,iVar14);
        }
        else {
          if (*pcVar10 != '\x1a') {
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          if (1 < *(uint *)(pcVar10 + 0x1d)) {
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          if (local_80[*(uint *)(pcVar10 + 0x1d) + 0x134] == 0) {
            DAT_00858df8 = (undefined4 *)local_c4;
            return 0;
          }
          thunk_FUN_004dbe00(local_80,local_80[*(uint *)(pcVar10 + 0x1d) + 0x134]);
        }
        if (local_80[9] != (uint)*(byte *)(local_80[4] + 0x112d)) {
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
        (**(code **)(*local_80 + 0x90))(4,0x40b);
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      cVar28 = *pcVar10;
      if (cVar28 == '\x06') {
        local_80[0x138] = 1;
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      if (cVar28 == '\a') {
        local_80[0x138] = 0;
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      if (cVar28 != '\t') {
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      if ((local_80[0x134] != 0) && (local_80[0x134] != 2)) {
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
    }
    if (4999 < local_80[0x136]) {
      local_80[0x135] = 1;
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    break;
  case 0x1a:
    pcVar10 = *(char **)(iVar14 + 0x17);
    if (*pcVar10 == '\x02') {
      thunk_FUN_004ea530(local_80,(short)*(undefined4 *)(pcVar10 + 1),
                         (short)*(undefined4 *)(pcVar10 + 5),(short)*(undefined4 *)(pcVar10 + 9));
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    break;
  case 0x1e:
    pbVar23 = *(byte **)(iVar14 + 0x17);
    if (*pbVar23 == 0) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if (8 < *pbVar23) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if ((local_80[9] == (uint)*(byte *)(local_80[4] + 0x112d)) &&
       ((iVar14 = local_80[0x16b], iVar14 == 0x35 || ((0x53 < iVar14 && (iVar14 < 0x5b)))))) {
      uVar15 = thunk_FUN_004406c0(*(char *)((int)local_80 + 0x23d));
      uVar15 = uVar15 & 0xff;
      if (uVar15 == 1) {
        iVar14 = *local_80;
        uVar18 = 0x208;
LAB_004bbfe9:
        (**(code **)(iVar14 + 0x90))(4,uVar18);
      }
      else if (uVar15 == 2) {
        (**(code **)(*local_80 + 0x90))(4,0x2d0);
      }
      else if (uVar15 == 3) {
        iVar14 = *local_80;
        uVar18 = 0x38b;
        goto LAB_004bbfe9;
      }
    }
    iVar14 = thunk_FUN_004c7860(local_80,(uint)*pbVar23,*(uint *)(pbVar23 + 1),
                                (int)*(short *)(pbVar23 + 5),0,1);
    if (iVar14 != 0) {
      thunk_FUN_004c7cc0(local_80,(uint)*pbVar23,*(uint *)(pbVar23 + 1),(int)*(short *)(pbVar23 + 5)
                         ,(uint)(*pbVar23 != 2),*(undefined4 *)(pbVar23 + 7),0,0xff,(char *)0x0);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    break;
  case 0x1f:
    if ((local_80[0x16b] == 0x3a) && (**(char **)(iVar14 + 0x17) == '\x02')) {
      thunk_FUN_004d9b20((int)local_80);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if ((local_80[0x16b] == 100) && (**(char **)(iVar14 + 0x17) == '\x02')) {
      thunk_FUN_004e4670((int)local_80);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    break;
  case 0x20:
    pbVar23 = *(byte **)(iVar14 + 0x17);
    if ((local_80[0x16b] == 0x52) || (local_80[0x16b] == 0x5f)) {
      if (*pbVar23 == 1) {
        thunk_FUN_004ebab0(local_80,(uint)*(ushort *)(pbVar23 + 1),*(int *)(pbVar23 + 3));
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      thunk_FUN_004eb6d0(local_80,(uint)*pbVar23,(uint)*(ushort *)(pbVar23 + 1),
                         *(int *)(pbVar23 + 3),(uint)*(ushort *)(pbVar23 + 7));
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    break;
  case 0x22:
    iVar14 = thunk_FUN_004e8030(local_80[0x16b]);
    if (iVar14 == 3) {
      thunk_FUN_004d7270(local_80);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    thunk_FUN_004c7cc0(local_80,5,0,0,0,0xffffffff,0,0xff,(char *)0x0);
    DAT_00858df8 = (undefined4 *)local_c4;
    return 0;
  case 0x23:
    puVar7 = *(uint **)(iVar14 + 0x17);
    uVar15 = puVar7[1];
    if (((((-1 < (int)uVar15) && ((int)uVar15 < (int)DAT_007fb240)) &&
         (uVar21 = puVar7[2], -1 < (int)uVar21)) &&
        (((int)uVar21 < (int)DAT_007fb242 && (uVar8 = puVar7[3], -1 < (int)uVar8)))) &&
       (((int)uVar8 < (int)DAT_007fb240 && ((uVar9 = *puVar7, 0x31 < uVar9 && (uVar9 < 0x74)))))) {
      if (local_80[0x16b] == 0x53) {
        thunk_FUN_004cdfd0(local_80,uVar9,uVar15,uVar21,uVar8);
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      if (local_80[0x16b] == 0x6c) {
        thunk_FUN_004e99e0(local_80,uVar15,uVar21,uVar8);
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
    }
    break;
  case 0x27:
    iVar20 = local_80[0x16b];
    if (iVar20 == 0x50) {
      thunk_FUN_004b6e30(local_80,(uint)**(byte **)(iVar14 + 0x17),
                         (uint)(*(byte **)(iVar14 + 0x17))[1]);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if ((iVar20 == 0x34) && (**(char **)(iVar14 + 0x17) == '\x02')) {
      thunk_FUN_004de1e0(local_80,(uint)(byte)(*(char **)(iVar14 + 0x17))[1]);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    if ((iVar20 == 0x5b) && (**(char **)(iVar14 + 0x17) == '\x02')) {
      thunk_FUN_004de300(local_80,(uint)(byte)(*(char **)(iVar14 + 0x17))[1]);
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    break;
  case 0x28:
    if (**(char **)(iVar14 + 0x17) == '\0') {
      if ((*(int *)((int)local_80 + 0x245) == 0) || (*(int *)((int)local_80 + 0x245) == 5)) {
        thunk_FUN_004b80d0(2,1);
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
    }
    else if (*(int *)((int)local_80 + 0x245) == 4) {
      iVar14 = thunk_FUN_004c7070(local_80,1);
      if (iVar14 != 0) {
        thunk_FUN_004b80d0(3,1);
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      local_8 = (byte *)0x0;
      iVar14 = local_80[0x16e] + -2;
      if (-1 < iVar14) {
        sVar13 = (short)local_80[0x16c];
        local_14 = CONCAT22((short)(bVar2 - 8 >> 0x10),sVar13);
        sVar4 = (short)local_80[0x16d];
        do {
          sVar12 = (short)iVar14;
          if (((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) || (sVar4 < 0)) ||
              ((DAT_007fb242 <= sVar4 || (sVar12 < 0)))) || (DAT_007fb244 <= sVar12)) {
            iVar20 = 0;
          }
          else {
            iVar20 = *(int *)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar12 + (int)DAT_007fb240 * (int)sVar4 +
                             (int)sVar13) * 8);
          }
          if (iVar20 == 0) {
            if (((sVar13 < 0) || (DAT_007fb240 <= sVar13)) ||
               ((sVar4 < 0 ||
                (((DAT_007fb242 <= sVar4 || (sVar12 < 0)) || (DAT_007fb244 <= sVar12)))))) {
              sVar12 = -1;
            }
            else {
              sVar12 = *(short *)(DAT_007fb280 +
                                 ((int)DAT_007fb27e * (int)sVar12 + (int)DAT_007fb278 * (int)sVar4 +
                                 (int)sVar13) * 2);
            }
            if (sVar12 == -1) {
              local_8 = (byte *)0x1;
              thunk_FUN_004c6c70(local_80,local_80[0x16c],local_80[0x16d],iVar14 + 1);
              break;
            }
          }
          iVar14 = iVar14 + -1;
        } while (-1 < iVar14);
      }
      if (local_8 == (byte *)0x0) {
        sVar13 = (short)local_80[0x16c];
        sVar4 = (short)local_80[0x16d];
        if (((sVar13 < 0) || (DAT_007fb240 <= sVar13)) ||
           ((sVar4 < 0 || ((DAT_007fb242 <= sVar4 || (DAT_007fb244 < 1)))))) {
          iVar14 = 0;
        }
        else {
          iVar14 = *(int *)(DAT_007fb248 + ((int)DAT_007fb240 * (int)sVar4 + (int)sVar13) * 8);
        }
        bVar27 = false;
        if (iVar14 == 0) {
          if ((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) || (sVar4 < 0)) ||
             ((DAT_007fb242 <= sVar4 || (DAT_007fb244 < 1)))) {
            sVar13 = -1;
          }
          else {
            sVar13 = *(short *)(DAT_007fb280 + ((int)DAT_007fb278 * (int)sVar4 + (int)sVar13) * 2);
          }
          if (sVar13 == 0) {
            thunk_FUN_004c6c70(local_80,local_80[0x16c],local_80[0x16d],0);
            bVar27 = true;
          }
        }
        if (!bVar27) {
          DAT_00858df8 = (undefined4 *)local_c4;
          return 0;
        }
      }
      *(undefined4 *)((int)local_80 + 0x249) = 3;
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    break;
  case 0x2a:
    if (local_80[0x16b] != 0x6d) {
      DAT_00858df8 = (undefined4 *)local_c4;
      return 0;
    }
    switch(**(undefined1 **)(iVar14 + 0x17)) {
    case 0:
      if (local_80[0x134] != 0) {
        thunk_FUN_004dbcc0(local_80,0,local_80[0x138] + -5);
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      break;
    case 1:
      if (local_80[0x134] != 0) {
        thunk_FUN_004dbcc0(local_80,0,local_80[0x138] + 5);
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      break;
    case 2:
      if (local_80[0x135] != 0) {
        thunk_FUN_004dbcc0(local_80,1,local_80[0x139] + -5);
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      break;
    case 3:
      if (local_80[0x135] != 0) {
        thunk_FUN_004dbcc0(local_80,1,local_80[0x139] + 5);
        DAT_00858df8 = (undefined4 *)local_c4;
        return 0;
      }
      break;
    case 4:
      iVar14 = 0;
      goto LAB_004bd06b;
    case 5:
      iVar14 = 1;
LAB_004bd06b:
      thunk_FUN_004dbf30(local_80,iVar14);
    }
  }
  DAT_00858df8 = (undefined4 *)local_c4;
  return 0;
}

