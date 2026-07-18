
int FUN_00753ea0(uint param_1,ushort *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00754390(param_1,param_2,param_3,&param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_00755bc0(param_1,(int)param_3);
    if (iVar1 == 0) {
      FUN_00755970(param_1,param_2,0);
      return 0;
    }
  }
  if ((iVar1 != -4) && (iVar1 != 0)) {
    FUN_006a5e40(iVar1,DAT_007ed77c,0x7f2ca0,0x1a);
  }
  return iVar1;
}

