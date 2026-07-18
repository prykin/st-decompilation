
int FUN_0072b780(int *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar6;
  undefined3 extraout_var_03;
  DWORD DVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar9;
  undefined4 uVar10;
  undefined4 local_70;
  undefined4 local_6c [16];
  int local_2c [5];
  int *local_18;
  undefined2 local_14;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_70 = DAT_00858df8;
  DAT_00858df8 = &local_70;
  iVar4 = __setjmp3(local_6c,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_70;
    iVar4 = FUN_006ad4d0(s_E__Ourlib_Scontrol_cpp_007f10c0,0x10a,0,iVar4,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(0xffff,0,0x7f10c0,0x10b);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  switch(param_1[4]) {
  case 0:
    iVar4 = local_8;
    if (((local_c[0x17] != 0) && (local_c[0x21] != 0)) &&
       ((DVar7 = timeGetTime(), iVar4 = local_8, (uint)(local_c[0x17] + local_c[0x21]) <= DVar7 &&
        (local_c[0x20] == 0)))) {
      iVar4 = FUN_006e5fe0(local_c,local_c + 0xf);
      local_8 = iVar4;
      if (iVar4 != 0) {
        FUN_006a5e40(iVar4,DAT_007ed77c,0x7f10c0,0xd6);
      }
      local_c[0x20] = 1;
    }
    if (local_c[0x2b] == 0) {
      DAT_00858df8 = (undefined4 *)local_70;
      return iVar4;
    }
    if (local_c[0x35] == 0) {
      DAT_00858df8 = (undefined4 *)local_70;
      return iVar4;
    }
    DVar7 = timeGetTime();
    if (DVar7 < (uint)(local_c[0x2b] + local_c[0x35])) {
      DAT_00858df8 = (undefined4 *)local_70;
      return iVar4;
    }
    if (local_c[0x34] != 0) {
      DAT_00858df8 = (undefined4 *)local_70;
      return iVar4;
    }
    iVar4 = FUN_006e5fe0(local_c,local_c + 0x23);
    if (iVar4 == 0) goto LAB_0072be89;
    uVar10 = 0xda;
    goto LAB_0072be83;
  default:
    FUN_006e5fd0();
    break;
  case 2:
    local_c[7] = local_c[7] | 0x70000000;
    iVar4 = FUN_006e4d40((void *)local_c[4],local_c[3]);
    if (iVar4 == 1) {
      local_2c[2] = local_c[2];
      local_2c[3] = 2;
      local_2c[4] = 8;
      (**(code **)*local_c)(local_2c);
      DAT_00858df8 = (undefined4 *)local_70;
      return local_8;
    }
    break;
  case 3:
    iVar4 = FUN_006e4d40((void *)local_c[4],local_c[3]);
    if (iVar4 == 1) {
      local_2c[2] = local_c[2];
      local_2c[3] = 2;
      local_2c[4] = 9;
      iVar4 = (**(code **)*local_c)(local_2c);
      DAT_00858df8 = (undefined4 *)local_70;
      return iVar4;
    }
    break;
  case 5:
    if ((local_c[7] & 0xf0000000U) != 0) {
      DAT_00858df8 = (undefined4 *)local_70;
      return local_8;
    }
    iVar4 = *local_c;
    goto LAB_0072bcc4;
  case 6:
    if (((*param_1 != local_c[2]) || (param_1[1] != 2)) && (local_c[0xe] != 0)) {
      piVar9 = (int *)param_1[5];
      bVar3 = FUN_00753090(local_c[9],local_c[10],local_c[0xb],local_c[0xc],*piVar9,piVar9[1],
                           piVar9[2],piVar9[3]);
      if (CONCAT31(extraout_var_01,bVar3) != 0) {
        local_c[7] = local_c[7] | 0x80000000;
        local_c[6] = local_c[6] + 1;
        if (local_c[0x20] != 0) {
          if (local_c[0x1c] != 0) {
            FUN_006e5fe0(local_c,local_c + 0x18);
          }
          local_c[0x20] = 0;
        }
        local_c[0x21] = 0;
        if (local_c[0x34] != 0) {
          if (local_c[0x30] != 0) {
            FUN_006e5fe0(local_c,local_c + 0x2c);
          }
          local_c[0x34] = 0;
        }
        local_c[0x35] = 0;
        DAT_00858df8 = (undefined4 *)local_70;
        return local_8;
      }
    }
    break;
  case 7:
    if ((local_c[7] & 0x80000000U) == 0) {
      DAT_00858df8 = (undefined4 *)local_70;
      return local_8;
    }
    if ((*param_1 == local_c[2]) && (param_1[1] == 2)) {
      DAT_00858df8 = (undefined4 *)local_70;
      return local_8;
    }
    piVar9 = (int *)param_1[5];
    bVar3 = FUN_00753090(local_c[9],local_c[10],local_c[0xb],local_c[0xc],*piVar9,piVar9[1],
                         piVar9[2],piVar9[3]);
    if (CONCAT31(extraout_var_02,bVar3) == 0) {
      DAT_00858df8 = (undefined4 *)local_70;
      return local_8;
    }
    if (local_c[6] == 0) {
      DAT_00858df8 = (undefined4 *)local_70;
      return local_8;
    }
    iVar4 = local_c[6] + -1;
    local_c[6] = iVar4;
    if (iVar4 != 0) {
      DAT_00858df8 = (undefined4 *)local_70;
      return local_8;
    }
    local_c[7] = local_c[7] & 0x7fffffff;
    iVar4 = *local_c;
LAB_0072bcc4:
    iVar4 = (**(code **)(iVar4 + 4))();
    if (iVar4 != 0) {
      DAT_00858df8 = (undefined4 *)local_70;
      return 0xffff;
    }
    break;
  case 8:
    uVar6 = local_c[7];
    if ((uVar6 & 0x70000000) != 0) {
      local_c[7] = uVar6 & 0x8fffffff;
      if (((uVar6 & 0x80000000) == 0) && (local_c[0xd] != 0)) {
        local_18 = local_c + 9;
        local_2c[3] = 0xf;
        local_2c[4] = 6;
        local_8 = FUN_006e5fe0(local_c,local_2c);
      }
      iVar4 = local_8;
      iVar5 = (**(code **)(*local_c + 4))();
      local_8 = iVar4;
      if (iVar5 != 0) {
        DAT_00858df8 = (undefined4 *)local_70;
        return 0xffff;
      }
    }
    break;
  case 9:
    if ((local_c[7] & 0x70000000U) == 0) {
      local_18 = local_c + 9;
      local_2c[3] = 0xf;
      local_2c[4] = 7;
      iVar4 = FUN_006e5fe0(local_c,local_2c);
      local_c[7] = local_c[7] | 0x70000000;
      local_8 = iVar4;
      if (local_c[0x20] != 0) {
        if (local_c[0x1c] != 0) {
          FUN_006e5fe0(local_c,local_c + 0x18);
        }
        local_c[0x20] = 0;
      }
      local_c[0x21] = 0;
      if (local_c[0x34] != 0) {
        if (local_c[0x30] != 0) {
          FUN_006e5fe0(local_c,local_c + 0x2c);
        }
        local_c[0x34] = 0;
      }
      local_c[0x35] = 0;
      DAT_00858df8 = (undefined4 *)local_70;
      return iVar4;
    }
    break;
  case 0x21:
    param_1[5] = local_c[7];
    DAT_00858df8 = (undefined4 *)local_70;
    return local_8;
  case 0x24:
  case 0x53:
    uVar6 = local_c[7];
    if ((uVar6 & 0x80000000) == 0) {
      if ((uVar6 & 0x70000000) == 0) {
        local_18 = local_c + 9;
        local_2c[3] = 0xf;
        local_2c[4] = 7;
        FUN_006e5fe0(local_c,local_2c);
      }
    }
    else {
      local_c[6] = 0;
      local_c[7] = uVar6 & 0x7fffffff;
    }
    if (param_1[4] == 0x24) {
      local_c[9] = local_c[9] + (int)(short)param_1[5];
      local_c[10] = local_c[10] + (int)*(short *)((int)param_1 + 0x16);
    }
    else if (param_1[4] == 0x53) {
      piVar9 = (int *)param_1[5];
      local_c[9] = *piVar9;
      local_c[10] = piVar9[1];
      local_c[0xb] = piVar9[2];
      local_c[0xc] = piVar9[3];
    }
    if (((local_c[7] & 0x70000000U) == 0) && (local_c[0xd] != 0)) {
      local_18 = local_c + 9;
      local_2c[3] = 0xf;
      local_2c[4] = 6;
      FUN_006e5fe0(local_c,local_2c);
    }
    piVar9 = local_2c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar9 = 0;
      piVar9 = piVar9 + 1;
    }
    local_2c[2] = 1;
    local_2c[3] = 3;
    local_2c[4] = 0x15;
    local_18 = (int *)FUN_006e5fe0(local_c,local_2c);
    if (local_18 == (int *)0x0) {
      local_2c[4] = 0x60;
      (**(code **)*local_c)(local_2c);
      DAT_00858df8 = (undefined4 *)local_70;
      return local_8;
    }
    break;
  case 0x2a:
    param_1[5] = (int)(local_c + 9);
    DAT_00858df8 = (undefined4 *)local_70;
    return local_8;
  case 0x50:
    piVar9 = (int *)param_1[5];
    if (((((*(byte *)(local_c + 0x37) & 8) != 0) && (local_c[0x38] != 0)) ||
        ((char)local_c[0x38] != '\0')) &&
       ((local_c[0x4a] != 0 &&
        (((short)param_1[6] != 0 ||
         (bVar3 = FUN_00753090(local_c[9],local_c[10],local_c[0xb],local_c[0xc],*piVar9,piVar9[1],
                               piVar9[2],piVar9[3]), CONCAT31(extraout_var,bVar3) != 0)))))) {
      local_2c[4] = 0x11;
      local_18 = local_c + 0x37;
      FUN_006e6000(local_c,3,1,local_2c);
      local_c[0x4a] = 0;
      DAT_00858df8 = (undefined4 *)local_70;
      return local_8;
    }
    break;
  case 0x51:
    piVar9 = (int *)param_1[5];
    if ((((((*(byte *)(local_c + 0x37) & 8) != 0) && (local_c[0x38] != 0)) ||
         ((char)local_c[0x38] != '\0')) && (local_c[0x4a] == 0)) &&
       (((short)param_1[6] != 0 ||
        (bVar3 = FUN_00753090(local_c[9],local_c[10],local_c[0xb],local_c[0xc],*piVar9,piVar9[1],
                              piVar9[2],piVar9[3]), CONCAT31(extraout_var_00,bVar3) != 0)))) {
      local_2c[4] = 0x10;
      local_18 = local_c + 0x37;
      FUN_006e6000(local_c,3,1,local_2c);
      local_c[0x4a] = 1;
      DAT_00858df8 = (undefined4 *)local_70;
      return local_8;
    }
    break;
  case 0x5a:
    iVar4 = local_c[0x4a];
    if (iVar4 != 0) {
      local_2c[4] = 0x50;
      local_18 = (int *)0x0;
      local_14 = 1;
      (**(code **)*local_c)(local_2c);
    }
    local_c[0x37] = *(int *)param_1[5];
    local_c[0x38] = *(int *)(param_1[5] + 4);
    if (iVar4 != 0) {
      local_2c[4] = 0x51;
      local_18 = (int *)0x0;
      local_14 = 1;
      (**(code **)*local_c)(local_2c);
      DAT_00858df8 = (undefined4 *)local_70;
      return local_8;
    }
    break;
  case 0x60:
    if ((local_c[7] & 0xf0000000U) != 0) {
      DAT_00858df8 = (undefined4 *)local_70;
      return local_8;
    }
    uVar6 = (uint)*(ushort *)(param_1 + 6);
    uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
    if ((((((local_c[7] & 0xffffffU) == 0) && (local_c[0x22] == 0)) && (local_c[0x36] == 0)) ||
        (((iVar4 = local_c[9], (int)uVar6 < iVar4 || (local_c[0xb] + iVar4 <= (int)uVar6)) ||
         ((iVar5 = local_c[10], (int)uVar8 < iVar5 || (local_c[0xc] + iVar5 <= (int)uVar8)))))) ||
       ((((iVar1 = local_c[0x4b], iVar1 != 0 && (iVar1 != -1)) &&
         (bVar3 = FUN_006b55c0(iVar1,local_c[0x4c],uVar6 - iVar4,uVar8 - iVar5),
         CONCAT31(extraout_var_03,bVar3) == 0)) || ((local_c[0x13] == 0 && (local_c[0x27] == 0))))))
    {
      iVar4 = local_8;
      if (local_c[0x20] != 0) {
        if ((local_c[0x1c] == 0) ||
           (iVar4 = FUN_006e5fe0(local_c,local_c + 0x18), local_8 = iVar4, iVar4 == 0)) {
          local_c[0x20] = 0;
          iVar4 = local_8;
        }
        else {
          FUN_006a5e40(iVar4,DAT_007ed77c,0x7f10c0,0xc6);
          local_c[0x20] = 0;
        }
      }
      local_c[0x21] = 0;
      if (local_c[0x34] != 0) {
        if ((local_c[0x30] != 0) && (iVar4 = FUN_006e5fe0(local_c,local_c + 0x2c), iVar4 != 0)) {
          local_8 = iVar4;
          FUN_006a5e40(iVar4,DAT_007ed77c,0x7f10c0,0xcc);
        }
        local_c[0x34] = 0;
      }
      local_c[0x35] = 0;
      DAT_00858df8 = (undefined4 *)local_70;
      return iVar4;
    }
    iVar4 = local_8;
    if (local_c[0x13] != 0) {
      if (local_c[0x17] == 0) {
        if (local_c[0x20] == 0) {
          iVar4 = FUN_006e5fe0(local_c,local_c + 0xf);
          local_8 = iVar4;
          if (iVar4 != 0) {
            FUN_006a5e40(iVar4,DAT_007ed77c,0x7f10c0,0xb2);
          }
          local_c[0x20] = 1;
        }
      }
      else {
        if (local_c[0x21] == 0) {
          local_c[0x20] = 0;
        }
        DVar7 = timeGetTime();
        local_c[0x21] = DVar7;
        iVar4 = local_8;
      }
    }
    if (local_c[0x27] == 0) {
      DAT_00858df8 = (undefined4 *)local_70;
      return iVar4;
    }
    if (local_c[0x2b] != 0) {
      if (local_c[0x35] == 0) {
        local_c[0x34] = 0;
      }
      DVar7 = timeGetTime();
      local_c[0x35] = DVar7;
      DAT_00858df8 = (undefined4 *)local_70;
      return iVar4;
    }
    if (local_c[0x34] != 0) {
      DAT_00858df8 = (undefined4 *)local_70;
      return iVar4;
    }
    iVar4 = FUN_006e5fe0(local_c,local_c + 0x23);
    if (iVar4 == 0) goto LAB_0072be89;
    uVar10 = 0xbf;
LAB_0072be83:
    local_8 = iVar4;
    FUN_006a5e40(iVar4,DAT_007ed77c,0x7f10c0,uVar10);
LAB_0072be89:
    local_c[0x34] = 1;
    DAT_00858df8 = (undefined4 *)local_70;
    return iVar4;
  }
  DAT_00858df8 = (undefined4 *)local_70;
  return local_8;
}

