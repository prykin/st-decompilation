
undefined4 * __fastcall FUN_0057f1d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(param_1);
  thunk_FUN_004ab810((undefined4 *)((int)param_1 + 0x1d5));
  *(undefined4 *)((int)param_1 + 0x1d5) = &PTR_LAB_0079b688;
  *param_1 = &PTR_LAB_0079b528;
  puVar2 = (undefined4 *)((int)param_1 + 0x231);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x261) = 0;
  *(undefined4 *)((int)param_1 + 0x259) = 0xffffffff;
  return param_1;
}

