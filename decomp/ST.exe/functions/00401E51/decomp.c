
undefined4 * thunk_FUN_0054f1d0(void)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  code *pcVar4;
  void *pvVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined3 uVar15;
  char *pcVar12;
  undefined4 uVar13;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar14;
  int *piVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined4 unaff_ESI;
  uint *puVar20;
  void *pvVar21;
  undefined4 *puVar22;
  void *unaff_EDI;
  uint *puVar23;
  char *pcVar24;
  undefined4 *puVar25;
  bool bVar26;
  undefined1 uVar27;
  char acStack_17c [260];
  undefined4 *puStack_78;
  undefined4 auStack_74 [16];
  uint uStack_34;
  int iStack_30;
  int *piStack_2c;
  uint uStack_28;
  uint uStack_24;
  int iStack_20;
  char cStack_19;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  void *pvStack_c;
  uint *puStack_8;
  
  uStack_34 = 7;
  puStack_8 = (uint *)0x0;
  puStack_78 = DAT_00858df8;
  DAT_00858df8 = &puStack_78;
  iVar8 = __setjmp3(auStack_74,0,unaff_EDI,unaff_ESI);
  pvVar21 = pvStack_c;
  if (iVar8 != 0) {
    DAT_00858df8 = puStack_78;
    iVar14 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x742,0,iVar8,&DAT_007a4ccc);
    if (iVar14 == 0) {
      puVar11 = (undefined4 *)FUN_006a5e40(iVar8,0,0x7c8430,0x744);
      return puVar11;
    }
    pcVar4 = (code *)swi(3);
    puVar11 = (undefined4 *)(*pcVar4)();
    return puVar11;
  }
  if (DAT_0080877e != '\0') {
    if (DAT_00808783 == '\x03') {
      FUN_006b7510(DAT_00811764,-1,&iStack_20,-1,0);
      uStack_18 = 0;
      if (0 < iStack_20) {
        do {
          iVar8 = FUN_00715630(DAT_00811764,-1,&uStack_14,&iStack_30,&puStack_8,(uint *)0x0,-1,0);
          pvVar21 = pvStack_c;
          if (iVar8 == -0x4d) {
            puVar11 = (undefined4 *)thunk_FUN_00550380(6);
            DAT_00858df8 = puStack_78;
            return puVar11;
          }
          if (iVar8 != 1) goto LAB_0054f531;
          uVar9 = (uint)DAT_00808aaf;
          bVar26 = true;
          if (uVar9 != 0) {
            piVar16 = &DAT_00808af0;
            do {
              if (*piVar16 == iStack_30) {
                bVar26 = false;
              }
              piVar16 = piVar16 + 0x27;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          if (bVar26) goto joined_r0x0054f3c5;
          switch(uStack_14) {
          case 0x11:
            thunk_FUN_005504f0(pvStack_c,iStack_30,0x426f,1);
            if (iStack_30 == *(int *)((int)pvVar21 + 0x61)) {
              *(undefined4 *)((int)pvVar21 + 0x59) = 0;
            }
            goto joined_r0x0054f526;
          default:
joined_r0x0054f526:
            if (puStack_8 == (uint *)0x0) break;
            goto LAB_0054f52c;
          case 0x13:
            if (iStack_30 == *(int *)((int)pvStack_c + 0x61)) {
              *(undefined4 *)((int)pvStack_c + 0x59) = 0;
            }
            if (puStack_8 != (uint *)0x0) {
              FUN_006ab060(&puStack_8);
            }
            pvVar5 = pvStack_c;
            if (*(int *)((int)pvVar21 + 0xec) != 0) {
              thunk_FUN_005504f0(pvStack_c,iStack_30,0x4274,0);
              *(undefined4 *)((int)pvVar5 + 0xe8) = 1;
            }
            break;
          case 0x1a:
          case 0x35:
            thunk_FUN_00550430(pvStack_c,iStack_30,0);
            goto joined_r0x0054f3c5;
          case 0x30:
            if (*(int *)((int)pvStack_c + 0xe8) == 0) {
              FUN_006b9910((undefined4 *)((int)pvStack_c + 0x39),puStack_8);
            }
            break;
          case 0x33:
            thunk_FUN_00550830((int)puStack_8);
            goto joined_r0x0054f3c5;
          case 0x36:
            thunk_FUN_005505d0(pvStack_c,iStack_30,(int *)puStack_8);
joined_r0x0054f3c5:
            if (puStack_8 != (uint *)0x0) {
LAB_0054f52c:
              FUN_006ab060(&puStack_8);
            }
            break;
          case 0x38:
            if (((*(int *)((int)pvStack_c + 0xe8) != 0) || (puStack_8 == (uint *)0x0)) ||
               (*puStack_8 == 0)) break;
            puVar19 = puStack_8 + 1;
            uStack_24 = 0;
            if (*puStack_8 != 0) {
              do {
                piStack_2c = (int *)(*(int *)((int)puVar19 + 0x13) + *(int *)((int)puVar19 + 0xf));
                uVar9 = (int)piStack_2c + 0x1b;
                puVar10 = FUN_006aac10(uVar9);
                puVar20 = puVar19;
                puVar23 = puVar10;
                for (uVar17 = uVar9 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *puVar23 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar23 = puVar23 + 1;
                }
                for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(char *)puVar23 = (char)*puVar20;
                  puVar20 = (uint *)((int)puVar20 + 1);
                  puVar23 = (uint *)((int)puVar23 + 1);
                }
                FUN_006b9910((undefined4 *)((int)pvStack_c + 0x39),puVar10);
                puVar19 = (uint *)((int)puVar19 + (int)piStack_2c + 0x1b);
                uStack_24 = uStack_24 + 1;
              } while (uStack_24 < *puStack_8);
            }
            goto LAB_0054f52c;
          case 0x42:
            pcVar12 = (char *)FUN_006b0140(0x426a,DAT_00807618);
            uVar9 = 0xffffffff;
            do {
              pcVar24 = pcVar12;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar24 = pcVar12 + 1;
              cVar7 = *pcVar12;
              pcVar12 = pcVar24;
            } while (cVar7 != '\0');
            uVar9 = ~uVar9;
            pcVar12 = pcVar24 + -uVar9;
            pcVar24 = acStack_17c;
            for (uVar17 = uVar9 >> 2; puVar19 = puStack_8, uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar24 = pcVar24 + 4;
            }
            bVar26 = puStack_8 != (uint *)0x0;
            for (uVar9 = uVar9 & 3; pvVar21 = pvStack_c, uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar24 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar24 = pcVar24 + 1;
            }
            if ((bVar26) && ((*(int *)((int)pvStack_c + 0xf0) != 0 || ((char)*puVar19 != '\0')))) {
              FUN_006ab060(&puStack_8);
              *(undefined4 *)((int)pvVar21 + 0x59) = 1;
              *(undefined4 *)((int)pvVar21 + 0x5d) = 0;
              *(int *)((int)pvVar21 + 0x61) = iStack_30;
              uVar9 = 0;
              if (DAT_00808aaf != 0) {
                pcVar12 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar12 + -6) == iStack_30) && (*pcVar12 != '\0')) {
                    wsprintfA(acStack_17c,s__s___s__007c85fc,acStack_17c,pcVar12 + -0x46);
                    break;
                  }
                  uVar9 = uVar9 + 1;
                  pcVar12 = pcVar12 + 0x9c;
                } while (uVar9 < DAT_00808aaf);
              }
              if (DAT_008016d8 != (void *)0x0) {
                thunk_FUN_0052d320(DAT_008016d8,acStack_17c,9);
              }
            }
          }
LAB_0054f531:
          uStack_18 = uStack_18 + 1;
          pvVar21 = pvStack_c;
        } while ((int)uStack_18 < iStack_20);
      }
    }
    puVar11 = *(undefined4 **)((int)pvVar21 + 0x39);
    piVar16 = (int *)((int)pvVar21 + 0x39);
    if ((puVar11 == (undefined4 *)0x0) && (*(int *)((int)pvVar21 + 0x28) == 0)) {
      *(undefined2 *)(*(int *)((int)pvVar21 + 0x3d) + 5) = 0;
      DAT_00858df8 = puStack_78;
      return puVar11;
    }
    *(undefined1 *)(*(int *)((int)pvVar21 + 0x3d) + 4) = 0;
    *(undefined2 *)(*(int *)((int)pvVar21 + 0x3d) + 5) = 0;
    uVar9 = uStack_34;
    if (((int)(uint)*(byte *)((int)pvVar21 + 0x4d) <
         *(int *)(&DAT_007c2af8 + (uint)DAT_0080733b * 0x18)) && (DAT_00808784 == 0)) {
      *(byte *)((int)pvVar21 + 0x4d) = *(byte *)((int)pvVar21 + 0x4d) + 1;
      DAT_00858df8 = puStack_78;
      return puVar11;
    }
    for (; puVar11 != (undefined4 *)0x0; puVar11 = (undefined4 *)*puVar11) {
      piVar1 = (int *)((int)puVar11 + 0x13);
      piVar2 = (int *)((int)puVar11 + 0xf);
      uVar9 = uVar9 + 0x1b + *piVar1 + *piVar2;
    }
    uStack_34 = uVar9;
    piStack_2c = piVar16;
    if (*(uint *)((int)pvVar21 + 0x45) < uVar9) {
      iVar8 = FUN_006acf50(*(undefined4 **)((int)pvVar21 + 0x3d),uVar9);
      *(int *)((int)pvVar21 + 0x3d) = iVar8;
      *(uint *)((int)pvVar21 + 0x45) = uVar9;
    }
    puVar18 = (undefined4 *)(*(int *)((int)pvVar21 + 0x3d) + 7);
    puVar11 = (undefined4 *)*piVar16;
    for (; puVar11 != (undefined4 *)0x0; puVar11 = (undefined4 *)*puVar11) {
      uStack_34 = *(int *)((int)puVar11 + 0x13) + 0x1b + *(int *)((int)puVar11 + 0xf);
      puVar22 = puVar11;
      puVar25 = puVar18;
      for (uVar17 = uStack_34 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar25 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar25 = puVar25 + 1;
      }
      for (uVar17 = uStack_34 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined1 *)puVar25 = *(undefined1 *)puVar22;
        puVar22 = (undefined4 *)((int)puVar22 + 1);
        puVar25 = (undefined4 *)((int)puVar25 + 1);
      }
      puVar18 = (undefined4 *)((int)puVar18 + uStack_34);
      psVar3 = (short *)(*(int *)((int)pvStack_c + 0x3d) + 5);
      *psVar3 = *psVar3 + 1;
      piVar16 = piStack_2c;
    }
    puVar11 = (undefined4 *)0x0;
    uStack_28 = uVar9;
    if (*piVar16 != 0) {
      puVar11 = (undefined4 *)FUN_006b9890(piVar16);
    }
    if (DAT_00808783 != '\x03') {
      DAT_00858df8 = puStack_78;
      return puVar11;
    }
    iVar8 = *(int *)((int)pvStack_c + 0x3d);
    cVar7 = *(char *)((int)pvStack_c + 0x4d);
    uVar15 = (undefined3)((uint)puVar11 >> 8);
    puVar11 = (undefined4 *)CONCAT31(uVar15,cVar7);
    if (*(short *)(iVar8 + 5) == 0) {
      bVar6 = cVar7 + 1;
      puVar11 = (undefined4 *)CONCAT31(uVar15,bVar6);
      *(byte *)((int)pvStack_c + 0x4d) = bVar6;
      if ((int)(uint)bVar6 <
          *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0xc)) {
        DAT_00858df8 = puStack_78;
        return puVar11;
      }
      if (DAT_00808783 == '\x03') {
        *(byte *)(iVar8 + 4) = bVar6;
        *(undefined2 *)(*(int *)((int)pvStack_c + 0x3d) + 5) = 0;
        iVar8 = thunk_FUN_0054ebb0(pvStack_c,*(char **)((int)pvStack_c + 0x3d),7);
        puVar11 = (undefined4 *)0x0;
        if (iVar8 != 0) {
          uVar27 = 7;
LAB_0054f6c6:
          puVar11 = (undefined4 *)thunk_FUN_00550380(uVar27);
          DAT_00858df8 = puStack_78;
          return puVar11;
        }
      }
    }
    else {
      if (cVar7 != '\0') {
        *(char *)(iVar8 + 4) = cVar7;
      }
      if (DAT_00808783 == '\x03') {
        iVar8 = thunk_FUN_0054ebb0(pvStack_c,*(char **)((int)pvStack_c + 0x3d),uStack_28);
        puVar11 = (undefined4 *)0x0;
        if (iVar8 != 0) {
          uVar27 = 8;
          goto LAB_0054f6c6;
        }
      }
    }
    *(undefined1 *)((int)pvStack_c + 0x4d) = 0;
    DAT_00858df8 = puStack_78;
    return puVar11;
  }
  iStack_10 = 0;
  piStack_2c = (int *)timeGetTime();
  FUN_006b7510(DAT_00811764,-1,&iStack_20,-1,0);
  if (*(int *)((int)pvStack_c + 0x6d) == 0) {
    bVar26 = thunk_FUN_00550110((int)pvStack_c);
    if ((undefined4 *)CONCAT31(extraout_var_00,bVar26) != (undefined4 *)0x0) {
      DAT_00858df8 = puStack_78;
      return (undefined4 *)CONCAT31(extraout_var_00,bVar26);
    }
    if (iStack_20 < 3) {
      if (*(int *)((int)pvStack_c + 0x59) == 0) {
        if (DAT_00807654 <
            *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x14)) {
          DAT_00807654 = DAT_00807654 + 1;
        }
      }
      else {
        FUN_006b6500((int)DAT_00811764,1);
        iVar8 = FUN_00715360(DAT_00811764,1,'C',(char *)0x0,0,0,0xffffffff);
        if (iVar8 != 0) {
          uVar27 = 0xc;
          goto LAB_0054f76e;
        }
        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
        *(undefined4 *)((int)pvStack_c + 0x59) = 0;
      }
    }
    else {
      if ((5 < DAT_00807654) && (0 < DAT_00807654)) {
        DAT_00807654 = DAT_00807654 + -1;
      }
      if ((*(char *)((int)pvStack_c + 0x38) == '\0') &&
         (((0x32 < iStack_20 && (*(int *)((int)pvStack_c + 0x59) == 0)) || (100 < iStack_20)))) {
        FUN_006b6500((int)DAT_00811764,1);
        cStack_19 = '\x01';
        iVar8 = FUN_00715360(DAT_00811764,1,'B',&cStack_19,1,0,0xffffffff);
        if (iVar8 != 0) {
          uVar27 = 0xb;
          goto LAB_0054f76e;
        }
        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
        *(undefined4 *)((int)pvStack_c + 0x59) = 1;
      }
    }
    iStack_10 = 1;
    goto LAB_0054fad8;
  }
  if (*(int *)((int)pvStack_c + 0x71) != 0) {
    bVar26 = thunk_FUN_00550110((int)pvStack_c);
    if ((undefined4 *)CONCAT31(extraout_var,bVar26) != (undefined4 *)0x0) {
      DAT_00858df8 = puStack_78;
      return (undefined4 *)CONCAT31(extraout_var,bVar26);
    }
    iVar8 = thunk_FUN_0054eb20(pvStack_c,&uStack_28);
    if (iVar8 == 0) goto switchD_0054fb75_caseD_37;
    *(undefined4 *)((int)pvStack_c + 0x71) = 0;
    *(undefined4 *)((int)pvStack_c + 0x6d) = 0;
    *(undefined4 *)((int)pvStack_c + 0x79) = 0;
    uStack_14 = 0x31;
    goto LAB_0054fbb7;
  }
  iVar8 = FUN_006e51b0(0x807620);
  if (30000 < iVar8 - *(int *)((int)pvStack_c + 0x79)) {
    uVar27 = 10;
LAB_0054f76e:
    puVar11 = (undefined4 *)thunk_FUN_00550380(uVar27);
    DAT_00858df8 = puStack_78;
    return puVar11;
  }
  iVar8 = FUN_006e51b0(0x807620);
  if (*(short *)((int)pvStack_c + 0x7d) * 4000 < iVar8 - *(int *)((int)pvStack_c + 0x79)) {
    FUN_006b6500((int)DAT_00811764,1);
    FUN_00715360(DAT_00811764,1,'6',(char *)((int)pvStack_c + 0x41),4,0,0xffffffff);
    FUN_006b6500((int)DAT_00811764,DAT_0080733c);
    *(short *)((int)pvStack_c + 0x7d) = *(short *)((int)pvStack_c + 0x7d) + 1;
  }
  iVar8 = FUN_00715630(DAT_00811764,0x31,&uStack_14,(int *)&uStack_24,&puStack_8,&uStack_18,
                       *(int *)((int)pvStack_c + 0x41),0);
  if (*(int *)((int)pvStack_c + 0x75) == 0) {
    if (iVar8 != 1) goto LAB_0054f98b;
  }
  else {
    *(undefined4 *)((int)pvStack_c + 0x75) = 0;
    if (iVar8 != 1) {
      FUN_006b6500((int)DAT_00811764,1);
      iVar8 = FUN_00715360(DAT_00811764,1,'6',(char *)((int)pvStack_c + 0x41),4,0,0xffffffff);
      if (iVar8 == 0) {
        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
        if (*(byte *)((int)pvStack_c + 0xbb) < 5) {
          uVar13 = FUN_006e51b0(0x807620);
          *(undefined4 *)((int)pvStack_c + (uint)*(byte *)((int)pvStack_c + 0xbb) * 4 + 0xa7) =
               uVar13;
          cVar7 = *(char *)((int)pvStack_c + 0xbb) + '\x01';
          *(char *)((int)pvStack_c + 0xbb) = cVar7;
          DAT_00858df8 = puStack_78;
          return (undefined4 *)CONCAT31((int3)((uint)uVar13 >> 8),cVar7);
        }
        *(int *)((int)pvStack_c + 0xa7) = *(int *)((int)pvStack_c + 0xab);
        *(undefined4 *)((int)pvStack_c + 0xab) = *(undefined4 *)((int)pvStack_c + 0xaf);
        *(undefined4 *)((int)pvStack_c + 0xaf) = *(undefined4 *)((int)pvStack_c + 0xb3);
        *(undefined4 *)((int)pvStack_c + 0xb3) = *(undefined4 *)((int)pvStack_c + 0xb7);
        iVar8 = FUN_006e51b0(0x807620);
        *(int *)((int)pvStack_c + 0xb7) = iVar8;
        if (DAT_0080735e == '\0') {
          DAT_00858df8 = puStack_78;
          return (undefined4 *)CONCAT31((int3)((uint)iVar8 >> 8),DAT_0080735e);
        }
        uVar9 = iVar8 - *(int *)((int)pvStack_c + 0xa7);
        if (3000 < uVar9 / 5) {
          DAT_00858df8 = puStack_78;
          return (undefined4 *)(uVar9 * -0x33333333);
        }
        puVar11 = (undefined4 *)0x0;
        if (DAT_008016d8 != (void *)0x0) {
          uVar9 = 9;
          pcVar12 = (char *)FUN_006b0140(17000,DAT_00807618);
          puVar11 = (undefined4 *)thunk_FUN_0052d320(DAT_008016d8,pcVar12,uVar9);
        }
        *(undefined1 *)((int)pvStack_c + 0xbb) = 0;
        DAT_00858df8 = puStack_78;
        return puVar11;
      }
      uVar27 = 0x10;
      goto LAB_0054f76e;
    }
  }
  if ((DAT_0080735e != '\0') && (DAT_008016d8 != (void *)0x0)) {
    uVar9 = 8;
    pcVar12 = (char *)FUN_006b0140(0x426c,DAT_00807618);
    thunk_FUN_0052d320(DAT_008016d8,pcVar12,uVar9);
  }
