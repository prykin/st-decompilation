
undefined4 * FUN_00636200(void)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x34);
  if (puVar1 != nullptr) {
    puVar1 = thunk_FUN_00636230(puVar1);
    return puVar1;
  }
  return nullptr;
}

