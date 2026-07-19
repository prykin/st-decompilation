
/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::DoneCombo */

void __thiscall ComboTy::DoneCombo(ComboTy *this)

{
  ComboTy *pCVar1;
  code *pcVar2;
  ComboTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ComboTy *pCVar5;
  InternalExceptionFrame local_4c;
  ComboTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 == 0) {
    if (*(uint *)(local_8 + 0x10c) != 0) {
      FUN_006e56b0(*(void **)(local_8 + 0xc),*(uint *)(local_8 + 0x10c));
    }
    pCVar1 = this_00 + 0x18;
    *(undefined4 *)(this_00 + 0x10c) = 0;
    pCVar5 = pCVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pCVar5 = 0;
      pCVar5 = pCVar5 + 4;
    }
    *(undefined4 *)(this_00 + 0x28) = 0x11;
    *(ComboTy **)(this_00 + 0x2c) = this_00 + 0x38;
    FUN_006e6000(this_00,3,1,(undefined4 *)pCVar1);
    pCVar5 = pCVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pCVar5 = 0;
      pCVar5 = pCVar5 + 4;
    }
    *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(this_00 + 8);
    *(undefined4 *)(this_00 + 0x28) = 0x14;
    FUN_006e6000(this_00,3,1,(undefined4 *)pCVar1);
    pCVar5 = pCVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pCVar5 = 0;
      pCVar5 = pCVar5 + 4;
    }
    *(undefined4 *)(this_00 + 0x28) = 0x19;
    FUN_006e6000(this_00,3,1,(undefined4 *)pCVar1);
    pCVar5 = pCVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pCVar5 = 0;
      pCVar5 = pCVar5 + 4;
    }
    *(undefined4 *)(this_00 + 0x28) = 0x1b;
    FUN_006e6000(this_00,3,1,(undefined4 *)pCVar1);
    if (*(uint *)(this_00 + 0x108) != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(this_00 + 0x108));
    }
    *(undefined4 *)(this_00 + 0x108) = 0xffffffff;
    if (*(int *)(this_00 + 0xfc) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0xfc));
    }
    if (*(int *)(this_00 + 0x100) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0x100));
    }
    if (*(int *)(this_00 + 0x104) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0x104));
    }
    if (*(int *)(this_00 + 0x98) != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)(this_00 + 0x88));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_combo_cpp_007cbeec,0x7f,0,iVar3,&DAT_007a4ccc,
                             s_ComboTy__DoneCombo_007cbf40);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_combo_cpp_007cbeec,0x7f);
  return;
}

