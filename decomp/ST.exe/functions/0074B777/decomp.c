
void FUN_0074b777(void)

{
  LONG LVar1;

  /* ST_CALLSITE[0074B77C]: CALL dword ptr [0x0085bc70] */
  LVar1 = InterlockedDecrement((LONG *)&DAT_00857504);
  if ((LVar1 == 0) && (g_hINSTANCE_00857500 != nullptr)) {
    /* ST_CALLSITE[0074B790]: CALL dword ptr [0x0085bd10] */
    FreeLibrary(g_hINSTANCE_00857500);
    g_hINSTANCE_00857500 = nullptr;
  }
  return;
}

