
uint FUN_006b3ab0(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_2 < *(uint *)(param_1 + 0x1a0)) &&
     (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4), (*puVar1 & 0x8000) != 0)) {
    uVar2 = puVar1[0x31];
  }
  return uVar2;
}

