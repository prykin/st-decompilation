
void thunk_FUN_00544460(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar4;
  undefined4 uStack_b8;
  undefined4 auStack_b4 [16];
  undefined4 auStack_74 [5];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 auStack_28 [4];
  undefined4 uStack_18;
  undefined4 *puStack_14;
  void *pvStack_8;
  
  uStack_b8 = DAT_00858df8;
  DAT_00858df8 = &uStack_b8;
  iVar2 = __setjmp3(auStack_b4,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar4 = auStack_28;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puStack_14 = *(undefined4 **)((int)pvStack_8 + 8);
    uStack_18 = 0x14;
    FUN_006e6000(pvStack_8,3,1,auStack_28);
    puVar4 = auStack_74;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uStack_60 = *(undefined4 *)((int)pvStack_8 + 8);
    uStack_5c = 2;
    uStack_3c = 2;
    auStack_74[0] = 8;
    uStack_18 = 0x11;
    auStack_74[1] = 0x8000000;
    uStack_58 = 0xa110;
    uStack_38 = 0xa111;
    uStack_40 = uStack_60;
    puStack_14 = auStack_74;
    FUN_006e6000(pvStack_8,3,1,auStack_28);
    auStack_74[1] = 0x1000000;
    uStack_58 = 0xa112;
    uStack_38 = 0xa113;
    FUN_006e6000(pvStack_8,3,1,auStack_28);
    auStack_74[1] = 0x40000000;
    uStack_58 = 0xa114;
    uStack_38 = 0xa115;
    FUN_006e6000(pvStack_8,3,1,auStack_28);
    uStack_38 = 0xa133;
    iVar2 = 4;
    do {
      thunk_FUN_005440c0(pvStack_8,iVar2,auStack_28,(int)auStack_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    uStack_38 = 0;
    iVar2 = 8;
    do {
      thunk_FUN_005440c0(pvStack_8,iVar2,auStack_28,(int)auStack_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x50);
    iVar2 = 0;
    do {
      thunk_FUN_00544150(pvStack_8,iVar2,auStack_28,(int)auStack_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 10);
    iVar2 = 0;
    do {
      thunk_FUN_00544100(pvStack_8,iVar2,auStack_28,(int)auStack_74);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    DAT_00858df8 = (undefined4 *)uStack_b8;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_b8;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x15a,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7d60,0x15b);
  return;
}

