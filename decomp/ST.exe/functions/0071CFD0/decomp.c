
int FUN_0071cfd0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  void *unaff_EDI;
  int *piVar9;
  undefined4 local_74;
  undefined4 local_70 [16];
  undefined4 local_30 [4];
  undefined4 local_20;
  int *local_1c;
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
    iVar4 = FUN_006ad4d0(s_E__Ourlib__sbutton_cpp_007f0a30,0x1aa,0,iVar4,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    FUN_006a5e40(0xffff,0,0x7f0a30,0x1ab);
    return 0xffff;
  }
  switch(param_1[4]) {
  case 2:
    local_c = (int *)param_1[5];
    if (local_c != (int *)0x0) {
      local_10[8] = local_c[1];
      local_10[7] = *local_c;
      local_10[9] = local_c[2];
      local_10[10] = local_c[3];
      local_10[0xb] = local_c[4];
      local_10[0xc] = local_c[5];
      piVar8 = local_c + 6;
      piVar9 = local_10 + 0x4d;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      local_10[0x54] = (int)local_10;
      piVar8 = local_c + 0xe;
      piVar9 = local_10 + 0x55;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      local_10[0x5c] = (int)local_10;
      piVar8 = local_c + 0x16;
      piVar9 = local_10 + 0x5e;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      local_10[0x65] = (int)local_10;
      piVar8 = local_c + 0x1e;
      piVar9 = local_10 + 0xf;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      local_10[0x16] = (int)local_10;
      piVar8 = local_c + 0x27;
      piVar9 = local_10 + 0x18;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      local_10[0x1f] = (int)local_10;
      local_10[0x17] = local_c[0x26];
      local_10[0x22] = local_c[0x2f];
      piVar8 = local_c + 0x30;
      piVar9 = local_10 + 0x23;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      local_10[0x2a] = (int)local_10;
      piVar8 = local_c + 0x39;
      piVar9 = local_10 + 0x2c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      local_10[0x33] = (int)local_10;
      local_10[0x2b] = local_c[0x38];
      local_10[0x36] = local_c[0x41];
      local_10[0x4b] = local_c[0x49];
      local_10[0x4c] = local_c[0x4a];
      local_10[0xd] = (uint)(local_c[0x42] == 0);
      local_10[0xe] = (uint)(local_c[0x43] == 0);
      local_10[0x78] = local_c[0x5e];
      switch(local_10[8]) {
      case 2:
        local_10[0x69] = local_c[0x44];
        local_10[0x6a] = local_c[0x45];
        break;
      case 3:
        local_10[0x76] = local_c[0x44];
        local_10[0x77] = local_c[0x45];
        break;
      case 4:
      case 5:
      case 7:
        local_10[0x6c] = local_c[0x44];
        local_10[0x6d] = local_c[0x45];
        local_10[0x6e] = local_c[0x46];
        local_10[0x6f] = local_c[0x47];
        local_10[0x6a] = local_c[0x48];
      }
      local_10[0x7a] = 0;
      iVar4 = FUN_006e51b0(local_10[4]);
      local_10[0x70] = iVar4;
      local_10[0x79] = 0;
      piVar8 = local_c + 0x4b;
      piVar9 = local_10 + 0x37;
      for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      local_10[0x66] = 0;
      local_10[0x67] = 0;
      local_10[0x71] = 0;
      local_10[0x72] = 0;
      local_10[0x73] = 0;
      local_10[0x74] = 0;
      break;
    }
    local_8 = 0xffff;
    goto LAB_0071d51b;
  case 6:
    if ((local_10[0x4b] != 0) && ((*(byte *)(param_1 + 6) & 1) == 0)) {
      DAT_00858df8 = (undefined4 *)local_74;
      return 0;
    }
    break;
  case 8:
    if ((local_10[7] & 0x70000000U) != 0) {
      local_1c = (int *)local_10[2];
      local_20 = 0x13;
      local_18 = 0;
      iVar4 = FUN_006e6000(local_10,3,1,local_30);
      if (iVar4 == 0) {
        if ((((*(byte *)(local_10 + 0x37) & 8) != 0) && (local_10[0x38] != 0)) ||
           ((char)local_10[0x38] != '\0')) {
          local_10[0x44] = local_10[2];
          local_10[0x3c] = local_10[2];
          local_10[0x45] = 2;
          local_10[0x3d] = 2;
          local_10[0x3e] = 0x2c;
          local_10[0x46] = 0x2e;
          local_20 = 0x10;
          local_1c = local_10 + 0x37;
          local_8 = FUN_006e6000(local_10,3,1,local_30);
          if (local_8 != 0) break;
          local_10[0x4a] = 1;
        }
        local_10[0x7a] = 0;
        if (local_10[0x4b] != 0) {
          local_10[7] = local_10[7] & 0x8fffffff;
          (**(code **)(*local_10 + 4))();
          DAT_00858df8 = (undefined4 *)local_74;
          return 0;
        }
      }
      else {
        local_8 = 0xffff;
      }
    }
    break;
  case 9:
    if ((local_10[7] & 0x70000000U) == 0) {
      local_1c = local_10 + 0x37;
      if ((((*(byte *)(local_10 + 0x37) & 8) != 0) && (local_10[0x38] != 0)) ||
         ((char)local_10[0x38] != '\0')) {
        local_20 = 0x11;
        FUN_006e6000(local_10,3,1,local_30);
        local_10[0x4a] = 0;
      }
      local_1c = (int *)local_10[2];
      local_20 = 0x14;
      FUN_006e6000(local_10,3,1,local_30);
    }
    break;
  case 0x20:
    uVar5 = param_1[5];
    local_10[7] = local_10[7] & 0xff000000U | uVar5;
    if ((uVar5 & 0xffffff) == 0) {
      if (local_10[0x20] != 0) {
        if (local_10[0x1c] != 0) {
          FUN_006e5fe0(local_10,local_10 + 0x18);
        }
        local_10[0x20] = 0;
      }
      if (local_10[0x21] != 0) {
        local_10[0x21] = 0;
      }
    }
    local_10[0x66] = 0;
    local_10[0x67] = 0;
    local_10[0x7a] = 0;
    iVar4 = (**(code **)(*local_10 + 4))();
    if (iVar4 != 0) {
      local_8 = 0xffff;
    }
    break;
  case 0x2b:
    *(short *)(param_1 + 5) = (short)local_10[0x72];
    break;
  case 0x52:
    local_10[0xb] = (uint)*(ushort *)(param_1 + 5);
    local_10[0xc] = (uint)*(ushort *)((int)param_1 + 0x16);
    break;
  case 0x5a:
    local_10[0x45] = 2;
    local_10[0x44] = local_10[2];
    local_10[0x3c] = local_10[2];
    local_10[0x3d] = 2;
    local_10[0x3e] = 0x2c;
    local_10[0x46] = 0x2e;
    break;
  case 0x60:
    uVar5 = (uint)*(ushort *)(param_1 + 6);
    uVar7 = (uint)*(ushort *)((int)param_1 + 0x1a);
    iVar4 = local_10[9];
    if ((((((int)uVar5 < iVar4) || (local_10[0xb] + iVar4 <= (int)uVar5)) ||
         (iVar6 = local_10[10], (int)uVar7 < iVar6)) || (local_10[0xc] + iVar6 <= (int)uVar7)) ||
       (((iVar1 = local_10[0x4b], iVar1 != 0 && (iVar1 != -1)) &&
        (bVar3 = FUN_006b55c0(iVar1,local_10[0x4c],uVar5 - iVar4,uVar7 - iVar6),
        CONCAT31(extraout_var,bVar3) == 0)))) {
      local_10[0x72] = 0;
    }
    else {
      local_10[0x72] = 1;
    }
  }
