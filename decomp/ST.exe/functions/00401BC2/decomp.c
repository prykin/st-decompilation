
int thunk_FUN_0054cc20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 auStack_4c [16];
  int *piStack_c;
  undefined4 uStack_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  iVar2 = __setjmp3(auStack_4c,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_0054cbb0(param_1,&uStack_8);
    if (iVar2 != 0) {
      RaiseInternalException(-4,DAT_007ed77c,s_E____titans_Andrey_tplaysys_cpp_007c8430,0xef);
    }
    iVar2 = (**(code **)(*piStack_c + 8))(uStack_8,param_2,param_3,param_4,param_5);
    if (iVar2 != 0) {
      RaiseInternalException(iVar2,DAT_007ed77c,s_E____titans_Andrey_tplaysys_cpp_007c8430,0xf0);
    }
    g_currentExceptionFrame = pIVar4;
    return iVar2;
  }
  g_currentExceptionFrame = pIVar4;
  if (iVar2 == -4) {
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0xf3,0,0,
                               s_Not_found_system_type_for_game_t_007c8488,param_1);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  else {
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0xf5,0,0,&DAT_007a4ccc,
                               s_STPlaySystemC__CreateGameObject_e_007c8458);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0xf7);
  return iVar2;
}

