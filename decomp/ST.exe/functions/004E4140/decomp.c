
dword FUN_004e4140(int param_1)

{
  if (g_playerRuntime[param_1].field2285_0x9da != (DArrayTy *)0x0) {
    return (g_playerRuntime[param_1].field2285_0x9da)->count;
  }
  return 0;
}

