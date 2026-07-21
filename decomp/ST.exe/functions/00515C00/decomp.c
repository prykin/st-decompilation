
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawDescription */

void __thiscall HelpPanelTy::DrawDescription(HelpPanelTy *this,int *param_1,UINT param_2)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  uint *extraout_EAX;
  char *extraout_EAX_00;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  char *pcVar6;
  void *unaff_EDI;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x425,0,iVar3,&DAT_007a4ccc
                               ,s_HelpPanelTy__DrawDescription_007c3bcc);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x425);
    return;
  }
  if (param_2 != 10000) {
    ccFntTy::SetSurf(local_8->field_01E0,(int)local_8->field_0218,0,0,*param_1,0x19c,0xf);
    uVar9 = 3;
    iVar8 = -1;
    iVar3 = -1;
    LoadResourceString(0x55f5,HINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01E0,extraout_EAX,iVar3,iVar8,uVar9);
    *param_1 = *param_1 + 0xf;
    LoadResourceString(param_2,HINSTANCE_00807618);
    uVar4 = 0xffffffff;
    pcVar6 = extraout_EAX_00;
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    pcVar7 = (char *)&DAT_0080f33a;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    ccFntTy::FormIndentText
              (this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a,s________________007c21d8,
               (uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    uVar4 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
    CheckBkView(this_00,*param_1,uVar4);
    ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,*param_1,0x19c,uVar4 + 2);
    ccFntTy::WrTxt(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
    *param_1 = *param_1 + uVar4;
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

