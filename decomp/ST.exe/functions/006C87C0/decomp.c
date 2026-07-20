
undefined4 FUN_006c87c0(int param_1,uint param_2)

{
  LPVOID *ppvVar1;
  
  if (param_2 < *(uint *)(param_1 + 8)) {
    ppvVar1 = (LPVOID *)(*(int *)(param_1 + 0x14) + param_2 * 4);
    if (*ppvVar1 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar1);
    }
    return 0;
  }
  return 0xfffffffc;
}

