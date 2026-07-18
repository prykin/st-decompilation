
void thunk_FUN_00571400(int param_1)

{
  uint nNumberOfBytesToRead;
  code *pcVar1;
  int iVar2;
  HANDLE hFile;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_70;
  undefined4 auStack_6c [16];
  undefined1 auStack_2c [14];
  uint uStack_1e;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  uStack_70 = DAT_00858df8;
  DAT_00858df8 = &uStack_70;
  iVar2 = __setjmp3(auStack_6c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_70;
    iVar5 = FUN_006ad4d0(s_E____titans_tapp_cpp_007ca0c8,0x914,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7ca0c8,0x914);
    return;
  }
  hFile = CreateFileA((LPCSTR)(iStack_10 + 0x7b06),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    iStack_8 = 1;
    goto LAB_00571620;
  }
  if ((param_1 != 0) &&
     (((DVar3 = SetFilePointer(hFile,0,(PLONG)0x0,0), DVar3 == 0xffffffff ||
       (BVar4 = ReadFile(hFile,(LPVOID)(iStack_10 + 0x1134),4,&uStack_c,(LPOVERLAPPED)0x0),
       BVar4 == 0)) || (uStack_c != 4)))) {
    iStack_8 = 1;
  }
  if ((iStack_8 == 0) &&
     (DVar3 = SetFilePointer(hFile,*(LONG *)(iStack_10 + 0x1191),(PLONG)0x0,0), DVar3 != 0xffffffff)
     ) {
    BVar4 = ReadFile(hFile,auStack_2c,0x1b,&uStack_c,(LPOVERLAPPED)0x0);
    if ((BVar4 != 0) && (uStack_c == 0x1b)) {
      iVar2 = 0;
      switch(uStack_1e & 0xff) {
      case 5:
      case 0x14:
      case 0x19:
        iVar2 = 0xc;
        break;
      case 8:
      case 9:
      case 0x15:
      case 0x22:
      case 0x28:
      case 0x29:
      case 0x2a:
        iVar2 = 1;
        break;
      case 0x16:
        iVar2 = 0x18;
        break;
      case 0x17:
        iVar2 = 0x21;
        break;
      case 0x18:
        iVar2 = 0x12;
        break;
      case 0x1a:
        iVar2 = 0xd;
        break;
      case 0x1e:
        iVar2 = 0xb;
        break;
      case 0x1f:
        iVar2 = 7;
        break;
      case 0x20:
        iVar2 = 9;
        break;
      case 0x21:
        iVar2 = 5;
        break;
      case 0x23:
        iVar2 = 0x10;
        break;
      case 0x27:
        iVar2 = 2;
      }
      nNumberOfBytesToRead = iVar2 + 0x1b;
      if (*(uint *)(iStack_10 + 0x118d) < nNumberOfBytesToRead) {
        *(uint *)(iStack_10 + 0x118d) = nNumberOfBytesToRead;
        iVar2 = FUN_006acf50(*(undefined4 **)(iStack_10 + 0x1189),nNumberOfBytesToRead);
        *(int *)(iStack_10 + 0x1189) = iVar2;
      }
      DVar3 = SetFilePointer(hFile,*(LONG *)(iStack_10 + 0x1191),(PLONG)0x0,0);
      if (((DVar3 == 0xffffffff) ||
          (BVar4 = ReadFile(hFile,*(LPVOID *)(iStack_10 + 0x1189),nNumberOfBytesToRead,&uStack_c,
                            (LPOVERLAPPED)0x0), BVar4 == 0)) || (uStack_c != nNumberOfBytesToRead))
      {
        iStack_8 = 1;
        CloseHandle(hFile);
      }
      else {
        *(uint *)(iStack_10 + 0x1191) = *(int *)(iStack_10 + 0x1191) + nNumberOfBytesToRead;
        CloseHandle(hFile);
      }
      goto LAB_00571620;
    }
    *(undefined4 *)(iStack_10 + 0x1185) = 0;
    if (DAT_008016d8 != (void *)0x0) {
      thunk_FUN_0052d320(DAT_008016d8,s_Playing_of_commands_has_finished_007ca2bc,8);
      CloseHandle(hFile);
      goto LAB_00571620;
    }
  }
  else {
    iStack_8 = 1;
  }
  CloseHandle(hFile);
LAB_00571620:
  if ((iStack_8 != 0) && (*(undefined4 *)(iStack_10 + 0x1185) = 0, DAT_008016d8 != (void *)0x0)) {
    thunk_FUN_0052d320(DAT_008016d8,s_Error_playing_command__007ca2a0,9);
    thunk_FUN_0052d320(DAT_008016d8,s_Playing_of_command_has_turned_of_007ca274,8);
  }
  DAT_00858df8 = (undefined4 *)uStack_70;
  return;
}

