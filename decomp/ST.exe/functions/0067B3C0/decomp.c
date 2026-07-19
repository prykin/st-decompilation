
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::SetTech */

int __thiscall
AiPlrClassTy::SetTech(AiPlrClassTy *this,int param_1,int param_2,int param_3,undefined1 param_4)

{
  code *pcVar1;
  AiPlrClassTy *pAVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_5c [16];
  undefined1 local_1c;
  undefined2 uStack_1b;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined2 uStack_17;
  undefined1 uStack_15;
  int local_14;
  int local_10;
  undefined2 local_c;
  AiPlrClassTy *local_8;
  
  local_8 = this;
  iVar3 = thunk_FUN_0067b2e0(this,param_1,param_2);
  pIVar5 = g_currentExceptionFrame;
  if (0 < iVar3) {
    return 0;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa0;
  iVar3 = __setjmp3(local_5c,0,unaff_ESI,pIVar5);
  pAVar2 = local_8;
  if (iVar3 == 0) {
    local_1c = param_4;
    uStack_1b = (undefined2)param_1;
    local_c = 0;
    uStack_15 = 0;
    uStack_17 = 1;
    uStack_19 = (undefined1)param_2;
    uStack_18 = (undefined1)((uint)param_2 >> 8);
    if (0 < param_3) {
      uStack_17 = (undefined2)param_3;
    }
    local_14 = iVar3;
    local_10 = iVar3;
    FUN_006ae1c0(*(uint **)(local_8 + 0x6a1),(undefined4 *)&local_1c);
    thunk_FUN_00676c40(*(int *)(pAVar2 + 0x6a1),&LAB_004029b9);
    g_currentExceptionFrame = pIVar5;
    return 0;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x3a9,0,iVar3,&DAT_007a4ccc,
                             s_AiPlrClassTy__SetTech_007d2ef4);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E____titans_ai_ai_plr_cpp_007d2e4c,0x3aa);
  return iVar3;
}

