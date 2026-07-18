
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall thunk_FUN_005825c0(int *param_1)

{
  STT3DSprC *pSVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined3 extraout_var;
  int iVar11;
  undefined2 extraout_var_00;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined2 extraout_var_01;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  uint extraout_EDX;
  undefined2 extraout_var_04;
  undefined4 *puVar15;
  undefined4 **ppuVar16;
  undefined4 *apuStack_4c [8];
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  char cStack_5;
  
  iVar9 = thunk_FUN_0041c710((int)param_1);
  pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
  if (iVar9 == 0) {
    iVar9 = 0;
    uVar10 = thunk_FUN_004ad650((int)pSVar1);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar10,iVar9);
    bVar8 = thunk_FUN_0041caf0((int)param_1);
    if (CONCAT31(extraout_var,bVar8) == 1) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
  }
  else {
    iVar9 = 1;
    uVar10 = thunk_FUN_004ad650((int)pSVar1);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar10,iVar9);
    iVar9 = 1;
  }
  iVar11 = thunk_FUN_004ad650((int)pSVar1);
  FUN_006e6870(*(void **)((int)param_1 + 0x211),iVar11,iVar9);
  uStack_14 = CONCAT22(extraout_var_00,*(undefined2 *)((int)param_1 + 0x41));
  uStack_10 = CONCAT22(extraout_var_01,*(undefined2 *)((int)param_1 + 0x43));
  uStack_c = CONCAT22(extraout_var_02,*(undefined2 *)((int)param_1 + 0x45));
  switch(*(undefined4 *)((int)param_1 + 0x235)) {
  case 1:
    uStack_1c = (uint)*(short *)((int)param_1 + 0x4b);
    iStack_28 = (int)*(short *)((int)param_1 + 0x49);
    sVar4 = *(short *)((int)param_1 + 0x47);
    iStack_2c = (**(code **)(*param_1 + 0x24))();
    iVar9 = (int)*(short *)((int)param_1 + 0x47);
    if ((((((sVar4 == iVar9) && (iStack_28 == *(short *)((int)param_1 + 0x49))) &&
          (uVar10 = (uint)*(short *)((int)param_1 + 0x4b), uStack_1c == uVar10)) ||
         (((uVar10 = (uint)*(short *)((int)param_1 + 0x49), iVar9 < 0 || ((int)uVar10 < 0)) ||
          ((iVar11 = (int)DAT_007fb240, iVar11 <= iVar9 ||
           (((int)DAT_007fb242 <= (int)uVar10 ||
            (*(char *)(iVar11 * uVar10 + DAT_007fb26c + iVar9) == '\0')))))))) ||
        (((&DAT_007fb24c)[param_1[9]] != 0 &&
         (*(char *)(iVar11 * uVar10 + (&DAT_007fb24c)[param_1[9]] + iVar9) != '\0')))) ||
       (uVar13 = thunk_FUN_00497030(iVar9,uVar10,param_1[9],1,DAT_007e6760), iVar9 = extraout_ECX,
       uVar10 = extraout_EDX, (int)uVar13 < 0)) {
      if (iStack_2c == 0) {
LAB_005829e6:
        if ((*(byte *)(DAT_00802a38 + 0xe4) & 0x3f) == 0) goto LAB_005829f4;
      }
      else {
        if (iStack_2c != 1) {
          if (iStack_2c != 2) {
            iVar9 = FUN_006ad4d0(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x11b,0,0,&DAT_007a4ccc);
            if (iVar9 == 0) {
              return;
            }
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          goto LAB_005829e6;
        }
        if ((*(int *)((int)param_1 + 0x23d) != 0) &&
           ((piVar12 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(uVar10 >> 8),
                                                          *(undefined1 *)((int)param_1 + 0x241)),
                                                 CONCAT22((short)((uint)iVar9 >> 0x10),
                                                          *(undefined2 *)((int)param_1 + 0x245)),1),
            piVar12 == (int *)0x0 || (iVar9 = (**(code **)(*piVar12 + 0xf8))(), iVar9 == 0)))) {
          *(undefined4 *)((int)param_1 + 0x23d) = 0;
        }
LAB_005829f4:
        iVar9 = thunk_FUN_00583e30(param_1);
        *(int *)((int)param_1 + 0x235) = iVar9;
      }
      sVar4 = *(short *)((int)param_1 + 0x47);
      sVar5 = *(short *)((int)param_1 + 0x4b);
      sVar6 = *(short *)((int)param_1 + 0x49);
      if (((((((-1 < sVar4) && (sVar4 < DAT_007fb240)) && (-1 < sVar6)) &&
            ((sVar6 < DAT_007fb242 && (-1 < sVar5)))) &&
           ((sVar5 < DAT_007fb244 &&
            (piVar12 = *(int **)(DAT_007fb248 +
                                ((int)sVar6 * (int)DAT_007fb240 + (int)DAT_007fb246 * (int)sVar5 +
                                (int)sVar4) * 8), piVar12 != (int *)0x0)))) &&
          ((piVar12[8] == 1000 || (piVar12[8] == 0x14)))) &&
         ((iVar9 = (**(code **)(*piVar12 + 0xf0))(), iVar9 != 0 &&
          (((uint)piVar12[9] < 8 &&
           ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar12[9] * 0x51] < 8)))))))) {
        iVar9 = param_1[4];
        bVar2 = *(byte *)(piVar12 + 9);
        bVar3 = *(byte *)(param_1 + 9);
        uStack_1c = CONCAT31(uStack_1c._1_3_,bVar2);
        iStack_28 = CONCAT31(iStack_28._1_3_,bVar3);
        if (*(char *)(iVar9 + 0x146f) == '\0') {
          if (bVar2 == bVar3) {
LAB_00582bb0:
            iVar9 = 0;
          }
          else {
            uVar10 = (uint)bVar2;
            uVar13 = (uint)bVar3;
            cStack_5 = *(char *)(uVar13 + uVar10 * 8 + 0x142f + iVar9);
            if ((cStack_5 == '\0') && (*(char *)(uVar10 + uVar13 * 8 + 0x142f + iVar9) == '\0')) {
              iVar9 = -2;
            }
            else if ((cStack_5 == '\x01') &&
                    (*(char *)(uVar10 + uVar13 * 8 + 0x142f + iVar9) == '\0')) {
              iVar9 = -1;
            }
            else if ((cStack_5 == '\0') &&
                    (*(char *)(uVar10 + uVar13 * 8 + 0x142f + iVar9) == '\x01')) {
              iVar9 = 1;
            }
            else {
              if ((cStack_5 != '\x01') ||
                 (*(char *)(uVar10 + uVar13 * 8 + 0x142f + iVar9) != '\x01')) goto LAB_00582bb0;
              iVar9 = 2;
            }
          }
          bVar8 = iVar9 < 0;
        }
        else {
          iStack_2c = iVar9 + (uint)bVar3 * 0x48;
          bVar8 = *(char *)((uint)bVar3 * 9 + 0x11ca + iStack_2c) !=
                  *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar9);
        }
        if ((bVar8) && (iVar9 = (**(code **)(*piVar12 + 0xf8))(), iVar9 != 0)) {
          iVar9 = (**(code **)(*piVar12 + 0xdc))
                            (*(undefined2 *)((int)param_1 + 0x41),
                             *(undefined2 *)((int)param_1 + 0x43),
                             *(undefined2 *)((int)param_1 + 0x45),uStack_14,uStack_10,uStack_c);
          *(int *)((int)param_1 + 0x252) = iVar9;
          if (-1 < iVar9) {
            thunk_FUN_00582530(param_1);
            pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
            *(int *)((int)param_1 + 0x241) = piVar12[9];
            *(undefined2 *)((int)param_1 + 0x245) = *(undefined2 *)((int)piVar12 + 0x32);
            *(undefined4 *)((int)param_1 + 0x235) = 2;
            STT3DSprC::StopShow(pSVar1,0xe);
            STT3DSprC::StopShow(pSVar1,0xc);
            thunk_FUN_004ad5e0((int)pSVar1);
            thunk_FUN_005844e0(param_1,(int)*(short *)((int)param_1 + 0x41),
                               (int)*(short *)((int)param_1 + 0x43),0x498);
            iVar9 = thunk_FUN_00584380(param_1);
            if (iVar9 != 0) goto LAB_00582958;
            (**(code **)(*piVar12 + 0xe0))
                      (*(undefined4 *)((int)param_1 + 0x252),&uStack_14,&uStack_10,&uStack_c,
                       &iStack_18);
            if (iStack_18 != 0) {
              iVar9 = *(int *)((int)piVar12 + 0x1ed);
              goto LAB_00582cbd;
            }
            iVar9 = *(int *)((int)piVar12 + 0x1ed);
LAB_00582c9f:
            FUN_006ea460(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed),iVar9);
          }
        }
      }
    }
    else {
      thunk_FUN_00582530(param_1);
      *(undefined4 *)((int)param_1 + 0x241) = 0xff;
      *(undefined2 *)((int)param_1 + 0x245) = 0;
      *(undefined4 *)((int)param_1 + 0x235) = 2;
      STT3DSprC::StopShow(pSVar1,0xe);
      STT3DSprC::StopShow(pSVar1,0xc);
      thunk_FUN_004ad5e0((int)pSVar1);
      thunk_FUN_00637ae0((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43),
                         (int)*(short *)((int)param_1 + 0x45));
LAB_00582958:
      thunk_FUN_00582580(param_1);
    }
    break;
  case 2:
    uVar10 = thunk_FUN_004ac910(pSVar1,'\b');
    uStack_1c = uVar10;
    if (((uVar10 == 1) && (*(int *)((int)param_1 + 0x241) != 0xff)) &&
       (puVar14 = (undefined4 *)
                  thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                              *(undefined1 *)((int)param_1 + 0x241)),
                                     (uint)*(ushort *)((int)param_1 + 0x245),1),
       puVar14 != (undefined4 *)0x0)) {
      puVar15 = &DAT_008116c8;
      for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      DAT_008116c8 = DAT_007e6760;
      _DAT_008116d4 = *(undefined2 *)((int)param_1 + 0x292);
      _DAT_008116d6 = *(undefined2 *)((int)param_1 + 0x28e);
      _DAT_008116d0 = *(undefined4 *)((int)param_1 + 0x25a);
      DAT_008116cc = 0xbc;
      ppuVar16 = apuStack_4c;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *ppuVar16 = (undefined4 *)0x0;
        ppuVar16 = ppuVar16 + 1;
      }
      apuStack_4c[2] = (undefined4 *)puVar14[2];
      apuStack_4c[3] = (undefined4 *)0x2;
      apuStack_4c[4] = (undefined4 *)0x110;
      apuStack_4c[5] = &DAT_008116c8;
      (**(code **)*puVar14)(apuStack_4c);
      uVar10 = uStack_1c;
    }
    if ((*(char *)((int)param_1 + 0x24f) != '\0') && (uVar10 == *(byte *)(param_1 + 0x94))) {
      STT3DSprC::StartShow(pSVar1,9,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004ad0e0(pSVar1,9);
    }
    iVar9 = thunk_FUN_004acd30(pSVar1,'\b');
    if (uVar10 == iVar9 - 1U) {
      STT3DSprC::StopShow(pSVar1,8);
    }
    iVar9 = thunk_FUN_004acd30(pSVar1,'\n');
    if (uVar10 == iVar9 - 1U) {
      STT3DSprC::StopShow(pSVar1,10);
    }
    if (*(char *)((int)param_1 + 0x24f) != '\0') {
      iVar9 = thunk_FUN_004acd30(pSVar1,'\t');
      iVar11 = thunk_FUN_004ac910(pSVar1,'\t');
      uVar10 = uStack_1c;
      if (iVar11 == iVar9 + -1) {
        STT3DSprC::StopShow(pSVar1,9);
        *(undefined1 *)((int)param_1 + 0x24f) = 0;
        uVar10 = uStack_1c;
      }
    }
    iVar9 = thunk_FUN_004acd30(pSVar1,'\b');
    if ((uVar10 != iVar9 - 1U) || (*(char *)((int)param_1 + 0x24f) != '\0')) {
      if (((int)uVar10 < 10) &&
         ((0 < *(int *)((int)param_1 + 0x252) &&
          (piVar12 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)*(int *)((int)param_1 + 0x252)
                                                              >> 8),
                                                        *(undefined1 *)((int)param_1 + 0x241)),
                                               CONCAT22(extraout_var_04,
                                                        *(undefined2 *)((int)param_1 + 0x245)),1),
          piVar12 != (int *)0x0)))) {
        (**(code **)(*piVar12 + 0xe0))
                  (*(undefined4 *)((int)param_1 + 0x252),&uStack_14,&uStack_10,&uStack_c,&iStack_18)
        ;
        thunk_FUN_00416240(param_1,(short)uStack_14,(short)uStack_10,(short)uStack_c);
      }
      (**(code **)(*param_1 + 0xd8))();
      return;
    }
  case 4:
    thunk_FUN_00582580(param_1);
    return;
  case 3:
    iVar9 = thunk_FUN_00415ed0(param_1,&uStack_24,&uStack_20);
    if (iVar9 == -1) goto switchD_00582651_default;
    if ((-1 < iVar9) && (iVar9 < 2)) {
      if ((*(uint *)((int)param_1 + 0x241) == 0xff) ||
         ((piVar12 = (int *)thunk_FUN_0042b620(*(uint *)((int)param_1 + 0x241),
                                               CONCAT22(extraout_var_03,
                                                        *(undefined2 *)((int)param_1 + 0x245)),1),
          piVar12 == (int *)0x0 || (iVar11 = (**(code **)(*piVar12 + 0xf8))(), iVar11 == 0)))) {
        *(undefined4 *)((int)param_1 + 0x23d) = 0;
        goto switchD_00582651_default;
      }
      if (((byte)*(undefined4 *)(DAT_00802a38 + 0xe4) & 7) != 1) {
LAB_005827b7:
        if (iVar9 == 0) goto switchD_00582651_default;
        break;
      }
      iVar11 = (**(code **)(*piVar12 + 0xdc))
                         (*(undefined2 *)((int)param_1 + 0x41),*(undefined2 *)((int)param_1 + 0x43),
                          *(undefined2 *)((int)param_1 + 0x45),uStack_14,uStack_10,uStack_c);
      *(int *)((int)param_1 + 0x252) = iVar11;
      if (iVar11 < 0) goto LAB_005827b7;
      thunk_FUN_005844e0(param_1,(int)*(short *)((int)param_1 + 0x41),
                         (int)*(short *)((int)param_1 + 0x43),0x498);
      thunk_FUN_00582530(param_1);
      pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
      *(int *)((int)param_1 + 0x241) = piVar12[9];
      *(undefined2 *)((int)param_1 + 0x245) = *(undefined2 *)((int)piVar12 + 0x32);
      *(undefined4 *)((int)param_1 + 0x235) = 2;
      STT3DSprC::StopShow(pSVar1,0xe);
      STT3DSprC::StopShow(pSVar1,0xc);
      thunk_FUN_004ad5e0((int)pSVar1);
      iVar9 = thunk_FUN_00584380(param_1);
      if (iVar9 != 0) goto LAB_00582958;
      (**(code **)(*piVar12 + 0xe0))
                (*(undefined4 *)((int)param_1 + 0x252),&uStack_14,&uStack_10,&uStack_c,&iStack_18);
      if (iStack_18 == 0) {
        iVar9 = *(int *)((int)piVar12 + 0x1ed);
        goto LAB_00582c9f;
      }
      iVar9 = *(int *)((int)piVar12 + 0x1ed);
LAB_00582cbd:
      FUN_006ea3e0(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed),iVar9);
    }
    break;
  default:
