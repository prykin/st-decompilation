
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
  UINT uID;
  uint *puVar6;
  void *unaff_ESI;
  HINSTANCE pHVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  InternalExceptionFrame *pIVar11;
  undefined4 local_48 [16];
  CPanelTy *local_8;
  
  pIVar11 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar11);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    uVar4 = thunk_FUN_005276e0(local_8->field_0C31,local_8->field_0C32);
    pbVar5 = (byte *)FUN_0070b3a0(pCVar2->field_029A,uVar4);
    DibPut((AnonShape_006B84D0_7C7D97C6 *)pCVar2->field_0194,0x26,0x50,'\x01',pbVar5);
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,0x15,0x6c,0xc3,0xb);
    iVar10 = -1;
    iVar9 = -1;
    uVar4 = 5;
    iVar8 = -1;
    iVar3 = -2;
    pHVar7 = HINSTANCE_00807618;
    uID = thunk_FUN_00528060(pCVar2->field_0C31,pCVar2->field_0C32);
    puVar6 = (uint *)FUN_006b0140(uID,pHVar7);
    ccFntTy::WrTxt(pCVar2->field_01B8,puVar6,iVar3,iVar8,uVar4,iVar9,iVar10);
    g_currentExceptionFrame = pIVar11;
    return;
  }
  g_currentExceptionFrame = pIVar11;
  iVar8 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x84,0,iVar3,&DAT_007a4ccc,
                             s_CPanelTy__PaintNameResSI_007c27b0);
  if (iVar8 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x84);
  return;
}

