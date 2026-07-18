
void __thiscall
thunk_FUN_00644410(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  void *pvVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  short sVar9;
  int *piVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_48 [4];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  void *pvStack_10;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  
  iVar13 = 0;
  iStack_3c = (int)*(short *)((int)this + 0x41);
  iStack_40 = (int)*(short *)((int)this + 0x43);
  iStack_44 = (int)*(short *)((int)this + 0x45);
  iStack_14 = 0;
  puStack_18 = (undefined4 *)0x0;
  if (*(byte *)((int)this + 0x27d) < 2) {
    *param_2 = iStack_3c;
    *param_3 = iStack_40;
    *param_4 = iStack_44;
    *param_1 = 0;
    return;
  }
  pvStack_10 = this;
  iStack_2c = FUN_006aadd0((int)*(short *)((int)this + 0x268),(int)*(short *)((int)this + 0x26a),
                           (int)*(short *)((int)this + 0x26c),iStack_3c,iStack_40,iStack_44);
  iStack_2c = iStack_2c / 0x32;
  if (iStack_2c < 1) {
    iStack_2c = 1;
  }
  iStack_38 = 1;
  if (0 < iStack_2c) {
    do {
      iVar13 = ((iStack_3c - *(short *)((int)this + 0x268)) * iStack_38) / iStack_2c +
               (int)*(short *)((int)this + 0x268);
      iStack_14 = ((iStack_40 - *(short *)((int)this + 0x26a)) * iStack_38) / iStack_2c +
                  (int)*(short *)((int)this + 0x26a);
      puStack_18 = (undefined4 *)
                   (((iStack_44 - *(short *)((int)this + 0x26c)) * iStack_38) / iStack_2c +
                   (int)*(short *)((int)this + 0x26c));
      sVar2 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        iStack_24 = (short)(((short)(iVar13 / 0xc9) + sVar2) -
                           (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iStack_24 = (int)(short)(((short)(iVar13 / 0xc9) + sVar2) -
                                (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
      }
      sVar2 = (short)(iStack_14 >> 0x1f);
      if (iStack_14 < 0) {
        iVar5 = (short)(((short)(iStack_14 / 0xc9) + sVar2) -
                       (short)((longlong)iStack_14 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iStack_14 / 0xc9) + sVar2) -
                            (short)((longlong)iStack_14 * 0x28c1979 >> 0x3f));
      }
      sVar2 = (short)((int)puStack_18 >> 0x1f);
      if ((int)puStack_18 < 0) {
        puVar8 = (undefined4 *)
                 ((short)(((short)((int)puStack_18 / 200) + sVar2) -
                         (short)((longlong)(int)puStack_18 * 0x51eb851f >> 0x3f)) + -1);
      }
      else {
        puVar8 = (undefined4 *)
                 (int)(short)(((short)((int)puStack_18 / 200) + sVar2) -
                             (short)((longlong)(int)puStack_18 * 0x51eb851f >> 0x3f));
      }
      iStack_34 = (int)puVar8 + -1;
      *param_1 = 0;
      puStack_30 = puVar8;
      iStack_28 = iVar5;
      iStack_20 = iVar13;
      if (iStack_34 <= (int)puVar8 + 1) {
        do {
          if ((iStack_34 <= DAT_007fb244 + -1) && (iStack_1c = iVar5 + -1, iStack_1c <= iVar5 + 1))
          {
            do {
              if ((-1 < iStack_1c) &&
                 ((iStack_1c <= DAT_007fb242 + -1 &&
                  (iVar5 = iStack_24 + -1, iVar5 <= iStack_24 + 1)))) {
                do {
                  pvVar1 = pvStack_10;
                  iVar13 = iStack_34;
                  if ((-1 < iVar5) && (iVar6 = (int)DAT_007fb240, iVar5 <= iVar6 + -1)) {
                    if (iStack_34 < 0) {
                      if ((((undefined4 *)iStack_34 == puStack_30) && (iStack_1c == iStack_28)) &&
                         (iVar5 == iStack_24)) {
                        *param_1 = 1;
                        *(undefined4 *)((int)pvStack_10 + 0x270) = 0;
                        lVar14 = __ftol();
                        *param_2 = (int)lVar14;
                        *(short *)((int)pvVar1 + 0x41) = (short)lVar14;
                        lVar14 = __ftol();
                        *param_3 = (int)lVar14;
                        *(short *)((int)pvVar1 + 0x43) = (short)lVar14;
                        *param_4 = 5;
                        *(undefined2 *)((int)pvVar1 + 0x45) = 5;
                        return;
                      }
                    }
                    else {
                      sVar9 = (short)iVar5;
                      sVar12 = (short)iStack_34;
                      sVar2 = (short)iStack_1c;
                      if (((((sVar9 < 0) || (DAT_007fb240 <= sVar9)) || (sVar2 < 0)) ||
                          ((DAT_007fb242 <= sVar2 || (sVar12 < 0)))) || (DAT_007fb244 <= sVar12)) {
                        piVar10 = (int *)0x0;
                      }
                      else {
                        piVar10 = *(int **)(DAT_007fb248 +
                                           ((int)sVar12 * (int)DAT_007fb246 + sVar2 * iVar6 +
                                           (int)sVar9) * 8);
                      }
                      if (((*(char *)((int)pvStack_10 + 0x287) != '\0') && (piVar10 == (int *)0x0))
                         && ((((sVar9 < 0 ||
                               (((DAT_007fb240 <= sVar9 || (sVar2 < 0)) || (DAT_007fb242 <= sVar2)))
                               ) || ((sVar12 < 0 || (DAT_007fb244 <= sVar12)))) ||
                             ((piVar10 = *(int **)(DAT_007fb248 + 4 +
                                                  ((int)sVar12 * (int)DAT_007fb246 + sVar2 * iVar6 +
                                                  (int)sVar9) * 8), piVar10 != (int *)0x0 &&
                              (((iVar6 = (**(code **)(*piVar10 + 0x2c))(), iVar6 != 0xa6 &&
                                (iVar6 != 0xa7)) && ((iVar6 != 0xbd && (iVar6 != 0xaf)))))))))) {
                        piVar10 = (int *)0x0;
                      }
                      iVar6 = iStack_20;
                      if (((((undefined4 *)iVar13 == puStack_30) && (iStack_1c == iStack_28)) &&
                          (iVar5 == iStack_24)) &&
                         ((*(short *)(DAT_007fb280 +
                                     (DAT_007fb27e * iVar13 + iVar5 + DAT_007fb278 * iStack_1c) * 2)
                           < 0 && (piVar10 == (int *)0x0)))) {
                        *param_1 = 1;
                        *(undefined4 *)((int)pvStack_10 + 0x270) = 0;
                        *param_2 = iStack_20;
                        *param_3 = iStack_14;
                        *param_4 = (int)puStack_18;
                        sVar2 = (short)((int)puStack_18 >> 0x1f);
                        if ((int)puStack_18 < 0) {
                          iVar13 = (short)(((short)((int)puStack_18 / 200) + sVar2) -
                                          (short)((longlong)(int)puStack_18 * 0x51eb851f >> 0x3f)) +
                                   -1;
                        }
                        else {
                          iVar13 = (int)(short)(((short)((int)puStack_18 / 200) + sVar2) -
                                               (short)((longlong)(int)puStack_18 * 0x51eb851f >>
                                                      0x3f));
                        }
                        sVar2 = (short)(iStack_14 >> 0x1f);
                        if (iStack_14 < 0) {
                          iVar5 = (short)(((short)(iStack_14 / 0xc9) + sVar2) -
                                         (short)((longlong)iStack_14 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar5 = (int)(short)(((short)(iStack_14 / 0xc9) + sVar2) -
                                              (short)((longlong)iStack_14 * 0x28c1979 >> 0x3f));
                        }
                        sVar2 = (short)(iStack_20 >> 0x1f);
                        if (iStack_20 < 0) {
                          iVar3 = (short)(((short)(iStack_20 / 0xc9) + sVar2) -
                                         (short)((longlong)iStack_20 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar3 = (int)(short)(((short)(iStack_20 / 0xc9) + sVar2) -
                                              (short)((longlong)iStack_20 * 0x28c1979 >> 0x3f));
                        }
                        sVar2 = *(short *)((int)pvStack_10 + 0x26c);
                        puStack_30 = (undefined4 *)(int)sVar2;
                        if (sVar2 < 0) {
                          iVar7 = (short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                                         (short)((longlong)(int)puStack_30 * 0x51eb851f >> 0x3f)) +
                                  -1;
                        }
                        else {
                          iVar7 = (int)(short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                                              (short)((longlong)(int)puStack_30 * 0x51eb851f >> 0x3f
                                                     ));
                        }
                        sVar2 = *(short *)((int)pvStack_10 + 0x26a);
                        iStack_34 = (int)sVar2;
                        if (sVar2 < 0) {
                          iVar11 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                          (short)((longlong)iStack_34 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar11 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                               (short)((longlong)iStack_34 * 0x28c1979 >> 0x3f));
                        }
                        sVar2 = *(short *)((int)pvStack_10 + 0x268);
                        iStack_38 = (int)sVar2;
                        if (sVar2 < 0) {
                          iVar4 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                         (short)((longlong)iStack_38 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar4 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                              (short)((longlong)iStack_38 * 0x28c1979 >> 0x3f));
                        }
                        sVar2 = *(short *)(DAT_007fb280 +
                                          (iVar7 * DAT_007fb27e + iVar4 + iVar11 * DAT_007fb278) * 2
                                          );
                        if (-1 < sVar2) {
                          if (*(short *)(DAT_007fb280 +
                                        (iVar13 * DAT_007fb27e + iVar3 + iVar5 * DAT_007fb278) * 2)
                              == sVar2) {
                            return;
                          }
                          iVar5 = iStack_38 - iStack_20;
                          iStack_28 = iStack_20;
                          iStack_20 = 3;
                          iVar13 = (iStack_34 - iStack_14) / 2 + iStack_14;
                          param_1 = puStack_18;
                          iVar6 = iVar5 / 2 + iVar6;
                          puStack_18 = (undefined4 *)
                                       (((int)puStack_30 - (int)puStack_18) / 2 + (int)puStack_18);
                          iStack_24 = iStack_14;
                          do {
                            sVar2 = (short)((int)puStack_18 >> 0x1f);
                            if ((int)puStack_18 < 0) {
                              iStack_2c = (short)(((short)((int)puStack_18 / 200) + sVar2) -
                                                 (short)((longlong)(int)puStack_18 * 0x51eb851f >>
                                                        0x3f)) + -1;
                            }
                            else {
                              iStack_2c = (int)(short)(((short)((int)puStack_18 / 200) + sVar2) -
                                                      (short)((longlong)(int)puStack_18 * 0x51eb851f
                                                             >> 0x3f));
                            }
                            sVar2 = (short)(iVar13 >> 0x1f);
                            if (iVar13 < 0) {
                              iVar5 = (short)(((short)(iVar13 / 0xc9) + sVar2) -
                                             (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
                            }
                            else {
                              iVar5 = (int)(short)(((short)(iVar13 / 0xc9) + sVar2) -
                                                  (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
                            }
                            sVar2 = (short)(iVar6 >> 0x1f);
                            if (iVar6 < 0) {
                              iVar3 = (short)(((short)(iVar6 / 0xc9) + sVar2) -
                                             (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
                            }
                            else {
                              iVar3 = (int)(short)(((short)(iVar6 / 0xc9) + sVar2) -
                                                  (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
                            }
                            iVar7 = iVar6;
                            iVar11 = iVar13;
                            if (*(short *)(DAT_007fb280 +
                                          (iStack_2c * DAT_007fb27e + iVar3 + iVar5 * DAT_007fb278)
                                          * 2) < 0) {
                              param_1 = puStack_18;
                              iVar7 = iStack_38;
                              iVar11 = iStack_34;
                              puStack_18 = puStack_30;
                              iStack_28 = iVar6;
                              iStack_24 = iVar13;
                            }
                            puStack_30 = puStack_18;
                            iStack_34 = iVar11;
                            iStack_38 = iVar7;
                            iVar6 = (iStack_38 - iStack_28) / 2 + iStack_28;
                            iVar13 = (iStack_34 - iStack_24) / 2 + iStack_24;
                            puStack_18 = (undefined4 *)
                                         (((int)puStack_30 - (int)param_1) / 2 + (int)param_1);
                            iStack_20 = iStack_20 + -1;
                          } while (iStack_20 != 0);
                          sVar2 = (short)((int)puStack_18 >> 0x1f);
                          if ((int)puStack_18 < 0) {
                            param_1 = (undefined4 *)
                                      ((short)(((short)((int)puStack_18 / 200) + sVar2) -
                                              (short)((longlong)(int)puStack_18 * 0x51eb851f >> 0x3f
                                                     )) + -1);
                          }
                          else {
                            param_1 = (undefined4 *)
                                      (int)(short)(((short)((int)puStack_18 / 200) + sVar2) -
                                                  (short)((longlong)(int)puStack_18 * 0x51eb851f >>
                                                         0x3f));
                          }
                          sVar2 = (short)(iVar13 >> 0x1f);
                          if (iVar13 < 0) {
                            iVar5 = (short)(((short)(iVar13 / 0xc9) + sVar2) -
                                           (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
                          }
                          else {
                            iVar5 = (int)(short)(((short)(iVar13 / 0xc9) + sVar2) -
                                                (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
                          }
                          sVar2 = (short)(iVar6 >> 0x1f);
                          if (iVar6 < 0) {
                            iVar3 = (short)(((short)(iVar6 / 0xc9) + sVar2) -
                                           (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
                          }
                          else {
                            iVar3 = (int)(short)(((short)(iVar6 / 0xc9) + sVar2) -
                                                (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
                          }
                          if (*(short *)(DAT_007fb280 +
                                        ((int)param_1 * (int)DAT_007fb27e +
                                        iVar3 + iVar5 * DAT_007fb278) * 2) < 0) {
                            iVar6 = iStack_38;
                            puStack_18 = puStack_30;
                            iVar13 = iStack_34;
                          }
                          *param_2 = iVar6;
                          *param_3 = iVar13;
                          *param_4 = (int)puStack_18;
                          *(short *)((int)pvStack_10 + 0x45) = (short)puStack_18;
                          *(short *)((int)pvStack_10 + 0x41) = (short)iVar6;
                          return;
                        }
                        *param_1 = 2;
                        return;
                      }
                      if (((piVar10 != (int *)0x0) &&
                          (piVar10[6] != *(int *)((int)pvStack_10 + 0x25e))) &&
                         (iVar13 = (**(code **)(*piVar10 + 0xdc))
                                             (iStack_20,iStack_14,puStack_18,
                                              *(undefined2 *)((int)pvStack_10 + 0x24b),
                                              *(undefined2 *)((int)pvStack_10 + 0x24d),
                                              *(undefined2 *)((int)pvStack_10 + 0x24f)),
                         pvVar1 = pvStack_10, -1 < iVar13)) {
                        *param_1 = 1;
                        iVar5 = *(int *)((int)pvStack_10 + 0x259);
                        if (((((iVar5 == 0x9c) || (iVar5 == 0x9d)) || (iVar5 == 0x9e)) ||
                            (iVar5 == 0x9b)) &&
                           (((*(char *)((int)pvStack_10 + 0x285) == '\0' &&
                             (iVar5 = thunk_FUN_004406c0((char)piVar10[9]), (char)iVar5 != '\x03'))
                            && (iVar5 = thunk_FUN_004e60d0(piVar10[9],0x1b), iVar5 != 0)))) {
                          (**(code **)(*piVar10 + 0xe0))
                                    (iVar13,&sStack_6,&sStack_8,&sStack_a,auStack_48);
                          *param_2 = (int)sStack_6;
                          *param_3 = (int)sStack_8;
                          *param_4 = (int)sStack_a;
                          thunk_FUN_00645f10(pvVar1,piVar10,(short)*param_2,(short)*param_3,sStack_a
                                            );
                          *(undefined1 *)((int)pvVar1 + 0x285) = 2;
                        }
                        *(undefined4 *)((int)pvVar1 + 0x270) = 1;
                        *(int *)((int)pvVar1 + 0x274) = piVar10[6];
                        *(int *)((int)pvVar1 + 0x278) = iVar13;
                        *param_2 = iStack_20;
                        *param_3 = iStack_14;
                        *param_4 = (int)puStack_18;
                        return;
                      }
                    }
                  }
                  iVar5 = iVar5 + 1;
                  puVar8 = puStack_30;
                  this = pvStack_10;
                  iVar13 = iStack_20;
                } while (iVar5 <= iStack_24 + 1);
              }
              iStack_1c = iStack_1c + 1;
              iVar5 = iStack_28;
            } while (iStack_1c <= iStack_28 + 1);
          }
          iStack_34 = iStack_34 + 1;
        } while (iStack_34 <= (int)puVar8 + 1);
      }
      iStack_38 = iStack_38 + 1;
    } while (iStack_38 <= iStack_2c);
  }
  *param_2 = iVar13;
  *param_3 = iStack_14;
  *param_4 = (int)puStack_18;
  return;
}