switchD_00582651_default:
    iVar9 = thunk_FUN_00583e30(param_1);
    *(int *)((int)param_1 + 0x235) = iVar9;
  }
  if (*(int *)((int)param_1 + 0x239) < 0) {
    if (*(int *)((int)param_1 + 0x24b) == 0) {
      iVar9 = *(int *)((int)param_1 + 0x247) + -2;
      *(int *)((int)param_1 + 0x247) = iVar9;
      if (-1 < iVar9) goto LAB_00582f2d;
      *(undefined4 *)((int)param_1 + 0x247) = 1;
      *(undefined4 *)((int)param_1 + 0x24b) = 1;
LAB_00582f27:
      *(undefined4 *)((int)param_1 + 0x231) = 0;
    }
    else if (*(int *)((int)param_1 + 0x231) == 0) {
      if ((int)*(short *)((int)param_1 + 0x3e) - (int)(short)param_1[0xe] < -10) {
        if (((*(byte *)(DAT_00802a38 + 0xe4) & 3) == 0) &&
           (iVar9 = *(int *)((int)param_1 + 0x247) + 1, *(int *)((int)param_1 + 0x247) = iVar9,
           10 < iVar9)) {
          *(undefined4 *)((int)param_1 + 0x247) = 10;
        }
      }
      else if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0) goto LAB_00582edf;
    }
    else {
LAB_00582edf:
      iVar9 = *(int *)((int)param_1 + 0x247) + 1;
      *(int *)((int)param_1 + 0x247) = iVar9;
      if (10 < iVar9) {
        *(undefined4 *)((int)param_1 + 0x247) = 9;
        *(undefined4 *)((int)param_1 + 0x24b) = 0;
        goto LAB_00582f27;
      }
    }
