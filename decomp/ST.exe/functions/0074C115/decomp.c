
int __thiscall FUN_0074c115(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  local_8 = this;
  if (*(int *)(*(int *)((int)this + 0x8c) + 200) == 0) {
    iVar2 = FUN_0074bfbf(this,param_1,&local_8);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*(int *)this + 0x24))(param_1,local_8);
      if (-1 < iVar2) {
        if (iVar2 == 0) {
          piVar1 = *(int **)(*(int *)((int)this + 0x90) + 0x9c);
          iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,local_8);
          *(undefined4 *)((int)this + 0x54) = 0;
        }
        else if (iVar2 == 1) {
          (**(code **)(*local_8 + 8))(local_8);
          *(undefined4 *)((int)this + 0x54) = 1;
          if (*(int *)((int)this + 0x58) == 0) {
            FUN_00747406(this,0xb,0,0);
            *(undefined4 *)((int)this + 0x58) = 1;
          }
          return 0;
        }
      }
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  else {
    piVar1 = *(int **)(*(int *)((int)this + 0x90) + 0x9c);
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_1);
  }
  return iVar2;
}

