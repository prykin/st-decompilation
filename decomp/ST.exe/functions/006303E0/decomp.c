
bool __thiscall FUN_006303e0(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5);
  if (iVar1 != 0) {
    *param_3 = *(undefined4 *)(iVar1 + 0x10);
    *param_2 = *(int *)((int)this + param_1 * 4 + 0x1e5) + 0x14;
  }
  return iVar1 != 0;
}

