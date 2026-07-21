
undefined4 FUN_006b35d0(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;

  if (param_2 < (uint)param_1[0x68]) {
    puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
    uVar2 = *puVar1;
    if (((uVar2 & 0x8000) != 0) && (((byte)uVar2 & 0x30) == 0x20)) {
      if ((uVar2 & 0x80000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
        FUN_006b23e0((int)param_1,puVar1);
        LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
        return 0;
      }
      FUN_006b23e0((int)param_1,puVar1);
    }
  }
  return 0;
}

