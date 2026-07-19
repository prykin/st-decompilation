
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::CloseButtons */

void __thiscall PrividerTy::CloseButtons(PrividerTy *this,char param_1)

{
  code *pcVar1;
  MMObjTy *this_00;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_48 [16];
  MMObjTy *local_8;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = (MMObjTy *)this;
  errorCode = __setjmp3(local_48,0,unaff_ESI,pIVar3);
  this_00 = local_8;
  if (errorCode == 0) {
    MMObjTy::CloseButtons(local_8);
    DeleteCtrls((PrividerTy *)this_00,param_1);
    this_00[0x65] = (MMObjTy)0x4;
    thunk_FUN_005b6730(this_00,0xc,'\x01',-1);
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0x1c7,0,errorCode,
                             &DAT_007a4ccc,s_PrividerTy__CloseButtons_007cce4c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0x1c7);
  return;
}

