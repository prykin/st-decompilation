
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::InitMTest */

void __thiscall MTestTy::InitMTest(MTestTy *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  MTestTy *this_01;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined4 local_44c [256];
  InternalExceptionFrame local_4c;
  MTestTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      if (*(int *)&DAT_00802a30[1].field_0x45 == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)&DAT_00802a30[1].field_0x49);
      }
      else if (DAT_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)DAT_00802a30->field_0060,DAT_00802a30->field_001C);
      }
    }
    iVar4 = FUN_0070a9f0(DAT_00806780,s_LOADSINGLE_007cc79c,0,1);
    this_01 = local_8;
    *(int *)&local_8->field_0x5d = iVar4;
    FUN_006bc360(iVar4,local_44c,(int *)0x0);
    *(undefined4 *)(DAT_0081176c + 0x140) = 0x1f;
    FUN_00718780((int)local_44c,0,0x100,0x8b,0x15,(undefined4 *)(DAT_0081176c + 0x144));
    puVar6 = (undefined4 *)&this_01->field_0x61;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)&this_01->field_0x71 = 0x13;
    *(undefined4 *)&this_01->field_0x75 = *(undefined4 *)&this_01->field_0x8;
    FUN_006e6000(this_01,3,1,(undefined4 *)&this_01->field_0x61);
    if (*(MMsgTy **)(DAT_0081176c + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(*(MMsgTy **)(DAT_0081176c + 0x2e6),0,0,1);
      MMsgTy::HideSprites(*(MMsgTy **)(DAT_0081176c + 0x2e6));
    }
    thunk_FUN_0055dbf0(DAT_0080759c,1,0);
    PaintMTest(this_01);
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)&this_01->field_0x5d,10,2);
    this_00 = DAT_00802a30;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar1 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
      uVar2 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
      DAT_00802a30[0xb].field_0x47 = 1;
      *(undefined2 *)&this_00[0xb].field_0x48 = 0xffff;
      CursorClassTy::SetGCType(this_00,CASE_0,uVar2,uVar1);
      CursorClassTy::DrawSprite
                (this_00,*(int *)((int)&this_00[1].field_0060 + 1),*(int *)&this_00[2].field_0x1);
      this_00[2].field_0xa = 0;
      *(undefined4 *)&this_00[0xc].field_0x2f = 0xffffffff;
    }
    thunk_FUN_00540dc0(1,*(undefined4 *)&this_01->field_0x8,2,100,2,1,0,0,0,0,0,0);
    thunk_FUN_00540dc0(1,*(undefined4 *)&this_01->field_0x8,2,0x62,2,0x1c,0,0,0,0,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_test_obj_cpp_007cdcbc,0x31,0,iVar4,&DAT_007a4ccc,
                             s_MTestTy__InitMTest_007cdce4);
  if (iVar5 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_test_obj_cpp_007cdcbc,0x31);
  return;
}

