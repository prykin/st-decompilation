
int FUN_00722410(int *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  int *piVar11;
  void *unaff_EDI;
  int *piVar12;
  char *pcVar13;
  undefined4 local_74;
  undefined4 local_70 [16];
  undefined4 local_30 [2];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int *local_10;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_74 = DAT_00858df8;
  DAT_00858df8 = &local_74;
  iVar4 = __setjmp3(local_70,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_74;
    iVar4 = FUN_006ad4d0(s_E__Ourlib__sedit_cpp_007f0b08,0x356,0,iVar4,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(0xffff,0,0x7f0b08,0x357);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  switch(param_1[4]) {
  case 2:
    local_c = (int *)param_1[5];
    if (local_c == (int *)0x0) {
LAB_00722da6:
      local_8 = 0xffff;
    }
    else {
      local_10[7] = *local_c;
      local_10[8] = local_c[1];
      local_10[0x85] = local_c[2];
      local_10[9] = local_c[3];
      local_10[10] = local_c[4];
      local_10[0xb] = local_c[5];
      local_10[0xc] = local_c[6];
      local_10[0x4d] = local_c[7];
      local_10[0x4e] = local_c[8];
      local_10[0x74] = local_c[0x222];
      uVar9 = local_c[0x219];
      local_10[0x73] = uVar9;
      if (uVar9 < 0xff) {
        local_10[0x73] = 0xff;
      }
      piVar11 = local_c + 0x11;
      piVar12 = local_10 + 0x53;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar12 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar12 = piVar12 + 1;
      }
      local_10[0x62] = (int)local_10;
      piVar11 = local_c + 9;
      piVar12 = local_10 + 0x5b;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar12 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar12 = piVar12 + 1;
      }
      local_10[0x5a] = (int)local_10;
      piVar11 = local_c + 0x19;
      piVar12 = local_10 + 0xf;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar12 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar12 = piVar12 + 1;
      }
      local_10[0x16] = (int)local_10;
      piVar11 = local_c + 0x21;
      piVar12 = local_10 + 99;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar12 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar12 = piVar12 + 1;
      }
      local_10[0x6a] = (int)local_10;
      piVar11 = local_c + 0x21a;
      piVar12 = local_10 + 0x6b;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar12 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar12 = piVar12 + 1;
      }
      local_10[0x72] = (int)local_10;
      local_10[0x84] = 0;
      local_10[0x83] = 0;
      local_10[0x82] = 0;
      local_10[0x81] = 0;
      local_10[0x52] = 0;
      local_10[0x51] = 0;
      local_10[0x50] = 0;
      local_10[0x4f] = 0;
      *(undefined1 *)((int)local_10 + 0x1d7) = 0;
      local_10[0x76] = 0;
      local_10[0xd] = (uint)(local_c[0x217] == 0);
      local_10[0xe] = (uint)(local_c[0x218] == 0);
      if (local_c[0x29] != 0) {
        iVar4 = local_10[2];
        local_c[0x115] = 2;
        local_c[0x114] = iVar4;
        local_c[0x116] = 0x2c;
        local_c[0x11a] = 1;
        local_c[0x11b] = local_10[0x83];
        (**(code **)(*(int *)local_10[3] + 8))(local_c[0x29],local_10 + 0x7f,0,local_c + 0x2a,0);
      }
      piVar11 = local_c;
      if (local_c[0x120] != 0) {
        local_c[0x20b] = local_10[2];
        local_c[0x20c] = 2;
        local_c[0x20d] = 0x2d;
        iVar4 = FUN_007219a0((int)local_10);
        piVar11[0x211] = iVar4;
        piVar11[0x212] = local_10[0x84];
        (**(code **)(*(int *)local_10[3] + 8))(piVar11[0x120],local_10 + 0x80,0,piVar11 + 0x121,0);
      }
LAB_00722674:
      iVar4 = 1;
