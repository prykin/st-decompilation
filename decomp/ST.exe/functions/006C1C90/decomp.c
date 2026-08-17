
void FUN_006c1c90(int param_1)

{
  if (DAT_008568b4 != 0) {
    /* ST_CALLSITE[006C1CA1]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    if (((-1 < param_1) && (param_1 < 0x20)) && (((&DAT_00854ff8)[param_1 * 0xc4] & 1) != 0)) {
      (&DAT_00854ffc)[param_1 * 0x31] = (&DAT_00854ffc)[param_1 * 0x31] & 0xfffffffe;
    }
    /* ST_CALLSITE[006C1CD3]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  }
  return;
}

