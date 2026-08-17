
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
  BOOL BVar2;
  DWORD DVar2;

  /* ST_CALLSITE[006BFBA1]: CALL dword ptr [0x0085bc74] */
  DVar1 = SetFilePointer(param_1,(LONG)lpNumberOfBytesRead,(PLONG)0x0,0);
  DVar2 = nNumberOfBytesToRead;
  if ((DVar1 != 0xffffffff) &&
     /* ST_CALLSITE[006BFBD0]: CALL dword ptr [0x0085bc68] */
     (BVar2 = ReadFile(param_1,lpBuffer,nNumberOfBytesToRead,(LPDWORD)&lpNumberOfBytesRead,
                       (LPOVERLAPPED)0x0), BVar2 != 0)) {
    return -(uint)(lpNumberOfBytesRead != (LPDWORD)DVar2) & 0xfffffff2;
  }
  /* ST_CALLSITE[006BFBAC]: CALL dword ptr [0x0085bbcc] */
  DVar1 = GetLastError();
  if (DVar1 != 0) {
    return DVar1;
  }
  return 0xffffff03;
}

