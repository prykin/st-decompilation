
undefined4 FUN_006c87c0(int param_1,uint param_2)

{
  int *piVar1;
  
  if (param_2 < *(uint *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x14) + param_2 * 4);
    if (*piVar1 != 0) {
      FUN_006ab060(piVar1);
    }
    return 0;
  }
  return 0xfffffffc;
}

