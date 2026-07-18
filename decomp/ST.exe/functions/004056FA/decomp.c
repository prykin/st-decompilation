
int __fastcall thunk_FUN_0058ff70(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_00802a38 + 0xe4);
  switch(*(undefined4 *)(param_1 + 599)) {
  case 0:
    uVar1 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(param_1 + 0x1c) = uVar1;
    return iVar2 + 1 + (uVar1 >> 0x10) % 5;
  case 6:
    uVar1 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(param_1 + 0x1c) = uVar1;
    iVar2 = iVar2 + 0xf + (uVar1 >> 0x10 & 0xf);
  }
  return iVar2;
}

