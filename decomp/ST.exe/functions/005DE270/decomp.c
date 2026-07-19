
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::CreateChatView */

void __thiscall StartSystemTy::CreateChatView(StartSystemTy *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  StartSystemTy *this_00;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 local_8c4 [5];
  int local_8b0;
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
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;
  
  puVar6 = local_8c4;
  local_8 = this;
  for (iVar5 = 0x21e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar5 == 0) {
    local_8c4[0] = 0;
    local_8c4[1] = 2;
    iVar5 = local_8->field_0034;
    local_8a4 = 0xcd;
    local_8a0 = 499;
    local_8c4[2] = 1;
    local_8c4[3] = 0;
    local_8c4[4] = *(undefined4 *)(local_8->field_067E + 4);
    if (*(int *)(iVar5 + 0xa0) != 0) {
      FUN_00710790(iVar5);
    }
    local_8b0 = *(int *)(iVar5 + 0x8a);
    local_8a8 = (undefined4)(0x49 / (longlong)local_8b0);
    local_808[2] = *(undefined4 *)&this_00->field_0x609;
    local_808[3] = *(undefined4 *)&this_00->field_0x60d;
    local_7f8 = *(undefined4 *)&this_00->field_0x611;
    local_888 = 0;
    local_810 = 0;
    local_80c = 2;
    local_808[0] = 0;
    local_808[1] = 2;
    local_7a4 = 0;
    local_68c = 2;
    local_8ac = 1;
    local_884 = 0x633f;
    local_814 = 4;
    local_7f4 = *(undefined4 *)&this_00->field_0x615;
    uVar1 = *(undefined4 *)&this_00->field_0x580;
    local_6f8 = 500;
    local_6f4 = 0x32;
    local_7a0 = 0x6341;
    local_88c = *(undefined4 *)&this_00->field_0x14;
    local_7a8 = local_88c;
    uVar2 = *(undefined4 *)&this_00->field_0x578;
    puVar6 = local_808;
    puVar7 = local_688;
    for (iVar5 = 0x5f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_688[3] = *(undefined4 *)&this_00->field_0x57c;
    local_674 = *(undefined4 *)&this_00->field_0x584;
    local_620 = 0x6340;
    local_688[2] = uVar2;
    local_678 = uVar1;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,8,&this_00->field_0550,(int *)0x0,local_8c4,0);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_00->field_0558);
    if (*(uint *)&this_00->field_0x560 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x5a4,*(uint *)&this_00->field_0x560,0xfffffffe,
                 *(uint *)&this_00->field_0x578,*(uint *)&this_00->field_0x57c);
    }
    if (*(uint *)&this_00->field_0x5f1 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x635,*(uint *)&this_00->field_0x5f1,0xfffffffe,
                 *(uint *)&this_00->field_0x609,*(uint *)&this_00->field_0x60d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x3f9,0,iVar5,&DAT_007a4ccc,
                             s_StartSystemTy__CreateChatView_007cd904);
  if (iVar4 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Start_startsys_cpp_007cd718,0x3f9);
  return;
}

