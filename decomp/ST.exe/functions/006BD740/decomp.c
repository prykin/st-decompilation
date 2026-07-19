
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006bd740(int *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  InternalExceptionFrame local_60;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d950;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff4c;
  DAT_00854fd4 = param_1;
  DAT_00854fe4 = 0;
  DAT_00854ee8 = *param_1;
  if (param_1[0x6d] == 0) {
    DAT_00854fe4 = 0;
    return 0;
  }
  if ((*(uint *)(DAT_00854ee8 + 0xc) & 0x100) != 0) {
    DAT_00854fe4 = 0;
    return 0;
  }
  if (*(int *)(DAT_00854ee8 + 0x40) == 0) {
    DAT_00854fe4 = 0;
    return 0;
  }
  if (*(int *)(DAT_00854ee8 + 0x44) == 0) {
    DAT_00854fe4 = 0;
    return 0;
  }
  ExceptionList = &local_14;
  puVar1 = &stack0xffffff4c;
  if (*(int *)(DAT_00854ee8 + 0x508) != 0) {
    ExceptionList = &local_14;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_00854ee8 + 0x4f0));
    puVar1 = local_1c;
  }
  local_1c = puVar1;
  if ((*(uint *)(DAT_00854ee8 + 8) & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_00854ee8 + 0x4f0));
  }
  DAT_00854fd4[0x6d] = 0;
  *(undefined4 *)DAT_00854fd4[0x70] = 0;
  *(undefined4 *)(DAT_00854fd4[0x70] + 4) = 0;
  DAT_00854fa0 = DAT_00854fd4[0x68];
  DAT_00854fc0 = DAT_00854fd4[0x6b];
  DAT_00854f98 = DAT_00854fd4[0x76] | DAT_00854fd4[0x6e];
  FUN_006bc630();
  DAT_00854f94 = 0;
  if (DAT_00854fd4[0x77] != 0) {
    DAT_00854f4c = (DAT_00854fd4[DAT_00854fd4[0x79] * 4 + 5] -
                   DAT_00854fd4[DAT_00854fd4[0x79] * 2 + 0x47]) / DAT_00854fd4[0x7b];
    DAT_00854f48 = (DAT_00854fd4[DAT_00854fd4[0x79] * 4 + 6] -
                   DAT_00854fd4[DAT_00854fd4[0x79] * 2 + 0x48]) / DAT_00854fd4[0x7c];
    DAT_00854fa8 = (((DAT_00854fd4[DAT_00854fd4[0x79] * 4 + 5] -
                     DAT_00854fd4[DAT_00854fd4[0x79] * 2 + 0x47]) % DAT_00854fd4[0x7b] -
                    DAT_00854fd4[DAT_00854fd4[0x79] * 4 + 5]) +
                   DAT_00854fd4[DAT_00854fd4[0x79] * 4 + 7]) / DAT_00854fd4[0x7b];
    DAT_00854fa4 = (byte *)(((DAT_00854fd4[(DAT_00854fd4[0x79] + 2) * 4] -
                             DAT_00854fd4[DAT_00854fd4[0x79] * 4 + 6]) +
                            (DAT_00854fd4[DAT_00854fd4[0x79] * 4 + 6] -
                            DAT_00854fd4[DAT_00854fd4[0x79] * 2 + 0x48]) % DAT_00854fd4[0x7c]) /
                           DAT_00854fd4[0x7c]);
    iVar3 = (int)(DAT_00854fd4[0x7d] + 7 + (DAT_00854fd4[0x7d] + 7 >> 0x1f & 7U)) >> 3;
    DAT_00854f40 = DAT_00854fd4[0x84] + iVar3 * DAT_00854f48;
    DAT_00854fcc = DAT_00854fd4[0x88] + iVar3 * DAT_00854f48;
    DAT_00854ee4 = 0;
    piVar9 = DAT_00854fd4;
    DAT_00854fc4 = iVar3;
    if (0 < (int)DAT_00854fa4) {
      do {
        DAT_00854ee0 = 0;
        if (0 < DAT_00854fa8) {
          do {
            uVar6 = DAT_00854ee0 + DAT_00854f4c ^ 7;
            if (((*(byte *)(DAT_00854f40 + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) != 0) ||
               (uVar6 = DAT_00854ee0 + DAT_00854f4c ^ 7,
               (*(byte *)(DAT_00854fcc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) != 0)) {
              _DAT_00854f78 =
                   (DAT_00854ee0 + DAT_00854f4c) * DAT_00854fd4[0x7b] +
                   DAT_00854fd4[DAT_00854fd4[0x79] * 2 + 0x47];
              _DAT_00854f7c =
                   (DAT_00854ee4 + DAT_00854f48) * DAT_00854fd4[0x7c] +
                   DAT_00854fd4[DAT_00854fd4[0x79] * 2 + 0x48];
              _DAT_00854f80 = DAT_00854fd4[0x7b];
              _DAT_00854f84 = DAT_00854fd4[0x7c];
              iVar3 = FUN_006cfeb0((int *)&DAT_00854ef0,(int *)&DAT_00854f78,
                                   DAT_00854fd4 + DAT_00854fd4[0x79] * 4 + 5);
              if (iVar3 != 0) {
                DAT_00854f94 = 1;
                iVar3 = FUN_006d1ad0((int *)DAT_00854fd4[0x70],100,DAT_00854ef0,DAT_00854ef4,
                                     DAT_00854ef8,DAT_00854efc,DAT_00854fd4[3],DAT_00854fd4[4],1);
                if (iVar3 == -1) {
                  DAT_00854f98 = 1;
                }
                iVar3 = DAT_00854fc4;
                piVar9 = DAT_00854fd4;
                if (DAT_00854f98 != 0) break;
              }
            }
            DAT_00854ee0 = DAT_00854ee0 + 1;
            iVar3 = DAT_00854fc4;
            piVar9 = DAT_00854fd4;
          } while ((int)DAT_00854ee0 < DAT_00854fa8);
        }
        DAT_00854f40 = DAT_00854f40 + iVar3;
        DAT_00854fcc = DAT_00854fcc + iVar3;
        DAT_00854ee4 = DAT_00854ee4 + 1;
      } while ((int)DAT_00854ee4 < (int)DAT_00854fa4);
    }
    if (DAT_00854f94 == 0) {
      _DAT_00854f88 = piVar9[0x7d] * DAT_00854f48 + DAT_00854f4c + piVar9[0x81];
      _DAT_00854f18 = piVar9[0x7d] * DAT_00854f48 + piVar9[0x87] + DAT_00854f4c;
      DAT_00854ee4 = 0;
      if (0 < (int)DAT_00854fa4) {
        do {
          DAT_00854ee0 = 0;
          if (0 < DAT_00854fa8) {
            do {
              if (((piVar9[0x81] != 0) &&
                  ((int)(uint)*(byte *)(_DAT_00854f88 + DAT_00854ee0) < piVar9[0x80] + -1)) ||
                 ((piVar9[0x87] != 0 &&
                  ((int)(uint)*(byte *)(_DAT_00854f18 + DAT_00854ee0) < piVar9[0x86] + -1)))) {
                DAT_00854f94 = 1;
                break;
              }
              DAT_00854ee0 = DAT_00854ee0 + 1;
            } while ((int)DAT_00854ee0 < DAT_00854fa8);
          }
          if (DAT_00854f94 != 0) break;
          _DAT_00854f88 = _DAT_00854f88 + piVar9[0x7d];
          _DAT_00854f18 = _DAT_00854f18 + piVar9[0x7d];
          DAT_00854ee4 = DAT_00854ee4 + 1;
        } while ((int)DAT_00854ee4 < (int)DAT_00854fa4);
      }
      if (DAT_00854f94 == 0) goto LAB_006bde01;
    }
    if (piVar9[piVar9[0x79] + 0x5d] == 0) {
      iVar3 = piVar9[0x7d] + 7;
      uVar5 = ((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) * piVar9[0x7e];
      puVar11 = (undefined4 *)piVar9[0x84];
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = 0;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      uVar6 = ((int)(DAT_00854fd4[0x7d] + 7 + (DAT_00854fd4[0x7d] + 7 >> 0x1f & 7U)) >> 3) *
              DAT_00854fd4[0x7e];
      uVar4 = 0;
    }
    else {
      iVar3 = piVar9[0x7d] + 7;
      uVar5 = ((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) * piVar9[0x7e];
      puVar11 = (undefined4 *)piVar9[0x84];
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = 0xff;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      uVar6 = ((int)(DAT_00854fd4[0x7d] + 7 + (DAT_00854fd4[0x7d] + 7 >> 0x1f & 7U)) >> 3) *
              DAT_00854fd4[0x7e];
      uVar4 = 0xffffffff;
    }
    puVar11 = (undefined4 *)DAT_00854fd4[0x88];
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = uVar4;
      puVar11 = puVar11 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)puVar11 = (char)uVar4;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
  }
  piVar9 = DAT_00854fd4;
  if (((DAT_00854f94 != 0) && (DAT_00854f54 = *(int *)DAT_00854fd4[0x6f], DAT_00854f54 != 0)) &&
     (DAT_00854f28 = 0, 0 < DAT_00854f54)) {
    do {
      DAT_00854fd8 = (uint *)(DAT_00854f28 * 0x10 + 8 + DAT_00854fd4[0x6f]);
      iVar3 = FUN_006cfeb0((int *)&DAT_00854ef0,(int *)DAT_00854fd8,
                           DAT_00854fd4 + DAT_00854fd4[0x79] * 4 + 5);
      if (((iVar3 != 0) && (DAT_00854ef0 == *DAT_00854fd8)) &&
         (((DAT_00854ef4 == DAT_00854fd8[1] &&
           ((DAT_00854ef8 == DAT_00854fd8[2] && (DAT_00854efc == DAT_00854fd8[3])))) &&
          (iVar3 = FUN_006bc440((int)DAT_00854fd4,1,*DAT_00854fd8,DAT_00854fd8[1],DAT_00854fd8[2],
                                DAT_00854fd8[3]), iVar3 != 0)))) {
        if (DAT_00854f28 < DAT_00854f54 + -1) {
          puVar8 = DAT_00854fd8 + 4;
          puVar10 = DAT_00854fd8;
          for (iVar3 = ((DAT_00854f54 - DAT_00854f28) - 1U & 0xfffffff) << 2; iVar3 != 0;
              iVar3 = iVar3 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(char *)puVar10 = (char)*puVar8;
            puVar8 = (uint *)((int)puVar8 + 1);
            puVar10 = (uint *)((int)puVar10 + 1);
          }
        }
        *(int *)DAT_00854fd4[0x6f] = *(int *)DAT_00854fd4[0x6f] + -1;
        DAT_00854f54 = *(int *)DAT_00854fd4[0x6f];
        DAT_00854f28 = DAT_00854f28 + -1;
      }
      DAT_00854fd8 = DAT_00854fd8 + 4;
      DAT_00854f28 = DAT_00854f28 + 1;
      piVar9 = DAT_00854fd4;
    } while (DAT_00854f28 < DAT_00854f54);
  }
LAB_006bde01:
  if (DAT_00854f98 == 0) {
    DAT_00854f54 = *(int *)piVar9[0x6f];
    if ((DAT_00854f54 != 0) && (DAT_00854f28 = 0, 0 < DAT_00854f54)) {
      do {
        DAT_00854fd8 = (uint *)(DAT_00854f28 * 0x10 + 8 + piVar9[0x6f]);
        iVar3 = FUN_006cfeb0((int *)&DAT_00854ef0,(int *)DAT_00854fd8,piVar9 + 0x2d);
        if ((iVar3 != 0) &&
           (iVar3 = FUN_006d1ad0((int *)DAT_00854fd4[0x70],100,DAT_00854ef0,DAT_00854ef4,
                                 DAT_00854ef8,DAT_00854efc,DAT_00854fd4[3],DAT_00854fd4[4],1),
           iVar3 == -1)) {
          DAT_00854f98 = 1;
          piVar9 = DAT_00854fd4;
          break;
        }
        DAT_00854fd8 = DAT_00854fd8 + 4;
        DAT_00854f28 = DAT_00854f28 + 1;
        piVar9 = DAT_00854fd4;
      } while (DAT_00854f28 < DAT_00854f54);
    }
    if ((DAT_00854f98 == 0) && (DAT_00854f60 = 0, 0 < DAT_00854fa0)) {
      do {
        DAT_00854f44 = *(uint **)(DAT_00854fc0 + DAT_00854f60 * 4);
        if ((((byte)*DAT_00854f44 & 0xd) == 5) &&
           (iVar3 = FUN_006d1ad0((int *)piVar9[0x70],100,DAT_00854f44[1],DAT_00854f44[2],
                                 DAT_00854f44[3],DAT_00854f44[4],piVar9[3],piVar9[4],1),
           piVar9 = DAT_00854fd4, iVar3 == -1)) {
          DAT_00854f98 = 1;
          break;
        }
        DAT_00854f60 = DAT_00854f60 + 1;
      } while (DAT_00854f60 < DAT_00854fa0);
    }
  }
  iVar3 = DAT_00854fc8;
  local_8 = 0;
  FUN_0072da40();
  local_8 = 0xffffffff;
  iVar7 = 0;
  DAT_00854edc = 0;
  DAT_00854f60 = 0;
  DAT_00854fdc = &stack0xffffff4c;
  puVar1 = &stack0xffffff4c;
  local_1c = &stack0xffffff4c;
  puVar2 = &stack0xffffff4c;
  if (0 < DAT_00854fa0) {
    do {
      local_1c = puVar2;
      DAT_00854fdc = puVar1;
      _DAT_00854f64 = 0;
      DAT_00854f44 = *(uint **)(DAT_00854fc0 + DAT_00854f60 * 4);
      uVar6 = *DAT_00854f44;
      if ((uVar6 & 8) == 0) {
        if ((uVar6 & 0x40) != 0) {
          _DAT_00854f64 = 1;
          goto LAB_006bdfd8;
        }
        *DAT_00854f44 = uVar6 & 0xfffffff8;
        iVar7 = DAT_00854edc;
      }
      else if (DAT_00854f94 != 0) {
LAB_006bdfd8:
        if (iVar7 < iVar3 + 1) {
          *(uint **)(DAT_00854fdc + iVar7 * 4) = DAT_00854f44;
          DAT_00854edc = DAT_00854edc + 1;
          iVar7 = DAT_00854edc;
        }
      }
      DAT_00854f60 = DAT_00854f60 + 1;
      iVar3 = DAT_00854fc8;
      puVar1 = DAT_00854fdc;
      puVar2 = local_1c;
    } while (DAT_00854f60 < DAT_00854fa0);
  }
  DAT_00854fc8 = iVar7;
  FUN_006bd230();
  if ((DAT_00854fd4[0x8b] != 0) && (DAT_00854f98 == 0)) {
    *(undefined4 *)DAT_00854fd4[0x6f] = 0;
    *(undefined4 *)(DAT_00854fd4[0x6f] + 4) = 0;
    DAT_00854f54 = *(int *)DAT_00854fd4[0x70];
    DAT_00854fd8 = (uint *)(DAT_00854fd4[0x70] + 8);
    DAT_00854f28 = 0;
    if (0 < DAT_00854f54) {
      do {
        iVar3 = FUN_006d1ec0((int *)DAT_00854fd4[0x6f],100,*DAT_00854fd8,DAT_00854fd8[1],
                             DAT_00854fd8[2],DAT_00854fd8[3],DAT_00854fd4[3],DAT_00854fd4[4]);
        if (iVar3 == -1) {
          DAT_00854f98 = 1;
          break;
        }
        DAT_00854fd8 = DAT_00854fd8 + 4;
        DAT_00854f28 = DAT_00854f28 + 1;
      } while (DAT_00854f28 < DAT_00854f54);
    }
  }
  if (DAT_00854f98 == 0) {
    iVar3 = DAT_00854fe4;
    if (DAT_00854fd4[0x76] == 0) {
      DAT_00854f54 = *(int *)DAT_00854fd4[0x70];
      DAT_00854fd8 = (uint *)(DAT_00854fd4[0x70] + 8);
      if (DAT_00854fd4[0x8b] == 0) {
        DAT_00854f28 = 0;
        if (0 < DAT_00854f54) {
          do {
            DAT_00854fec = FUN_006bc580(DAT_00854ee8,(int *)DAT_00854fd8);
            if (DAT_00854fe4 == 0) {
              DAT_00854fe4 = DAT_00854fec;
            }
            DAT_00854fd8 = DAT_00854fd8 + 4;
            DAT_00854f28 = DAT_00854f28 + 1;
            iVar3 = DAT_00854fe4;
          } while (DAT_00854f28 < DAT_00854f54);
        }
      }
      else {
        DAT_00854fec = (*(code *)DAT_00854fd4[0x8a])(DAT_00854ee8,DAT_00854fd4[0x8d]);
        iVar3 = DAT_00854fec;
        if (DAT_00854fec == 0) {
          DAT_00854f54 = *(int *)DAT_00854fd4[0x6f];
          DAT_00854fd8 = (uint *)(DAT_00854fd4[0x6f] + 8);
          local_8 = 1;
          for (DAT_00854f28 = 0; DAT_00854f28 < DAT_00854f54; DAT_00854f28 = DAT_00854f28 + 1) {
            DAT_00854fec = (*(code *)DAT_00854fd4[0x8b])(DAT_00854fd8,DAT_00854fd4[0x8d]);
            if (DAT_00854fe4 == 0) {
              DAT_00854fe4 = DAT_00854fec;
            }
            DAT_00854fd8 = DAT_00854fd8 + 4;
          }
          local_8 = 0xffffffff;
          (*(code *)DAT_00854fd4[0x8c])(DAT_00854fd4[0x8d]);
          iVar3 = DAT_00854fe4;
        }
      }
    }
  }
  else {
    FUN_006bd260();
    iVar3 = DAT_00854fe4;
  }
  DAT_00854fe4 = iVar3;
  DAT_00854ed4 = *(uint *)(DAT_00854ee8 + 8) & 0x2000000 | DAT_00854f98;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar3 = __setjmp3(local_60.jumpBuffer,2,FUN_0072da21,0xffffffff);
  if (iVar3 == 0) {
    DAT_00854f00 = 0;
    local_1c = &stack0xffffff4c;
    DAT_00854f60 = DAT_00854fc8;
    while (DAT_00854f60 = DAT_00854f60 + -1, -1 < DAT_00854f60) {
      DAT_00854f44 = *(uint **)(DAT_00854fdc + DAT_00854f60 * 4);
      if ((*DAT_00854f44 & 0xa0005000) == 0) {
        if (DAT_00854f00 == 0) {
          DAT_00854ed8 = 0;
          do {
            DAT_00854fec = FUN_006bbe40(*(int **)(*DAT_00854fd4 + 0x44),&DAT_00854f00,&DAT_00854fe0,
                                        0);
            if ((DAT_00854fec == 0) || (DAT_00854fec != -0x7789fe3e)) break;
            FUN_006cec40(*DAT_00854fd4);
            FUN_006cee60((int)DAT_00854fd4);
            DAT_00854ed8 = DAT_00854ed8 + 1;
          } while (DAT_00854ed8 < 2);
          if (DAT_00854fe4 == 0) {
            DAT_00854fe4 = DAT_00854fec;
          }
          if (DAT_00854fec != 0) break;
        }
      }
      else if (DAT_00854f00 != 0) {
        (**(code **)(**(int **)(*DAT_00854fd4 + 0x44) + 0x80))(*(int **)(*DAT_00854fd4 + 0x44),0);
        DAT_00854f00 = 0;
      }
      if ((*DAT_00854f44 & 8) == 0) {
        if ((*DAT_00854f44 & 2) != 0) {
          DAT_00854f9c = DAT_00854f44[0x14];
          DAT_00854f90 = DAT_00854fd4 + DAT_00854f9c * 4 + 5;
          DAT_00854ee0 = DAT_00854f44[10];
          DAT_00854ee4 = DAT_00854f44[0xb];
          DAT_00854fb8 = DAT_00854f44[0xc];
          DAT_00854fbc = DAT_00854f44[0xd];
          _DAT_00854fb0 = DAT_00854ee0;
          _DAT_00854fb4 = DAT_00854ee4;
          if (4 < (int)DAT_00854f44[0x1a]) {
            FUN_006cfeb0((int *)&DAT_00854ef0,(int *)(DAT_00854f44 + 10),DAT_00854f90);
            DAT_00854f44[1] = DAT_00854ef0;
            DAT_00854f44[2] = DAT_00854ef4;
            DAT_00854f44[3] = DAT_00854ef8;
            DAT_00854f44[4] = DAT_00854efc;
          }
          if ((*DAT_00854f44 & 0x4000) == 0) {
            if (DAT_00854fd4[DAT_00854f9c + 0x3c] != 0) {
              DAT_00854f58 = 0;
              DAT_00854f1c = 0;
              DAT_00854f5c = 0;
              if ((*DAT_00854f44 & 0x1000) == 0) {
                if ((*DAT_00854f44 & 0x2000) != 0) {
                  DAT_00854f1c = 1;
                  DAT_00854f5c = DAT_00854f44[0x18];
                }
              }
              else {
                DAT_00854f1c = 2;
                DAT_00854f5c = DAT_00854f44[0x16];
              }
              DAT_00854f20 = 0;
              DAT_00854f24 = 0;
              uVar6 = *DAT_00854f44;
              if ((uVar6 & 0x60000000) == 0) {
                if ((uVar6 & 0xc0000000) == 0) {
                  if ((uVar6 & 0x5000000) == 0) {
                    DAT_00854f68 = *(uint *)(DAT_00854f44[0x33] + DAT_00854f44[0x31] * 4);
                  }
                  else {
                    DAT_00854f20 = DAT_00854f44[0x30];
                    DAT_00854f68 = DAT_00854f44[0x33] + DAT_00854f44[0x31] * DAT_00854f20 * 10;
                  }
                }
                else {
                  DAT_00854f68 = *(uint *)(DAT_00854f44[0x33] + DAT_00854f44[0x31] * 8);
                  DAT_00854f58 = *(undefined4 *)(DAT_00854f44[0x33] + 4 + DAT_00854f44[0x31] * 8);
                }
              }
              else {
                DAT_00854f24 = ((DAT_00854f44[0x32] - DAT_00854f44[0x31]) + -1) * DAT_00854fbc;
                DAT_00854f68 = DAT_00854f44[0x33];
              }
              DAT_00854f1c = DAT_00854f1c | *DAT_00854f44 & 0xff000100;
              FUN_006bd4b0();
            }
          }
          else if (DAT_00854fd4[DAT_00854f9c + 0x3c] != 0) {
            uVar4 = *(undefined4 *)(DAT_00854ee8 + 0x40);
            *(undefined4 *)(DAT_00854ee8 + 0x40) = *(undefined4 *)(DAT_00854ee8 + 0x44);
            *(undefined4 *)(DAT_00854ee8 + 0x44) = uVar4;
            iVar3 = DAT_00854fd4[DAT_00854f9c * 2 + 0x47];
            iVar7 = DAT_00854fd4[DAT_00854f9c * 2 + 0x48];
            FUN_006d3c30(DAT_00854ee8,DAT_00854ef0,DAT_00854ef4,DAT_00854ef8,DAT_00854efc,&local_88)
            ;
            FUN_006ba7b0(DAT_00854ee8,iVar3,iVar7,&local_70);
            (*(code *)DAT_00854f44[0x33])
                      (DAT_00854ee8,DAT_00854f44[0x10],DAT_00854f44[0x31],DAT_00854ee0 - iVar3,
                       DAT_00854ee4 - iVar7,DAT_00854fb8,DAT_00854fbc,DAT_00854f44[0x30]);
            FUN_006ba7b0(DAT_00854ee8,local_70,local_6c,(undefined4 *)0x0);
            FUN_006d3c30(DAT_00854ee8,local_88,local_84,local_80,local_7c,(undefined4 *)0x0);
            *(undefined4 *)(DAT_00854ee8 + 0x44) = *(undefined4 *)(DAT_00854ee8 + 0x40);
            *(undefined4 *)(DAT_00854ee8 + 0x40) = uVar4;
            if ((DAT_00854ed4 == 0) &&
               (iVar3 = FUN_006d1ad0((int *)DAT_00854fd4[0x70],100,DAT_00854ef0,DAT_00854ef4,
                                     DAT_00854ef8,DAT_00854efc,DAT_00854fd4[3],DAT_00854fd4[4],1),
               iVar3 == -1)) {
              DAT_00854ed4 = 1;
            }
          }
          *DAT_00854f44 = *DAT_00854f44 | 1;
        }
      }
      else {
        DAT_00854fec = FUN_006bf710((int)DAT_00854fd4,DAT_00854f00,DAT_00854fe0,DAT_00854f4c,
                                    DAT_00854f48,DAT_00854fa8,DAT_00854fa4,(int *)&DAT_00854ed4);
        if (DAT_00854fe4 == 0) {
          DAT_00854fe4 = DAT_00854fec;
        }
      }
    }
    if (DAT_00854f00 != 0) {
      (**(code **)(**(int **)(*DAT_00854fd4 + 0x44) + 0x80))(*(int **)(*DAT_00854fd4 + 0x44),0);
    }
  }
  else {
    DAT_00854fec = iVar3;
    local_1c = &stack0xffffff4c;
    if (DAT_00854fe4 == 0) {
      DAT_00854fe4 = iVar3;
      local_1c = &stack0xffffff4c;
    }
  }
  g_currentExceptionFrame = local_60.previous;
  DAT_00854fec = FUN_006bea40(DAT_00854fd4,DAT_00854ed4);
  if ((DAT_00854fec == -0x7789ff60) || (DAT_00854fec == -0x7789fe52)) {
    DAT_00854fec = 0;
  }
  if (DAT_00854fe4 == 0) {
    DAT_00854fe4 = DAT_00854fec;
  }
  DAT_00854fd4[0x6e] = 0;
  *(undefined4 *)DAT_00854fd4[0x6f] = 0;
  *(undefined4 *)(DAT_00854fd4[0x6f] + 4) = 0;
  DAT_00854eec = 0;
  if (0 < DAT_00854fa0) {
    do {
      DAT_00854fd0 = *(uint **)(DAT_00854fc0 + DAT_00854eec * 4);
      if ((*DAT_00854fd0 & 0x20) != 0) {
        DAT_00854f9c = DAT_00854fd0[0x14];
        DAT_00854fd0[10] = DAT_00854fd0[10] - DAT_00854fd4[DAT_00854f9c * 2 + 0x47];
        DAT_00854fd0[0xb] = DAT_00854fd0[0xb] - DAT_00854fd4[DAT_00854f9c * 2 + 0x48];
        DAT_00854fd0[6] = DAT_00854fd0[6] - DAT_00854fd4[DAT_00854f9c * 2 + 0x47];
        DAT_00854fd0[7] = DAT_00854fd0[7] - DAT_00854fd4[DAT_00854f9c * 2 + 0x48];
      }
      if ((*DAT_00854fd0 & 0x400) != 0) {
        DAT_00854fd0[10] = DAT_00854fd0[10] + (DAT_00854fd0[0xc] - 1);
        DAT_00854fd0[0xc] = -DAT_00854fd0[0xc];
        *DAT_00854fd0 = *DAT_00854fd0 & 0xfffffbff;
      }
      if ((*DAT_00854fd0 & 0x800) != 0) {
        DAT_00854fd0[0xb] = DAT_00854fd0[0xb] + (DAT_00854fd0[0xd] - 1);
        DAT_00854fd0[0xd] = -DAT_00854fd0[0xd];
        *DAT_00854fd0 = *DAT_00854fd0 & 0xfffff7ff;
      }
      DAT_00854fd0[5] = DAT_00854fd0[0x31];
      *DAT_00854fd0 = *DAT_00854fd0 & 0xffffffb9;
      DAT_00854eec = DAT_00854eec + 1;
    } while (DAT_00854eec < DAT_00854fa0);
  }
  piVar9 = DAT_00854fd4 + 0x5d;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  if ((undefined4 *)DAT_00854fd4[0x84] != (undefined4 *)0x0) {
    uVar5 = ((int)(DAT_00854fd4[0x7d] + 7 + (DAT_00854fd4[0x7d] + 7 >> 0x1f & 7U)) >> 3) *
            DAT_00854fd4[0x7e];
    puVar11 = (undefined4 *)DAT_00854fd4[0x84];
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
  }
  if ((undefined4 *)DAT_00854fd4[0x88] != (undefined4 *)0x0) {
    uVar5 = ((int)(DAT_00854fd4[0x7d] + 7 + (DAT_00854fd4[0x7d] + 7 >> 0x1f & 7U)) >> 3) *
            DAT_00854fd4[0x7e];
    puVar11 = (undefined4 *)DAT_00854fd4[0x88];
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
  }
  if ((*(uint *)(*DAT_00854fd4 + 8) & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(*DAT_00854fd4 + 0x4f0));
  }
  if (*(HANDLE *)(DAT_00854ee8 + 0x508) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(DAT_00854ee8 + 0x508));
    LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_00854ee8 + 0x4f0));
  }
  if (DAT_00854fe4 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  RaiseInternalException(DAT_00854fe4,DAT_007ed77c,s_E__DKW_DDX_C_ddsmovex_c_007edc8c,0x7df);
  ExceptionList = local_14;
  return DAT_00854fe4;
}

