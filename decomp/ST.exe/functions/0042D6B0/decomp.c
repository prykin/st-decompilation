
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RemoveActiveTV */

void STAllPlayersC::RemoveActiveTV(char param_1)

{
  DArrayTy *array;
  code *pcVar1;
  int iVar2;
  STAllPlayersC *in_ECX;
  int iVar3;
  STPlayerTempSlot (*paSVar4) [5];
  
  iVar3 = (int)param_1;
  iVar2 = g_playerRuntime[iVar3].field324_0x203;
  if (iVar2 == 0) {
    paSVar4 = g_playerRuntime[iVar3].tempSlots;
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
    paSVar4 = g_playerRuntime[iVar3].tempSlots + 1;
  }
  ResetActivityFromTmp(in_ECX,param_1,iVar2,0,1);
  array = (*paSVar4)[0].objectIds;
  if (array != (DArrayTy *)0x0) {
    DArrayDestroy(array);
    (*paSVar4)[0].objectIds = (DArrayTy *)0x0;
  }
  (*paSVar4)[0].objectType = 0;
  return;
}

