
undefined4 * __fastcall FUN_0064cc90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_LAB_0079d67c;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_1 + 0x23;
  }
  for (iVar1 = 0x127; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  thunk_FUN_006728f0((undefined4 *)&DAT_007d3f78);
  *(undefined4 *)((int)param_1 + 0x5b3) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x52f);
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

