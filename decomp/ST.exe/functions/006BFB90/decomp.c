
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 006BFB90 -> EXTERNAL:0000004F @ 006BFBD0

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006BFB90 -> EXTERNAL:0000004F @ 006BFBD0 | 006BFE70 -> 006BFB90 @ 006BFF61 | 006BFE70
   -> 006BFB90 @ 006C003B | 006BFE70 -> 006BFB90 @ 006C01DA | 006BFE70 -> 006BFB90 @ 006C03CB |
   006BFE70 -> 006BFB90 @ 006C04D5 | 006BFE70 -> 006BFB90 @ 006C0604

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006BFB90 -> EXTERNAL:0000004F @ 006BFBD0 | 006BFE70 -> 006BFB90 @ 006BFEB9 */

DWORD FUN_006bfb90(HANDLE param_1,LPDWORD lpNumberOfBytesRead,LPVOID lpBuffer,
                  DWORD nNumberOfBytesToRead)

{
  DWORD DVar1;
  DWORD DVar2;
  BOOL BVar3;

  DVar1 = SetFilePointer(param_1,(LONG)lpNumberOfBytesRead,(PLONG)0x0,0);
  DVar2 = nNumberOfBytesToRead;
  if ((DVar1 != 0xffffffff) &&
     (BVar3 = ReadFile(param_1,lpBuffer,nNumberOfBytesToRead,(LPDWORD)&lpNumberOfBytesRead,
                       (LPOVERLAPPED)0x0), BVar3 != 0)) {
    return -(uint)(lpNumberOfBytesRead != (LPDWORD)DVar2) & 0xfffffff2;
  }
  DVar2 = GetLastError();
  if (DVar2 != 0) {
    return DVar2;
  }
  return 0xffffff03;
}

