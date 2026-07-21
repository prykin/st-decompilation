
undefined4 FUN_004d7430(char param_1)

{
  DArrayTy *array;
  int iVar1;
  
  iVar1 = 6;
  array = (DArrayTy *)&g_playerRuntime[param_1].field_0x7ee;
  do {
    DArrayDestroy(array);
    array = (DArrayTy *)&array[2].iteratorIndex;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

