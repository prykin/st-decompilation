
undefined4 FUN_006a5eb0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_4 - param_1;
  if ((((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 2) &&
      (uVar2 = param_5 - param_2, (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 2))
     && (uVar1 = param_6 - param_3, (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) < 2))
  {
    return *(undefined4 *)(PTR_DAT_007ed714 + ((uVar2 + uVar1 * 3) * 3 + uVar3) * 4);
  }
  return 0xffe;
}

