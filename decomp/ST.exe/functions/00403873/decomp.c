
void thunk_FUN_00577280(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this;
  int errorCode;
  void *this_00;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 auStack_44 [16];
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  errorCode = Library::MSVCRT::__setjmp3(auStack_44,0,unaff_ESI,pIVar5);
  if (errorCode == 0) {
    this_00 = (void *)Library::MSVCRT::FUN_0072e530(0x435);
    if (this_00 == (void *)0x0) {
      DAT_0081163c = (int *)0x0;
    }
    else {
      DAT_0081163c = thunk_FUN_00576dd0(this_00,DAT_00806728);
    }
    if (DAT_0081163c == (int *)0x0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_tsystem_cpp_007cab5c,0xb1);
    }
    DAT_0081163c[0x10a] = 0;
    (**(code **)*DAT_0081163c)();
    AppClassTy::AddSystem((AppClassTy *)&DAT_00807620,DAT_0081163c,0);
    DAT_0081163c[0x10a] = 1;
    this = DAT_00802a30;
    uVar1 = *(undefined4 *)(DAT_00802a30 + 0xc9);
    uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
    DAT_00802a30[0x493] = (CursorClassTy)0x2;
    *(undefined2 *)(this + 0x494) = 0xffff;
    CursorClassTy::SetGCType(this,0,uVar2,uVar1);
    CursorClassTy::DrawSprite(this,*(int *)(this + 0xc5),*(int *)(this + 0xc9));
    this[0xd2] = (CursorClassTy)0x0;
    *(undefined4 *)(this + 0x4df) = 0xffffffff;
    g_currentExceptionFrame = pIVar5;
    return;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0xbb,0,errorCode,&DAT_007a4ccc,
                             s_CreateGameSystem_007cac34);
  if (iVar4 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_tsystem_cpp_007cab5c,0xbb);
  return;
}