LAB_00582f2d:
    if (((*(int *)((int)param_1 + 0x231) != 0) || (*(int *)((int)param_1 + 0x247) != 4)) ||
       (iVar9 = (int)*(short *)((int)param_1 + 0x3e) - (int)(short)param_1[0xe], iVar9 < -10))
    goto LAB_00582f72;
    *(undefined4 *)((int)param_1 + 0x239) = 0x19;
    if (iVar9 == 0) goto LAB_00582f72;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    iVar9 = (int)(0x19 / (longlong)iVar9);
  }
  else {
    iVar9 = *(int *)((int)param_1 + 0x239) + -1;
  }
  *(int *)((int)param_1 + 0x239) = iVar9;
LAB_00582f72:
  pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
  thunk_FUN_004abe40(pSVar1,'\x0e',*(undefined4 *)((int)param_1 + 0x247));
  thunk_FUN_004abe40(pSVar1,'\f',*(undefined4 *)((int)param_1 + 0x247));
  STT3DSprC::SetCurShad(pSVar1,'\x0e',*(undefined4 *)((int)param_1 + 0x247));
  STT3DSprC::ShowCurFase(pSVar1,'\x0e');
  STT3DSprC::ShowCurFase(pSVar1,'\f');
  (**(code **)(*param_1 + 0xd8))();
  return;
}

