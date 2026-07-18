
int __thiscall FUN_0074cf58(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  iVar2 = (**(code **)(**(int **)((int)this + 0xe0) + 0x28))(param_1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0xe0) + 0x90) + 0x18);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,unaff_retaddr);
    }
  }
  return iVar2;
}

