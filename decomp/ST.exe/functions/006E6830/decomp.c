
void __thiscall FUN_006e6830(void *this,int param_1)

{
  int *piVar1;

  piVar1 = *(int **)((int)this + 0x452);
  if (piVar1 != nullptr) {
    while (piVar1[1] != param_1) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == nullptr) {
        return;
      }
    }
    if (piVar1 != nullptr) {
      FUN_006b98c0((int *)((int)this + 0x452),piVar1);
      FUN_006a5e90((short *)piVar1);
    }
  }
  return;
}

