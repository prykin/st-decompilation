
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074BC6A returns return of OLE32.DLL::CoTaskMemAlloc @ 0074BC86 */

LPVOID FUN_0074bc6a(undefined4 *param_1)

{
  AnonShape_0074BC89_92881050 *pAVar1;
  
  pAVar1 = CoTaskMemAlloc(0x48);
  if (pAVar1 != (AnonShape_0074BC89_92881050 *)0x0) {
    FUN_0074bc89(pAVar1,param_1);
  }
  return pAVar1;
}

