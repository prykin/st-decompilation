#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PrepMissObj

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14
    */

void __thiscall OptPanelTy::PrepMissObj(OptPanelTy *this)

{
  byte *puVar1;
  uint uVar2;
  OptPanelTy *this_00;
  int iVar4;
  DArrayTy *pDVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;

    iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x3d1,0,iVar4,
                               "%s","OptPanelTy::PrepMissObj");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x3d1);
    return;
  }
  if ((DArrayTy *)local_8->field_02F9 != nullptr) {
    FUN_006b5570((DArrayTy *)local_8->field_02F9);
  }
  /* ST_CALLSITE[00532ACD]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
  pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
  this_00->field_02F9 = &pDVar5->flags;
  iVar4 = 0;
  if (0 < (int)g_dArray_0080C4CB->elementSize) {
    if ((int)g_dArray_0080C4CB->elementSize < 1) {
      pcVar6 = nullptr;
      goto LAB_00532af5;
    }
    do {
      pcVar6 = *(char **)(g_dArray_0080C4CB->growCapacity + iVar4 * 4);
LAB_00532af5:
      thunk_FUN_005411a0((DArrayTy *)this_00->field_02F9,pcVar6,"@- %s");
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)g_dArray_0080C4CB->elementSize);
  }
  puVar7 = ccFntTy::FormIndentSarr
                     (this_00->field_017C,(DArrayTy *)this_00->field_02F9," ,.;:!?/\\()[]{}",
                      (uint *)&DAT_007c21ec,200,0,0xffffffff,nullptr,1);
  if ((DArrayTy *)this_00->field_02F9 != nullptr) {
    FUN_006b5570((DArrayTy *)this_00->field_02F9);
  }
  this_00->field_02F9 = puVar7;
  if (puVar7 == nullptr) {
    /* ST_CALLSITE[00532B62]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
    pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    this_00->field_02F9 = &pDVar5->flags;
  }
  puVar7 = this_00->field_02F9;
  if (puVar7[2] != 0) {
    ccFntTy::SepColorStrInSarr(this_00->field_017C,puVar7,puVar7);
  }
  if ((this_00->field_01A4 == CASE_C) && (this_00->field_01B5[0] != 0)) {
    puVar1 = &this_00->field_0x18;
    this_00->field_0028 = 0x28;
    this_00->field_002C = 1;
    this_00->field_002E = (short)this_00->field_02F9[2];
    FUN_006e6080(this_00,2,this_00->field_01B5[0],(undefined4 *)puVar1);
    this_00->field_002E = 0;
    this_00->field_002C = 0;
    this_00->field_0028 = 0x22;
    FUN_006e6080(this_00,2,this_00->field_01B5[0],(undefined4 *)puVar1);
    uVar2 = this_00->field_01B5[0];
    this_00->field_0028 = 0x20;
    this_00->field_002C = 1;
    this_00->field_002E = 0;
    FUN_006e6080(this_00,2,uVar2,(undefined4 *)puVar1);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

