#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::InitPanel */

void __thiscall PanelTy::InitPanel(PanelTy *this)

{
  code *pcVar1;
  PanelTy *this_00;
  int iVar2;
  int uVar3;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
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
    piVar3 = (int *)FUN_006b50c0(this_00->field_0040,this_00->field_0048,
                                 (uint)*(ushort *)(DAT_0080679c + 0xe),uVar3,puVar4,iVar2);
    this_00->field_0068 = piVar3;
    uVar7 = piVar3[5];
    if (uVar7 == 0) {
      uVar7 = ((uint)*(ushort *)((int)piVar3 + 0xe) * piVar3[1] + 0x1f >> 3 & 0x1ffffffc) *
              piVar3[2];
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(piVar3);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_006b1a50(g_ddxContext_008075A8,3,(undefined4 *)0x0,(undefined4 *)&this_00->field_0x4c);
    piVar3 = &this_00->field_0060;
    FUN_006b2330(g_ddxContext_008075A8,(uint *)piVar3,this_00->field_0064,0x4057ea,
                 this_00->field_0040,this_00->field_0048,(ushort *)this_00->field_0068);
    FUN_006b1b10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,*piVar3,3);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,*piVar3,0xffffffff,this_00->field_003C,
               this_00->field_0044);
    memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
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

