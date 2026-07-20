
int FUN_004d88f0(char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  if (iVar1 == 0xff) {
    return 0;
  }
  iVar2 = g_playerRuntime[iVar1].field17_0x23 + param_2;
  g_playerRuntime[iVar1].field17_0x23 = iVar2;
  return iVar2;
}

