
int FUN_004b71f0(undefined4 param_1,int param_2)

{
  g_playerRuntime[(char)param_1].field2227_0x976 =
       g_playerRuntime[(char)param_1].field2227_0x976 + param_2;
  if (param_2 != 0) {
    thunk_FUN_004b7750(param_1);
  }
  return g_playerRuntime[(char)param_1].field2227_0x976;
}

