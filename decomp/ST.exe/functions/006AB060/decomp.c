
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006C2050 -> 006AB060 @ 006C212A */

void FUN_006ab060(LPVOID *param_1)

{
  if (*param_1 != (undefined4 *)0x0) {
    Library::MSVCRT::thunk_FUN_006a4950(*param_1);
    *param_1 = (LPVOID)0x0;
  }
  return;
}

