
int thunk_FUN_004c60e0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 auStack_48 [16];
  undefined4 uStack_8;
  
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,DAT_00858df8);
  if (iVar2 == 0) {
    DAT_007fb2ac = uStack_8;
    return 0;
  }
  iVar3 = FUN_006ad4d0(s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0x2a,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7ad2f4,0x2b);
  return iVar2;
}

