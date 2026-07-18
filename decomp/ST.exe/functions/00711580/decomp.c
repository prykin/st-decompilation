
int __thiscall FUN_00711580(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar1 = (uint *)*param_1;
  iVar2 = 0;
  if (puVar1 != (uint *)0x0) {
    do {
      iVar4 = iVar2;
      iVar2 = FUN_007111c0(this,puVar1);
      param_1 = param_1 + 1;
      iVar3 = iVar3 + iVar2;
      iVar2 = iVar4 + 1;
      puVar1 = (uint *)*param_1;
    } while (puVar1 != (uint *)0x0);
    if (iVar2 != 0) {
      iVar3 = iVar3 + *(int *)((int)this + 0x5c) * iVar4;
    }
  }
  return iVar3;
}

