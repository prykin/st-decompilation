
bool FUN_006b28c0(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = true;
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4);
    uVar2 = *puVar1;
    if ((uVar2 & 0xc000) == 0xc000) {
      bVar3 = (uVar2 & 0x40020000) == 0x40020000;
      *puVar1 = uVar2 & 0xbffdffff;
      if (param_3 != 0) {
        *puVar1 = uVar2 & 0xbffdffff | 0x40020000;
      }
      FUN_006b23e0(param_1,puVar1);
    }
  }
  return bVar3;
}

