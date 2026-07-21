
undefined4 * FUN_00631fd0(void)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0xb1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = thunk_FUN_00632000(puVar1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

