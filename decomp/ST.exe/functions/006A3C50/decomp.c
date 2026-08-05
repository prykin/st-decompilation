
/* [STPrototypeApplier] Propagated return.
   Evidence: 006A3C50 returns return of Library::MSVCRT::FUN_006a3c80 @ 006A3C6A */

int * __cdecl FUN_006a3c50(uint param_1,int param_2)

{
  int *piVar1;

  piVar1 = Library::MSVCRT::thunk_FUN_006a3c80(param_1,param_2,1,nullptr,0);
  return piVar1;
}

