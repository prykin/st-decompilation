
undefined4 __cdecl FUN_0067f4b0(uint param_1)

{
  undefined4 *puVar1;

  if ((param_1 < PTR_00848a28->field_000C) &&
     (puVar1 = (undefined4 *)(PTR_00848a28->field_0008 * param_1 + PTR_00848a28->field_001C),
     puVar1 != (undefined4 *)0x0)) {
    return *puVar1;
  }
  return 0;
}

