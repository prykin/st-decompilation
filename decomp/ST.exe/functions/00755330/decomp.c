
int FUN_00755330(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  int local_c;
  int local_8;
  
  iVar1 = param_2;
  iVar3 = param_1;
  local_8 = -1;
  DVar5 = FUN_006d4a40(param_1,param_2,&param_1);
  iVar4 = param_3;
  if (DVar5 == 0) {
    local_8 = param_1;
    if (param_1 == 0) {
      return 0;
    }
    DVar5 = FUN_006d4a40(iVar3,param_3,&local_8);
    iVar2 = param_1;
    while (DVar5 == 0) {
      local_c = iVar2;
      if (iVar2 == iVar4) {
LAB_0075539f:
        DVar5 = FUN_006d4aa0(iVar3,iVar1,local_8);
LAB_007553aa:
        if (DVar5 == 0) {
          if (iVar1 == param_2) {
            return local_8;
          }
          return param_1;
        }
        break;
      }
      if (iVar2 == 0) {
        if (iVar4 == 0) goto LAB_0075539f;
        goto LAB_007553aa;
      }
      DVar5 = FUN_006d4a40(iVar3,iVar2,&local_c);
      iVar1 = iVar2;
      iVar2 = local_c;
    }
  }
  FUN_006a5e40(DVar5,DAT_007ed77c,0x7f2d08,0x26);
  return -1;
}

