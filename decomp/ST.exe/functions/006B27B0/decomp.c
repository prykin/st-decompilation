
void FUN_006b27b0(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  
  if ((param_2 < *(uint *)(param_1 + 0x1a0)) &&
     (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4), (*puVar1 & 0xc000) == 0x8000)) {
    *param_3 = puVar1[0x2e];
    *param_4 = puVar1[0x2f];
  }
  return;
}

