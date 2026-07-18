
undefined4 FUN_006c18d0(int param_1)

{
  if (DAT_008568b4 == 0) {
    return 0xffffffcc;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  if ((-1 < param_1) && (param_1 < 0x20)) {
    if ((*(uint *)(&DAT_00854ff8 + param_1 * 0xc4) & 1) != 0) {
      *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) = *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) | 8;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  return 0xfffffffc;
}

