
void __thiscall FUN_00696050(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x5853);
  if (((iVar1 != 0) && (param_1 < *(uint *)(iVar1 + 0xc))) &&
     (iVar1 = *(int *)(iVar1 + 8) * param_1 + *(int *)(iVar1 + 0x1c), iVar1 != 0)) {
    if (*(DArrayTy **)(iVar1 + 0x15) != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)(iVar1 + 0x15));
      *(undefined4 *)(iVar1 + 0x15) = 0;
    }
    if (*(DArrayTy **)(iVar1 + 0x19) != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)(iVar1 + 0x19));
      *(undefined4 *)(iVar1 + 0x19) = 0;
    }
  }
  return;
}

