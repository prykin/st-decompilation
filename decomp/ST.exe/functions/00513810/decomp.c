#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::BackBut */

void __thiscall HelpPanelTy::BackBut(HelpPanelTy *this,void *param_1)

{
  HelpPanelTy_field_01A1State HVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  int iVar4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  undefined4 *puVar5;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  undefined4 local_8;

  if (this->field_01A1 != this->field_01A2) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    this_00 = local_c;
    if (iVar3 == 0) {
      if (local_c->field_0178 != 0) {
        local_c->field_0028 = 0x4202;
        *(undefined2 *)&local_c->field_0x2c = 0;
        local_c->field_002E = 2;
        *(undefined4 *)&local_c->field_0x30 = local_c->field_0178;
        if (PTR_00802a30 != (CursorClassTy *)0x0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)**(undefined4 **)PTR_00802a30)(&local_c->field_0x18);
        }
      }
      HVar1 = this_00->field_01A2;
      if (HVar1 != 0) {
        if (HVar1 == CASE_6) {
          TTreeProc(this_00,this_00->field_01AB,'\0');
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          PutToSHlp(this_00,unaff_EDI);
          g_currentExceptionFrame = local_50.previous;
          return;
        }
        if (HVar1 != (CASE_8|CASE_2)) {
          g_currentExceptionFrame = local_50.previous;
          return;
        }
      }
      this_00->field_01A1 = HVar1;
      this_00->field_01A3 = local_8;
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0x21,0x16,
                 (byte *)this_00->field_01DC,0,0x21,0x16,0x1b8,0x118);
      CreateList(this_00);
      if (this_00->field_01A2 == '\0') {
        local_8 = this_00->field_01B7;
      }
      else {
        local_8 = *(undefined4 *)&this_00->field_0x1bf;
      }
      if (this_00->field_019C != 0) {
        puVar5 = (undefined4 *)&this_00->field_0x18;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        this_00->field_0028 = 0x22;
        *(short *)&this_00->field_0x2c = (short)local_8;
        *(undefined2 *)&this_00->field_0x30 = 1;
        this_00->field_0032 = 1;
        FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)&this_00->field_0x18);
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x2b3,0,iVar3,&DAT_007a4ccc
                               ,s_HelpPanelTy__BackBut_007c3a80);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x2b3);
  }
  return;
}

