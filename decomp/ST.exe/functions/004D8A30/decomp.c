
int FUN_004d8a30(char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  if (iVar1 == 0xff) {
    return 0;
  }
  iVar2 = g_playerRuntime[iVar1].field21_0x27 + param_2;
  g_playerRuntime[iVar1].field21_0x27 = iVar2;
  return iVar2;
}

