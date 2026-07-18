
undefined4 thunk_FUN_005f6af0(int param_1)

{
  void *this;
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 **ppuStack_50;
  undefined4 auStack_4c [16];
  undefined4 uStack_c;
  int *piStack_8;
  
  uStack_c = 0;
  ppuStack_50 = DAT_00858df8;
  DAT_00858df8 = &ppuStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    this = (void *)((int)piStack_8 + 0x1d5);
    if (param_1 == 0) {
      thunk_FUN_004ab880(8,DAT_00806774,
                         (byte *)(s_Expb12_007ce718 + *(int *)((int)piStack_8 + 0x2cd) * 0x39),0x1d)
      ;
      thunk_FUN_004ab880(9,DAT_00806764,
                         (byte *)(s_expl_bbt0_007ce723 + *(int *)((int)piStack_8 + 0x2cd) * 0x39),
                         0x1d);
      thunk_FUN_004ab880(10,DAT_00806774,
                         (byte *)(s_expmask3_007ce72e + *(int *)((int)piStack_8 + 0x2cd) * 0x39),
                         0x1d);
      thunk_FUN_004ac700(this,'\n');
      thunk_FUN_004ac1a0(10,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004acf20(this,DAT_008032b8,0x10);
      thunk_FUN_004ac1a0(8,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004acfe0(this,'\n');
      uVar3 = thunk_FUN_004ad650((int)this);
      *(undefined4 *)((int)piStack_8 + 0x2b7) = uVar3;
      DAT_00858df8 = (undefined4 ***)ppuStack_50;
      return uStack_c;
    }
    iVar2 = thunk_FUN_004ab880(0xe,DAT_00806774,(byte *)s_coll3_007ce6d8,0x1d);
    if (iVar2 == 0) {
      thunk_FUN_004ad380(this,DAT_007ce78c,DAT_007ce790);
      thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_00417e70(piStack_8,0x18);
      iVar2 = thunk_FUN_004ab880(0xc,DAT_00806774,
                                 (&PTR_s_col3l0_007ce6e0)[*(int *)((int)piStack_8 + 0x235)],0x1d);
      if (iVar2 != 0) {
        return uStack_c;
      }
      thunk_FUN_004ac610(this,'\f');
      thunk_FUN_004ac1a0(0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_005fa0b0((int)piStack_8);
      uVar3 = thunk_FUN_004ad650((int)this);
      *(undefined4 *)((int)piStack_8 + 0x2b7) = uVar3;
      thunk_FUN_004ad430((int)this);
      if (*(char *)((int)piStack_8 + 699) != '\0') {
        thunk_FUN_0041c5a0(piStack_8);
      }
      *(undefined1 *)((int)piStack_8 + 699) = 0;
      DAT_00858df8 = (undefined4 ***)ppuStack_50;
      return uStack_c;
    }
  }
  else {
    DAT_00858df8 = (undefined4 ***)ppuStack_50;
    iVar4 = FUN_006ad4d0(s_E____titans_nick_to_coll3_cpp_007ce868,0x1af,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_006a5e40(iVar2,0,0x7ce868,0x1b1);
  }
  return 0xffff;
}

