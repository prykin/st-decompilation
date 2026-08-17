#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::CloseButtons */

void __thiscall CampaignTy::CloseButtons(CampaignTy *this)

{
  int iVar2;
  DWORD DVar3;
  int iVar5_mg1;
  int *piVar4;
  CampaignTy *this_00;
  int iVar5;
  InternalExceptionFrame local_4c;
  CampaignTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    /* ST_CALLSITE[005924A6]: CALL 0x00403459; direct=00403459 MMObjTy::CloseButtons */
    MMObjTy::CloseButtons((MMObjTy *)local_8);
    iVar2 = 0;
    if (this_00->field_009A != '\0') {
      iVar5 = 0x96;
      piVar4 = &this_00->field_00BB[0].field_0028.field_0040;
      do {
        /* ST_CALLSITE[005924C2]: CALL dword ptr [0x0085bedc] */
        DVar3 = timeGetTime();
        piVar4[1] = DVar3;
        *piVar4 = iVar5;
        *(undefined1 *)(piVar4 + -0x1a) = 1;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x96;
        piVar4 = (int *)((int)piVar4 + 0x1fb);
        this_00 = local_8;
      } while (iVar2 < (int)(uint)(byte)local_8->field_009A);
    }
    this_00->field_0065 = 4;
    thunk_FUN_005b6730(this_00,2,'\x01',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5_mg1 = ReportDebugMessage("E:\\__titans\\Start\\camp_obj.cpp",0x13c,0,iVar2,
                                 "%s","CampaignTy::CloseButtons");
  if (iVar5_mg1 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\camp_obj.cpp",0x13c);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

