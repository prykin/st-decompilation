
void __fastcall FUN_005e5f60(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)param_1 + 0x61);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x69) = *(undefined4 *)(*(int *)((int)param_1 + 0xc) + 0x14);
  *(undefined4 *)((int)param_1 + 0x6d) = 0;
  *(undefined4 *)((int)param_1 + 0x71) = 10;
  *(undefined4 *)((int)param_1 + 0x75) = *(undefined4 *)((int)param_1 + 8);
  FUN_006e60a0(param_1,(undefined4 *)((int)param_1 + 0x61));
  return;
}

