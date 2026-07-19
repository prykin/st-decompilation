
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::JoinChannel */

void __thiscall FSGSTy::JoinChannel(FSGSTy *this,void *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int errorCode;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_7c;
  undefined4 local_38 [11];
  undefined1 local_b;
  FSGSTy *local_8;
  
  if (this->field_1A5F == '\x06') {
    this->field_1A60 = 0;
    local_7c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_7c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = DAT_00802a30;
    if (errorCode == 0) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar4 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
        uVar2 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
        DAT_00802a30[0xb].field_0x47 = 1;
        *(undefined2 *)&this_00[0xb].field_0x48 = 0xffff;
        CursorClassTy::SetGCType(this_00,CASE_0,uVar2,uVar4);
        CursorClassTy::DrawSprite
                  (this_00,*(int *)((int)&this_00[1].field_0060 + 1),*(int *)&this_00[2].field_0x1);
        this_00[2].field_0xa = 0;
        *(undefined4 *)&this_00[0xc].field_0x2f = 0xffffffff;
      }
      FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0xf3);
      this_01 = local_8;
      thunk_FUN_00540620(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',
                         *(BITMAPINFO **)&local_8->field_0x1e9a);
      *(undefined4 *)(this_01->field_1EA6 + 0xc) = 0;
      local_b = 1;
      Library::DKW::TBL::FUN_006ae1c0((uint *)this_01->field_1EA6,local_38);
      *(undefined4 *)&this_01->field_0x2d = 0x28;
      puVar1 = &this_01->field_0x1d;
      *(undefined4 *)&this_01->field_0x31 = *(undefined4 *)(this_01->field_1EA6 + 0xc);
      *(undefined2 *)&this_01->field_0x35 = 1;
      FUN_006e6080(this_01,2,*(undefined4 *)&this_01->field_0x1b20,(undefined4 *)puVar1);
      *(undefined4 *)&this_01->field_0x2d = 0x20;
      if ((*(int *)(this_01->field_1EA6 + 0xc) == 0) || (*(int *)&this_01->field_0x1a6b == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined4 *)&this_01->field_0x31 = uVar4;
      FUN_006e6080(this_01,2,*(undefined4 *)&this_01->field_0x1b20,(undefined4 *)puVar1);
      *(undefined4 *)&this_01->field_0x2d = 0x20;
      *(undefined4 *)&this_01->field_0x31 = 0;
      if (*(int *)&this_01->field_0x1b24 != 0) {
        FUN_006e6080(this_01,2,*(int *)&this_01->field_0x1b24,(undefined4 *)puVar1);
      }
      *(undefined4 *)&this_01->field_0x31 = 1;
      if ((*(int *)&this_01->field_0x1b18 != 0) && (*(int *)&this_01->field_0x1a6b != 0)) {
        FUN_006e6080(this_01,2,*(int *)&this_01->field_0x1b18,(undefined4 *)puVar1);
      }
      g_currentExceptionFrame = local_7c.previous;
      return;
    }
    g_currentExceptionFrame = local_7c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa7d,0,errorCode,
                               &DAT_007a4ccc,s_FSGSTy__JoinChannel_007cc520);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa7d);
  }
  return;
}

