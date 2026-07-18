
undefined4 * __fastcall FUN_00589990(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(param_1);
  thunk_FUN_004ab810((undefined4 *)((int)param_1 + 0x1d5));
  *(undefined4 *)((int)param_1 + 0x1d5) = &PTR_LAB_0079bd18;
  *param_1 = &PTR_LAB_0079bbb8;
  *(undefined4 *)((int)param_1 + 0x249) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x285);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

