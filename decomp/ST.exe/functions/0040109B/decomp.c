
void __fastcall thunk_FUN_005803e0(int param_1)

{
  if ((*(byte *)(param_1 + 0x261) & 1) == 0) {
    STT3DSprC::StartShow((STT3DSprC *)(param_1 + 0x1d5),0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    STT3DSprC::StartShow((STT3DSprC *)(param_1 + 0x1d5),0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
    *(uint *)(param_1 + 0x261) = *(uint *)(param_1 + 0x261) | 1;
  }
  return;
}

