
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target field_0093 uses
   /SubmarineTitans/Recovered/Enums/STJumpMineC_field_0093State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

int __fastcall FUN_00619c70(STJumpMineC *param_1)

{
  VisibleClassTy *pVVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  STJumpMineC_field_0093State SVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
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
  case CASE_1:
    iVar12 = PTR_00802a38->field_00E4 - *(int *)&param_1->field_0x11b;
    iVar12 = (*(int *)&param_1->field_0x117 * iVar12 * iVar12) / 10000 +
             *(int *)&param_1->field_0x113 * iVar12 + *(int *)&param_1->field_0xd7;
    sVar8 = (short)(iVar12 >> 0x1f);
    if (iVar12 < 0) {
      iVar13 = (short)(((short)(iVar12 / 200) + sVar8) -
                      (short)((longlong)iVar12 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar13 = (int)(short)(((short)(iVar12 / 200) + sVar8) -
                           (short)((longlong)iVar12 * 0x51eb851f >> 0x3f));
    }
    uVar2 = thunk_FUN_0061b340(param_1,param_1->field_00C9,param_1->field_00CB,iVar13,
                               param_1->field_009F,param_1->field_00A3,iVar12,&local_c);
    switch(uVar2) {
    case 0:
      param_1->field_00CD = (short)iVar13;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      param_1->field_00A7 = iVar12;
      return 1;
    case 1:
      *(undefined4 *)&param_1->field_0x113 = 0xfffffffd;
      *(undefined4 *)&param_1->field_0x11b = PTR_00802a38->field_00E4;
      *(int *)&param_1->field_0xd7 = local_c;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      param_1->field_00A7 = local_c;
      return 1;
    case 2:
      iVar12 = (int)param_1->field_00C9;
      iVar13 = (int)param_1->field_00CB;
      if ((((-1 < iVar12) && (-1 < iVar13)) && (iVar3 = (int)g_worldGrid.sizeX, iVar12 < iVar3)) &&
         ((iVar13 < g_worldGrid.sizeY && (*(char *)(iVar3 * iVar13 + DAT_007fb26c + iVar12) != '\0')
          ))) {
        if ((((&DAT_007fb24c)[*(int *)&param_1->field_0x51] == 0) ||
            (*(char *)(iVar3 * iVar13 + (&DAT_007fb24c)[*(int *)&param_1->field_0x51] + iVar12) ==
             '\0')) &&
           (uVar11 = thunk_FUN_00497030(iVar12,iVar13,*(int *)&param_1->field_0x51,1,DAT_007e66ac),
           -1 < (int)uVar11)) {
          param_1->field_00A7 = local_c;
          param_1->field_00AF = 0;
          thunk_FUN_00637ae0(param_1->field_009F,param_1->field_00A3,local_c);
          goto LAB_00619e5f;
        }
      }
      uVar11 = param_1->field_001C * 0x41c64e6d + 0x3039;
      param_1->field_001C = uVar11;
      *(uint *)&param_1->field_0x113 = (uVar11 >> 0x10) % 0xb + 10;
      *(undefined4 *)&param_1->field_0x11b = PTR_00802a38->field_00E4;
      *(int *)&param_1->field_0xd7 = local_c;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      param_1->field_00A7 = local_c;
      if (((void *)param_1->field_007D != (void *)0x0) &&
         (iVar12 = thunk_FUN_00618240((void *)param_1->field_007D,param_1->field_009F,
                                      param_1->field_00A3,local_c,
                                      (undefined4 *)&param_1->field_0x11f), iVar12 != 0)) {
        if (param_1->field_014B != '\0') {
          thunk_FUN_00618900((void *)param_1->field_007D,param_1->field_0145,0);
        }
        param_1->field_014B = 1;
        iVar12 = thunk_FUN_0061bdb0(param_1,CASE_2,*(int *)&param_1->field_0x127,
                                    *(int *)&param_1->field_0x12b,*(uint *)&param_1->field_0x12f);
        if (iVar12 == 0) {
          return 1;
        }
        thunk_FUN_00618900((void *)param_1->field_007D,param_1->field_0145,1);
        param_1->field_0093 = CASE_2;
        return 1;
      }
      iVar12 = thunk_FUN_0061ca90(param_1,param_1->field_009F,param_1->field_00A3,
                                  param_1->field_00A7,(int *)&param_1->field_0x11f);
      if (iVar12 == 0) {
        return 1;
      }
      param_1->field_014B = 1;
      iVar12 = thunk_FUN_0061bdb0(param_1,CASE_2,*(int *)&param_1->field_0x127,
                                  *(int *)&param_1->field_0x12b,*(uint *)&param_1->field_0x12f);
      if (iVar12 == 0) {
        return 1;
      }
      param_1->field_0093 = CASE_2;
      return 1;
    case 3:
      param_1->field_00A7 = local_c;
      iVar12 = STJumpMineC::LoadImagJMine(param_1,2);
      if (iVar12 != 0) {
        param_1->field_0093 = CASE_5;
        param_1->field_00AF = 0x19;
        param_1->field_00C0 = 0xb;
        param_1->field_00B3 = 0x14;
        param_1->field_00BC = 0;
        param_1->field_00B7 = 0;
        param_1->field_00AB = 0;
        return 1;
      }
LAB_00619e5f:
      param_1->field_0093 = CASE_6;
      return 1;
    case 4:
      goto cf_common_exit_0061AB3A;
    default:
      return 1;
    }
  case CASE_2:
    iVar12 = PTR_00802a38->field_00E4 - *(int *)&param_1->field_0x11b;
    local_1c = (*(int *)&param_1->field_0x117 * iVar12 * iVar12) / 10000 +
               *(int *)&param_1->field_0x113 * iVar12 + *(int *)&param_1->field_0xd7;
    sVar8 = (short)(local_1c >> 0x1f);
    if (local_1c < 0) {
      local_20 = (short)(((short)(local_1c / 200) + sVar8) -
                        (short)((longlong)local_1c * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_20 = (int)(short)(((short)(local_1c / 200) + sVar8) -
                             (short)((longlong)local_1c * 0x51eb851f >> 0x3f));
    }
    iVar12 = *(int *)&param_1->field_0x10f * iVar12;
    *(int *)&param_1->field_0xf3 = *(int *)&param_1->field_0xf3 + *(int *)&param_1->field_0x10f;
    iVar13 = (*(int *)&param_1->field_0x103 * iVar12) / 10000 + *(int *)&param_1->field_0xcf;
    iVar12 = (*(int *)&param_1->field_0x107 * iVar12) / 10000 + *(int *)&param_1->field_0xd3;
    sVar8 = (short)(iVar13 >> 0x1f);
    if (iVar13 < 0) {
      local_28 = (short)(((short)(iVar13 / 0xc9) + sVar8) -
                        (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_28 = (int)(short)(((short)(iVar13 / 0xc9) + sVar8) -
                             (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
    }
    sVar8 = (short)(iVar12 >> 0x1f);
    if (iVar12 < 0) {
      local_24 = (short)(((short)(iVar12 / 0xc9) + sVar8) -
                        (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_24 = (int)(short)(((short)(iVar12 / 0xc9) + sVar8) -
                             (short)((longlong)iVar12 * 0x28c1979 >> 0x3f));
    }
    iVar3 = thunk_FUN_0061b340(param_1,(short)local_28,(short)local_24,local_20,iVar13,iVar12,
                               local_1c,&local_c);
    switch(iVar3) {
    case 0:
      *(int *)&param_1->field_0xdb = param_1->field_009F;
      *(int *)&param_1->field_0xdf = param_1->field_00A3;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      param_1->field_00C9 = (short)local_28;
      param_1->field_00CB = (short)local_24;
      param_1->field_009F = iVar13;
      param_1->field_00CD = (short)local_20;
      param_1->field_00A3 = iVar12;
      param_1->field_00A7 = local_1c;
      break;
    case 1:
      *(undefined4 *)&param_1->field_0x113 = 0xfffffffd;
      *(undefined4 *)&param_1->field_0x11b = PTR_00802a38->field_00E4;
      *(int *)&param_1->field_0xd7 = local_c;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      *(int *)&param_1->field_0xcf = iVar13;
      *(int *)&param_1->field_0xd3 = iVar12;
      param_1->field_00A7 = local_c;
      iVar12 = thunk_FUN_0061c5f0(param_1,&local_30);
      if ((iVar12 < 1) || (299 < *(int *)&param_1->field_0x141)) {
        if (iVar12 == 0) {
          iVar12 = thunk_FUN_0061bdb0(param_1,CASE_1,param_1->field_009F,param_1->field_00A3,
                                      param_1->field_00A7);
          if (iVar12 == 0) {
LAB_0061a4f4:
            thunk_FUN_006192e0((STJellyGunC *)param_1);
          }
          else {
            param_1->field_0093 = CASE_1;
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
        iVar12 = thunk_FUN_0061bdb0(param_1,CASE_3,*(int *)&param_1->field_0x127,
                                    *(int *)&param_1->field_0x12b,*(uint *)&param_1->field_0x12f);
        if (iVar12 != 0) {
          param_1->field_0093 = CASE_3;
          thunk_FUN_0061cfb0(param_1,param_1->field_009F,param_1->field_00A3,0x495);
        }
      }
      break;
    case 2:
      iVar3 = (int)param_1->field_00CB;
      if (((((param_1->field_00C9 < 0) || (iVar3 < 0)) ||
           (iVar4 = (int)g_worldGrid.sizeX, iVar4 <= param_1->field_00C9)) ||
          (((g_worldGrid.sizeY <= iVar3 ||
            (iVar7 = (int)param_1->field_00C9,
            *(char *)(iVar4 * iVar3 + DAT_007fb26c + iVar7) == '\0')) ||
           ((local_2c = (&DAT_007fb24c)[*(int *)&param_1->field_0x51], local_2c != 0 &&
            (*(char *)(iVar4 * param_1->field_00CB + local_2c + iVar7) != '\0')))))) ||
         (uVar11 = thunk_FUN_00497030(iVar7,(int)param_1->field_00CB,*(int *)&param_1->field_0x51,1,
                                      DAT_007e66ac), (int)uVar11 < 0)) {
        param_1->field_001C = param_1->field_001C * 0x41c64e6d + 0x3039;
        *(undefined4 *)&param_1->field_0x113 = 0xf;
        uVar11 = param_1->field_001C * 0x41c64e6d + 0x3039;
        param_1->field_001C = uVar11;
        *(uint *)&param_1->field_0x10f = (uVar11 >> 0x10 & 1) + 7;
        *(undefined4 *)&param_1->field_0x11b = PTR_00802a38->field_00E4;
        *(int *)&param_1->field_0xd7 = local_c;
        *(int *)&param_1->field_0xe3 = param_1->field_00A7;
        *(int *)&param_1->field_0xcf = iVar13;
        *(int *)&param_1->field_0xd3 = iVar12;
        param_1->field_00A7 = local_c;
        iVar12 = thunk_FUN_0061c5f0(param_1,&local_30);
        if ((iVar12 < 1) || (299 < *(int *)&param_1->field_0x141)) {
          if (iVar12 != 0) goto LAB_0061a4fd;
          iVar12 = thunk_FUN_0061bdb0(param_1,CASE_1,param_1->field_009F,param_1->field_00A3,
                                      param_1->field_00A7);
          if (iVar12 == 0) goto LAB_0061a4f4;
          param_1->field_0093 = CASE_1;
        }
        else {
          iVar12 = thunk_FUN_0061bdb0(param_1,CASE_3,*(int *)&param_1->field_0x127,
                                      *(int *)&param_1->field_0x12b,*(uint *)&param_1->field_0x12f);
          if (iVar12 != 0) {
            param_1->field_0093 = CASE_3;
            thunk_FUN_0061cfb0(param_1,param_1->field_009F,param_1->field_00A3,0x495);
          }
        }
      }
      else {
        param_1->field_009F = iVar13;
        param_1->field_00A3 = iVar12;
        param_1->field_00A7 = local_c;
        param_1->field_00AF = 0;
        thunk_FUN_00637ae0(param_1->field_009F,iVar12,local_c);
        param_1->field_0093 = CASE_6;
      }
      break;
    case 3:
      if (iVar3 == 4) {
        return local_2c;
      }
      break;
    case 4:
      goto cf_common_exit_0061AB3A;
    }
    if (*(int *)&param_1->field_0xf3 < *(int *)&param_1->field_0xf7) {
      return 1;
    }
    uVar11 = param_1->field_00A7;
    iVar12 = param_1->field_00A3;
    iVar13 = param_1->field_009F;
    goto cf_common_exit_0061A55D;
  case CASE_3:
    local_30 = PTR_00802a38->field_00E4 - *(int *)&param_1->field_0x11b;
    uVar11 = (*(int *)&param_1->field_0x113 * local_30) / 10000 +
             (*(int *)&param_1->field_0x117 * local_30 * local_30) / 10000 +
             *(int *)&param_1->field_0xd7;
    sVar8 = (short)((int)uVar11 >> 0x1f);
    if ((int)uVar11 < 0) {
      local_14 = (int)(short)(((short)((int)uVar11 / 200) + sVar8) -
                             (short)((longlong)(int)uVar11 * 0x51eb851f >> 0x3f));
      local_20 = local_14 + -1;
    }
    else {
      local_20 = (int)(short)(((short)((int)uVar11 / 200) + sVar8) -
                             (short)((longlong)(int)uVar11 * 0x51eb851f >> 0x3f));
      local_14 = local_20;
    }
    iVar12 = (*(int *)&param_1->field_0x10f * local_30) / 100;
    *(int *)&param_1->field_0xf3 = *(int *)&param_1->field_0xf3 + *(int *)&param_1->field_0x10f;
    iVar13 = (*(int *)&param_1->field_0x103 * iVar12) / 10000 + *(int *)&param_1->field_0xcf;
    local_8 = (*(int *)&param_1->field_0x107 * iVar12) / 10000 + *(int *)&param_1->field_0xd3;
    sVar8 = (short)(iVar13 >> 0x1f);
    if (iVar13 < 0) {
      local_10 = (int)(short)(((short)(iVar13 / 0xc9) + sVar8) -
                             (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
      local_28 = local_10 + -1;
    }
    else {
      local_28 = (int)(short)(((short)(iVar13 / 0xc9) + sVar8) -
                             (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
      local_10 = local_28;
    }
    sVar8 = (short)(local_8 >> 0x1f);
    if (local_8 < 0) {
      local_18 = (int)(short)(((short)(local_8 / 0xc9) + sVar8) -
                             (short)((longlong)local_8 * 0x28c1979 >> 0x3f));
      local_24 = local_18 + -1;
    }
    else {
      local_18 = (int)(short)(((short)(local_8 / 0xc9) + sVar8) -
                             (short)((longlong)local_8 * 0x28c1979 >> 0x3f));
      local_24 = local_18;
    }
    if ((local_30 < 3) ||
       (uVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                          ((AnonReceiver_00601500 *)&param_1->field_0x20,iVar13,local_8,uVar11,
                           *(int *)&param_1->field_0xdb,*(int *)&param_1->field_0xdf,
                           *(int *)&param_1->field_0xe3,*(int *)&param_1->field_0x51,DAT_007e66ac,
                           *(int *)&param_1->field_0x85,*(undefined2 *)&param_1->field_0x89,0xb3,0,0
                          ), (int)uVar5 < 1)) {
      sVar10 = (short)local_18;
      *(int *)&param_1->field_0xdb = param_1->field_009F;
      *(int *)&param_1->field_0xdf = param_1->field_00A3;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      sVar8 = (short)local_10;
      param_1->field_009F = iVar13;
      param_1->field_00A3 = local_8;
      param_1->field_00A7 = uVar11;
      if (iVar13 < 0) {
        sVar8 = sVar8 + -1;
      }
      param_1->field_00C9 = sVar8;
      if (local_8 < 0) {
        sVar10 = sVar10 + -1;
      }
      param_1->field_00CB = sVar10;
      sVar8 = (short)local_14;
      if ((int)uVar11 < 0) {
        sVar8 = sVar8 + -1;
      }
      param_1->field_00CD = sVar8;
      if (param_1->field_0093 == CASE_3) {
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,1,1,0,iVar13,local_8,uVar11,0,0,0,0,0,0,-1,0,0);
      }
      return 1;
    }
    if (uVar5 != 5) {
      SVar6 = thunk_FUN_0061c910(param_1,uVar5,param_1->field_0093,local_28,local_24,local_20,iVar13
                                 ,local_8,uVar11);
      param_1->field_0093 = SVar6;
      if (SVar6 == CASE_5) {
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
      param_1->field_009F = iVar13;
      *(int *)&param_1->field_0xdf = param_1->field_00A3;
      param_1->field_00A3 = local_8;
      param_1->field_00A7 = uVar11;
      sVar8 = (short)local_10;
      if (iVar13 < 0) {
        sVar8 = sVar8 + -1;
      }
      param_1->field_00C9 = sVar8;
      sVar8 = (short)local_18;
      if (local_8 < 0) {
        sVar8 = sVar8 + -1;
      }
      param_1->field_00CB = sVar8;
      sVar8 = (short)local_14;
      if ((int)uVar11 < 0) {
        sVar8 = sVar8 + -1;
      }
      param_1->field_00CD = sVar8;
      if (param_1->field_0093 != CASE_1) {
        return 1;
      }
      iVar12 = param_1->field_00A3;
      iVar13 = param_1->field_009F;
      goto cf_common_exit_0061A55D;
    }
    break;
  case CASE_4:
    iVar13 = (PTR_00802a38->field_00E4 - *(int *)&param_1->field_0x11b) *
             *(int *)&param_1->field_0x10f;
    iVar12 = (*(int *)&param_1->field_0x103 * iVar13) / 10000 + *(int *)&param_1->field_0xcf;
    local_8 = (*(int *)&param_1->field_0x107 * iVar13) / 10000 + *(int *)&param_1->field_0xd3;
    local_1c = (*(int *)&param_1->field_0x10b * iVar13) / 10000 + *(int *)&param_1->field_0xd7;
    sVar8 = (short)(local_1c >> 0x1f);
    if (local_1c < 0) {
      local_14 = (int)(short)(((short)(local_1c / 200) + sVar8) -
                             (short)((longlong)local_1c * 0x51eb851f >> 0x3f));
      local_30 = local_14 + -1;
    }
    else {
      local_30 = (int)(short)(((short)(local_1c / 200) + sVar8) -
                             (short)((longlong)local_1c * 0x51eb851f >> 0x3f));
      local_14 = local_30;
    }
    sVar8 = (short)(local_8 >> 0x1f);
    if (local_8 < 0) {
      sVar10 = ((short)(local_8 / 0xc9) + sVar8) - (short)((longlong)local_8 * 0x28c1979 >> 0x3f);
      sVar8 = sVar10 + -1;
    }
    else {
      sVar8 = ((short)(local_8 / 0xc9) + sVar8) - (short)((longlong)local_8 * 0x28c1979 >> 0x3f);
      sVar10 = sVar8;
    }
    local_18 = (int)sVar10;
    sVar10 = (short)(iVar12 >> 0x1f);
    if (iVar12 < 0) {
      sVar10 = ((short)(iVar12 / 0xc9) + sVar10) - (short)((longlong)iVar12 * 0x28c1979 >> 0x3f);
      sVar9 = sVar10 + -1;
    }
    else {
      sVar9 = ((short)(iVar12 / 0xc9) + sVar10) - (short)((longlong)iVar12 * 0x28c1979 >> 0x3f);
      sVar10 = sVar9;
    }
    local_10 = (int)sVar10;
    local_28 = thunk_FUN_0061b340(param_1,sVar9,sVar8,local_30,iVar12,local_8,local_1c,&local_c);
    switch(local_28) {
    case 0:
      *(int *)&param_1->field_0xdb = param_1->field_009F;
      *(int *)&param_1->field_0xdf = param_1->field_00A3;
      *(int *)&param_1->field_0xe3 = param_1->field_00A7;
      sVar8 = (short)local_10;
      param_1->field_009F = iVar12;
      param_1->field_00A3 = local_8;
      param_1->field_00A7 = local_1c;
      if (iVar12 < 0) {
        sVar8 = sVar8 + -1;
      }
      param_1->field_00C9 = sVar8;
      sVar8 = (short)local_18;
      if (local_8 < 0) {
        sVar8 = sVar8 + -1;
      }
      param_1->field_00CB = sVar8;
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
      param_1->field_009F = iVar12;
      param_1->field_00A3 = local_8;
      iVar12 = STJumpMineC::LoadImagJMine(param_1,2);
      param_1->field_0093 = CASE_6 - (iVar12 != 0);
      break;
    case 4:
      goto cf_common_exit_0061AB3A;
    }
    if (iVar13 < *(int *)&param_1->field_0xf7) {
      return 1;
    }
    uVar11 = param_1->field_00A7;
    iVar12 = param_1->field_00A3;
    iVar13 = param_1->field_009F;
cf_common_exit_0061A55D:
    local_2c = 1;
    iVar12 = thunk_FUN_0061bdb0(param_1,CASE_1,iVar13,iVar12,uVar11);
    if (iVar12 != 0) {
      param_1->field_0093 = CASE_1;
      return local_2c;
    }
    break;
  case CASE_5:
    if ((param_1->field_014B != '\0') && ((void *)param_1->field_007D != (void *)0x0)) {
      thunk_FUN_00618900((void *)param_1->field_007D,param_1->field_0145,0);
      param_1->field_014B = 0;
    }
    if ((int)param_1->field_0097 < 0) {
      param_1->field_0093 = CASE_6;
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
    uVar11 = param_1->field_00AB;
    if ((int)uVar11 < (int)param_1->field_00AF) {
      FUN_006ea270(PTR_00807598,param_1->field_0097,0,uVar11);
LAB_0061acc2:
      param_1->field_00AB = param_1->field_00AB + 1;
    }
    else if (uVar11 == param_1->field_00AF) {
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
      param_1->field_0093 = CASE_6;
    }
    pVVar1 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar12 = (int)param_1->field_00CD;
      if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                (int)param_1->field_00C9,(int)param_1->field_00CB,&local_28,
                                &local_24), iVar12 < 0)) || ((4 < iVar12 || (local_28 < 0)))) ||
          ((int)pVVar1->field_0030 <= local_28)) ||
         (((local_24 = (&DAT_0079aed0)[iVar12] + local_24, local_24 < 0 ||
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
  case CASE_6:
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
  param_1->field_0093 = CASE_6;
  return local_2c;
}

