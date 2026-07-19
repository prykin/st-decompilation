
undefined4 * __fastcall FUN_00639480(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(param_1);
  thunk_FUN_004ab810((undefined4 *)((int)param_1 + 0x1d5));
  *(undefined4 *)((int)param_1 + 0x1d5) = &PTR_LAB_0079d338;
  *param_1 = &PTR_thunk_FUN_00638ca0_0079d1d8;
  puVar2 = (undefined4 *)((int)param_1 + 0x231);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x272);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined1 *)(param_1 + 0x9c) = 1;
  *(undefined1 *)((int)param_1 + 0x26f) = 0;
  *(undefined1 *)((int)param_1 + 0x271) = 0;
  return param_1;
}

