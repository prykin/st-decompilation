#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::DoneCampaign */

void __thiscall CampaignTy::DoneCampaign(CampaignTy *this)

{
  MMsgTy *this_00;
  CampaignTy *pCVar2;
  int iVar3;
  int iVar6;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  InternalExceptionFrame local_4c;
  CampaignTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    /* ST_CALLSITE[0059172A]: CALL 0x0040458e; direct=0040458E MMObjTy::DoneMMObj */
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {

        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    /* ST_CALLSITE[0059176D]: CALL 0x00401d43; direct=00401D43 DarkScreen */
    DarkScreen(g_dDXContext_0080759C,10,2);
    thunk_FUN_00568bc0(&g_sound,1);
    if (g_startSystem_0081176C->field_002C != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00 = *(MMsgTy **)(pCVar2->field_00BB[0xc].field_01DC + 0x2e6);
    if (this_00 != nullptr) {
      /* ST_CALLSITE[005917AA]: CALL 0x0040462e; direct=0040462E MMsgTy::HideSprites */
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(pCVar2->field_00BB[0xc].field_01DC + 0x2e6) + 0x1cab) = 0;
    }
    puVar5 = &pCVar2->field_1B13;
    iVar4 = 3;
    do {
      iVar7 = 0xf;
      do {
        if ((undefined4 *)*puVar5 != nullptr) {
          FUN_006c4a70((undefined4 *)*puVar5);
          *puVar5 = 0;
        }
        if (puVar5[-0x2d] != 0) {
          cMf32::RecMemFree(g_cMf32_00806780,puVar5 + -0x2d);
        }
        pCVar2 = local_8;
        puVar5 = puVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar6 = local_8->field_1BD7;
    do {
      if ((undefined4 *)*puVar6 != nullptr) {
        FUN_006c4a70((undefined4 *)*puVar6);
        *puVar6 = 0;
      }
      if (puVar6[-4] != 0) {
        cMf32::RecMemFree(g_cMf32_00806780,puVar6 + -4);
      }
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (pCVar2->field_004D != 0) {

      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pCVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar6 = ReportDebugMessage("E:\\__titans\\Start\\camp_obj.cpp",0x9d,0,iVar3,"%s",
                             "CampaignTy::DoneCampaign");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\camp_obj.cpp",0x9d);
  return;
}

