
undefined4 __fastcall thunk_FUN_004cc220(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x444) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0xffffffff;
  uVar1 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)(param_1 + 0x1c) = uVar1;
  *(uint *)(param_1 + 0x450) = (uVar1 >> 0x10) % 0x33 + *(int *)(DAT_00802a38 + 0xe4);
  puVar2 = (undefined4 *)FUN_0072e530(0x40);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = thunk_FUN_004ab810(puVar2);
  }
  *(undefined4 *)(param_1 + 0x603) = uVar3;
  iVar4 = thunk_FUN_004ad1f0(DAT_008073cc,*(uint *)(param_1 + 0x613),*(uint *)(param_1 + 0x617),0,
                             *(uint *)(param_1 + 0x60b),*(uint *)(param_1 + 0x60f),0x11);
  if (iVar4 != 0) {
    FUN_006a5e40(iVar4,DAT_007ed77c,0x7ad4d0,0x355);
  }
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  return 0;
}

