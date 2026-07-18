
uint __cdecl thunk_FUN_0067f740(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = thunk_FUN_0067f5e0(param_1);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if ((uVar1 < *(uint *)(DAT_00848a28 + 0xc)) &&
     (puVar2 = (undefined4 *)(*(int *)(DAT_00848a28 + 8) * uVar1 + *(int *)(DAT_00848a28 + 0x1c)),
     puVar2 != (undefined4 *)0x0)) {
    *puVar2 = param_2;
    return uVar1;
  }
  return 0xfffffffc;
}

