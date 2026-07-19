
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::OutLadProc */

void __thiscall
FSGSTy::OutLadProc(FSGSTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  int param_5,int param_6,int param_7)

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
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  InternalExceptionFrame local_50;
  StartServTy *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    OutTRGlProc((FSGSTy *)param_6,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0x25a6);
    iVar2 = param_5 + 0x55;
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4,iVar2,param_4 + -1 + param_6,iVar2,
               *(undefined4 *)(DAT_0081176c + 0x140));
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4,param_5 + 0x78,param_4 + -1 + param_6,param_5 + 0x78,
               *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25a7,DAT_00807618);
    StartServTy::WrTextDDX(this_00,0,param_4,iVar2,0x2d,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8);
    local_8 = param_5 + -1 + param_7;
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x2d,param_5 + 0x78,param_4 + 0x2d,local_8,
               *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25a8,DAT_00807618);
    StartServTy::WrTextDDX(this_01,0,param_4 + 0x2d,iVar2,0xeb,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8)
    ;
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x118,param_5 + 0x78,param_4 + 0x118,local_8,
               *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25a9,DAT_00807618);
    StartServTy::WrTextDDX
              (this_02,0,param_4 + 0x118,iVar2,0x46,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x15e,param_5 + 0x78,param_4 + 0x15e,local_8,
               *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25aa,DAT_00807618);
    StartServTy::WrTextDDX
              (this_03,0,param_4 + 0x15e,iVar2,0x91,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x1ef,param_5 + 0x78,param_4 + 0x1ef,local_8,
               *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25ab,DAT_00807618);
    StartServTy::WrTextDDX
              (this_04,0,param_4 + 0x1ef,iVar2,0x46,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x235,param_5 + 0x78,param_4 + 0x235,local_8,
               *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25ac,DAT_00807618);
    StartServTy::WrTextDDX
              (this_05,0,param_4 + 0x235,iVar2,0x32,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8);
    Library::DKW::DDX::FUN_006c53b0
              (param_1,param_4 + 0x267,param_5 + 0x78,param_4 + 0x267,local_8,
               *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25ad,DAT_00807618);
    StartServTy::WrTextDDX
              (this_06,0,param_4 + 0x267,iVar2,param_6 + -0x267,0x23,puVar3,uVar5,uVar6,pvVar7,uVar8
              );
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    local_c = (StartServTy *)(param_5 + 0x19);
    uVar8 = 2;
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25ae,DAT_00807618);
    StartServTy::WrTextDDX
              (this_07,0,param_4 + 10,(int)local_c,0x96,0x14,puVar3,uVar5,uVar6,pvVar7,uVar8);
    iVar2 = param_5 + 0x32;
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 10,iVar2,(undefined4 *)0x96,0x19,4,
               *(undefined4 *)(DAT_0081176c + 0x140));
    local_8 = param_5 + 0x34;
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0xc,local_8,(undefined4 *)0x92,0x15,4,
               *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25af,DAT_00807618);
    StartServTy::WrTextDDX
              (local_c,0,param_4 + 0xa5,(int)local_c,0x96,0x14,puVar3,uVar5,uVar6,pvVar7,uVar8);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0xa5,iVar2,(undefined4 *)0x96,0x19,4,
               *(undefined4 *)(DAT_0081176c + 0x140));
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0xa7,local_8,(undefined4 *)0x92,0x15,4,
               *(undefined4 *)(DAT_0081176c + 0x140));
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x14a,iVar2,(undefined4 *)0x19,0x19,4,
               *(undefined4 *)(DAT_0081176c + 0x140));
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x14c,local_8,(undefined4 *)0x15,0x15,4,
               *(undefined4 *)(DAT_0081176c + 0x140));
    FUN_006c6850(param_1,param_4 + 0x168,iVar2,100,0x19,*(undefined4 *)(DAT_0081176c + 0x140));
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x1d1,iVar2,(undefined4 *)0x19,0x19,4,
               *(undefined4 *)(DAT_0081176c + 0x140));
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x1d3,local_8,(undefined4 *)0x15,0x15,4,
               *(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25b0,DAT_00807618);
    StartServTy::WrTextDDX
              (local_c,0,param_4 + 0x1f9,(int)local_c,0x96,0x14,puVar3,uVar5,uVar6,pvVar7,uVar8);
    FUN_006c6850(param_1,param_4 + 0x1f9,iVar2,0x96,0x19,*(undefined4 *)(DAT_0081176c + 0x140));
    uVar8 = 2;
    pvVar7 = *(void **)(DAT_0081176c + 0x34);
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    puVar3 = (uint *)FUN_006b0140(0x25b1,DAT_00807618);
    StartServTy::WrTextDDX
              (this_08,0,param_4 + 0x294,iVar2,0x41,0x19,puVar3,uVar5,uVar6,pvVar7,uVar8);
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x294,iVar2,(undefined4 *)0x41,0x19,4,
               *(undefined4 *)(DAT_0081176c + 0x140));
    Library::DKW::DDX::FUN_006c6470
              (param_1,param_4 + 0x296,local_8,(undefined4 *)0x3d,0x15,4,
               *(undefined4 *)(DAT_0081176c + 0x140));
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xeb,0,iVar2,&DAT_007a4ccc,
                             s_FSGSTy__OutLadProc_007cbfe0);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xeb);
  return;
}

