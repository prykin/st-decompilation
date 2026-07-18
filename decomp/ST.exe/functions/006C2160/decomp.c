
int FUN_006c2160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  int iVar1;
  
  if (DAT_008568bc == (int *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*DAT_008568bc + 0x38))(DAT_008568bc,param_1,param_2,param_3,1);
  if ((iVar1 == 0) &&
     (iVar1 = (**(code **)(*DAT_008568bc + 0x34))
                        (DAT_008568bc,param_4,param_5,param_6,param_7,param_8,param_9,1), iVar1 == 0
     )) {
    (**(code **)(*DAT_008568bc + 0x44))(DAT_008568bc);
    return 0;
  }
  FUN_006a5e40(iVar1,DAT_007ed77c,0x7ede2c,0x17);
  return iVar1;
}

