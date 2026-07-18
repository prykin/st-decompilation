
undefined4 __fastcall thunk_FUN_004cc220(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  STT3DSprC *this;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x444) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0xffffffff;
  uVar1 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)(param_1 + 0x1c) = uVar1;
  *(uint *)(param_1 + 0x450) = (uVar1 >> 0x10) % 0x33 + *(int *)(DAT_00802a38 + 0xe4);
  puVar2 = (undefined4 *)FUN_0072e530(0x40);
  if (puVar2 == (undefined4 *)0x0) {
    this = (STT3DSprC *)0x0;
  }
  else {
    this = (STT3DSprC *)thunk_FUN_004ab810(puVar2);
  }
  *(STT3DSprC **)(param_1 + 0x603) = this;
  iVar3 = STT3DSprC::Init(this,DAT_008073cc,*(uint *)(param_1 + 0x613),*(uint *)(param_1 + 0x617),0,
                          *(uint *)(param_1 + 0x60b),*(uint *)(param_1 + 0x60f),0x11);
  if (iVar3 != 0) {
    FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,0x355);
  }
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  return 0;
}

