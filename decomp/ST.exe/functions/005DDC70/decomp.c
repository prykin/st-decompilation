
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::CreateBinDesc */

void __thiscall StartSystemTy::CreateBinDesc(StartSystemTy *this)

{
  undefined4 uVar1;
  code *pcVar2;
  StartSystemTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  void *unaff_EDI;
  int *piVar6;
  undefined4 *puVar7;
  int local_8c4 [6];
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_68c;
  undefined4 local_688 [4];
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_620;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;
  
  piVar6 = local_8c4;
  local_8 = this;
  for (iVar4 = 0x21e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 == 0) {
    local_8c4[0] = 0;
    local_8c4[1] = 2;
    iVar4 = local_8->field_0034;
    local_8a4 = 0xd;
    local_8a0 = 0xb9;
    local_8c4[2] = 1;
    local_8c4[3] = 0;
    local_8c4[4] = 0xd5;
    if (*(int *)(iVar4 + 0xa0) != 0) {
      FUN_00710790(iVar4);
    }
    local_8c4[5] = *(int *)(iVar4 + 0x8a);
    local_8a8 = (undefined4)(0x119 / (longlong)local_8c4[5]);
    local_808[2] = *(undefined4 *)&this_00->field_0x43a;
    local_808[3] = *(undefined4 *)&this_00->field_0x43e;
    local_7f8 = *(undefined4 *)&this_00->field_0x442;
    local_888 = 0;
    local_810 = 0;
    local_80c = 2;
    local_808[0] = 0;
    local_808[1] = 2;
    local_7a4 = 0;
    local_68c = 2;
    local_7f4 = *(undefined4 *)&this_00->field_0x446;
    uVar1 = *(undefined4 *)&this_00->field_0x3ad;
    local_8ac = 1;
    local_884 = 0x6332;
    local_814 = 4;
    local_6f8 = 500;
    local_6f4 = 0x32;
    local_7a0 = 0x6334;
    local_88c = *(undefined4 *)&this_00->field_0x14;
    local_7a8 = local_88c;
    puVar5 = local_808;
    puVar7 = local_688;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    local_688[2] = *(undefined4 *)&this_00->field_0x3a9;
    local_674 = *(undefined4 *)&this_00->field_0x3b5;
    local_678 = *(undefined4 *)&this_00->field_0x3b1;
    local_4fc = *(undefined4 *)&this_00->field_0x4cb;
    local_4f8 = *(undefined4 *)&this_00->field_0x4cf;
    local_4f4 = *(undefined4 *)&this_00->field_0x4d3;
    local_500 = 0;
    local_4b4 = 0;
    local_620 = 0x6333;
    local_50c = 3;
    local_508 = 1;
    local_4f0 = 0xdb;
    local_4ec = 0xe;
    local_4b0 = 0x6335;
    local_688[3] = uVar1;
    local_4b8 = local_88c;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,8,&this_00->field_0389,(int *)0x0,local_8c4,0);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_00->field_0540);
    if (*(uint *)&this_00->field_0x391 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x3d5,*(uint *)&this_00->field_0x391,0xfffffffe,
                 *(uint *)&this_00->field_0x3a9,*(uint *)&this_00->field_0x3ad);
    }
    if (*(uint *)&this_00->field_0x422 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x466,*(uint *)&this_00->field_0x422,0xfffffffe,
                 *(uint *)&this_00->field_0x43a,*(uint *)&this_00->field_0x43e);
    }
    if (*(uint *)&this_00->field_0x4b3 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x4f7,*(uint *)&this_00->field_0x4b3,0xfffffffe,
                 *(uint *)&this_00->field_0x4cb,*(uint *)&this_00->field_0x4cf);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x3b8,0,iVar4,&DAT_007a4ccc,
                             s_StartSystemTy__CreateBinDesc_007cd8bc);
  if (iVar3 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_startsys_cpp_007cd718,0x3b8);
  return;
}

