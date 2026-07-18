
undefined4 FUN_0071e8b0(int *param_1)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  void *unaff_EDI;
  int *piVar8;
  undefined4 local_70;
  undefined4 local_6c [16];
  int local_2c [5];
  int *local_18;
  undefined4 local_14;
  int *local_c;
  int *local_8;
  
  local_70 = DAT_00858df8;
  DAT_00858df8 = &local_70;
  iVar3 = __setjmp3(local_6c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_70;
    iVar5 = FUN_006ad4d0(s_E__Ourlib__sviewer_cpp_007f0a68,0x108,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    FUN_006a5e40(iVar3,0,0x7f0a68,0x109);
    return 0xffff;
  }
  switch(param_1[4]) {
  case 0:
    if (((*(byte *)(local_c + 8) & 1) != 0) &&
       (DVar4 = timeGetTime(), (uint)(local_c[0x70] + local_c[0x71]) <= DVar4)) {
      iVar3 = local_c[0x7d];
      local_c[0x71] = DVar4;
      local_c[0x7d] = iVar3 + 1;
      if (local_c[0x72] <= iVar3 + 1) {
        local_c[0x7d] = 0;
      }
      (**(code **)(*local_c + 4))();
    }
    break;
  case 2:
    piVar7 = (int *)param_1[5];
    local_8 = piVar7;
    if (piVar7 == (int *)0x0) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0a68,0x2a);
    }
    local_c[7] = *piVar7;
    local_c[8] = piVar7[1];
    local_c[0x73] = piVar7[2];
    local_c[0x74] = piVar7[3];
    local_c[0x75] = piVar7[4];
    local_c[0x76] = piVar7[5];
    local_c[0x77] = piVar7[6];
    local_c[0x78] = piVar7[7];
    local_c[0x79] = piVar7[10];
    local_c[0x7a] = piVar7[0xb];
    local_c[9] = piVar7[8];
    local_c[10] = piVar7[9];
    local_c[0xb] = (local_c[0x79] + local_c[0x75]) * local_c[0x77] - local_c[0x79];
    local_c[0xc] = (local_c[0x7a] + local_c[0x76]) * local_c[0x78] - local_c[0x7a];
    piVar7 = piVar7 + 0xc;
    piVar8 = local_c + 0x4d;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    local_c[0x54] = (int)local_c;
    piVar7 = local_8 + 0x1c;
    piVar8 = local_c + 0x55;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    local_c[0x5c] = (int)local_c;
    piVar7 = local_8 + 0x14;
    piVar8 = local_c + 0x5d;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    local_c[100] = (int)local_c;
    piVar7 = local_8 + 0x24;
    piVar8 = local_c + 0x65;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    local_c[0x6c] = (int)local_c;
    local_c[0xd] = (uint)(local_8[0x21a] == 0);
    local_c[0xe] = (uint)(local_8[0x21b] == 0);
    if (local_8[0x2c] != 0) {
      iVar3 = local_c[2];
      local_8[0x118] = 2;
      local_8[0x117] = iVar3;
      local_8[0x119] = 0x2c;
      if (local_c[0x78] < local_c[0x74]) {
        iVar3 = (local_c[0x74] - local_c[0x78]) + 1;
      }
      else {
        iVar3 = 0;
      }
      local_8[0x11d] = iVar3;
      local_8[0x11e] = local_c[0x7c];
      (**(code **)(*(int *)local_c[3] + 8))(local_8[0x2c],local_c + 0x6d,0,local_8 + 0x2d,0);
    }
    if (local_8[0x123] != 0) {
      iVar3 = local_c[2];
      local_8[0x20f] = 2;
      local_8[0x20e] = iVar3;
      local_8[0x210] = 0x2d;
      if (local_c[0x77] < local_c[0x73]) {
        iVar3 = (local_c[0x73] - local_c[0x77]) + 1;
      }
      else {
        iVar3 = 0;
      }
      local_8[0x214] = iVar3;
      local_8[0x215] = local_c[0x7b];
      (**(code **)(*(int *)local_c[3] + 8))(local_8[0x123],local_c + 0x6e,0,local_8 + 0x124,0);
    }
    local_c[0x70] = local_8[0x21d];
    local_c[0x72] = local_8[0x21c];
    local_c[0x7d] = 0;
    break;
  case 3:
    if (local_c[0x6d] != 0) {
      FUN_006e56b0((void *)local_c[3],local_c[0x6d]);
    }
    local_c[0x6d] = 0;
    if (local_c[0x6e] != 0) {
      FUN_006e56b0((void *)local_c[3],local_c[0x6e]);
    }
    local_c[0x6e] = 0;
    break;
  case 8:
    if ((local_c[7] & 0x70000000U) != 0) {
      local_18 = (int *)local_c[2];
      local_2c[4] = 0x13;
      local_14 = 0;
      FUN_006e6000(local_c,3,1,local_2c);
      if ((local_c[0x61] != 0) && ((*(byte *)(local_c + 7) & 1) != 0)) {
        *(short *)(local_c + 0x62) = (short)local_c[0x7b];
        *(short *)((int)local_c + 0x18a) = (short)local_c[0x7c];
        FUN_006e6020(local_c,local_c + 0x5d);
      }
    }
    break;
  case 9:
    if ((local_c[7] & 0x70000000U) == 0) {
      local_18 = (int *)local_c[2];
      local_2c[4] = 0x14;
      FUN_006e6000(local_c,3,1,local_2c);
    }
    break;
  case 0x20:
    iVar3 = local_c[0x6e];
    local_c[7] = local_c[7] | param_1[5] & 0xffffffU;
    piVar7 = param_1;
    piVar8 = local_2c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    if (iVar3 != 0) {
      local_18 = (int *)(uint)(local_c[0x77] < local_c[0x73]);
      local_2c[4] = 0x20;
      local_2c[2] = iVar3;
      FUN_006e6060(local_c,local_2c);
    }
    if (local_c[0x6d] != 0) {
      local_18 = (int *)(uint)(local_c[0x78] < local_c[0x74]);
      local_2c[4] = 0x20;
      local_2c[2] = local_c[0x6d];
      FUN_006e6060(local_c,local_2c);
    }
    break;
  case 0x22:
    uVar1 = *(ushort *)(param_1 + 5);
    local_2c[3] = 2;
    local_2c[4] = 0x22;
    local_c[0x7b] = (int)(uint)uVar1;
    if (local_c[0x6e] != 0) {
      local_2c[2] = local_c[0x6e];
      local_18 = (int *)(uint)uVar1;
      FUN_006e6060(local_c,local_2c);
    }
    uVar1 = *(ushort *)((int)param_1 + 0x16);
    local_c[0x7c] = (int)(uint)uVar1;
    if (local_c[0x6d] != 0) {
      local_2c[2] = local_c[0x6d];
      local_18 = (int *)(uint)uVar1;
      FUN_006e6060(local_c,local_2c);
    }
    if (((local_c[0x61] != 0) && ((*(byte *)(local_c + 7) & 1) != 0)) && ((short)param_1[6] == 0)) {
      *(short *)(local_c + 0x62) = (short)local_c[0x7b];
      *(short *)((int)local_c + 0x18a) = (short)local_c[0x7c];
      FUN_006e6020(local_c,local_c + 0x5d);
    }
    (**(code **)(*local_c + 4))();
    break;
  case 0x24:
    iVar3 = local_c[0x6d];
    piVar7 = param_1;
    piVar8 = local_2c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    if (iVar3 != 0) {
      FUN_006e6080(local_c,2,iVar3,local_2c);
    }
    if (local_c[0x6e] != 0) {
      FUN_006e6080(local_c,2,local_c[0x6e],local_2c);
    }
    break;
  case 0x26:
  case 0x27:
    *(short *)(param_1 + 5) = (short)local_c[0x7b];
    *(short *)((int)param_1 + 0x16) = (short)local_c[0x7c];
    break;
  case 0x28:
    uVar1 = *(ushort *)(param_1 + 5);
    local_c[0x7b] = 0;
    local_c[0x73] = (uint)uVar1;
    local_c[0x74] = (uint)*(ushort *)((int)param_1 + 0x16);
    local_c[0x7c] = 0;
    if ((local_c[0x61] != 0) && ((*(byte *)(local_c + 7) & 1) != 0)) {
      *(undefined2 *)(local_c + 0x62) = 0;
      *(undefined2 *)((int)local_c + 0x18a) = 0;
      FUN_006e6020(local_c,local_c + 0x5d);
    }
    (**(code **)(*local_c + 4))();
    piVar7 = local_2c;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    local_2c[3] = 2;
    if (local_c[0x6e] != 0) {
      local_18 = (int *)(uint)(local_c[0x77] < local_c[0x73]);
      local_2c[4] = 0x20;
      local_2c[2] = local_c[0x6e];
      FUN_006e6060(local_c,local_2c);
      local_2c[4] = 0x28;
      if (local_c[0x77] < local_c[0x73]) {
        local_18 = (int *)((local_c[0x73] - local_c[0x77]) + 1);
      }
      else {
        local_18 = (int *)0x0;
      }
      FUN_006e6060(local_c,local_2c);
      local_18 = (int *)local_c[0x7b];
      local_2c[4] = 0x22;
      FUN_006e6060(local_c,local_2c);
    }
    if (local_c[0x6d] != 0) {
      local_18 = (int *)(uint)(local_c[0x78] < local_c[0x74]);
      local_2c[4] = 0x20;
      local_2c[2] = local_c[0x6d];
      FUN_006e6060(local_c,local_2c);
      local_2c[4] = 0x28;
      if (local_c[0x78] < local_c[0x74]) {
        local_18 = (int *)((local_c[0x74] - local_c[0x78]) + 1);
      }
      else {
        local_18 = (int *)0x0;
      }
      FUN_006e6060(local_c,local_2c);
      local_18 = (int *)local_c[0x7c];
      local_2c[4] = 0x22;
      FUN_006e6060(local_c,local_2c);
    }
    break;
  case 0x2b:
    iVar3 = local_c[0x6f];
    *(short *)(param_1 + 5) = (short)iVar3;
    if ((short)iVar3 == 0) {
      local_2c[3] = 2;
      local_2c[4] = 0x2b;
      if (local_c[0x6d] != 0) {
        local_2c[2] = local_c[0x6d];
        FUN_006e6060(local_c,local_2c);
        if ((short)local_18 != 0) {
          *(undefined2 *)(param_1 + 5) = 1;
          break;
        }
      }
      if (local_c[0x6e] != 0) {
        local_2c[2] = local_c[0x6e];
        FUN_006e6060(local_c,local_2c);
        if ((short)local_18 != 0) {
          *(undefined2 *)(param_1 + 5) = 1;
        }
      }
    }
    break;
  case 0x2c:
    local_c[0x7c] = param_1[5];
    (**(code **)(*local_c + 4))();
    if ((local_c[0x61] != 0) && ((*(byte *)(local_c + 7) & 1) != 0)) {
      *(short *)(local_c + 0x62) = (short)local_c[0x7b];
      *(short *)((int)local_c + 0x18a) = (short)local_c[0x7c];
      FUN_006e6020(local_c,local_c + 0x5d);
    }
    break;
  case 0x2d:
    local_c[0x7b] = param_1[5];
    (**(code **)(*local_c + 4))();
    if ((local_c[0x61] != 0) && ((*(byte *)(local_c + 7) & 1) != 0)) {
      *(short *)((int)local_c + 0x18a) = (short)local_c[0x7c];
      *(short *)(local_c + 0x62) = (short)local_c[0x7b];
      FUN_006e6020(local_c,local_c + 0x5d);
    }
    break;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
    if (((((int)(uint)*(ushort *)(param_1 + 6) < local_c[9]) ||
         (local_c[0xb] + local_c[9] <= (int)(uint)*(ushort *)(param_1 + 6))) ||
        ((int)(uint)*(ushort *)((int)param_1 + 0x1a) < local_c[10])) ||
       (local_c[0xc] + local_c[10] <= (int)(uint)*(ushort *)((int)param_1 + 0x1a))) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
    local_c[0x6f] = iVar3;
    if ((iVar3 != 0) && (local_c[0x69] != 0)) {
      piVar7 = local_c + 0x65;
      piVar8 = local_2c;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      local_18 = param_1;
      FUN_006e5fe0(local_c,local_2c);
    }
  }
  FUN_0072b780(param_1);
  DAT_00858df8 = (undefined4 *)local_70;
  return 0;
}

