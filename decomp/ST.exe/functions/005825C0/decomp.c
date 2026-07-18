
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005825c0(int *param_1)

{
  void *this;
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined3 extraout_var;
  int iVar10;
  undefined2 extraout_var_00;
  int *piVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined2 extraout_var_01;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  uint extraout_EDX;
  undefined2 extraout_var_04;
  undefined4 *puVar14;
  undefined4 **ppuVar15;
  undefined4 *local_4c [8];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_5;
  
  iVar8 = thunk_FUN_0041c710((int)param_1);
  this = (void *)((int)param_1 + 0x1d5);
  if (iVar8 == 0) {
    iVar8 = 0;
    uVar9 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar9,iVar8);
    bVar7 = thunk_FUN_0041caf0((int)param_1);
    if (CONCAT31(extraout_var,bVar7) == 1) {
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
    }
  }
  else {
    iVar8 = 1;
    uVar9 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar9,iVar8);
    iVar8 = 1;
  }
  iVar10 = thunk_FUN_004ad650((int)this);
  FUN_006e6870(*(void **)((int)param_1 + 0x211),iVar10,iVar8);
  local_14 = CONCAT22(extraout_var_00,*(undefined2 *)((int)param_1 + 0x41));
  local_10 = CONCAT22(extraout_var_01,*(undefined2 *)((int)param_1 + 0x43));
  local_c = CONCAT22(extraout_var_02,*(undefined2 *)((int)param_1 + 0x45));
  switch(*(undefined4 *)((int)param_1 + 0x235)) {
  case 1:
    local_1c = (uint)*(short *)((int)param_1 + 0x4b);
    local_28 = (int)*(short *)((int)param_1 + 0x49);
    sVar3 = *(short *)((int)param_1 + 0x47);
    local_2c = (**(code **)(*param_1 + 0x24))();
    iVar8 = (int)*(short *)((int)param_1 + 0x47);
    if ((((((sVar3 == iVar8) && (local_28 == *(short *)((int)param_1 + 0x49))) &&
          (uVar9 = (uint)*(short *)((int)param_1 + 0x4b), local_1c == uVar9)) ||
         (((uVar9 = (uint)*(short *)((int)param_1 + 0x49), iVar8 < 0 || ((int)uVar9 < 0)) ||
          ((iVar10 = (int)DAT_007fb240, iVar10 <= iVar8 ||
           (((int)DAT_007fb242 <= (int)uVar9 ||
            (*(char *)(iVar10 * uVar9 + DAT_007fb26c + iVar8) == '\0')))))))) ||
        (((&DAT_007fb24c)[param_1[9]] != 0 &&
         (*(char *)(iVar10 * uVar9 + (&DAT_007fb24c)[param_1[9]] + iVar8) != '\0')))) ||
       (uVar12 = thunk_FUN_00497030(iVar8,uVar9,param_1[9],1,DAT_007e6760), iVar8 = extraout_ECX,
       uVar9 = extraout_EDX, (int)uVar12 < 0)) {
      if (local_2c == 0) {
LAB_005829e6:
        if ((*(byte *)(DAT_00802a38 + 0xe4) & 0x3f) == 0) goto LAB_005829f4;
      }
      else {
        if (local_2c != 1) {
          if (local_2c != 2) {
            iVar8 = FUN_006ad4d0(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x11b,0,0,&DAT_007a4ccc);
            if (iVar8 == 0) {
              return;
            }
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          goto LAB_005829e6;
        }
        if ((*(int *)((int)param_1 + 0x23d) != 0) &&
           ((piVar11 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(uVar9 >> 8),
                                                          *(undefined1 *)((int)param_1 + 0x241)),
                                                 CONCAT22((short)((uint)iVar8 >> 0x10),
                                                          *(undefined2 *)((int)param_1 + 0x245)),1),
            piVar11 == (int *)0x0 || (iVar8 = (**(code **)(*piVar11 + 0xf8))(), iVar8 == 0)))) {
          *(undefined4 *)((int)param_1 + 0x23d) = 0;
        }
LAB_005829f4:
        iVar8 = thunk_FUN_00583e30(param_1);
        *(int *)((int)param_1 + 0x235) = iVar8;
      }
      sVar3 = *(short *)((int)param_1 + 0x47);
      sVar4 = *(short *)((int)param_1 + 0x4b);
      sVar5 = *(short *)((int)param_1 + 0x49);
      if (((((((-1 < sVar3) && (sVar3 < DAT_007fb240)) && (-1 < sVar5)) &&
            ((sVar5 < DAT_007fb242 && (-1 < sVar4)))) &&
           ((sVar4 < DAT_007fb244 &&
            (piVar11 = *(int **)(DAT_007fb248 +
                                ((int)sVar5 * (int)DAT_007fb240 + (int)DAT_007fb246 * (int)sVar4 +
                                (int)sVar3) * 8), piVar11 != (int *)0x0)))) &&
          ((piVar11[8] == 1000 || (piVar11[8] == 0x14)))) &&
         ((iVar8 = (**(code **)(*piVar11 + 0xf0))(), iVar8 != 0 &&
          (((uint)piVar11[9] < 8 &&
           ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar11[9] * 0x51] < 8)))))))) {
        iVar8 = param_1[4];
        bVar1 = *(byte *)(piVar11 + 9);
        bVar2 = *(byte *)(param_1 + 9);
        local_1c = CONCAT31(local_1c._1_3_,bVar1);
        local_28 = CONCAT31(local_28._1_3_,bVar2);
        if (*(char *)(iVar8 + 0x146f) == '\0') {
          if (bVar1 == bVar2) {
LAB_00582bb0:
            iVar8 = 0;
          }
          else {
            uVar9 = (uint)bVar1;
            uVar12 = (uint)bVar2;
            local_5 = *(char *)(uVar12 + uVar9 * 8 + 0x142f + iVar8);
            if ((local_5 == '\0') && (*(char *)(uVar9 + uVar12 * 8 + 0x142f + iVar8) == '\0')) {
              iVar8 = -2;
            }
            else if ((local_5 == '\x01') && (*(char *)(uVar9 + uVar12 * 8 + 0x142f + iVar8) == '\0')
                    ) {
              iVar8 = -1;
            }
            else if ((local_5 == '\0') && (*(char *)(uVar9 + uVar12 * 8 + 0x142f + iVar8) == '\x01')
                    ) {
              iVar8 = 1;
            }
            else {
              if ((local_5 != '\x01') || (*(char *)(uVar9 + uVar12 * 8 + 0x142f + iVar8) != '\x01'))
              goto LAB_00582bb0;
              iVar8 = 2;
            }
          }
          bVar7 = iVar8 < 0;
        }
        else {
          local_2c = iVar8 + (uint)bVar2 * 0x48;
          bVar7 = *(char *)((uint)bVar2 * 9 + 0x11ca + local_2c) !=
                  *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar8);
        }
        if ((bVar7) && (iVar8 = (**(code **)(*piVar11 + 0xf8))(), iVar8 != 0)) {
          iVar8 = (**(code **)(*piVar11 + 0xdc))
                            (*(undefined2 *)((int)param_1 + 0x41),
                             *(undefined2 *)((int)param_1 + 0x43),
                             *(undefined2 *)((int)param_1 + 0x45),local_14,local_10,local_c);
          *(int *)((int)param_1 + 0x252) = iVar8;
          if (-1 < iVar8) {
            thunk_FUN_00582530(param_1);
            *(int *)((int)param_1 + 0x241) = piVar11[9];
            *(undefined2 *)((int)param_1 + 0x245) = *(undefined2 *)((int)piVar11 + 0x32);
            *(undefined4 *)((int)param_1 + 0x235) = 2;
            thunk_FUN_004ac410(0xe);
            thunk_FUN_004ac410(0xc);
            thunk_FUN_004ad5e0((int)param_1 + 0x1d5);
            thunk_FUN_005844e0(param_1,(int)*(short *)((int)param_1 + 0x41),
                               (int)*(short *)((int)param_1 + 0x43),0x498);
            iVar8 = thunk_FUN_00584380(param_1);
            if (iVar8 != 0) goto LAB_00582958;
            (**(code **)(*piVar11 + 0xe0))
                      (*(undefined4 *)((int)param_1 + 0x252),&local_14,&local_10,&local_c,&local_18)
            ;
            if (local_18 != 0) {
              iVar8 = *(int *)((int)piVar11 + 0x1ed);
              goto LAB_00582cbd;
            }
            iVar8 = *(int *)((int)piVar11 + 0x1ed);
LAB_00582c9f:
            FUN_006ea460(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed),iVar8);
          }
        }
      }
    }
    else {
      thunk_FUN_00582530(param_1);
      *(undefined4 *)((int)param_1 + 0x241) = 0xff;
      *(undefined2 *)((int)param_1 + 0x245) = 0;
      *(undefined4 *)((int)param_1 + 0x235) = 2;
      thunk_FUN_004ac410(0xe);
      thunk_FUN_004ac410(0xc);
      thunk_FUN_004ad5e0((int)this);
      thunk_FUN_00637ae0((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43),
                         (int)*(short *)((int)param_1 + 0x45));
LAB_00582958:
      thunk_FUN_00582580(param_1);
    }
    break;
  case 2:
    uVar9 = thunk_FUN_004ac910(this,'\b');
    local_1c = uVar9;
    if (((uVar9 == 1) && (*(int *)((int)param_1 + 0x241) != 0xff)) &&
       (puVar13 = (undefined4 *)
                  thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                              *(undefined1 *)((int)param_1 + 0x241)),
                                     (uint)*(ushort *)((int)param_1 + 0x245),1),
       puVar13 != (undefined4 *)0x0)) {
      puVar14 = &DAT_008116c8;
      for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      DAT_008116c8 = DAT_007e6760;
      _DAT_008116d4 = *(undefined2 *)((int)param_1 + 0x292);
      _DAT_008116d6 = *(undefined2 *)((int)param_1 + 0x28e);
      _DAT_008116d0 = *(undefined4 *)((int)param_1 + 0x25a);
      DAT_008116cc = 0xbc;
      ppuVar15 = local_4c;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *ppuVar15 = (undefined4 *)0x0;
        ppuVar15 = ppuVar15 + 1;
      }
      local_4c[2] = (undefined4 *)puVar13[2];
      local_4c[3] = (undefined4 *)0x2;
      local_4c[4] = (undefined4 *)0x110;
      local_4c[5] = &DAT_008116c8;
      (**(code **)*puVar13)(local_4c);
      uVar9 = local_1c;
    }
    if ((*(char *)((int)param_1 + 0x24f) != '\0') && (uVar9 == *(byte *)(param_1 + 0x94))) {
      thunk_FUN_004ac1a0(9,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004ad0e0(this,9);
    }
    iVar8 = thunk_FUN_004acd30(this,'\b');
    if (uVar9 == iVar8 - 1U) {
      thunk_FUN_004ac410(8);
    }
    iVar8 = thunk_FUN_004acd30(this,'\n');
    if (uVar9 == iVar8 - 1U) {
      thunk_FUN_004ac410(10);
    }
    if (*(char *)((int)param_1 + 0x24f) != '\0') {
      iVar8 = thunk_FUN_004acd30(this,'\t');
      iVar10 = thunk_FUN_004ac910(this,'\t');
      uVar9 = local_1c;
      if (iVar10 == iVar8 + -1) {
        thunk_FUN_004ac410(9);
        *(undefined1 *)((int)param_1 + 0x24f) = 0;
        uVar9 = local_1c;
      }
    }
    iVar8 = thunk_FUN_004acd30(this,'\b');
    if ((uVar9 != iVar8 - 1U) || (*(char *)((int)param_1 + 0x24f) != '\0')) {
      if (((int)uVar9 < 10) &&
         ((0 < *(int *)((int)param_1 + 0x252) &&
          (piVar11 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)*(int *)((int)param_1 + 0x252)
                                                              >> 8),
                                                        *(undefined1 *)((int)param_1 + 0x241)),
                                               CONCAT22(extraout_var_04,
                                                        *(undefined2 *)((int)param_1 + 0x245)),1),
          piVar11 != (int *)0x0)))) {
        (**(code **)(*piVar11 + 0xe0))
                  (*(undefined4 *)((int)param_1 + 0x252),&local_14,&local_10,&local_c,&local_18);
        thunk_FUN_00416240(param_1,(short)local_14,(short)local_10,(short)local_c);
      }
      (**(code **)(*param_1 + 0xd8))();
      return;
    }
  case 4:
    thunk_FUN_00582580(param_1);
    return;
  case 3:
    iVar8 = thunk_FUN_00415ed0(param_1,&local_24,&local_20);
    if (iVar8 == -1) goto switchD_00582651_default;
    if ((-1 < iVar8) && (iVar8 < 2)) {
      if ((*(uint *)((int)param_1 + 0x241) == 0xff) ||
         ((piVar11 = (int *)thunk_FUN_0042b620(*(uint *)((int)param_1 + 0x241),
                                               CONCAT22(extraout_var_03,
                                                        *(undefined2 *)((int)param_1 + 0x245)),1),
          piVar11 == (int *)0x0 || (iVar10 = (**(code **)(*piVar11 + 0xf8))(), iVar10 == 0)))) {
        *(undefined4 *)((int)param_1 + 0x23d) = 0;
        goto switchD_00582651_default;
      }
      if (((byte)*(undefined4 *)(DAT_00802a38 + 0xe4) & 7) != 1) {
LAB_005827b7:
        if (iVar8 == 0) goto switchD_00582651_default;
        break;
      }
      iVar10 = (**(code **)(*piVar11 + 0xdc))
                         (*(undefined2 *)((int)param_1 + 0x41),*(undefined2 *)((int)param_1 + 0x43),
                          *(undefined2 *)((int)param_1 + 0x45),local_14,local_10,local_c);
      *(int *)((int)param_1 + 0x252) = iVar10;
      if (iVar10 < 0) goto LAB_005827b7;
      thunk_FUN_005844e0(param_1,(int)*(short *)((int)param_1 + 0x41),
                         (int)*(short *)((int)param_1 + 0x43),0x498);
      thunk_FUN_00582530(param_1);
      *(int *)((int)param_1 + 0x241) = piVar11[9];
      *(undefined2 *)((int)param_1 + 0x245) = *(undefined2 *)((int)piVar11 + 0x32);
      *(undefined4 *)((int)param_1 + 0x235) = 2;
      thunk_FUN_004ac410(0xe);
      thunk_FUN_004ac410(0xc);
      thunk_FUN_004ad5e0((int)param_1 + 0x1d5);
      iVar8 = thunk_FUN_00584380(param_1);
      if (iVar8 != 0) goto LAB_00582958;
      (**(code **)(*piVar11 + 0xe0))
                (*(undefined4 *)((int)param_1 + 0x252),&local_14,&local_10,&local_c,&local_18);
      if (local_18 == 0) {
        iVar8 = *(int *)((int)piVar11 + 0x1ed);
        goto LAB_00582c9f;
      }
      iVar8 = *(int *)((int)piVar11 + 0x1ed);
LAB_00582cbd:
      FUN_006ea3e0(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed),iVar8);
    }
    break;
  default:
switchD_00582651_default:
    iVar8 = thunk_FUN_00583e30(param_1);
    *(int *)((int)param_1 + 0x235) = iVar8;
  }
  if (*(int *)((int)param_1 + 0x239) < 0) {
    if (*(int *)((int)param_1 + 0x24b) == 0) {
      iVar8 = *(int *)((int)param_1 + 0x247) + -2;
      *(int *)((int)param_1 + 0x247) = iVar8;
      if (-1 < iVar8) goto LAB_00582f2d;
      *(undefined4 *)((int)param_1 + 0x247) = 1;
      *(undefined4 *)((int)param_1 + 0x24b) = 1;
LAB_00582f27:
      *(undefined4 *)((int)param_1 + 0x231) = 0;
    }
    else if (*(int *)((int)param_1 + 0x231) == 0) {
      if ((int)*(short *)((int)param_1 + 0x3e) - (int)(short)param_1[0xe] < -10) {
        if (((*(byte *)(DAT_00802a38 + 0xe4) & 3) == 0) &&
           (iVar8 = *(int *)((int)param_1 + 0x247) + 1, *(int *)((int)param_1 + 0x247) = iVar8,
           10 < iVar8)) {
          *(undefined4 *)((int)param_1 + 0x247) = 10;
        }
      }
      else if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0) goto LAB_00582edf;
    }
    else {
LAB_00582edf:
      iVar8 = *(int *)((int)param_1 + 0x247) + 1;
      *(int *)((int)param_1 + 0x247) = iVar8;
      if (10 < iVar8) {
        *(undefined4 *)((int)param_1 + 0x247) = 9;
        *(undefined4 *)((int)param_1 + 0x24b) = 0;
        goto LAB_00582f27;
      }
    }
