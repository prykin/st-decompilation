
undefined4 FUN_004d88b0(char param_1,undefined4 param_2)

{
  if (param_1 == 0xff) {
    return 0;
  }
  g_playerRuntime[param_1].field19_0x1f = param_2;
  return param_2;
}

