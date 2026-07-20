
undefined4 * __fastcall FUN_0069ffb0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_00693910((AnonShape_00693910_1CC6632C *)((int)param_1 + 0x24e));
  thunk_FUN_00694590((undefined4 *)((int)param_1 + 0x1bef));
  thunk_FUN_00691570((undefined4 *)((int)param_1 + 0x1c03));
  *(undefined4 *)((int)param_1 + 0x53ef) = 0;
  *(undefined4 *)((int)param_1 + 0x53eb) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x53f3);
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)param_1 + 0x54f7);
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x582f);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[6] = 0;
  *(undefined4 *)((int)param_1 + 0x56ff) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x55fb);
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x570b) = 0x32;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}

