
uint FUN_006b2850(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4);
    uVar2 = *puVar1;
    if ((uVar2 & 0xc000) == 0xc000) {
      uVar3 = ~uVar2 >> 0x11 & 1;
      *puVar1 = uVar2 & 0xfffdffff;
      if (param_3 == 0) {
        *puVar1 = uVar2 & 0xfffdffff | 0x20000;
      }
      FUN_006b23e0(param_1,puVar1);
    }
  }
  return uVar3;
}

