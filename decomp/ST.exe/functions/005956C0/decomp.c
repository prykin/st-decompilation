
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::OutLadProc
   
   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 005956C0 parameter used as this of FSGSTy::OutTRGlProc @ 00595713 */

void __thiscall
FSGSTy::OutLadProc(FSGSTy *this,int param_1,MMMObjTy *param_2,MMMObjTy *param_3,int param_4,
                  int param_5,FSGSTy *param_6,int param_7)

{
  code *pcVar1;
  int iVar2;
  uint *extraout_EAX;
  uint *extraout_EAX_00;
  uint *extraout_EAX_01;
  uint *extraout_EAX_02;
  uint *extraout_EAX_03;
  uint *extraout_EAX_04;
  uint *extraout_EAX_05;
  uint *extraout_EAX_06;
  uint *extraout_EAX_07;
  uint *extraout_EAX_08;
  uint *extraout_EAX_09;
  int iVar3;
  StartServTy *this_00;
  StartServTy *this_01;
  StartServTy *this_02;
  StartServTy *this_03;
  StartServTy *this_04;
  StartServTy *this_05;
  StartServTy *this_06;
  StartServTy *this_07;
  StartServTy *this_08;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar4;
  uint uVar5;
  ccFntTy *pcVar6;
  undefined4 uVar7;
  InternalExceptionFrame local_50;
  StartServTy *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    OutTRGlProc(param_6,param_1,param_2,param_3,param_4,param_5,(int)param_6,param_7,0x25a6);
    iVar2 = param_5 + 0x55;
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4,iVar2,param_4 + -1 + (int)param_6,iVar2,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4,param_5 + 0x78,param_4 + -1 + (int)param_6,param_5 + 0x78,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    uVar7 = 2;
    pcVar6 = PTR_0081176c->field_0034;
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
    LoadResourceString(0x25a7,HINSTANCE_00807618);
    StartServTy::WrTextDDX(this_00,0,param_4,iVar2,0x2d,0x23,extraout_EAX,uVar4,uVar5,pcVar6,uVar7);
    local_8 = param_5 + -1 + param_7;
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x2d,param_5 + 0x78,param_4 + 0x2d,local_8,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    uVar7 = 2;
    pcVar6 = PTR_0081176c->field_0034;
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
    LoadResourceString(0x25a8,HINSTANCE_00807618);
    StartServTy::WrTextDDX
              (this_01,0,param_4 + 0x2d,iVar2,0xeb,0x23,extraout_EAX_00,uVar4,uVar5,pcVar6,uVar7);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x118,param_5 + 0x78,param_4 + 0x118,local_8,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    uVar7 = 2;
    pcVar6 = PTR_0081176c->field_0034;
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
    LoadResourceString(0x25a9,HINSTANCE_00807618);
    StartServTy::WrTextDDX
              (this_02,0,param_4 + 0x118,iVar2,0x46,0x23,extraout_EAX_01,uVar4,uVar5,pcVar6,uVar7);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x15e,param_5 + 0x78,param_4 + 0x15e,local_8,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    uVar7 = 2;
    pcVar6 = PTR_0081176c->field_0034;
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
    LoadResourceString(0x25aa,HINSTANCE_00807618);
    StartServTy::WrTextDDX
              (this_03,0,param_4 + 0x15e,iVar2,0x91,0x23,extraout_EAX_02,uVar4,uVar5,pcVar6,uVar7);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x1ef,param_5 + 0x78,param_4 + 0x1ef,local_8,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    uVar7 = 2;
    pcVar6 = PTR_0081176c->field_0034;
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
    LoadResourceString(0x25ab,HINSTANCE_00807618);
    StartServTy::WrTextDDX
              (this_04,0,param_4 + 0x1ef,iVar2,0x46,0x23,extraout_EAX_03,uVar4,uVar5,pcVar6,uVar7);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x235,param_5 + 0x78,param_4 + 0x235,local_8,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    uVar7 = 2;
    pcVar6 = PTR_0081176c->field_0034;
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
    LoadResourceString(0x25ac,HINSTANCE_00807618);
    StartServTy::WrTextDDX
              (this_05,0,param_4 + 0x235,iVar2,0x32,0x23,extraout_EAX_04,uVar4,uVar5,pcVar6,uVar7);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x267,param_5 + 0x78,param_4 + 0x267,local_8,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    uVar7 = 2;
    pcVar6 = PTR_0081176c->field_0034;
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
    LoadResourceString(0x25ad,HINSTANCE_00807618);
    StartServTy::WrTextDDX
              (this_06,0,param_4 + 0x267,iVar2,(int)&param_6[-1].field_0x1e5c,0x23,extraout_EAX_05,
               uVar4,uVar5,pcVar6,uVar7);
    pcVar6 = PTR_0081176c->field_0034;
    local_c = (StartServTy *)(param_5 + 0x19);
    uVar7 = 2;
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
    LoadResourceString(0x25ae,HINSTANCE_00807618);
    StartServTy::WrTextDDX
              (this_07,0,param_4 + 10,(int)local_c,0x96,0x14,extraout_EAX_06,uVar4,uVar5,pcVar6,
               uVar7);
    iVar2 = param_5 + 0x32;
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 10,iVar2,(undefined4 *)0x96,0x19,4,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    local_8 = param_5 + 0x34;
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0xc,local_8,(undefined4 *)0x92,0x15,4,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    uVar7 = 2;
    pcVar6 = PTR_0081176c->field_0034;
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
    LoadResourceString(0x25af,HINSTANCE_00807618);
    StartServTy::WrTextDDX
              (local_c,0,param_4 + 0xa5,(int)local_c,0x96,0x14,extraout_EAX_07,uVar4,uVar5,pcVar6,
               uVar7);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0xa5,iVar2,(undefined4 *)0x96,0x19,4,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0xa7,local_8,(undefined4 *)0x92,0x15,4,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x14a,iVar2,(undefined4 *)0x19,0x19,4,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x14c,local_8,(undefined4 *)0x15,0x15,4,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    FUN_006c6850(param_1,param_4 + 0x168,iVar2,100,0x19,*(undefined4 *)&PTR_0081176c->field_0x140);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x1d1,iVar2,(undefined4 *)0x19,0x19,4,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x1d3,local_8,(undefined4 *)0x15,0x15,4,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    uVar7 = 2;
    pcVar6 = PTR_0081176c->field_0034;
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
    LoadResourceString(0x25b0,HINSTANCE_00807618);
    StartServTy::WrTextDDX
              (local_c,0,param_4 + 0x1f9,(int)local_c,0x96,0x14,extraout_EAX_08,uVar4,uVar5,pcVar6,
               uVar7);
    FUN_006c6850(param_1,param_4 + 0x1f9,iVar2,0x96,0x19,*(undefined4 *)&PTR_0081176c->field_0x140);
    uVar7 = 2;
    pcVar6 = PTR_0081176c->field_0034;
    uVar5 = 0xffffffff;
    uVar4 = 0xffffffff;
    LoadResourceString(0x25b1,HINSTANCE_00807618);
    StartServTy::WrTextDDX
              (this_08,0,param_4 + 0x294,iVar2,0x41,0x19,extraout_EAX_09,uVar4,uVar5,pcVar6,uVar7);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x294,iVar2,(undefined4 *)0x41,0x19,4,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x296,local_8,(undefined4 *)0x3d,0x15,4,
               *(undefined4 *)&PTR_0081176c->field_0x140);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xeb,0,iVar2,&DAT_007a4ccc,
                             s_FSGSTy__OutLadProc_007cbfe0);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xeb);
  return;
}

