
void __cdecl FUN_004e5140(int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    g_playerRuntime[param_1].field508_0x313 = 0;
    g_playerRuntime[param_1].field509_0x317 = 0;
    *(undefined4 *)&g_playerRuntime[param_1].field_0x31b = 0;
    *(undefined4 *)&g_playerRuntime[param_1].field_0x31f = 0;
    *(undefined4 *)&g_playerRuntime[param_1].field_0x323 = 0;
    g_playerRuntime[param_1].field1705_0x7d6 = 0;
  }
  return;
}

