
void __thiscall Visible::PrepareAfterSave(Visible *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  uint *puVar7;
  Visible *pVVar8;
  void *unaff_EDI;
  int iVar9;
  InternalExceptionFrame IStack_58;
  Visible *pVStack_14;
  int iStack_10;
  Visible *pVStack_c;
  uint *puStack_8;
  
  IStack_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_58;
  pVStack_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pVVar8 = pVStack_14;
  if (iVar2 == 0) {
    *(undefined4 *)(pVStack_14 + 0x20) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(pVStack_14 + 0x24) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(pVStack_14 + 0x28) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(pVStack_14 + 0x2c) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(pVStack_14 + 0x30) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(pVStack_14 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(pVStack_14 + 0x1c) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(pVStack_14 + 0x114) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(pVStack_14 + 0xf8) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(pVStack_14 + 0xfc) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(pVStack_14 + 0x100) = *(undefined4 *)(param_1 + 0x4c);
    if (*(int *)(pVStack_14 + 0x114) != 0) {
      pVStack_c = pVStack_14 + 0x3c;
      uVar3 = *(int *)(pVStack_14 + 0x2c) * *(int *)(pVStack_14 + 0x28);
      iStack_10 = 4;
      puStack_8 = (uint *)(param_1 + 0x80);
      do {
        puVar4 = Library::DKW::LIB::FUN_006aac10(uVar3);
        *(uint **)pVStack_c = puVar4;
        iVar2 = *(int *)(pVVar8 + 0x2c);
        iVar9 = *(int *)(pVVar8 + 0x28);
        pVStack_c = pVStack_c + 4;
        puVar7 = puStack_8;
        for (uVar3 = (uint)(iVar2 * iVar9) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar4 = puVar4 + 1;
        }
        for (uVar3 = iVar2 * iVar9 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(char *)puVar4 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar4 = (uint *)((int)puVar4 + 1);
        }
        uVar3 = *(int *)(pVVar8 + 0x2c) * *(int *)(pVVar8 + 0x28);
        puVar7 = (uint *)((int)puStack_8 + uVar3);
        iStack_10 = iStack_10 + -1;
        puStack_8 = puVar7;
      } while (iStack_10 != 0);
      puVar5 = Library::DKW::LIB::FUN_006aac10
                         (*(int *)(pVVar8 + 0x20) * *(int *)(pVVar8 + 0x24) * 2);
      *(undefined4 **)(pVVar8 + 0x38) = puVar5;
      puVar5 = Library::DKW::LIB::FUN_006aac10(*(int *)(pVVar8 + 0x30) * *(int *)(pVVar8 + 0x34));
      *(undefined4 **)(pVVar8 + 0x4c) = puVar5;
      puVar5 = Library::DKW::LIB::FUN_006aac10
                         (*(int *)(pVVar8 + 0x30) * *(int *)(pVVar8 + 0x34) * 2);
      *(undefined4 **)(pVVar8 + 0x50) = puVar5;
      uVar6 = FUN_006b0060((uint *)0x0,puVar7);
      *(undefined4 *)(pVVar8 + 0xf4) = uVar6;
      uVar6 = FUN_006b0060((uint *)0x0,(uint *)((int)puVar7 + *(int *)(param_1 + 0x38)));
      *(undefined4 *)(pVVar8 + 0x110) = uVar6;
    }
    g_currentExceptionFrame = IStack_58.previous;
    return;
  }
  g_currentExceptionFrame = IStack_58.previous;
  iVar9 = 4;
  pVVar8 = pVStack_14 + 0x3c;
  do {
    if (*(int *)pVVar8 != 0) {
      FUN_006ab060((undefined4 *)pVVar8);
    }
    pVVar8 = pVVar8 + 4;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar9 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0x132,0,iVar2,&DAT_007a4ccc,
                             s_Visible__PrepareAfterSave_error_007c9358);
  if (iVar9 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_grig_visible_cpp_007c92cc,0x133);
  return;
}

