
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PrepMissObj */

void __thiscall OptPanelTy::PrepMissObj(OptPanelTy *this)

{
  OptPanelTy *pOVar1;
  code *pcVar2;
  OptPanelTy *this_00;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x3d1,0,iVar3,
                               &DAT_007a4ccc,s_OptPanelTy__PrepMissObj_007c7298);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x3d1);
    return;
  }
  if (*(byte **)(local_8 + 0x2f9) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(local_8 + 0x2f9));
  }
  puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  *(uint **)(this_00 + 0x2f9) = puVar4;
  iVar3 = 0;
  if (0 < *(int *)(DAT_0080c4cb + 8)) {
    if (*(int *)(DAT_0080c4cb + 8) < 1) {
      pcVar5 = (char *)0x0;
      goto LAB_00532af5;
    }
    do {
      pcVar5 = *(char **)(*(int *)(DAT_0080c4cb + 0x14) + iVar3 * 4);
LAB_00532af5:
      thunk_FUN_005411a0(*(int *)(this_00 + 0x2f9),pcVar5,s_____s_007c72b4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_0080c4cb + 8));
  }
  puVar4 = ccFntTy::FormIndentSarr
                     (*(ccFntTy **)(this_00 + 0x17c),*(int *)(this_00 + 0x2f9),
                      (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,200,0,0xffffffff,
                      (char *)0x0,1);
  if (*(byte **)(this_00 + 0x2f9) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(this_00 + 0x2f9));
  }
  *(uint **)(this_00 + 0x2f9) = puVar4;
  if (puVar4 == (uint *)0x0) {
    puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(this_00 + 0x2f9) = puVar4;
  }
  puVar4 = *(uint **)(this_00 + 0x2f9);
  if (puVar4[2] != 0) {
    ccFntTy::SepColorStrInSarr(*(ccFntTy **)(this_00 + 0x17c),puVar4,puVar4);
  }
  if ((this_00[0x1a4] == (OptPanelTy)0xc) && (*(int *)(this_00 + 0x1b5) != 0)) {
    pOVar1 = this_00 + 0x18;
    *(undefined4 *)(this_00 + 0x28) = 0x28;
    *(undefined2 *)(this_00 + 0x2c) = 1;
    *(undefined2 *)(this_00 + 0x2e) = *(undefined2 *)(*(int *)(this_00 + 0x2f9) + 8);
    FUN_006e6080(this_00,2,*(int *)(this_00 + 0x1b5),(undefined4 *)pOVar1);
    *(undefined2 *)(this_00 + 0x2e) = 0;
    *(undefined2 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x28) = 0x22;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1b5),(undefined4 *)pOVar1);
    *(undefined4 *)(this_00 + 0x28) = 0x20;
    *(undefined4 *)(this_00 + 0x2c) = 1;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1b5),(undefined4 *)pOVar1);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

