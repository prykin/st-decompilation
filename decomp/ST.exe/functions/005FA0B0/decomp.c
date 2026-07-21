
void __fastcall FUN_005fa0b0(int param_1)

{
  STT3DSprC *this;
  uint uVar1;

  this = (STT3DSprC *)(param_1 + 0x1d5);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = ((0x18 - (int)*(short *)(param_1 + 0x6c) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
  STT3DSprC::SetCurFase(this,'\x0e',uVar1);
  STT3DSprC::SetCurFase(this,'\f',uVar1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  STT3DSprC::SetCurShad(this,'\x0e',(0x18 - (int)*(short *)(param_1 + 0x6c) / 0xf) % 0x18);
  STT3DSprC::ShowCurFase(this,'\x0e');
  return;
}