LAB_0054f98b:
  iStack_10 = 1;
  do {
    if (iVar8 == -0x4d) {
      thunk_FUN_00550380(0xe);
      goto LAB_0054fad8;
    }
    if (iVar8 == 0) {
      if (60000 < (int)piStack_2c - *(int *)((int)pvStack_c + 0x83)) {
        thunk_FUN_00550380(0xd);
      }
      goto LAB_0054fad8;
    }
    if (iVar8 != 1) goto LAB_0054fad8;
    *(int **)((int)pvStack_c + 0x83) = piStack_2c;
    if (uStack_14 == 0x31) {
      *(undefined1 *)((int)pvStack_c + 0x38) = 0;
    }
    switch(uStack_14) {
    case 0x10:
      DAT_0080c50a = 0;
      DAT_0080c512 = 1;
      if (DAT_008016dc != 0) {
        thunk_FUN_00533a10('\v',0);
      }
      break;
    case 0x11:
      thunk_FUN_005504f0(pvStack_c,uStack_24,0x426f,1);
    default:
      goto switchD_0054fb75_caseD_12;
    case 0x31:
      if (*(int *)((int)pvStack_c + 0x45) < (int)uStack_18) {
        iVar8 = FUN_006acf50(*(undefined4 **)((int)pvStack_c + 0x3d),uStack_18);
        *(int *)((int)pvStack_c + 0x3d) = iVar8;
        *(uint *)((int)pvStack_c + 0x45) = uStack_18;
      }
      uStack_28 = uStack_18;
      puVar19 = puStack_8;
      puVar20 = *(uint **)((int)pvStack_c + 0x3d);
      for (uVar9 = uStack_18 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar20 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
      }
      for (uVar9 = uStack_18 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)puVar20 = (char)*puVar19;
        puVar19 = (uint *)((int)puVar19 + 1);
        puVar20 = (uint *)((int)puVar20 + 1);
      }
LAB_0054fbb7:
      puVar19 = *(uint **)((int)pvStack_c + 0x3d);
      uVar9 = *(uint *)((int)pvStack_c + 0x41);
      if (*puVar19 < uVar9) {
        *(undefined2 *)((int)puVar19 + 5) = 0;
      }
      else if (uVar9 < *puVar19) {
        if (*(int *)((int)pvStack_c + 0x6d) == 0) {
          thunk_FUN_0054e950(puVar19,uStack_28);
          *(undefined2 *)(*(int *)((int)pvStack_c + 0x3d) + 5) = 0;
          *(undefined4 *)((int)pvStack_c + 0x6d) = 1;
          *(undefined4 *)((int)pvStack_c + 0x71) = 0;
          *(undefined4 *)((int)pvStack_c + 0x75) = 1;
          uVar13 = FUN_006e51b0(0x807620);
          *(undefined4 *)((int)pvStack_c + 0x79) = uVar13;
          *(undefined2 *)((int)pvStack_c + 0x7d) = 1;
        }
        else {
          thunk_FUN_00550380(0xf);
        }
      }
      else {
        if (*(int *)((int)pvStack_c + 0x6d) != 0) {
          *(undefined4 *)((int)pvStack_c + 0x71) = 1;
        }
        *(uint *)((int)pvStack_c + 0x41) = uVar9 + 1;
        if ((char)puVar19[1] != '\0') {
          *(undefined2 *)((int)pvStack_c + 0x57) = *(undefined2 *)((int)puVar19 + 5);
          *(undefined2 *)((int)puVar19 + 5) = 0;
          *(undefined4 *)((int)pvStack_c + 0x49) = **(undefined4 **)((int)pvStack_c + 0x3d);
          *(undefined1 *)((int)pvStack_c + 0x4d) =
               *(undefined1 *)(*(undefined4 **)((int)pvStack_c + 0x3d) + 1);
          *(undefined1 *)((int)pvStack_c + 0x4e) = 0;
          thunk_FUN_00550110((int)pvStack_c);
        }
      }
      break;
    case 0x33:
      thunk_FUN_00550830((int)puStack_8);
      goto switchD_0054fb75_caseD_12;
    case 0x34:
      break;
    case 0x37:
switchD_0054fb75_caseD_37:
      thunk_FUN_00550380(0x11);
      break;
    case 0x44:
      *(undefined4 *)((int)pvStack_c + 0x59) = 0;
switchD_0054fb75_caseD_12:
      iStack_10 = 1;
    }
    if (puStack_8 != (uint *)0x0) {
      FUN_006ab060(&puStack_8);
    }
LAB_0054fad8:
    if (iStack_10 == 0) {
      DAT_00858df8 = puStack_78;
      return (undefined4 *)0x0;
    }
    iStack_10 = 0;
    bVar26 = *(int *)((int)pvStack_c + 0x6d) == 0;
    if (bVar26) {
      iVar8 = -1;
    }
    else {
      iVar8 = 0x31;
    }
    iVar8 = FUN_00715630(DAT_00811764,iVar8,&uStack_14,(int *)&uStack_24,&puStack_8,&uStack_18,-1,
                         (uint)!bVar26);
  } while( true );
}