LAB_00722e81:
      FUN_00721a20(local_10,iVar4);
    }
    break;
  case 3:
    if (local_10[0x7f] != 0) {
      FUN_006e56b0((void *)local_10[3],local_10[0x7f]);
      local_10[0x7f] = 0;
    }
    if (local_10[0x80] != 0) {
      FUN_006e56b0((void *)local_10[3],local_10[0x80]);
      local_10[0x80] = 0;
    }
    break;
  case 8:
    if ((local_10[7] & 0x70000000U) != 0) {
      iVar4 = FUN_006e4290(0x102,0x34,2,local_10[2]);
      if (iVar4 != 0) goto LAB_00722da6;
      if ((local_10[7] & 0xffffffU) == 1) {
        FUN_00722070(local_10,0);
      }
      local_1c = local_10[2];
      local_20 = 0x13;
      local_18 = 0;
      iVar4 = FUN_006e6000(local_10,3,1,local_30);
      goto LAB_00722d9e;
    }
    break;
  case 9:
    if ((local_10[7] & 0x70000000U) == 0) {
      FUN_006e4340((void *)local_10[4],0x102,0x34,2,local_10[2]);
      if ((local_10[7] & 0xffffffU) == 1) {
        FUN_00721cd0(local_10,0);
      }
      local_1c = local_10[2];
      local_20 = 0x14;
      FUN_006e6000(local_10,3,1,local_30);
    }
    break;
  case 0x20:
    uVar9 = local_10[7] & 0xff000000U | param_1[5];
    if (local_10[7] != uVar9) {
      local_10[7] = uVar9;
      local_10[0x60] = uVar9;
      if ((local_10[0x5f] != 0) && (iVar4 = FUN_006e6020(local_10,local_10 + 0x5b), iVar4 != 0))
      goto LAB_00722da6;
      if ((local_10[7] & 0xff000000U) == 0) {
        uVar9 = local_10[7] & 0xffffff;
        if (uVar9 == 1) {
          FUN_00722070(local_10,0);
          iVar4 = (**(code **)(*local_10 + 4))();
        }
        else {
          if (uVar9 == 0) {
            FUN_00721cd0(local_10,0);
          }
          iVar4 = (**(code **)(*local_10 + 4))();
        }
        goto LAB_00722d9e;
      }
    }
    break;
  case 0x22:
    if ((local_10[0x4e] != 0) && (*(int *)(local_10[0x4e] + 8) != 0)) {
      if ((*(byte *)(local_10 + 8) & 4) == 0) {
        uVar9 = (uint)*(ushort *)((int)param_1 + 0x16);
        uVar10 = (uint)*(ushort *)(param_1 + 5);
        goto LAB_00722e29;
      }
      uVar1 = *(ushort *)((int)param_1 + 0x16);
      local_10[0x51] = (uint)uVar1;
      local_10[0x83] = (uint)uVar1;
      uVar1 = *(ushort *)(param_1 + 5);
      local_10[0x52] = (uint)uVar1;
      local_10[0x84] = (uint)uVar1;
      goto LAB_00722e31;
    }
    break;
  case 0x26:
    *(short *)((int)param_1 + 0x16) = (short)local_10[0x83];
    *(short *)(param_1 + 5) = (short)local_10[0x84];
    break;
  case 0x29:
    uVar9 = local_10[8];
    uVar10 = param_1[5];
    local_10[8] = uVar10;
    if (((uVar10 ^ uVar9) & 1) != 0) {
      local_10[0x84] = 0;
      local_10[0x83] = 0;
      local_10[0x82] = 0;
      local_10[0x81] = 0;
      local_10[0x52] = 0;
      local_10[0x51] = 0;
      local_10[0x50] = 0;
      local_10[0x4f] = 0;
      FUN_00721a20(local_10,0);
    }
    *(undefined1 *)((int)local_10 + 0x1d7) = 0;
    local_10[0x76] = 0;
    if ((*(byte *)(local_10 + 8) & 1) != 0) {
      FUN_00721080(local_10,0xfff,local_10[0x83]);
    }
    iVar4 = (**(code **)(*local_10 + 4))();
