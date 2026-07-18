
uint __cdecl FUN_006f2d10(byte *param_1,byte *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_204 [128];
  
  if (*param_2 != *param_1) {
    return (uint)*param_2 - (uint)*param_1;
  }
  if (param_2[1] == 0) {
    return 0;
  }
  puVar4 = local_204;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  sVar1 = *(short *)(param_1 + 0x16);
  puVar4 = (uint *)(param_1 + 0x18);
  puVar5 = local_204;
  for (uVar3 = (uint)(int)sVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = (int)sVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar5 = (char)*puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  uVar3 = FUN_006f2cb0(local_204,(char *)(param_2 + 1));
  return uVar3;
}

