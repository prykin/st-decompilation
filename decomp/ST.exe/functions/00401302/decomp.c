
undefined4 __fastcall thunk_FUN_004ec050(int param_1)

{
  undefined4 *puVar1;
  STT3DSprC *this;
  int iVar2;
  
  if (*(int *)(param_1 + 0x5ff) == 0) {
    puVar1 = (undefined4 *)FUN_0072e530(0x40);
    if (puVar1 == (undefined4 *)0x0) {
      this = (STT3DSprC *)0x0;
    }
    else {
      this = (STT3DSprC *)thunk_FUN_004ab810(puVar1);
    }
    *(STT3DSprC **)(param_1 + 0x5ff) = this;
    iVar2 = STT3DSprC::Init(this,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar2 != 0) {
      FUN_006a5e40(iVar2,DAT_007ed77c,0x7c1648,0x11b);
    }
    thunk_FUN_004ad5e0(*(int *)(param_1 + 0x5ff));
  }
  return 0;
}

