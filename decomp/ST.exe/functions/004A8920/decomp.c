
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_optic.cpp
   OpticClassC::GetMessage */

undefined4 __thiscall OpticClassC::GetMessage(OpticClassC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  longlong lVar5;
  InternalExceptionFrame local_6c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  OpticClassC *local_8;
  
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar2 = ReportDebugMessage(s_E____titans_wlad_To_optic_cpp_007ac594,0xa9,0,-1,&DAT_007a4ccc);
    if (iVar2 == 0) {
      RaiseInternalException(-1,0,s_E____titans_wlad_To_optic_cpp_007ac594,0xaa);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_006e5fd0();
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 < 0x105) {
    if (uVar3 != 0x104) {
      if (uVar3 < 4) {
        if (uVar3 == 3) {
          CursorClassTy::DelOpticAcc(DAT_00802a30);
          g_currentExceptionFrame = local_6c.previous;
          return 0;
        }
        if (uVar3 == 0) {
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
            FUN_006ddbe0((int)DAT_00807598);
            FUN_006e1050(DAT_00807598);
          }
          else {
            FUN_006e1460(DAT_00807598,SUB84((double)DAT_008073d0,0),
                         (int)((ulonglong)(double)DAT_008073d0 >> 0x20),
                         SUB84((double)_DAT_008073d4,0),
                         (int)((ulonglong)(double)_DAT_008073d4 >> 0x20));
            DAT_008073d0 = (float)*(double *)((int)DAT_00807598 + 0x98);
            _DAT_008073d4 = (float)*(double *)((int)DAT_00807598 + 0xa0);
            lVar5 = Library::MSVCRT::__ftol();
            DAT_008073d8 = (int)lVar5;
            lVar5 = Library::MSVCRT::__ftol();
            DAT_008073dc = (int)lVar5;
          }
          DAT_0080674c = 1;
          DAT_0080745d = DAT_0080745d + 1;
          g_currentExceptionFrame = local_6c.previous;
          return 0;
        }
        if (uVar3 != 2) {
          g_currentExceptionFrame = local_6c.previous;
          return 0;
        }
        InitOptic(DAT_007fb2a0);
        CursorClassTy::AddOpticAcc(DAT_00802a30);
        goto LAB_004a8b47;
      }
      if (uVar3 == 0x100) {
        thunk_FUN_004a9c80(0);
        uVar3 = DAT_0080743c & 0xff;
        goto LAB_004a8c6a;
      }
      if (uVar3 != 0x101) {
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
    (*DAT_00802a38->vtable->SendMessage)((SystemWithNamedObjClassTy *)DAT_00802a38,(int)local_28);
LAB_004a8b47:
    uVar3 = DAT_0080743c & 0xff;
  }
  else {
    switch(uVar3) {
    case 0x105:
      uVar4 = 1;
      if (DAT_008073fc == 1) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      DAT_008073fc = 1;
      break;
    case 0x106:
      uVar4 = 2;
      if (DAT_008073fc == 2) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      DAT_008073fc = 2;
      thunk_FUN_004a8f20(1);
      goto LAB_004a8c23;
    case 0x107:
      uVar4 = 3;
      if (DAT_008073fc == 3) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      DAT_008073fc = 3;
      break;
    default:
      goto switchD_004a8b81_caseD_108;
    case 0x10f:
      STPlaySystemC::SaveObjData(DAT_00802a38,s_opticsave_007ac5d4,(byte *)&DAT_008073d0,399,0xc);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    thunk_FUN_004a8f20(1);
LAB_004a8c23:
    DAT_0080674c = 2;
    DAT_0080745d = 0;
    local_1c = 0xf;
    local_18 = 0x108;
    local_14 = uVar4;
    (*DAT_00802a38->vtable->SendMessage)((SystemWithNamedObjClassTy *)DAT_00802a38,(int)local_28);
LAB_004a8c49:
    uVar3 = DAT_0080743c & 0xff;
  }
LAB_004a8c6a:
  thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,uVar3);
switchD_004a8b81_caseD_108:
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

