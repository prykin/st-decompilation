
int __thiscall FUN_0057cb80(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  
  if ((*(int *)((int)this + 0x267) != 0xe7) && (*(int *)((int)this + 0x267) != 0xe9)) {
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    return (uVar1 >> 0x10) % 0x15 + 0x1e + param_2;
  }
  return param_2;
}

