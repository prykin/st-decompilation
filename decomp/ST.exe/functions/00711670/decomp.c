
int __thiscall FUN_00711670(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (param_3 == -1) {
      param_3 = iVar1;
    }
    if ((param_2 < iVar1) && (param_3 != 0)) {
      if (iVar1 < param_2 + param_3) {
        param_3 = iVar1 - param_2;
      }
      iVar1 = param_2 + param_3;
      for (; param_2 < iVar1; param_2 = param_2 + 1) {
        if (param_2 < *(int *)(param_1 + 8)) {
          puVar2 = *(uint **)(*(int *)(param_1 + 0x14) + param_2 * 4);
        }
        else {
          puVar2 = (uint *)0x0;
        }
        iVar3 = FUN_00711110(this,puVar2);
        if (local_8 < iVar3) {
          local_8 = iVar3;
        }
      }
      return local_8;
    }
  }
  return 0;
}

