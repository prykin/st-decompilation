
void __cdecl Library::MSVCRT::thunk_FUN_006a4950(undefined4 *param_1)

{
  DAT_00854a4c = 0;
  thunk_FUN_006a49c0(param_1,1);
  if (DAT_00854a4c != 0) {
    RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Crt__Dbgheap_c_007ec1d0,0x403);
  }
  DAT_00854a4c = 0;
  return;
}

