
void __thiscall STAppC::OpenGameDBs(STAppC *this)

{
  STAppC *pSVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  STAppC *pSVar5;
  void *unaff_EDI;
  undefined4 *puStack_4c;
  undefined4 auStack_48 [16];
  STAppC *pSStack_8;
  
  puStack_4c = DAT_00858df8;
  DAT_00858df8 = &puStack_4c;
  pSStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    pSVar1 = pSStack_8 + 0x470;
    pSVar5 = pSStack_8 + 0x7d1a;
    wsprintfA((LPSTR)pSVar5,&DAT_007c6ee4,pSVar1,s_NATURE_007ca16c);
    DAT_00806768 = FUN_006f0ec0(0x345,(byte *)pSVar5,0,0,0);
    DAT_0080676c = FUN_007097c0((int)DAT_00806768);
    wsprintfA((LPSTR)pSVar5,&DAT_007c6ee4,pSVar1,s_OTHER_007ca164);
    DAT_00806770 = FUN_006f0ec0(0x345,(byte *)pSVar5,0,0,0);
    DAT_00806774 = FUN_007097c0((int)DAT_00806770);
    wsprintfA((LPSTR)pSVar5,&DAT_007c6ee4,pSVar1,&DAT_007ca15c);
    DAT_00806778 = FUN_006f0ec0(0x345,(byte *)pSVar5,0,0,0);
    DAT_0080677c = FUN_007097c0((int)DAT_00806778);
    wsprintfA((LPSTR)pSVar5,&DAT_007c6ee4,pSVar1,s_CONTROLG_007ca150);
    DAT_00806790 = FUN_006f0ec0(0x345,(byte *)pSVar5,0,0,0);
    DAT_00806794 = FUN_007097c0((int)DAT_00806790);
    wsprintfA((LPSTR)pSVar5,&DAT_007c6ee4,pSVar1,s_OBJECT_007ca148);
    DAT_00806788 = FUN_006f0ec0(0x345,(byte *)pSVar5,0,0,0);
    DAT_0080678c = FUN_007097c0((int)DAT_00806788);
    DAT_00858df8 = puStack_4c;
    return;
  }
  DAT_00858df8 = puStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_tapp_cpp_007ca0c8,0x400,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7ca0c8,0x400);
  return;
}

