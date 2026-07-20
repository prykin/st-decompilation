
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintName */

void __thiscall CPanelTy::PaintName(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  char cVar3;
  int iVar4;
  Global_sub_00523410_param_1Enum GVar5;
  UINT uID;
  uint *puVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  HINSTANCE pHVar8;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = local_8;
  if (iVar4 == 0) {
    if (param_1 == 0) {
      iVar4 = local_8->field_019C;
    }
    else {
      iVar4 = local_8->field_0184;
    }
    ccFntTy::SetSurf(local_8->field_01B8,iVar4,0,1,0,0x4e,0x24);
    if (param_1 == 0) {
      cVar3 = pCVar2->field_0C5D;
    }
    else {
      cVar3 = pCVar2->field_0B6F;
    }
    if (cVar3 == '\0') {
      if (param_1 == 0) {
        cVar3 = pCVar2->field_0C58;
        GVar5 = pCVar2->field_0C54;
      }
      else {
        cVar3 = pCVar2->field_0B6A;
        GVar5 = pCVar2->field_0B66;
      }
      pHVar8 = HINSTANCE_00807618;
      uID = thunk_FUN_00523410(GVar5,cVar3,0);
      puVar6 = (uint *)FUN_006b0140(uID,pHVar8);
    }
    else if (param_1 == 0) {
      puVar6 = (uint *)&pCVar2->field_0C5D;
    }
    else {
      puVar6 = (uint *)&pCVar2->field_0B6F;
    }
    ccFntTy::WrTxt(pCVar2->field_01B8,puVar6,-2,-1,0,-1,-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1e,0,iVar4,&DAT_007a4ccc,
                             s_CPanelTy__PaintName_007c23f4);
  if (iVar7 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1e);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

