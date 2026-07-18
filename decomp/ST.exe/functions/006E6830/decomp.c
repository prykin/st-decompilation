
void __thiscall FUN_006e6830(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x452);
  if (piVar1 != (int *)0x0) {
    while (piVar1[1] != param_1) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    if (piVar1 != (int *)0x0) {
      FUN_006b98c0((int *)((int)this + 0x452),piVar1);
      FUN_006a5e90(piVar1);
    }
  }
  return;
}

