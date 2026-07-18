
int __thiscall FUN_007483c3(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  undefined4 uStack_8;
  
  piVar1 = param_2;
  local_14 = 0;
  uStack_10 = 0;
  *param_2 = 0;
  local_c = 0;
  uStack_8 = 0;
  (**(code **)(*param_1 + 0x14))(param_1,&local_14);
  if (local_c == 0) {
    local_c = 1;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_2);
  if (((iVar2 < 0) || (iVar2 = (**(code **)(*(int *)this + 0x3c))(*param_2,&local_14), iVar2 < 0))
     || (iVar2 = (**(code **)(*param_1 + 0x10))(param_1,*param_2,0), iVar2 < 0)) {
    piVar3 = (int *)*param_2;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *param_2 = 0;
    }
    piVar3 = (int *)(**(code **)(*(int *)this + 0x48))(param_2);
    if ((((int)piVar3 < 0) ||
        (piVar3 = (int *)(**(code **)(*(int *)this + 0x3c))(*param_2,&local_14), (int)piVar3 < 0))
       || (piVar3 = (int *)(**(code **)(*param_1 + 0x10))(param_1,*param_2,0), (int)piVar3 < 0)) {
      param_2 = piVar3;
      piVar3 = (int *)*piVar1;
      if (piVar3 == (int *)0x0) {
        return (int)param_2;
      }
      (**(code **)(*piVar3 + 8))(piVar3);
      *piVar1 = 0;
      return (int)param_2;
    }
  }
  return 0;
}

