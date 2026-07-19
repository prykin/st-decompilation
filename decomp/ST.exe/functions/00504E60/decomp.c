
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintIDSObj */

void __thiscall CPanelTy::PaintIDSObj(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  void *unaff_ESI;
  UINT UVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame *pIVar10;
  undefined4 local_48 [16];
  CPanelTy *local_8;
  
  pIVar10 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar10);
  pCVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = pIVar10;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0xa0,0,iVar3,&DAT_007a4ccc,
                               s_CPanelTy__PaintIDSObj_007c27d0);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0xa0);
    return;
  }
  if (DAT_0080874e == '\x03') {
    DibPut((undefined4 *)local_8->field_0194,0xf,0x8d,'\x01',(byte *)local_8->field_09F1);
    if (pCVar2->field_0C4D == 0) goto cf_common_exit_00504F81;
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,0x10,0x8e,
                     *(int *)(pCVar2->field_09F1 + 2),0xb);
    UVar6 = pCVar2->field_0C4D;
  }
  else {
    DibPut((undefined4 *)local_8->field_0194,4,0x89,'\x01',(byte *)local_8->field_09F1);
    if (pCVar2->field_0C4D == 0) goto cf_common_exit_00504F81;
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,6,0x8b,200,0xb);
    UVar6 = pCVar2->field_0C4D;
  }
  iVar9 = -1;
  iVar8 = -1;
  uVar7 = 0;
  iVar5 = -1;
  iVar3 = -2;
  puVar4 = (uint *)FUN_006b0140(UVar6,DAT_00807618);
  ccFntTy::WrTxt(pCVar2->field_01B8,puVar4,iVar3,iVar5,uVar7,iVar8,iVar9);
cf_common_exit_00504F81:
  if (-1 < (int)pCVar2->field_015C) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,pCVar2->field_015C,0xffffffff,pCVar2->field_0050,pCVar2->field_00A8);
  }
  g_currentExceptionFrame = pIVar10;
  return;
}

