
void __thiscall SIDTy::PaintExplanation(SIDTy *this)

{
  code *pcVar1;
  SIDTy *pSVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  SIDTy *pSVar6;
  uint uVar7;
  ccFntTy *this_00;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar9;
  int iVar10;
  int iVar11;
  InternalExceptionFrame IStack_4c;
  SIDTy *pSStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pSStack_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_8;
  if (iVar3 == 0) {
    FUN_006b4170(*(int *)(pSStack_8 + 0x1cb8),0,0,0x7d,*(int *)(*(int *)(pSStack_8 + 0x1cc0) + 4),
                 *(int *)(*(int *)(pSStack_8 + 0x1cc0) + 8),0xff);
    iVar3 = *(int *)(pSVar2 + 0x1cc0);
    uVar8 = *(uint *)(iVar3 + 0x14);
    if (uVar8 == 0) {
      uVar8 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(pSVar2 + 0x1cc0),0,0,0,0,0);
    if (pSVar2[0x1a5f] == (SIDTy)0x0) {
      iVar11 = -1;
      iVar10 = -1;
      uVar5 = 0;
      iVar9 = -1;
      iVar3 = -2;
      pSVar6 = (SIDTy *)FUN_006b0140(0x2521,DAT_00807618);
      this_00 = *(ccFntTy **)(DAT_0081176c + 0x34);
    }
    else {
      puVar4 = &DAT_00807ddd;
      pSVar6 = pSVar2 + 0x1cd4;
      uVar5 = FUN_006b0140(0x2520,DAT_00807618);
      wsprintfA((LPSTR)pSVar6,s__0_s__5_s_0__007cd6c4,uVar5,puVar4);
      this_00 = *(ccFntTy **)(DAT_0081176c + 0x34);
      iVar11 = -1;
      iVar10 = -1;
      uVar5 = 0;
      iVar9 = -1;
      iVar3 = -2;
    }
    ccFntTy::WrTxt(this_00,(uint *)pSVar6,iVar3,iVar9,uVar5,iVar10,iVar11);
    FUN_006b5440(*(int *)(pSVar2 + 0x1cb8),0,0,0x7d,*(int *)(pSVar2 + 0x1cc0),0,0xff);
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar9 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x17b,0,iVar3,&DAT_007a4ccc,
                             s_SIDTy__PaintExplanation_007cd6a8);
  if (iVar9 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x17b);
  return;
}

