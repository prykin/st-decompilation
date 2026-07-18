
uint FUN_006b6500(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = uVar1 & 0xfffffffd;
  *(uint *)(param_1 + 4) = uVar2;
  if (param_2 != 0) {
    *(uint *)(param_1 + 4) = uVar2 | 2;
  }
  return uVar1 >> 1 & 1;
}

