#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_optic.cpp
   OpticClassC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004022CA|004A8920; family_names=OpticClassC::GetMessage; ret4=5;
   direct_offsets={10:1,14:0,18:2,1c:0} */

int __thiscall OpticClassC::GetMessage(OpticClassC *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  InternalExceptionFrame local_6c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  OpticClassC *local_8;

  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_optic.cpp",0xa9,0,-1,"%s");
    if (iVar3 == 0) {
      RaiseInternalException(-1,0,"E:\\__titans\\wlad\\To_optic.cpp",0xaa);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  FUN_006e5fd0(local_8,message);
  SVar1 = message->id;
  if (SVar1 < 0x105) {
    if (SVar1 != MESS_OPTICCLASSC_0104) {
      if (SVar1 < 4) {
        if (SVar1 == MESS_SHARED_0003) {
          CursorClassTy::DelOpticAcc(PTR_00802a30);
          g_currentExceptionFrame = local_6c.previous;
          return 0;
        }
        if (SVar1 == MESS_ID_NONE) {
          if (DAT_008073e0 == 1) {
            thunk_FUN_004ab650();
          }
          if (DAT_0080674c != 2) {
            g_currentExceptionFrame = local_6c.previous;
            return 0;
          }
          if (1 < DAT_0080673c) {
            g_currentExceptionFrame = local_6c.previous;
            return 0;
          }
          if (DAT_0080745d == 0) {
            FUN_006ddbe0((AnonShape_006DDBE0_9835BAB9 *)PTR_00807598);
            FUN_006e1050((AnonShape_006E1050_52F5A113 *)PTR_00807598);
          }
          else {
            FUN_006e1460(PTR_00807598,SUB84((double)DAT_008073d0,0),
                         (int)((ulonglong)(double)DAT_008073d0 >> 0x20),
                         SUB84((double)_DAT_008073d4,0),
                         (int)((ulonglong)(double)_DAT_008073d4 >> 0x20));
            DAT_008073d0 = (float)PTR_00807598->field_0098;
            _DAT_008073d4 = (float)PTR_00807598->field_00A0;
            lVar6 = Library::MSVCRT::__ftol();
            DAT_008073d8 = (int)lVar6;
            lVar6 = Library::MSVCRT::__ftol();
            DAT_008073dc = (int)lVar6;
          }
          DAT_0080674c = 1;
          DAT_0080745d = DAT_0080745d + 1;
          g_currentExceptionFrame = local_6c.previous;
          return 0;
        }
        if (SVar1 != MESS_ID_CREATE) {
          g_currentExceptionFrame = local_6c.previous;
          return 0;
        }
        InitOptic(g_opticClass_007FB2A0);
        CursorClassTy::AddOpticAcc(PTR_00802a30);
        goto LAB_004a8b47;
      }
      if (SVar1 == MESS_OPTICCLASSC_0100) {
        thunk_FUN_004a9c80(0);
        uVar4 = DAT_0080743c & 0xff;
        goto LAB_004a8c6a;
      }
      if (SVar1 != MESS_OPTICCLASSC_0101) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      thunk_FUN_004a9c80(1);
      goto LAB_004a8c49;
    }
    if (DAT_008073fc == 0) {
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    DAT_008073fc = 0;
    thunk_FUN_004a8f20(1);
    DAT_0080674c = 2;
    DAT_0080745d = 0;
    local_1c = 0xf;
    local_18 = 0x108;
    local_14 = 0;
    (*PTR_00802a38->vtable->SendMessage)((SystemWithNamedObjClassTy *)PTR_00802a38,(int)local_28);
LAB_004a8b47:
    uVar4 = DAT_0080743c & 0xff;
  }
  else {
    switch(SVar1) {
    case 0x105:
      uVar5 = 1;
      if (DAT_008073fc == 1) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      DAT_008073fc = 1;
      break;
    case MESS_OPTICCLASSC_0104|MESS_ID_CREATE:
      uVar5 = 2;
      if (DAT_008073fc == 2) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      DAT_008073fc = 2;
      thunk_FUN_004a8f20(1);
      goto LAB_004a8c23;
    case MESS_OPTICCLASSC_0104|MESS_SHARED_0003:
      uVar5 = 3;
      if (DAT_008073fc == 3) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      DAT_008073fc = 3;
      break;
    default:
      goto switchD_004a8b81_caseD_108;
    case MESS_SHARED_010F:
      STPlaySystemC::SaveObjData(PTR_00802a38,"opticsave",(byte *)&DAT_008073d0,399,0xc);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    thunk_FUN_004a8f20(1);
LAB_004a8c23:
    DAT_0080674c = 2;
    DAT_0080745d = 0;
    local_1c = 0xf;
    local_18 = 0x108;
    local_14 = uVar5;
    (*PTR_00802a38->vtable->SendMessage)((SystemWithNamedObjClassTy *)PTR_00802a38,(int)local_28);
LAB_004a8c49:
    uVar4 = DAT_0080743c & 0xff;
  }
LAB_004a8c6a:
  thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,uVar4);
switchD_004a8b81_caseD_108:
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

