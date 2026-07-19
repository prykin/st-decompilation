
int __cdecl thunk_FUN_005530e0(int param_1)

{
  int iVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 auStack_50 [16];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_8;
  
  pIVar2 = g_currentExceptionFrame;
  iStack_8 = 0;
  if (param_1 < 0) {
    return 0;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  iVar1 = Library::MSVCRT::__setjmp3(auStack_50,0,unaff_ESI,pIVar2);
  if (iVar1 == 0) {
    if (DAT_00802a4c == (uint *)0x0) {
      thunk_FUN_005531f0();
    }
    iStack_8 = thunk_FUN_00553060(param_1);
    if (iStack_8 == 0) {
      iStack_8 = thunk_FUN_00552f50(param_1);
      if (iStack_8 != 0) {
        uStack_e = (undefined2)iStack_8;
        uStack_c = (undefined2)((uint)iStack_8 >> 0x10);
        uStack_10 = (undefined2)param_1;
        Library::DKW::TBL::FUN_006ae1c0(DAT_00802a4c,(undefined4 *)&uStack_10);
      }
    }
    g_currentExceptionFrame = pIVar2;
    return iStack_8;
  }
  g_currentExceptionFrame = pIVar2;
  if (iStack_8 == 0) {
    FUN_006ab060(&iStack_8);
  }
  return iStack_8;
}

