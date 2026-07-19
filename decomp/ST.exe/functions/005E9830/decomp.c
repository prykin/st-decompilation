
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::CloseButtons */

void __thiscall WaitTy::CloseButtons(WaitTy *this)

{
  code *pcVar1;
  WaitTy *this_00;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_48 [16];
  WaitTy *local_8;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar3);
  this_00 = local_8;
  if (errorCode == 0) {
    MMObjTy::CloseButtons((MMObjTy *)local_8);
    if (this_00->field_1A64 == 0) {
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x314),*(uint *)(DAT_0081176c + 0x318));
      }
      FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
    }
    this_00->field_0065 = 4;
    thunk_FUN_005b6730(this_00,0xc,'\x01',-1);
    DeleteCtrls(this_00);
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x2b3,0,errorCode,
                             &DAT_007a4ccc,s_WaitTy__CloseButtons_007cde08);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x2b3);
  return;
}

