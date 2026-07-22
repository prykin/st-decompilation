#include "../../pseudocode_runtime.h"


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
  uint *puVar3;
  int iVar4;
  StartServTy *this_00;
  StartServTy *this_01;
  StartServTy *this_02;
  StartServTy *this_03;
  StartServTy *this_04;
  StartServTy *this_05;
  StartServTy *this_06;
  StartServTy *this_07;
  StartServTy *this_08;
  uint uVar5;
  uint uVar6;
  ccFntTy *pcVar7;
  undefined4 uVar8;
  InternalExceptionFrame local_50;
  StartServTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    OutTRGlProc(param_6,param_1,param_2,param_3,param_4,param_5,(int)param_6,param_7,0x25a6);
    iVar2 = param_5 + 0x55;
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4,iVar2,param_4 + -1 + (int)param_6,iVar2,
               g_startSystem_0081176C->field_0140);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4,param_5 + 0x78,param_4 + -1 + (int)param_6,param_5 + 0x78,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)LoadResourceString(0x25a7,g_module_00807618);
    StartServTy::WrTextDDX(this_00,0,param_4,iVar2,0x2d,0x23,puVar3,uVar5,uVar6,pcVar7,uVar8);
    local_8 = param_5 + -1 + param_7;
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x2d,param_5 + 0x78,param_4 + 0x2d,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)LoadResourceString(0x25a8,g_module_00807618);
    StartServTy::WrTextDDX(this_01,0,param_4 + 0x2d,iVar2,0xeb,0x23,puVar3,uVar5,uVar6,pcVar7,uVar8)
    ;
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x118,param_5 + 0x78,param_4 + 0x118,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)LoadResourceString(0x25a9,g_module_00807618);
    StartServTy::WrTextDDX
              (this_02,0,param_4 + 0x118,iVar2,0x46,0x23,puVar3,uVar5,uVar6,pcVar7,uVar8);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x15e,param_5 + 0x78,param_4 + 0x15e,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)LoadResourceString(0x25aa,g_module_00807618);
    StartServTy::WrTextDDX
              (this_03,0,param_4 + 0x15e,iVar2,0x91,0x23,puVar3,uVar5,uVar6,pcVar7,uVar8);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x1ef,param_5 + 0x78,param_4 + 0x1ef,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)LoadResourceString(0x25ab,g_module_00807618);
    StartServTy::WrTextDDX
              (this_04,0,param_4 + 0x1ef,iVar2,0x46,0x23,puVar3,uVar5,uVar6,pcVar7,uVar8);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x235,param_5 + 0x78,param_4 + 0x235,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)LoadResourceString(0x25ac,g_module_00807618);
    StartServTy::WrTextDDX
              (this_05,0,param_4 + 0x235,iVar2,0x32,0x23,puVar3,uVar5,uVar6,pcVar7,uVar8);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x267,param_5 + 0x78,param_4 + 0x267,local_8,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)LoadResourceString(0x25ad,g_module_00807618);
    StartServTy::WrTextDDX
              (this_06,0,param_4 + 0x267,iVar2,(int)&param_6[-1].field_0x1e5c,0x23,puVar3,uVar5,
               uVar6,pcVar7,uVar8);
    pcVar7 = g_startSystem_0081176C->field_0034;
    local_c = (StartServTy *)(param_5 + 0x19);
    uVar8 = 2;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)LoadResourceString(0x25ae,g_module_00807618);
    StartServTy::WrTextDDX
              (this_07,0,param_4 + 10,(int)local_c,0x96,0x14,puVar3,uVar5,uVar6,pcVar7,uVar8);
    iVar2 = param_5 + 0x32;
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 10,iVar2,(undefined4 *)0x96,0x19,4,
               g_startSystem_0081176C->field_0140);
    local_8 = param_5 + 0x34;
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0xc,local_8,(undefined4 *)0x92,0x15,4,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)LoadResourceString(0x25af,g_module_00807618);
    StartServTy::WrTextDDX
              (local_c,0,param_4 + 0xa5,(int)local_c,0x96,0x14,puVar3,uVar5,uVar6,pcVar7,uVar8);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0xa5,iVar2,(undefined4 *)0x96,0x19,4,
               g_startSystem_0081176C->field_0140);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0xa7,local_8,(undefined4 *)0x92,0x15,4,
               g_startSystem_0081176C->field_0140);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x14a,iVar2,(undefined4 *)0x19,0x19,4,
               g_startSystem_0081176C->field_0140);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x14c,local_8,(undefined4 *)0x15,0x15,4,
               g_startSystem_0081176C->field_0140);
    FUN_006c6850(param_1,param_4 + 0x168,iVar2,100,0x19,g_startSystem_0081176C->field_0140);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x1d1,iVar2,(undefined4 *)0x19,0x19,4,
               g_startSystem_0081176C->field_0140);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x1d3,local_8,(undefined4 *)0x15,0x15,4,
               g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)LoadResourceString(0x25b0,g_module_00807618);
    StartServTy::WrTextDDX
              (local_c,0,param_4 + 0x1f9,(int)local_c,0x96,0x14,puVar3,uVar5,uVar6,pcVar7,uVar8);
    FUN_006c6850(param_1,param_4 + 0x1f9,iVar2,0x96,0x19,g_startSystem_0081176C->field_0140);
    uVar8 = 2;
    pcVar7 = g_startSystem_0081176C->field_0034;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)LoadResourceString(0x25b1,g_module_00807618);
    StartServTy::WrTextDDX
              (this_08,0,param_4 + 0x294,iVar2,0x41,0x19,puVar3,uVar5,uVar6,pcVar7,uVar8);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x294,iVar2,(undefined4 *)0x41,0x19,4,
               g_startSystem_0081176C->field_0140);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x296,local_8,(undefined4 *)0x3d,0x15,4,
               g_startSystem_0081176C->field_0140);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xeb,0,iVar2,"%s",
                             "FSGSTy::OutLadProc");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xeb);
  return;
}

