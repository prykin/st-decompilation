
undefined4 FUN_00748eca(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if (param_2 < 4) {
    return 0;
  }
  if (param_3 == (uint *)0x0) {
    return 0x80004003;
  }
  uVar1 = *param_3;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  if (((((0x30 < param_2) || (0x30 < uVar1)) ||
       ((0xb < param_2 &&
        (((param_3[2] & 0xfffffe20) != 0 ||
         ((((param_3[2] & 0x10) != 0 && ((*(byte *)(param_1 + 4) & 0x10) == 0)) && (param_2 < 0x20))
         )))))) ||
      (((0x2b < param_2 && (param_3[10] != 0)) && (param_3[10] != *(uint *)(param_1 + 0xc))))) ||
     ((0x2f < param_2 &&
      (((param_3[0xb] != 0 && (param_3[0xb] != *(uint *)(param_1 + 0x14))) ||
       ((0x2f < param_2 && ((0xf < param_2 && ((int)param_3[0xb] < (int)param_3[3])))))))))) {
    return 0x80070057;
  }
  if ((0x27 < param_2) && ((param_3[2] & 8) != 0)) {
    if ((undefined4 *)param_3[9] == (undefined4 *)0x0) {
      return 0x80004003;
    }
    local_8 = FUN_0074bc6a((undefined4 *)param_3[9]);
    if (local_8 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
  }
  if (0x23 < param_2) {
    *(uint *)(param_1 + 0x40) = param_3[8];
  }
  if (param_2 < 0xc) {
    if (param_2 < 8) goto LAB_00748fc9;
  }
  else {
    *(uint *)(param_1 + 4) = param_3[2] | *(uint *)(param_1 + 4) & 0x20;
  }
  *(uint *)(param_1 + 8) = param_3[1];
LAB_00748fc9:
  if (0xf < param_2) {
    *(uint *)(param_1 + 0x10) = param_3[3];
  }
  if (0x1f < param_2) {
    *(uint *)(param_1 + 0x28) = param_3[6];
    *(uint *)(param_1 + 0x2c) = param_3[7];
  }
  if (0x17 < param_2) {
    *(uint *)(param_1 + 0x20) = param_3[4];
    *(uint *)(param_1 + 0x24) = param_3[5];
  }
  if ((0x27 < param_2) && ((param_3[2] & 8) != 0)) {
    if (*(LPVOID *)(param_1 + 0x3c) != (LPVOID)0x0) {
      FUN_0074bc50(*(LPVOID *)(param_1 + 0x3c));
    }
    *(undefined4 **)(param_1 + 0x3c) = local_8;
  }
  return 0;
}

