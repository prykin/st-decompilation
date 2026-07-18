
int __thiscall FUN_0074c45b(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xd8) + 0x28))(param_1);
  if (iVar1 == 0) {
    iVar1 = (*(int **)((int)this + 0xd8))[0x24];
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x18) == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(**(int **)((int)this + 0xd8) + 0x2c))(unaff_retaddr,iVar1 + 0x1c);
    }
  }
  return iVar1;
}

