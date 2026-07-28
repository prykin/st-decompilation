
/* [STPrototypeApplier] Propagated return.
   Evidence: 004D8080 returns zeroed full register at 004D80B7 @ 004D80BB */

uint FUN_004d8080(char param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 0x44 + 0x7f55fa + param_1 * 0xa62) = param_3;
  thunk_FUN_004d78e0(param_1);
  return 0;
}