LAB_00722d9e:
    if (iVar4 != 0) goto LAB_00722da6;
    break;
  case 0x2c:
    if ((local_10[0x4e] != 0) && (*(int *)(local_10[0x4e] + 8) != 0)) {
      if (local_10[7] == 0) {
        if ((*(byte *)(local_10 + 8) & 0x10) != 0) break;
        local_20 = 0x20;
        local_1c = 1;
        (**(code **)*local_10)(local_30);
      }
      if ((*(byte *)(local_10 + 8) & 4) == 0) {
        uVar9 = param_1[5] - local_10[0x51];
      }
      else {
        local_10[0x51] = param_1[5];
        uVar9 = 0;
      }
      FUN_00721080(local_10,local_10[0x84],uVar9);
      iVar4 = (**(code **)(*local_10 + 4))();
      goto LAB_00722e38;
    }
    break;
  case 0x2d:
    if ((local_10[0x4e] != 0) && (*(int *)(local_10[0x4e] + 8) != 0)) {
      if (local_10[7] == 0) {
        if ((*(byte *)(local_10 + 8) & 0x10) != 0) break;
        local_20 = 0x20;
        local_1c = 1;
        (**(code **)*local_10)(local_30);
      }
      if ((*(byte *)(local_10 + 8) & 4) == 0) {
        uVar9 = local_10[0x83];
        uVar10 = param_1[5] - local_10[0x52];
        goto LAB_00722e29;
      }
      local_10[0x52] = param_1[5];
      iVar4 = (**(code **)(*local_10 + 4))();
      if (iVar4 == 0) goto LAB_00722e7f;
      local_8 = 0xffff;
    }
    break;
  case 0x32:
    param_1[5] = local_10[0x4e];
    break;
  case 0x33:
    local_10[0x4e] = param_1[5];
    local_10[0x84] = 0;
    local_10[0x83] = 0;
    local_10[0x82] = 0;
    local_10[0x81] = 0;
    local_10[0x52] = 0;
    local_10[0x51] = 0;
    local_10[0x50] = 0;
    local_10[0x4f] = 0;
    *(undefined1 *)((int)local_10 + 0x1d7) = 0;
    local_10[0x76] = 0;
    if ((*(byte *)(local_10 + 8) & 1) != 0) {
      FUN_00721080(local_10,0xfff,0);
    }
    iVar4 = (**(code **)(*local_10 + 4))();
    if (iVar4 == 0) goto LAB_00722674;
    local_8 = 0xffff;
    break;
  case 0x38:
    uVar9 = local_10[8];
    if ((uVar9 & 2) == 0) {
      local_10[8] = uVar9 | 2;
    }
    else {
      local_10[8] = uVar9 & 0xfffffffd;
    }
    break;
  case 0x42:
    local_10[0x78] = local_10[0x84];
    local_10[0x77] = local_10[0x83];
    local_10[0x79] = local_10[0x51];
    local_10[0x7a] = local_10[0x52];
    local_10[0x7b] = *(int *)(local_10[0x4e] + 8);
    iVar4 = FUN_00720d30((int)local_10);
    local_10[0x7e] = iVar4;
    if ((*(byte *)(local_10 + 8) & 4) == 0) {
      local_10[0x7c] = (uint)(local_10[0x7b] + -1 <= local_10[0x77]);
    }
    else {
      local_10[0x7c] = (uint)(local_10[0x7b] - 1U <= (uint)(local_10[0x79] + iVar4));
    }
    if (local_10[0x79] + local_10[0x77] < *(int *)(local_10[0x4e] + 8)) {
      pcVar13 = *(char **)(*(int *)(local_10[0x4e] + 0x14) + (local_10[0x79] + local_10[0x77]) * 4);
    }
    else {
      pcVar13 = (char *)0x0;
    }
    if (pcVar13 == (char *)0x0) {
      local_10[0x7d] = 0;
    }
    else {
      uVar9 = 0xffffffff;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar8 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar8 != '\0');
      local_10[0x7d] = (uint)(~uVar9 - 1 <= (uint)(local_10[0x78] + local_10[0x7a]));
    }
    break;
  case 0x43:
    iVar4 = param_1[5];
    local_10[0x4e] = iVar4;
    if ((local_10[8] & 1U) == 0) {
      if ((local_10[8] & 4U) == 0) {
        if (local_10[0x7c] == 0) {
          uVar9 = local_10[0x83];
        }
        else {
          uVar9 = *(int *)(iVar4 + 8) - 1;
        }
        iVar4 = 0xfff;
        if (local_10[0x7d] == 0) {
          iVar4 = local_10[0x84];
        }
      }
      else {
        if (local_10[0x7c] != 0) {
          local_10[0x51] = *(int *)(iVar4 + 8) - local_10[0x7e];
        }
        iVar4 = 0xfff;
        if (local_10[0x7d] == 0) {
          iVar4 = local_10[0x84];
        }
        uVar9 = 0;
      }
    }
    else {
      iVar4 = 0xfff;
      if (local_10[0x7d] == 0) {
        iVar4 = local_10[0x84];
      }
      uVar9 = local_10[0x83];
    }
    FUN_00721080(local_10,iVar4,uVar9);
    *(undefined1 *)((int)local_10 + 0x1d7) = 0;
    local_10[0x76] = 0;
    iVar4 = (**(code **)(*local_10 + 4))();
    if (iVar4 == 0) goto LAB_00722674;
    local_8 = 0xffff;
    break;
  case 0x52:
    local_10[0xb] = (uint)*(ushort *)(param_1 + 5);
    local_10[0xc] = (uint)*(ushort *)((int)param_1 + 0x16);
    local_10[0x84] = 0;
    local_10[0x83] = 0;
    local_10[0x82] = 0;
    local_10[0x81] = 0;
    local_10[0x52] = 0;
    local_10[0x51] = 0;
    local_10[0x50] = 0;
    local_10[0x4f] = 0;
    *(undefined1 *)((int)local_10 + 0x1d7) = 0;
    local_10[0x76] = 0;
    if ((*(byte *)(local_10 + 8) & 1) != 0) {
      FUN_00721080(local_10,0xfff,0);
    }
    break;
  case 0x57:
    iVar4 = param_1[5];
    if (iVar4 < 0) {
      iVar4 = FUN_00720d30((int)local_10);
    }
    FUN_00721080(local_10,local_10[0x84],local_10[0x83] + iVar4);
    iVar4 = (**(code **)(*local_10 + 4))();
    if (iVar4 == 0) goto LAB_00722e7f;
    local_8 = 0xffff;
    break;
  case 0x58:
    iVar4 = param_1[5];
    if (iVar4 < 0) {
      iVar4 = FUN_00720d30((int)local_10);
    }
    uVar10 = local_10[0x84];
    uVar9 = local_10[0x83] - iVar4;
