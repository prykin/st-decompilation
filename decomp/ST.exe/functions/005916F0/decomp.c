#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::DoneCampaign */

void __thiscall CampaignTy::DoneCampaign(CampaignTy *this)

{
  MMsgTy *this_00;
  code *pcVar1;
  CampaignTy *pCVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  CampaignTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                     (uint)g_cursorClass_00802A30->field_001C);
      }
    }
    DarkScreen(DAT_0080759c,10,2);
    thunk_FUN_00568bc0(&g_sound,1);
    if (g_startSystem_0081176C->field_002C != (ushort *)0x0) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00 = *(MMsgTy **)(pCVar2->field_1A5B + 0x2e6);
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(pCVar2->field_1A5B + 0x2e6) + 0x1cab) = 0;
    }
    puVar4 = &pCVar2->field_1B13;
    iVar3 = 3;
    do {
      iVar5 = 0xf;
      do {
        if ((undefined4 *)*puVar4 != (undefined4 *)0x0) {
          FUN_006c4a70((undefined4 *)*puVar4);
          *puVar4 = 0;
        }
        if (puVar4[-0x2d] != 0) {
          cMf32::RecMemFree(g_cMf32_00806780,puVar4 + -0x2d);
        }
        pCVar2 = local_8;
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 4;
    puVar4 = &local_8->field_1BD7;
    do {
      if ((undefined4 *)*puVar4 != (undefined4 *)0x0) {
        FUN_006c4a70((undefined4 *)*puVar4);
        *puVar4 = 0;
      }
      if (puVar4[-4] != 0) {
        cMf32::RecMemFree(g_cMf32_00806780,puVar4 + -4);
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pCVar2->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pCVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Start\\camp_obj.cpp",0x9d,0,iVar3,"%s",
                             "CampaignTy::DoneCampaign");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\camp_obj.cpp",0x9d);
  return;
}

