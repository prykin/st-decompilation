
undefined4 __thiscall FUN_00491200(void *this,int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if ((*(int *)((int)this + 0x45d) == 0x14) && (*(int *)((int)this + 0x5a2) == param_1)) {
    *(undefined4 *)((int)this + 0x5a2) = 0;
    uVar1 = 1;
  }
  return uVar1;
}

