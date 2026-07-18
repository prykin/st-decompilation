
void FUN_0074b777(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)&DAT_00857504);
  if ((LVar1 == 0) && (DAT_00857500 != (HMODULE)0x0)) {
    FreeLibrary(DAT_00857500);
    DAT_00857500 = (HMODULE)0x0;
  }
  return;
}

