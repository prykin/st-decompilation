
void __fastcall thunk_FUN_00567220(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0xf8b) != 0) {
    FUN_006c1e20();
    puVar2 = (undefined4 *)(param_1 + 0xe0b);
    for (iVar1 = 0x60; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  if (*(uint **)(param_1 + 0xdf7) != (uint *)0x0) {
    FUN_006c2390(*(uint **)(param_1 + 0xdf7));
    *(undefined4 *)(param_1 + 0xdf7) = 0;
  }
  if (*(int *)(param_1 + 0xf8b) != 0) {
    FUN_006c2050();
  }
  *(undefined4 *)(param_1 + 0xf8b) = 0;
  return;
}

