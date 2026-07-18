
undefined4 * __fastcall FUN_006788b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_006e60e0(param_1);
  thunk_FUN_0064cc90(param_1 + 7);
  *param_1 = &PTR_LAB_0079d714;
  param_1[7] = &PTR_LAB_0079d6d4;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)((int)param_1 + 0x5d3);
  }
  for (iVar1 = 0x4a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  *(undefined4 *)((int)param_1 + 0x5d3) = 0x398;
  param_1[400] = 0xff;
  return param_1;
}

