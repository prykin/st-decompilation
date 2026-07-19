
undefined4 * __fastcall FUN_00584970(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(param_1);
  thunk_FUN_004ab810((undefined4 *)((int)param_1 + 0x1d5));
  *(undefined4 *)((int)param_1 + 0x1d5) = &PTR_LAB_0079ba50;
  *param_1 = &STLBombCVTable;
  *(undefined4 *)((int)param_1 + 0x231) = 2;
  *(undefined4 *)((int)param_1 + 0x235) = 0;
  *(undefined4 *)((int)param_1 + 0x239) = 0;
  *(undefined4 *)((int)param_1 + 0x23d) = 0;
  *(undefined4 *)((int)param_1 + 0x241) = 0;
  *(undefined4 *)((int)param_1 + 0x245) = 0;
  *(undefined4 *)((int)param_1 + 0x249) = 0;
  *(undefined4 *)((int)param_1 + 0x24d) = 0;
  *(undefined4 *)((int)param_1 + 0x251) = 0;
  *(undefined1 *)((int)param_1 + 0x255) = 0;
  *(undefined1 *)((int)param_1 + 0x256) = 0;
  *(undefined1 *)((int)param_1 + 599) = 0;
  puVar2 = param_1 + 0x96;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  return param_1;
}

