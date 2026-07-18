
void FUN_006b0020(uint *param_1,int *param_2)

{
  uint *puVar1;
  
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  puVar1 = (uint *)FUN_006aac70(param_1[3] * param_1[2] + 0x1c);
  if (puVar1 == (uint *)0x0) {
    return;
  }
  FUN_006affc0(param_1,puVar1,param_2);
  return;
}

