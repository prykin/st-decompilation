
void FUN_00414980(int param_1)

{
  uint uVar1;
  
  Library::MSVCRT::thunk_FUN_006a49c0(DAT_007f4d50,2);
  uVar1 = param_1 * 4 + 8;
  DAT_007f4d50 = (undefined4 *)
                 thunk_FUN_006a3c10(uVar1,2,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0x55d);
  if (DAT_007f4d50 == (undefined4 *)0x0) {
    RaiseInternalException(-2,DAT_007ed77c,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0x55e);
    return;
  }
  FUN_00414a70(0,param_1);
  Library::MSVCRT::thunk_FUN_006a49c0(DAT_007f4d54,2);
  DAT_007f4d54 = (undefined4 *)
                 thunk_FUN_006a3c10(uVar1,2,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0x566);
  if (DAT_007f4d54 == (undefined4 *)0x0) {
    RaiseInternalException(-2,DAT_007ed77c,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0x567);
    return;
  }
  FUN_00414a70(1,param_1);
  return;
}

