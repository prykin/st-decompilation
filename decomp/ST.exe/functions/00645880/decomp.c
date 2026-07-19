
void __cdecl FUN_00645880(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  Global_sub_00645D30_param_2Enum GVar6;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  int local_aa;
  undefined2 local_a6;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_98 [5];
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined2 local_60;
  int local_5c [5];
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  uint local_34;
  undefined1 local_30;
  int local_2f;
  undefined2 local_2b;
  undefined4 local_29;
  undefined1 local_6;
  
  iVar2 = param_1[1];
  piVar5 = local_5c;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  switch(iVar2) {
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xb4:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbf:
    break;
  default:
    return;
  case 0xa9:
    local_ae = *(undefined2 *)((int)param_1 + 0x16);
    local_c0 = *param_1;
    local_b0 = (undefined2)param_1[5];
    local_a6 = (undefined2)param_1[8];
    local_ac = (undefined2)param_1[6];
    local_aa = param_1[7];
    local_c4 = 0x82;
    local_b8 = 1;
    local_bc = 1;
    local_a4 = 5;
    local_a0 = 0x32;
    (**(code **)(*DAT_00802a38 + 8))(0x10a,0,0,&local_c4,0);
    return;
  case 0xb0:
  case 0xbb:
    piVar5 = local_5c;
    for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    local_5c[1] = *param_1;
    local_48 = (undefined2)param_1[2];
    local_46 = *(undefined2 *)((int)param_1 + 10);
    local_42 = *(undefined2 *)((int)param_1 + 0xe);
    local_3e = *(undefined2 *)((int)param_1 + 0x12);
    local_44 = (undefined2)param_1[3];
    local_3a = *(undefined2 *)((int)param_1 + 0x16);
    local_40 = (undefined2)param_1[4];
    local_36 = *(undefined2 *)((int)param_1 + 0x1a);
    local_3c = (undefined2)param_1[5];
    local_34 = (uint)(iVar2 != 0xb0);
    local_38 = (undefined2)param_1[6];
    local_5c[0] = 0x15e;
    local_5c[3] = 1;
    local_5c[2] = 1;
    (**(code **)(*DAT_00802a38 + 8))(0x147,0,0,local_5c,0);
    return;
  case 0xb5:
    iVar2 = param_1[8];
    piVar5 = local_98;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    iVar4 = param_1[7];
    *(undefined2 *)piVar5 = 0;
    local_98[1] = *param_1;
    local_7c = (int)*(short *)((int)param_1 + 0x12);
    local_80 = (int)(short)param_1[4];
    local_84 = (int)*(short *)((int)param_1 + 0xe);
    local_70 = (int)(short)param_1[6];
    local_74 = (int)*(short *)((int)param_1 + 0x16);
    local_78 = (int)(short)param_1[5];
    local_98[0] = 0x17c;
    local_98[2] = 1;
    local_98[3] = 1;
    local_68 = 300;
    local_6c = 4;
    local_64 = iVar4;
    local_60 = (short)iVar2;
    (**(code **)(*DAT_00802a38 + 8))(0x150,0,0,local_98,0);
    return;
  }
  uVar1 = thunk_FUN_004406c0((char)*param_1);
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    iVar2 = thunk_FUN_004e60d0(*param_1,0x3c);
    if ((0 < iVar2) || (iVar2 = thunk_FUN_004e60d0(*param_1,0x9a), 0 < iVar2)) goto LAB_00645950;
  }
  else {
    if (uVar1 == 2) {
      iVar2 = thunk_FUN_004e60d0(*param_1,0x91);
      if (iVar2 < 1) {
        iVar2 = *param_1;
        iVar4 = 0x41;
LAB_00645914:
        iVar2 = thunk_FUN_004e60d0(iVar2,iVar4);
        if (iVar2 < 1) goto LAB_00645953;
      }
    }
    else {
      if (uVar1 != 3) goto LAB_00645953;
      iVar2 = thunk_FUN_004e60d0(*param_1,0x4b);
      if (iVar2 < 1) {
        iVar2 = *param_1;
        iVar4 = 0x4c;
        goto LAB_00645914;
      }
    }
LAB_00645950:
    local_6 = 1;
  }
LAB_00645953:
  local_48 = (undefined2)param_1[2];
  local_46 = *(undefined2 *)((int)param_1 + 10);
  local_44 = (undefined2)param_1[3];
  local_5c[1] = *param_1;
  local_40 = (undefined2)param_1[4];
  local_42 = *(undefined2 *)((int)param_1 + 0xe);
  local_3c = (undefined2)param_1[5];
  local_3e = *(undefined2 *)((int)param_1 + 0x12);
  local_38 = (undefined2)param_1[6];
  local_3a = *(undefined2 *)((int)param_1 + 0x16);
  local_5c[0] = 0x28;
  local_5c[3] = 1;
  local_5c[2] = 1;
  uVar1 = thunk_FUN_004406c0((char)local_5c[1]);
  if ((uVar1 & 0xff) == 1) {
    GVar6 = param_1[1];
    iVar2 = *param_1;
  }
  else {
    if ((uVar1 & 0xff) != 2) goto LAB_006459df;
    GVar6 = param_1[1];
    iVar2 = *param_1;
  }
  uVar3 = thunk_FUN_00645d30(iVar2,GVar6);
  local_30 = (undefined1)uVar3;
LAB_006459df:
  local_2f = param_1[7];
  local_2b = (undefined2)param_1[8];
  local_29 = *(undefined4 *)((int)param_1 + 0x22);
  local_34 = param_1[1];
  local_36 = *(undefined2 *)((int)param_1 + 0x1a);
  (**(code **)(*DAT_00802a38 + 8))(0x106,0,0,local_5c,0);
  return;
}

