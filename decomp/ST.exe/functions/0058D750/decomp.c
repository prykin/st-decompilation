
undefined4 * __fastcall FUN_0058d750(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(param_1);
  thunk_FUN_004ab810((undefined4 *)((int)param_1 + 0x1d5));
  *(undefined4 *)((int)param_1 + 0x1d5) = &PTR_LAB_0079bfe0;
  *param_1 = &PTR_LAB_0079be80;
  *(undefined4 *)((int)param_1 + 599) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x25b);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x23d) = 0;
  *(undefined4 *)((int)param_1 + 0x249) = 0xff;
  return param_1;
}

