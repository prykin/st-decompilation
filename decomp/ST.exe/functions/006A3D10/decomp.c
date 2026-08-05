
/* [STPrototypeApplier] Propagated return.
   Evidence: 006A3D10 returns return of Library::MSVCRT::FUN_006a3d40 @ 006A3D26 */

int * __cdecl FUN_006a3d10(uint param_1)

{
  int *piVar1;

  piVar1 = Library::MSVCRT::thunk_FUN_006a3d40(param_1,1,nullptr,0);
  return piVar1;
}

