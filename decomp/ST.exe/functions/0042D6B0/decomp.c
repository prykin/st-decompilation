
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RemoveActiveTV */

void STAllPlayersC::RemoveActiveTV(char param_1)

{
  code *pcVar1;
  int iVar2;
  STAllPlayersC *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = (int)param_1;
  iVar2 = g_playerRuntime[iVar3].field442_0x203;
  if (iVar2 == 0) {
    puVar4 = &g_playerRuntime[iVar3].field326_0x163;
  }
  else {
    if (iVar2 != 1) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x470,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__RemoveActiveTV_wr_007a645c);
      if (iVar2 == 0) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar4 = &g_playerRuntime[iVar3].field384_0x1b3;
  }
  ResetActivityFromTmp(in_ECX,param_1,iVar2,0,1);
  if (*(byte **)((int)puVar4 + 10) != (byte *)0x0) {
    FUN_006ae110(*(byte **)((int)puVar4 + 10));
    *(undefined4 *)((int)puVar4 + 10) = 0;
  }
  *puVar4 = 0;
  return;
}

