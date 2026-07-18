
undefined4
thunk_FUN_00698f90(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1 * param_2;
  if (param_4 == 0) {
    if (iVar1 < 0x9c4) {
      iVar3 = 0xb4;
    }
    else if (iVar1 < 0x1621) {
      iVar3 = 0xd2;
    }
    else if (iVar1 < 0x1fa4) {
      iVar3 = 0x118;
    }
    else {
      iVar3 = ((0x2f43 < iVar1) - 1 & 0xffffffec) + 0x15e;
    }
    *param_6 = 1;
  }
  else if (param_4 == 1) {
    if (iVar1 < 0x9c4) {
      iVar3 = 0xaa;
      *param_6 = 2;
    }
    else if (iVar1 < 0x1621) {
      iVar3 = 200;
      *param_6 = 2;
    }
    else if (iVar1 < 0x1fa4) {
      iVar3 = 0x10e;
      *param_6 = 2;
    }
    else {
      iVar3 = ((0x2f43 < iVar1) - 1 & 0xffffffec) + 0x140;
      *param_6 = 2;
    }
  }
  else {
    if (param_4 != 2) {
      iVar3 = 0x122;
      *param_6 = 2;
      goto LAB_006990f1;
    }
    if (iVar1 < 0x9c4) {
      iVar3 = 0x82;
      *param_6 = 2;
    }
    else if (iVar1 < 0x1621) {
      iVar3 = 0x96;
      *param_6 = 2;
    }
    else if (iVar1 < 0x1fa4) {
      iVar3 = 200;
      *param_6 = 2;
    }
    else {
      *param_6 = 2;
      iVar3 = ((0x2f43 < iVar1) - 1 & 0xffffffd8) + 0x122;
    }
  }
  if (iVar3 < 1) {
    return 0;
  }
LAB_006990f1:
  iVar2 = (*param_6 + 2) * param_3;
  *param_5 = iVar2;
  iVar1 = (iVar1 / iVar3 - (*param_6 + 1) * param_3) - iVar2;
  if (3 < iVar1) {
    *param_5 = iVar2 + iVar1;
    return 1;
  }
  *param_5 = iVar2 + 3;
  return 1;
}

