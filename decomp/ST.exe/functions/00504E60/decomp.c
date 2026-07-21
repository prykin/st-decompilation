
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintIDSObj */

void __thiscall CPanelTy::PaintIDSObj(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint *extraout_EAX;
  int iVar4;
  void *unaff_ESI;
  UINT resourceId;
  uint uVar5;
  int iVar6;
  int iVar7;
  InternalExceptionFrame *pIVar8;
  undefined4 local_48 [16];
  CPanelTy *local_8;
  
  pIVar8 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar8);
  pCVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = pIVar8;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0xa0,0,iVar3,&DAT_007a4ccc,
                               s_CPanelTy__PaintIDSObj_007c27d0);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0xa0);
    return;
  }
  if (DAT_0080874e == '\x03') {
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0194,0xf,0x8d,'\x01',
           (byte *)local_8->field_09F1);
    if (pCVar2->field_0C4D == 0) goto cf_common_exit_00504F81;
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,0x10,0x8e,
                     *(int *)(pCVar2->field_09F1 + 2),0xb);
    resourceId = pCVar2->field_0C4D;
  }
  else {
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0194,4,0x89,'\x01',
           (byte *)local_8->field_09F1);
    if (pCVar2->field_0C4D == 0) goto cf_common_exit_00504F81;
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,6,0x8b,200,0xb);
    resourceId = pCVar2->field_0C4D;
  }
  iVar7 = -1;
  iVar6 = -1;
  uVar5 = 0;
  iVar4 = -1;
  iVar3 = -2;
  LoadResourceString(resourceId,HINSTANCE_00807618);
  ccFntTy::WrTxt(pCVar2->field_01B8,extraout_EAX,iVar3,iVar4,uVar5,iVar6,iVar7);
cf_common_exit_00504F81:
  if (-1 < (int)pCVar2->field_015C) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,pCVar2->field_015C,0xffffffff,pCVar2->field_0050,pCVar2->field_00A8);
  }
  g_currentExceptionFrame = pIVar8;
  return;
}

