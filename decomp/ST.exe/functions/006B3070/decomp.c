
void FUN_006b3070(int param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_4 < 0) {
    if (((param_2 < *(uint *)(param_1 + 0x1a0)) &&
        (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4),
        (*puVar1 & 0x4008000) == 0x4008000)) &&
       (uVar2 = *(uint *)(puVar1[0x34] + param_3 * 4), -1 < (int)uVar2)) {
      FUN_006b2020(param_1,uVar2,-param_4);
    }
  }
  return;
}

