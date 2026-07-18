
undefined4 FUN_0042b760(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)&DAT_007f4e24 + (char)param_1 * 0xa62 + 1);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if ((uVar2 != 0) && ((param_2 & 0xffff) < uVar2)) {
    FUN_006acc70(iVar1,param_2 & 0xffff,&param_1);
    return param_1;
  }
  return 0;
}

