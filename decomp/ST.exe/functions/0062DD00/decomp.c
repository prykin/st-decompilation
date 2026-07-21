
void __thiscall FUN_0062dd00(void *this,int param_1)

{
  DArrayTy *array;
  
  array = *(DArrayTy **)((int)this + param_1 * 4 + 0x50);
  if (array != (DArrayTy *)0x0) {
    DArrayDestroy(array);
    *(undefined4 *)((int)this + param_1 * 4 + 0x50) = 0;
  }
  return;
}

