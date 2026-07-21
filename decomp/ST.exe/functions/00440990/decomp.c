
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_ChangeDock */

void STAllPlayersC::_ChangeDock(undefined4 param_1,int *param_2,uint param_3)

{
  DArrayTy *array;
  dword dVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  STAllPlayersC *in_ECX;
  uint index;
  
  piVar3 = param_2;
  param_2 = (int *)GetObjPtr(in_ECX,(uint)param_2,param_3,CASE_1);
  if ((STGameObjC *)param_2 == (STGameObjC *)0x0) {
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x21ed,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC___ChangeDock_007a8020);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x21ee);
  }
  iVar4 = (**(code **)(*param_2 + 0x2c))();
  if ((((iVar4 == 0x33) && (array = g_playerRuntime[(int)piVar3].groups, array != (DArrayTy *)0x0))
      && (dVar1 = array->count, dVar1 != 0)) && (index = 0, 0 < (int)dVar1)) {
    do {
      DArrayGetElement(array,index,&param_2);
      if (param_2 != (int *)0x0) {
        iVar4 = (**(code **)(*param_2 + 0xc))();
        if (iVar4 == 4) {
          (**(code **)(*param_2 + 0x14))(param_1,param_3);
        }
      }
      index = index + 1;
    } while ((int)index < (int)dVar1);
  }
  return;
}

