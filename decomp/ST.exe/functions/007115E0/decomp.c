
int __thiscall FUN_007115e0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int local_8;
  
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
        iVar3 = FUN_007111c0(this,puVar2);
        local_8 = local_8 + iVar3;
      }
      return *(int *)((int)this + 0x5c) * (param_3 + -1) + local_8;
    }
  }
  return 0;
}