LAB_00582f2d:
    if (((*(int *)((int)param_1 + 0x231) != 0) || (*(int *)((int)param_1 + 0x247) != 4)) ||
       (iVar8 = (int)*(short *)((int)param_1 + 0x3e) - (int)(short)param_1[0xe], iVar8 < -10))
    goto LAB_00582f72;
    *(undefined4 *)((int)param_1 + 0x239) = 0x19;
    if (iVar8 == 0) goto LAB_00582f72;
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    iVar8 = (int)(0x19 / (longlong)iVar8);
  }
  else {
    iVar8 = *(int *)((int)param_1 + 0x239) + -1;
  }
  *(int *)((int)param_1 + 0x239) = iVar8;
LAB_00582f72:
  thunk_FUN_004abe40((void *)((int)param_1 + 0x1d5),'\x0e',*(undefined4 *)((int)param_1 + 0x247));
  thunk_FUN_004abe40((void *)((int)param_1 + 0x1d5),'\f',*(undefined4 *)((int)param_1 + 0x247));
  thunk_FUN_004abf00('\x0e',*(undefined4 *)((int)param_1 + 0x247));
  thunk_FUN_004ac040('\x0e');
  thunk_FUN_004ac040('\f');
  (**(code **)(*param_1 + 0xd8))();
  return;
}

