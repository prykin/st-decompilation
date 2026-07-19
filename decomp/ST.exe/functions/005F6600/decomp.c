
undefined4 * __fastcall FUN_005f6600(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(param_1);
  thunk_FUN_004ab810((undefined4 *)((int)param_1 + 0x1d5));
  *param_1 = &STColl3CVTable;
  *(undefined4 *)((int)param_1 + 0x1d5) = &PTR_LAB_0079c5a8;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)((int)param_1 + 0x231);
  }
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x2b7) = 0xffffffff;
  return param_1;
}

