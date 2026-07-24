#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldboat.cpp
   BldBoatPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004EF6D0; family_names=BldBoatPanelTy::GetMessage; ret4=8;
   direct_offsets={10:2,14:2,18:1,1c:2} */

int __thiscall BldBoatPanelTy::GetMessage(BldBoatPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  BldBoatPanelTy *this_00;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  InternalExceptionFrame local_58;
  undefined1 local_14;
  undefined3 uStack_13;
  undefined1 local_10;
  short sStack_f;
  undefined1 uStack_d;
  undefined2 local_c;
  undefined1 local_a;
  BldBoatPanelTy *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\bldboat.cpp",0xec,0,iVar4,"%s",
                               "BldBoatPanelTy::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\bldboat.cpp",0xec);
    return 0xffff;
  }
  if (message->id == MESS_ID_CREATE) {
    ProdPanelTy::PreInitProdPanel((ProdPanelTy *)local_8);
  }
  ProdPanelTy::GetMessage((ProdPanelTy *)this_00,message);
  SVar1 = message->id;
  if (SVar1 < 0xb203) {
    if (SVar1 == MESS_SHARED_B202) {
      ProdPanelTy::PaintTab
                ((ProdPanelTy *)this_00,(AnonShape_0053FCD0_D10A885A *)message,thunk_FUN_004ef5f0);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_CREATE) {
      InitBldBoatPanel(this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_SHARED_0003) {
      thunk_FUN_004eef20((int)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_SHARED_B201) {
      this_00->field_0279 = this_00->field_0278;
      this_00->field_0278 = *(char *)(message->arg0).ptr + -1;
      thunk_FUN_005252c0(0xae);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(this_00->field_0000 + 0x1c))();
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else {
    switch(SVar1) {
    case MESS_SHARED_C09F:
    case MESS_BEHPANELTY_C0A0:
    case MESS_FSGSTY_C0A1:
    case MESS_SHARED_C0A2:
    case MESS_SHARED_C0A3:
      iVar4 = (&this_00->field_027A)[(byte)this_00->field_0278];
      if ((iVar4 == 0) ||
         (iVar6 = SVar1 + this_00->field_0199, *(uint *)(iVar4 + 0xc) <= iVar6 - 0xc09fU)) {
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
        if ((message->arg1).u32 == 0) {
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
    case MESS_BLDLABPANELTY_C0A4:
      this_00->field_0199 = message->arg0;
      sub_004EF140(this_00);
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    case MESS_INTERCOMPANELTY_C0AF:
    case 0xc0b0:
    case MESS_BEHPANELTY_C0B1:
    case 0xc0b2:
    case MESS_BLDLABPANELTY_C0B3:
      PaintBldBut(this_00,(AnonShape_004EF320_444F9AB1 *)message);
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

