
void __fastcall FUN_005803e0(int param_1)

{
  if ((*(byte *)(param_1 + 0x261) & 1) == 0) {
    STT3DSprC::StartShow((STT3DSprC *)(param_1 + 0x1d5),0xe,PTR_00802a38->field_00E4);
    STT3DSprC::StartShow((STT3DSprC *)(param_1 + 0x1d5),0xd,PTR_00802a38->field_00E4);
    *(uint *)(param_1 + 0x261) = *(uint *)(param_1 + 0x261) | 1;
  }
  return;
}