LAB_0071d51b:
  uVar5 = local_10[7];
  if ((uVar5 == 0) || ((uVar5 & 0xf0000000) != 0)) goto switchD_0071d549_caseD_1;
  switch(param_1[4]) {
  case 0:
    switch(local_10[8]) {
    case 2:
      if (local_10[0x66] == 0) break;
      iVar4 = FUN_006e51b0(local_10[4]);
      if (local_10[0x6b] == 0) {
        if ((uint)(iVar4 - local_10[0x70]) < (uint)local_10[0x6a]) break;
        local_10[0x79] = local_10[0x79] + 1;
        if (local_10[0x5d] != 0) {
          local_10[0x5a] = local_10[7];
          if (local_10[0x78] != 0) {
            *(short *)(local_10 + 0x5b) = (short)local_10[0x79];
          }
          goto LAB_0071dc9d;
        }
        local_10[0x52] = local_10[7];
        if (local_10[0x78] != 0) {
          *(short *)(local_10 + 0x53) = (short)local_10[0x79];
        }
        iVar6 = FUN_006e6020(local_10,local_10 + 0x4d);
        if (iVar6 != 0) {
          local_8 = 0xffff;
          break;
        }
      }
      else {
        if ((uint)(iVar4 - local_10[0x70]) < (uint)local_10[0x69]) break;
        local_10[0x6b] = 0;
        local_10[0x79] = local_10[0x79] + 1;
        if (local_10[0x5d] == 0) {
          local_10[0x52] = local_10[7];
          if (local_10[0x78] != 0) {
            *(short *)(local_10 + 0x53) = (short)local_10[0x79];
          }
          iVar6 = FUN_006e6020(local_10,local_10 + 0x4d);
          if (iVar6 != 0) {
            local_8 = 0xffff;
            break;
          }
        }
        else {
          local_10[0x5a] = local_10[7];
          if (local_10[0x78] != 0) {
            *(short *)(local_10 + 0x5b) = (short)local_10[0x79];
          }
LAB_0071dc9d:
          iVar6 = FUN_006e6020(local_10,local_10 + 0x55);
          if (iVar6 != 0) {
            local_8 = 0xffff;
            break;
          }
        }
      }
      goto LAB_0071ddba;
    default:
      break;
    case 4:
      goto switchD_0071db77_caseD_4;
    case 5:
    case 7:
      if (local_10[0x71] == 0) break;
      if (local_10[uVar5 + 0x6c] + -1 <= local_10[0x7a]) {
        local_10[0x7a] = 0;
        local_10[0x71] = 0;
        local_10[0x5d] = 0;
        if (local_10[7] == 1) {
          if (local_10[0x72] == 0) {
            local_10[0x73] = 0;
            goto LAB_0071dd4e;
          }
        }
        else if ((local_10[7] == 3) && (local_10[0x72] == 0)) {
          local_10[7] = 1;
LAB_0071dd4e:
          local_10[0x67] = 0;
        }
        iVar4 = (**(code **)(*local_10 + 4))();
        if (iVar4 != 0) {
          local_8 = 0xffff;
        }
        break;
      }
switchD_0071db77_caseD_4:
      if ((1 < local_10[uVar5 + 0x6c]) &&
         (iVar4 = FUN_006e51b0(local_10[4]), (uint)local_10[0x6a] < (uint)(iVar4 - local_10[0x70])))
      {
        if (local_10[0x7a] < local_10[local_10[7] + 0x6c] + -1) {
          iVar6 = local_10[0x7a] + 1;
        }
        else {
          iVar6 = 0;
        }
        local_10[0x7a] = iVar6;
        iVar6 = (**(code **)(*local_10 + 4))();
        if (iVar6 == 0) {
LAB_0071ddba:
          local_10[0x70] = iVar4;
        }
        else {
          local_8 = 0xffff;
        }
      }
    }
  default:
    goto switchD_0071d549_caseD_1;
  case 0x2c:
    goto switchD_0071d549_caseD_2c;
  case 0x2e:
    goto switchD_0071d549_caseD_2e;
  case 0x60:
    if (local_10[0x74] != 0) goto switchD_0071d549_caseD_1;
    iVar4 = local_10[9];
    uVar5 = (uint)*(ushort *)(param_1 + 6);
    uVar7 = (uint)*(ushort *)((int)param_1 + 0x1a);
    if (((iVar4 <= (int)uVar5) && ((int)uVar5 < local_10[0xb] + iVar4)) &&
       (((iVar6 = local_10[10], iVar6 <= (int)uVar7 && ((int)uVar7 < local_10[0xc] + iVar6)) &&
        (((iVar1 = local_10[0x4b], iVar1 == 0 || (iVar1 == -1)) ||
         (bVar3 = FUN_006b55c0(iVar1,local_10[0x4c],uVar5 - iVar4,uVar7 - iVar6),
         CONCAT31(extraout_var_00,bVar3) != 0)))))) {
      switch(local_10[8]) {
      case 1:
      case 4:
switchD_0071d5d0_caseD_1:
        if (local_10[0x67] == 0) {
          local_10[7] = 3;
          local_10[0x7a] = 0;
          iVar4 = (**(code **)(*local_10 + 4))();
          if (iVar4 == 0) {
            local_10[0x67] = 1;
            local_10[0x71] = 1;
          }
          else {
            local_8 = 0xffff;
          }
        }
        break;
      case 5:
      case 7:
        if (local_10[0x73] == 0) goto switchD_0071d5d0_caseD_1;
      }
      local_10[0x72] = 1;
      if (local_10[0x66] == 0) {
        local_10[0x68] = local_10[7];
      }
      goto switchD_0071d549_caseD_1;
    }
    if (((local_10[0x66] == 0) && (local_10[0x67] == 0)) && (local_10[0x72] == 0))
    goto switchD_0071d549_caseD_1;
    switch(local_10[8]) {
    case 3:
      local_10[7] = local_10[0x68];
      goto LAB_0071d6f7;
    default:
switchD_0071d677_caseD_4:
      local_10[7] = 1;
      local_10[0x7a] = 0;
LAB_0071d6f7:
      local_10[0x67] = 0;
      break;
    case 5:
    case 7:
      local_10[0x73] = 0;
      if (local_10[0x71] == 0) {
        local_10[7] = 1;
        local_10[0x67] = 0;
        local_10[0x7a] = 0;
      }
      break;
    case 6:
      if (local_10[0x5d] == 0) {
        piVar8 = local_10 + 0x4d;
        local_10[0x52] = 1;
      }
      else {
        piVar8 = local_10 + 0x55;
        local_10[0x5a] = 1;
      }
      iVar4 = FUN_006e6020(local_10,piVar8);
      if (iVar4 == 0) goto switchD_0071d677_caseD_4;
      local_8 = 0xffff;
    }
    iVar4 = (**(code **)(*local_10 + 4))();
    if (iVar4 == 0) {
      local_10[0x66] = 0;
      local_10[0x72] = 0;
      local_10[0x5d] = 0;
    }
    else {
      local_8 = 0xffff;
    }
    goto switchD_0071d549_caseD_1;
  case 0x61:
    goto switchD_0071d549_caseD_61;
  case 0x62:
    break;
  case 99:
    goto switchD_0071d549_caseD_63;
  case 100:
    uVar5 = (uint)*(ushort *)(param_1 + 6);
    uVar7 = (uint)*(ushort *)((int)param_1 + 0x1a);
    if (local_10[0x59] == 0) goto switchD_0071d549_caseD_1;
    iVar4 = local_10[9];
    local_10[0x5d] = 0;
    if (((((iVar4 <= (int)uVar5) && ((int)uVar5 <= local_10[0xb] + iVar4)) &&
         (iVar6 = local_10[10], iVar6 <= (int)uVar7)) && ((int)uVar7 <= local_10[0xc] + iVar6)) &&
       (((iVar1 = local_10[0x4b], iVar1 == 0 || (iVar1 == -1)) ||
        (bVar3 = FUN_006b55c0(iVar1,local_10[0x4c],uVar5 - iVar4,uVar7 - iVar6),
        CONCAT31(extraout_var_03,bVar3) != 0)))) {
      local_10[0x5d] = 1;
    }
  }
  iVar4 = local_10[9];
  uVar5 = (uint)*(ushort *)(param_1 + 6);
  uVar7 = (uint)*(ushort *)((int)param_1 + 0x1a);
  if ((((iVar4 <= (int)uVar5) && ((int)uVar5 <= local_10[0xb] + iVar4)) &&
      ((iVar6 = local_10[10], iVar6 <= (int)uVar7 && ((int)uVar7 <= local_10[0xc] + iVar6)))) &&
     (((iVar1 = local_10[0x4b], iVar1 == 0 || (iVar1 == -1)) ||
      (bVar3 = FUN_006b55c0(iVar1,local_10[0x4c],uVar5 - iVar4,uVar7 - iVar6),
      CONCAT31(extraout_var_04,bVar3) != 0)))) {
switchD_0071d549_caseD_2e:
    if (local_10[0x66] != 0) {
      if (local_10[8] == 1) {
        local_10[7] = (-(uint)(local_10[0x72] != 0) & 2) + 1;
      }
      else if (local_10[8] == 3) {
        if ((local_10[0x68] == 3) && (local_10[0x76] != 0)) {
          local_10[7] = 3;
        }
        else {
          local_10[7] = (-(uint)(local_10[0x68] != 3) & 2) + 1;
        }
      }
      else {
        local_10[7] = 1;
      }
      local_10[0x7a] = 0;
      local_10[0x71] = 1;
      iVar4 = (**(code **)(*local_10 + 4))();
      if (iVar4 == 0) {
        if (local_10[8] == 2) {
          FUN_006e51b0(local_10[4]);
        }
        else if (local_10[8] != 7) {
          if (local_10[0x5d] == 0) {
            piVar8 = local_10 + 0x4d;
            local_10[0x52] = local_10[7];
          }
          else {
            piVar8 = local_10 + 0x55;
            local_10[0x5a] = local_10[7];
          }
          iVar4 = FUN_006e6020(local_10,piVar8);
          if (iVar4 != 0) {
            local_8 = 0xffff;
          }
        }
        local_10[0x66] = 0;
        local_10[0x73] = 1;
        local_10[0x74] = 0;
        local_10[0x5d] = 0;
      }
      else {
        local_8 = 0xffff;
      }
    }
  }
  goto switchD_0071d549_caseD_1;
