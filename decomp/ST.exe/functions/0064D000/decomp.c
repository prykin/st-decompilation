
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::PrepareToSave */

undefined4 * __thiscall AiEventClassTy::PrepareToSave(AiEventClassTy *this,uint *param_1)

{
  code *pcVar1;
  AiEventClassTy *pAVar2;
  int errorCode;
  AnonShape_0065CD10_BA40DE58 *pAVar3;
  undefined4 *puVar4;
  int iVar5;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar6;
  undefined4 local_48 [16];
  AiEventClassTy *local_8;
  
  pIVar6 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar6);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if (local_8 == (AiEventClassTy *)0x0) {
      pAVar3 = (AnonShape_0065CD10_BA40DE58 *)0x0;
    }
    else {
      pAVar3 = (AnonShape_0065CD10_BA40DE58 *)&local_8->field_008C;
    }
    puVar4 = EventDataPack(pAVar3,param_1);
    *(undefined1 *)puVar4 = 1;
    *(undefined4 *)((int)puVar4 + 0x4e) = pAVar2->field_0088;
    g_currentExceptionFrame = pIVar6;
    return puVar4;
  }
  g_currentExceptionFrame = pIVar6;
  iVar5 = ReportDebugMessage(s_E____titans_ai_ai_event_cpp_007d2a34,0x66,0,errorCode,&DAT_007a4ccc,
                             s_AiEventClassTy__PrepareToSave_007d2a78);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  RaiseInternalException(errorCode,0,s_E____titans_ai_ai_event_cpp_007d2a34,0x67);
  return (undefined4 *)0x0;
}

