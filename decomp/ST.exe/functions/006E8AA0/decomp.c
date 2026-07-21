
int __thiscall FUN_006e8aa0(void *this,uint *param_1,uint param_2)

{
  int iVar1;

  iVar1 = FUN_006e8660(this,(int *)param_1,0,0,0,0,0,0,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x31c) + *param_1 * 0x114;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x1004;
    FUN_006e8b00(this,*param_1,param_2);
    iVar1 = 0;
  }
  return iVar1;
}

