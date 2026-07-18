
undefined4 FUN_007244b0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 local_74;
  undefined4 local_70 [16];
  int local_30 [5];
  uint local_1c;
  undefined4 local_18;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_c = 0;
  local_74 = DAT_00858df8;
  DAT_00858df8 = &local_74;
  iVar2 = __setjmp3(local_70,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_74;
    iVar2 = FUN_006ad4d0(s_E__Ourlib__sslider_cpp_007f0bc0,0x11f,0,iVar2,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FUN_006a5e40(0xffff,0,0x7f0bc0,0x120);
    return 0xffff;
  }
  switch(param_1[4]) {
  case 2:
    local_10 = (undefined4 *)param_1[5];
    if (local_10 == (undefined4 *)0x0) {
      DAT_00858df8 = (undefined4 *)local_74;
      return 0xffff;
    }
    local_8[6] = *local_10;
    puVar5 = local_10 + 0xe8;
    puVar6 = local_8 + 10;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_8[0x11] = local_8;
    local_8[0x12] = local_10[0xf0];
    local_8[0x13] = local_10[0xf1];
    uVar4 = local_10[0xf2];
    local_8[0x14] = uVar4;
    local_8[0x15] = uVar4;
    local_8[0x16] = local_10[0xf3];
    local_8[0x17] = local_10[0xf4];
    local_8[0x18] = local_10[0xf5];
    if (local_10[0x61] != 0) {
      local_10[0x6a] = local_8[2];
      local_10[0x6b] = 2;
      local_10[0x6c] = 0x2f;
      if (local_8[0x16] != 0) {
        local_10[0xc0] = 1;
      }
      iVar2 = (**(code **)(*(int *)local_8[3] + 8))(local_10[0x61],local_8 + 7,0,local_10 + 0x62,0);
      if (iVar2 != 0) {
        DAT_00858df8 = (undefined4 *)local_74;
        return 0xffff;
      }
    }
    puVar5 = local_10;
    if (local_10[1] != 0) {
      uVar4 = local_8[2];
      local_10[0xb] = 2;
      local_10[10] = uVar4;
      local_10[0xc] = 0x30;
      if (local_8[0x16] != 0) {
        local_10[0x60] = 1;
      }
      iVar2 = (**(code **)(*(int *)local_8[3] + 8))(local_10[1],local_8 + 8,0,local_10 + 2,0);
      if (iVar2 != 0) {
        DAT_00858df8 = (undefined4 *)local_74;
        return 0xffff;
      }
    }
    if (puVar5[0xc1] != 0) {
      puVar5[0xe5] = local_8[0x13];
      puVar5[0xe4] = local_8[0x12];
      puVar5[0xce] = local_8[2];
      puVar5[0xcf] = 2;
      puVar5[0xd0] = 0x2c;
      iVar2 = (**(code **)(*(int *)local_8[3] + 8))(puVar5[0xc1],local_8 + 9,0,puVar5 + 0xc2,0);
      if (iVar2 != 0) {
        DAT_00858df8 = (undefined4 *)local_74;
        return 0xffff;
      }
    }
    if ((local_8[6] & 0xffffff) != 0) {
      FUN_00724360(local_8);
    }
    iVar2 = FUN_006e4d40((void *)local_8[4],local_8[3]);
    if (iVar2 == 1) {
      local_30[2] = local_8[2];
      local_30[3] = 2;
      local_30[4] = 8;
      (**(code **)*local_8)(local_30);
      DAT_00858df8 = (undefined4 *)local_74;
      return local_c;
    }
    DAT_00858df8 = (undefined4 *)local_74;
    return local_c;
  case 3:
    if (local_8[7] != 0) {
      FUN_006e56b0((void *)local_8[3],local_8[7]);
    }
    if (local_8[8] != 0) {
      FUN_006e56b0((void *)local_8[3],local_8[8]);
    }
    if (local_8[9] != 0) {
      FUN_006e56b0((void *)local_8[3],local_8[9]);
    }
    iVar2 = FUN_006e4d40((void *)local_8[4],local_8[3]);
    if (iVar2 == 1) {
      local_30[2] = local_8[2];
      local_30[3] = 2;
      local_30[4] = 9;
      uVar4 = (**(code **)*local_8)(local_30);
      DAT_00858df8 = (undefined4 *)local_74;
      return uVar4;
    }
    break;
  default:
    FUN_006e5fd0();
    break;
  case 5:
  case 0x24:
    piVar7 = local_30;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar7 = *param_1;
      param_1 = param_1 + 1;
      piVar7 = piVar7 + 1;
    }
    if (local_8[7] != 0) {
      FUN_006e6080(local_8,2,local_8[7],local_30);
    }
    if (local_8[8] != 0) {
      FUN_006e6080(local_8,2,local_8[8],local_30);
    }
    if (local_8[9] != 0) {
      FUN_006e6080(local_8,2,local_8[9],local_30);
      DAT_00858df8 = (undefined4 *)local_74;
      return local_c;
    }
    break;
  case 8:
    if (local_8[0x14] == 0) {
      DAT_00858df8 = (undefined4 *)local_74;
      return local_c;
    }
    piVar7 = local_30;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    local_1c = local_8[2];
    local_30[4] = 0x13;
    local_18 = 2;
    iVar2 = FUN_006e6000(local_8,3,1,local_30);
    goto LAB_00724bb2;
  case 9:
    if (local_8[0x14] != 0) {
      piVar7 = local_30;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      local_1c = local_8[2];
      local_30[4] = 0x14;
      local_18 = 2;
      FUN_006e6000(local_8,3,1,local_30);
      DAT_00858df8 = (undefined4 *)local_74;
      return local_c;
    }
    break;
  case 0x20:
    local_1c = local_8[6] & 0xff000000 | param_1[5];
    if (local_8[6] != local_1c) {
      local_8[6] = local_1c;
      local_30[4] = 0x20;
      if (local_8[7] != 0) {
        FUN_006e6080(local_8,2,local_8[7],local_30);
      }
      if (local_8[8] != 0) {
        FUN_006e6080(local_8,2,local_8[8],local_30);
      }
      if (local_8[9] != 0) {
        FUN_006e6080(local_8,2,local_8[9],local_30);
      }
      if ((local_8[6] & 0xffffff) != 0) {
        FUN_00724360(local_8);
        DAT_00858df8 = (undefined4 *)local_74;
        return local_c;
      }
    }
    break;
  case 0x21:
    param_1[5] = local_8[6];
    DAT_00858df8 = (undefined4 *)local_74;
    return local_c;
  case 0x22:
    iVar2 = param_1[5];
    local_8[0x13] = iVar2;
    if (local_8[9] != 0) {
      local_30[3] = 0x80000002;
      local_30[4] = 0x22;
      local_30[2] = local_8[9];
      local_1c = iVar2;
      local_c = FUN_006e6060(local_8,local_30);
    }
    FUN_00724360(local_8);
    DAT_00858df8 = (undefined4 *)local_74;
    return local_c;
  case 0x26:
    param_1[5] = local_8[0x13];
    DAT_00858df8 = (undefined4 *)local_74;
    return local_c;
  case 0x28:
    iVar2 = param_1[5];
    local_8[0x12] = iVar2;
    if (iVar2 < 0) {
      local_8[0x12] = 0;
    }
    iVar2 = local_8[9];
    local_8[0x13] = 0;
    piVar7 = local_30;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *param_1;
      param_1 = param_1 + 1;
      piVar7 = piVar7 + 1;
    }
    if (iVar2 != 0) {
      FUN_006e6080(local_8,0x80000002,iVar2,local_30);
    }
    FUN_00724360(local_8);
    DAT_00858df8 = (undefined4 *)local_74;
    return local_c;
  case 0x2b:
    *(undefined2 *)(param_1 + 5) = 0;
    local_30[3] = 2;
    local_30[4] = 0x2b;
    local_30[2] = local_8[7];
    if (local_30[2] != 0) {
      FUN_006e6060(local_8,local_30);
      if ((short)local_1c != 0) {
        *(undefined2 *)(param_1 + 5) = 1;
        DAT_00858df8 = (undefined4 *)local_74;
        return local_c;
      }
    }
    local_30[2] = local_8[8];
    if ((local_30[2] != 0) && (FUN_006e6060(local_8,local_30), (short)local_1c != 0)) {
      *(undefined2 *)(param_1 + 5) = 1;
      DAT_00858df8 = (undefined4 *)local_74;
      return local_c;
    }
    local_30[2] = local_8[9];
    if ((local_30[2] != 0) && (FUN_006e6060(local_8,local_30), (short)local_1c != 0)) {
      *(undefined2 *)(param_1 + 5) = 1;
      DAT_00858df8 = (undefined4 *)local_74;
      return local_c;
    }
    break;
  case 0x2c:
    iVar2 = param_1[5];
    local_8[0x13] = iVar2;
    local_8[0xf] = iVar2;
    FUN_00724360(local_8);
    goto LAB_00724bab;
  case 0x55:
    local_8[0x15] = 1;
    DAT_00858df8 = (undefined4 *)local_74;
    return local_c;
  case 0x56:
    local_8[0x15] = 0;
    DAT_00858df8 = (undefined4 *)local_74;
    return local_c;
  case 0x67:
    if (local_8[0x14] == 0) {
      DAT_00858df8 = (undefined4 *)local_74;
      return local_c;
    }
    if (local_8[0x15] == 0) {
      DAT_00858df8 = (undefined4 *)local_74;
      return local_c;
    }
  case 0x2f:
    if ((int)local_8[0x13] < 1) {
      DAT_00858df8 = (undefined4 *)local_74;
      return local_c;
    }
    iVar3 = FUN_00724330(local_8,(uint)*(ushort *)(param_1 + 6));
    iVar2 = local_8[0x13];
    local_8[0x13] = iVar2 - iVar3;
    if (iVar2 - iVar3 < 0) {
      local_8[0x13] = 0;
    }
    FUN_00724360(local_8);
    if (local_8[9] != 0) {
      local_1c = local_8[0x13];
      local_30[4] = 0x22;
      FUN_006e6080(local_8,2,local_8[9],local_30);
    }
    local_8[0xf] = local_8[0x13];
    goto LAB_00724bab;
  case 0x68:
    if (local_8[0x14] == 0) {
      DAT_00858df8 = (undefined4 *)local_74;
      return local_c;
    }
    if (local_8[0x15] == 0) {
      DAT_00858df8 = (undefined4 *)local_74;
      return local_c;
    }
  case 0x30:
    if (local_8[0x12] + -1 <= (int)local_8[0x13]) {
      DAT_00858df8 = (undefined4 *)local_74;
      return local_c;
    }
    iVar3 = FUN_00724330(local_8,(uint)*(ushort *)(param_1 + 6));
    iVar2 = local_8[0x13];
    local_8[0x13] = iVar2 + iVar3;
    if (local_8[0x12] + -1 < iVar2 + iVar3) {
      local_8[0x13] = local_8[0x12] + -1;
    }
    FUN_00724360(local_8);
    if (local_8[9] != 0) {
      local_1c = local_8[0x13];
      local_30[4] = 0x22;
      FUN_006e6080(local_8,2,local_8[9],local_30);
    }
    local_8[0xf] = local_8[0x13];
LAB_00724bab:
    iVar2 = FUN_006e6020(local_8,local_8 + 10);
LAB_00724bb2:
    if (iVar2 != 0) {
      DAT_00858df8 = (undefined4 *)local_74;
      return 0xffff;
    }
  }
  DAT_00858df8 = (undefined4 *)local_74;
  return local_c;
}

