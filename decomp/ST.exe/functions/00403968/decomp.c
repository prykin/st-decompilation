
void __fastcall thunk_FUN_005943f0(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)param_1 + 0x18);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x20) = *(undefined4 *)(*(int *)((int)param_1 + 0xc) + 0x14);
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 10;
  *(undefined4 *)((int)param_1 + 0x2c) = *(undefined4 *)((int)param_1 + 8);
  FUN_006e60a0(param_1,(undefined4 *)((int)param_1 + 0x18));
  return;
}

