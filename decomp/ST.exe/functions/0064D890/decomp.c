
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::_CreateRCCont */

int __thiscall
AiEventClassTy::_CreateRCCont
          (AiEventClassTy *this,uint param_1,short param_2,int param_3,int param_4,
          undefined4 param_5,undefined4 param_6,char *param_7,int param_8)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_6c;
  int local_28;
  uint local_24;
  short local_20 [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_28 = -1;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar3 = __setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_ai_ai_event_cpp_007d2a34,0xee,0,iVar3,&DAT_007a4ccc,
                               s_AiEventClassTy___CreateRCCont_007d2ac0);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_event_cpp_007d2a34,0xef);
    return iVar3;
  }
  if (DAT_007fa174 != 0) {
    if ((((param_2 == 0xdd) || (param_2 == 0xde)) || (param_2 == 0xe2)) || (param_2 == 0xdc)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      local_c = param_3;
      local_8 = param_4;
      local_24 = (uint)(byte)(&DAT_008087e8)[(param_1 & 0xffff) * 0x51];
      local_10 = param_5;
      bVar2 = thunk_FUN_004961b0((short)param_3,(short)param_4,(short)param_5);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        local_20[0] = 3;
        local_20[1] = 0;
        local_20[2] = 3;
        local_20[3] = 0;
        local_14 = param_3 + -1;
        local_18 = param_4 + -1;
        thunk_FUN_006756d0((short *)&local_14,(short *)&local_18,local_20,local_20 + 2);
        local_c = local_14 + 1;
        local_8 = local_18 + 1;
      }
      iVar3 = thunk_FUN_00675b10(local_c,local_8,(short)local_10,(short *)&local_c,(short *)&local_8
                                 ,(short *)&local_10,0xfe);
      if (iVar3 != 0) {
        if (param_7 == (char *)0x0) {
          param_7 = &DAT_008016a0;
        }
        thunk_FUN_005fcff0(param_1 & 0xffff,local_24,(int)param_2,param_6,(int)(short)local_c,
                           (int)(short)local_8,(int)(short)local_10,param_7,0xffffffff,param_8);
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return local_28;
}

