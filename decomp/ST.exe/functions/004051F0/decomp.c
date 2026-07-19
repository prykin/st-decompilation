
void thunk_FUN_005585f0(int param_1)

{
  code *pcVar1;
  int errorCode;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  uint *puVar7;
  int *piVar8;
  void *unaff_EDI;
  int iVar9;
  InternalExceptionFrame IStack_58;
  int iStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  uint *puStack_8;
  
  IStack_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_58;
  errorCode = __setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    *(undefined4 *)(iStack_14 + 0x20) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iStack_14 + 0x24) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iStack_14 + 0x28) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iStack_14 + 0x2c) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(iStack_14 + 0x30) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iStack_14 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iStack_14 + 0x1c) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iStack_14 + 0x114) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iStack_14 + 0xf8) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iStack_14 + 0xfc) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iStack_14 + 0x100) = *(undefined4 *)(param_1 + 0x4c);
    if (*(int *)(iStack_14 + 0x114) != 0) {
      puStack_c = (undefined4 *)(iStack_14 + 0x3c);
      uVar2 = *(int *)(iStack_14 + 0x2c) * *(int *)(iStack_14 + 0x28);
      iStack_10 = 4;
      puStack_8 = (uint *)(param_1 + 0x80);
      do {
        puVar3 = FUN_006aac10(uVar2);
        *puStack_c = puVar3;
        uVar6 = *(int *)(iStack_14 + 0x2c) * *(int *)(iStack_14 + 0x28);
        puStack_c = puStack_c + 1;
        puVar7 = puStack_8;
        for (uVar2 = uVar6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar3 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar3 = puVar3 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(char *)puVar3 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar3 = (uint *)((int)puVar3 + 1);
        }
        uVar2 = *(int *)(iStack_14 + 0x2c) * *(int *)(iStack_14 + 0x28);
        puVar7 = (uint *)((int)puStack_8 + uVar2);
        iStack_10 = iStack_10 + -1;
        puStack_8 = puVar7;
      } while (iStack_10 != 0);
      puVar4 = FUN_006aac10(*(int *)(iStack_14 + 0x20) * *(int *)(iStack_14 + 0x24) * 2);
      *(undefined4 **)(iStack_14 + 0x38) = puVar4;
      puVar4 = FUN_006aac10(*(int *)(iStack_14 + 0x30) * *(int *)(iStack_14 + 0x34));
      *(undefined4 **)(iStack_14 + 0x4c) = puVar4;
      puVar4 = FUN_006aac10(*(int *)(iStack_14 + 0x30) * *(int *)(iStack_14 + 0x34) * 2);
      *(undefined4 **)(iStack_14 + 0x50) = puVar4;
      uVar5 = FUN_006b0060((uint *)0x0,puVar7);
      *(undefined4 *)(iStack_14 + 0xf4) = uVar5;
      uVar5 = FUN_006b0060((uint *)0x0,(uint *)((int)puVar7 + *(int *)(param_1 + 0x38)));
      *(undefined4 *)(iStack_14 + 0x110) = uVar5;
    }
    g_currentExceptionFrame = IStack_58.previous;
    return;
  }
  g_currentExceptionFrame = IStack_58.previous;
  iVar9 = 4;
  piVar8 = (int *)(iStack_14 + 0x3c);
  do {
    if (*piVar8 != 0) {
      FUN_006ab060(piVar8);
    }
    piVar8 = piVar8 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar9 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0x132,0,errorCode,&DAT_007a4ccc
                             ,s_Visible__PrepareAfterSave_error_007c9358);
  if (iVar9 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_grig_visible_cpp_007c92cc,0x133);
  return;
}

