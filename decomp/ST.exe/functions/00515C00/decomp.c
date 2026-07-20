
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawDescription */

void __thiscall HelpPanelTy::DrawDescription(HelpPanelTy *this,int *param_1,UINT param_2)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x425,0,iVar3,&DAT_007a4ccc
                               ,s_HelpPanelTy__DrawDescription_007c3bcc);
    if (iVar9 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x425);
    return;
  }
  if (param_2 != 10000) {
    ccFntTy::SetSurf(local_8->field_01E0,local_8->field_0218,0,0,*param_1,0x19c,0xf);
    uVar10 = 3;
    iVar9 = -1;
    iVar3 = -1;
    puVar4 = (uint *)FUN_006b0140(0x55f5,HINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01E0,puVar4,iVar3,iVar9,uVar10);
    *param_1 = *param_1 + 0xf;
    pcVar5 = (char *)FUN_006b0140(param_2,HINSTANCE_00807618);
    uVar6 = 0xffffffff;
    do {
      pcVar8 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar5 = pcVar8 + -uVar6;
    pcVar8 = (char *)&DAT_0080f33a;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar8 = pcVar8 + 1;
    }
    ccFntTy::FormIndentText
              (this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a,s________________007c21d8,
               (uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    uVar6 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
    CheckBkView(this_00,*param_1,uVar6);
    ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,*param_1,0x19c,uVar6 + 2);
    ccFntTy::WrTxt(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
    *param_1 = *param_1 + uVar6;
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

