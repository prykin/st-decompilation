
int FUN_004d8800(char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  if (iVar1 == 0xff) {
    return 0;
  }
  if ((int)g_playerRuntime[iVar1].field19_0x1f < param_2) {
    return -1;
  }
  iVar2 = g_playerRuntime[iVar1].field19_0x1f - param_2;
  g_playerRuntime[iVar1].field19_0x1f = iVar2;
  return iVar2;
}

