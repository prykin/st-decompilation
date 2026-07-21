
undefined4
FUN_00413170(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,int param_6)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  int local_10;
  int local_8;

  pcVar9 = (char *)*param_5;
  cVar2 = pcVar9[3];
  while ((-1 < cVar2 && (cVar2 < param_4))) {
    pcVar8 = pcVar9 + 7;
    pcVar9 = pcVar9 + 4;
    cVar2 = *pcVar8;
  }
  local_10 = 0;
  if (0 < param_6) {
    cVar2 = pcVar9[3];
    pcVar8 = pcVar9 + 3;
    local_10 = 0;
    while ((-1 < cVar2 && (*pcVar8 <= param_6))) {
      pcVar1 = pcVar8 + 3;
      pcVar8 = pcVar8 + 4;
      if ((-1 < *pcVar1 + param_3) && (*pcVar1 + param_3 < DAT_007f4d34)) {
        local_10 = local_10 + 1;
      }
      cVar2 = *pcVar8;
    }
  }
  iVar3 = DAT_007f4d30 * DAT_007f4d2c;
  param_4 = 0;
  iVar10 = param_1;
  iVar11 = param_1;
  if (DAT_007f4d20 < local_10) {
    param_6 = 0;
    iVar4 = (local_10 << 0x10) / DAT_007f4d20;
    local_8 = 0;
    param_4 = 0;
    if (0 < DAT_007f4d20) {
      local_1c = 0;
LAB_0041321e:
      if (-1 < pcVar9[3]) {
        do {
          iVar5 = pcVar9[2] + param_3;
          iVar7 = local_8;
          if ((iVar5 < 0) || (DAT_007f4d34 <= iVar5)) goto LAB_0041330a;
          switch(DAT_007f4d08) {
          case 0:
          case 1:
            iVar10 = (int)*pcVar9;
            cVar2 = pcVar9[1];
            goto LAB_0041329b;
          case 2:
          case 3:
            iVar10 = pcVar9[1] + param_1;
            iVar11 = param_2 - *pcVar9;
            break;
          case 4:
          case 5:
            iVar10 = param_1 - *pcVar9;
            iVar11 = param_2 - pcVar9[1];
            break;
          case 6:
          case 7:
            cVar2 = *pcVar9;
            iVar10 = -(int)pcVar9[1];
LAB_0041329b:
            iVar10 = param_1 + iVar10;
            iVar11 = cVar2 + param_2;
          }
          if ((((-1 < iVar10) && (iVar10 < DAT_007f4d2c)) && (-1 < iVar11)) &&
             (iVar11 < DAT_007f4d30)) {
            param_6 = param_6 + -0x10000;
            iVar7 = local_8 + 1;
            if (((param_6 < 0) &&
                (uVar6 = iVar10 + DAT_007f4d2c * iVar11 + iVar3 * iVar5, iVar7 = local_8,
                *(short *)(DAT_007f4cf0 + uVar6 * 2) == 0)) &&
               (uVar6 = uVar6 ^ 7,
               (*(byte *)(DAT_007f4cfc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) == 0))
            goto LAB_00413319;
          }
LAB_0041330a:
          local_8 = iVar7;
          pcVar8 = pcVar9 + 7;
          pcVar9 = pcVar9 + 4;
          if (*pcVar8 < '\0') break;
        } while( true );
      }
      if (param_4 < DAT_007f4d20) {
        if (local_10 <= local_8) goto cf_break_loop_004134EC;
        iVar4 = (local_8 << 0x10) / DAT_007f4d20;
        param_6 = 0;
        param_4 = 0;
        if (0 < DAT_007f4d20) {
          local_1c = 0;
          goto cf_continue_loop_004133AD;
        }
      }
    }
  }
  else {
cf_break_loop_004134EC:
    if ((param_4 < DAT_007f4d20) && (param_4 = 0, 0 < DAT_007f4d20)) {
      param_6 = 0;
LAB_0041350c:
      do {
        if (pcVar9[3] < '\0') {
          return 0xfffffffc;
        }
        iVar4 = pcVar9[2] + param_3;
        if ((iVar4 < 0) || (DAT_007f4d34 <= iVar4)) goto LAB_004135d8;
        switch(DAT_007f4d08) {
        case 0:
        case 1:
          iVar10 = (int)*pcVar9;
          cVar2 = pcVar9[1];
          goto LAB_00413585;
        case 2:
        case 3:
          iVar10 = pcVar9[1] + param_1;
          iVar11 = param_2 - *pcVar9;
          break;
        case 4:
        case 5:
          iVar10 = param_1 - *pcVar9;
          iVar11 = param_2 - pcVar9[1];
          break;
        case 6:
        case 7:
          cVar2 = *pcVar9;
          iVar10 = -(int)pcVar9[1];
LAB_00413585:
          iVar10 = param_1 + iVar10;
          iVar11 = cVar2 + param_2;
        }
        if ((((iVar10 < 0) || (DAT_007f4d2c <= iVar10)) || (iVar11 < 0)) ||
           (((DAT_007f4d30 <= iVar11 ||
             (uVar6 = iVar10 + DAT_007f4d2c * iVar11 + iVar3 * iVar4,
             *(short *)(DAT_007f4cf0 + uVar6 * 2) != 0)) ||
            (uVar6 = uVar6 ^ 7,
            (*(byte *)(DAT_007f4cfc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) != 0)))) {
LAB_004135d8:
          pcVar9 = pcVar9 + 4;
          goto LAB_0041350c;
        }
        pcVar9 = pcVar9 + 4;
        *(int *)(param_6 + DAT_007f4d3c) = iVar10;
        *(int *)(param_6 + 4 + DAT_007f4d3c) = iVar11;
        *(int *)(param_6 + 8 + DAT_007f4d3c) = iVar4;
        param_6 = param_6 + 0x14;
        param_4 = param_4 + 1;
      } while (param_4 < DAT_007f4d20);
    }
  }
cf_common_exit_00413620:
  *param_5 = pcVar9;
  return 0;
LAB_00413319:
  param_6 = param_6 + iVar4;
  pcVar9 = pcVar9 + 4;
  *(int *)(local_1c + DAT_007f4d3c) = iVar10;
  *(int *)(local_1c + 4 + DAT_007f4d3c) = iVar11;
  *(int *)(local_1c + 8 + DAT_007f4d3c) = iVar5;
  local_1c = local_1c + 0x14;
  param_4 = param_4 + 1;
  local_8 = local_8 + 1;
  if (DAT_007f4d20 <= param_4) goto cf_common_exit_00413620;
  goto LAB_0041321e;
cf_continue_loop_004133AD:
  if (-1 < pcVar9[3]) {
    do {
      iVar7 = pcVar9[2] + param_3;
      if ((iVar7 < 0) || (DAT_007f4d34 <= iVar7)) goto LAB_00413487;
      switch(DAT_007f4d08) {
      case 0:
      case 1:
        iVar10 = (int)*pcVar9;
        cVar2 = pcVar9[1];
        goto LAB_00413426;
      case 2:
      case 3:
        iVar10 = pcVar9[1] + param_1;
        iVar11 = param_2 - *pcVar9;
        break;
      case 4:
      case 5:
        iVar10 = param_1 - *pcVar9;
        iVar11 = param_2 - pcVar9[1];
        break;
      case 6:
      case 7:
        cVar2 = *pcVar9;
        iVar10 = -(int)pcVar9[1];
LAB_00413426:
        iVar10 = param_1 + iVar10;
        iVar11 = cVar2 + param_2;
      }
      if (((((-1 < iVar10) && (iVar10 < DAT_007f4d2c)) && (-1 < iVar11)) &&
          ((iVar11 < DAT_007f4d30 && (param_6 = param_6 + -0x10000, param_6 < 0)))) &&
         ((uVar6 = iVar10 + DAT_007f4d2c * iVar11 + iVar3 * iVar7,
          *(short *)(DAT_007f4cf0 + uVar6 * 2) == 0 &&
          (uVar6 = uVar6 ^ 7, (*(byte *)(DAT_007f4cfc + ((int)uVar6 >> 3)) >> (uVar6 & 7) & 1) == 0)
          ))) goto LAB_00413496;
LAB_00413487:
      pcVar8 = pcVar9 + 7;
      pcVar9 = pcVar9 + 4;
      if (*pcVar8 < '\0') break;
    } while( true );
  }
  goto cf_break_loop_004134EC;
LAB_00413496:
  param_6 = param_6 + iVar4;
  pcVar9 = pcVar9 + 4;
  *(int *)(local_1c + DAT_007f4d3c) = iVar10;
  *(int *)(local_1c + 4 + DAT_007f4d3c) = iVar11;
  *(int *)(local_1c + 8 + DAT_007f4d3c) = iVar7;
  local_1c = local_1c + 0x14;
  param_4 = param_4 + 1;
  if (DAT_007f4d20 <= param_4) goto cf_common_exit_00413620;
  goto cf_continue_loop_004133AD;
}

