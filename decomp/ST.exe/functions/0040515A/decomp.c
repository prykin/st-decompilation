
undefined4 __thiscall thunk_FUN_004c6210(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  STT3DSprC *this_00;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  puVar1 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (STT3DSprC *)0x0;
  }
  else {
    this_00 = (STT3DSprC *)thunk_FUN_004ab810(puVar1);
  }
  *(STT3DSprC **)((int)this + 0x2c) = this_00;
  if (*(int *)(&DAT_00791d68 + *(int *)((int)this + 0x1c) * 4) == 0) {
    iVar2 = STT3DSprC::Init(this_00,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar2 != 0) {
      RaiseInternalException(iVar2,DAT_007ed77c,s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0x48);
    }
  }
  else if (*(int *)(&DAT_00791d68 + *(int *)((int)this + 0x1c) * 4) == 1) {
    iVar2 = STT3DSprC::Init(this_00,DAT_008073cc,0x78,0x56,0,0xf0,0xbe,0x11);
    if (iVar2 != 0) {
      RaiseInternalException(iVar2,DAT_007ed77c,s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0x49);
    }
    uVar3 = thunk_FUN_004ad650(*(int *)((int)this + 0x2c));
    FUN_006e9210(DAT_00807598,uVar3);
  }
  thunk_FUN_004ad5e0(*(int *)((int)this + 0x2c));
  iVar2 = STT3DSprC::LoadSequence
                    (*(STT3DSprC **)((int)this + 0x2c),0,DAT_0080678c,
                     *(byte **)(&DAT_007ad250 +
                               (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112e) * 4),0x1d);
  if (iVar2 != 0) {
    RaiseInternalException(iVar2,DAT_007ed77c,s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0x4c);
  }
  thunk_FUN_004abce0(*(void **)((int)this + 0x2c),0,
                     *(int *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4),
                     *(int *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4),'\0');
  STT3DSprC::SetCurFase
            (*(STT3DSprC **)((int)this + 0x2c),'\0',
             *(undefined4 *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4));
  uVar4 = FUN_006e51b0(*(int *)((int)this + 0x10));
  STT3DSprC::StartShow(*(STT3DSprC **)((int)this + 0x2c),0,uVar4);
  thunk_FUN_004ad430(*(int *)((int)this + 0x2c));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return 0;
}

