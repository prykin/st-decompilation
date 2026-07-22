
void __cdecl FUN_006826a0(int param_1)

{
  char *pcVar1;

  if (param_1 == 0x1c) {
    pcVar1 = LoadResourceString(0x1b5e,g_module_00807618);
    thunk_FUN_006802a0(-0x6d,pcVar1);
    return;
  }
  if (param_1 != 0x1d) {
    pcVar1 = thunk_FUN_00674af0(param_1);
    thunk_FUN_006802a0(-0x6d,pcVar1);
    return;
  }
  pcVar1 = LoadResourceString(0x1b5d,g_module_00807618);
  thunk_FUN_006802a0(-0x6d,pcVar1);
  return;
}

