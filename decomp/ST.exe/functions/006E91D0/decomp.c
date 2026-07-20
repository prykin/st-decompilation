
void __thiscall FUN_006e91d0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_006e8ea0(this,(int)param_1);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x134) = 1;
  }
  FUN_006b98c0((int *)((int)this + 0x294),param_1);
  FUN_006a5e90((short *)param_1);
  return;
}

