
undefined4 __thiscall FUN_0062e490(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000014;
  int in_stack_00000018;
  
  uVar1 = thunk_FUN_0062db50(this,(int)param_1,in_stack_00000014);
  if (-1 < (int)uVar1) {
    iVar2 = *(int *)((int)this + (int)param_1 * 4 + 0x50);
    if (uVar1 < *(uint *)(iVar2 + 0xc)) {
      iVar2 = *(int *)(iVar2 + 8) * uVar1 + *(int *)(iVar2 + 0x1c);
    }
    else {
      iVar2 = 0;
    }
    if (in_stack_00000018 != 0) {
      *(undefined4 *)(iVar2 + 0x24) = 1;
      return 0xffffffff;
    }
    thunk_FUN_0062e3a0(this,param_1,uVar1,0);
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  return 0xffffffff;
}

