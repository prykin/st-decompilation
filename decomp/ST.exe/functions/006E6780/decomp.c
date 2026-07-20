
void __thiscall FUN_006e6780(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x44e);
  if (piVar1 != (int *)0x0) {
    while (piVar1[1] != param_1) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    if (piVar1 != (int *)0x0) {
      FUN_006b98c0((int *)((int)this + 0x44e),piVar1);
      FUN_006a5e90((short *)piVar1);
    }
  }
  return;
}

