
undefined4 FUN_006c1950(int param_1,uint param_2)

{
  if (DAT_008568b4 == 0) {
    return 0xffffffcc;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  if (((-1 < param_1) && (param_1 < 0x20)) && (((&DAT_00854ff8)[param_1 * 0xc4] & 1) != 0)) {
    (&DAT_00855024)[param_1 * 0x31] = param_2 & 0xff;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    return 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  return 0xfffffffc;
}

