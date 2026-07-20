
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DoLogon */

void __thiscall FSGSTy::DoLogon(FSGSTy *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  StartSystemTy *pSVar3;
  code *pcVar4;
  CursorClassTy *this_00;
  FSGSTy *pFVar5;
  int errorCode;
  int iVar6;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar7;
  undefined4 local_58 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  FSGSTy *local_8;
  
  pIVar7 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_58,0,unaff_ESI,pIVar7);
  this_00 = PTR_00802a30;
  if (errorCode == 0) {
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      uVar1 = PTR_00802a30->field_00C9;
      uVar2 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 1;
      this_00->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_00,CASE_0,uVar2,uVar1);
      CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_0xd2 = 0;
      *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
    }
    pFVar5 = local_8;
    (**(code **)(local_8->field_0000 + 8))();
    pFVar5->field_1A61 = 2;
    pSVar3 = pFVar5->field_1A5B;
    if (pSVar3->field_02E6 != (MMsgTy *)0x0) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      thunk_FUN_005b8f40(pSVar3->field_02E6,&local_18);
    }
    g_currentExceptionFrame = pIVar7;
    return;
  }
  g_currentExceptionFrame = pIVar7;
  iVar6 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x918,0,errorCode,
                             &DAT_007a4ccc,s_FSGSTy__DoLogon_007cc3f4);
  if (iVar6 != 0) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x918);
  return;
}

