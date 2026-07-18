
undefined4 __fastcall FUN_004ecc70(void *param_1)

{
  if (*(int *)((int)param_1 + 0x5ac) == 0x6f) {
    thunk_FUN_0041d3e0(param_1,8);
  }
  *(undefined4 *)((int)param_1 + 0x4d0) = 5000;
  *(undefined4 *)((int)param_1 + 0x4d4) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  return 0;
}

