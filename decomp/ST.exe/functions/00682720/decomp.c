
void __cdecl FUN_00682720(int param_1)

{
  char *pcVar1;

  if (param_1 == 0x1c) {
    pcVar1 = LoadResourceString(0x1b5e,g_module_00807618);
    thunk_FUN_006802a0(-0x70,pcVar1);
    return;
  }
  if (param_1 != 0x1d) {
    pcVar1 = thunk_FUN_00674af0(param_1);
    thunk_FUN_006802a0(-0x70,pcVar1);
    return;
  }
  pcVar1 = LoadResourceString(0x1b5d,g_module_00807618);
  thunk_FUN_006802a0(-0x70,pcVar1);
  return;
}

