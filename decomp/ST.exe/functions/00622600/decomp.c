
undefined4 * __fastcall FUN_00622600(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(param_1);
  thunk_FUN_004ab810((undefined4 *)((int)param_1 + 0x1d5));
  *(undefined4 *)((int)param_1 + 0x1d5) = &PTR_LAB_0079d05c;
  *param_1 = &STMineSetCVTable;
  puVar2 = (undefined4 *)((int)param_1 + 0x25e);
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x2ba) = 0xffffffff;
  return param_1;
}

