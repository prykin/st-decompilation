
undefined4 __fastcall thunk_FUN_004e8cc0(int *param_1)

{
  int iVar1;
  
  param_1[0x134] = 0;
  iVar1 = *(int *)(DAT_00802a38 + 0xe4);
  param_1[0x138] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x135] = iVar1;
  param_1[0x136] = 0xffff;
  if (((*(int *)((int)param_1 + 0x231) == 1) || (*(int *)((int)param_1 + 0x231) == 3)) &&
     (param_1[0x16b] == 0x6c)) {
    thunk_FUN_004e8dc0(param_1);
  }
  return 0;
}

