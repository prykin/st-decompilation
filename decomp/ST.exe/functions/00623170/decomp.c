
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00623170(int param_1)

{
  void *this;
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_nick_to_mine_set_cpp_007d06b0,0x2df,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_006a5e40(iVar2,0,0x7d06b0,0x2e1);
    return 0xffff;
  }
  this = (void *)(local_c + 0x1d5);
  uVar3 = thunk_FUN_004ad650((int)this);
  *(undefined4 *)(local_c + 0x2ba) = uVar3;
  if (param_1 == 0) {
    iVar2 = thunk_FUN_004ab880(0xe,DAT_00806774,(&PTR_DAT_007d02c4)[*(byte *)(local_c + 0x2ad)],0x1d
                              );
    if (iVar2 != 0) {
      return local_8;
    }
    thunk_FUN_004ad380(this,0x5a,0x45);
    thunk_FUN_004ac610(this,'\x0e');
    thunk_FUN_004abe40(this,'\x0e',*(undefined4 *)(local_c + 0x2ce));
    thunk_FUN_004ac040('\x0e');
    thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    uVar3 = thunk_FUN_004acd30(this,'\x0e');
    *(undefined4 *)(local_c + 0x2d2) = uVar3;
    if (*(char *)(local_c + 0x352) != '\0') {
      iVar2 = thunk_FUN_004ab880(0xc,DAT_00806774,
                                 (&PTR_s_mine0_007d02d4)
                                 [*(int *)(local_c + 0x262) + (uint)*(byte *)(local_c + 0x2ad) * 8],
                                 0x1d);
      if (iVar2 != 0) {
        return local_8;
      }
      thunk_FUN_004abe40(this,'\f',*(undefined4 *)(local_c + 0x2ce));
      thunk_FUN_004ac610(this,'\f');
      thunk_FUN_004ac040('\f');
      thunk_FUN_004ac1a0(0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
    }
    if (DAT_00807326 != '\0') {
      thunk_FUN_004abf00('\x0e',(uint)*(byte *)(local_c + 0x2d6));
    }
  }
  else {
    iVar2 = thunk_FUN_004ab880(0xe,DAT_00806774,
                               (&PTR_s_expdeep_007d0354)[*(byte *)(local_c + 0x2ad)],0x1d);
    if (iVar2 != 0) {
      return local_8;
    }
    thunk_FUN_004ac610(this,'\x0e');
    thunk_FUN_004abe40(this,'\x0e',*(undefined4 *)(local_c + 0x2ce));
    thunk_FUN_004ac040('\x0e');
    thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    iVar2 = thunk_FUN_004ab880(10,DAT_00806774,(&PTR_DAT_007d0364)[*(byte *)(local_c + 0x2ad)],0x1d)
    ;
    if (iVar2 != 0) {
      return local_8;
    }
    thunk_FUN_004ac610(this,'\n');
    thunk_FUN_004abe40(this,'\n',*(undefined4 *)(local_c + 0x2e1));
    thunk_FUN_004ac040('\n');
    thunk_FUN_004acf20(this,DAT_008032b8,0x10);
    thunk_FUN_004acfe0(this,'\n');
    thunk_FUN_004ac1a0(10,*(undefined4 *)(DAT_00802a38 + 0xe4));
    *(undefined1 *)(local_c + 0x2e0) = 1;
    iVar2 = thunk_FUN_004ab880(9,DAT_00806764,(&PTR_DAT_007d0374)[*(byte *)(local_c + 0x2ad)],0x1d);
    if (iVar2 != 0) {
      return local_8;
    }
    thunk_FUN_004ac610(this,'\t');
    thunk_FUN_004abe40(this,'\t',*(undefined4 *)(local_c + 0x2db));
    thunk_FUN_004ac040('\t');
    thunk_FUN_004ac1a0(9,*(undefined4 *)(DAT_00802a38 + 0xe4));
    thunk_FUN_004ad070(this,9);
    *(undefined1 *)(local_c + 0x2df) = 1;
  }
  thunk_FUN_004ad3c0(this,(float)*(int *)(local_c + 0x2c2) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)(local_c + 0x2c6) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)(local_c + 0x2ca) * _DAT_007904f8 * _DAT_007904f0 +
                     _DAT_007904fc);
  *(undefined1 *)(local_c + 0x2e9) = 1;
  DAT_00858df8 = (undefined4 *)local_50;
  return 1;
}

