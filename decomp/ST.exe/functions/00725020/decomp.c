
int FUN_00725020(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  uint uVar8;
  void *unaff_EDI;
  int *piVar9;
  uint uVar10;
  undefined4 local_7c;
  undefined4 local_78 [16];
  undefined4 local_38 [4];
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_7c = DAT_00858df8;
  DAT_00858df8 = &local_7c;
  iVar4 = __setjmp3(local_78,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_7c;
    iVar4 = FUN_006ad4d0(s_E__Ourlib__strack_cpp_007f0c20,0xc9,0,iVar4,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    FUN_006a5e40(0xffff,0,0x7f0c20,0xca);
    return 0xffff;
  }
  switch(param_1[4]) {
  case 2:
    piVar1 = (int *)param_1[5];
    if (piVar1 != (int *)0x0) {
      local_14[8] = *piVar1;
      local_14[0x62] = piVar1[1];
      local_14[7] = piVar1[2];
      local_14[9] = piVar1[3];
      local_14[10] = piVar1[4];
      local_14[0xb] = piVar1[5];
      local_14[0xc] = piVar1[6];
      local_14[0x4f] = piVar1[7];
      local_14[0x50] = piVar1[8];
      local_14[0x51] = piVar1[9];
      piVar7 = piVar1 + 10;
      piVar9 = local_14 + 0x52;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      local_14[0x59] = (int)local_14;
      piVar7 = piVar1 + 0x12;
      piVar9 = local_14 + 0x5a;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      local_14[0x61] = (int)local_14;
      piVar7 = piVar1 + 0x1a;
      piVar9 = local_14 + 0xf;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      local_14[0x16] = (int)local_14;
      local_14[99] = piVar1[0x22];
      local_14[100] = piVar1[0x23];
      local_14[0xd] = (uint)(piVar1[0x24] == 0);
      local_14[0xe] = (uint)(piVar1[0x25] == 0);
      FUN_00724d90((int)local_14);
      break;
    }
    goto LAB_0072520d;
  case 8:
    if ((local_14[7] & 0x70000000U) == 0) break;
    local_24 = local_14[2];
    local_28 = 0x13;
    local_20 = 0;
    iVar4 = FUN_006e6000(local_14,3,1,local_38);
    goto LAB_00725209;
  case 9:
    if ((local_14[7] & 0x70000000U) == 0) {
      local_24 = local_14[2];
      local_28 = 0x14;
      FUN_006e6000(local_14,3,1,local_38);
    }
    break;
  case 0x20:
    uVar8 = param_1[5];
    if ((local_14[7] & 0xffffffU) != uVar8) {
      local_14[0x4d] = 0;
      local_14[7] = local_14[7] & 0xff000000U | uVar8;
      iVar4 = (**(code **)(*local_14 + 4))();
      goto LAB_00725209;
    }
    break;
  case 0x22:
    local_14[100] = param_1[5];
    goto LAB_007251fb;
  case 0x26:
    param_1[5] = local_14[100];
    break;
  case 0x28:
    iVar4 = param_1[5];
    local_14[99] = iVar4;
    if (iVar4 < 0) {
      local_14[99] = 0;
    }
    local_14[100] = 0;
LAB_007251fb:
    FUN_00724d90((int)local_14);
    iVar4 = (**(code **)(*local_14 + 4))();
LAB_00725209:
    if (iVar4 != 0) {
LAB_0072520d:
      local_8 = 0xffff;
    }
  }
  if (local_14[7] != 1) goto switchD_00725240_caseD_2c;
  switch(param_1[4]) {
  case 0x2b:
    *(short *)(param_1 + 5) = (short)local_14[0x4e];
    break;
  case 0x60:
    iVar4 = FUN_00724fa0(local_14,(uint)*(ushort *)(param_1 + 6),
                         (uint)*(ushort *)((int)param_1 + 0x1a));
    local_14[0x4e] = iVar4;
    if (((*(byte *)(param_1 + 5) & 1) == 0) || (local_14[0x4d] == 0)) break;
  case 0x61:
    uVar8 = (uint)*(ushort *)(param_1 + 6);
    uVar10 = (uint)*(ushort *)((int)param_1 + 0x1a);
    local_10 = uVar8;
    local_c = uVar10;
    iVar4 = FUN_00724fa0(local_14,uVar8,uVar10);
    if ((iVar4 == 0) && (local_14[0x4d] == 0)) break;
    if ((local_14[0x4d] == 0) &&
       (bVar3 = FUN_00724f00(local_14,uVar8,uVar10), CONCAT31(extraout_var,bVar3) != 0)) {
LAB_007253a9:
      local_14[0x4d] = 1;
    }
    else {
      local_18 = local_14[100];
      if (local_14[8] == 1) {
        iVar4 = local_14[10];
        iVar5 = uVar10 - local_14[0x4f] / 2;
        if (iVar5 < iVar4) {
          local_14[0x66] = 0;
        }
        else {
          if (local_14[0xc] + iVar4 < local_14[0x4f] + iVar5) {
            iVar5 = (local_14[0xc] - local_14[0x4f]) + iVar4;
          }
          local_14[0x66] = iVar5 - iVar4;
          uVar8 = local_10;
          uVar10 = local_c;
        }
      }
      else {
        iVar6 = uVar8 - local_14[0x4f] / 2;
        iVar4 = local_14[9];
        iVar5 = iVar4;
        if ((iVar4 <= iVar6) &&
           (iVar5 = iVar6, uVar8 = local_10, uVar10 = local_c,
           local_14[0xb] + iVar4 < local_14[0x4f] + iVar6)) {
          iVar5 = (local_14[0xb] - local_14[0x4f]) + iVar4;
        }
        local_14[0x65] = iVar5 - iVar4;
      }
      FUN_00724e20(local_14,uVar8 - local_14[9],uVar10 - local_14[10]);
      if (local_14[100] == local_18) {
LAB_0072539e:
        iVar4 = (**(code **)(*local_14 + 4))();
        if (iVar4 == 0) goto LAB_007253a9;
      }
      else {
        local_14[0x57] = local_14[100];
        iVar4 = FUN_006e6020(local_14,local_14 + 0x52);
        if (iVar4 == 0) goto LAB_0072539e;
      }
      local_8 = 0xffff;
    }
    break;
  case 0x62:
    if (local_14[0x4d] != 0) {
      local_14[0x4d] = 0;
    }
  }
switchD_00725240_caseD_2c:
  if (local_8 != 0) {
    FUN_006a5e40(local_8,DAT_007ed77c,0x7f0c20,0xc5);
  }
  iVar4 = FUN_0072b780(param_1);
  if (iVar4 != 0) {
    local_8 = iVar4;
    FUN_006a5e40(iVar4,DAT_007ed77c,0x7f0c20,199);
  }
  DAT_00858df8 = (undefined4 *)local_7c;
  return iVar4;
}

