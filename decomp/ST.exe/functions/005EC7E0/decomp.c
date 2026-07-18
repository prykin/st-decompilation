
undefined4 * __fastcall FUN_005ec7e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(param_1);
  thunk_FUN_004ab810((undefined4 *)((int)param_1 + 0x1d5));
  *(undefined4 *)((int)param_1 + 0x1d5) = &PTR_LAB_0079c578;
  *param_1 = &PTR_thunk_FUN_0041e530_0079c3ec;
  puVar2 = (undefined4 *)((int)param_1 + 0x231);
  for (iVar1 = 0x3d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined1 *)((int)param_1 + 0x30e) = 0xff;
  param_1[0xc2] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xc3) = 0xff;
  return param_1;
}

