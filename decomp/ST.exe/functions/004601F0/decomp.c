
int __thiscall FUN_004601f0(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0xf4) = 0;
  }
  iVar1 = STBoatC::sub_0045FF50(this,param_1);
  if ((iVar1 == 2) && (*(int *)((int)this + 0xf4) == 1)) {
    (**(code **)(*(int *)this + 0x20))();
    *(undefined4 *)((int)this + 0xf4) = 0;
    iVar1 = 0;
  }
  return iVar1;
}

