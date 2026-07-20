
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00619c70(STJumpMineC *param_1)

{
  VisibleClassTy *pVVar1;
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
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_2c = 0;
  switch(param_1->field_0093) {
  case 1:
    iVar10 = PTR_00802a38->field_00E4 - *(int *)&param_1->field_0x11b;
    iVar10 = (*(int *)&param_1->field_0x117 * iVar10 * iVar10) / 10000 +
             *(int *)&param_1->field_0x113 * iVar10 + *(int *)&param_1->field_0xd7;
    sVar2 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      iVar11 = (short)(((short)(iVar10 / 200) + sVar2) -
                      (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar11 = (int)(short)(((short)(iVar10 / 200) + sVar2) -
                           (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
    }
    uVar4 = thunk_FUN_0061b340(param_1,(int)param_1->field_00C9,(int)param_1->field_00CB,iVar11,
                               param_1->field_009F,param_1->field_00A3,iVar10,&local_c);
    switch(uVar4) {
    case 0:
      param_1->field_00CD = (short)iVar11;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      param_1->field_00A7 = iVar10;
      return 1;
    case 1:
      *(undefined4 *)&param_1->field_0x113 = 0xfffffffd;
      *(undefined4 *)&param_1->field_0x11b = PTR_00802a38->field_00E4;
      *(int *)&param_1->field_0xd7 = local_c;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      param_1->field_00A7 = local_c;
      return 1;
    case 2:
      iVar10 = (int)param_1->field_00C9;
      iVar11 = (int)param_1->field_00CB;
      if ((((-1 < iVar10) && (-1 < iVar11)) && (iVar8 = (int)SHORT_007fb240, iVar10 < iVar8)) &&
         ((iVar11 < SHORT_007fb242 && (*(char *)(iVar8 * iVar11 + DAT_007fb26c + iVar10) != '\0'))))
      {
        if ((((&DAT_007fb24c)[*(int *)&param_1->field_0x51] == 0) ||
            (*(char *)(iVar8 * iVar11 + (&DAT_007fb24c)[*(int *)&param_1->field_0x51] + iVar10) ==
             '\0')) &&
           (uVar9 = thunk_FUN_00497030(iVar10,iVar11,*(int *)&param_1->field_0x51,1,DAT_007e66ac),
           -1 < (int)uVar9)) {
          param_1->field_00A7 = local_c;
          param_1->field_00AF = 0;
          thunk_FUN_00637ae0(param_1->field_009F,param_1->field_00A3,local_c);
          goto LAB_00619e5f;
        }
      }
      uVar9 = param_1->field_001C * 0x41c64e6d + 0x3039;
      param_1->field_001C = uVar9;
      *(uint *)&param_1->field_0x113 = (uVar9 >> 0x10) % 0xb + 10;
      *(undefined4 *)&param_1->field_0x11b = PTR_00802a38->field_00E4;
      *(int *)&param_1->field_0xd7 = local_c;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      param_1->field_00A7 = local_c;
      if (((void *)param_1->field_007D != (void *)0x0) &&
         (iVar10 = thunk_FUN_00618240((void *)param_1->field_007D,param_1->field_009F,
                                      param_1->field_00A3,local_c,
                                      (undefined4 *)&param_1->field_0x11f), iVar10 != 0)) {
        if (param_1->field_014B != '\0') {
          thunk_FUN_00618900((void *)param_1->field_007D,param_1->field_0145,0);
        }
        param_1->field_014B = 1;
        iVar10 = thunk_FUN_0061bdb0(param_1,CASE_2,*(int *)&param_1->field_0x127,
                                    *(int *)&param_1->field_0x12b,*(uint *)&param_1->field_0x12f);
        if (iVar10 == 0) {
          return 1;
        }
        thunk_FUN_00618900((void *)param_1->field_007D,param_1->field_0145,1);
        param_1->field_0093 = 2;
        return 1;
      }
      iVar10 = thunk_FUN_0061ca90(param_1,param_1->field_009F,param_1->field_00A3,
                                  param_1->field_00A7,(int *)&param_1->field_0x11f);
      if (iVar10 == 0) {
        return 1;
      }
      param_1->field_014B = 1;
      iVar10 = thunk_FUN_0061bdb0(param_1,CASE_2,*(int *)&param_1->field_0x127,
                                  *(int *)&param_1->field_0x12b,*(uint *)&param_1->field_0x12f);
      if (iVar10 == 0) {
        return 1;
      }
      param_1->field_0093 = 2;
      return 1;
    case 3:
      param_1->field_00A7 = local_c;
      iVar10 = STJumpMineC::LoadImagJMine(param_1,2);
      if (iVar10 != 0) {
        param_1->field_0093 = 5;
        param_1->field_00AF = 0x19;
        param_1->field_00C0 = 0xb;
        param_1->field_00B3 = 0x14;
        param_1->field_00BC = 0;
        param_1->field_00B7 = 0;
        param_1->field_00AB = 0;
        return 1;
      }
LAB_00619e5f:
      param_1->field_0093 = 6;
      return 1;
    case 4:
      goto cf_common_exit_0061AB3A;
    default:
      return 1;
    }
  case 2:
    iVar10 = PTR_00802a38->field_00E4 - *(int *)&param_1->field_0x11b;
    local_1c = (*(int *)&param_1->field_0x117 * iVar10 * iVar10) / 10000 +
               *(int *)&param_1->field_0x113 * iVar10 + *(int *)&param_1->field_0xd7;
    sVar2 = (short)(local_1c >> 0x1f);
    if (local_1c < 0) {
      local_20 = (short)(((short)(local_1c / 200) + sVar2) -
                        (short)((longlong)local_1c * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_20 = (int)(short)(((short)(local_1c / 200) + sVar2) -
                             (short)((longlong)local_1c * 0x51eb851f >> 0x3f));
    }
    iVar10 = *(int *)&param_1->field_0x10f * iVar10;
    *(int *)&param_1->field_0xf3 = *(int *)&param_1->field_0xf3 + *(int *)&param_1->field_0x10f;
    iVar11 = (*(int *)&param_1->field_0x103 * iVar10) / 10000 + *(int *)&param_1->field_0xcf;
    iVar10 = (*(int *)&param_1->field_0x107 * iVar10) / 10000 + *(int *)&param_1->field_0xd3;
    sVar2 = (short)(iVar11 >> 0x1f);
    if (iVar11 < 0) {
      local_28 = (short)(((short)(iVar11 / 0xc9) + sVar2) -
                        (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_28 = (int)(short)(((short)(iVar11 / 0xc9) + sVar2) -
                             (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
    }
    sVar2 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      local_24 = (short)(((short)(iVar10 / 0xc9) + sVar2) -
                        (short)((longlong)iVar10 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_24 = (int)(short)(((short)(iVar10 / 0xc9) + sVar2) -
                             (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
    }
    iVar8 = thunk_FUN_0061b340(param_1,local_28,local_24,local_20,iVar11,iVar10,local_1c,&local_c);
    switch(iVar8) {
    case 0:
      *(int *)&param_1->field_0xdb = param_1->field_009F;
      *(int *)&param_1->field_0xdf = param_1->field_00A3;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      param_1->field_00C9 = (short)local_28;
      param_1->field_00CB = (short)local_24;
      param_1->field_009F = iVar11;
      param_1->field_00CD = (short)local_20;
      param_1->field_00A3 = iVar10;
      param_1->field_00A7 = local_1c;
      break;
    case 1:
      *(undefined4 *)&param_1->field_0x113 = 0xfffffffd;
      *(undefined4 *)&param_1->field_0x11b = PTR_00802a38->field_00E4;
      *(int *)&param_1->field_0xd7 = local_c;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      *(int *)&param_1->field_0xcf = iVar11;
      *(int *)&param_1->field_0xd3 = iVar10;
      param_1->field_00A7 = local_c;
      iVar10 = thunk_FUN_0061c5f0(param_1,&local_30);
      if ((iVar10 < 1) || (299 < *(int *)&param_1->field_0x141)) {
        if (iVar10 == 0) {
          iVar10 = thunk_FUN_0061bdb0(param_1,CASE_1,param_1->field_009F,param_1->field_00A3,
                                      param_1->field_00A7);
          if (iVar10 == 0) {
LAB_0061a4f4:
            thunk_FUN_006192e0((STJellyGunC *)param_1);
          }
          else {
            param_1->field_0093 = 1;
          }
        }
        else {
LAB_0061a4fd:
          if (local_30 != 0) {
            thunk_FUN_0061bdb0(param_1,CASE_2,*(int *)&param_1->field_0x127,
                               *(int *)&param_1->field_0x12b,*(uint *)&param_1->field_0x12f);
          }
        }
      }
      else {
        iVar10 = thunk_FUN_0061bdb0(param_1,CASE_3,*(int *)&param_1->field_0x127,
                                    *(int *)&param_1->field_0x12b,*(uint *)&param_1->field_0x12f);
        if (iVar10 != 0) {
          param_1->field_0093 = 3;
          thunk_FUN_0061cfb0(param_1,param_1->field_009F,param_1->field_00A3,0x495);
        }
      }
      break;
    case 2:
      iVar8 = (int)param_1->field_00CB;
      if (((((param_1->field_00C9 < 0) || (iVar8 < 0)) ||
           (iVar6 = (int)SHORT_007fb240, iVar6 <= param_1->field_00C9)) ||
          (((SHORT_007fb242 <= iVar8 ||
            (iVar7 = (int)param_1->field_00C9,
            *(char *)(iVar6 * iVar8 + DAT_007fb26c + iVar7) == '\0')) ||
           ((local_2c = (&DAT_007fb24c)[*(int *)&param_1->field_0x51], local_2c != 0 &&
            (*(char *)(iVar6 * param_1->field_00CB + local_2c + iVar7) != '\0')))))) ||
         (uVar9 = thunk_FUN_00497030(iVar7,(int)param_1->field_00CB,*(int *)&param_1->field_0x51,1,
                                     DAT_007e66ac), (int)uVar9 < 0)) {
        param_1->field_001C = param_1->field_001C * 0x41c64e6d + 0x3039;
        *(undefined4 *)&param_1->field_0x113 = 0xf;
        uVar9 = param_1->field_001C * 0x41c64e6d + 0x3039;
        param_1->field_001C = uVar9;
        *(uint *)&param_1->field_0x10f = (uVar9 >> 0x10 & 1) + 7;
        *(undefined4 *)&param_1->field_0x11b = PTR_00802a38->field_00E4;
        *(int *)&param_1->field_0xd7 = local_c;
        *(int *)&param_1->field_0xe3 = param_1->field_00A7;
        *(int *)&param_1->field_0xcf = iVar11;
        *(int *)&param_1->field_0xd3 = iVar10;
        param_1->field_00A7 = local_c;
        iVar10 = thunk_FUN_0061c5f0(param_1,&local_30);
        if ((iVar10 < 1) || (299 < *(int *)&param_1->field_0x141)) {
          if (iVar10 != 0) goto LAB_0061a4fd;
          iVar10 = thunk_FUN_0061bdb0(param_1,CASE_1,param_1->field_009F,param_1->field_00A3,
                                      param_1->field_00A7);
          if (iVar10 == 0) goto LAB_0061a4f4;
          param_1->field_0093 = 1;
        }
        else {
          iVar10 = thunk_FUN_0061bdb0(param_1,CASE_3,*(int *)&param_1->field_0x127,
                                      *(int *)&param_1->field_0x12b,*(uint *)&param_1->field_0x12f);
          if (iVar10 != 0) {
            param_1->field_0093 = 3;
            thunk_FUN_0061cfb0(param_1,param_1->field_009F,param_1->field_00A3,0x495);
          }
        }
      }
      else {
        param_1->field_009F = iVar11;
        param_1->field_00A3 = iVar10;
        param_1->field_00A7 = local_c;
        param_1->field_00AF = 0;
        thunk_FUN_00637ae0(param_1->field_009F,iVar10,local_c);
        param_1->field_0093 = 6;
      }
      break;
    case 3:
      if (iVar8 == 4) {
        return local_2c;
      }
      break;
    case 4:
      goto cf_common_exit_0061AB3A;
    }
    if (*(int *)&param_1->field_0xf3 < *(int *)&param_1->field_0xf7) {
      return 1;
    }
    uVar9 = param_1->field_00A7;
    iVar10 = param_1->field_00A3;
    iVar11 = param_1->field_009F;
    goto cf_common_exit_0061A55D;
  case 3:
    local_30 = PTR_00802a38->field_00E4 - *(int *)&param_1->field_0x11b;
    uVar9 = (*(int *)&param_1->field_0x113 * local_30) / 10000 +
            (*(int *)&param_1->field_0x117 * local_30 * local_30) / 10000 +
            *(int *)&param_1->field_0xd7;
    sVar2 = (short)((int)uVar9 >> 0x1f);
    if ((int)uVar9 < 0) {
      local_14 = (int)(short)(((short)((int)uVar9 / 200) + sVar2) -
                             (short)((longlong)(int)uVar9 * 0x51eb851f >> 0x3f));
      local_20 = local_14 + -1;
    }
    else {
      local_20 = (int)(short)(((short)((int)uVar9 / 200) + sVar2) -
                             (short)((longlong)(int)uVar9 * 0x51eb851f >> 0x3f));
      local_14 = local_20;
    }
    iVar10 = (*(int *)&param_1->field_0x10f * local_30) / 100;
    *(int *)&param_1->field_0xf3 = *(int *)&param_1->field_0xf3 + *(int *)&param_1->field_0x10f;
    iVar11 = (*(int *)&param_1->field_0x103 * iVar10) / 10000 + *(int *)&param_1->field_0xcf;
    local_8 = (*(int *)&param_1->field_0x107 * iVar10) / 10000 + *(int *)&param_1->field_0xd3;
    sVar2 = (short)(iVar11 >> 0x1f);
    if (iVar11 < 0) {
      local_10 = (int)(short)(((short)(iVar11 / 0xc9) + sVar2) -
                             (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
      local_28 = local_10 + -1;
    }
    else {
      local_28 = (int)(short)(((short)(iVar11 / 0xc9) + sVar2) -
                             (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
      local_10 = local_28;
    }
    sVar2 = (short)(local_8 >> 0x1f);
    if (local_8 < 0) {
      local_18 = (int)(short)(((short)(local_8 / 0xc9) + sVar2) -
                             (short)((longlong)local_8 * 0x28c1979 >> 0x3f));
      local_24 = local_18 + -1;
    }
    else {
      local_18 = (int)(short)(((short)(local_8 / 0xc9) + sVar2) -
                             (short)((longlong)local_8 * 0x28c1979 >> 0x3f));
      local_24 = local_18;
    }
    if ((local_30 < 3) ||
       (uVar5 = thunk_FUN_00601500(&param_1->field_0x20,iVar11,local_8,uVar9,
                                   *(int *)&param_1->field_0xdb,*(int *)&param_1->field_0xdf,
                                   *(int *)&param_1->field_0xe3,*(int *)&param_1->field_0x51,
                                   DAT_007e66ac,*(int *)&param_1->field_0x85,
                                   *(undefined2 *)&param_1->field_0x89,0xb3,0,0), (int)uVar5 < 1)) {
      sVar3 = (short)local_18;
      *(int *)&param_1->field_0xdb = param_1->field_009F;
      *(int *)&param_1->field_0xdf = param_1->field_00A3;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      sVar2 = (short)local_10;
      param_1->field_009F = iVar11;
      param_1->field_00A3 = local_8;
      param_1->field_00A7 = uVar9;
      if (iVar11 < 0) {
        sVar2 = sVar2 + -1;
      }
      param_1->field_00C9 = sVar2;
      if (local_8 < 0) {
        sVar3 = sVar3 + -1;
      }
      param_1->field_00CB = sVar3;
      sVar2 = (short)local_14;
      if ((int)uVar9 < 0) {
        sVar2 = sVar2 + -1;
      }
      param_1->field_00CD = sVar2;
      if (param_1->field_0093 == 3) {
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,1,1,0,iVar11,local_8,uVar9,0,0,0,0,0,0,-1,0,0);
      }
      return 1;
    }
    if (uVar5 != 5) {
      iVar10 = thunk_FUN_0061c910(param_1,uVar5,param_1->field_0093,local_28,local_24,local_20,
                                  iVar11,local_8,uVar9);
      param_1->field_0093 = iVar10;
      if (iVar10 == 5) {
        thunk_FUN_0061cfb0(param_1,param_1->field_009F,param_1->field_00A3,0x496);
        param_1->field_00AF = 0x19;
        param_1->field_00C0 = 0xb;
        param_1->field_00B3 = 0x14;
        param_1->field_00BC = 0;
        param_1->field_00B7 = 0;
        param_1->field_00AB = 0;
        return local_2c;
      }
      *(int *)&param_1->field_0xdb = param_1->field_009F;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      param_1->field_009F = iVar11;
      *(int *)&param_1->field_0xdf = param_1->field_00A3;
      param_1->field_00A3 = local_8;
      param_1->field_00A7 = uVar9;
      sVar2 = (short)local_10;
      if (iVar11 < 0) {
        sVar2 = sVar2 + -1;
      }
      param_1->field_00C9 = sVar2;
      sVar2 = (short)local_18;
      if (local_8 < 0) {
        sVar2 = sVar2 + -1;
      }
      param_1->field_00CB = sVar2;
      sVar2 = (short)local_14;
      if ((int)uVar9 < 0) {
        sVar2 = sVar2 + -1;
      }
      param_1->field_00CD = sVar2;
      if (param_1->field_0093 != 1) {
        return 1;
      }
      iVar10 = param_1->field_00A3;
      iVar11 = param_1->field_009F;
      goto cf_common_exit_0061A55D;
    }
    break;
  case 4:
    iVar11 = (PTR_00802a38->field_00E4 - *(int *)&param_1->field_0x11b) *
             *(int *)&param_1->field_0x10f;
    iVar10 = (*(int *)&param_1->field_0x103 * iVar11) / 10000 + *(int *)&param_1->field_0xcf;
    local_8 = (*(int *)&param_1->field_0x107 * iVar11) / 10000 + *(int *)&param_1->field_0xd3;
    local_1c = (*(int *)&param_1->field_0x10b * iVar11) / 10000 + *(int *)&param_1->field_0xd7;
    sVar2 = (short)(local_1c >> 0x1f);
    if (local_1c < 0) {
      local_14 = (int)(short)(((short)(local_1c / 200) + sVar2) -
                             (short)((longlong)local_1c * 0x51eb851f >> 0x3f));
      local_30 = local_14 + -1;
    }
    else {
      local_30 = (int)(short)(((short)(local_1c / 200) + sVar2) -
                             (short)((longlong)local_1c * 0x51eb851f >> 0x3f));
      local_14 = local_30;
    }
    sVar2 = (short)(local_8 >> 0x1f);
    if (local_8 < 0) {
      local_18 = (int)(short)(((short)(local_8 / 0xc9) + sVar2) -
                             (short)((longlong)local_8 * 0x28c1979 >> 0x3f));
      iVar8 = local_18 + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(local_8 / 0xc9) + sVar2) -
                          (short)((longlong)local_8 * 0x28c1979 >> 0x3f));
      local_18 = iVar8;
    }
    sVar2 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      local_10 = (int)(short)(((short)(iVar10 / 0xc9) + sVar2) -
                             (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
      iVar6 = local_10 + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar10 / 0xc9) + sVar2) -
                          (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
      local_10 = iVar6;
    }
    local_28 = thunk_FUN_0061b340(param_1,iVar6,iVar8,local_30,iVar10,local_8,local_1c,&local_c);
    switch(local_28) {
    case 0:
      *(int *)&param_1->field_0xdb = param_1->field_009F;
      *(int *)&param_1->field_0xdf = param_1->field_00A3;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      sVar2 = (short)local_10;
      param_1->field_009F = iVar10;
      param_1->field_00A3 = local_8;
      param_1->field_00A7 = local_1c;
      if (iVar10 < 0) {
        sVar2 = sVar2 + -1;
      }
      param_1->field_00C9 = sVar2;
      sVar2 = (short)local_18;
      if (local_8 < 0) {
        sVar2 = sVar2 + -1;
      }
      param_1->field_00CB = sVar2;
      if (local_1c < 0) {
        param_1->field_00CD = (short)local_14 + -1;
      }
      else {
        param_1->field_00CD = (short)local_14;
      }
      break;
    case 1:
    case 2:
      thunk_FUN_0061bdb0(param_1,CASE_1,param_1->field_009F,param_1->field_00A3,param_1->field_00A7)
      ;
    default:
      if (local_28 == 4) {
        return local_2c;
      }
      break;
    case 3:
      param_1->field_00A7 = local_c;
      param_1->field_009F = iVar10;
      param_1->field_00A3 = local_8;
      iVar10 = STJumpMineC::LoadImagJMine(param_1,2);
      param_1->field_0093 = 6 - (uint)(iVar10 != 0);
      break;
    case 4:
      goto cf_common_exit_0061AB3A;
    }
    if (iVar11 < *(int *)&param_1->field_0xf7) {
      return 1;
    }
    uVar9 = param_1->field_00A7;
    iVar10 = param_1->field_00A3;
    iVar11 = param_1->field_009F;
cf_common_exit_0061A55D:
    local_2c = 1;
    iVar10 = thunk_FUN_0061bdb0(param_1,CASE_1,iVar11,iVar10,uVar9);
    if (iVar10 != 0) {
      param_1->field_0093 = 1;
      return local_2c;
    }
    break;
  case 5:
    if ((param_1->field_014B != '\0') && ((void *)param_1->field_007D != (void *)0x0)) {
      thunk_FUN_00618900((void *)param_1->field_007D,param_1->field_0145,0);
      param_1->field_014B = 0;
    }
    if ((int)param_1->field_0097 < 0) {
      param_1->field_0093 = 6;
      return local_2c;
    }
    if (0x10 < (int)param_1->field_00AB) {
      if (param_1->field_00AB == 0x11) {
        FUN_006e9cb0(PTR_00807598,(uint *)param_1->field_0097,2);
      }
      FUN_006ea270(PTR_00807598,param_1->field_0097,2,param_1->field_00B7);
      if ((int)param_1->field_00B7 < (int)param_1->field_00B3) {
        param_1->field_00B7 = param_1->field_00B7 + 1;
      }
    }
    if (param_1->field_00BB != '\0') {
      if (param_1->field_00BC == param_1->field_00C0) {
        param_1->field_00BB = 0;
        FUN_006e9d40(PTR_00807598,(uint *)param_1->field_0097,1);
      }
      else {
        FUN_006ea270(PTR_00807598,param_1->field_0097,1,param_1->field_00BC);
        param_1->field_00BC = param_1->field_00BC + 1;
      }
    }
    uVar9 = param_1->field_00AB;
    if ((int)uVar9 < (int)param_1->field_00AF) {
      FUN_006ea270(PTR_00807598,param_1->field_0097,0,uVar9);
LAB_0061acc2:
      param_1->field_00AB = param_1->field_00AB + 1;
    }
    else if (uVar9 == param_1->field_00AF) {
      if (-1 < (int)param_1->field_0097) {
        FUN_006e9d40(PTR_00807598,(uint *)param_1->field_0097,0);
      }
      goto LAB_0061acc2;
    }
    FUN_006ea960(PTR_00807598,param_1->field_0097,
                 (float)param_1->field_009F * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_1->field_00A3 * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_1->field_00A7 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (param_1->field_00B7 == param_1->field_00B3) {
      if (-1 < (int)param_1->field_0097) {
        FUN_006eab60(PTR_00807598,param_1->field_0097);
      }
      param_1->field_0093 = 6;
    }
    pVVar1 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar10 = (int)param_1->field_00CD;
      if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                (int)param_1->field_00C9,(int)param_1->field_00CB,&local_28,
                                &local_24), iVar10 < 0)) || ((4 < iVar10 || (local_28 < 0)))) ||
          ((int)pVVar1->field_0030 <= local_28)) ||
         (((local_24 = (&DAT_0079aed0)[iVar10] + local_24, local_24 < 0 ||
           ((int)pVVar1->field_0034 <= local_24)) ||
          ((pVVar1->field_004C == 0 ||
           (*(char *)(local_24 * pVVar1->field_0030 + local_28 + pVVar1->field_004C) != '\0')))))) {
        if (param_1->field_00C4 == '\0') {
          FUN_006eaaa0(PTR_00807598,param_1->field_0097,0);
          param_1->field_00C4 = 1;
          return local_2c;
        }
      }
      else if (param_1->field_00C4 != '\0') {
        FUN_006eab60(PTR_00807598,param_1->field_0097);
        param_1->field_00C4 = 0;
        return local_2c;
      }
    }
    goto switchD_00619c92_default;
  case 6:
    break;
  default:
    goto switchD_00619c92_default;
  }
  thunk_FUN_006192e0((STJellyGunC *)param_1);
switchD_00619c92_default:
  return local_2c;
cf_common_exit_0061AB3A:
  if (-1 < (int)param_1->field_0097) {
    FUN_006eab60(PTR_00807598,param_1->field_0097);
    param_1->field_00C4 = 0;
  }
  param_1->field_0093 = 6;
  return local_2c;
}

