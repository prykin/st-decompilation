
void __cdecl thunk_FUN_00645880(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  undefined2 uStack_ac;
  int iStack_aa;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int aiStack_98 [5];
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined2 uStack_60;
  int aiStack_5c [5];
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  uint uStack_34;
  undefined1 uStack_30;
  int iStack_2f;
  undefined2 uStack_2b;
  undefined4 uStack_29;
  undefined1 uStack_6;
  
  iVar2 = param_1[1];
  piVar5 = aiStack_5c;
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
    uStack_ae = *(undefined2 *)((int)param_1 + 0x16);
    iStack_c0 = *param_1;
    uStack_b0 = (undefined2)param_1[5];
    uStack_a6 = (undefined2)param_1[8];
    uStack_ac = (undefined2)param_1[6];
    iStack_aa = param_1[7];
    uStack_c4 = 0x82;
    uStack_b8 = 1;
    uStack_bc = 1;
    uStack_a4 = 5;
    uStack_a0 = 0x32;
    (**(code **)(*DAT_00802a38 + 8))(0x10a,0,0,&uStack_c4,0);
    return;
  case 0xb0:
  case 0xbb:
    piVar5 = aiStack_5c;
    for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    aiStack_5c[1] = *param_1;
    uStack_48 = (undefined2)param_1[2];
    uStack_46 = *(undefined2 *)((int)param_1 + 10);
    uStack_42 = *(undefined2 *)((int)param_1 + 0xe);
    uStack_3e = *(undefined2 *)((int)param_1 + 0x12);
    uStack_44 = (undefined2)param_1[3];
    uStack_3a = *(undefined2 *)((int)param_1 + 0x16);
    uStack_40 = (undefined2)param_1[4];
    uStack_36 = *(undefined2 *)((int)param_1 + 0x1a);
    uStack_3c = (undefined2)param_1[5];
    uStack_34 = (uint)(iVar2 != 0xb0);
    uStack_38 = (undefined2)param_1[6];
    aiStack_5c[0] = 0x15e;
    aiStack_5c[3] = 1;
    aiStack_5c[2] = 1;
    (**(code **)(*DAT_00802a38 + 8))(0x147,0,0,aiStack_5c,0);
    return;
  case 0xb5:
    iVar2 = param_1[8];
    piVar5 = aiStack_98;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    iVar4 = param_1[7];
    *(undefined2 *)piVar5 = 0;
    aiStack_98[1] = *param_1;
    iStack_7c = (int)*(short *)((int)param_1 + 0x12);
    iStack_80 = (int)(short)param_1[4];
    iStack_84 = (int)*(short *)((int)param_1 + 0xe);
    iStack_70 = (int)(short)param_1[6];
    iStack_74 = (int)*(short *)((int)param_1 + 0x16);
    iStack_78 = (int)(short)param_1[5];
    aiStack_98[0] = 0x17c;
    aiStack_98[2] = 1;
    aiStack_98[3] = 1;
    uStack_68 = 300;
    uStack_6c = 4;
    iStack_64 = iVar4;
    uStack_60 = (short)iVar2;
    (**(code **)(*DAT_00802a38 + 8))(0x150,0,0,aiStack_98,0);
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
    uStack_6 = 1;
  }
LAB_00645953:
  uStack_48 = (undefined2)param_1[2];
  uStack_46 = *(undefined2 *)((int)param_1 + 10);
  uStack_44 = (undefined2)param_1[3];
  aiStack_5c[1] = *param_1;
  uStack_40 = (undefined2)param_1[4];
  uStack_42 = *(undefined2 *)((int)param_1 + 0xe);
  uStack_3c = (undefined2)param_1[5];
  uStack_3e = *(undefined2 *)((int)param_1 + 0x12);
  uStack_38 = (undefined2)param_1[6];
  uStack_3a = *(undefined2 *)((int)param_1 + 0x16);
  aiStack_5c[0] = 0x28;
  aiStack_5c[3] = 1;
  aiStack_5c[2] = 1;
  uVar1 = thunk_FUN_004406c0((char)aiStack_5c[1]);
  if ((uVar1 & 0xff) == 1) {
    iVar2 = param_1[1];
    iVar4 = *param_1;
  }
  else {
    if ((uVar1 & 0xff) != 2) goto LAB_006459df;
    iVar2 = param_1[1];
    iVar4 = *param_1;
  }
  uVar3 = thunk_FUN_00645d30(iVar4,iVar2);
  uStack_30 = (undefined1)uVar3;
LAB_006459df:
  iStack_2f = param_1[7];
  uStack_2b = (undefined2)param_1[8];
  uStack_29 = *(undefined4 *)((int)param_1 + 0x22);
  uStack_34 = param_1[1];
  uStack_36 = *(undefined2 *)((int)param_1 + 0x1a);
  (**(code **)(*DAT_00802a38 + 8))(0x106,0,0,aiStack_5c,0);
  return;
}

