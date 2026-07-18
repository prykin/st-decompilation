
void __fastcall thunk_FUN_00690a40(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)(param_1 + 0x1c) = uVar1;
  *(uint *)(param_1 + 0x89) = (uVar1 >> 0x10 & 7) + 8;
  uVar1 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)(param_1 + 0x1c) = uVar1;
  *(uint *)(param_1 + 0x91) = (uVar1 >> 0x10 & 7) + 8;
  return;
}

