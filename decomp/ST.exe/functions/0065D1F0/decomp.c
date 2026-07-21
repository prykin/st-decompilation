
void __cdecl FUN_0065d1f0(int *param_1)

{
  DArrayTy *array;
  
  if (*param_1 != 0) {
    array = *(DArrayTy **)(*param_1 + 0xf);
    if (array != (DArrayTy *)0x0) {
      DArrayDestroy(array);
      *(undefined4 *)(*param_1 + 0xf) = 0;
    }
    FreeAndNull((void **)param_1);
  }
  return;
}

