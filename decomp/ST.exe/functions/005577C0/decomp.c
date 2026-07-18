
undefined4 * __fastcall FUN_005577c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_006e60e0(param_1);
  *param_1 = &PTR_LAB_0079aeec;
  DAT_00802a88 = param_1;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0x41] = 1;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar3 = param_1 + 0x15;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0x1d;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0x25;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x3d] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x3e] = 1;
  puVar3 = param_1 + 0x46;
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0x76;
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  uVar1 = thunk_FUN_004ab050();
  param_1[0x43] = uVar1;
  return param_1;
}

