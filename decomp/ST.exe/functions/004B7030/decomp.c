
undefined4 FUN_004b7030(char param_1)

{
  if (*(DArrayTy **)&g_playerRuntime[param_1].field_0x992 != (DArrayTy *)0x0) {
    DArrayDestroy(*(DArrayTy **)&g_playerRuntime[param_1].field_0x992);
    *(undefined4 *)&g_playerRuntime[param_1].field_0x992 = 0;
  }
  return 0;
}

