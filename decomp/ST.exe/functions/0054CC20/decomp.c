
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::CreateGameObject */

int __thiscall
STPlaySystemC::CreateGameObject
          (STPlaySystemC *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  code *pcVar1;
  STPlaySystemC *pSVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_4c [16];
  STPlaySystemC *local_c;
  undefined4 local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c,0,unaff_ESI,pIVar5);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    iVar3 = thunk_FUN_0054cbb0(param_1,&local_8);
    if (iVar3 != 0) {
      RaiseInternalException
                (-4,g_overwriteContext_007ED77C,s_E____titans_Andrey_tplaysys_cpp_007c8430,0xef);
    }
    iVar3 = (*pSVar2->vtable->slot_08)(local_8,param_2,param_3,param_4,param_5);
    if (iVar3 != 0) {
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,s_E____titans_Andrey_tplaysys_cpp_007c8430,0xf0);
    }
    g_currentExceptionFrame = pIVar5;
    return iVar3;
  }
  g_currentExceptionFrame = pIVar5;
  if (iVar3 == -4) {
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0xf3,0,0,
                               s_Not_found_system_type_for_game_t_007c8488,param_1);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else {
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0xf5,0,0,&DAT_007a4ccc,
                               s_STPlaySystemC__CreateGameObject_e_007c8458);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0xf7);
  return iVar3;
}

