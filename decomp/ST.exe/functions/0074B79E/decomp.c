
/* [STReturnSemanticsApplier] typed_machine_return.
   Evidence: every reachable RET carries one identical concrete 32-bit type from an exact typed
   global load or trusted call return; stores and tests preserve that EAX value; machine CFG audit:
   used=1, ignored=0, unknown=0 */

HMODULE FUN_0074b79e(void)

{
  if (g_hINSTANCE_00857500 == nullptr) {
    /* ST_CALLSITE[0074B7AC]: CALL dword ptr [0x0085bcc0] */
    g_hINSTANCE_00857500 = LoadLibraryA("OleAut32.dll");
  }
  return g_hINSTANCE_00857500;
}

