
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::CloseButtons */

void __thiscall ChooseMapTy::CloseButtons(ChooseMapTy *this)

{
  code *pcVar1;
  ChooseMapTy *this_00;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_48 [16];
  ChooseMapTy *local_8;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar3);
  this_00 = local_8;
  if (errorCode == 0) {
    MMObjTy::CloseButtons((MMObjTy *)local_8);
    if (this_00->field_20B5 != '\0') {
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
  iVar2 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x25b,0,errorCode,
                             &DAT_007a4ccc,s_ChooseMapTy__CloseButtons_007cc810);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_load_obj_cpp_007cc728,0x25b);
  return;
}

