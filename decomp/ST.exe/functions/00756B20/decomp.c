
void FUN_00756b20(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 0xc) != 0xca) {
    RaiseInternalException(0x12,DAT_007ed77c,s_E__DKW_JPG_C_jdmaster_c_007f2d68,0x5e);
  }
  iVar4 = *(int *)(param_1 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x2c);
  if ((uint)(iVar4 * 8) < uVar2 || iVar4 * 8 - uVar2 == 0) {
    iVar4 = FUN_00759e70(*(int *)(param_1 + 0x14),8);
    *(int *)(param_1 + 0x68) = iVar4;
    iVar4 = FUN_00759e70(*(int *)(param_1 + 0x18),8);
    *(int *)(param_1 + 0x6c) = iVar4;
    *(undefined4 *)(param_1 + 0x12a) = 1;
  }
  else if ((uint)(iVar4 * 4) < uVar2 || iVar4 * 4 - uVar2 == 0) {
    iVar4 = FUN_00759e70(*(int *)(param_1 + 0x14),4);
    *(int *)(param_1 + 0x68) = iVar4;
    iVar4 = FUN_00759e70(*(int *)(param_1 + 0x18),4);
    *(int *)(param_1 + 0x6c) = iVar4;
    *(undefined4 *)(param_1 + 0x12a) = 2;
  }
  else if (uVar2 < (uint)(iVar4 * 2)) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x12a) = 8;
  }
  else {
    iVar4 = FUN_00759e70(*(int *)(param_1 + 0x14),2);
    *(int *)(param_1 + 0x68) = iVar4;
    iVar4 = FUN_00759e70(*(int *)(param_1 + 0x18),2);
    *(int *)(param_1 + 0x6c) = iVar4;
    *(undefined4 *)(param_1 + 0x12a) = 4;
  }
  piVar7 = (int *)(param_1 + 0x1c);
  piVar1 = (int *)(param_1 + 0xd0);
  param_1 = 0;
  if (0 < *piVar7) {
    piVar7 = (int *)(*piVar1 + 0xc);
    do {
      iVar4 = *(int *)(iVar3 + 0x12a);
      iVar5 = iVar4;
      if (iVar4 < 8) {
        iVar9 = *(int *)(iVar3 + 0x122) * iVar4;
        do {
          iVar8 = piVar7[-1] * iVar5 * 2;
          if ((iVar8 - iVar9 != 0 && iVar9 <= iVar8) ||
             (iVar10 = *(int *)(iVar3 + 0x126) * iVar4, iVar8 = *piVar7 * iVar5 * 2,
             iVar8 - iVar10 != 0 && iVar10 <= iVar8)) break;
          iVar5 = iVar5 * 2;
        } while (iVar5 < 8);
      }
      piVar7[6] = iVar5;
      param_1 = param_1 + 1;
      piVar7 = piVar7 + 0x15;
    } while (param_1 < *(int *)(iVar3 + 0x1c));
  }
  iVar4 = 0;
  if (0 < *(int *)(iVar3 + 0x1c)) {
    piVar7 = (int *)(*(int *)(iVar3 + 0xd0) + 0x24);
    do {
      iVar5 = FUN_00759e70(piVar7[-7] * *piVar7 * *(int *)(iVar3 + 0x14),
                           *(int *)(iVar3 + 0x122) << 3);
      piVar7[1] = iVar5;
      iVar5 = FUN_00759e70(piVar7[-6] * *piVar7 * *(int *)(iVar3 + 0x18),
                           *(int *)(iVar3 + 0x126) << 3);
      piVar7[2] = iVar5;
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 0x15;
    } while (iVar4 < *(int *)(iVar3 + 0x1c));
  }
  switch(*(undefined4 *)(iVar3 + 0x24)) {
  case 1:
    *(undefined4 *)(iVar3 + 0x70) = 1;
    break;
  case 2:
  case 3:
    *(undefined4 *)(iVar3 + 0x70) = 3;
    break;
  case 4:
  case 5:
    *(undefined4 *)(iVar3 + 0x70) = 4;
    break;
  default:
    *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar3 + 0x1c);
  }
  uVar6 = 1;
  if (*(int *)(iVar3 + 0x4c) == 0) {
    uVar6 = *(undefined4 *)(iVar3 + 0x70);
  }
  *(undefined4 *)(iVar3 + 0x74) = uVar6;
  iVar4 = FUN_00756d40(iVar3);
  if (iVar4 == 0) {
    *(undefined4 *)(iVar3 + 0x78) = 1;
    return;
  }
  *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar3 + 0x126);
  return;
}

