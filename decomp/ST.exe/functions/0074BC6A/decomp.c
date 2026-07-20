
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074BC6A returns return of OLE32.DLL::CoTaskMemAlloc @ 0074BC86 */

LPVOID FUN_0074bc6a(undefined4 *param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = CoTaskMemAlloc(0x48);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0074bc89(pvVar1,param_1);
  }
  return pvVar1;
}

