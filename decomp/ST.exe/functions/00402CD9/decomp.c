
undefined4 __fastcall thunk_FUN_00584380(int *param_1)

{
  void *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (void *)((int)param_1 + 0x1d5);
  iVar1 = thunk_FUN_004ab880(8,DAT_00806774,(byte *)s_Expb11_007cb3f8,0x1d);
  if (iVar1 == 0) {
    thunk_FUN_004ac1a0(8,*(undefined4 *)(DAT_00802a38 + 0xe4));
    thunk_FUN_004ab880(10,DAT_00806774,(byte *)s_expmask3_007cb400,0x1d);
    thunk_FUN_004acfe0(this,'\n');
    thunk_FUN_004acf20(this,DAT_008032b8,0x10);
    thunk_FUN_004ac1a0(10,*(undefined4 *)(DAT_00802a38 + 0xe4));
    (**(code **)(*param_1 + 0xd8))();
    iVar1 = thunk_FUN_004ab880(9,DAT_00806764,(byte *)s_bulb_n5_007cb40c,0x1d);
    if (iVar1 == 0) {
      thunk_FUN_004ad070(this,9);
      uVar2 = thunk_FUN_004acd30(this,'\t');
      *(char *)((int)param_1 + 0x24f) = (char)uVar2;
      *(undefined1 *)(param_1 + 0x94) = DAT_007cb414;
      *(undefined1 *)((int)param_1 + 0x251) = 0;
    }
    *(undefined4 *)((int)param_1 + 0x239) = 100;
    return 0;
  }
  return 0xffffffff;
}

