
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_ChangeMD */

int __thiscall STAllPlayersC::_ChangeMD(STAllPlayersC *this,int param_1,int *param_2,uint param_3)

{
  DArrayTy *pDVar1;
  uint uVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = param_3;
  piVar4 = param_2;
  param_2 = (int *)GetObjPtr(this,(uint)param_2,param_3,CASE_1);
  if (param_2 == (int *)0x0) {
    iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x21d0,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC___ChangeMD_007a8000);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x21d1);
  }
  if (param_1 == 1) {
    iVar5 = _AddMDPairs(this,(uint)piVar4,uVar2);
  }
  else {
    iVar5 = _SubMDObject(piVar4,uVar2);
  }
  if ((((iVar5 == 1) && (pDVar1 = g_playerRuntime[(int)piVar4].groups, pDVar1 != (DArrayTy *)0x0))
      && (uVar2 = pDVar1->count, uVar2 != 0)) && (uVar7 = 0, 0 < (int)uVar2)) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar1,uVar7,&param_2);
      if ((param_2 != (int *)0x0) && (iVar6 = (**(code **)(*param_2 + 0xc))(), iVar6 == 8)) {
        (**(code **)(*param_2 + 0x10))(param_1,param_3);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar2);
  }
  return iVar5;
}

