
int __thiscall FUN_0074caa4(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  undefined4 uStack_8;
  
  if (*(int *)(*(int *)((int)this + 0x8c) + 0x18) == 0) {
    local_c = 0;
    uStack_8 = 0;
    local_14 = 1;
    local_10 = 1;
  }
  else {
    piVar1 = *(int **)(*(int *)((int)this + 0x8c) + 0x9c);
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,&local_14);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  *param_2 = local_14;
  param_2[1] = local_10;
  if (local_14 < 1) {
    *param_2 = 1;
  }
  if (local_10 < 1) {
    param_2[1] = 1;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_2,&local_24);
  if (-1 < iVar2) {
    if (((local_24 < local_14) || (local_20 < local_10)) || (local_1c < local_c)) {
      iVar2 = -0x7fffbffb;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

