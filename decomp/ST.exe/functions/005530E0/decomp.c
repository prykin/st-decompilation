
/* [STPrototypeApplier] Propagated return.
   Evidence: 005530E0 returns forwarded through return of FUN_005532f0 @ 0055334B */

byte * __cdecl FUN_005530e0(int param_1)

{
  int iVar1;
  InternalExceptionFrame local_54;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  byte *local_8;

  local_8 = (byte *)0x0;
  if (param_1 < 0) {
    return (byte *)0x0;
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar1 == 0) {
    if (PTR_00802a4c == (DArrayTy *)0x0) {
      thunk_FUN_005531f0();
    }
    local_8 = (byte *)thunk_FUN_00553060(param_1);
    if (local_8 == (byte *)0x0) {
      local_8 = (byte *)thunk_FUN_00552f50(param_1);
      if (local_8 != (byte *)0x0) {
        uStack_e = SUB42(local_8,0);
        local_c = (undefined2)((uint)local_8 >> 0x10);
        local_10 = (undefined2)param_1;
        Library::DKW::TBL::FUN_006ae1c0(&PTR_00802a4c->flags,(undefined4 *)&local_10);
      }
    }
    g_currentExceptionFrame = local_54.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_54.previous;
  if (local_8 == (byte *)0x0) {
    FreeAndNull(&local_8);
  }
  return local_8;
}

