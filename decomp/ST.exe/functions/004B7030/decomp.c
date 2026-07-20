
undefined4 FUN_004b7030(char param_1)

{
  if (*(byte **)&g_playerRuntime[param_1].field_0x992 != (byte *)0x0) {
    FUN_006ae110(*(byte **)&g_playerRuntime[param_1].field_0x992);
    *(undefined4 *)&g_playerRuntime[param_1].field_0x992 = 0;
  }
  return 0;
}

