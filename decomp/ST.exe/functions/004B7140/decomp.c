
int FUN_004b7140(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (char)param_1;
  g_playerRuntime[cVar1].field2108_0x972 = param_2;
  if (param_2 != 0) {
    thunk_FUN_004b7750(param_1);
  }
  if ((int)cVar1 == (uint)DAT_0080874d) {
    thunk_FUN_004d8b70(cVar1);
  }
  return g_playerRuntime[cVar1].field2108_0x972;
}

