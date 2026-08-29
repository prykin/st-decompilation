#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::NatProc */

void __thiscall HelpPanelTy::NatProc(HelpPanelTy *this,int param_1,char param_2)

{
  HelpPanelTy_field_01A1State HVar1;
  int iVar2;
  HelpPanelTy *this_00;
  int iVar3_mg0;
  UINT UVar4;
  int iVar4_mg0;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  int local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar3_mg0 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3_mg0 == 0) {
    if (param_2 == '\0') {
      HVar1 = local_c->field_01A1;
      if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
        local_c->field_01A2 = HVar1;
        local_c->field_01AB = local_c->field_01A3;
      }
      else {
        local_c->field_01A2 = 0;
        local_c->field_01AB = 0;
      }
      STPiece<0,2>(iVar2) = local_c->field_0178;
      STPiece<2,2>(iVar2) = local_c->field_017A;
      local_c->field_01A1 = CASE_C;
      local_c->field_01A3 = (void *)param_1;
      local_c->field_01A7 = 0;
      local_c->field_01AF = 0x23;
      local_c->field_01B1 = 5;
      if (iVar2 != 0) {
        local_c->field_0028 = 0x4202;
        *(undefined2 *)&local_c->field_0x2c = 0;
        *(undefined2 *)&local_c->field_0x2e = 2;
        local_c->field_0030 = (undefined2)iVar2;
        local_c->field_0032 = STPiece<2,2>(iVar2);
        if (g_cursorClass_00802A30 != nullptr) {
          /* ST_CALLSITE[0051D42F]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          g_cursorClass_00802A30->GetMessage((STMessage *)&local_c->field_0x18);
        }
      }
    }

    UVar4 = thunk_FUN_00523410(param_1,'\0',0);
    /* ST_CALLSITE[0051D445]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
    DrawTitle(this_00,0x55f9,0,UVar4);
    /* ST_CALLSITE[0051D453]: CALL 0x00403d78; direct=00403D78 HelpPanelTy::DrawObj */
    DrawObj(this_00,&local_8,(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,0,0);
    /* ST_CALLSITE[0051D45C]: CALL 0x00403684; direct=00403684 thunk_FUN_00523410; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
    UVar4 = thunk_FUN_00523410(param_1,'\0',2);
    /* ST_CALLSITE[0051D46B]: CALL 0x00402dab; direct=00402DAB HelpPanelTy::DrawDescription */
    DrawDescription(this_00,&local_8,UVar4);
    /* ST_CALLSITE[0051D47A]: CALL 0x0040506f; direct=0040506F HelpPanelTy::AddLinks */
    AddLinks(this_00,&local_8,'\f',param_1,0);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar4_mg0 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x93f,0,iVar3_mg0,
                                 "%s","HelpPanelTy::NatProc");
  if (iVar4_mg0 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3_mg0,0,"E:\\__titans\\Andrey\\helppan.cpp",0x93f);
  return;
}

