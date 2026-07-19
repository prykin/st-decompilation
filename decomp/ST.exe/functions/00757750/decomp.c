
uint FUN_00757750(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *local_8;
  
  uVar1 = param_1;
  iVar2 = *(int *)(param_1 + 0x136);
  if (iVar2 != 1) {
    if ((iVar2 < 1) || (4 < iVar2)) {
      RaiseInternalException(0x18,DAT_007ed77c,s_E__DKW_JPG_C_jdinput_c_007f2d98,0xa1);
    }
    iVar2 = FUN_00759e70(*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x122) << 3);
    *(int *)(param_1 + 0x14a) = iVar2;
    iVar2 = FUN_00759e70(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x126) << 3);
    *(int *)(param_1 + 0x14e) = iVar2;
    uVar4 = *(uint *)(param_1 + 0x136);
    *(undefined4 *)(param_1 + 0x152) = 0;
    param_1 = 0;
    if (0 < (int)uVar4) {
      local_8 = (int *)(uVar1 + 0x13a);
      do {
        iVar2 = *local_8;
        uVar4 = *(uint *)(iVar2 + 8);
        *(uint *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x24) * uVar4;
        uVar3 = *(uint *)(iVar2 + 0x1c) % uVar4;
        *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0xc);
        iVar5 = *(int *)(iVar2 + 0xc) * uVar4;
        *(uint *)(iVar2 + 0x34) = uVar4;
        *(int *)(iVar2 + 0x3c) = iVar5;
        if (uVar3 == 0) {
          uVar3 = uVar4;
        }
        *(uint *)(iVar2 + 0x44) = uVar3;
        uVar4 = *(uint *)(iVar2 + 0x20) % *(uint *)(iVar2 + 0xc);
        if (uVar4 == 0) {
          uVar4 = *(uint *)(iVar2 + 0xc);
        }
        *(uint *)(iVar2 + 0x48) = uVar4;
        if (10 < *(int *)(uVar1 + 0x152) + iVar5) {
          RaiseInternalException(0xb,DAT_007ed77c,s_E__DKW_JPG_C_jdinput_c_007f2d98,0xbe);
        }
        if (0 < iVar5) {
          do {
            *(uint *)(uVar1 + 0x156 + *(int *)(uVar1 + 0x152) * 4) = param_1;
            iVar5 = iVar5 + -1;
            *(int *)(uVar1 + 0x152) = *(int *)(uVar1 + 0x152) + 1;
          } while (iVar5 != 0);
        }
        uVar4 = param_1 + 1;
        local_8 = local_8 + 1;
        param_1 = uVar4;
      } while ((int)uVar4 < *(int *)(uVar1 + 0x136));
    }
    return uVar4;
  }
  iVar2 = *(int *)(param_1 + 0x13a);
  *(undefined4 *)(param_1 + 0x14a) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x14e) = *(undefined4 *)(iVar2 + 0x20);
  uVar1 = *(uint *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x24);
  uVar4 = *(uint *)(iVar2 + 0x20);
  uVar3 = uVar4 % uVar1;
  *(undefined4 *)(iVar2 + 0x34) = 1;
  *(undefined4 *)(iVar2 + 0x38) = 1;
  *(undefined4 *)(iVar2 + 0x3c) = 1;
  *(undefined4 *)(iVar2 + 0x44) = 1;
  if (uVar3 == 0) {
    uVar3 = uVar1;
  }
  *(uint *)(iVar2 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x152) = 1;
  *(undefined4 *)(param_1 + 0x156) = 0;
  return uVar4 / uVar1;
}

