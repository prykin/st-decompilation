
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041d900(void *this,short param_1,short param_2,short param_3)

{
  if (*(int *)((int)this + 0x2c) == 0) {
    thunk_FUN_004ad3c0((void *)((int)this + 0x1d5),
                       (float)(int)param_1 * _DAT_007904f8 + _DAT_007904f4,
                       (float)(int)param_2 * _DAT_007904f8 + _DAT_007904f4,
                       (float)(int)param_3 * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
    return;
  }
  thunk_FUN_004ad3c0((void *)((int)this + 0x1d5),(float)(param_1 + 1) * _DAT_007904f8,
                     (float)(param_2 + 1) * _DAT_007904f8,
                     (float)(int)param_3 * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
  return;
}

