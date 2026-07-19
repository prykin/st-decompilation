
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PaintMTask */

void __thiscall MTaskTy::PaintMTask(MTaskTy *this)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_48 [16];
  MTaskTy *local_8;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar3);
  if (errorCode == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)&local_8->field_0x5d);
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x136,0,errorCode,
                             &DAT_007a4ccc,s_MTaskTy__PaintMTask_007cda88);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_task_obj_cpp_007cd994,0x136);
  return;
}

