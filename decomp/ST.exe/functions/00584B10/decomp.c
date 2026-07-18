
void __fastcall FUN_00584b10(int *param_1)

{
  STT3DSprC *this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  this = (STT3DSprC *)((int)param_1 + 0x1d5);
  STT3DSprC::StopShow(this,0xe);
  thunk_FUN_004ad5e0((int)this);
  STT3DSprC::LoadSequence(this,8,DAT_00806774,(byte *)s_Expb22_007cb8c0,0x1d);
  STT3DSprC::LoadSequence(this,10,DAT_00806774,(byte *)s_expmask3_007cb8c8,0x1d);
  uVar4 = 0x45;
  uVar3 = 0x5a;
  iVar2 = 1;
  uVar1 = thunk_FUN_004ad650((int)this);
  FUN_006ea4e0(*(void **)((int)param_1 + 0x211),uVar1,iVar2,uVar3,uVar4);
  thunk_FUN_004acfe0(this,'\n');
  thunk_FUN_004acf20(this,DAT_008032b8,0x10);
  STT3DSprC::StartShow(this,10,*(undefined4 *)(DAT_00802a38 + 0xe4));
  STT3DSprC::StartShow(this,8,*(undefined4 *)(DAT_00802a38 + 0xe4));
  (**(code **)(*param_1 + 0xd8))();
  iVar2 = STT3DSprC::LoadSequence(this,9,DAT_00806764,(byte *)s_expl_bbt0_007cb8d4,0x1d);
  if (iVar2 == 0) {
    thunk_FUN_004ad070(this,9);
    uVar3 = thunk_FUN_004acd30(this,'\t');
    *(char *)((int)param_1 + 0x255) = (char)uVar3;
    *(undefined1 *)((int)param_1 + 0x256) = DAT_007cb8e0;
    *(undefined1 *)((int)param_1 + 599) = 0;
  }
  return;
}

