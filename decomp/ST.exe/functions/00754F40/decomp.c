
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00753B00 -> 00754F40 @ 00753B08; FUN_00753b00 parameter param_1 | 00754F40 ->
   EXTERNAL:00000055 @ 00754F5D
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=007535F0 @ 007536D2 -> read as EAX on
   every CFG path | 00753B00 @ 00753B08 -> read as EAX on every CFG path */

int FUN_00754f40(LPCSTR lpFileName)

{
  HANDLE hFile;
  BOOL BVar1;
  int iVar2;
  int local_24;
  uint local_20;

  /* ST_CALLSITE[00754F5D]: CALL dword ptr [0x0085bc80] */
  hFile = CreateFileA(lpFileName,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  iVar2 = 0;
  /* ST_CALLSITE[00754F82]: CALL dword ptr [0x0085bc68] */
  BVar1 = ReadFile(hFile,&local_24,0x20,(LPDWORD)&lpFileName,(LPOVERLAPPED)0x0);
  if ((((BVar1 != 0) && (lpFileName == (LPCSTR)0x20)) && (local_24 == DAT_007f2c38)) &&
     ((local_20 & 0xff00) == 0x100)) {
    iVar2 = 1;
  }
  /* ST_CALLSITE[00754FB7]: CALL dword ptr [0x0085bbc8] */
  CloseHandle(hFile);
  return iVar2;
}

