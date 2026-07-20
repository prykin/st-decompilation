
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::OutTRGlProc
   
   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00594D40 parameter used as this of MMMObjTy::OutRGlProc @ 00594DAA
   
   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00594D40 parameter used as this of MMMObjTy::OutRGlProc @ 00594DCB */

void __thiscall
FSGSTy::OutTRGlProc(FSGSTy *this,int param_1,MMMObjTy *param_2,MMMObjTy *param_3,int param_4,
                   int param_5,int param_6,int param_7,UINT param_8)

{
  code *pcVar1;
  int errorCode;
  uint *puVar2;
  int iVar3;
  StartServTy *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar4;
  uint uVar5;
  ccFntTy *pcVar6;
  undefined4 uVar7;
  InternalExceptionFrame local_48;
  
  if (param_8 != 0) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (errorCode == 0) {
      MMMObjTy::OutRGlProc
                (param_2,param_1,param_2,param_3,param_4,param_5 + 0x16,param_6,param_7 + -0x16,
                 (undefined4 *)&PTR_0081176c->field_0x140);
      MMMObjTy::OutRGlProc
                (param_3,param_1,param_2,param_3,param_4,param_5,param_6,0x15,
                 (undefined4 *)&PTR_0081176c->field_0x140);
      uVar7 = 0;
      pcVar6 = PTR_0081176c->field_0034;
      uVar5 = 0xffffffff;
      uVar4 = 0xfffffffe;
      puVar2 = (uint *)FUN_006b0140(param_8,HINSTANCE_00807618);
      StartServTy::WrTextDDX(this_00,0,param_4,param_5,param_6,0x15,puVar2,uVar4,uVar5,pcVar6,uVar7)
      ;
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x73,0,errorCode,
                               &DAT_007a4ccc,s_FSGSTy__OutTRGlProc_007cbfb0);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x73);
  }
  return;
}

