
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0074748E -> EXTERNAL:000000D0 @ 007474C3 */

undefined4 FUN_0074748e(LPVOID *ppv)

{
  undefined4 *puVar1;
  HRESULT HVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(**(code **)((int)ppv[-4] + 0x20))();
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 1;
  }
  else {
    CoInitialize((LPVOID)0x0);
    HVar2 = CoCreateInstance((IID *)&DAT_007a1b00,(LPUNKNOWN)0x0,1,(IID *)&DAT_007a1b10,&ppv);
    if (-1 < HVar2) {
      FUN_00749708(puVar1,(int *)ppv,1);
      (**(code **)((int)*ppv + 8))(ppv);
    }
    CoFreeUnusedLibraries();
    CoUninitialize();
    uVar3 = 0;
  }
  return uVar3;
}

