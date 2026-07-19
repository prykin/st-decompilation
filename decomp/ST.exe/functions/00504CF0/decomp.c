
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintNameResSI */

void __thiscall CPanelTy::PaintNameResSI(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  UINT UVar6;
  uint *puVar7;
  void *unaff_ESI;
  HINSTANCE pHVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  InternalExceptionFrame *pIVar13;
  undefined4 local_48 [16];
  CPanelTy *local_8;
  
  pIVar13 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar13);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    uVar4 = thunk_FUN_005276e0(local_8[0xc31],(byte)local_8[0xc32]);
    pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x29a),uVar4);
    thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),0x26,0x50,'\x01',pbVar5);
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1b8),*(int *)(pCVar2 + 0x194),0,0x15,0x6c,0xc3,0xb);
    iVar12 = -1;
    iVar11 = -1;
    uVar10 = 5;
    iVar9 = -1;
    iVar3 = -2;
    pHVar8 = DAT_00807618;
    UVar6 = thunk_FUN_00528060(pCVar2[0xc31],(char)pCVar2[0xc32]);
    puVar7 = (uint *)FUN_006b0140(UVar6,pHVar8);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),puVar7,iVar3,iVar9,uVar10,iVar11,iVar12);
    g_currentExceptionFrame = pIVar13;
    return;
  }
  g_currentExceptionFrame = pIVar13;
  iVar9 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x84,0,iVar3,&DAT_007a4ccc,
                             s_CPanelTy__PaintNameResSI_007c27b0);
  if (iVar9 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x84);
  return;
}

