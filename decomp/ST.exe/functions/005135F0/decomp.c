#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::HomeBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall HelpPanelTy::HomeBut(HelpPanelTy *this)

{
  HelpPanelTy_field_01A1State HVar1;
  HelpPanelTy *this_00;
  int iVar3;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_64;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  HelpPanelTy *local_c;
  uint local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 == 0) {
    HVar1 = local_c->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
      local_c->field_01A2 = HVar1;
      local_c->field_01AB = local_c->field_01A3;
    }
    else {
      local_c->field_01A2 = 0;
      local_c->field_01AB = 0;
    }
    STPiece<0,2>(iVar5) = local_c->field_0178;
    STPiece<2,2>(iVar5) = local_c->field_017A;
    local_c->field_01A1 = 0;
    local_c->field_01A3 = nullptr;
    if (iVar5 != 0) {
      local_c->field_0028 = 0x4202;
      *(undefined2 *)&local_c->field_0x2c = 0;
      *(undefined2 *)&local_c->field_0x2e = 2;
      local_c->field_0030 = (undefined2)iVar5;
      local_c->field_0032 = STPiece<2,2>(iVar5);
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_CALLSITE[00513695]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_cursorClass_00802A30->GetMessage((STMessage *)&local_c->field_0x18);
      }
    }
    this_00->field_01CF = 0xffffffff;
    this_00->field_01CB->count = 0;
    Library::DKW::WGR::FUN_006b55f0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,0x16,
               (byte *)this_00->field_01DC,0,0x21,0x16,0x1b8,0x118);
    local_8 = 0;
    *(undefined4 *)&this_00->field_01B3->field_0xc = 0;
    this_00->field_01B7 = 0;
    if (*(int *)sizeHelp_exref != 0) {
      iVar5 = 0;
      do {
        pbVar3 = this_00->field_01C7 + iVar5;
        if (*(int *)(pbVar3 + 4) == 0) {
          local_20 = *(undefined4 *)pbVar3;
          local_1c = *(undefined4 *)(pbVar3 + 4);
          local_18 = *(undefined4 *)(pbVar3 + 8);
          local_14 = *(undefined4 *)(pbVar3 + 0xc);
          local_10 = pbVar3[0x10];
          local_f = 0;
          local_e = 0;
          local_d = 0;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01B3,&local_20);
        }
        local_8 = local_8 + 1;
        iVar5 = iVar5 + 0x11;
      } while (local_8 < *(uint *)sizeHelp_exref);
    }
    /* ST_CALLSITE[00513747]: CALL 0x00401acd; direct=00401ACD HelpPanelTy::CreateList */
    CreateList(this_00);
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  g_currentExceptionFrame = local_64.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x295,0,iVar3,"%s",
                             "HelpPanelTy::HomeBut");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x295);
  return;
}

