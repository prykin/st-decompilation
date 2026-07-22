
/* [STPrototypeApplier] Propagated return.
   Evidence: 0064A910 returns used as parameter 0 of FUN_0064a970 @ 00672042 | 0064A910 returns used
   as parameter 1 of SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::FUN_0066acc0 @
   0067201F */

char * __cdecl FUN_0064a910(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 4))) {
    return (char *)(*(int *)(param_1 + 8) + param_2 * 5);
  }
  return (char *)0x0;
}

