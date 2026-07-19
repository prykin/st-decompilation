
int __thiscall
AiEventClassTy::_CreateDest
          (AiEventClassTy *this,short param_1,short param_2,short param_3,short param_4,
          short param_5,char *param_6,char *param_7,undefined4 param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  int iStack_c;
  int iStack_8;
  
  iStack_c = -1;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  iVar3 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_ai_ai_event_cpp_007d2a34,0x13c,0,iVar3,&DAT_007a4ccc,
                               s_AiEventClassTy___CreateDest_007d2b04);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_event_cpp_007d2a34,0x13d);
    return iVar3;
  }
  if ((param_1 == 0) || (bVar2 = false, param_1 == 1)) {
    bVar2 = true;
  }
  if (bVar2) {
    bVar2 = thunk_FUN_004961b0(param_3,param_4,param_5);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      iStack_8 = (int)param_3;
      iVar3 = thunk_FUN_006036a0(param_3,param_4,param_5,(int)param_1);
      if (iVar3 != 0) {
        if (param_7 == (char *)0x0) {
          param_7 = &DAT_008016a0;
        }
        if (param_6 == (char *)0x0) {
          param_6 = &DAT_008016a0;
        }
        thunk_FUN_006034e0((short)iStack_8,param_4,param_5,(int)param_1,(int)param_2,param_6,param_7
                           ,param_8);
        g_currentExceptionFrame = IStack_50.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = IStack_50.previous;
  return iStack_c;
}

