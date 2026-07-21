#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PlayBriefing */

void __thiscall CPanelTy::PlayBriefing(CPanelTy *this,char *param_1)

{
  short **ppsVar1;
  code *pcVar2;
  CPanelTy *pCVar3;
  int errorCode;
  DArrayTy *pDVar4;
  char *pcVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  short *psVar9;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (g_cMf32_00806758 != (cMf32 *)0x0) {
      pDVar4 = (DArrayTy *)Library::Ourlib::MFDARR::mfDarLoad(g_cMf32_00806758,param_1,0);
      if (pDVar4 != (DArrayTy *)0x0) {
        Library::MSVCRT::_strncpy(&DAT_0080c4d7,param_1,0x1f);
        pCVar3 = local_8;
        DAT_0080c4f6 = 0;
        if (local_8->field_024B != (DArrayTy *)0x0) {
          DArrayDestroy(local_8->field_024B);
        }
        pCVar3->field_024B = pDVar4;
        ppsVar1 = &pCVar3->field_025B;
        pCVar3->field_0257 = pCVar3->field_0253;
        pCVar3->field_024F = 0;
        if (*ppsVar1 != (short *)0x0) {
          FUN_0070b600((int *)ppsVar1);
        }
        psVar9 = (short *)0x1;
        bVar8 = 0;
        bVar7 = 6;
        pcVar5 = (char *)thunk_FUN_005260b0(0,0,0);
        psVar9 = Library::Ourlib::MFIMG::mfQmtLoad(DAT_00806790,pcVar5,bVar7,bVar8,psVar9);
        *ppsVar1 = psVar9;
        pCVar3->field_0260 = CASE_1;
        pCVar3->field_025F = 0;
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)pCVar3->field_01B4,0,100,5,0x226,0x55,0);
        if ((DAT_0080c4f7 != 3) && (DAT_0080c4f7 != 1)) {
          pCVar3->field_0260 = CASE_3;
          DAT_0080c4f7 = 3;
          Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,pCVar3->field_017C);
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x3c8,0,errorCode,
                             "%s","CPanelTy::PlayBriefing");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x3c8);
  return;
}

