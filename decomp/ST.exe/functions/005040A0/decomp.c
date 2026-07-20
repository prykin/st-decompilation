
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel3.cpp
   CPanelTy::PaintMap */

void __thiscall CPanelTy::PaintMap(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  void *unaff_ESI;
  int iVar6;
  int iVar7;
  int iVar8;
  InternalExceptionFrame *pIVar9;
  undefined4 local_48 [16];
  CPanelTy *local_8;
  
  pIVar9 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar9);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    DibPut((AnonShape_006B84D0_7C7D97C6 *)local_8->field_0190,0,0,'\x01',(byte *)local_8->field_0994
          );
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0190,0,5,6,0x2a,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar4 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5;
    iVar6 = -1;
    iVar3 = -2;
    puVar5 = (uint *)FUN_006b0140(0x2712,HINSTANCE_00807618);
    ccFntTy::WrTxt(pCVar2->field_01B8,puVar5,iVar3,iVar6,uVar4,iVar7,iVar8);
    if (-1 < (int)pCVar2->field_0158) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,pCVar2->field_0158,0xffffffff,pCVar2->field_004C,pCVar2->field_00A4);
    }
    g_currentExceptionFrame = pIVar9;
    return;
  }
  g_currentExceptionFrame = pIVar9;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel3_cpp_007c26a0,0x13,0,iVar3,&DAT_007a4ccc,
                             s_CPanelTy__PaintMap_007c26c8);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel3_cpp_007c26a0,0x13);
  return;
}

