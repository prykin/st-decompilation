
undefined4 __thiscall FUN_004b7d00(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(int *)((int)this + 0x245) == 0) && (*(int *)((int)this + 0x4d0) == 0)) &&
     (*(int *)((int)this + 0x4d4) == 0)) {
    uVar1 = 1;
    *(undefined4 *)((int)this + 0x4d4) = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}

