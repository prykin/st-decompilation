
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004CCC10 -> 004B7080 @ 004CCEF1 | 00522810 -> 004B7080 @ 00522AFA | 00652810 ->
   004B7080 @ 0065555A */

int FUN_004b7080(uint param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int)&DAT_007f5792 + (char)param_1 * 0xa62);
  *piVar1 = *(int *)((int)&DAT_007f5792 + (char)param_1 * 0xa62) + param_2;
  if (param_2 != 0) {
    thunk_FUN_004b7750(param_1);
  }
  return *piVar1;
}

