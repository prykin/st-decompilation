
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::CreateChatView */

void __thiscall StartSystemTy::CreateChatView(StartSystemTy *this)

{
  code *pcVar1;
  StartSystemTy *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  void *unaff_EDI;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 local_8c4 [5];
  int local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  int local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  int local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  int local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_68c;
  int local_688 [4];
  int local_678;
  int local_674;
  undefined4 local_620;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;
  
  puVar7 = local_8c4;
  local_8 = this;
  for (iVar4 = 0x21e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar4 == 0) {
    local_8c4[0] = 0;
    local_8c4[1] = 2;
    iVar4 = *(int *)(local_8 + 0x34);
    local_8a4 = 0xcd;
    local_8a0 = 499;
    local_8c4[2] = 1;
    local_8c4[3] = 0;
    local_8c4[4] = *(undefined4 *)(*(int *)(local_8 + 0x67e) + 4);
    if (*(int *)(iVar4 + 0xa0) != 0) {
      FUN_00710790(iVar4);
    }
    local_8b0 = *(int *)(iVar4 + 0x8a);
    local_8a8 = (undefined4)(0x49 / (longlong)local_8b0);
    local_808[2] = *(undefined4 *)(pSVar2 + 0x609);
    local_808[3] = *(undefined4 *)(pSVar2 + 0x60d);
    local_7f8 = *(undefined4 *)(pSVar2 + 0x611);
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
    local_7f4 = *(undefined4 *)(pSVar2 + 0x615);
    iVar4 = *(int *)(pSVar2 + 0x580);
    local_6f8 = 500;
    local_6f4 = 0x32;
    local_7a0 = 0x6341;
    local_88c = *(int *)(pSVar2 + 0x14);
    local_7a8 = local_88c;
    iVar3 = *(int *)(pSVar2 + 0x578);
    piVar6 = local_808;
    piVar8 = local_688;
    for (iVar5 = 0x5f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    local_688[3] = *(int *)(pSVar2 + 0x57c);
    local_674 = *(int *)(pSVar2 + 0x584);
    local_620 = 0x6340;
    local_688[2] = iVar3;
    local_678 = iVar4;
    (**(code **)(*(int *)pSVar2 + 8))(8,pSVar2 + 0x550,0,local_8c4,0);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pSVar2 + 0x558));
    if (*(uint *)(pSVar2 + 0x560) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(pSVar2 + 0x5a4),*(uint *)(pSVar2 + 0x560),0xfffffffe,
                 *(uint *)(pSVar2 + 0x578),*(uint *)(pSVar2 + 0x57c));
    }
    if (*(uint *)(pSVar2 + 0x5f1) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(pSVar2 + 0x635),*(uint *)(pSVar2 + 0x5f1),0xfffffffe,
                 *(uint *)(pSVar2 + 0x609),*(uint *)(pSVar2 + 0x60d));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x3f9,0,iVar4,&DAT_007a4ccc,
                             s_StartSystemTy__CreateChatView_007cd904);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_startsys_cpp_007cd718,0x3f9);
  return;
}

