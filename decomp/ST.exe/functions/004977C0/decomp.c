
void FUN_004977c0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_8;
  
  iVar3 = param_1;
  local_8 = 0;
  piVar5 = param_2;
  if (0 < param_3) {
    do {
      iVar1 = *(int *)(iVar3 + 0x10 + *piVar5 * 0x18);
      piVar4 = param_2;
      param_1 = local_8;
      if (0 < local_8) {
        do {
          iVar2 = *piVar4;
          if (iVar1 < *(int *)(iVar3 + 0x10 + iVar2 * 0x18)) {
            *piVar4 = *piVar5;
            *piVar5 = iVar2;
          }
          param_1 = param_1 + -1;
          piVar4 = piVar4 + 1;
        } while (param_1 != 0);
      }
      local_8 = local_8 + 1;
      piVar5 = piVar5 + 1;
    } while (local_8 < param_3);
  }
  return;
}

