
undefined4 * __fastcall FUN_005810d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(param_1);
  *param_1 = &PTR_LAB_0079b68c;
  puVar2 = (undefined4 *)((int)param_1 + 0x1d9);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x1d5) = 0;
  *(undefined4 *)((int)param_1 + 0x207) = 0;
  *(undefined4 *)((int)param_1 + 0x20b) = 0;
  *(undefined4 *)((int)param_1 + 0x20f) = 0;
  return param_1;
}

