
int __cdecl FUN_005530e0(int param_1)

{
  int iVar1;
  void *unaff_ESI;
  undefined4 uVar2;
  undefined4 local_50 [16];
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  int local_8;
  
  uVar2 = DAT_00858df8;
  local_8 = 0;
  if (param_1 < 0) {
    return 0;
  }
  DAT_00858df8 = &stack0xffffffac;
  iVar1 = __setjmp3(local_50,0,unaff_ESI,uVar2);
  if (iVar1 == 0) {
    if (DAT_00802a4c == (uint *)0x0) {
      thunk_FUN_005531f0();
    }
    local_8 = thunk_FUN_00553060(param_1);
    if (local_8 == 0) {
      local_8 = thunk_FUN_00552f50(param_1);
      if (local_8 != 0) {
        uStack_e = (undefined2)local_8;
        local_c = (undefined2)((uint)local_8 >> 0x10);
        local_10 = (undefined2)param_1;
        FUN_006ae1c0(DAT_00802a4c,(undefined4 *)&local_10);
      }
    }
    DAT_00858df8 = (undefined1 *)uVar2;
    return local_8;
  }
  DAT_00858df8 = (undefined1 *)uVar2;
  if (local_8 == 0) {
    FUN_006ab060(&local_8);
  }
  return local_8;
}

