
undefined4 __thiscall FUN_004c6210(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  puVar1 = (undefined4 *)FUN_0072e530(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = thunk_FUN_004ab810(puVar1);
  }
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  if (*(int *)(&DAT_00791d68 + *(int *)((int)this + 0x1c) * 4) == 0) {
    iVar3 = thunk_FUN_004ad1f0(DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad2f4,0x48);
    }
  }
  else if (*(int *)(&DAT_00791d68 + *(int *)((int)this + 0x1c) * 4) == 1) {
    iVar3 = thunk_FUN_004ad1f0(DAT_008073cc,0x78,0x56,0,0xf0,0xbe,0x11);
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad2f4,0x49);
    }
    uVar4 = thunk_FUN_004ad650(*(int *)((int)this + 0x2c));
    FUN_006e9210(DAT_00807598,uVar4);
  }
  thunk_FUN_004ad5e0(*(int *)((int)this + 0x2c));
  iVar3 = thunk_FUN_004ab880(0,DAT_0080678c,
                             *(byte **)(&DAT_007ad250 +
                                       (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112e) * 4),
                             0x1d);
  if (iVar3 != 0) {
    FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad2f4,0x4c);
  }
  thunk_FUN_004abce0(*(void **)((int)this + 0x2c),0,
                     *(int *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4),
                     *(int *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4),'\0');
  thunk_FUN_004abe40(*(void **)((int)this + 0x2c),'\0',
                     *(undefined4 *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4));
  uVar2 = FUN_006e51b0(*(int *)((int)this + 0x10));
  thunk_FUN_004ac1a0(0,uVar2);
  thunk_FUN_004ad430(*(int *)((int)this + 0x2c));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return 0;
}

