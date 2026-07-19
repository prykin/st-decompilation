
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMMObjTy::OutRGlProc */

void __thiscall
MMMObjTy::OutRGlProc
          (MMMObjTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
          int param_6,int param_7,undefined4 *param_8)

{
  code *pcVar1;
  undefined4 *puVar2;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;
  
  if (param_8 != (undefined4 *)0x0) {
    local_8 = param_8;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar2 = local_8;
    if (errorCode == 0) {
      Library::DKW::DDX::FUN_006c68f0(param_1,param_4,param_5,param_6,param_7,(int)(local_8 + 1));
      FUN_006c6850(param_1,param_4,param_5,param_6,param_7,*puVar2);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_mmenuobj_cpp_007cca38,0x13b,0,errorCode,
                               &DAT_007a4ccc,s_MMMObjTy__OutRGlProc_007ccb1c);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_mmenuobj_cpp_007cca38,0x13b);
  }
  return;
}

