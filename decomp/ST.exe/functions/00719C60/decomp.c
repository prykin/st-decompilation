
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00719C60 -> EXTERNAL:000000D3 @ 00719C80 */

void __cdecl FUN_00719c60(DWORD_PTR dwParam2)

{
  MCIDEVICEID mciId;
  DWORD_PTR DVar1;
  
  DVar1 = dwParam2;
  mciId = *(MCIDEVICEID *)dwParam2;
  if (mciId != 0) {
    dwParam2 = 0;
    mciSendCommandA(mciId,0x804,2,(DWORD_PTR)&dwParam2);
    *(undefined4 *)DVar1 = 0;
  }
  return;
}

