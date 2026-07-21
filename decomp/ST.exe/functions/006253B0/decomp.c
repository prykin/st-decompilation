
undefined4
FUN_006253b0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20;
  int local_c;
  int local_8;

  local_8 = 1;
  if (0 < param_8) {
    iVar2 = param_3;
    do {
      iVar2 = iVar2 + -1;
      local_c = iVar2;
      if (iVar2 < 0) {
        local_c = 0;
      }
      iVar3 = iVar2 + (param_4 - param_3);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      iVar1 = local_8 + param_3;
      iVar4 = iVar1;
      if (param_6 <= iVar1) {
        iVar4 = param_6 + -1;
      }
      iVar1 = iVar1 + (param_4 - param_3);
      if (param_7 <= iVar1) {
        iVar1 = param_7 + -1;
      }
      iVar5 = param_4 - iVar3;
      if (local_8 <= iVar5) {
        iVar3 = iVar3 + 1;
      }
      iVar6 = iVar1 - param_4;
      if (local_8 <= iVar6) {
        iVar1 = iVar1 + -1;
      }
      if (iVar3 <= iVar1) {
        local_20 = (iVar1 - iVar3) + 1;
        do {
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
      if ((local_8 <= iVar5) && (local_c <= iVar4)) {
        iVar3 = (iVar4 - local_c) + 1;
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if ((local_8 <= iVar6) && (local_c <= iVar4)) {
        iVar3 = (iVar4 - local_c) + 1;
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_8 = local_8 + 1;
    } while (local_8 <= param_8);
    return 0;
  }
  return 0;
}

