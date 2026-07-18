
uint __thiscall FUN_006eb310(void *this,uint param_1)

{
  uint uVar1;
  
  if ((param_1 < *(uint *)((int)this + 0x310)) &&
     (uVar1 = *(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114), (uVar1 & 0x8000) != 0)) {
    return uVar1 & 1;
  }
  return 0;
}

