#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldboat.cpp
   BldBoatPanelTy::GetMessage */

undefined4 __thiscall
BldBoatPanelTy::GetMessage(BldBoatPanelTy *this,AnonShape_004EF6D0_502EEF25 *param_1)

{
  uint uVar1;
  code *pcVar2;
  ProdPanelTy *this_00;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  InternalExceptionFrame local_58;
  undefined1 local_14;
  undefined3 uStack_13;
  undefined1 local_10;
  short sStack_f;
  undefined1 uStack_d;
  undefined2 local_c;
  undefined1 local_a;
  ProdPanelTy *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = (ProdPanelTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_bldboat_cpp_007c17b4,0xec,0,iVar4,&DAT_007a4ccc,
                               s_BldBoatPanelTy__GetMessage_007c1894);
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_bldboat_cpp_007c17b4,0xec);
    return 0xffff;
  }
  if (param_1->field_0010 == 2) {
    ProdPanelTy::PreInitProdPanel(local_8);
  }
  ProdPanelTy::GetMessage(this_00,(int)param_1);
  uVar1 = param_1->field_0010;
  if (uVar1 < 0xb203) {
    if (uVar1 == 0xb202) {
      ProdPanelTy::PaintTab(this_00,(AnonShape_0053FCD0_D10A885A *)param_1,&LAB_00402e7d);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (uVar1 == 2) {
      InitBldBoatPanel((BldBoatPanelTy *)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (uVar1 == 3) {
      thunk_FUN_004eef20((int)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (uVar1 == 0xb201) {
      this_00[1].field_0xd4 = this_00[1].field_0xd3;
      this_00[1].field_0xd3 = *(char *)param_1->field_0014 + -1;
      thunk_FUN_005252c0(0xae);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(this_00->field_0000 + 0x1c))();
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else {
    switch(uVar1) {
    case 0xc09f:
    case 0xc0a0:
    case 0xc0a1:
    case 0xc0a2:
    case 0xc0a3:
      iVar4 = *(int *)(&this_00[1].field_0xd5 + (uint)(byte)this_00[1].field_0xd3 * 4);
      if ((iVar4 == 0) ||
         (iVar6 = uVar1 + *(int *)&this_00->field_0x199, *(uint *)(iVar4 + 0xc) <= iVar6 - 0xc09fU))
      {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)((iVar6 + -0xc09f) * *(int *)(iVar4 + 8) + *(int *)(iVar4 + 0x1c));
      }
      if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) != '\0')) {
        sStack_f = 0;
        uStack_d = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_14 = CONCAT31((int3)*puVar5,1);
        local_10 = (undefined1)((uint)*puVar5 >> 0x18);
        local_c = 0;
        local_a = 0;
        if (param_1->field_0018 == 0) {
          uVar3 = GetAsyncKeyState(0x10);
          sStack_f = (-(ushort)((uVar3 & 0x8000) != 0) & 9) + 1;
        }
        else {
          uVar3 = GetAsyncKeyState(0x10);
          sStack_f = (-(ushort)((uVar3 & 0x8000) != 0) & 0xfff7) - 1;
        }
        uStack_d = 0xff;
        local_c = 0xffff;
        local_a = 0xff;
        thunk_FUN_0054edf0((undefined4 *)0x1e,(undefined4 *)&local_14,0,0xffffffff);
        thunk_FUN_005252c0(0xae);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      break;
    case 0xc0a4:
      *(undefined4 *)&this_00->field_0x199 = param_1->field_0014;
      thunk_FUN_004ef140((AnonShape_004EF140_16642BA0 *)this_00);
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    case 0xc0af:
    case 0xc0b0:
    case 0xc0b1:
    case 0xc0b2:
    case 0xc0b3:
      PaintBldBut((BldBoatPanelTy *)this_00,(AnonShape_004EF320_444F9AB1 *)param_1);
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

