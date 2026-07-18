
undefined4 __cdecl FUN_0067f4b0(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < *(uint *)(DAT_00848a28 + 0xc)) &&
     (puVar1 = (undefined4 *)(*(int *)(DAT_00848a28 + 8) * param_1 + *(int *)(DAT_00848a28 + 0x1c)),
     puVar1 != (undefined4 *)0x0)) {
    return *puVar1;
  }
  return 0;
}

