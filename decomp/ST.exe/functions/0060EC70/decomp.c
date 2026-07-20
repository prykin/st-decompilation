
undefined4 * __fastcall FUN_0060ec70(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0((STGroupBoatC *)param_1);
  *param_1 = &PTR_thunk_FUN_0060ea30_0079cd94;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((int)param_1 + 0x1d5);
    for (iVar1 = 0x45; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = 0;
    return param_1;
  }
  puVar2 = (undefined4 *)0x0;
  for (iVar1 = 0x45; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  return (undefined4 *)0x0;
}

