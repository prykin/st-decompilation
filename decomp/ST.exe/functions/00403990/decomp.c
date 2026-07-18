
void thunk_FUN_0056d370(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  byte *pbVar4;
  void *unaff_EDI;
  undefined4 *puStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  puStack_4c = DAT_00858df8;
  DAT_00858df8 = &puStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    iVar2 = iStack_8 + 0x470;
    pbVar4 = (byte *)(iStack_8 + 0x7d1a);
    wsprintfA((LPSTR)pbVar4,&DAT_007c6ee4,iVar2,s_NATURE_007ca16c);
    DAT_00806768 = FUN_006f0ec0(0x345,pbVar4,0,0,0);
    DAT_0080676c = FUN_007097c0((int)DAT_00806768);
    wsprintfA((LPSTR)pbVar4,&DAT_007c6ee4,iVar2,s_OTHER_007ca164);
    DAT_00806770 = FUN_006f0ec0(0x345,pbVar4,0,0,0);
    DAT_00806774 = FUN_007097c0((int)DAT_00806770);
    wsprintfA((LPSTR)pbVar4,&DAT_007c6ee4,iVar2,&DAT_007ca15c);
    DAT_00806778 = FUN_006f0ec0(0x345,pbVar4,0,0,0);
    DAT_0080677c = FUN_007097c0((int)DAT_00806778);
    wsprintfA((LPSTR)pbVar4,&DAT_007c6ee4,iVar2,s_CONTROLG_007ca150);
    DAT_00806790 = FUN_006f0ec0(0x345,pbVar4,0,0,0);
    DAT_00806794 = FUN_007097c0((int)DAT_00806790);
    wsprintfA((LPSTR)pbVar4,&DAT_007c6ee4,iVar2,s_OBJECT_007ca148);
    DAT_00806788 = FUN_006f0ec0(0x345,pbVar4,0,0,0);
    DAT_0080678c = FUN_007097c0((int)DAT_00806788);
    DAT_00858df8 = puStack_4c;
    return;
  }
  DAT_00858df8 = puStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_tapp_cpp_007ca0c8,0x400,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7ca0c8,0x400);
  return;
}

