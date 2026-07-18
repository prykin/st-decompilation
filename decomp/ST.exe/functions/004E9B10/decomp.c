
undefined4 __thiscall FUN_004e9b10(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x4f8) != 0) {
    if (*(int *)((int)this + 0x4fc) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      *(int *)((int)this + 0x61b) = param_1;
      *(undefined4 *)((int)this + 0x4f8) = uVar1;
      *(undefined4 *)((int)this + 0x4fc) = 1;
      return 1;
    }
    if (*(int *)((int)this + 0x4f8) != 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x18) != *(int *)((int)this + 0x5d3)) {
    return 0;
  }
  *(int *)((int)this + 0x4f8) = *(int *)((int)this + 0x5d3);
  *(undefined4 *)((int)this + 0x4fc) = 1;
  *(int *)((int)this + 0x61b) = param_1;
  return 1;
}

