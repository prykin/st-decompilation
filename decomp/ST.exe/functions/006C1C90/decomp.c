
void FUN_006c1c90(int param_1)

{
  if (DAT_008568b4 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    if (((-1 < param_1) && (param_1 < 0x20)) && (((&DAT_00854ff8)[param_1 * 0xc4] & 1) != 0)) {
      (&DAT_00854ffc)[param_1 * 0x31] = (&DAT_00854ffc)[param_1 * 0x31] & 0xfffffffe;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  }
  return;
}

