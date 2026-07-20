
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 007474F4 -> EXTERNAL:000000D0 @ 0074752A */

uint FUN_007474f4(LPVOID *ppv)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)(**(code **)((int)ppv[-4] + 0x20))();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 1;
  }
  else {
    CoInitialize((LPVOID)0x0);
    uVar2 = CoCreateInstance((IID *)&DAT_007a1b00,(LPUNKNOWN)0x0,1,(IID *)&DAT_007a1b10,&ppv);
    if (-1 < (int)uVar2) {
      uVar2 = FUN_00749708(puVar1,(int *)ppv,0);
      (**(code **)((int)*ppv + 8))(ppv);
    }
    CoFreeUnusedLibraries();
    CoUninitialize();
    uVar2 = -(uint)(uVar2 != 0x80070002) & uVar2;
  }
  return uVar2;
}

