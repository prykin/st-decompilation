
int FUN_00749ec2(AnonShape_00749EC2_C411FB81 *param_1)

{
  AnonShape_00749EC2_C411FB81 *lpCriticalSection;
  undefined1 *this;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  lpCriticalSection = param_1 + 1;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = param_1->field_0008;
  if (iVar2 != 1) {
    if (*(int *)(param_1->field_006C + 0x18) != 0) {
      iVar3 = FUN_007470e5((AnonShape_007470E5_0A8F5E67 *)param_1);
      if (iVar3 < 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return iVar3;
      }
      this = &param_1[-1].field_0x64;
      FUN_0074a81d(this,1);
      (**(code **)(*(int *)this + 0x80))();
      (**(code **)(*(int *)this + 0x28))(1);
      (**(code **)(*(int *)this + 0x6c))();
      FUN_0074a760((int)this);
      piVar1 = *(int **)(param_1->field_006C + 0x9c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))(piVar1);
      }
      if (iVar2 == 0) {
        param_1->field_0054 = 0;
        (**(code **)(*(int *)this + 0x70))();
      }
      iVar2 = (**(code **)(*(int *)this + 0x30))(iVar2);
      goto LAB_00749f79;
    }
    param_1->field_0008 = 1;
  }
  iVar2 = (**(code **)(*(int *)&param_1[-1].field_0x64 + 0x30))(1);
LAB_00749f79:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar2;
}

