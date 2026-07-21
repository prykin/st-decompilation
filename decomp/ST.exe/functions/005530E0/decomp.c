
int __cdecl FUN_005530e0(int param_1)

{
  int iVar1;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar2;
  undefined4 local_50 [16];
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  void *local_8;
  
  pIVar2 = g_currentExceptionFrame;
  local_8 = (void *)0x0;
  if (param_1 < 0) {
    return 0;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffac;
  iVar1 = Library::MSVCRT::__setjmp3(local_50,0,unaff_ESI,pIVar2);
  if (iVar1 == 0) {
    if (PTR_00802a4c == (AnonShape_GLOBAL_00802A4C_E3045C67 *)0x0) {
      thunk_FUN_005531f0();
    }
    local_8 = (void *)thunk_FUN_00553060(param_1);
    if (local_8 == (void *)0x0) {
      local_8 = (void *)thunk_FUN_00552f50(param_1);
      if (local_8 != (void *)0x0) {
        uStack_e = SUB42(local_8,0);
        local_c = (undefined2)((uint)local_8 >> 0x10);
        local_10 = (undefined2)param_1;
        Library::DKW::TBL::FUN_006ae1c0((uint *)PTR_00802a4c,(undefined4 *)&local_10);
      }
    }
    g_currentExceptionFrame = pIVar2;
    return (int)local_8;
  }
  g_currentExceptionFrame = pIVar2;
  if (local_8 == (void *)0x0) {
    FreeAndNull(&local_8);
  }
  return (int)local_8;
}

