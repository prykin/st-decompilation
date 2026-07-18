
undefined4 FUN_006c1f00(int param_1,uint *param_2,uint *param_3)

{
  if (DAT_008568b4 == 0) {
    return 0xffffffcc;
  }
  if ((-1 < param_1) && (param_1 < 0x20)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    if (param_2 != (uint *)0x0) {
      *param_2 = *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) & 1;
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) >> 1 & 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    return 0;
  }
  return 0xfffffffc;
}

