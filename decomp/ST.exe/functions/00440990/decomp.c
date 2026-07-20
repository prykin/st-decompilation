
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_ChangeDock */

void STAllPlayersC::_ChangeDock(undefined4 param_1,int *param_2,uint param_3)

{
  DArrayTy *pDVar1;
  uint uVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  STAllPlayersC *in_ECX;
  uint uVar6;
  
  piVar4 = param_2;
  param_2 = (int *)GetObjPtr(in_ECX,(uint)param_2,param_3,CASE_1);
  if (param_2 == (int *)0x0) {
    iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x21ed,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC___ChangeDock_007a8020);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x21ee);
  }
  iVar5 = (**(code **)(*param_2 + 0x2c))();
  if ((((iVar5 == 0x33) && (pDVar1 = g_playerRuntime[(int)piVar4].groups, pDVar1 != (DArrayTy *)0x0)
       ) && (uVar2 = pDVar1->count, uVar2 != 0)) && (uVar6 = 0, 0 < (int)uVar2)) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar1,uVar6,&param_2);
      if (param_2 != (int *)0x0) {
        iVar5 = (**(code **)(*param_2 + 0xc))();
        if (iVar5 == 4) {
          (**(code **)(*param_2 + 0x14))(param_1,param_3);
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar2);
  }
  return;
}

