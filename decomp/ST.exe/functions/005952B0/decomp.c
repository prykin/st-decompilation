
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::OutSGlProc
   
   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005952B0 parameter used as this of MMMObjTy::OutRGlProc @ 00595314 */

void __thiscall
FSGSTy::OutSGlProc(FSGSTy *this,int param_1,MMMObjTy *param_2,undefined4 param_3,int param_4,
                  int param_5,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  StartServTy *this_00;
  StartServTy *this_01;
  StartServTy *this_02;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  uint uVar6;
  ccFntTy *pcVar7;
  undefined4 uVar8;
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 *local_8;
  
  if (param_8 != 0) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      MMMObjTy::OutRGlProc
                (param_2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                 (undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      iVar2 = param_4 + 10;
      pcVar7 = *(ccFntTy **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x256f,HINSTANCE_00807618);
      StartServTy::WrTextDDX
                (this_00,0,iVar2,param_5 + 10,param_6 + -0x14,0x14,puVar3,uVar5,uVar6,pcVar7,uVar8);
      FUN_006c6850(param_1,iVar2,param_5 + 0x1e,param_6 + -0x14,0x8e,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      pcVar7 = *(ccFntTy **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x256b,HINSTANCE_00807618);
      StartServTy::WrTextDDX
                (this_01,0,iVar2,param_5 + 0xb4,param_6 + -0x14,0x14,puVar3,uVar5,uVar6,pcVar7,uVar8
                );
      FUN_006c6850(param_1,iVar2,param_5 + 200,param_6 + -0x14,0x19,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      pcVar7 = *(ccFntTy **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x256c,HINSTANCE_00807618);
      StartServTy::WrTextDDX
                (this_02,0,iVar2,param_5 + 0xe1,param_6 + -0x14,0x14,puVar3,uVar5,uVar6,pcVar7,uVar8
                );
      FUN_006c6850(param_1,iVar2,param_5 + 0xf5,param_6 + -0x14,0x19,
                   *(undefined4 *)(DAT_0081176c + 0x140));
      uVar8 = 2;
      local_c = param_6 + -0x1e;
      local_8 = (undefined4 *)(local_c / 2);
      pcVar7 = *(ccFntTy **)(DAT_0081176c + 0x34);
      uVar6 = 0xffffffff;
      uVar5 = 0;
      puVar3 = (uint *)FUN_006b0140(0x256d,HINSTANCE_00807618);
      StartServTy::WrTextDDX
                ((StartServTy *)(param_5 + 0x11a),0,iVar2,param_5 + 0x11a,(int)(local_8 + -10),0x14,
                 puVar3,uVar5,uVar6,pcVar7,uVar8);
      Library::DKW::DDX::FUN_006c6470
                (param_1,(int)local_8 + param_4 + -0x14,param_5 + 0x11c,local_8 + 10,0x19,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
      Library::DKW::DDX::FUN_006c6470
                (param_1,(int)local_8 + param_4 + -0x12,param_5 + 0x11e,local_8 + 9,0x15,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
      Library::DKW::DDX::FUN_006c6470
                (param_1,iVar2,param_5 + 0x138,(undefined4 *)(param_6 + -0x14),0x19,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
      Library::DKW::DDX::FUN_006c6470
                (param_1,param_4 + 0xc,param_5 + 0x13a,(undefined4 *)(param_6 + -0x18),0x15,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
      iVar2 = param_4 + ((int)(local_c + (local_c >> 0x1f & 3U)) >> 2);
      Library::DKW::DDX::FUN_006c6470
                (param_1,iVar2 + 0xf,param_5 + 0x157,local_8,0x19,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
      Library::DKW::DDX::FUN_006c6470
                (param_1,iVar2 + 0x11,param_5 + 0x159,local_8 + -1,0x15,4,
                 *(undefined4 *)(DAT_0081176c + 0x140));
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xb3,0,iVar2,&DAT_007a4ccc,
                               s_FSGSTy__OutSGlProc_007cbfc8);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xb3);
  }
  return;
}

