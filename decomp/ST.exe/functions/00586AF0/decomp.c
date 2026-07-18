
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00586af0(int *param_1)

{
  STT3DSprC *this;
  byte bVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined3 extraout_var;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined2 uVar14;
  int iVar12;
  int iVar13;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 *puVar18;
  undefined4 **ppuVar19;
  bool bVar20;
  undefined4 *local_6c [8];
  int local_4c;
  int local_48;
  int *local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined2 local_30 [2];
  undefined2 local_2c [2];
  undefined2 local_28 [2];
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_5;
  
  local_20 = (int *)0x0;
  sVar15 = *(short *)((int)param_1 + 0x41);
  if (sVar15 < 0) {
    sVar15 = ((sVar15 / 0xc9 + (sVar15 >> 0xf)) - (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f)
             ) + -1;
  }
  else {
    sVar15 = (sVar15 / 0xc9 + (sVar15 >> 0xf)) - (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x47) = sVar15;
  *(short *)((int)param_1 + 0x5b) = sVar15;
  sVar15 = *(short *)((int)param_1 + 0x43);
  if (sVar15 < 0) {
    sVar15 = ((sVar15 / 0xc9 + (sVar15 >> 0xf)) - (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f)
             ) + -1;
  }
  else {
    sVar15 = (sVar15 / 0xc9 + (sVar15 >> 0xf)) - (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x49) = sVar15;
  *(short *)((int)param_1 + 0x5d) = sVar15;
  sVar15 = *(short *)((int)param_1 + 0x45);
  if (sVar15 < 0) {
    sVar15 = ((sVar15 / 200 + (sVar15 >> 0xf)) - (short)((longlong)(int)sVar15 * 0x51eb851f >> 0x3f)
             ) + -1;
  }
  else {
    sVar15 = (sVar15 / 200 + (sVar15 >> 0xf)) - (short)((longlong)(int)sVar15 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)param_1 + 0x4b) = sVar15;
  *(short *)((int)param_1 + 0x5f) = sVar15;
  iVar7 = thunk_FUN_0041c710((int)param_1);
  this = (STT3DSprC *)((int)param_1 + 0x1d5);
  if (iVar7 == 0) {
    iVar7 = 0;
    uVar8 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar8,iVar7);
    bVar20 = thunk_FUN_0041caf0((int)param_1);
    if (CONCAT31(extraout_var,bVar20) == 1) {
      iVar7 = 1;
    }
    else {
      iVar7 = 0;
    }
  }
  else {
    iVar7 = 1;
    uVar8 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar8,iVar7);
    iVar7 = 1;
  }
  iVar9 = thunk_FUN_004ad650((int)this);
  FUN_006e6870(*(void **)((int)param_1 + 0x211),iVar9,iVar7);
  iVar7 = *(int *)((int)param_1 + 0x231);
  if (iVar7 == 0) {
    iVar7 = *(int *)((int)param_1 + 0x235);
    lVar4 = (longlong)iVar7 * 0xeeff;
    uVar8 = (uint)lVar4;
    *(uint *)((int)param_1 + 0x235) =
         (uVar8 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar8 >> 0xf & 1) != 0)
    ;
    lVar4 = (longlong)*(int *)((int)param_1 + 0x239) * 0xeeff;
    uVar8 = (uint)lVar4;
    local_4c = *(int *)((int)param_1 + 0x23d);
    *(uint *)((int)param_1 + 0x239) =
         (uVar8 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar8 >> 0xf & 1) != 0)
    ;
    uVar8 = (uint)((longlong)local_4c * 0xeeff);
    iVar9 = (uVar8 >> 0x10 | (int)((ulonglong)((longlong)local_4c * 0xeeff) >> 0x20) << 0x10) +
            (uint)((uVar8 >> 0xf & 1) != 0);
    *(int *)((int)param_1 + 0x23d) = iVar9;
    local_44 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)iVar9 >> 8),
                                                  *(undefined1 *)((int)param_1 + 0x26f)),
                                         CONCAT22((short)((uint)iVar7 >> 0x10),
                                                  *(undefined2 *)((int)param_1 + 0x273)),1);
    if (local_44 == (int *)0x0) {
LAB_00587844:
      local_44 = thunk_FUN_00586320((int)param_1);
      *(undefined4 *)((int)param_1 + 0x253) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if ((local_44 == (int *)0x0) || (*(int *)((int)param_1 + 0x231) != 0)) {
        *(undefined4 *)((int)param_1 + 0x26b) = 0;
        *(undefined4 *)((int)param_1 + 0x267) = 0;
        *(undefined4 *)((int)param_1 + 0x263) = 0;
        goto LAB_00588350;
      }
      thunk_FUN_00416270(local_44,(undefined2 *)((int)param_1 + 0x241),
                         (short *)((int)param_1 + 0x243),(short *)((int)param_1 + 0x245));
      iVar7 = FUN_006acf0d((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43)
                           ,(int)*(short *)((int)param_1 + 0x45),
                           (int)*(short *)((int)param_1 + 0x241),
                           (int)*(short *)((int)param_1 + 0x243),
                           (int)*(short *)((int)param_1 + 0x245));
    }
    else {
      thunk_FUN_00416270(local_44,(undefined2 *)((int)param_1 + 0x241),
                         (short *)((int)param_1 + 0x243),(short *)((int)param_1 + 0x245));
      iVar7 = FUN_006acf0d((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43)
                           ,(int)*(short *)((int)param_1 + 0x45),
                           (int)*(short *)((int)param_1 + 0x241),
                           (int)*(short *)((int)param_1 + 0x243),
                           (int)*(short *)((int)param_1 + 0x245));
      if (DAT_0081170c < iVar7) goto LAB_00587844;
    }
    iVar9 = DAT_0081170c - iVar7;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    iVar9 = (((iVar9 * iVar9) / 10) * (iVar9 / 10)) / 50000;
    *(uint *)((int)param_1 + 0x263) = *(uint *)((int)param_1 + 0x263) & 3;
    uVar8 = *(uint *)((int)param_1 + 0x26b) & 3;
    *(uint *)((int)param_1 + 0x267) = *(uint *)((int)param_1 + 0x267) & 3;
    *(uint *)((int)param_1 + 0x26b) = uVar8;
    if (iVar7 != 0) {
      *(int *)((int)param_1 + 0x263) =
           (((((int)*(short *)((int)param_1 + 0x241) - (int)*(short *)((int)param_1 + 0x41)) *
             DAT_0081170c) / iVar7) * iVar9 * 4) / 0x19640 + *(int *)((int)param_1 + 0x263);
      *(int *)((int)param_1 + 0x267) =
           (((((int)*(short *)((int)param_1 + 0x243) - (int)*(short *)((int)param_1 + 0x43)) *
             DAT_0081170c) / iVar7) * iVar9 * 4) / 0x19640 + *(int *)((int)param_1 + 0x267);
      uVar8 = ((((int)*(short *)((int)param_1 + 0x245) - (int)*(short *)((int)param_1 + 0x45)) *
               DAT_0081170c) / iVar7) * iVar9 * 4;
      *(int *)((int)param_1 + 0x26b) = (int)uVar8 / 0x19640 + *(int *)((int)param_1 + 0x26b);
    }
    local_48 = CONCAT22((short)(uVar8 >> 0x10),*(short *)((int)param_1 + 0x41));
    local_4c = CONCAT22((short)((uint)iVar9 >> 0x10),*(short *)((int)param_1 + 0x43));
    local_10 = (*(int *)((int)param_1 + 0x263) >> 2) +
               ((int)(*(int *)((int)param_1 + 0x235) +
                     (*(int *)((int)param_1 + 0x235) >> 0x1f & 0xffffU)) >> 0x10) +
               (int)*(short *)((int)param_1 + 0x41);
    local_40 = CONCAT22(local_40._2_2_,*(short *)((int)param_1 + 0x45));
    local_14 = (*(int *)((int)param_1 + 0x267) >> 2) +
               ((int)(*(int *)((int)param_1 + 0x239) +
                     (*(int *)((int)param_1 + 0x239) >> 0x1f & 0xffffU)) >> 0x10) +
               (int)*(short *)((int)param_1 + 0x43);
    iVar7 = (*(int *)((int)param_1 + 0x26b) >> 2) +
            ((int)(*(int *)((int)param_1 + 0x23d) +
                  (*(int *)((int)param_1 + 0x23d) >> 0x1f & 0xffffU)) >> 0x10) +
            ((int)(*(int *)((int)param_1 + 0x25b) + (*(int *)((int)param_1 + 0x25b) >> 0x1f & 3U))
            >> 2) + (int)*(short *)((int)param_1 + 0x45);
    if (local_10 < 0) {
      local_10 = 0;
    }
    if (local_14 < 0) {
      local_14 = 0;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    if (DAT_007fb240 * 0xc9 <= local_10) {
      local_10 = DAT_007fb240 * 0xc9 + -1;
    }
    iVar9 = local_10;
    if (DAT_007fb242 * 0xc9 <= local_14) {
      local_14 = DAT_007fb242 * 0xc9 + -1;
    }
    if (DAT_007fb244 * 200 <= iVar7) {
      iVar7 = DAT_007fb244 * 200 + -1;
    }
    sVar15 = (short)(local_10 >> 0x1f);
    if (local_10 < 0) {
      local_34 = (short)(((short)(local_10 / 0xc9) + sVar15) -
                        (short)((longlong)local_10 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_34 = (int)(short)(((short)(local_10 / 0xc9) + sVar15) -
                             (short)((longlong)local_10 * 0x28c1979 >> 0x3f));
    }
    sVar15 = (short)(local_14 >> 0x1f);
    if (local_14 < 0) {
      local_38 = (short)(((short)(local_14 / 0xc9) + sVar15) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_38 = (int)(short)(((short)(local_14 / 0xc9) + sVar15) -
                             (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    }
    sVar15 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      local_3c = (short)(((short)(iVar7 / 200) + sVar15) -
                        (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_3c = (int)(short)(((short)(iVar7 / 200) + sVar15) -
                             (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
    }
    param_1[0x9e] = -1;
    local_1c = local_14;
    local_18 = iVar7;
    local_c = local_10;
    if (((((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0) &&
         (*(short *)((int)local_44 + 0x47) == local_34)) &&
        (*(short *)((int)local_44 + 0x49) == local_38)) &&
       (*(short *)((int)local_44 + 0x4b) == local_3c)) {
      uVar14 = (undefined2)((uint)local_3c >> 0x10);
      iVar13 = (**(code **)(*local_44 + 0xdc))
                         (local_48,local_4c,local_40,
                          CONCAT22(uVar14,*(undefined2 *)((int)param_1 + 0x24d)),
                          CONCAT22(uVar14,*(undefined2 *)((int)param_1 + 0x24f)),
                          CONCAT22(uVar14,*(undefined2 *)((int)param_1 + 0x251)));
      param_1[0x9e] = iVar13;
    }
    if (param_1[0x9e] < 0) {
      sVar15 = *(short *)((int)param_1 + 0x41);
      if (sVar15 < 0) {
        iVar13 = (short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                        (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar13 = (int)(short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                             (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f));
      }
      iVar12 = param_1[0xa4];
      sVar15 = (short)(iVar12 >> 0x1f);
      if (iVar12 < 0) {
        iVar12 = (short)(((short)(iVar12 / 0xc9) + sVar15) -
                        (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar12 = (int)(short)(((short)(iVar12 / 0xc9) + sVar15) -
                             (short)((longlong)iVar12 * 0x28c1979 >> 0x3f));
      }
      if (iVar13 == iVar12) {
        sVar15 = *(short *)((int)param_1 + 0x43);
        if (sVar15 < 0) {
          iVar13 = (short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                          (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar13 = (int)(short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                               (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f));
        }
        iVar12 = param_1[0xa5];
        sVar15 = (short)(iVar12 >> 0x1f);
        if (iVar12 < 0) {
          iVar12 = (short)(((short)(iVar12 / 0xc9) + sVar15) -
                          (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar12 = (int)(short)(((short)(iVar12 / 0xc9) + sVar15) -
                               (short)((longlong)iVar12 * 0x28c1979 >> 0x3f));
        }
        if (iVar13 != iVar12) goto LAB_00587dde;
        sVar15 = *(short *)((int)param_1 + 0x45);
        if (sVar15 < 0) {
          iVar13 = (short)((sVar15 / 200 + (sVar15 >> 0xf)) -
                          (short)((longlong)(int)sVar15 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar13 = (int)(short)((sVar15 / 200 + (sVar15 >> 0xf)) -
                               (short)((longlong)(int)sVar15 * 0x51eb851f >> 0x3f));
        }
        iVar12 = param_1[0xa6];
        sVar15 = (short)(iVar12 >> 0x1f);
        if (iVar12 < 0) {
          iVar12 = (short)(((short)(iVar12 / 200) + sVar15) -
                          (short)((longlong)iVar12 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar12 = (int)(short)(((short)(iVar12 / 200) + sVar15) -
                               (short)((longlong)iVar12 * 0x51eb851f >> 0x3f));
        }
        if (iVar13 != iVar12) goto LAB_00587dde;
LAB_00587fb9:
        iVar7 = 0;
        piVar10 = local_20;
      }
      else {
LAB_00587dde:
        sVar15 = (short)local_34;
        if ((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) ||
            ((sVar16 = (short)local_38, sVar16 < 0 ||
             ((DAT_007fb242 <= sVar16 || (sVar17 = (short)local_3c, sVar17 < 0)))))) ||
           ((DAT_007fb244 <= sVar17 ||
            (piVar10 = *(int **)(DAT_007fb248 +
                                ((int)DAT_007fb246 * (int)sVar17 + (int)DAT_007fb240 * (int)sVar16 +
                                (int)sVar15) * 8), local_20 = piVar10, piVar10 == (int *)0x0)))) {
          uVar8 = thunk_FUN_00496250(iVar9,local_14,iVar7);
          local_20 = (int *)(uint)(-1 < (int)uVar8);
          goto LAB_00587fb9;
        }
        if ((piVar10[8] != 0xb4) && (iVar7 = (**(code **)(*piVar10 + 0xf8))(), iVar7 != 0)) {
          if (((piVar10[8] == 1000) || (piVar10[8] == 0x14)) &&
             (((uint)piVar10[9] < 8 &&
              ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar10[9] * 0x51] < 8)))))) {
            iVar7 = param_1[4];
            bVar1 = *(byte *)(piVar10 + 9);
            bVar2 = *(byte *)(param_1 + 9);
            local_4c = CONCAT31(local_4c._1_3_,bVar1);
            local_48 = CONCAT31(local_48._1_3_,bVar2);
            if (*(char *)(iVar7 + 0x146f) == '\0') {
              if (bVar1 == bVar2) {
LAB_00587f89:
                iVar7 = 0;
              }
              else {
                uVar8 = (uint)bVar1;
                uVar6 = (uint)bVar2;
                cVar3 = *(char *)(iVar7 + uVar8 * 8 + 0x142f + uVar6);
                if ((cVar3 == '\0') && (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
                  iVar7 = -2;
                }
                else if ((cVar3 == '\x01') &&
                        (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
                  iVar7 = -1;
                }
                else if ((cVar3 == '\0') &&
                        (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\x01')) {
                  iVar7 = 1;
                }
                else {
                  if ((cVar3 != '\x01') || (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) != '\x01')
                     ) goto LAB_00587f89;
                  iVar7 = 2;
                }
              }
              bVar20 = iVar7 < 0;
            }
            else {
              bVar20 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar7) !=
                       *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
            }
            if (bVar20) goto LAB_00587f98;
          }
          goto LAB_00587fb9;
        }
LAB_00587f98:
        iVar7 = 0;
        piVar10 = (int *)0x0;
      }
      do {
        if (piVar10 == (int *)0x0) {
          if (iVar7 < 7) {
            iVar7 = local_18;
            if (local_18 < 0) {
              iVar7 = 0;
              *(int *)((int)param_1 + 0x25f) = -*(int *)((int)param_1 + 0x25f);
            }
            thunk_FUN_00416240(param_1,(short)local_c,(short)local_1c,(short)iVar7);
          }
          break;
        }
        switch(iVar7) {
        case 0:
        case 2:
          local_c = (int)*(short *)((int)param_1 + 0x41);
          break;
        case 1:
          local_1c = (int)*(short *)((int)param_1 + 0x43);
          local_c = local_10;
          break;
        case 3:
          local_c = local_10;
          goto LAB_00588002;
        case 4:
          local_c = (int)*(short *)((int)param_1 + 0x41);
LAB_00588002:
          local_1c = local_14;
          local_18 = ((int)(*(int *)((int)param_1 + 0x25b) +
                           (*(int *)((int)param_1 + 0x25b) >> 0x1f & 3U)) >> 2) +
                     (int)*(short *)((int)param_1 + 0x45);
          break;
        case 5:
          local_1c = (int)*(short *)((int)param_1 + 0x43);
          local_c = local_10;
          local_18 = ((int)(*(int *)((int)param_1 + 0x25b) +
                           (*(int *)((int)param_1 + 0x25b) >> 0x1f & 3U)) >> 2) +
                     (int)*(short *)((int)param_1 + 0x45);
          break;
        case 6:
          local_10 = (int)*(short *)((int)param_1 + 0x41);
          local_14 = (int)*(short *)((int)param_1 + 0x43);
        }
        local_38 = iVar7 + 1;
        sVar15 = (short)(local_c >> 0x1f);
        if (local_c < 0) {
          local_34 = (short)(((short)(local_c / 0xc9) + sVar15) -
                            (short)((longlong)local_c * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_34 = (int)(short)(((short)(local_c / 0xc9) + sVar15) -
                                 (short)((longlong)local_c * 0x28c1979 >> 0x3f));
        }
        sVar15 = (short)(local_1c >> 0x1f);
        if (local_1c < 0) {
          sVar15 = (((short)(local_1c / 0xc9) + sVar15) -
                   (short)((longlong)local_1c * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar15 = ((short)(local_1c / 0xc9) + sVar15) -
                   (short)((longlong)local_1c * 0x28c1979 >> 0x3f);
        }
        sVar16 = (short)(local_18 >> 0x1f);
        if (local_18 < 0) {
          sVar16 = (((short)(local_18 / 200) + sVar16) -
                   (short)((longlong)local_18 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          sVar16 = ((short)(local_18 / 200) + sVar16) -
                   (short)((longlong)local_18 * 0x51eb851f >> 0x3f);
        }
        sVar17 = (short)local_34;
        if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar15 < 0)) ||
           (((DAT_007fb242 <= sVar15 || (sVar16 < 0)) ||
            ((DAT_007fb244 <= sVar16 ||
             (piVar10 = *(int **)(DAT_007fb248 +
                                 ((int)DAT_007fb246 * (int)sVar16 + (int)DAT_007fb240 * (int)sVar15
                                 + (int)sVar17) * 8), piVar10 == (int *)0x0)))))) {
          uVar8 = thunk_FUN_00496250(local_c,local_1c,local_18);
          piVar10 = (int *)(uint)(-1 < (int)uVar8);
        }
        else if ((piVar10[8] == 0xb4) || (iVar7 = (**(code **)(*piVar10 + 0xf8))(), iVar7 == 0)) {
LAB_005882af:
          piVar10 = (int *)0x0;
        }
        else if ((((piVar10[8] == 1000) || (piVar10[8] == 0x14)) && ((uint)piVar10[9] < 8)) &&
                ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar10[9] * 0x51] < 8)))) {
          iVar7 = param_1[4];
          bVar1 = *(byte *)(piVar10 + 9);
          bVar2 = *(byte *)(param_1 + 9);
          local_4c = CONCAT31(local_4c._1_3_,bVar1);
          local_48 = CONCAT31(local_48._1_3_,bVar2);
          if (*(char *)(iVar7 + 0x146f) == '\0') {
            if (bVar1 == bVar2) {
LAB_005882a0:
              iVar7 = 0;
            }
            else {
              uVar8 = (uint)bVar1;
              uVar6 = (uint)bVar2;
              local_5 = *(char *)(iVar7 + uVar8 * 8 + 0x142f + uVar6);
              if ((local_5 == '\0') && (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
                iVar7 = -2;
              }
              else if ((local_5 == '\x01') &&
                      (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
                iVar7 = -1;
              }
              else if ((local_5 == '\0') &&
                      (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\x01')) {
                iVar7 = 1;
              }
              else {
                if ((local_5 != '\x01') || (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) != '\x01')
                   ) goto LAB_005882a0;
                iVar7 = 2;
              }
            }
            bVar20 = iVar7 < 0;
          }
          else {
            local_44 = (int *)(iVar7 + (uint)bVar2 * 0x48);
            bVar20 = *(char *)((uint)bVar2 * 9 + 0x11ca + (int)local_44) !=
                     *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
          }
          if (bVar20) goto LAB_005882af;
        }
        iVar7 = local_38;
      } while (local_38 < 7);
      iVar7 = *(int *)((int)param_1 + 0x25b) + *(int *)((int)param_1 + 0x25f);
      *(int *)((int)param_1 + 0x25b) = iVar7;
      if (iVar7 < 0xd) {
        if (iVar7 < -0xc) {
          *(undefined4 *)((int)param_1 + 0x25f) = 2;
        }
      }
      else {
        *(undefined4 *)((int)param_1 + 0x25f) = 0xfffffffe;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x231) = 2;
      STT3DSprC::StopShow((STT3DSprC *)((int)param_1 + 0x1d5),0xe);
      thunk_FUN_004ad5e0((int)param_1 + 0x1d5);
      thunk_FUN_00589870(param_1,(int)*(short *)((int)param_1 + 0x41),
                         (int)*(short *)((int)param_1 + 0x43),0x45c);
      iVar7 = thunk_FUN_00589740(param_1);
      piVar10 = local_44;
      if (iVar7 != 0) goto LAB_00587761;
      (**(code **)(*local_44 + 0xe0))
                (param_1[0x9e],(int)param_1 + 0x41,(int)param_1 + 0x43,(int)param_1 + 0x45,&local_24
                );
      if (local_24 == 0) {
        FUN_006ea460(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed),
                     *(int *)((int)piVar10 + 0x1ed));
      }
      else {
        FUN_006ea3e0(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed),
                     *(int *)((int)piVar10 + 0x1ed));
      }
    }
  }
  else if (iVar7 == 1) {
    if (*(int *)((int)param_1 + 599) == 0) {
      *(undefined4 *)((int)param_1 + 599) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    }
    lVar4 = (longlong)*(int *)((int)param_1 + 0x235) * 0xeeff;
    uVar8 = (uint)lVar4;
    *(uint *)((int)param_1 + 0x235) =
         (uVar8 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar8 >> 0xf & 1) != 0)
    ;
    lVar4 = (longlong)*(int *)((int)param_1 + 0x239) * 0xeeff;
    uVar8 = (uint)lVar4;
    *(uint *)((int)param_1 + 0x239) =
         (uVar8 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar8 >> 0xf & 1) != 0)
    ;
    lVar4 = (longlong)*(int *)((int)param_1 + 0x23d) * 0xeeff;
    uVar8 = (uint)lVar4;
    iVar7 = (uVar8 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            (uint)((uVar8 >> 0xf & 1) != 0);
    sVar15 = *(short *)((int)param_1 + 0x41);
    *(int *)((int)param_1 + 0x23d) = iVar7;
    iVar9 = (int)sVar15;
    local_10 = ((int)(*(int *)((int)param_1 + 0x235) +
                     (*(int *)((int)param_1 + 0x235) >> 0x1f & 0xffffU)) >> 0x10) + iVar9;
    sVar16 = *(short *)((int)param_1 + 0x43);
    local_4c = CONCAT22((short)((uint)local_10 >> 0x10),sVar16);
    local_44 = (int *)(int)sVar16;
    local_14 = ((int)(*(int *)((int)param_1 + 0x239) +
                     (*(int *)((int)param_1 + 0x239) >> 0x1f & 0xffffU)) >> 0x10) + (int)local_44;
    sVar17 = *(short *)((int)param_1 + 0x45);
    local_40 = CONCAT22((short)((uint)local_14 >> 0x10),sVar17);
    local_48 = (int)sVar17;
    local_18 = ((int)(*(int *)((int)param_1 + 0x25b) + (*(int *)((int)param_1 + 0x25b) >> 0x1f & 3U)
                     ) >> 2) + local_48 + ((int)(iVar7 + (iVar7 >> 0x1f & 0xffffU)) >> 0x10);
    if (local_10 < 0) {
      local_10 = 0;
    }
    if (local_14 < 0) {
      local_14 = 0;
    }
    if (local_18 < 0) {
      local_18 = 0;
    }
    if (DAT_007fb240 * 0xc9 <= local_10) {
      local_10 = DAT_007fb240 * 0xc9 + -1;
    }
    if (DAT_007fb242 * 0xc9 <= local_14) {
      local_14 = DAT_007fb242 * 0xc9 + -1;
    }
    if (DAT_007fb244 * 200 <= local_18) {
      local_18 = DAT_007fb244 * 200 + -1;
    }
    local_c = local_10;
    local_1c = local_14;
    sVar5 = (short)(local_10 >> 0x1f);
    if (local_10 < 0) {
      local_34 = (short)(((short)(local_10 / 0xc9) + sVar5) -
                        (short)((longlong)local_10 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_34 = (int)(short)(((short)(local_10 / 0xc9) + sVar5) -
                             (short)((longlong)local_10 * 0x28c1979 >> 0x3f));
    }
    sVar5 = (short)(local_14 >> 0x1f);
    if (local_14 < 0) {
      local_38 = (short)(((short)(local_14 / 0xc9) + sVar5) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_38 = (int)(short)(((short)(local_14 / 0xc9) + sVar5) -
                             (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    }
    sVar5 = (short)(local_18 >> 0x1f);
    if (local_18 < 0) {
      local_3c = (short)(((short)(local_18 / 200) + sVar5) -
                        (short)((longlong)local_18 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_3c = (int)(short)(((short)(local_18 / 200) + sVar5) -
                             (short)((longlong)local_18 * 0x51eb851f >> 0x3f));
    }
    if (sVar15 < 0) {
      iVar7 = (short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                     (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar7 = (int)(short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    iVar9 = param_1[0xa4];
    sVar15 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar15) -
                     (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar15) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    if (iVar7 == iVar9) {
      if (sVar16 < 0) {
        iVar7 = (short)((sVar16 / 0xc9 + (sVar16 >> 0xf)) -
                       (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar7 = (int)(short)((sVar16 / 0xc9 + (sVar16 >> 0xf)) -
                            (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f));
      }
      iVar9 = param_1[0xa5];
      sVar15 = (short)(iVar9 >> 0x1f);
      if (iVar9 < 0) {
        iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar15) -
                       (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar15) -
                            (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
      }
      if (iVar7 != iVar9) goto LAB_00587161;
      if (sVar17 < 0) {
        iVar7 = (short)((sVar17 / 200 + (sVar17 >> 0xf)) -
                       (short)((longlong)local_48 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar7 = (int)(short)((sVar17 / 200 + (sVar17 >> 0xf)) -
                            (short)((longlong)local_48 * 0x51eb851f >> 0x3f));
      }
      iVar9 = param_1[0xa6];
      sVar15 = (short)(iVar9 >> 0x1f);
      if (iVar9 < 0) {
        iVar9 = (short)(((short)(iVar9 / 200) + sVar15) -
                       (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)(iVar9 / 200) + sVar15) -
                            (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
      }
      piVar10 = local_20;
      if (iVar7 != iVar9) goto LAB_00587161;
      goto LAB_00587359;
    }
LAB_00587161:
    sVar15 = (short)local_34;
    if (((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) ||
         ((sVar16 = (short)local_38, sVar16 < 0 ||
          ((DAT_007fb242 <= sVar16 || (sVar17 = (short)local_3c, sVar17 < 0)))))) ||
        (DAT_007fb244 <= sVar17)) ||
       (piVar10 = *(int **)(DAT_007fb248 +
                           ((int)DAT_007fb246 * (int)sVar17 + (int)sVar16 * (int)DAT_007fb240 +
                           (int)sVar15) * 8), local_20 = piVar10, piVar10 == (int *)0x0)) {
      uVar8 = thunk_FUN_00496250(local_10,local_14,local_18);
      local_38 = 0;
      iVar7 = local_18;
      piVar10 = (int *)(uint)(-1 < (int)uVar8);
    }
    else if ((piVar10[8] == 0xb4) || (iVar7 = (**(code **)(*piVar10 + 0xf8))(), iVar7 == 0)) {
LAB_00587323:
      local_38 = 0;
      iVar7 = local_18;
      piVar10 = (int *)0x0;
    }
    else {
      if (((piVar10[8] == 1000) || (piVar10[8] == 0x14)) &&
         (((uint)piVar10[9] < 8 &&
          ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar10[9] * 0x51] < 8)))))) {
        iVar7 = param_1[4];
        bVar1 = *(byte *)(piVar10 + 9);
        bVar2 = *(byte *)(param_1 + 9);
        local_4c = CONCAT31(local_4c._1_3_,bVar1);
        local_48 = CONCAT31(local_48._1_3_,bVar2);
        if (*(char *)(iVar7 + 0x146f) == '\0') {
          if (bVar1 == bVar2) {
            iVar7 = 0;
          }
          else {
            uVar8 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(iVar7 + uVar8 * 8 + 0x142f + uVar6);
            piVar10 = local_20;
            if ((cVar3 == '\0') && (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
              iVar7 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
              iVar7 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\x01')) {
              iVar7 = 1;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\x01'))
            {
              iVar7 = 2;
            }
            else {
              iVar7 = 0;
            }
          }
          bVar20 = iVar7 < 0;
        }
        else {
          bVar20 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar7) !=
                   *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
        }
        if (bVar20) goto LAB_00587323;
      }
LAB_00587359:
      local_38 = 0;
      iVar7 = local_18;
    }
    do {
      if (piVar10 == (int *)0x0) {
        if (local_38 < 7) {
          if (iVar7 < 0) {
            iVar7 = 0;
            *(undefined4 *)((int)param_1 + 0x25f) = 2;
          }
          thunk_FUN_00416240(param_1,(short)local_c,(short)local_1c,(short)iVar7);
        }
        break;
      }
      switch(local_38) {
      case 0:
      case 2:
        local_c = (int)*(short *)((int)param_1 + 0x41);
        break;
      case 1:
        local_1c = (int)*(short *)((int)param_1 + 0x43);
        local_c = local_10;
        break;
      case 3:
        local_c = local_10;
        goto LAB_005873a4;
      case 4:
        local_c = (int)*(short *)((int)param_1 + 0x41);
LAB_005873a4:
        local_1c = local_14;
        iVar7 = ((int)(*(int *)((int)param_1 + 0x25b) +
                      (*(int *)((int)param_1 + 0x25b) >> 0x1f & 3U)) >> 2) +
                (int)*(short *)((int)param_1 + 0x45);
        local_18 = iVar7;
        break;
      case 5:
        local_1c = (int)*(short *)((int)param_1 + 0x43);
        local_c = local_10;
        iVar7 = ((int)(*(int *)((int)param_1 + 0x25b) +
                      (*(int *)((int)param_1 + 0x25b) >> 0x1f & 3U)) >> 2) +
                (int)*(short *)((int)param_1 + 0x45);
        local_18 = iVar7;
        break;
      case 6:
        local_10 = (int)*(short *)((int)param_1 + 0x41);
        local_14 = (int)*(short *)((int)param_1 + 0x43);
      }
      local_38 = local_38 + 1;
      sVar15 = (short)(local_c >> 0x1f);
      if (local_c < 0) {
        sVar15 = (((short)(local_c / 0xc9) + sVar15) -
                 (short)((longlong)local_c * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        sVar15 = ((short)(local_c / 0xc9) + sVar15) - (short)((longlong)local_c * 0x28c1979 >> 0x3f)
        ;
      }
      sVar16 = (short)(local_1c >> 0x1f);
      if (local_1c < 0) {
        sVar16 = (((short)(local_1c / 0xc9) + sVar16) -
                 (short)((longlong)local_1c * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        sVar16 = ((short)(local_1c / 0xc9) + sVar16) -
                 (short)((longlong)local_1c * 0x28c1979 >> 0x3f);
      }
      sVar17 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        sVar17 = (((short)(iVar7 / 200) + sVar17) - (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) +
                 -1;
      }
      else {
        sVar17 = ((short)(iVar7 / 200) + sVar17) - (short)((longlong)iVar7 * 0x51eb851f >> 0x3f);
      }
      if ((((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) || (sVar16 < 0)) ||
           ((DAT_007fb242 <= sVar16 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) ||
         (piVar10 = *(int **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar17 + (int)DAT_007fb240 * (int)sVar16 +
                             (int)sVar15) * 8), local_20 = piVar10, piVar10 == (int *)0x0)) {
        uVar8 = thunk_FUN_00496250(local_c,local_1c,iVar7);
        local_20 = (int *)(uint)(-1 < (int)uVar8);
      }
      else if ((piVar10[8] == 0xb4) || (iVar9 = (**(code **)(*piVar10 + 0xf8))(), iVar9 == 0)) {
LAB_00587648:
        local_20 = (int *)0x0;
      }
      else if ((((piVar10[8] == 1000) || (piVar10[8] == 0x14)) && ((uint)piVar10[9] < 8)) &&
              ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar10[9] * 0x51] < 8)))) {
        iVar9 = param_1[4];
        bVar1 = *(byte *)(piVar10 + 9);
        bVar2 = *(byte *)(param_1 + 9);
        local_4c = CONCAT31(local_4c._1_3_,bVar1);
        local_48 = CONCAT31(local_48._1_3_,bVar2);
        if (*(char *)(iVar9 + 0x146f) == '\0') {
          if (bVar1 == bVar2) {
            iVar9 = 0;
          }
          else {
            uVar8 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(iVar9 + uVar8 * 8 + 0x142f + uVar6);
            iVar7 = local_18;
            if ((cVar3 == '\0') && (*(char *)(iVar9 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
              iVar9 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar9 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
              iVar9 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(iVar9 + uVar6 * 8 + 0x142f + uVar8) == '\x01')) {
              iVar9 = 1;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar9 + uVar6 * 8 + 0x142f + uVar8) == '\x01'))
            {
              iVar9 = 2;
            }
            else {
              iVar9 = 0;
            }
          }
          bVar20 = iVar9 < 0;
        }
        else {
          local_5 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar9);
          local_44 = (int *)0x0;
          bVar20 = local_5 != *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar9);
        }
        if (bVar20) goto LAB_00587648;
      }
      piVar10 = local_20;
    } while (local_38 < 7);
    iVar7 = *(int *)((int)param_1 + 0x25b) + *(int *)((int)param_1 + 0x25f);
    *(int *)((int)param_1 + 0x25b) = iVar7;
    if (iVar7 < 0xd) {
      if (iVar7 < -0xc) {
        *(undefined4 *)((int)param_1 + 0x25f) = 2;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x25f) = 0xfffffffe;
    }
    if (10 < (uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)param_1 + 0x253))) {
      thunk_FUN_00586320((int)param_1);
      *(undefined4 *)((int)param_1 + 0x253) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    }
    if (4000 < (uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)param_1 + 599))) {
      *(undefined4 *)((int)param_1 + 0x231) = 2;
      STT3DSprC::StopShow((STT3DSprC *)((int)param_1 + 0x1d5),0xe);
      thunk_FUN_004ad5e0((int)param_1 + 0x1d5);
      *(undefined4 *)((int)param_1 + 0x26f) = 0xff;
      iVar7 = thunk_FUN_00589740(param_1);
      if (iVar7 == 0) goto LAB_00588350;
LAB_00587761:
      thunk_FUN_005862e0(param_1);
    }
  }
  else if (iVar7 == 2) {
    piVar10 = (int *)thunk_FUN_004ac910(this,'\b');
    local_44 = piVar10;
    if ((piVar10 == (int *)0x1) && (*(uint *)((int)param_1 + 0x26f) != 0xff)) {
      puVar11 = (undefined4 *)
                thunk_FUN_0042b620(*(uint *)((int)param_1 + 0x26f),
                                   CONCAT22(extraout_var_00,*(undefined2 *)((int)param_1 + 0x273)),1
                                  );
      if (puVar11 != (undefined4 *)0x0) {
        puVar18 = &DAT_008116f0;
        for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar18 = 0;
          puVar18 = puVar18 + 1;
        }
        DAT_008116f0 = DAT_007e660c;
        _DAT_008116fc = (undefined2)param_1[0xa9];
        _DAT_008116fe = (undefined2)param_1[0xa8];
        _DAT_008116f8 = param_1[0xa0];
        iVar7 = 8;
        DAT_008116f4 = 0xab;
        ppuVar19 = local_6c;
        while( true ) {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          *ppuVar19 = (undefined4 *)0x0;
          ppuVar19 = ppuVar19 + 1;
        }
        local_6c[2] = (undefined4 *)puVar11[2];
        local_6c[3] = (undefined4 *)0x2;
        local_6c[4] = (undefined4 *)0x110;
        local_6c[5] = &DAT_008116f0;
        (**(code **)*puVar11)(local_6c);
        piVar10 = local_44;
      }
    }
    if ((*(char *)((int)param_1 + 0x275) != '\0') &&
       (piVar10 == (int *)(uint)*(byte *)((int)param_1 + 0x276))) {
      STT3DSprC::StartShow(this,9,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004ad0e0(this,9);
    }
    iVar7 = thunk_FUN_004acd30(this,'\b');
    if (piVar10 == (int *)(iVar7 + -1)) {
      STT3DSprC::StopShow(this,8);
    }
    iVar7 = thunk_FUN_004acd30(this,'\n');
    if (piVar10 == (int *)(iVar7 + -1)) {
      STT3DSprC::StopShow(this,10);
    }
    if (*(char *)((int)param_1 + 0x275) != '\0') {
      iVar7 = thunk_FUN_004acd30(this,'\t');
      iVar9 = thunk_FUN_004ac910(this,'\t');
      piVar10 = local_44;
      if (iVar9 == iVar7 + -1) {
        STT3DSprC::StopShow(this,9);
        *(undefined1 *)((int)param_1 + 0x275) = 0;
        piVar10 = local_44;
      }
    }
    iVar7 = thunk_FUN_004acd30(this,'\b');
    if ((piVar10 == (int *)(iVar7 + -1)) && (*(char *)((int)param_1 + 0x275) == '\0')) {
      thunk_FUN_005862e0(param_1);
      return;
    }
    if ((((int)piVar10 < 10) && (*(uint *)((int)param_1 + 0x26f) != 0xff)) &&
       (piVar10 = (int *)thunk_FUN_0042b620(*(uint *)((int)param_1 + 0x26f),
                                            CONCAT22(extraout_var_01,
                                                     *(undefined2 *)((int)param_1 + 0x273)),1),
       piVar10 != (int *)0x0)) {
      (**(code **)(*piVar10 + 0xe0))(param_1[0x9e],local_28,local_2c,local_30,&local_24);
      thunk_FUN_00416240(param_1,local_28[0],local_2c[0],local_30[0]);
      (**(code **)(*param_1 + 0xd8))();
      return;
    }
    goto LAB_005884da;
  }
LAB_00588350:
  sVar15 = *(short *)((int)param_1 + 0x41);
  sVar16 = *(short *)((int)param_1 + 0x43);
  sVar17 = *(short *)((int)param_1 + 0x45);
  *(short *)((int)param_1 + 0x24d) = sVar15;
  *(short *)((int)param_1 + 0x24f) = sVar16;
  *(short *)((int)param_1 + 0x251) = sVar17;
  if (*(int *)((int)param_1 + 0x231) != 2) {
    if (sVar15 < 0) {
      iVar7 = (short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                     (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar7 = (int)(short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                          (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f));
    }
    if (sVar16 < 0) {
      iVar9 = (short)((sVar16 / 0xc9 + (sVar16 >> 0xf)) -
                     (short)((longlong)(int)sVar16 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar9 = (int)(short)((sVar16 / 0xc9 + (sVar16 >> 0xf)) -
                          (short)((longlong)(int)sVar16 * 0x28c1979 >> 0x3f));
    }
    if (sVar17 < 0) {
      iVar13 = (short)((sVar17 / 200 + (sVar17 >> 0xf)) -
                      (short)((longlong)(int)sVar17 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar13 = (int)(short)((sVar17 / 200 + (sVar17 >> 0xf)) -
                           (short)((longlong)(int)sVar17 * 0x51eb851f >> 0x3f));
    }
    if ((((*(short *)((int)param_1 + 0x47) != iVar7) || (*(short *)((int)param_1 + 0x49) != iVar9))
        || (*(short *)((int)param_1 + 0x4b) != iVar13)) &&
       (((-1 < iVar7 && (-1 < iVar9)) &&
        ((iVar7 < DAT_007fb240 &&
         ((iVar9 < DAT_007fb242 &&
          (iVar13 = DAT_007fb240 * iVar9, *(char *)(iVar7 + iVar13 + DAT_007fb26c) != '\0')))))))) {
      if ((((&DAT_007fb24c)[param_1[9]] == 0) ||
          (*(char *)((&DAT_007fb24c)[param_1[9]] + iVar7 + iVar13) == '\0')) &&
         (uVar8 = thunk_FUN_00497030(iVar7,iVar9,param_1[9],1,DAT_007e660c), -1 < (int)uVar8)) {
        thunk_FUN_00637ae0((int)*(short *)((int)param_1 + 0x41),(int)*(short *)((int)param_1 + 0x43)
                           ,(int)*(short *)((int)param_1 + 0x45));
        STT3DSprC::StopShow((STT3DSprC *)((int)param_1 + 0x1d5),0xe);
        thunk_FUN_004ad5e0((int)param_1 + 0x1d5);
        *(undefined4 *)((int)param_1 + 0x231) = 2;
        *(undefined4 *)((int)param_1 + 0x26f) = 0xff;
        thunk_FUN_005862e0(param_1);
      }
    }
  }
LAB_005884da:
  (**(code **)(*param_1 + 0xd8))();
  return;
}

