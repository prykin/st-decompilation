
void __fastcall FUN_005ef5f0(int param_1)

{
  STT3DSprC *this;
  
  this = (STT3DSprC *)(param_1 + 0x1d5);
  thunk_FUN_004abe40(this,'\x0e',
                     ((0x18 - (int)*(short *)(param_1 + 0x6c) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6
                     ) % 0x18);
  STT3DSprC::SetCurShad(this,'\x0e',(0x18 - (int)*(short *)(param_1 + 0x6c) / 0xf) % 0x18);
  STT3DSprC::ShowCurFase(this,'\x0e');
  return;
}

