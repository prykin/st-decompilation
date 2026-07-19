
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::_CreateMine */

int __thiscall
AiEventClassTy::_CreateMine
          (AiEventClassTy *this,ushort param_1,short param_2,int param_3,int param_4,
          undefined4 param_5,ushort param_6,char *param_7,undefined4 param_8,undefined4 param_9)

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
  if (((short)param_6 < 0) || (7 < (short)param_6)) {
    param_6 = param_1;
  }
  local_24 = (uint)param_6;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar3 = __setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (DAT_007fa174 != 0) {
      if ((((param_2 == 0xa6) || (param_2 == 0xa7)) || (param_2 == 0xbd)) || (param_2 == 0xaf)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        local_c = param_3;
        local_8 = param_4;
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
        iVar3 = thunk_FUN_00675950(local_c,local_8,(short)local_10,(short *)&local_c,
                                   (short *)&local_8,(short *)&local_10,1);
        if (iVar3 != 0) {
          if (param_7 == (char *)0x0) {
            param_7 = &DAT_008016a0;
          }
          thunk_FUN_00627850((int)param_2,(uint)param_1,0,0,(int)(short)local_c,(int)(short)local_8,
                             (int)(short)local_10,local_24,param_7,param_9);
          g_currentExceptionFrame = local_6c.previous;
          return 0;
        }
      }
    }
    g_currentExceptionFrame = local_6c.previous;
    return local_28;
  }
  g_currentExceptionFrame = local_6c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_ai_ai_event_cpp_007d2a34,0x169,0,iVar3,&DAT_007a4ccc,
                             s_AiEventClassTy___CreateMine_007d2b28);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E____titans_ai_ai_event_cpp_007d2a34,0x16a);
  return iVar3;
}

