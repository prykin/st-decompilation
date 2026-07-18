
bool FUN_006b55c0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (param_2 + 7U & 0xfffffff8) * param_4 + param_3 ^ 7;
  return (*(byte *)(param_1 + ((int)uVar1 >> 3)) >> (uVar1 & 7) & 1) != 0;
}

