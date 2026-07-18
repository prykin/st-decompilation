
void __fastcall thunk_FUN_00506040(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x54c);
  for (iVar2 = 0x46; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (*(char *)(param_1 + 0xbfa) == '\x01') {
    if (DAT_0080874e == '\x03') {
      *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x50) + 0x81;
      *(int *)(param_1 + 0x56c) = *(int *)(param_1 + 0xa8) + 8;
      *(undefined4 *)(param_1 + 0x570) = 100;
      *(undefined4 *)(param_1 + 0x574) = 0x3c;
      uVar1 = FUN_0070b3a0(*(int *)(param_1 + 0x77c),1);
      *(undefined4 *)(param_1 + 0x578) = uVar1;
      *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(param_1 + 0x570);
      *(undefined4 *)(param_1 + 0x580) = 0x4e87;
      *(int *)(param_1 + 0x584) = *(int *)(param_1 + 0x50) + 199;
      *(int *)(param_1 + 0x588) = *(int *)(param_1 + 0xa8) + 6;
      *(undefined4 *)(param_1 + 0x58c) = 0x20;
      *(undefined4 *)(param_1 + 0x590) = 0x35;
      uVar1 = FUN_0070b3a0(*(int *)(param_1 + 0x77c),3);
      *(undefined4 *)(param_1 + 0x594) = uVar1;
      *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_1 + 0x58c);
      *(undefined4 *)(param_1 + 0x59c) = 0x2ef0;
      return;
    }
    *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_1 + 0xac);
    *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0x580) = 0x4e87;
  }
  return;
}

