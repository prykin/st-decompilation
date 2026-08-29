#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::InitPanel */

void __thiscall PanelTy::InitPanel(PanelTy *this)

{
  PanelTy *this_00;
  int iVar2;
  int uVar3;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar2;
  uint *puVar3;
  int iVar7;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar8;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    iVar8 = 1;
    puVar6 = PTR_0080679c + 0x14;

    uVar3 = FUN_006b4fe0(PTR_0080679c);
    /* ST_CALLSITE[0053820E]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217;/int;/int;/int;/uint;pointer:/undefined4;/int */
    pRVar2 = FUN_006b50c0(this_00->field_0040,this_00->field_0048,(uint)PTR_0080679c[7],uVar3,
                          (undefined4 *)puVar6,iVar8);
    this_00->field_0068 = pRVar2;
    uVar5 = *(uint *)&pRVar2[1].field_0x4;
    if (uVar5 == 0) {
      uVar5 = ((uint)pRVar2->field_000E * *(int *)&pRVar2->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)&pRVar2->field_0x8;
    }

    puVar3 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar2));
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    FUN_006b1a50(g_ddxContext_008075A8,3,nullptr,(undefined4 *)&this_00->field_0x4c);
    puVar3 = &this_00->field_0060;

    FUN_006b2330(g_ddxContext_008075A8,puVar3,this_00->field_0064,0x4057ea,this_00->field_0040,
                 this_00->field_0048,(ushort *)this_00->field_0068);

    FUN_006b1b10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,*puVar3,3);

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,*puVar3,0xffffffff,this_00->field_003C,
               this_00->field_0044);
    memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_002C = this_00->field_0008;
    this_00->field_0028 = 0x13;

    FUN_006e6000(this_00,3,1,(undefined4 *)&this_00->field_0x18);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\panel.cpp",0x2a,0,iVar2,"%s",
                             "PanelTy::InitPanel");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\panel.cpp",0x2a);
  return;
}

