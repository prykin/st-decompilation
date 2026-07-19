
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel3.cpp
   CPanelTy::PaintMap */

void __thiscall CPanelTy::PaintMap(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint *puVar4;
  void *unaff_ESI;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  InternalExceptionFrame *pIVar9;
  undefined4 local_48 [16];
  CPanelTy *local_8;
  
  pIVar9 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,pIVar9);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    thunk_FUN_00540760(*(undefined4 **)(local_8 + 400),0,0,'\x01',*(byte **)(local_8 + 0x994));
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1b8),*(int *)(pCVar2 + 400),0,5,6,0x2a,10);
    iVar8 = -1;
    iVar7 = -1;
    iVar3 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5;
    iVar6 = -1;
    iVar5 = -2;
    puVar4 = (uint *)FUN_006b0140(0x2712,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),puVar4,iVar5,iVar6,iVar3,iVar7,iVar8);
    if (-1 < (int)*(uint *)(pCVar2 + 0x158)) {
      FUN_006b3640(DAT_008075a8,*(uint *)(pCVar2 + 0x158),0xffffffff,*(uint *)(pCVar2 + 0x4c),
                   *(uint *)(pCVar2 + 0xa4));
    }
    g_currentExceptionFrame = pIVar9;
    return;
  }
  g_currentExceptionFrame = pIVar9;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_cpanel3_cpp_007c26a0,0x13,0,iVar3,&DAT_007a4ccc,
                             s_CPanelTy__PaintMap_007c26c8);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel3_cpp_007c26a0,0x13);
  return;
}

