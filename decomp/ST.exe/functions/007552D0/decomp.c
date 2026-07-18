
int FUN_007552d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  
  iVar1 = param_2;
  DVar3 = FUN_006d4a40(param_1,param_2,&param_2);
  iVar2 = param_3;
  if (DVar3 == 0) {
    DVar3 = FUN_006d4aa0(param_1,param_3,param_2);
    if (DVar3 == 0) {
      DVar3 = FUN_006d4aa0(param_1,iVar1,iVar2);
      if (DVar3 == 0) {
        return iVar2;
      }
    }
  }
  FUN_006a5e40(DVar3,DAT_007ed77c,0x7f2cf0,0x1b);
  return -1;
}

