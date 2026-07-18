
undefined4 FUN_004d78e0(char param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = (int)param_1;
  if (iVar1 == 0xff) {
    return 0;
  }
  iVar4 = 0;
  iVar5 = 0;
  local_c = 0;
  local_8 = 0;
  _param_1 = 0;
  iVar1 = iVar1 * 0xa62;
  iVar3 = 6;
  piVar2 = (int *)((int)&DAT_007f55fa + iVar1);
  do {
    if (piVar2[8] != 0) {
      iVar4 = iVar4 + *piVar2;
      iVar5 = iVar5 + piVar2[0xd];
      _param_1 = _param_1 + piVar2[0xe];
      local_8 = local_8 + piVar2[0xf];
      local_c = local_c + piVar2[0x10];
    }
    piVar2 = piVar2 + 0x11;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_10 = *(int *)((int)&DAT_007f4e47 + iVar1);
  local_14 = *(int *)((int)&DAT_007f57be + iVar1);
  iVar3 = *(int *)((int)&DAT_007f4e43 + iVar1);
  iVar6 = *(int *)((int)&DAT_007f4e3f + iVar1);
  piVar2 = (int *)(&DAT_007f562e + iVar1);
  local_1c = 6;
  do {
    if (piVar2[-5] != 0) {
      if (*piVar2 == 0) {
        piVar2[-0xc] = 0;
      }
      else {
        piVar2[-0xc] = (piVar2[-0xd] * iVar6) / iVar4;
      }
      if (piVar2[1] == 0) {
        piVar2[-0xb] = 0;
      }
      else {
        piVar2[-0xb] = (piVar2[-0xd] * iVar3) / iVar4;
      }
      if (piVar2[2] == 0) {
        piVar2[-10] = 0;
      }
      else {
        piVar2[-10] = (piVar2[-0xd] * local_10) / iVar4;
      }
      if (piVar2[3] == 0) {
        piVar2[-9] = 0;
      }
      else {
        piVar2[-9] = (piVar2[-0xd] * local_14) / iVar4;
      }
      iVar1 = *piVar2;
      if ((iVar1 < piVar2[-0xc]) || (iVar5 == iVar1)) {
        piVar2[-0xc] = iVar1;
      }
      iVar1 = piVar2[1];
      if ((iVar1 < piVar2[-0xb]) || (_param_1 == iVar1)) {
        piVar2[-0xb] = iVar1;
      }
      iVar1 = piVar2[2];
      if ((iVar1 < piVar2[-10]) || (local_8 == iVar1)) {
        piVar2[-10] = iVar1;
      }
      iVar1 = piVar2[3];
      if ((iVar1 < piVar2[-9]) || (local_c == iVar1)) {
        piVar2[-9] = iVar1;
      }
      if (iVar6 < piVar2[-0xc]) {
        piVar2[-0xc] = iVar6;
      }
      if (iVar3 < piVar2[-0xb]) {
        piVar2[-0xb] = iVar3;
      }
      if (local_10 < piVar2[-10]) {
        piVar2[-10] = local_10;
      }
      if (local_14 < piVar2[-9]) {
        piVar2[-9] = local_14;
      }
      local_10 = local_10 - piVar2[-10];
      iVar4 = iVar4 - piVar2[-0xd];
      iVar6 = iVar6 - piVar2[-0xc];
      iVar3 = iVar3 - piVar2[-0xb];
      local_14 = local_14 - piVar2[-9];
    }
    piVar2 = piVar2 + 0x11;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  return 0;
}

