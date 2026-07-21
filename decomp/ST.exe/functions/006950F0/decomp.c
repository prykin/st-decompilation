
uint FUN_006950f0(int param_1)

{
  uint uVar1;
  uint uVar2;

  uVar1 = thunk_FUN_006938c0(param_1);
  uVar2 = Library::MSVCRT::FUN_0072e6c0();
  return uVar2 % *(uint *)(DAT_00853d80 + 0x20c + uVar1 * 0x218);
}

