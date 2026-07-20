
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::OutTRGlProc
   
   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00594EB0 parameter used as this of MMMObjTy::OutRGlProc @ 0059501F
   
   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00594EB0 parameter used as this of MMMObjTy::OutRGlProc @ 00594F17
   
   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00594EB0 parameter used as this of StartServTy::WrTextDDX @ 005950C4 */

void __thiscall
FSGSTy::OutTRGlProc(FSGSTy *this,int param_1,MMMObjTy *param_2,MMMObjTy *param_3,
                   StartServTy *param_4,int param_5,int param_6,int param_7,int param_8)

{
  StartServTy *this_00;
  code *pcVar1;
  int errorCode;
  uint *puVar2;
  int iVar3;
  StartServTy *this_01;
  StartServTy *this_02;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar4;
  uint uVar5;
  ccFntTy *pcVar6;
  undefined4 uVar7;
  InternalExceptionFrame local_4c;
  StartServTy *local_8;
  
  if (param_8 != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (errorCode == 0) {
      MMMObjTy::OutRGlProc
                (param_3,param_1,param_2,param_3,(int)param_4,param_5,param_6,param_7 + -0x5f,
                 (undefined4 *)(DAT_0081176c + 0x140));
      local_8 = param_4 + param_6 + -0x15;
      Library::DKW::DDX::FUN_006c6660(param_1,(int)local_8,param_5 + 0x26,7,param_7 - 0xab,3,0);
      Library::DKW::DDX::FUN_006c6470
                (param_1,(int)local_8,param_5 + 0x26,(undefined4 *)0x7,param_7 + -0xab,3,
                 *(undefined4 *)(DAT_0081176c + 0x140));
      uVar7 = 2;
      pcVar6 = *(ccFntTy **)(DAT_0081176c + 0x34);
      uVar5 = 0xffffffff;
      uVar4 = 0xffffffff;
      puVar2 = (uint *)FUN_006b0140(0x2616,HINSTANCE_00807618);
      StartServTy::WrTextDDX
                (this_01,0,(int)(param_4 + 10),param_5 + 0xf8,0xe6,0x19,puVar2,uVar4,uVar5,pcVar6,
                 uVar7);
      Library::DKW::DDX::FUN_006c6470
                (param_1,(int)(param_4 + 10),param_5 + 0xf8,(undefined4 *)0xe6,0x19,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
      Library::DKW::DDX::FUN_006c6470
                (param_1,(int)(param_4 + 0xc),param_5 + 0xfa,(undefined4 *)0xe2,0x15,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
      MMMObjTy::OutRGlProc
                (param_2,param_1,param_2,param_3,(int)param_4,param_5 + -0x5c + param_7,param_6,0x5c
                 ,(undefined4 *)(DAT_0081176c + 0x140));
      local_8 = (StartServTy *)(param_6 + -0x14);
      uVar7 = 2;
      pcVar6 = *(ccFntTy **)(DAT_0081176c + 0x34);
      uVar5 = 0xffffffff;
      uVar4 = 0;
      puVar2 = (uint *)FUN_006b0140(0x2569,HINSTANCE_00807618);
      this_00 = (StartServTy *)(param_5 + -0x57 + param_7);
      StartServTy::WrTextDDX
                (this_00,0,(int)(param_4 + 10),(int)this_00,(int)local_8,0xf,puVar2,uVar4,uVar5,
                 pcVar6,uVar7);
      FUN_006c6850(param_1,(int)(param_4 + 10),param_5 + -0x46 + param_7,(int)local_8,0x16,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar7 = 2;
      pcVar6 = *(ccFntTy **)(DAT_0081176c + 0x34);
      uVar5 = 0xffffffff;
      uVar4 = 0;
      puVar2 = (uint *)FUN_006b0140(0x2550,HINSTANCE_00807618);
      StartServTy::WrTextDDX
                (param_4,0,(int)(param_4 + 10),param_5 + -0x2f + param_7,(int)local_8,0xf,puVar2,
                 uVar4,uVar5,pcVar6,uVar7);
      FUN_006c6850(param_1,(int)(param_4 + 10),param_5 + -0x1e + param_7,100,0x16,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar7 = 2;
      pcVar6 = *(ccFntTy **)(DAT_0081176c + 0x34);
      uVar5 = 0xffffffff;
      uVar4 = 0xffffffff;
      puVar2 = (uint *)FUN_006b0140(0x2566,HINSTANCE_00807618);
      StartServTy::WrTextDDX
                (this_02,0,(int)(param_4 + 0x78),param_5 + 0x155,0xa0,0x19,puVar2,uVar4,uVar5,pcVar6
                 ,uVar7);
      Library::DKW::DDX::FUN_006c6470
                (param_1,(int)(param_4 + 0x78),param_5 + 0x155,(undefined4 *)0xa0,0x19,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
      Library::DKW::DDX::FUN_006c6470
                (param_1,(int)(param_4 + 0x7a),param_5 + 0x157,(undefined4 *)0x9c,0x15,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x8c,0,errorCode,
                               &DAT_007a4ccc,s_FSGSTy__OutTRGlProc_007cbfb0);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x8c);
  }
  return;
}

