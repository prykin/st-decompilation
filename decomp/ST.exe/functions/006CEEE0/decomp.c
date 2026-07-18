
int FUN_006ceee0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = param_3 * 0x10 + 0x14 + param_1;
  local_14 = *(int *)(param_3 * 0x10 + 0x14 + param_1);
  local_10 = *(undefined4 *)(iVar1 + 4);
  local_c = *(undefined4 *)(iVar1 + 8);
  local_8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = FUN_006cfeb0(&local_24,param_2,&local_14);
  if (iVar1 != 0) {
    iVar1 = FUN_006d1ad0(*(int **)(param_1 + 0x1c0),100,local_24,local_20,local_1c,local_18,
                         *(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10),1);
    return iVar1;
  }
  return 0;
}

