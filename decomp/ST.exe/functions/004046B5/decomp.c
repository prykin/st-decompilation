
void __fastcall thunk_FUN_00629830(int param_1)

{
  *(undefined4 *)(param_1 + 0xb2) = 0;
  *(undefined1 *)(param_1 + 0xbf) = 1;
  if (*(byte *)(param_1 + 0x14) < 4) {
    *(undefined4 *)(param_1 + 0xba) = 0x25;
  }
  else {
    *(undefined4 *)(param_1 + 0xba) = 0x23;
  }
  if (-1 < (int)*(uint *)(param_1 + 0xc6)) {
    FUN_006e9520(DAT_00807598,*(uint *)(param_1 + 0xc6),0,0,0);
  }
  return;
}

