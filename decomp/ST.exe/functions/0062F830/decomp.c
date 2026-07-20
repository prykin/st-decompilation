
undefined4 __thiscall FUN_0062f830(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  piVar1 = *(int **)((int)this + param_2 * 4 + 0x1e5);
  if ((((piVar1 != (int *)0x0) && (*(int *)((int)this + 0x1fa) != 2)) && (piVar1[8] == param_3)) &&
     ((piVar1[9] == param_4 && (iVar2 = *piVar1, 0 < iVar2)))) {
    if (param_1 < iVar2) {
      *piVar1 = iVar2 - param_1;
      return 1;
    }
    *piVar1 = 0;
    *(undefined4 *)(*(int *)((int)this + param_2 * 4 + 0x1e5) + 0x18) = 2;
    *(undefined4 *)(*(int *)((int)this + param_2 * 4 + 0x1e5) + 0x35) = PTR_00802a38->field_00E4;
    *(undefined4 *)(*(int *)((int)this + param_2 * 4 + 0x1e5) + 0x39) = 10;
    *(undefined1 *)(*(int *)((int)this + param_2 * 4 + 0x1e5) + 0x34) = 0;
    uVar3 = 1;
  }
  return uVar3;
}

