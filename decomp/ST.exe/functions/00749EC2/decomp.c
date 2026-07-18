
int FUN_00749ec2(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *this;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 1) {
    if (*(int *)(*(int *)(param_1 + 0x6c) + 0x18) != 0) {
      iVar3 = FUN_007470e5(param_1);
      if (iVar3 < 0) {
        LeaveCriticalSection(lpCriticalSection);
        return iVar3;
      }
      this = (int *)(param_1 + -0xc);
      FUN_0074a81d(this,1);
      (**(code **)(*this + 0x80))();
      (**(code **)(*this + 0x28))(1);
      (**(code **)(*this + 0x6c))();
      FUN_0074a760((int)this);
      piVar1 = *(int **)(*(int *)(param_1 + 0x6c) + 0x9c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))(piVar1);
      }
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x54) = 0;
        (**(code **)(*this + 0x70))();
      }
      iVar2 = (**(code **)(*this + 0x30))(iVar2);
      goto LAB_00749f79;
    }
    *(undefined4 *)(param_1 + 8) = 1;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + -0xc) + 0x30))(1);
LAB_00749f79:
  LeaveCriticalSection(lpCriticalSection);
  return iVar2;
}

