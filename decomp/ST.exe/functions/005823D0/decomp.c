
undefined4 * __fastcall FUN_005823d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(param_1);
  thunk_FUN_004ab810((undefined4 *)((int)param_1 + 0x1d5));
  *(undefined4 *)((int)param_1 + 0x1d5) = &PTR_LAB_0079b8ec;
  *param_1 = &PTR_LAB_0079b78c;
  puVar2 = (undefined4 *)((int)param_1 + 0x256);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x241) = 0xff;
  *(undefined4 *)((int)param_1 + 0x231) = 0;
  *(undefined4 *)((int)param_1 + 0x235) = 0;
  *(undefined4 *)((int)param_1 + 0x239) = 0;
  *(undefined4 *)((int)param_1 + 0x23d) = 0;
  *(undefined4 *)((int)param_1 + 0x247) = 0;
  *(undefined4 *)((int)param_1 + 0x24b) = 0;
  *(undefined4 *)((int)param_1 + 0x252) = 0;
  return param_1;
}