switchD_0071d549_caseD_63:
  if (local_10[0x59] == 0) goto switchD_0071d549_caseD_1;
  uVar5 = (uint)*(ushort *)(param_1 + 6);
  uVar7 = (uint)*(ushort *)((int)param_1 + 0x1a);
  iVar4 = local_10[9];
  local_10[0x5d] = 0;
  if (((iVar4 <= (int)uVar5) && ((int)uVar5 < local_10[0xb] + iVar4)) &&
     (((iVar6 = local_10[10], iVar6 <= (int)uVar7 && ((int)uVar7 < local_10[0xc] + iVar6)) &&
      (((iVar1 = local_10[0x4b], iVar1 == 0 || (iVar1 == -1)) ||
       (bVar3 = FUN_006b55c0(iVar1,local_10[0x4c],uVar5 - iVar4,uVar7 - iVar6),
       CONCAT31(extraout_var_01,bVar3) != 0)))))) {
    local_10[0x5d] = 1;
    local_10[0x72] = 1;
  }
switchD_0071d549_caseD_61:
  iVar4 = local_10[9];
  uVar5 = (uint)*(ushort *)(param_1 + 6);
  uVar7 = (uint)*(ushort *)((int)param_1 + 0x1a);
  if (((((iVar4 <= (int)uVar5) && ((int)uVar5 < local_10[0xb] + iVar4)) &&
       (iVar6 = local_10[10], iVar6 <= (int)uVar7)) && ((int)uVar7 < local_10[0xc] + iVar6)) &&
     (((iVar1 = local_10[0x4b], iVar1 == 0 || (iVar1 == -1)) ||
      (bVar3 = FUN_006b55c0(iVar1,local_10[0x4c],uVar5 - iVar4,uVar7 - iVar6),
      CONCAT31(extraout_var_02,bVar3) != 0)))) {
    local_10[0x72] = 1;
switchD_0071d549_caseD_2c:
    if (local_10[0x66] == 0) {
      local_10[0x74] = (uint)(local_10[0x72] == 0);
      switch(local_10[8]) {
      case 2:
        local_10[0x6b] = 1;
        iVar4 = FUN_006e51b0(local_10[4]);
        local_10[0x70] = iVar4;
        local_10[0x79] = 0;
        if (local_10[0x5d] == 0) {
          local_10[0x52] = 2;
          if (local_10[0x78] != 0) {
            *(short *)(local_10 + 0x53) = (short)local_10[0x79];
          }
          iVar4 = FUN_006e6020(local_10,local_10 + 0x4d);
          if (iVar4 != 0) {
            local_8 = 0xffff;
          }
        }
        else {
          local_10[0x5a] = 2;
          if (local_10[0x78] != 0) {
            *(short *)(local_10 + 0x5b) = (short)local_10[0x79];
          }
          iVar4 = FUN_006e6020(local_10,local_10 + 0x55);
          if (iVar4 != 0) {
            local_8 = 0xffff;
          }
        }
        break;
      case 3:
        if ((local_10[0x77] != 0) && (local_10[7] == 3)) goto switchD_0071d549_caseD_1;
        local_10[0x68] = local_10[7];
        break;
      case 6:
      case 7:
        if (local_10[0x5d] == 0) {
          piVar8 = local_10 + 0x4d;
          local_10[0x52] = 2;
        }
        else {
          piVar8 = local_10 + 0x55;
          local_10[0x5a] = 2;
        }
        iVar4 = FUN_006e6020(local_10,piVar8);
        if (iVar4 == 0) {
          local_10[0x5d] = 0;
        }
        else {
          local_8 = 0xffff;
        }
      }
      local_10[7] = 2;
      local_10[0x7a] = 0;
      local_10[0x71] = 1;
      iVar4 = (**(code **)(*local_10 + 4))();
      if (iVar4 == 0) {
        local_10[0x66] = 1;
      }
      else {
        local_8 = 0xffff;
      }
    }
  }
switchD_0071d549_caseD_1:
  if (local_8 != 0) {
    FUN_006a5e40(local_8,DAT_007ed77c,0x7f0a30,0x1a6);
  }
  iVar4 = FUN_0072b780(param_1);
  if (iVar4 != 0) {
    local_8 = iVar4;
    FUN_006a5e40(iVar4,DAT_007ed77c,0x7f0a30,0x1a8);
  }
  DAT_00858df8 = (undefined4 *)local_74;
  return iVar4;
}

