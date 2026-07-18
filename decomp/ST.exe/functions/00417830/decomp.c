
undefined4 __fastcall FUN_00417830(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0xec) == 1) {
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  if (*(int *)(param_1 + 0x88) == 1) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0xec) = 1;
  }
  if (*(int *)(param_1 + 0xf0) == 1) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    return 0;
  }
  if (*(short *)(param_1 + 0x6c) == *(short *)(param_1 + 0x84)) {
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 1;
    return 2;
  }
  sVar2 = *(short *)(param_1 + 0x86);
  sVar1 = sVar2 + *(short *)(param_1 + 0x6c);
  uVar4 = (int)sVar2 >> 0x1f;
  *(short *)(param_1 + 0x6c) = sVar1;
  iVar3 = ((int)sVar2 ^ uVar4) - uVar4;
  if (0x168 - iVar3 < (int)sVar1) {
    *(undefined2 *)(param_1 + 0x6c) = 0;
  }
  if (*(short *)(param_1 + 0x6c) < 0) {
    *(short *)(param_1 + 0x6c) = 0x168 - (short)iVar3;
  }
  return 2;
}

