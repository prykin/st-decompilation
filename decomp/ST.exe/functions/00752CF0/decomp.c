
void FUN_00752cf0(int param_1,int param_2,int param_3,char param_4,uint *param_5)

{
  uint uVar1;
  
  if (param_2 == 0) {
    param_2 = FUN_006b4fa0(param_1);
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0xe) * *(int *)(param_1 + 4) + 0x1f >> 3 & 0x1ffffffc;
  FUN_00752a60((*(int *)(param_1 + 8) + -1) * uVar1 + param_2,-uVar1,*(int *)(param_1 + 4),
               *(int *)(param_1 + 8),param_3,param_4,param_5);
  return;
}

