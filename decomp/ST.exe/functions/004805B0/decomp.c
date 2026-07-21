
int __thiscall FUN_004805b0(void *this,int *param_1)

{
  int iVar1;

  iVar1 = *(int *)((int)this + 0x6ef);
  if (iVar1 == 0) {
    iVar1 = STBoatC::BackLoadObj(this,param_1);
    return iVar1;
  }
  if (iVar1 == 1) {
    return 0;
  }
  if (iVar1 == 2) {
    iVar1 = STBoatC::BackUnLoadObj(this,param_1);
    return iVar1;
  }
  return 2;
}

