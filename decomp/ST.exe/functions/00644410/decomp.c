
void __thiscall FUN_00644410(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

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
  undefined1 local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  short local_a;
  short local_8;
  short local_6;
  
  iVar13 = 0;
  local_3c = (int)*(short *)((int)this + 0x41);
  local_40 = (int)*(short *)((int)this + 0x43);
  local_44 = (int)*(short *)((int)this + 0x45);
  local_14 = 0;
  local_18 = (undefined4 *)0x0;
  if (*(byte *)((int)this + 0x27d) < 2) {
    *param_2 = local_3c;
    *param_3 = local_40;
    *param_4 = local_44;
    *param_1 = 0;
    return;
  }
  local_10 = this;
  local_2c = FUN_006aadd0((int)*(short *)((int)this + 0x268),(int)*(short *)((int)this + 0x26a),
                          (int)*(short *)((int)this + 0x26c),local_3c,local_40,local_44);
  local_2c = local_2c / 0x32;
  if (local_2c < 1) {
    local_2c = 1;
  }
  local_38 = 1;
  if (0 < local_2c) {
    do {
      iVar13 = ((local_3c - *(short *)((int)this + 0x268)) * local_38) / local_2c +
               (int)*(short *)((int)this + 0x268);
      local_14 = ((local_40 - *(short *)((int)this + 0x26a)) * local_38) / local_2c +
                 (int)*(short *)((int)this + 0x26a);
      local_18 = (undefined4 *)
                 (((local_44 - *(short *)((int)this + 0x26c)) * local_38) / local_2c +
                 (int)*(short *)((int)this + 0x26c));
      sVar2 = (short)(iVar13 >> 0x1f);
      if (iVar13 < 0) {
        local_24 = (short)(((short)(iVar13 / 0xc9) + sVar2) -
                          (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        local_24 = (int)(short)(((short)(iVar13 / 0xc9) + sVar2) -
                               (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
      }
      sVar2 = (short)(local_14 >> 0x1f);
      if (local_14 < 0) {
        iVar5 = (short)(((short)(local_14 / 0xc9) + sVar2) -
                       (short)((longlong)local_14 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar2) -
                            (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
      }
      sVar2 = (short)((int)local_18 >> 0x1f);
      if ((int)local_18 < 0) {
        puVar8 = (undefined4 *)
                 ((short)(((short)((int)local_18 / 200) + sVar2) -
                         (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f)) + -1);
      }
      else {
        puVar8 = (undefined4 *)
                 (int)(short)(((short)((int)local_18 / 200) + sVar2) -
                             (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f));
      }
      local_34 = (int)puVar8 + -1;
      *param_1 = 0;
      local_30 = puVar8;
      local_28 = iVar5;
      local_20 = iVar13;
      if (local_34 <= (int)puVar8 + 1) {
        do {
          if ((local_34 <= SHORT_007fb244 + -1) && (local_1c = iVar5 + -1, local_1c <= iVar5 + 1)) {
            do {
              if ((-1 < local_1c) &&
                 ((local_1c <= SHORT_007fb242 + -1 && (iVar5 = local_24 + -1, iVar5 <= local_24 + 1)
                  ))) {
                do {
                  pvVar1 = local_10;
                  iVar13 = local_34;
                  if ((-1 < iVar5) && (iVar6 = (int)SHORT_007fb240, iVar5 <= iVar6 + -1)) {
                    if (local_34 < 0) {
                      if ((((undefined4 *)local_34 == local_30) && (local_1c == local_28)) &&
                         (iVar5 == local_24)) {
                        *param_1 = 1;
                        *(undefined4 *)((int)local_10 + 0x270) = 0;
                        lVar14 = Library::MSVCRT::__ftol();
                        *param_2 = (int)lVar14;
                        *(short *)((int)pvVar1 + 0x41) = (short)lVar14;
                        lVar14 = Library::MSVCRT::__ftol();
                        *param_3 = (int)lVar14;
                        *(short *)((int)pvVar1 + 0x43) = (short)lVar14;
                        *param_4 = 5;
                        *(undefined2 *)((int)pvVar1 + 0x45) = 5;
                        return;
                      }
                    }
                    else {
                      sVar9 = (short)iVar5;
                      sVar12 = (short)local_34;
                      sVar2 = (short)local_1c;
                      if (((((sVar9 < 0) || (SHORT_007fb240 <= sVar9)) || (sVar2 < 0)) ||
                          ((SHORT_007fb242 <= sVar2 || (sVar12 < 0)))) || (SHORT_007fb244 <= sVar12)
                         ) {
                        piVar10 = (int *)0x0;
                      }
                      else {
                        piVar10 = *(int **)(DAT_007fb248 +
                                           ((int)sVar12 * (int)SHORT_007fb246 + sVar2 * iVar6 +
                                           (int)sVar9) * 8);
                      }
                      if (((*(char *)((int)local_10 + 0x287) != '\0') && (piVar10 == (int *)0x0)) &&
                         ((((sVar9 < 0 ||
                            (((SHORT_007fb240 <= sVar9 || (sVar2 < 0)) || (SHORT_007fb242 <= sVar2))
                            )) || ((sVar12 < 0 || (SHORT_007fb244 <= sVar12)))) ||
                          ((piVar10 = *(int **)(DAT_007fb248 + 4 +
                                               ((int)sVar12 * (int)SHORT_007fb246 + sVar2 * iVar6 +
                                               (int)sVar9) * 8), piVar10 != (int *)0x0 &&
                           (((iVar6 = (**(code **)(*piVar10 + 0x2c))(), iVar6 != 0xa6 &&
                             (iVar6 != 0xa7)) && ((iVar6 != 0xbd && (iVar6 != 0xaf)))))))))) {
                        piVar10 = (int *)0x0;
                      }
                      iVar6 = local_20;
                      if (((((undefined4 *)iVar13 == local_30) && (local_1c == local_28)) &&
                          (iVar5 == local_24)) &&
                         ((*(short *)(DAT_007fb280 +
                                     (SHORT_007fb27e * iVar13 + iVar5 + SHORT_007fb278 * local_1c) *
                                     2) < 0 && (piVar10 == (int *)0x0)))) {
                        *param_1 = 1;
                        *(undefined4 *)((int)local_10 + 0x270) = 0;
                        *param_2 = local_20;
                        *param_3 = local_14;
                        *param_4 = (int)local_18;
                        sVar2 = (short)((int)local_18 >> 0x1f);
                        if ((int)local_18 < 0) {
                          iVar13 = (short)(((short)((int)local_18 / 200) + sVar2) -
                                          (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f)) +
                                   -1;
                        }
                        else {
                          iVar13 = (int)(short)(((short)((int)local_18 / 200) + sVar2) -
                                               (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f)
                                               );
                        }
                        sVar2 = (short)(local_14 >> 0x1f);
                        if (local_14 < 0) {
                          iVar5 = (short)(((short)(local_14 / 0xc9) + sVar2) -
                                         (short)((longlong)local_14 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar2) -
                                              (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
                        }
                        sVar2 = (short)(local_20 >> 0x1f);
                        if (local_20 < 0) {
                          iVar3 = (short)(((short)(local_20 / 0xc9) + sVar2) -
                                         (short)((longlong)local_20 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar3 = (int)(short)(((short)(local_20 / 0xc9) + sVar2) -
                                              (short)((longlong)local_20 * 0x28c1979 >> 0x3f));
                        }
                        sVar2 = *(short *)((int)local_10 + 0x26c);
                        local_30 = (undefined4 *)(int)sVar2;
                        if (sVar2 < 0) {
                          iVar7 = (short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                                         (short)((longlong)(int)local_30 * 0x51eb851f >> 0x3f)) + -1
                          ;
                        }
                        else {
                          iVar7 = (int)(short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                                              (short)((longlong)(int)local_30 * 0x51eb851f >> 0x3f))
                          ;
                        }
                        sVar2 = *(short *)((int)local_10 + 0x26a);
                        local_34 = (int)sVar2;
                        if (sVar2 < 0) {
                          iVar11 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                          (short)((longlong)local_34 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar11 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                               (short)((longlong)local_34 * 0x28c1979 >> 0x3f));
                        }
                        sVar2 = *(short *)((int)local_10 + 0x268);
                        local_38 = (int)sVar2;
                        if (sVar2 < 0) {
                          iVar4 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                         (short)((longlong)local_38 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar4 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                              (short)((longlong)local_38 * 0x28c1979 >> 0x3f));
                        }
                        sVar2 = *(short *)(DAT_007fb280 +
                                          (iVar7 * SHORT_007fb27e + iVar4 + iVar11 * SHORT_007fb278)
                                          * 2);
                        if (-1 < sVar2) {
                          if (*(short *)(DAT_007fb280 +
                                        (iVar13 * SHORT_007fb27e + iVar3 + iVar5 * SHORT_007fb278) *
                                        2) == sVar2) {
                            return;
                          }
                          iVar5 = local_38 - local_20;
                          local_28 = local_20;
                          local_20 = 3;
                          iVar13 = (local_34 - local_14) / 2 + local_14;
                          param_1 = local_18;
                          iVar6 = iVar5 / 2 + iVar6;
                          local_18 = (undefined4 *)
                                     (((int)local_30 - (int)local_18) / 2 + (int)local_18);
                          local_24 = local_14;
                          do {
                            sVar2 = (short)((int)local_18 >> 0x1f);
                            if ((int)local_18 < 0) {
                              local_2c = (short)(((short)((int)local_18 / 200) + sVar2) -
                                                (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f
                                                       )) + -1;
                            }
                            else {
                              local_2c = (int)(short)(((short)((int)local_18 / 200) + sVar2) -
                                                     (short)((longlong)(int)local_18 * 0x51eb851f >>
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
                            iVar7 = iVar6;
                            iVar11 = iVar13;
                            if (*(short *)(DAT_007fb280 +
                                          (local_2c * SHORT_007fb27e +
                                          iVar3 + iVar5 * SHORT_007fb278) * 2) < 0) {
                              param_1 = local_18;
                              iVar7 = local_38;
                              iVar11 = local_34;
                              local_18 = local_30;
                              local_28 = iVar6;
                              local_24 = iVar13;
                            }
                            local_30 = local_18;
                            local_34 = iVar11;
                            local_38 = iVar7;
                            iVar6 = (local_38 - local_28) / 2 + local_28;
                            iVar13 = (local_34 - local_24) / 2 + local_24;
                            local_18 = (undefined4 *)
                                       (((int)local_30 - (int)param_1) / 2 + (int)param_1);
                            local_20 = local_20 + -1;
                          } while (local_20 != 0);
                          sVar2 = (short)((int)local_18 >> 0x1f);
                          if ((int)local_18 < 0) {
                            param_1 = (undefined4 *)
                                      ((short)(((short)((int)local_18 / 200) + sVar2) -
                                              (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f))
                                      + -1);
                          }
                          else {
                            param_1 = (undefined4 *)
                                      (int)(short)(((short)((int)local_18 / 200) + sVar2) -
                                                  (short)((longlong)(int)local_18 * 0x51eb851f >>
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
                                        ((int)param_1 * (int)SHORT_007fb27e +
                                        iVar3 + iVar5 * SHORT_007fb278) * 2) < 0) {
                            iVar6 = local_38;
                            local_18 = local_30;
                            iVar13 = local_34;
                          }
                          *param_2 = iVar6;
                          *param_3 = iVar13;
                          *param_4 = (int)local_18;
                          *(short *)((int)local_10 + 0x45) = (short)local_18;
                          *(short *)((int)local_10 + 0x41) = (short)iVar6;
                          return;
                        }
                        *param_1 = 2;
                        return;
                      }
                      if (((piVar10 != (int *)0x0) &&
                          (piVar10[6] != *(int *)((int)local_10 + 0x25e))) &&
                         (iVar13 = (**(code **)(*piVar10 + 0xdc))
                                             (local_20,local_14,local_18,
                                              *(undefined2 *)((int)local_10 + 0x24b),
                                              *(undefined2 *)((int)local_10 + 0x24d),
                                              *(undefined2 *)((int)local_10 + 0x24f)),
                         pvVar1 = local_10, -1 < iVar13)) {
                        *param_1 = 1;
                        iVar5 = *(int *)((int)local_10 + 0x259);
                        if (((((iVar5 == 0x9c) || (iVar5 == 0x9d)) || (iVar5 == 0x9e)) ||
                            (iVar5 == 0x9b)) &&
                           (((*(char *)((int)local_10 + 0x285) == '\0' &&
                             (iVar5 = thunk_FUN_004406c0((char)piVar10[9]), (char)iVar5 != '\x03'))
                            && (iVar5 = thunk_FUN_004e60d0(piVar10[9],0x1b), iVar5 != 0)))) {
                          (**(code **)(*piVar10 + 0xe0))(iVar13,&local_6,&local_8,&local_a,local_48)
                          ;
                          *param_2 = (int)local_6;
                          *param_3 = (int)local_8;
                          *param_4 = (int)local_a;
                          thunk_FUN_00645f10(pvVar1,piVar10,(short)*param_2,(short)*param_3,local_a)
                          ;
                          *(undefined1 *)((int)pvVar1 + 0x285) = 2;
                        }
                        *(undefined4 *)((int)pvVar1 + 0x270) = 1;
                        *(int *)((int)pvVar1 + 0x274) = piVar10[6];
                        *(int *)((int)pvVar1 + 0x278) = iVar13;
                        *param_2 = local_20;
                        *param_3 = local_14;
                        *param_4 = (int)local_18;
                        return;
                      }
                    }
                  }
                  iVar5 = iVar5 + 1;
                  puVar8 = local_30;
                  this = local_10;
                  iVar13 = local_20;
                } while (iVar5 <= local_24 + 1);
              }
              local_1c = local_1c + 1;
              iVar5 = local_28;
            } while (local_1c <= local_28 + 1);
          }
          local_34 = local_34 + 1;
        } while (local_34 <= (int)puVar8 + 1);
      }
      local_38 = local_38 + 1;
    } while (local_38 <= local_2c);
  }
  *param_2 = iVar13;
  *param_3 = local_14;
  *param_4 = (int)local_18;
  return;
}

