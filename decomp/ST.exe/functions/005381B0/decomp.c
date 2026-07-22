#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::InitPanel */

void __thiscall PanelTy::InitPanel(PanelTy *this)

{
  int *piVar1;
  code *pcVar2;
  PanelTy *this_00;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    iVar3 = 1;
    puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar4 = FUN_006b4fe0(DAT_0080679c);
    iVar3 = FUN_006b50c0(this_00->field_0040,this_00->field_0048,
                         (uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar5,iVar3);
    this_00->field_0068 = iVar3;
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (uVar4 == 0) {
      uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_006b1a50(PTR_008075a8,3,(undefined4 *)0x0,(undefined4 *)&this_00->field_0x4c);
    piVar1 = &this_00->field_0060;
    FUN_006b2330(PTR_008075a8,(uint *)piVar1,this_00->field_0064,0x4057ea,this_00->field_0040,
                 this_00->field_0048,this_00->field_0068);
    FUN_006b1b10(PTR_008075a8,*piVar1,3);
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,*piVar1,0xffffffff,this_00->field_003C,this_00->field_0044);
    memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_002C = this_00->field_0008;
    this_00->field_0028 = 0x13;
    FUN_006e6000(this_00,3,1,(undefined4 *)&this_00->field_0x18);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\panel.cpp",0x2a,0,iVar3,"%s",
                             "PanelTy::InitPanel");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\panel.cpp",0x2a);
  return;
}

