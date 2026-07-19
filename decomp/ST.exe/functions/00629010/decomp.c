
undefined4 * FUN_00629010(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x108);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = thunk_FUN_00629040(puVar1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

