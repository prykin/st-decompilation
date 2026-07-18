
undefined4 thunk_FUN_004c94b0(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int *piStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    switch(*(undefined4 *)((int)piStack_c + 0x361)) {
    case 1:
      uVar5 = thunk_FUN_004ceb00(piStack_c,*(undefined4 *)((int)piStack_c + 0x369));
      DAT_00858df8 = (undefined4 *)uStack_50;
      return uVar5;
    case 2:
      uVar5 = thunk_FUN_004e2c30(piStack_c,*(uint *)((int)piStack_c + 0x369));
      DAT_00858df8 = (undefined4 *)uStack_50;
      return uVar5;
    case 3:
      uVar5 = thunk_FUN_004ea830((int)piStack_c);
      DAT_00858df8 = (undefined4 *)uStack_50;
      return uVar5;
    case 4:
      uVar5 = thunk_FUN_004d9c20((int)piStack_c);
      DAT_00858df8 = (undefined4 *)uStack_50;
      return uVar5;
    case 5:
      uStack_8 = 1;
      uVar3 = thunk_FUN_004406c0(*(char *)((int)piStack_c + 0x23d));
      *(undefined4 *)((int)piStack_c + 0x241) =
           *(undefined4 *)
            (&DAT_007e4178 + ((uVar3 & 0xff) + *(int *)((int)piStack_c + 0x235) * 3) * 4);
      thunk_FUN_004cc900((int)piStack_c);
      DAT_00858df8 = (undefined4 *)uStack_50;
      return 1;
    case 6:
      uVar5 = thunk_FUN_004de820(piStack_c);
      DAT_00858df8 = (undefined4 *)uStack_50;
      return uVar5;
    default:
      DAT_00858df8 = (undefined4 *)uStack_50;
      return uStack_8;
    case 8:
      uVar5 = thunk_FUN_004ece40((int)piStack_c);
      DAT_00858df8 = (undefined4 *)uStack_50;
      return uVar5;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  iVar4 = FUN_006ad4d0(s_E____titans_Artem_TLO_bproc_cpp_007ad3b4,0x291,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar2,0,0x7ad3b4,0x292);
  return 0;
}

