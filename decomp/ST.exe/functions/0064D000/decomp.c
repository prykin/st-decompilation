
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::PrepareToSave */

undefined4 * __thiscall AiEventClassTy::PrepareToSave(AiEventClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiEventClassTy *pAVar2;
  int errorCode;
  undefined4 *puVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  AiEventClassTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if (local_8 == (AiEventClassTy *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)&local_8->field_0x8c;
    }
    puVar3 = thunk_FUN_0065cd10(puVar3,param_1);
    *(undefined1 *)puVar3 = 1;
    *(undefined4 *)((int)puVar3 + 0x4e) = *(undefined4 *)&pAVar2->field_0x88;
    g_currentExceptionFrame = pIVar5;
    return puVar3;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E____titans_ai_ai_event_cpp_007d2a34,0x66,0,errorCode,&DAT_007a4ccc,
                             s_AiEventClassTy__PrepareToSave_007d2a78);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_event_cpp_007d2a34,0x67);
  return (undefined4 *)0x0;
}

