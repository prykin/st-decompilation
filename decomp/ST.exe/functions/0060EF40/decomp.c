
int __thiscall FUN_0060ef40(void *this,int param_1)

{
  LPVOID *ppvVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  LPVOID pvVar4;
  AnonShape_0060F940_1CCED7C8 *pAVar5;
  undefined4 uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  int *piVar11;
  short sVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  int local_b8 [2];
  int local_b0;
  int local_a8;
  int local_9c;
  int local_98;
  int local_94;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_74;
  int local_70;
  short *local_6c;
  int local_68 [2];
  short local_60 [6];
  undefined1 *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  short *local_40;
  int local_3c;
  int local_38;
  short *local_34;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079ce98;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff38;
  sVar12 = *(short *)((int)this + 0x215);
  sVar10 = *(short *)((int)this + 0x217);
  local_40 = (short *)(int)*(short *)((int)this + 0x219);
  ExceptionList = &local_14;
  local_2c = (int)sVar10;
  local_20 = (int)sVar12;
  thunk_FUN_00615bb0((int)*(short *)((int)this + 0x1f5),local_b8,&local_74,0,(undefined2 *)0x0);
  local_54 = &stack0xffffff38;
  local_3c = sVar12 + local_b8[0];
  local_48 = sVar10 + local_74;
  sVar12 = *(short *)((int)this + 0x1ef);
  if (sVar12 < 0) {
    local_80 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                      (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_80 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                           (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f));
  }
  sVar12 = *(short *)((int)this + 0x1f1);
  if (sVar12 < 0) {
    local_b0 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                      (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_b0 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                           (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f));
  }
  sVar12 = *(short *)((int)this + 499);
  if (sVar12 < 0) {
    local_34 = (short *)((short)((sVar12 / 200 + (sVar12 >> 0xf)) -
                                (short)((longlong)(int)sVar12 * 0x51eb851f >> 0x3f)) + -1);
  }
  else {
    local_34 = (short *)(int)(short)((sVar12 / 200 + (sVar12 >> 0xf)) -
                                    (short)((longlong)(int)sVar12 * 0x51eb851f >> 0x3f));
  }
  local_38 = local_48 - param_1;
  local_24 = local_3c - param_1;
  local_94 = local_48 + 1 + param_1;
  local_84 = local_3c + 1 + param_1;
  if (local_38 < 0) {
    local_38 = 0;
  }
  if (local_24 < 0) {
    local_24 = 0;
  }
  iVar3 = local_24;
  if (SHORT_007fb242 < local_94) {
    local_94 = (int)SHORT_007fb242;
  }
  if (SHORT_007fb240 < local_84) {
    local_84 = (int)SHORT_007fb240;
  }
  local_9c = local_84 - local_24;
  local_8c = (local_94 - local_38) * local_9c;
  local_8 = 0;
  uVar13 = local_8c * 10;
  Library::MSVCRT::FUN_0072da40();
  puVar14 = (undefined4 *)&stack0xffffff38;
  local_1c = &stack0xffffff38;
  for (uVar8 = uVar13 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  local_8 = 0xffffffff;
  local_4c = 0;
  do {
    iVar9 = local_4c * local_8c;
    local_50 = local_38;
    local_a8 = iVar9;
    if (local_38 < local_94) {
      do {
        local_98 = (local_50 - local_38) * local_9c + iVar9;
        iVar15 = iVar3;
        if (iVar3 < local_84) {
          do {
            local_88 = (iVar15 - iVar3) + local_98;
            sVar12 = (short)iVar15;
            if ((((sVar12 < 0) || (SHORT_007fb240 <= sVar12)) ||
                (sVar10 = (short)local_50, sVar10 < 0)) ||
               (((SHORT_007fb242 <= sVar10 || (sVar7 = (short)local_4c, sVar7 < 0)) ||
                (SHORT_007fb244 <= sVar7)))) {
              piVar11 = (int *)0x0;
            }
            else {
              piVar11 = *(int **)(DAT_007fb248 +
                                 ((int)sVar7 * (int)SHORT_007fb246 +
                                  (int)sVar10 * (int)SHORT_007fb240 + (int)sVar12) * 8);
            }
            if (((piVar11 == (int *)0x0) || (iVar3 = (**(code **)(*piVar11 + 0xf8))(), iVar3 == 0))
               || ((7 < (uint)piVar11[9] ||
                   ((PTR_00802a38 != (STPlaySystemC *)0x0 &&
                    (7 < (byte)(&DAT_008087e9)[piVar11[9] * 0x51])))))) {
              bVar2 = thunk_FUN_004961b0(sVar12,(short)local_50,(short)local_4c);
              if (CONCAT31(extraout_var,bVar2) == 0) goto LAB_0060f230;
            }
            else if (*(int *)((int)this + 0x2d1) != piVar11[6]) {
LAB_0060f230:
              *(undefined2 *)(local_54 + local_88 * 2) = 0xbfff;
            }
            iVar15 = iVar15 + 1;
            iVar9 = local_a8;
            iVar3 = local_24;
          } while (iVar15 < local_84);
        }
        local_50 = local_50 + 1;
      } while (local_50 < local_94);
    }
    local_4c = local_4c + 1;
  } while (local_4c < 5);
  thunk_FUN_00615bb0((int)*(short *)((int)this + 0x1f5),(undefined4 *)0x0,(undefined4 *)0x0,1,
                     local_60);
  iVar9 = 0;
  do {
    if ((((-1 < local_20 + local_60[iVar9 * 2]) && (-1 < local_60[iVar9 * 2 + 1] + local_2c)) &&
        (local_20 + local_60[iVar9 * 2] < (int)SHORT_007fb240)) &&
       ((local_60[iVar9 * 2 + 1] + local_2c < (int)SHORT_007fb242 &&
        (local_4c = (int)local_40 + -1, local_4c <= (int)local_40 + 1)))) {
      do {
        if ((-1 < local_4c) && (local_4c < 5)) {
          local_b8[0] = local_60[iVar9 * 2] + local_20;
          local_74 = local_60[iVar9 * 2 + 1] + local_2c;
          *(undefined2 *)
           (local_54 +
           ((((local_74 - local_38) * local_9c + local_4c * local_8c) - iVar3) + local_b8[0]) * 2) =
               0xbfff;
        }
        local_4c = local_4c + 1;
      } while (local_4c <= (int)local_40 + 1);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  local_6c = Library::DKW::WAY::FUN_006afba0
                       ((int)local_54,local_84 - iVar3,(short *)(local_94 - local_38),(short *)0x5,
                        (short *)(local_3c - iVar3),(short *)(local_48 - local_38),local_40,
                        (short *)(local_80 - iVar3),(short *)(local_b0 - local_38),local_34,local_68
                        ,2);
  if (local_6c == (short *)0x0) {
    local_68[0] = 0;
  }
  else {
    ppvVar1 = (LPVOID *)((int)this + 0x2dd);
    if (*ppvVar1 == (LPVOID)0x0) {
      pvVar4 = (LPVOID)Library::DKW::LIB::FUN_006aac70((local_68[0] + 1) * 0x1c);
      *ppvVar1 = pvVar4;
    }
    else {
      if (*(int *)((int)this + 0x2d5) <= local_68[0]) {
        FUN_006ab060(ppvVar1);
      }
      *(undefined4 *)((int)this + 0x2d5) = 0;
    }
    iVar3 = 1;
    if (1 < local_68[0]) {
      do {
        iVar9 = iVar3 * 0x1c;
        *(short *)((int)*ppvVar1 + iVar9) = local_6c[iVar3 * 4 + -4] + (short)local_24;
        *(short *)((int)*ppvVar1 + iVar9 + 2) = local_6c[iVar3 * 4 + -3] + (short)local_38;
        *(short *)((int)*ppvVar1 + iVar9 + 4) = local_6c[iVar3 * 4 + -2];
        *(undefined2 *)((int)*ppvVar1 + iVar9 + 6) =
             *(undefined2 *)
              (PTR_DAT_007ed56c +
              ((((((int)local_6c[iVar3 * 4 + 2] - (int)local_6c[iVar3 * 4 + -2]) * 3 -
                 (int)local_6c[iVar3 * 4 + -3]) + (int)local_6c[iVar3 * 4 + 1]) * 3 -
               (int)local_6c[iVar3 * 4 + -4]) + (int)local_6c[iVar3 * 4]) * 4);
        *(int *)((int)*ppvVar1 + iVar9 + 8) =
             (*(int *)(&DAT_007cfe74 + *(short *)((int)*ppvVar1 + iVar9 + 6) * 4) * 0xc9) / 1000;
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_68[0]);
    }
    iVar3 = local_68[0] * 0x1c;
    *(short *)((int)*ppvVar1 + iVar3) = local_6c[local_68[0] * 4 + -4] + (short)local_24;
    *(short *)((int)*ppvVar1 + iVar3 + 2) = local_6c[local_68[0] * 4 + -3] + (short)local_38;
    *(short *)((int)*ppvVar1 + iVar3 + 4) = local_6c[local_68[0] * 4 + -2];
    *(undefined2 *)((int)*ppvVar1 + iVar3 + 6) = *(undefined2 *)((int)*ppvVar1 + iVar3 + -0x16);
    *(int *)((int)this + 0x2d5) = local_68[0] + 1;
    local_7c = 1;
    if (1 < local_68[0] + -1) {
      do {
        iVar3 = local_7c * 0x1c;
        pAVar5 = (AnonShape_0060F940_1CCED7C8 *)((int)*ppvVar1 + iVar3);
        uVar6 = thunk_FUN_0060f940((int)*(short *)&pAVar5->field_0x6,
                                   (int)*(short *)((int)&pAVar5[1].field_0008 + 2),pAVar5,1,0,0,0,0,
                                   0,0,0,0,0,(int *)0x0,(int *)0x0);
        *(undefined4 *)((int)*ppvVar1 + iVar3 + 0x18) = uVar6;
        if (*(int *)((int)*ppvVar1 + iVar3 + 0x18) < 0) {
          local_68[0] = -1;
          break;
        }
        local_7c = local_7c + 1;
      } while (local_7c < local_68[0] + -1);
    }
    if (1 < local_68[0]) {
      *(short *)*ppvVar1 = (short)local_20;
      *(short *)((int)*ppvVar1 + 2) = (short)local_2c;
      *(undefined2 *)((int)*ppvVar1 + 4) = local_40._0_2_;
      *(undefined2 *)((int)*ppvVar1 + 6) =
           *(undefined2 *)
            (PTR_DAT_007ed56c + (((local_48 - local_2c) * 3 - local_20) + local_3c) * 4);
      *(int *)((int)*ppvVar1 + 8) =
           (*(int *)(&DAT_007cfe74 + *(short *)((int)*ppvVar1 + 6) * 4) * 0xc9) / 1000;
      pAVar5 = *ppvVar1;
      uVar6 = thunk_FUN_0060f940((int)*(short *)&pAVar5->field_0x6,
                                 (int)*(short *)((int)&pAVar5[1].field_0008 + 2),pAVar5,1,0,0,0,0,0,
                                 0,0,0,0,(int *)0x0,(int *)0x0);
      *(undefined4 *)((int)*ppvVar1 + 0x18) = uVar6;
      *(undefined2 *)*ppvVar1 = *(undefined2 *)((int)this + 0x1e9);
      *(undefined2 *)((int)*ppvVar1 + 2) = *(undefined2 *)((int)this + 0x1eb);
      *(undefined2 *)((int)*ppvVar1 + 4) = *(undefined2 *)((int)this + 0x1ed);
      thunk_FUN_00615860((int)*(short *)((int)this + 0x1f5),&local_30,&local_44,&local_70);
      pvVar4 = *ppvVar1;
      thunk_FUN_00615e70(this,(int)*(short *)((int)this + 0x1e9),(int)*(short *)((int)this + 0x1eb),
                         (int)*(short *)((int)this + 0x1ed),local_30,local_44,local_70,
                         *(short *)((int)pvVar4 + 0x1c) * 0xc9 +
                         (int)*(short *)((int)this + 0x1ef) % 0xc9,
                         *(short *)((int)pvVar4 + 0x1e) * 0xc9 +
                         (int)*(short *)((int)this + 0x1f1) % 0xc9,
                         (int)*(short *)((int)this + 499) % 200 +
                         *(short *)((int)pvVar4 + 0x20) * 200);
    }
  }
  if (local_6c != (short *)0x0) {
    FUN_006ab060(&local_6c);
  }
  ExceptionList = local_14;
  return local_68[0];
}

