#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawDescription

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __thiscall HelpPanelTy::DrawDescription(HelpPanelTy *this,int *param_1,UINT param_2)

{
  char cVar1;
  HelpPanelTy *this_00;
  int iVar3;
  char *pcVar4_mg1;
  char *pcVar4_mg0;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x425,0,iVar3,"%s"
                               ,"HelpPanelTy::DrawDescription");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x425);
    return;
  }
  if (param_2 != 10000) {
    ccFntTy::SetSurf(local_8->field_01E0,(int)local_8->field_0218,0,0,*param_1,0x19c,0xf);
    uVar8 = 3;
    iVar7 = -1;
    iVar3 = -1;
    pcVar4_mg1 = LoadResourceString(0x55f5,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01E0,pcVar4_mg1,iVar3,iVar7,uVar8);
    *param_1 = *param_1 + 0xf;
    pcVar4_mg0 = LoadResourceString(param_2,g_hINSTANCE_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar5 = pcVar4_mg0;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar5 = pcVar4_mg0 + 1;
      cVar1 = *pcVar4_mg0;
      pcVar4_mg0 = pcVar5;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar5 = pcVar5 + -uVar8;
    pcVar6 = (char *)&DAT_0080f33a;
    memmove(pcVar6, pcVar5, uVar8); /* compiler REP MOVS byte copy */
    ccFntTy::FormIndentText
              (this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a," ,.;:!?/\\()[]{}",
               (uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    iVar3 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
    CheckBkView(this_00,*param_1,(ushort)iVar3);
    ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,*param_1,0x19c,iVar3 + 2);
    ccFntTy::WrTxt(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,
                   -1,-1);
    *param_1 = *param_1 + iVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

