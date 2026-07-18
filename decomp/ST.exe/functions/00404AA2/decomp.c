
void __thiscall STAppC::ReadCmdPlay(STAppC *this,int param_1)

{
  uint nNumberOfBytesToRead;
  code *pcVar1;
  STAppC *pSVar2;
  int iVar3;
  HANDLE hFile;
  DWORD DVar4;
  BOOL BVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_70;
  undefined4 auStack_6c [16];
  undefined1 auStack_2c [14];
  uint uStack_1e;
  STAppC *pSStack_10;
  uint uStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  uStack_70 = DAT_00858df8;
  DAT_00858df8 = &uStack_70;
  pSStack_10 = this;
  iVar3 = __setjmp3(auStack_6c,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_10;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_70;
    iVar6 = FUN_006ad4d0(s_E____titans_tapp_cpp_007ca0c8,0x914,0,iVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7ca0c8,0x914);
    return;
  }
  hFile = CreateFileA((LPCSTR)(pSStack_10 + 0x7b06),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    iStack_8 = 1;
    goto LAB_00571620;
  }
  if ((param_1 != 0) &&
     (((DVar4 = SetFilePointer(hFile,0,(PLONG)0x0,0), DVar4 == 0xffffffff ||
       (BVar5 = ReadFile(hFile,pSVar2 + 0x1134,4,&uStack_c,(LPOVERLAPPED)0x0), BVar5 == 0)) ||
      (uStack_c != 4)))) {
    iStack_8 = 1;
  }
  if ((iStack_8 == 0) &&
     (DVar4 = SetFilePointer(hFile,*(LONG *)(pSVar2 + 0x1191),(PLONG)0x0,0), DVar4 != 0xffffffff)) {
    BVar5 = ReadFile(hFile,auStack_2c,0x1b,&uStack_c,(LPOVERLAPPED)0x0);
    if ((BVar5 != 0) && (uStack_c == 0x1b)) {
      iVar3 = 0;
      switch(uStack_1e & 0xff) {
      case 5:
      case 0x14:
      case 0x19:
        iVar3 = 0xc;
        break;
      case 8:
      case 9:
      case 0x15:
      case 0x22:
      case 0x28:
      case 0x29:
      case 0x2a:
        iVar3 = 1;
        break;
      case 0x16:
        iVar3 = 0x18;
        break;
      case 0x17:
        iVar3 = 0x21;
        break;
      case 0x18:
        iVar3 = 0x12;
        break;
      case 0x1a:
        iVar3 = 0xd;
        break;
      case 0x1e:
        iVar3 = 0xb;
        break;
      case 0x1f:
        iVar3 = 7;
        break;
      case 0x20:
        iVar3 = 9;
        break;
      case 0x21:
        iVar3 = 5;
        break;
      case 0x23:
        iVar3 = 0x10;
        break;
      case 0x27:
        iVar3 = 2;
      }
      nNumberOfBytesToRead = iVar3 + 0x1b;
      if (*(uint *)(pSVar2 + 0x118d) < nNumberOfBytesToRead) {
        *(uint *)(pSVar2 + 0x118d) = nNumberOfBytesToRead;
        iVar3 = FUN_006acf50(*(undefined4 **)(pSVar2 + 0x1189),nNumberOfBytesToRead);
        *(int *)(pSVar2 + 0x1189) = iVar3;
      }
      DVar4 = SetFilePointer(hFile,*(LONG *)(pSVar2 + 0x1191),(PLONG)0x0,0);
      if (((DVar4 == 0xffffffff) ||
          (BVar5 = ReadFile(hFile,*(LPVOID *)(pSVar2 + 0x1189),nNumberOfBytesToRead,&uStack_c,
                            (LPOVERLAPPED)0x0), BVar5 == 0)) || (uStack_c != nNumberOfBytesToRead))
      {
        iStack_8 = 1;
        CloseHandle(hFile);
      }
      else {
        *(uint *)(pSVar2 + 0x1191) = *(int *)(pSVar2 + 0x1191) + nNumberOfBytesToRead;
        CloseHandle(hFile);
      }
      goto LAB_00571620;
    }
    *(undefined4 *)(pSVar2 + 0x1185) = 0;
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
  if ((iStack_8 != 0) && (*(undefined4 *)(pSVar2 + 0x1185) = 0, DAT_008016d8 != (void *)0x0)) {
    thunk_FUN_0052d320(DAT_008016d8,s_Error_playing_command__007ca2a0,9);
    thunk_FUN_0052d320(DAT_008016d8,s_Playing_of_command_has_turned_of_007ca274,8);
  }
  DAT_00858df8 = (undefined4 *)uStack_70;
  return;
}

