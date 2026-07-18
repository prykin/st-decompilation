
int thunk_FUN_004d82b0(int param_1)

{
  if ((DAT_007fa140 / 100 <= DAT_007fa13c) && (param_1 != 0)) {
    DAT_007fa13c = DAT_007fa13c - param_1;
    if (DAT_007fa13c < 0) {
      DAT_007fa13c = 0;
    }
    thunk_FUN_004d8190();
  }
  return DAT_007fa13c;
}

