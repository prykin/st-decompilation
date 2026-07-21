#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::LightPalette */

void __thiscall CampaignTy::LightPalette(CampaignTy *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  CampaignTy *pCVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  CampaignTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_1BEC != 0) {
      puVar1 = &local_8->field_0x1bf8;
      iVar4 = Library::Ourlib::PALETTE::FUN_00718f40
                        (DAT_0080759c,(undefined4 *)puVar1,0,0x100,10,&local_8->field_1BF4,2,
                         local_8->field_0061,&local_8->field_1BF0);
      if (iVar4 == -4) {
        FUN_006b0a20(DAT_0080759c,(int)puVar1,0,0x100,0);
        pCVar3->field_1BEC = 0;
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x12d,0,iVar4,&DAT_007a4ccc,
                             s_CampaignTy__LightPalette_007cbe3c);
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_camp_obj_cpp_007cbcd4,0x12d);
  return;
}

