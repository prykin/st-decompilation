
bool FUN_006b33f0(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    bVar1 = (**(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4) & 0x8020) == 0x8020;
  }
  return bVar1;
}

