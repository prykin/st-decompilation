
undefined4 __thiscall FUN_00664600(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x217) + 0xc);
  if (((iVar1 != 0) && ((int)param_1 < iVar1)) && (-1 < (int)param_1)) {
    FUN_006b0c70(*(int *)((int)this + 0x217),param_1);
    return *(undefined4 *)(*(int *)((int)this + 0x217) + 0xc);
  }
  return 0xffffffff;
}

