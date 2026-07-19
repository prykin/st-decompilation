
void __thiscall FSGSTy::PrepBkgMess(FSGSTy *this,char param_1)

{
  FSGSTy *pFVar1;
  code *pcVar2;
  FSGSTy *pFVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  InternalExceptionFrame IStack_54;
  FSGSTy *pFStack_10;
  int iStack_c;
  int iStack_8;
  
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  pFStack_10 = this;
  iVar4 = __setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pFVar3 = pFStack_10;
  if (iVar4 == 0) {
    pFVar1 = pFStack_10 + 0x1ac0;
    if (*(int *)(pFStack_10 + 0x1ac0) != 0) {
      FUN_006ab060((undefined4 *)pFVar1);
    }
    if (param_1 == '\0') {
      iStack_8 = 0x106;
      iStack_c = 0x1b8;
    }
    else {
      iStack_8 = (-(uint)(param_1 != '\x01') & 0xfffffffb) + 0x17a;
      iStack_c = (-(uint)(param_1 != '\x01') & 0x129) + 0x1b8;
    }
    iVar4 = 1;
    puVar8 = (undefined4 *)(*(int *)(pFVar3 + 0x5d) + 0x28);
    uVar5 = FUN_006b4fe0(*(int *)(pFVar3 + 0x5d));
    uVar6 = FUN_006b50c0(iStack_c,iStack_8,(uint)*(ushort *)(*(int *)(pFVar3 + 0x5d) + 0xe),uVar5,
                         puVar8,iVar4);
    uVar5 = *(uint *)(pFVar3 + 0x1abc);
    *(uint *)pFVar1 = uVar6;
    FUN_006b2410((int)DAT_008075a8,uVar5,uVar6);
    FUN_006b2800((int)DAT_008075a8,*(uint *)(pFVar3 + 0x1abc),*(uint *)(*(uint *)pFVar1 + 4),
                 *(uint *)(*(uint *)pFVar1 + 8));
    if (param_1 == '\0') {
      uVar5 = 0xb4;
    }
    else {
      uVar5 = (-(uint)(param_1 != '\x01') & 0xffffff6e) + 0xb4;
    }
    FUN_006b3640(DAT_008075a8,*(uint *)(pFVar3 + 0x1abc),0xffffffff,uVar5,
                 (-(uint)(param_1 != '\0') & 0xffffffb4) + 0xaa);
    FUN_006b3af0(DAT_008075a8,*(uint *)(pFVar3 + 0x1abc));
    pFVar3[0x1abb] = (FSGSTy)param_1;
    g_currentExceptionFrame = IStack_54.previous;
    return;
  }
  g_currentExceptionFrame = IStack_54.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x3a8,0,iVar4,&DAT_007a4ccc,
                             s_FSGSTy__PrepBkgMess_007cc1cc);
  if (iVar7 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x3a8);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

