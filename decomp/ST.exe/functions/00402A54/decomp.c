
int __thiscall thunk_FUN_0060ef40(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  int *piVar8;
  short sVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int aiStack_b8 [2];
  int iStack_b0;
  int iStack_a8;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_74;
  int iStack_70;
  short *psStack_6c;
  int aiStack_68 [2];
  short asStack_60 [6];
  undefined1 *puStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  short *psStack_40;
  int iStack_3c;
  int iStack_38;
  short *psStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_0079ce98;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff38;
  sVar9 = *(short *)((int)this + 0x215);
  sVar7 = *(short *)((int)this + 0x217);
  psStack_40 = (short *)(int)*(short *)((int)this + 0x219);
  ExceptionList = &pvStack_14;
  iStack_2c = (int)sVar7;
  iStack_20 = (int)sVar9;
  thunk_FUN_00615bb0((int)*(short *)((int)this + 0x1f5),aiStack_b8,&iStack_74,0,(undefined2 *)0x0);
  puStack_54 = &stack0xffffff38;
  iStack_3c = sVar9 + aiStack_b8[0];
  iStack_48 = sVar7 + iStack_74;
  sVar9 = *(short *)((int)this + 0x1ef);
  if (sVar9 < 0) {
    iStack_80 = (short)((sVar9 / 0xc9 + (sVar9 >> 0xf)) -
                       (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iStack_80 = (int)(short)((sVar9 / 0xc9 + (sVar9 >> 0xf)) -
                            (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f));
  }
  sVar9 = *(short *)((int)this + 0x1f1);
  if (sVar9 < 0) {
    iStack_b0 = (short)((sVar9 / 0xc9 + (sVar9 >> 0xf)) -
                       (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iStack_b0 = (int)(short)((sVar9 / 0xc9 + (sVar9 >> 0xf)) -
                            (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f));
  }
  sVar9 = *(short *)((int)this + 499);
  if (sVar9 < 0) {
    psStack_34 = (short *)((short)((sVar9 / 200 + (sVar9 >> 0xf)) -
                                  (short)((longlong)(int)sVar9 * 0x51eb851f >> 0x3f)) + -1);
  }
  else {
    psStack_34 = (short *)(int)(short)((sVar9 / 200 + (sVar9 >> 0xf)) -
                                      (short)((longlong)(int)sVar9 * 0x51eb851f >> 0x3f));
  }
  iStack_38 = iStack_48 - param_1;
  iStack_24 = iStack_3c - param_1;
  iStack_94 = iStack_48 + 1 + param_1;
  iStack_84 = iStack_3c + 1 + param_1;
  if (iStack_38 < 0) {
    iStack_38 = 0;
  }
  if (iStack_24 < 0) {
    iStack_24 = 0;
  }
  iVar2 = iStack_24;
  if (DAT_007fb242 < iStack_94) {
    iStack_94 = (int)DAT_007fb242;
  }
  if (DAT_007fb240 < iStack_84) {
    iStack_84 = (int)DAT_007fb240;
  }
  iStack_9c = iStack_84 - iStack_24;
  iStack_8c = (iStack_94 - iStack_38) * iStack_9c;
  uStack_8 = 0;
  uVar10 = iStack_8c * 10;
  FUN_0072da40();
  puVar11 = (undefined4 *)&stack0xffffff38;
  puStack_1c = &stack0xffffff38;
  for (uVar5 = uVar10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar11 = 0;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  uStack_8 = 0xffffffff;
  iStack_4c = 0;
  do {
    iVar6 = iStack_4c * iStack_8c;
    iStack_50 = iStack_38;
    iStack_a8 = iVar6;
    if (iStack_38 < iStack_94) {
      do {
        iStack_98 = (iStack_50 - iStack_38) * iStack_9c + iVar6;
        iVar12 = iVar2;
        if (iVar2 < iStack_84) {
          do {
            iStack_88 = (iVar12 - iVar2) + iStack_98;
            sVar9 = (short)iVar12;
            if ((((sVar9 < 0) || (DAT_007fb240 <= sVar9)) || (sVar7 = (short)iStack_50, sVar7 < 0))
               || (((DAT_007fb242 <= sVar7 || (sVar4 = (short)iStack_4c, sVar4 < 0)) ||
                   (DAT_007fb244 <= sVar4)))) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = *(int **)(DAT_007fb248 +
                                ((int)sVar4 * (int)DAT_007fb246 + (int)sVar7 * (int)DAT_007fb240 +
                                (int)sVar9) * 8);
            }
            if (((piVar8 == (int *)0x0) || (iVar2 = (**(code **)(*piVar8 + 0xf8))(), iVar2 == 0)) ||
               ((7 < (uint)piVar8[9] ||
                ((DAT_00802a38 != 0 && (7 < (byte)(&DAT_008087e9)[piVar8[9] * 0x51])))))) {
              bVar1 = thunk_FUN_004961b0(sVar9,(short)iStack_50,(short)iStack_4c);
              if (CONCAT31(extraout_var,bVar1) == 0) goto LAB_0060f230;
            }
            else if (*(int *)((int)this + 0x2d1) != piVar8[6]) {
LAB_0060f230:
              *(undefined2 *)(puStack_54 + iStack_88 * 2) = 0xbfff;
            }
            iVar12 = iVar12 + 1;
            iVar6 = iStack_a8;
            iVar2 = iStack_24;
          } while (iVar12 < iStack_84);
        }
        iStack_50 = iStack_50 + 1;
      } while (iStack_50 < iStack_94);
    }
    iStack_4c = iStack_4c + 1;
  } while (iStack_4c < 5);
  thunk_FUN_00615bb0((int)*(short *)((int)this + 0x1f5),(undefined4 *)0x0,(undefined4 *)0x0,1,
                     asStack_60);
  iVar6 = 0;
  do {
    if ((((-1 < iStack_20 + asStack_60[iVar6 * 2]) && (-1 < asStack_60[iVar6 * 2 + 1] + iStack_2c))
        && (iStack_20 + asStack_60[iVar6 * 2] < (int)DAT_007fb240)) &&
       ((asStack_60[iVar6 * 2 + 1] + iStack_2c < (int)DAT_007fb242 &&
        (iStack_4c = (int)psStack_40 + -1, iStack_4c <= (int)psStack_40 + 1)))) {
      do {
        if ((-1 < iStack_4c) && (iStack_4c < 5)) {
          aiStack_b8[0] = asStack_60[iVar6 * 2] + iStack_20;
          iStack_74 = asStack_60[iVar6 * 2 + 1] + iStack_2c;
          *(undefined2 *)
           (puStack_54 +
           ((((iStack_74 - iStack_38) * iStack_9c + iStack_4c * iStack_8c) - iVar2) + aiStack_b8[0])
           * 2) = 0xbfff;
        }
        iStack_4c = iStack_4c + 1;
      } while (iStack_4c <= (int)psStack_40 + 1);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  psStack_6c = FUN_006afba0((int)puStack_54,iStack_84 - iVar2,(short *)(iStack_94 - iStack_38),
                            (short *)0x5,(short *)(iStack_3c - iVar2),
                            (short *)(iStack_48 - iStack_38),psStack_40,(short *)(iStack_80 - iVar2)
                            ,(short *)(iStack_b0 - iStack_38),psStack_34,aiStack_68,2);
  if (psStack_6c == (short *)0x0) {
    aiStack_68[0] = 0;
  }
  else {
    piVar8 = (int *)((int)this + 0x2dd);
    if (*piVar8 == 0) {
      iVar2 = FUN_006aac70((aiStack_68[0] + 1) * 0x1c);
      *piVar8 = iVar2;
    }
    else {
      if (*(int *)((int)this + 0x2d5) <= aiStack_68[0]) {
        FUN_006ab060(piVar8);
      }
      *(undefined4 *)((int)this + 0x2d5) = 0;
    }
    iVar2 = 1;
    if (1 < aiStack_68[0]) {
      do {
        iVar6 = iVar2 * 0x1c;
        *(short *)(*piVar8 + iVar6) = psStack_6c[iVar2 * 4 + -4] + (short)iStack_24;
        *(short *)(*piVar8 + 2 + iVar6) = psStack_6c[iVar2 * 4 + -3] + (short)iStack_38;
        *(short *)(*piVar8 + 4 + iVar6) = psStack_6c[iVar2 * 4 + -2];
        *(undefined2 *)(*piVar8 + 6 + iVar6) =
             *(undefined2 *)
              (PTR_DAT_007ed56c +
              ((((((int)psStack_6c[iVar2 * 4 + 2] - (int)psStack_6c[iVar2 * 4 + -2]) * 3 -
                 (int)psStack_6c[iVar2 * 4 + -3]) + (int)psStack_6c[iVar2 * 4 + 1]) * 3 -
               (int)psStack_6c[iVar2 * 4 + -4]) + (int)psStack_6c[iVar2 * 4]) * 4);
        *(int *)(*piVar8 + iVar6 + 8) =
             (*(int *)(&DAT_007cfe74 + *(short *)(*piVar8 + iVar6 + 6) * 4) * 0xc9) / 1000;
        iVar2 = iVar2 + 1;
      } while (iVar2 < aiStack_68[0]);
    }
    iVar2 = aiStack_68[0] * 0x1c;
    *(short *)(*piVar8 + iVar2) = psStack_6c[aiStack_68[0] * 4 + -4] + (short)iStack_24;
    *(short *)(*piVar8 + 2 + iVar2) = psStack_6c[aiStack_68[0] * 4 + -3] + (short)iStack_38;
    *(short *)(*piVar8 + 4 + iVar2) = psStack_6c[aiStack_68[0] * 4 + -2];
    *(undefined2 *)(iVar2 + *piVar8 + 6) = *(undefined2 *)(iVar2 + *piVar8 + -0x16);
    *(int *)((int)this + 0x2d5) = aiStack_68[0] + 1;
    iStack_7c = 1;
    if (1 < aiStack_68[0] + -1) {
      do {
        iVar6 = iStack_7c * 0x1c;
        iVar2 = *piVar8 + iVar6;
        uVar3 = thunk_FUN_0060f940((int)*(short *)(iVar2 + 6),(int)*(short *)(iVar2 + 0x22),iVar2,1,
                                   0,0,0,0,0,0,0,0,0,(int *)0x0,(int *)0x0);
        *(undefined4 *)(*piVar8 + 0x18 + iVar6) = uVar3;
        if (*(int *)(*piVar8 + 0x18 + iVar6) < 0) {
          aiStack_68[0] = -1;
          break;
        }
        iStack_7c = iStack_7c + 1;
      } while (iStack_7c < aiStack_68[0] + -1);
    }
    if (1 < aiStack_68[0]) {
      *(short *)*piVar8 = (short)iStack_20;
      *(short *)(*piVar8 + 2) = (short)iStack_2c;
      *(undefined2 *)(*piVar8 + 4) = psStack_40._0_2_;
      *(undefined2 *)(*piVar8 + 6) =
           *(undefined2 *)
            (PTR_DAT_007ed56c + (((iStack_48 - iStack_2c) * 3 - iStack_20) + iStack_3c) * 4);
      *(int *)(*piVar8 + 8) = (*(int *)(&DAT_007cfe74 + *(short *)(*piVar8 + 6) * 4) * 0xc9) / 1000;
      iVar2 = *piVar8;
      uVar3 = thunk_FUN_0060f940((int)*(short *)(iVar2 + 6),(int)*(short *)(iVar2 + 0x22),iVar2,1,0,
                                 0,0,0,0,0,0,0,0,(int *)0x0,(int *)0x0);
      *(undefined4 *)(*piVar8 + 0x18) = uVar3;
      *(undefined2 *)*piVar8 = *(undefined2 *)((int)this + 0x1e9);
      *(undefined2 *)(*piVar8 + 2) = *(undefined2 *)((int)this + 0x1eb);
      *(undefined2 *)(*piVar8 + 4) = *(undefined2 *)((int)this + 0x1ed);
      thunk_FUN_00615860((int)*(short *)((int)this + 0x1f5),&iStack_30,&iStack_44,&iStack_70);
      iVar2 = *piVar8;
      thunk_FUN_00615e70(this,(int)*(short *)((int)this + 0x1e9),(int)*(short *)((int)this + 0x1eb),
                         (int)*(short *)((int)this + 0x1ed),iStack_30,iStack_44,iStack_70,
                         *(short *)(iVar2 + 0x1c) * 0xc9 + (int)*(short *)((int)this + 0x1ef) % 0xc9
                         ,*(short *)(iVar2 + 0x1e) * 0xc9 +
                          (int)*(short *)((int)this + 0x1f1) % 0xc9,
                         (int)*(short *)((int)this + 499) % 200 + *(short *)(iVar2 + 0x20) * 200);
    }
  }
  if (psStack_6c != (short *)0x0) {
    FUN_006ab060(&psStack_6c);
  }
  ExceptionList = pvStack_14;
  return aiStack_68[0];
}

