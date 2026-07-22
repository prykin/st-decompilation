#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawDescription */

void __thiscall HelpPanelTy::DrawDescription(HelpPanelTy *this,int *param_1,UINT param_2)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  uint *resourceString;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x425,0,iVar3,"%s"
                               ,"HelpPanelTy::DrawDescription");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x425);
    return;
  }
  if (param_2 != 10000) {
    ccFntTy::SetSurf(local_8->field_01E0,(int)local_8->field_0218,0,0,*param_1,0x19c,0xf);
    uVar9 = 3;
    iVar8 = -1;
    iVar3 = -1;
    resourceString = (uint *)LoadResourceString(0x55f5,g_module_00807618);
    ccFntTy::WrStr(this_00->field_01E0,resourceString,iVar3,iVar8,uVar9);
    *param_1 = *param_1 + 0xf;
    pcVar4 = LoadResourceString(param_2,g_module_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar7 = pcVar4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar4 = pcVar7 + -uVar5;
    pcVar7 = (char *)&DAT_0080f33a;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar7 = pcVar7 + 1;
    }
    ccFntTy::FormIndentText
              (this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a," ,.;:!?/\\()[]{}",
               (uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    uVar5 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
    CheckBkView(this_00,*param_1,uVar5);
    ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,*param_1,0x19c,uVar5 + 2);
    ccFntTy::WrTxt(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
    *param_1 = *param_1 + uVar5;
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