LAB_00722e29:
    FUN_00721080(local_10,uVar10,uVar9);
LAB_00722e31:
    iVar4 = (**(code **)(*local_10 + 4))();
LAB_00722e38:
    if (iVar4 == 0) {
LAB_00722e7f:
      iVar4 = 0;
      goto LAB_00722e81;
    }
    local_8 = 0xffff;
    break;
  case 0x59:
    iVar4 = FUN_00720d30((int)local_10);
    if ((uint)(iVar4 + local_10[0x51]) < *(uint *)(local_10[0x4e] + 8)) {
      local_10[0x51] = *(uint *)(local_10[0x4e] + 8) - iVar4;
      iVar4 = (**(code **)(*local_10 + 4))();
      if (iVar4 == 0) goto LAB_00722e7f;
      local_8 = 0xffff;
    }
    break;
  case 0x61:
    uVar10 = (uint)*(ushort *)(param_1 + 6);
    uVar9 = (uint)*(ushort *)((int)param_1 + 0x1a);
    if ((local_10[7] != 0) || ((*(byte *)(local_10 + 8) & 0x10) == 0)) {
      if ((local_10[9] < (int)uVar10) &&
         (((((int)uVar10 < local_10[0xb] + local_10[9] && (local_10[10] < (int)uVar9)) &&
           ((int)uVar9 < local_10[0xc] + local_10[10])) && (local_10[0x4e] != 0)))) {
        if (local_10[7] == 0) {
          FUN_00722070(local_10,1);
        }
        FUN_00720e70(local_10,uVar10 - local_10[9],uVar9 - local_10[10]);
      }
      else {
        bVar3 = false;
        local_24 = 2;
        local_20 = 0x2b;
        if (local_10[0x7f] != 0) {
          local_28 = local_10[0x7f];
          FUN_006e6060(local_10,local_30);
          if ((short)local_1c != 0) {
            bVar3 = true;
          }
        }
        if (local_10[0x80] != 0) {
          local_28 = local_10[0x80];
          FUN_006e6060(local_10,local_30);
          if ((short)local_1c != 0) {
            bVar3 = true;
          }
        }
        if (local_10[7] != 1) goto switchD_00722eb2_caseD_38;
        if (bVar3) break;
        FUN_00721cd0(local_10,1);
      }
      iVar4 = (**(code **)(*local_10 + 4))();
      goto LAB_00722d9e;
    }
  }
  if ((local_10[7] != 1) || (local_10[0x4e] == 0)) goto switchD_00722eb2_caseD_38;
  switch(param_1[4]) {
  case 0x34:
    if (((*(byte *)(local_10 + 8) & 4) != 0) || (uVar9 = FUN_007348d0(param_1[5]), uVar9 != 0))
    goto switchD_00722eb2_caseD_38;
    *(char *)(*(char *)((int)local_10 + 0x1d7) + 0x1d4 + (int)local_10) = (char)param_1[5];
    cVar8 = *(char *)((int)local_10 + 0x1d7) + '\x01';
    *(char *)((int)local_10 + 0x1d7) = cVar8;
    *(undefined1 *)(cVar8 + 0x1d4 + (int)local_10) = 0;
    if (local_10[0x76] == 0) {
      BVar5 = IsDBCSLeadByte((BYTE)param_1[5]);
      if (BVar5 != 0) {
        local_10[0x76] = 1;
        goto switchD_00722eb2_caseD_38;
      }
    }
    else {
      local_10[0x76] = 0;
    }
    iVar4 = FUN_00721830(local_10,(char *)(local_10 + 0x75));
    if (iVar4 == 0) {
      *(undefined1 *)((int)local_10 + 0x1d7) = 0;
      *(char *)(local_10 + 0x75) = '\0';
      iVar4 = (**(code **)(*local_10 + 4))();
      goto LAB_0072301d;
    }
    goto LAB_007231f1;
  case 0x35:
    FUN_00721cd0(local_10,1);
    iVar4 = (**(code **)(*local_10 + 4))();
    goto LAB_007231ed;
  case 0x36:
    if ((*(byte *)(local_10 + 8) & 4) == 0) {
      uVar9 = local_10[0x83];
      iVar4 = local_10[0x84] + -1;
LAB_0072300e:
      FUN_00721520(local_10,iVar4,uVar9);
      iVar4 = (**(code **)(*local_10 + 4))();
LAB_0072301d:
      if (iVar4 != 0) {
        local_8 = 0xffff;
        goto switchD_00722eb2_caseD_38;
      }
    }
    goto LAB_00722fb6;
  case 0x37:
    if ((*(byte *)(local_10 + 8) & 4) == 0) {
      uVar9 = local_10[0x83];
      iVar4 = local_10[0x84];
      goto LAB_0072300e;
    }
LAB_00722fb6:
    FUN_00721a20(local_10,1);
  default:
    goto switchD_00722eb2_caseD_38;
  case 0x39:
    uVar9 = local_10[8];
    if ((uVar9 & 4) != 0) goto switchD_00722eb2_caseD_38;
    if ((uVar9 & 1) == 0) {
      if (((uVar9 & 2) != 0) || (uVar9 = FUN_00721340((int)local_10), uVar9 == 0)) {
        FUN_00721080(local_10,0xffe,local_10[0x83] + 1);
        iVar4 = (**(code **)(*local_10 + 4))();
        if (iVar4 == 0) goto LAB_00722fb6;
      }
      goto LAB_007231f1;
    }
    if (local_10[0x67] == 0) goto switchD_00722eb2_caseD_38;
    iVar4 = FUN_006e5fe0(local_10,local_10 + 99);
    goto LAB_007231ed;
  case 0x3a:
    if ((*(byte *)(local_10 + 8) & 4) == 0) {
      FUN_00721080(local_10,local_10[0x84],local_10[0x83] - 1);
    }
    else if (local_10[0x51] != 0) {
      local_10[0x51] = local_10[0x51] + -1;
    }
    iVar4 = (**(code **)(*local_10 + 4))();
    break;
  case 0x3b:
    if ((*(byte *)(local_10 + 8) & 4) == 0) {
      FUN_00721080(local_10,local_10[0x84],local_10[0x83] + 1);
    }
    else {
      iVar4 = local_10[0x51];
      iVar6 = FUN_00720d30((int)local_10);
      if (iVar4 < *(int *)(local_10[0x4e] + 8) - iVar6) {
        local_10[0x51] = iVar4 + 1;
      }
    }
    iVar4 = (**(code **)(*local_10 + 4))();
    if (iVar4 != 0) {
      local_8 = 0xffff;
      goto switchD_00722eb2_caseD_38;
    }
    goto LAB_0072306b;
  case 0x3c:
    if ((*(byte *)(local_10 + 8) & 4) == 0) {
      FUN_00721080(local_10,local_10[0x84] + 1,local_10[0x83]);
      iVar4 = (**(code **)(*local_10 + 4))();
    }
    else {
      iVar4 = local_10[0x52];
      iVar6 = FUN_00720de0((int)local_10);
      iVar7 = FUN_007219a0((int)local_10);
      if (iVar4 < iVar7 - iVar6) {
        local_10[0x52] = iVar4 + 1;
      }
      iVar4 = (**(code **)(*local_10 + 4))();
    }
    break;
  case 0x3d:
    if ((*(byte *)(local_10 + 8) & 4) == 0) {
      FUN_00721080(local_10,local_10[0x84] + -1,local_10[0x83]);
    }
    else if (local_10[0x52] != 0) {
      local_10[0x52] = local_10[0x52] + -1;
      iVar4 = (**(code **)(*local_10 + 4))();
      break;
    }
    iVar4 = (**(code **)(*local_10 + 4))();
    break;
  case 0x3e:
    FUN_00721080(local_10,0xffe,local_10[0x83]);
    iVar4 = (**(code **)(*local_10 + 4))();
    break;
  case 0x3f:
    FUN_00721080(local_10,0xfff,local_10[0x83]);
    iVar4 = (**(code **)(*local_10 + 4))();
    break;
  case 0x40:
    iVar4 = local_10[0x6f];
    local_10[0x70] = 0;
    goto joined_r0x007231dd;
  case 0x41:
    iVar4 = local_10[0x6f];
    local_10[0x70] = 1;
joined_r0x007231dd:
    if (iVar4 == 0) goto switchD_00722eb2_caseD_38;
    iVar4 = FUN_006e6020(local_10,local_10 + 0x6b);
LAB_007231ed:
    if (iVar4 == 0) goto switchD_00722eb2_caseD_38;
    goto LAB_007231f1;
  }
  if (iVar4 == 0) {
LAB_0072306b:
    FUN_00721a20(local_10,0);
  }
  else {
LAB_007231f1:
    local_8 = 0xffff;
  }
switchD_00722eb2_caseD_38:
  if (local_8 != 0) {
    FUN_006a5e40(local_8,DAT_007ed77c,0x7f0b08,0x34e);
  }
  iVar4 = FUN_0072b780(param_1);
  local_8 = iVar4;
  if (iVar4 != 0) {
    FUN_006a5e40(iVar4,DAT_007ed77c,0x7f0b08,0x350);
  }
  if (param_1[4] == 0x24) {
    FUN_00721bf0(param_1);
  }
  DAT_00858df8 = (undefined4 *)local_74;
  return iVar4;
}

