
void __fastcall thunk_FUN_00566900(int param_1)

{
  cMf32 *this;
  
  thunk_FUN_00568940(&DAT_00807658,0xb);
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    cMf32::delete(this,*(undefined4 **)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  return;
}

