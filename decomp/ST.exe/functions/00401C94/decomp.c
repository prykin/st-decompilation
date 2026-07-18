
void __fastcall thunk_FUN_00566ff0(void *param_1)

{
  uint uVar1;
  
  FUN_007193f0();
  uVar1 = DAT_00807300 & 0xff;
  if (uVar1 == 2) {
    if (*(int *)((int)param_1 + 0xf8f) != 0) {
      FUN_00719560((MCIDEVICEID *)((int)param_1 + 0xf8f));
      FUN_00719c60((MCIDEVICEID *)((int)param_1 + 0xf8f));
    }
  }
  else if ((uVar1 == 4) || (uVar1 == 8)) {
    thunk_FUN_00568940(param_1,0xb);
    return;
  }
  return;
}

