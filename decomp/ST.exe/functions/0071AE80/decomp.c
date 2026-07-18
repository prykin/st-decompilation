
undefined4 * __cdecl FUN_0071ae80(LPCSTR param_1,DWORD *param_2)

{
  code *pcVar1;
  int iVar2;
  HANDLE hFile;
  DWORD nNumberOfBytesToRead;
  BOOL BVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [16];
  HANDLE local_10;
  DWORD local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_10 = (HANDLE)0xffffffff;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    hFile = CreateFileA(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    local_10 = hFile;
    if (hFile == (HANDLE)0xffffffff) {
      FUN_006a5e40(-10,DAT_007ed77c,0x7f08c8,0x48);
    }
    local_c = SetFilePointer(hFile,0,(PLONG)0x0,0);
    if (local_c == 0xffffffff) {
      FUN_006a5e40(-9,DAT_007ed77c,0x7f08c8,0x49);
    }
    nNumberOfBytesToRead = GetFileSize(hFile,(LPDWORD)0x0);
    if (nNumberOfBytesToRead == 0xffffffff) {
      FUN_006a5e40(-9,DAT_007ed77c,0x7f08c8,0x4a);
    }
    local_8 = FUN_006aac10(nNumberOfBytesToRead);
    BVar3 = ReadFile(hFile,local_8,nNumberOfBytesToRead,&local_c,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      FUN_006a5e40(-0xc,DAT_007ed77c,0x7f08c8,0x4e);
    }
    if (local_c != nNumberOfBytesToRead) {
      FUN_006a5e40(-0xc,DAT_007ed77c,0x7f08c8,0x4f);
    }
    CloseHandle(hFile);
    DAT_00858df8 = (undefined4 *)local_54;
    if (param_2 != (DWORD *)0x0) {
      *param_2 = nNumberOfBytesToRead;
    }
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_mfany_cpp_007f08c8,0x55,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  if (local_10 != (HANDLE)0xffffffff) {
    CloseHandle(local_10);
  }
  if (local_8 != (undefined4 *)0x0) {
    FUN_006ab060(&local_8);
  }
  FUN_006a5e40(iVar2,0,0x7f08c8,0x5a);
  return (undefined4 *)0x0;
}

