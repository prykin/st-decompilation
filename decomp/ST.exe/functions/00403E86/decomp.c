
void __fastcall thunk_FUN_005713b0(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00807300 & 0xff;
  if (uVar1 == 2) {
    thunk_FUN_00566ff0((void *)(param_1 + 0x38));
    return;
  }
  if (((uVar1 == 4) || (uVar1 == 8)) && (DAT_008033f0 != 0)) {
    thunk_FUN_00566900(DAT_008033f0);
    return;
  }
  return;
}

