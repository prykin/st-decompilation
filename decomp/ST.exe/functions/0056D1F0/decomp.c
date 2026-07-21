#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::CommonFunction */

undefined4 __thiscall STAppC::CommonFunction(STAppC *this,int param_1)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  InternalExceptionFrame local_4c;
  STAppC *local_8;

  if (this->field_4EFA != 0) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (DAT_0080674c == 0) {
      Library::DKW::DDX::FUN_006bd740(DAT_008075a8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if ((local_8->field_4EF6 != 0) && (DAT_0080673c = DAT_0080673c + -1, DAT_0080673c < 1)) {
      DAT_0080673c = *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x10);
      if ((PTR_00802a30 != (CursorClassTy *)0x0) && (PTR_00802a30->field_00A9 == 0)) {
        Library::DKW::DDX::FUN_006b8d50((int *)PTR_00802a30->field_00AD,0,0,0,0);
      }
      Library::Ourlib::ST3DSPR::FUN_006ed100((undefined4 *)PTR_00807598);
      Library::DKW::DDX::FUN_006bd740(DAT_008075a8);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x3e6,0,errorCode,"%s",
                             "STAppC::CommonFunction");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\tapp.cpp",999);
  return 0xffffffff;
}

