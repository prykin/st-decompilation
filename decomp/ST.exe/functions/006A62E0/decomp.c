
int FUN_006a62e0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  iVar1 = FUN_006a5f20(param_1,param_2,param_3,param_4,param_5,param_6,(int *)0x0);
  if (0x19 < iVar1) {
    return 0xffe;
  }
  return (int)(&SHORT_007ed576)[iVar1 * 4];
}

