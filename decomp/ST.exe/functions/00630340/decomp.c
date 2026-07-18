
undefined4 __thiscall
FUN_00630340(void *this,int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((((-1 < param_1) && (param_1 < 5)) &&
      (iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5), iVar1 != 0)) &&
     ((*(int *)(iVar1 + 4) == 3 || (*(int *)(iVar1 + 4) == 6)))) {
    if ((param_3 != (undefined4 *)0x0) &&
       ((param_2 != (int *)0x0 && (param_4 != (undefined4 *)0x0)))) {
      *param_3 = *(undefined4 *)(iVar1 + 0x10);
      *param_2 = *(int *)((int)this + param_1 * 4 + 0x1e5) + 0x14;
      *param_4 = *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 8);
      *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x10) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

