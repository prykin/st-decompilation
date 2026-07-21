#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::InitPanel */

void __thiscall PanelTy::InitPanel(PanelTy *this)

{
  code *pcVar1;
  PanelTy *this_00;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    iVar2 = 1;
    puVar4 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar3 = FUN_006b4fe0(DAT_0080679c);
    iVar2 = FUN_006b50c0(this_00->field_0040,this_00->field_0048,
                         (uint)*(ushort *)(DAT_0080679c + 0xe),uVar3,puVar4,iVar2);
    this_00->field_0068 = iVar2;
    uVar3 = *(uint *)(iVar2 + 0x14);
    if (uVar3 == 0) {
      uVar3 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)&this_00->field_0x4c);
    puVar4 = &this_00->field_0060;
    FUN_006b2330((uint)DAT_008075a8,puVar4,this_00->field_0064,0x4057ea,this_00->field_0040,
                 this_00->field_0048,this_00->field_0068);
    FUN_006b1b10((int)DAT_008075a8,*puVar4,3);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*puVar4,0xffffffff,this_00->field_003C,this_00->field_0044);
    puVar4 = (undefined4 *)&this_00->field_0x18;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    this_00->field_002C = this_00->field_0008;
    this_00->field_0028 = 0x13;
    FUN_006e6000(this_00,3,1,(undefined4 *)&this_00->field_0x18);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\panel.cpp",0x2a,0,iVar2,"%s",
                             "PanelTy::InitPanel");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\panel.cpp",0x2a);
  return;
}

