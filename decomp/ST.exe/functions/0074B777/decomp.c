
void FUN_0074b777(void)

{
  LONG LVar1;

  LVar1 = InterlockedDecrement((LONG *)&DAT_00857504);
  if ((LVar1 == 0) && (g_hINSTANCE_00857500 != nullptr)) {
    FreeLibrary(g_hINSTANCE_00857500);
    g_hINSTANCE_00857500 = nullptr;
  }
  return;
}

