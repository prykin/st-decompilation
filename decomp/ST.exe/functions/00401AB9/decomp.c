
void __fastcall thunk_FUN_005fa0b0(int param_1)

{
  int iVar1;
  
  iVar1 = ((0x18 - (int)*(short *)(param_1 + 0x6c) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
  thunk_FUN_004abe40((void *)(param_1 + 0x1d5),'\x0e',iVar1);
  thunk_FUN_004abe40((void *)(param_1 + 0x1d5),'\f',iVar1);
  thunk_FUN_004abf00('\x0e',(0x18 - (int)*(short *)(param_1 + 0x6c) / 0xf) % 0x18);
  thunk_FUN_004ac040('\x0e');
  return;
}

