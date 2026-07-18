
int __fastcall FUN_006ec010(undefined4 *param_1)

{
  uint uVar1;
  bool bVar2;
  void **ppvVar3;
  undefined1 *puVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int local_cc;
  int local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_8c;
  int local_88;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_64;
  int local_60;
  int local_5c;
  uint *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_2c;
  int local_28;
  uint *local_24;
  uint *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079e1e8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff20;
  iVar13 = 0;
  local_48 = 0;
  local_44 = 0;
  local_64 = 0;
  local_40 = 0;
  iVar8 = (param_1[0xca] - param_1[200]) - param_1[0xc9];
  local_2c = param_1[0xe] - param_1[0xc];
  local_28 = param_1[0xf] - param_1[0xd];
  ExceptionList = &local_14;
  if (param_1[0xb6] == 0) {
    local_60 = param_1[0xca] + -1;
    local_20 = (uint *)(param_1[0xcc] + local_60 * 0x68);
    ExceptionList = &local_14;
    ppvVar3 = &local_14;
    local_1c = &stack0xffffff20;
    puVar4 = &stack0xffffff20;
    if (param_1[0xc9] + iVar8 <= local_60) {
      do {
        local_1c = puVar4;
        ExceptionList = ppvVar3;
        local_54 = (uint *)(local_20[0x18] * 0x10 + *(int *)(local_20[0x19] + 0xec));
        if (((byte)*local_20 & 7) == 1) {
          iVar11 = 0;
          piVar7 = (int *)param_1[0xd4];
          if (0 < *piVar7) {
            local_a4 = 0;
            do {
              iVar5 = FUN_006b0460(&local_78,(int *)local_54,(int *)(local_a4 + 8 + (int)piVar7));
              if (iVar5 != 0) {
                *local_20 = *local_20 | 2;
                break;
              }
              iVar11 = iVar11 + 1;
              local_a4 = local_a4 + 0x10;
              piVar7 = (int *)param_1[0xd4];
            } while (iVar11 < *piVar7);
          }
        }
        local_60 = local_60 + -1;
        local_20 = local_20 + -0x1a;
        ppvVar3 = ExceptionList;
        puVar4 = local_1c;
      } while (param_1[0xc9] + iVar8 <= local_60);
    }
    iVar11 = param_1[0xc9] + -1 + iVar8;
    local_20 = (uint *)(param_1[0xcc] + iVar11 * 0x68);
    iVar5 = local_64;
    if (iVar8 <= iVar11) {
      puVar12 = local_20 + 6;
      local_a8 = (iVar11 - iVar8) + 1;
      do {
        local_24 = (uint *)puVar12[0x13];
        if ((((byte)*local_20 & 5) == 1) && (((*local_20 & 0x80) == 0 || ((int)*puVar12 < 5)))) {
          local_8c = 0;
          piVar7 = (int *)param_1[0xd4];
          if (0 < *piVar7) {
            local_ac = 0;
            do {
              iVar11 = FUN_006b0460(&local_78,(int *)(local_24 + 0x19),
                                    (int *)(local_ac + 8 + (int)piVar7));
              if (((iVar11 != 0) && (*local_20 = *local_20 | 0x82, (int)*puVar12 < 5)) &&
                 (iVar11 = FUN_006d1ad0((int *)puVar12,4,local_78,local_74,local_70,local_6c,
                                        local_24[0x1b],local_24[0x1c],0), iVar11 < 0)) {
                if ((puVar12[-5] & 0x40) != 0) {
                  iVar13 = *(int *)(param_1[199] + 0xc + *(int *)(puVar12[0x13] + 0x1c) * 0x114);
                  *(undefined4 *)(param_1[0xcc] + 0x18 + iVar13 * 0x68) = 5;
                  puVar6 = (uint *)(iVar13 * 0x68 + param_1[0xcc]);
                  *puVar6 = *puVar6 | 0x82;
                }
                break;
              }
              local_8c = local_8c + 1;
              local_ac = local_ac + 0x10;
              piVar7 = (int *)param_1[0xd4];
            } while (local_8c < *piVar7);
          }
        }
        local_20 = local_20 + -0x1a;
        puVar12 = puVar12 + -0x1a;
        local_a8 = local_a8 + -1;
        iVar5 = iVar13;
      } while (local_a8 != 0);
    }
    local_64 = iVar5;
    *(undefined4 *)param_1[0xd5] = *(undefined4 *)param_1[0xd4];
    *(undefined4 *)(param_1[0xd5] + 4) = *(undefined4 *)(param_1[0xd4] + 4);
    uVar1 = *(uint *)param_1[0xd4];
    if (0 < (int)uVar1) {
      puVar12 = (uint *)param_1[0xd4] + 2;
      puVar6 = (uint *)(param_1[0xd5] + 8);
      for (iVar13 = (uVar1 & 0xfffffff) << 2; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar6 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar11 = 0; iVar13 = local_64, iVar11 != 0; iVar11 = iVar11 + -1) {
        *(char *)puVar6 = (char)*puVar12;
        puVar12 = (uint *)((int)puVar12 + 1);
        puVar6 = (uint *)((int)puVar6 + 1);
      }
    }
    iVar11 = param_1[0xca] + -1;
    local_20 = (uint *)(param_1[0xcc] + iVar11 * 0x68);
    if (param_1[0xc9] + iVar8 <= iVar11) {
      do {
        puVar12 = (uint *)local_20[0x19];
        piVar7 = (int *)(local_20[0x18] * 0x10 + puVar12[0x3b]);
        if ((*local_20 & 2) == 0) {
          if ((*puVar12 & 0x40) != 0) {
            *puVar12 = *puVar12 & 0xffffffef;
          }
        }
        else {
          iVar5 = FUN_006d1ad0((int *)param_1[0xd5],100,*piVar7,piVar7[1],piVar7[2],piVar7[3],
                               local_2c,local_28,1);
          param_1[0xb6] = (uint)(iVar5 < 0);
          if (iVar5 < 0 != 0) break;
        }
        iVar11 = iVar11 + -1;
        local_20 = local_20 + -0x1a;
      } while (param_1[0xc9] + iVar8 <= iVar11);
    }
  }
  if (param_1[0xb6] == 0) {
    local_c8 = iVar8 + -1;
    local_20 = (uint *)(param_1[0xcc] + local_c8 * 0x68);
    if (-1 < local_c8) {
      puVar12 = local_20 + 6;
      local_b4 = iVar8;
      do {
        local_24 = (uint *)puVar12[0x13];
        if ((((byte)*local_20 & 5) == 1) && (((*local_20 & 2) == 0 || ((int)*puVar12 < 5)))) {
          local_8c = 0;
          piVar7 = (int *)param_1[0xd5];
          if (0 < *piVar7) {
            local_b8 = 0;
            do {
              iVar11 = FUN_006b0460(&local_78,(int *)(local_24 + 0x19),
                                    (int *)(local_b8 + 8 + (int)piVar7));
              if ((iVar11 != 0) && (*local_20 = *local_20 | 2, (int)*puVar12 < 5)) {
                if ((puVar12[-5] & 0x40) != 0) {
                  iVar13 = *(int *)(param_1[199] + 0xc + *(int *)(puVar12[0x13] + 0x1c) * 0x114);
                  puVar6 = (uint *)(param_1[0xcc] + iVar13 * 0x68);
                  *puVar6 = *puVar6 | 2;
                }
                iVar11 = FUN_006d1ad0((int *)puVar12,4,local_78,local_74,local_70,local_6c,
                                      local_24[0x1b],local_24[0x1c],0);
                if (iVar11 < 0) {
                  if ((puVar12[-5] & 0x40) != 0) {
                    *(undefined4 *)(param_1[0xcc] + 0x18 + iVar13 * 0x68) = 5;
                  }
                  break;
                }
              }
              local_8c = local_8c + 1;
              local_b8 = local_b8 + 0x10;
              piVar7 = (int *)param_1[0xd5];
            } while (local_8c < *piVar7);
          }
        }
        local_20 = local_20 + -0x1a;
        puVar12 = puVar12 + -0x1a;
        local_b4 = local_b4 + -1;
      } while (local_b4 != 0);
    }
    iVar11 = param_1[0xc9] + -1 + iVar8;
    local_20 = (uint *)(param_1[0xcc] + iVar11 * 0x68);
    if (iVar8 <= iVar11) {
      local_bc = (iVar11 - iVar8) + 1;
      do {
        local_54 = (uint *)(*(int *)((int)local_20 + 100) + 100);
        if ((((*(int *)(*(int *)((int)local_20 + 100) + 0x90) != 0) && ((*local_20 & 0x80) != 0)) &&
            (4 < *(int *)((int)local_20 + 0x18))) &&
           (puVar12 = (uint *)(param_1[0xcc] + local_c8 * 0x68), local_c0 = iVar8, -1 < local_c8)) {
          do {
            if (((((byte)*puVar12 & 7) == 1) || ((int)puVar12[6] < 5)) &&
               (iVar11 = FUN_006b0460(&local_78,(int *)local_54,(int *)(puVar12[0x19] + 100)),
               iVar11 != 0)) {
              *puVar12 = *puVar12 | 2;
              if ((int)puVar12[6] < 5) {
                if ((puVar12[1] & 0x40) != 0) {
                  iVar13 = *(int *)(param_1[199] + 0xc + *(int *)(puVar12[0x19] + 0x1c) * 0x114);
                  puVar6 = (uint *)(param_1[0xcc] + iVar13 * 0x68);
                  *puVar6 = *puVar6 | 2;
                }
                iVar11 = FUN_006d1ad0((int *)(puVar12 + 6),4,local_78,local_74,local_70,local_6c,
                                      *(int *)(puVar12[0x19] + 0x6c),*(int *)(puVar12[0x19] + 0x70),
                                      0);
                if ((iVar11 < 0) && ((puVar12[1] & 0x40) != 0)) {
                  *(undefined4 *)(param_1[0xcc] + 0x18 + iVar13 * 0x68) = 5;
                }
              }
            }
            puVar12 = puVar12 + -0x1a;
            local_c0 = local_c0 + -1;
          } while (local_c0 != 0);
        }
        local_20 = (uint *)((int)local_20 + -0x68);
        local_bc = local_bc + -1;
      } while (local_bc != 0);
    }
    iVar8 = local_c8 * 0x68;
    local_20 = (uint *)(param_1[0xcc] + iVar8);
    while (local_60 = local_c8, -1 < local_c8) {
      local_24 = *(uint **)(param_1[0xcc] + 100 + iVar8);
      bVar2 = false;
      local_54 = local_24 + 0x19;
      if (((*local_20 & 2) == 0) || ((int)local_20[6] < 5)) {
        if ((*local_20 & 0x800) != 0) {
          local_54 = local_20 + 2;
          goto LAB_006ec68d;
        }
      }
      else {
LAB_006ec68d:
        bVar2 = true;
      }
      if (bVar2) {
        puVar12 = (uint *)(param_1[0xcc] + -0x68 + iVar8);
        if (0 < local_c8) {
          do {
            if (((((byte)*puVar12 & 7) == 1) || ((int)puVar12[6] < 5)) &&
               (iVar11 = FUN_006b0460(&local_78,(int *)local_54,(int *)(puVar12[0x19] + 100)),
               iVar11 != 0)) {
              *puVar12 = *puVar12 | 2;
              if ((int)puVar12[6] < 5) {
                if ((puVar12[1] & 0x40) != 0) {
                  iVar13 = *(int *)(param_1[199] + 0xc + *(int *)(puVar12[0x19] + 0x1c) * 0x114);
                  puVar6 = (uint *)(param_1[0xcc] + iVar13 * 0x68);
                  *puVar6 = *puVar6 | 2;
                }
                iVar11 = FUN_006d1ad0((int *)(puVar12 + 6),4,local_78,local_74,local_70,local_6c,
                                      *(int *)(puVar12[0x19] + 0x6c),*(int *)(puVar12[0x19] + 0x70),
                                      0);
                if ((iVar11 < 0) && ((puVar12[1] & 0x40) != 0)) {
                  *(undefined4 *)(param_1[0xcc] + 0x18 + iVar13 * 0x68) = 5;
                }
              }
            }
            puVar12 = puVar12 + -0x1a;
            local_c8 = local_c8 + -1;
          } while (local_c8 != 0);
        }
      }
      else if ((*local_24 & 4) != 0) {
        *local_24 = *local_24 & 0xfffffffe;
      }
      *local_24 = *local_24 & 0xffffd7b3;
      iVar8 = iVar8 + -0x68;
      local_20 = local_20 + -0x1a;
      local_c8 = local_60 + -1;
    }
    iVar13 = 0;
    do {
      iVar8 = FUN_006bbe40(*(int **)(param_1[1] + 0x40),&local_48,&local_44,0);
      local_40 = iVar8;
      if ((iVar8 == 0) || (iVar8 != -0x7789fe3e)) break;
      FUN_006cec40(param_1[1]);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 2);
    if (iVar8 == 0) {
      local_8 = 0;
      iVar13 = 0;
      while (piVar7 = (int *)param_1[0xd4], iVar13 < *piVar7) {
        if ((param_1[0x51] == 0) || (param_1[7] == 0)) {
          local_4c = param_1[10] * piVar7[iVar13 * 4 + 3] + piVar7[iVar13 * 4 + 2];
          local_38 = (piVar7[iVar13 * 4 + 3] + param_1[9]) * local_44 + param_1[8] +
                     piVar7[iVar13 * 4 + 2];
          FUN_006cea60((undefined8 *)(local_38 + local_48),local_44,
                       (undefined8 *)(param_1[3] + local_4c),param_1[10],piVar7[(iVar13 + 1) * 4],
                       piVar7[iVar13 * 4 + 5]);
        }
        else {
          local_50 = piVar7[iVar13 * 4 + 2];
          iVar8 = piVar7[iVar13 * 4 + 3];
          uVar1 = piVar7[(iVar13 + 1) * 4];
          local_88 = piVar7[iVar13 * 4 + 5];
          iVar11 = param_1[0x5d];
          local_5c = iVar8;
          if (iVar8 < iVar11) {
            if (iVar11 < local_88 + iVar8) {
              local_4c = param_1[10] * iVar11 + local_50;
              local_38 = (param_1[9] + iVar11) * local_44 + param_1[8] + local_50;
              FUN_006cea60((undefined8 *)(local_38 + local_48),local_44,
                           (undefined8 *)(param_1[3] + local_4c),param_1[10],uVar1,
                           (local_88 - iVar11) + iVar8);
              local_88 = param_1[0x5d] - iVar8;
            }
            local_4c = param_1[10] * iVar8 + local_50;
            local_38 = (iVar8 + param_1[9]) * local_44 + param_1[8] + local_50;
            iVar8 = param_1[10];
            puVar9 = (undefined8 *)(local_4c + param_1[7]);
          }
          else {
            local_4c = param_1[10] * iVar8 + local_50;
            local_38 = (iVar8 + param_1[9]) * local_44 + param_1[8] + local_50;
            iVar8 = param_1[10];
            puVar9 = (undefined8 *)(param_1[3] + local_4c);
          }
          FUN_006cea60((undefined8 *)(local_38 + local_48),local_44,puVar9,iVar8,uVar1,local_88);
        }
        local_cc = iVar13 + 1;
        iVar8 = iVar13 * 0x10;
        iVar13 = local_cc;
        if ((int *)*param_1 != (int *)0x0) {
          iVar11 = param_1[0xd4];
          FUN_006b5f80((int *)*param_1,*(int *)(iVar8 + 8 + iVar11) + param_1[8],
                       *(int *)(iVar8 + 0xc + iVar11) + param_1[9],
                       *(int *)(local_cc * 0x10 + iVar11),*(int *)(iVar8 + 0x14 + iVar11));
        }
      }
      local_8 = 0xffffffff;
      (**(code **)(**(int **)(param_1[1] + 0x40) + 0x80))(*(int **)(param_1[1] + 0x40),0);
    }
    if (param_1[0xb6] == 0) goto LAB_006ecc3a;
  }
  if ((param_1[0x51] == 0) || (param_1[7] == 0)) {
    iVar13 = param_1[0xd];
    iVar8 = param_1[0xc];
    FUN_007506f0(param_1[1],param_1[8] + iVar8,param_1[9] + iVar13,param_1[3],param_1[10],iVar8,
                 iVar13,param_1[0xe] - iVar8,param_1[0xf] - iVar13);
  }
  else {
    iVar13 = 0;
    do {
      local_40 = FUN_006bbe40(*(int **)(param_1[1] + 0x40),&local_48,&local_44,0);
      if ((local_40 == 0) || (local_40 != -0x7789fe3e)) break;
      FUN_006cec40(param_1[1]);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 2);
    local_8 = 1;
    iVar13 = param_1[0xc];
    iVar8 = param_1[0xd];
    iVar11 = param_1[0xe];
    iVar10 = param_1[0xf] - iVar8;
    iVar5 = param_1[0x5d];
    local_5c = iVar8;
    local_50 = iVar13;
    if (iVar8 < iVar5) {
      if (iVar5 < iVar10 + iVar8) {
        local_4c = param_1[10] * iVar5 + iVar13;
        local_38 = (param_1[9] + iVar5) * local_44 + param_1[8] + iVar13;
        FUN_006cea60((undefined8 *)(local_38 + local_48),local_44,
                     (undefined8 *)(param_1[3] + local_4c),param_1[10],iVar11 - iVar13,
                     (iVar10 - param_1[0x5d]) + iVar8);
        iVar10 = param_1[0x5d] - iVar8;
      }
      local_4c = param_1[10] * iVar8 + iVar13;
      local_38 = (param_1[9] + iVar8) * local_44 + param_1[8];
      iVar8 = param_1[10];
      puVar9 = (undefined8 *)(local_4c + param_1[7]);
    }
    else {
      local_4c = param_1[10] * iVar8 + iVar13;
      local_38 = (param_1[9] + iVar8) * local_44 + param_1[8];
      iVar8 = param_1[10];
      puVar9 = (undefined8 *)(param_1[3] + local_4c);
    }
    local_38 = local_38 + iVar13;
    FUN_006cea60((undefined8 *)(local_38 + local_48),local_44,puVar9,iVar8,iVar11 - iVar13,iVar10);
    local_8 = 0xffffffff;
    (**(code **)(**(int **)(param_1[1] + 0x40) + 0x80))(*(int **)(param_1[1] + 0x40),0);
  }
  if ((int *)*param_1 != (int *)0x0) {
    FUN_006b5f80((int *)*param_1,param_1[8] + param_1[0xc],param_1[9] + param_1[0xd],
                 param_1[0xe] - param_1[0xc],param_1[0xf] - param_1[0xd]);
  }
  iVar13 = param_1[0xca];
  if (-1 < iVar13 + -1) {
    iVar8 = (iVar13 + -1) * 0x68;
    do {
      uVar1 = *(uint *)(param_1[0xcc] + iVar8);
      if (((byte)uVar1 & 5) == 1) {
        *(uint *)(param_1[0xcc] + iVar8) = uVar1 | 0x82;
        *(undefined4 *)(param_1[0xcc] + 0x18 + iVar8) = 5;
      }
      puVar12 = *(uint **)(param_1[0xcc] + 100 + iVar8);
      *puVar12 = *puVar12 & 0xffffd7a2;
      iVar8 = iVar8 + -0x68;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
LAB_006ecc3a:
  *(undefined4 *)param_1[0xd4] = 0;
  *(undefined4 *)(param_1[0xd4] + 4) = 0;
  ExceptionList = local_14;
  return local_40;
}

