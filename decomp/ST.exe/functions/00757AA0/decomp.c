
void FUN_00757aa0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((0xffdc < *(int *)(param_1 + 0x18)) || (0xffdc < *(int *)(param_1 + 0x14))) {
    RaiseInternalException(0x28,DAT_007ed77c,s_E__DKW_JPG_C_jdinput_c_007f2d98,0x32);
  }
  if (*(int *)(param_1 + 0xcc) != 8) {
    RaiseInternalException(0xd,DAT_007ed77c,s_E__DKW_JPG_C_jdinput_c_007f2d98,0x36);
  }
  if (10 < *(int *)(param_1 + 0x1c)) {
    RaiseInternalException(0x18,DAT_007ed77c,s_E__DKW_JPG_C_jdinput_c_007f2d98,0x3b);
  }
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x122) = 1;
  *(undefined4 *)(param_1 + 0x126) = 1;
  if (0 < *(int *)(param_1 + 0x1c)) {
    piVar3 = (int *)(*(int *)(param_1 + 0xd0) + 0xc);
    do {
      if ((((piVar3[-1] < 1) || (4 < piVar3[-1])) || (*piVar3 < 1)) || (4 < *piVar3)) {
        RaiseInternalException(0x10,DAT_007ed77c,s_E__DKW_JPG_C_jdinput_c_007f2d98,0x44);
      }
      iVar1 = *(int *)(param_1 + 0x122);
      if (*(int *)(param_1 + 0x122) <= piVar3[-1]) {
        iVar1 = piVar3[-1];
      }
      *(int *)(param_1 + 0x122) = iVar1;
      iVar1 = *(int *)(param_1 + 0x126);
      if (*(int *)(param_1 + 0x126) <= *piVar3) {
        iVar1 = *piVar3;
      }
      *(int *)(param_1 + 0x126) = iVar1;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x15;
    } while (iVar2 < *(int *)(param_1 + 0x1c));
  }
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x12a) = 8;
  if (0 < *(int *)(param_1 + 0x1c)) {
    piVar3 = (int *)(*(int *)(param_1 + 0xd0) + 0x1c);
    do {
      piVar3[2] = 8;
      iVar1 = FUN_00759e70(piVar3[-5] * *(int *)(param_1 + 0x14),*(int *)(param_1 + 0x122) << 3);
      *piVar3 = iVar1;
      iVar1 = FUN_00759e70(piVar3[-4] * *(int *)(param_1 + 0x18),*(int *)(param_1 + 0x126) << 3);
      piVar3[1] = iVar1;
      iVar1 = FUN_00759e70(piVar3[-5] * *(int *)(param_1 + 0x14),*(int *)(param_1 + 0x122));
      piVar3[3] = iVar1;
      iVar1 = FUN_00759e70(piVar3[-4] * *(int *)(param_1 + 0x18),*(int *)(param_1 + 0x126));
      piVar3[4] = iVar1;
      piVar3[5] = 1;
      piVar3[0xc] = 0;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x15;
    } while (iVar2 < *(int *)(param_1 + 0x1c));
  }
  iVar2 = FUN_00759e70(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x126) << 3);
  *(int *)(param_1 + 0x12e) = iVar2;
  if ((*(int *)(param_1 + 0x1c) <= *(int *)(param_1 + 0x136)) && (*(int *)(param_1 + 0xd4) == 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x1a2) + 0x10) = 0;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1a2) + 0x10) = 1;
  return;
}

