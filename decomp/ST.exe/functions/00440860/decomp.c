
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_ChangeMD */

int __thiscall STAllPlayersC::_ChangeMD(STAllPlayersC *this,int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_3;
  piVar4 = param_2;
  param_2 = (int *)thunk_FUN_0042b620((uint)param_2,param_3,1);
  if (param_2 == (int *)0x0) {
    iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x21d0,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC___ChangeMD_007a8000);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    RaiseInternalException(-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x21d1)
    ;
  }
  if (param_1 == 1) {
    iVar5 = _AddMDPairs(this,(uint)piVar4,uVar7);
  }
  else {
    iVar5 = thunk_FUN_00442b40(piVar4,uVar7);
  }
  if ((((iVar5 == 1) && (iVar1 = *(int *)((int)&DAT_007f4e24 + (int)piVar4 * 0xa62 + 1), iVar1 != 0)
       ) && (iVar2 = *(int *)(iVar1 + 0xc), iVar2 != 0)) && (uVar7 = 0, 0 < iVar2)) {
    do {
      FUN_006acc70(iVar1,uVar7,&param_2);
      if ((param_2 != (int *)0x0) && (iVar6 = (**(code **)(*param_2 + 0xc))(), iVar6 == 8)) {
        (**(code **)(*param_2 + 0x10))(param_1,param_3);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar2);
  }
  return iVar5;
}

