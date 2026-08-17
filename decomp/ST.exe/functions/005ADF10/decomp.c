#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::CloseButtons */

void __thiscall ChooseMapTy::CloseButtons(ChooseMapTy *this)

{
  ChooseMapTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  ChooseMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    /* ST_CALLSITE[005ADF44]: CALL 0x00403459; direct=00403459 MMObjTy::CloseButtons */
    MMObjTy::CloseButtons((MMObjTy *)local_8);
    if (this_00->field_20B5 != '\0') {
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   0xfffffffe,g_startSystem_0081176C->field_0314,g_startSystem_0081176C->field_0318);
      }
      FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
    }
    this_00->field_0065 = 4;
    thunk_FUN_005b6730(this_00,0xc,'\x01',-1);
    /* ST_CALLSITE[005ADFAB]: CALL 0x0040149c; direct=0040149C ChooseMapTy::DeleteCtrls */
    DeleteCtrls(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x25b,0,errorCode,
                             "%s","ChooseMapTy::CloseButtons");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\load_obj.cpp",0x25b);
  return;
}

