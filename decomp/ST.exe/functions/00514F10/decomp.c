#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::PrepMissObj */

void __thiscall HelpPanelTy::PrepMissObj(HelpPanelTy *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  DArrayTy *pDVar4;
  char *pcVar5;
  uint *puVar6;
  int iVar7;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x39b,0,iVar3,"%s"
                               ,"HelpPanelTy::PrepMissObj");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x39b);
    return;
  }
  if ((AnonShape_006B5570_4D68B99C *)local_8->field_01D3 != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)local_8->field_01D3);
  }
  pDVar4 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
  this_00->field_01D3 = &pDVar4->flags;
  iVar3 = 0;
  if (0 < PTR_0080c4cb->field_0008) {
    if (PTR_0080c4cb->field_0008 < 1) {
      pcVar5 = (char *)0x0;
      goto LAB_00514f85;
    }
    do {
      pcVar5 = *(char **)(PTR_0080c4cb->field_0014 + iVar3 * 4);
LAB_00514f85:
      thunk_FUN_005411a0(this_00->field_01D3,pcVar5,"@- %s@ ");
      iVar3 = iVar3 + 1;
    } while (iVar3 < PTR_0080c4cb->field_0008);
  }
  puVar6 = ccFntTy::FormIndentSarr
                     (this_00->field_01E4,this_00->field_01D3," ,.;:!?/\\()[]{}",
                      (uint *)&DAT_007c21ec,0x19c,0,0xffffffff,(char *)0x0,1);
  if ((AnonShape_006B5570_4D68B99C *)this_00->field_01D3 != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)this_00->field_01D3);
  }
  this_00->field_01D3 = puVar6;
  if (puVar6 == (uint *)0x0) {
    pDVar4 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    this_00->field_01D3 = &pDVar4->flags;
    Library::DKW::TBL::FUN_006b5aa0(&pDVar4->flags,&DAT_007c3b5c);
  }
  puVar6 = this_00->field_01D3;
  if (puVar6[2] != 0) {
    ccFntTy::SepColorStrInSarr(this_00->field_01E4,puVar6,puVar6);
  }
  if ((this_00->field_01A1 == (CASE_6|CASE_1)) && (this_00->field_019C != 0)) {
    puVar1 = &this_00->field_0x18;
    this_00->field_0028 = 0x28;
    *(undefined2 *)&this_00->field_0x2c = 1;
    this_00->field_002E = (short)this_00->field_01D3[2];
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    this_00->field_002E = 0;
    *(undefined2 *)&this_00->field_0x2c = 0;
    this_00->field_0028 = 0x22;
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 1;
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

