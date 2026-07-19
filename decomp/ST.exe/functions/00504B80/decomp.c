
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintNameRes */

void __thiscall CPanelTy::PaintNameRes(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  UINT UVar6;
  uint *puVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  HINSTANCE pHVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    uVar4 = thunk_FUN_005276e0(local_8->field_0C31,local_8->field_0C32);
    pbVar5 = (byte *)FUN_0070b3a0(pCVar2->field_029A,uVar4);
    DibPut((undefined4 *)pCVar2->field_0194,param_1 + 5,0x65,'\x01',pbVar5);
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,param_1 + 2,0x52,0xb2,10);
    iVar12 = -1;
    iVar11 = -1;
    uVar10 = 0;
    iVar9 = -1;
    iVar3 = -2;
    pHVar8 = DAT_00807618;
    UVar6 = thunk_FUN_00528060(pCVar2->field_0C31,pCVar2->field_0C32);
    puVar7 = (uint *)FUN_006b0140(UVar6,pHVar8);
    ccFntTy::WrTxt(pCVar2->field_01B8,puVar7,iVar3,iVar9,uVar10,iVar11,iVar12);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x76,0,iVar3,&DAT_007a4ccc,
                             s_CPanelTy__PaintNameRes_007c2794);
  if (iVar9 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x76);
  return;
}

