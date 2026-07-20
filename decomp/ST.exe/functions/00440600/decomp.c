
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetNInTmp */

uint STAllPlayersC::GetNInTmp(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return (uint)*(ushort *)(param_2 * 0x10 + 0x7f4f91 + (uint)DAT_0080874d * 0xa62);
  }
  if (param_1 != 1) {
    iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2184,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__GetNInTmp_007a7fe0);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    return 0;
  }
  return (uint)*(ushort *)(param_2 * 0x10 + 0x7f4fe1 + (uint)DAT_0080874d * 0xa62);
}

