
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 006C2A00 -> EXTERNAL:0000004F @ 006C2A3F */

undefined4 FUN_006c2a00(LPVOID lpBuffer)

{
  HANDLE hFile;
  BOOL BVar1;
  undefined4 uVar2;
  DWORD local_8;
  
  uVar2 = 0;
  hFile = CreateFileA(lpBuffer,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  BVar1 = ReadFile(hFile,&lpBuffer,4,&local_8,(LPOVERLAPPED)0x0);
  if ((((BVar1 != 0) && (local_8 == 4)) && ((char)lpBuffer == 'B')) &&
     (((char)((uint)lpBuffer >> 8) == 'I' && (lpBuffer._2_1_ == 'K')))) {
    uVar2 = 1;
  }
  CloseHandle(hFile);
  return uVar2;
}

