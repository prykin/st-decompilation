
undefined4 __fastcall FUN_004cc220(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  STT3DSprC *this;
  int exceptionCode;
  
  *(undefined4 *)(param_1 + 0x444) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0xffffffff;
  uVar1 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)(param_1 + 0x1c) = uVar1;
  *(uint *)(param_1 + 0x450) = (uVar1 >> 0x10) % 0x33 + *(int *)(DAT_00802a38 + 0xe4);
  puVar2 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
  if (puVar2 == (undefined4 *)0x0) {
    this = (STT3DSprC *)0x0;
  }
  else {
    this = (STT3DSprC *)thunk_FUN_004ab810(puVar2);
  }
  *(STT3DSprC **)(param_1 + 0x603) = this;
  exceptionCode =
       STT3DSprC::Init(this,DAT_008073cc,*(uint *)(param_1 + 0x613),*(uint *)(param_1 + 0x617),0,
                       *(uint *)(param_1 + 0x60b),*(uint *)(param_1 + 0x60f),0x11);
  if (exceptionCode != 0) {
    RaiseInternalException
              (exceptionCode,DAT_007ed77c,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0x355);
  }
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  return 0;
}

