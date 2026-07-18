
int __thiscall FUN_006f1cb0(void *this,int param_1)

{
  if ((*(uint *)(*(int *)(*(int *)this + 4) + 8) & 0x100000) != 0) {
    return 0;
  }
  return *(int *)(*(int *)(*(int *)this + 4) + 0x34) + param_1;
}

