
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall thunk_FUN_00619c70(void *param_1)

{
  void *pvVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_2c = 0;
  switch(*(undefined4 *)((int)param_1 + 0x93)) {
  case 1:
    iVar10 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)param_1 + 0x11b);
    iVar10 = (*(int *)((int)param_1 + 0x117) * iVar10 * iVar10) / 10000 +
             *(int *)((int)param_1 + 0x113) * iVar10 + *(int *)((int)param_1 + 0xd7);
    sVar2 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      iVar11 = (short)(((short)(iVar10 / 200) + sVar2) -
                      (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar11 = (int)(short)(((short)(iVar10 / 200) + sVar2) -
                           (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
    }
    uVar4 = thunk_FUN_0061b340(param_1,(int)*(short *)((int)param_1 + 0xc9),
                               (int)*(short *)((int)param_1 + 0xcb),iVar11,
                               *(int *)((int)param_1 + 0x9f),*(int *)((int)param_1 + 0xa3),iVar10,
                               &iStack_c);
    switch(uVar4) {
    case 0:
      *(short *)((int)param_1 + 0xcd) = (short)iVar11;
      *(undefined4 *)((int)param_1 + 0xe3) = *(undefined4 *)((int)param_1 + 0xa7);
      *(int *)((int)param_1 + 0xa7) = iVar10;
      return 1;
    case 1:
      *(undefined4 *)((int)param_1 + 0x113) = 0xfffffffd;
      *(undefined4 *)((int)param_1 + 0x11b) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      *(int *)((int)param_1 + 0xd7) = iStack_c;
      *(undefined4 *)((int)param_1 + 0xe3) = *(undefined4 *)((int)param_1 + 0xa7);
      *(int *)((int)param_1 + 0xa7) = iStack_c;
      return 1;
    case 2:
      iVar10 = (int)*(short *)((int)param_1 + 0xc9);
      iVar11 = (int)*(short *)((int)param_1 + 0xcb);
      if ((((-1 < iVar10) && (-1 < iVar11)) && (iVar8 = (int)DAT_007fb240, iVar10 < iVar8)) &&
         ((iVar11 < DAT_007fb242 && (*(char *)(iVar8 * iVar11 + DAT_007fb26c + iVar10) != '\0')))) {
        if ((((&DAT_007fb24c)[*(int *)((int)param_1 + 0x51)] == 0) ||
            (*(char *)(iVar8 * iVar11 + (&DAT_007fb24c)[*(int *)((int)param_1 + 0x51)] + iVar10) ==
             '\0')) &&
           (uVar9 = thunk_FUN_00497030(iVar10,iVar11,*(int *)((int)param_1 + 0x51),1,DAT_007e66ac),
           -1 < (int)uVar9)) {
          *(int *)((int)param_1 + 0xa7) = iStack_c;
          *(undefined4 *)((int)param_1 + 0xaf) = 0;
          thunk_FUN_00637ae0(*(int *)((int)param_1 + 0x9f),*(int *)((int)param_1 + 0xa3),iStack_c);
          goto LAB_00619e5f;
        }
      }
      uVar9 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)param_1 + 0x1c) = uVar9;
      *(uint *)((int)param_1 + 0x113) = (uVar9 >> 0x10) % 0xb + 10;
      *(undefined4 *)((int)param_1 + 0x11b) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      *(int *)((int)param_1 + 0xd7) = iStack_c;
      *(undefined4 *)((int)param_1 + 0xe3) = *(undefined4 *)((int)param_1 + 0xa7);
      *(int *)((int)param_1 + 0xa7) = iStack_c;
      if ((*(void **)((int)param_1 + 0x7d) != (void *)0x0) &&
         (iVar10 = thunk_FUN_00618240(*(void **)((int)param_1 + 0x7d),*(int *)((int)param_1 + 0x9f),
                                      *(int *)((int)param_1 + 0xa3),iStack_c,
                                      (undefined4 *)((int)param_1 + 0x11f)), iVar10 != 0)) {
        if (*(char *)((int)param_1 + 0x14b) != '\0') {
          thunk_FUN_00618900(*(void **)((int)param_1 + 0x7d),*(int *)((int)param_1 + 0x145),0);
        }
        *(undefined1 *)((int)param_1 + 0x14b) = 1;
        iVar10 = thunk_FUN_0061bdb0(param_1,2,*(int *)((int)param_1 + 0x127),
                                    *(int *)((int)param_1 + 299),*(uint *)((int)param_1 + 0x12f));
        if (iVar10 == 0) {
          return 1;
        }
        thunk_FUN_00618900(*(void **)((int)param_1 + 0x7d),*(int *)((int)param_1 + 0x145),1);
        *(undefined4 *)((int)param_1 + 0x93) = 2;
        return 1;
      }
      iVar10 = thunk_FUN_0061ca90(param_1,*(int *)((int)param_1 + 0x9f),
                                  *(int *)((int)param_1 + 0xa3),*(int *)((int)param_1 + 0xa7),
                                  (int *)((int)param_1 + 0x11f));
      if (iVar10 == 0) {
        return 1;
      }
      *(undefined1 *)((int)param_1 + 0x14b) = 1;
      iVar10 = thunk_FUN_0061bdb0(param_1,2,*(int *)((int)param_1 + 0x127),
                                  *(int *)((int)param_1 + 299),*(uint *)((int)param_1 + 0x12f));
      if (iVar10 == 0) {
        return 1;
      }
      *(undefined4 *)((int)param_1 + 0x93) = 2;
      return 1;
    case 3:
      *(int *)((int)param_1 + 0xa7) = iStack_c;
      iVar10 = STJumpMineC::LoadImagJMine(param_1,2);
      if (iVar10 != 0) {
        *(undefined4 *)((int)param_1 + 0x93) = 5;
        *(undefined4 *)((int)param_1 + 0xaf) = 0x19;
        *(undefined4 *)((int)param_1 + 0xc0) = 0xb;
        *(undefined4 *)((int)param_1 + 0xb3) = 0x14;
        *(undefined4 *)((int)param_1 + 0xbc) = 0;
        *(undefined4 *)((int)param_1 + 0xb7) = 0;
        *(undefined4 *)((int)param_1 + 0xab) = 0;
        return 1;
      }
LAB_00619e5f:
      *(undefined4 *)((int)param_1 + 0x93) = 6;
      return 1;
    case 4:
      goto switchD_0061aa5c_caseD_4;
    default:
      return 1;
    }
  case 2:
    iVar10 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)param_1 + 0x11b);
    iStack_1c = (*(int *)((int)param_1 + 0x117) * iVar10 * iVar10) / 10000 +
                *(int *)((int)param_1 + 0x113) * iVar10 + *(int *)((int)param_1 + 0xd7);
    sVar2 = (short)(iStack_1c >> 0x1f);
    if (iStack_1c < 0) {
      iStack_20 = (short)(((short)(iStack_1c / 200) + sVar2) -
                         (short)((longlong)iStack_1c * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iStack_20 = (int)(short)(((short)(iStack_1c / 200) + sVar2) -
                              (short)((longlong)iStack_1c * 0x51eb851f >> 0x3f));
    }
    iVar10 = *(int *)((int)param_1 + 0x10f) * iVar10;
    *(int *)((int)param_1 + 0xf3) = *(int *)((int)param_1 + 0xf3) + *(int *)((int)param_1 + 0x10f);
    iVar11 = (*(int *)((int)param_1 + 0x103) * iVar10) / 10000 + *(int *)((int)param_1 + 0xcf);
    iVar10 = (*(int *)((int)param_1 + 0x107) * iVar10) / 10000 + *(int *)((int)param_1 + 0xd3);
    sVar2 = (short)(iVar11 >> 0x1f);
    if (iVar11 < 0) {
      iStack_28 = (short)(((short)(iVar11 / 0xc9) + sVar2) -
                         (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iStack_28 = (int)(short)(((short)(iVar11 / 0xc9) + sVar2) -
                              (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
    }
    sVar2 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      iStack_24 = (short)(((short)(iVar10 / 0xc9) + sVar2) -
                         (short)((longlong)iVar10 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iStack_24 = (int)(short)(((short)(iVar10 / 0xc9) + sVar2) -
                              (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
    }
    iVar8 = thunk_FUN_0061b340(param_1,iStack_28,iStack_24,iStack_20,iVar11,iVar10,iStack_1c,
                               &iStack_c);
    switch(iVar8) {
    case 0:
      *(undefined4 *)((int)param_1 + 0xdb) = *(undefined4 *)((int)param_1 + 0x9f);
      *(undefined4 *)((int)param_1 + 0xdf) = *(undefined4 *)((int)param_1 + 0xa3);
      *(undefined4 *)((int)param_1 + 0xe3) = *(undefined4 *)((int)param_1 + 0xa7);
      *(undefined2 *)((int)param_1 + 0xc9) = (undefined2)iStack_28;
      *(undefined2 *)((int)param_1 + 0xcb) = (undefined2)iStack_24;
      *(int *)((int)param_1 + 0x9f) = iVar11;
      *(undefined2 *)((int)param_1 + 0xcd) = (undefined2)iStack_20;
      *(int *)((int)param_1 + 0xa3) = iVar10;
      *(int *)((int)param_1 + 0xa7) = iStack_1c;
      break;
    case 1:
      *(undefined4 *)((int)param_1 + 0x113) = 0xfffffffd;
      *(undefined4 *)((int)param_1 + 0x11b) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      *(int *)((int)param_1 + 0xd7) = iStack_c;
      *(undefined4 *)((int)param_1 + 0xe3) = *(undefined4 *)((int)param_1 + 0xa7);
      *(int *)((int)param_1 + 0xcf) = iVar11;
      *(int *)((int)param_1 + 0xd3) = iVar10;
      *(int *)((int)param_1 + 0xa7) = iStack_c;
      iVar10 = thunk_FUN_0061c5f0(param_1,&iStack_30);
      if ((iVar10 < 1) || (299 < *(int *)((int)param_1 + 0x141))) {
        if (iVar10 == 0) {
          iVar10 = thunk_FUN_0061bdb0(param_1,1,*(int *)((int)param_1 + 0x9f),
                                      *(int *)((int)param_1 + 0xa3),*(uint *)((int)param_1 + 0xa7));
          if (iVar10 == 0) {
LAB_0061a4f4:
            thunk_FUN_006192e0(param_1);
          }
          else {
            *(undefined4 *)((int)param_1 + 0x93) = 1;
          }
        }
        else {
LAB_0061a4fd:
          if (iStack_30 != 0) {
            thunk_FUN_0061bdb0(param_1,2,*(int *)((int)param_1 + 0x127),*(int *)((int)param_1 + 299)
                               ,*(uint *)((int)param_1 + 0x12f));
          }
        }
      }
      else {
        iVar10 = thunk_FUN_0061bdb0(param_1,3,*(int *)((int)param_1 + 0x127),
                                    *(int *)((int)param_1 + 299),*(uint *)((int)param_1 + 0x12f));
        if (iVar10 != 0) {
          *(undefined4 *)((int)param_1 + 0x93) = 3;
          thunk_FUN_0061cfb0(param_1,*(int *)((int)param_1 + 0x9f),*(int *)((int)param_1 + 0xa3),
                             0x495);
        }
      }
      break;
    case 2:
      iVar8 = (int)*(short *)((int)param_1 + 0xcb);
      if (((((*(short *)((int)param_1 + 0xc9) < 0) || (iVar8 < 0)) ||
           (iVar6 = (int)DAT_007fb240, iVar6 <= *(short *)((int)param_1 + 0xc9))) ||
          (((DAT_007fb242 <= iVar8 ||
            (iVar7 = (int)*(short *)((int)param_1 + 0xc9),
            *(char *)(iVar6 * iVar8 + DAT_007fb26c + iVar7) == '\0')) ||
           ((iStack_2c = (&DAT_007fb24c)[*(int *)((int)param_1 + 0x51)], iStack_2c != 0 &&
            (*(char *)(iVar6 * *(short *)((int)param_1 + 0xcb) + iStack_2c + iVar7) != '\0')))))) ||
         (uVar9 = thunk_FUN_00497030(iVar7,(int)*(short *)((int)param_1 + 0xcb),
                                     *(int *)((int)param_1 + 0x51),1,DAT_007e66ac), (int)uVar9 < 0))
      {
        *(int *)((int)param_1 + 0x1c) = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
        *(undefined4 *)((int)param_1 + 0x113) = 0xf;
        uVar9 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)param_1 + 0x1c) = uVar9;
        *(uint *)((int)param_1 + 0x10f) = (uVar9 >> 0x10 & 1) + 7;
        *(undefined4 *)((int)param_1 + 0x11b) = *(undefined4 *)(DAT_00802a38 + 0xe4);
        *(int *)((int)param_1 + 0xd7) = iStack_c;
        *(undefined4 *)((int)param_1 + 0xe3) = *(undefined4 *)((int)param_1 + 0xa7);
        *(int *)((int)param_1 + 0xcf) = iVar11;
        *(int *)((int)param_1 + 0xd3) = iVar10;
        *(int *)((int)param_1 + 0xa7) = iStack_c;
        iVar10 = thunk_FUN_0061c5f0(param_1,&iStack_30);
        if ((iVar10 < 1) || (299 < *(int *)((int)param_1 + 0x141))) {
          if (iVar10 != 0) goto LAB_0061a4fd;
          iVar10 = thunk_FUN_0061bdb0(param_1,1,*(int *)((int)param_1 + 0x9f),
                                      *(int *)((int)param_1 + 0xa3),*(uint *)((int)param_1 + 0xa7));
          if (iVar10 == 0) goto LAB_0061a4f4;
          *(undefined4 *)((int)param_1 + 0x93) = 1;
        }
        else {
          iVar10 = thunk_FUN_0061bdb0(param_1,3,*(int *)((int)param_1 + 0x127),
                                      *(int *)((int)param_1 + 299),*(uint *)((int)param_1 + 0x12f));
          if (iVar10 != 0) {
            *(undefined4 *)((int)param_1 + 0x93) = 3;
            thunk_FUN_0061cfb0(param_1,*(int *)((int)param_1 + 0x9f),*(int *)((int)param_1 + 0xa3),
                               0x495);
          }
        }
      }
      else {
        *(int *)((int)param_1 + 0x9f) = iVar11;
        *(int *)((int)param_1 + 0xa3) = iVar10;
        *(int *)((int)param_1 + 0xa7) = iStack_c;
        *(undefined4 *)((int)param_1 + 0xaf) = 0;
        thunk_FUN_00637ae0(*(int *)((int)param_1 + 0x9f),iVar10,iStack_c);
        *(undefined4 *)((int)param_1 + 0x93) = 6;
      }
      break;
    case 3:
      if (iVar8 == 4) {
        return iStack_2c;
      }
      break;
    case 4:
      goto switchD_0061aa5c_caseD_4;
    }
    if (*(int *)((int)param_1 + 0xf3) < *(int *)((int)param_1 + 0xf7)) {
      return 1;
    }
    uVar9 = *(uint *)((int)param_1 + 0xa7);
    iVar10 = *(int *)((int)param_1 + 0xa3);
    iVar11 = *(int *)((int)param_1 + 0x9f);
    goto LAB_0061a55d;
  case 3:
    iStack_30 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)param_1 + 0x11b);
    uVar9 = (*(int *)((int)param_1 + 0x113) * iStack_30) / 10000 +
            (*(int *)((int)param_1 + 0x117) * iStack_30 * iStack_30) / 10000 +
            *(int *)((int)param_1 + 0xd7);
    sVar2 = (short)((int)uVar9 >> 0x1f);
    if ((int)uVar9 < 0) {
      iStack_14 = (int)(short)(((short)((int)uVar9 / 200) + sVar2) -
                              (short)((longlong)(int)uVar9 * 0x51eb851f >> 0x3f));
      iStack_20 = iStack_14 + -1;
    }
    else {
      iStack_20 = (int)(short)(((short)((int)uVar9 / 200) + sVar2) -
                              (short)((longlong)(int)uVar9 * 0x51eb851f >> 0x3f));
      iStack_14 = iStack_20;
    }
    iVar10 = (*(int *)((int)param_1 + 0x10f) * iStack_30) / 100;
    *(int *)((int)param_1 + 0xf3) = *(int *)((int)param_1 + 0xf3) + *(int *)((int)param_1 + 0x10f);
    iVar11 = (*(int *)((int)param_1 + 0x103) * iVar10) / 10000 + *(int *)((int)param_1 + 0xcf);
    iStack_8 = (*(int *)((int)param_1 + 0x107) * iVar10) / 10000 + *(int *)((int)param_1 + 0xd3);
    sVar2 = (short)(iVar11 >> 0x1f);
    if (iVar11 < 0) {
      iStack_10 = (int)(short)(((short)(iVar11 / 0xc9) + sVar2) -
                              (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
      iStack_28 = iStack_10 + -1;
    }
    else {
      iStack_28 = (int)(short)(((short)(iVar11 / 0xc9) + sVar2) -
                              (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
      iStack_10 = iStack_28;
    }
    sVar2 = (short)(iStack_8 >> 0x1f);
    if (iStack_8 < 0) {
      iStack_18 = (int)(short)(((short)(iStack_8 / 0xc9) + sVar2) -
                              (short)((longlong)iStack_8 * 0x28c1979 >> 0x3f));
      iStack_24 = iStack_18 + -1;
    }
    else {
      iStack_18 = (int)(short)(((short)(iStack_8 / 0xc9) + sVar2) -
                              (short)((longlong)iStack_8 * 0x28c1979 >> 0x3f));
      iStack_24 = iStack_18;
    }
    if ((iStack_30 < 3) ||
       (uVar5 = thunk_FUN_00601500((void *)((int)param_1 + 0x20),iVar11,iStack_8,uVar9,
                                   *(int *)((int)param_1 + 0xdb),*(int *)((int)param_1 + 0xdf),
                                   *(int *)((int)param_1 + 0xe3),*(int *)((int)param_1 + 0x51),
                                   DAT_007e66ac,*(int *)((int)param_1 + 0x85),
                                   *(undefined2 *)((int)param_1 + 0x89),0xb3,0,0), (int)uVar5 < 1))
    {
      sVar3 = (short)iStack_18;
      *(undefined4 *)((int)param_1 + 0xdb) = *(undefined4 *)((int)param_1 + 0x9f);
      *(undefined4 *)((int)param_1 + 0xdf) = *(undefined4 *)((int)param_1 + 0xa3);
      *(undefined4 *)((int)param_1 + 0xe3) = *(undefined4 *)((int)param_1 + 0xa7);
      sVar2 = (short)iStack_10;
      *(int *)((int)param_1 + 0x9f) = iVar11;
      *(int *)((int)param_1 + 0xa3) = iStack_8;
      *(uint *)((int)param_1 + 0xa7) = uVar9;
      if (iVar11 < 0) {
        sVar2 = sVar2 + -1;
      }
      *(short *)((int)param_1 + 0xc9) = sVar2;
      if (iStack_8 < 0) {
        sVar3 = sVar3 + -1;
      }
      *(short *)((int)param_1 + 0xcb) = sVar3;
      sVar2 = (short)iStack_14;
      if ((int)uVar9 < 0) {
        sVar2 = sVar2 + -1;
      }
      *(short *)((int)param_1 + 0xcd) = sVar2;
      if (*(int *)((int)param_1 + 0x93) == 3) {
        TraksClassTy::TraksCreate(DAT_00802a7c,1,1,0,iVar11,iStack_8,uVar9,0,0,0,0,0,0,-1,0,0);
      }
      return 1;
    }
    if (uVar5 != 5) {
      iVar10 = thunk_FUN_0061c910(param_1,uVar5,*(int *)((int)param_1 + 0x93),iStack_28,iStack_24,
                                  iStack_20,iVar11,iStack_8,uVar9);
      *(int *)((int)param_1 + 0x93) = iVar10;
      if (iVar10 == 5) {
        thunk_FUN_0061cfb0(param_1,*(int *)((int)param_1 + 0x9f),*(int *)((int)param_1 + 0xa3),0x496
                          );
        *(undefined4 *)((int)param_1 + 0xaf) = 0x19;
        *(undefined4 *)((int)param_1 + 0xc0) = 0xb;
        *(undefined4 *)((int)param_1 + 0xb3) = 0x14;
        *(undefined4 *)((int)param_1 + 0xbc) = 0;
        *(undefined4 *)((int)param_1 + 0xb7) = 0;
        *(undefined4 *)((int)param_1 + 0xab) = 0;
        return iStack_2c;
      }
      *(undefined4 *)((int)param_1 + 0xdb) = *(undefined4 *)((int)param_1 + 0x9f);
      *(undefined4 *)((int)param_1 + 0xe3) = *(undefined4 *)((int)param_1 + 0xa7);
      *(int *)((int)param_1 + 0x9f) = iVar11;
      *(undefined4 *)((int)param_1 + 0xdf) = *(undefined4 *)((int)param_1 + 0xa3);
      *(int *)((int)param_1 + 0xa3) = iStack_8;
      *(uint *)((int)param_1 + 0xa7) = uVar9;
      sVar2 = (short)iStack_10;
      if (iVar11 < 0) {
        sVar2 = sVar2 + -1;
      }
      *(short *)((int)param_1 + 0xc9) = sVar2;
      sVar2 = (short)iStack_18;
      if (iStack_8 < 0) {
        sVar2 = sVar2 + -1;
      }
      *(short *)((int)param_1 + 0xcb) = sVar2;
      sVar2 = (short)iStack_14;
      if ((int)uVar9 < 0) {
        sVar2 = sVar2 + -1;
      }
      *(short *)((int)param_1 + 0xcd) = sVar2;
      if (*(int *)((int)param_1 + 0x93) != 1) {
        return 1;
      }
      iVar10 = *(int *)((int)param_1 + 0xa3);
      iVar11 = *(int *)((int)param_1 + 0x9f);
      goto LAB_0061a55d;
    }
    break;
  case 4:
    iVar11 = (*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)param_1 + 0x11b)) *
             *(int *)((int)param_1 + 0x10f);
    iVar10 = (*(int *)((int)param_1 + 0x103) * iVar11) / 10000 + *(int *)((int)param_1 + 0xcf);
    iStack_8 = (*(int *)((int)param_1 + 0x107) * iVar11) / 10000 + *(int *)((int)param_1 + 0xd3);
    iStack_1c = (*(int *)((int)param_1 + 0x10b) * iVar11) / 10000 + *(int *)((int)param_1 + 0xd7);
    sVar2 = (short)(iStack_1c >> 0x1f);
    if (iStack_1c < 0) {
      iStack_14 = (int)(short)(((short)(iStack_1c / 200) + sVar2) -
                              (short)((longlong)iStack_1c * 0x51eb851f >> 0x3f));
      iStack_30 = iStack_14 + -1;
    }
    else {
      iStack_30 = (int)(short)(((short)(iStack_1c / 200) + sVar2) -
                              (short)((longlong)iStack_1c * 0x51eb851f >> 0x3f));
      iStack_14 = iStack_30;
    }
    sVar2 = (short)(iStack_8 >> 0x1f);
    if (iStack_8 < 0) {
      iStack_18 = (int)(short)(((short)(iStack_8 / 0xc9) + sVar2) -
                              (short)((longlong)iStack_8 * 0x28c1979 >> 0x3f));
      iVar8 = iStack_18 + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iStack_8 / 0xc9) + sVar2) -
                          (short)((longlong)iStack_8 * 0x28c1979 >> 0x3f));
      iStack_18 = iVar8;
    }
    sVar2 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      iStack_10 = (int)(short)(((short)(iVar10 / 0xc9) + sVar2) -
                              (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
      iVar6 = iStack_10 + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar10 / 0xc9) + sVar2) -
                          (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
      iStack_10 = iVar6;
    }
    iStack_28 = thunk_FUN_0061b340(param_1,iVar6,iVar8,iStack_30,iVar10,iStack_8,iStack_1c,&iStack_c
                                  );
    switch(iStack_28) {
    case 0:
      *(undefined4 *)((int)param_1 + 0xdb) = *(undefined4 *)((int)param_1 + 0x9f);
      *(undefined4 *)((int)param_1 + 0xdf) = *(undefined4 *)((int)param_1 + 0xa3);
      *(undefined4 *)((int)param_1 + 0xe3) = *(undefined4 *)((int)param_1 + 0xa7);
      sVar2 = (short)iStack_10;
      *(int *)((int)param_1 + 0x9f) = iVar10;
      *(int *)((int)param_1 + 0xa3) = iStack_8;
      *(int *)((int)param_1 + 0xa7) = iStack_1c;
      if (iVar10 < 0) {
        sVar2 = sVar2 + -1;
      }
      *(short *)((int)param_1 + 0xc9) = sVar2;
      sVar2 = (short)iStack_18;
      if (iStack_8 < 0) {
        sVar2 = sVar2 + -1;
      }
      *(short *)((int)param_1 + 0xcb) = sVar2;
      if (iStack_1c < 0) {
        *(short *)((int)param_1 + 0xcd) = (short)iStack_14 + -1;
      }
      else {
        *(short *)((int)param_1 + 0xcd) = (short)iStack_14;
      }
      break;
    case 1:
    case 2:
      thunk_FUN_0061bdb0(param_1,1,*(int *)((int)param_1 + 0x9f),*(int *)((int)param_1 + 0xa3),
                         *(uint *)((int)param_1 + 0xa7));
    default:
      if (iStack_28 == 4) {
        return iStack_2c;
      }
      break;
    case 3:
      *(int *)((int)param_1 + 0xa7) = iStack_c;
      *(int *)((int)param_1 + 0x9f) = iVar10;
      *(int *)((int)param_1 + 0xa3) = iStack_8;
      iVar10 = STJumpMineC::LoadImagJMine(param_1,2);
      *(uint *)((int)param_1 + 0x93) = 6 - (uint)(iVar10 != 0);
      break;
    case 4:
      goto switchD_0061aa5c_caseD_4;
    }
    if (iVar11 < *(int *)((int)param_1 + 0xf7)) {
      return 1;
    }
    uVar9 = *(uint *)((int)param_1 + 0xa7);
    iVar10 = *(int *)((int)param_1 + 0xa3);
    iVar11 = *(int *)((int)param_1 + 0x9f);
LAB_0061a55d:
    iStack_2c = 1;
    iVar10 = thunk_FUN_0061bdb0(param_1,1,iVar11,iVar10,uVar9);
    if (iVar10 != 0) {
      *(undefined4 *)((int)param_1 + 0x93) = 1;
      return iStack_2c;
    }
    break;
  case 5:
    if ((*(char *)((int)param_1 + 0x14b) != '\0') &&
       (*(void **)((int)param_1 + 0x7d) != (void *)0x0)) {
      thunk_FUN_00618900(*(void **)((int)param_1 + 0x7d),*(int *)((int)param_1 + 0x145),0);
      *(undefined1 *)((int)param_1 + 0x14b) = 0;
    }
    if ((int)*(uint **)((int)param_1 + 0x97) < 0) {
      *(undefined4 *)((int)param_1 + 0x93) = 6;
      return iStack_2c;
    }
    if (0x10 < *(int *)((int)param_1 + 0xab)) {
      if (*(int *)((int)param_1 + 0xab) == 0x11) {
        FUN_006e9cb0(DAT_00807598,*(uint **)((int)param_1 + 0x97),2);
      }
      FUN_006ea270(DAT_00807598,*(uint *)((int)param_1 + 0x97),2,*(uint *)((int)param_1 + 0xb7));
      if (*(int *)((int)param_1 + 0xb7) < *(int *)((int)param_1 + 0xb3)) {
        *(int *)((int)param_1 + 0xb7) = *(int *)((int)param_1 + 0xb7) + 1;
      }
    }
    if (*(char *)((int)param_1 + 0xbb) != '\0') {
      if (*(uint *)((int)param_1 + 0xbc) == *(uint *)((int)param_1 + 0xc0)) {
        *(undefined1 *)((int)param_1 + 0xbb) = 0;
        FUN_006e9d40(DAT_00807598,*(uint **)((int)param_1 + 0x97),1);
      }
      else {
        FUN_006ea270(DAT_00807598,*(uint *)((int)param_1 + 0x97),1,*(uint *)((int)param_1 + 0xbc));
        *(int *)((int)param_1 + 0xbc) = *(int *)((int)param_1 + 0xbc) + 1;
      }
    }
    uVar9 = *(uint *)((int)param_1 + 0xab);
    if ((int)uVar9 < (int)*(uint *)((int)param_1 + 0xaf)) {
      FUN_006ea270(DAT_00807598,*(uint *)((int)param_1 + 0x97),0,uVar9);
LAB_0061acc2:
      *(int *)((int)param_1 + 0xab) = *(int *)((int)param_1 + 0xab) + 1;
    }
    else if (uVar9 == *(uint *)((int)param_1 + 0xaf)) {
      if (-1 < (int)*(uint **)((int)param_1 + 0x97)) {
        FUN_006e9d40(DAT_00807598,*(uint **)((int)param_1 + 0x97),0);
      }
      goto LAB_0061acc2;
    }
    FUN_006ea960(DAT_00807598,*(uint *)((int)param_1 + 0x97),
                 (float)*(int *)((int)param_1 + 0x9f) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)((int)param_1 + 0xa3) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)((int)param_1 + 0xa7) * _DAT_007904f8 * _DAT_007904f0 +
                 _DAT_007904fc);
    if (*(int *)((int)param_1 + 0xb7) == *(int *)((int)param_1 + 0xb3)) {
      if (-1 < (int)*(uint *)((int)param_1 + 0x97)) {
        FUN_006eab60(DAT_00807598,*(uint *)((int)param_1 + 0x97));
      }
      *(undefined4 *)((int)param_1 + 0x93) = 6;
    }
    pvVar1 = DAT_00802a88;
    if (DAT_00802a88 != (void *)0x0) {
      iVar10 = (int)*(short *)((int)param_1 + 0xcd);
      if ((((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
            (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                                (int)*(short *)((int)param_1 + 0xc9),
                                (int)*(short *)((int)param_1 + 0xcb),&iStack_28,&iStack_24),
            iVar10 < 0)) || ((4 < iVar10 || (iStack_28 < 0)))) ||
          (*(int *)((int)pvVar1 + 0x30) <= iStack_28)) ||
         (((iStack_24 = (&DAT_0079aed0)[iVar10] + iStack_24, iStack_24 < 0 ||
           (*(int *)((int)pvVar1 + 0x34) <= iStack_24)) ||
          ((*(int *)((int)pvVar1 + 0x4c) == 0 ||
           (*(char *)(iStack_24 * *(int *)((int)pvVar1 + 0x30) + iStack_28 +
                     *(int *)((int)pvVar1 + 0x4c)) != '\0')))))) {
        if (*(char *)((int)param_1 + 0xc4) == '\0') {
          FUN_006eaaa0(DAT_00807598,*(uint *)((int)param_1 + 0x97),0);
          *(undefined1 *)((int)param_1 + 0xc4) = 1;
          return iStack_2c;
        }
      }
      else if (*(char *)((int)param_1 + 0xc4) != '\0') {
        FUN_006eab60(DAT_00807598,*(uint *)((int)param_1 + 0x97));
        *(undefined1 *)((int)param_1 + 0xc4) = 0;
        return iStack_2c;
      }
    }
    goto switchD_00619c92_default;
  case 6:
    break;
  default:
    goto switchD_00619c92_default;
  }
  thunk_FUN_006192e0(param_1);
switchD_00619c92_default:
  return iStack_2c;
switchD_0061aa5c_caseD_4:
  if (-1 < (int)*(uint *)((int)param_1 + 0x97)) {
    FUN_006eab60(DAT_00807598,*(uint *)((int)param_1 + 0x97));
    *(undefined1 *)((int)param_1 + 0xc4) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x93) = 6;
  return iStack_2c;
}

