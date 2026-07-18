
void FUN_006b2410(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  if ((param_2 < *(uint *)(param_1 + 0x1a0)) &&
     (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4), (*puVar1 & 0xc000) == 0xc000)) {
    puVar1[0x30] = param_3;
    FUN_006b23e0(param_1,puVar1);
  }
  return;
}

