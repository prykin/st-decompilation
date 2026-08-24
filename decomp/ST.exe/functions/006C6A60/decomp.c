
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006C6A60 -> 006BC360 @ 006C6A76

   [STReturnSemanticsApplier] typed_machine_return.
   Evidence: every reachable RET carries one identical concrete 32-bit type from an exact typed
   global load or trusted call return; stores and tests preserve that EAX value; machine CFG audit:
   used=1, ignored=0, unknown=0 */

HPALETTE FUN_006c6a60(ushort *param_1)

{
  HPALETTE pHVar1;
  LOGPALETTE local_408 [128];

  FUN_006bc360(param_1,local_408[0].palPalEntry,nullptr);
  pHVar1 = Library::DKW::WGR::FUN_006d7cf0(local_408);
  return pHVar1;
}

