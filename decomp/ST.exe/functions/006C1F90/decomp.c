
undefined4 FUN_006c1f90(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_008568b4 == 0) {
    return 0xffffffcc;
  }
  if ((param_1 < 0) || (0x1f < param_1)) {
    return 0xfffffffc;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  piVar1 = DAT_00854ff4;
  if (DAT_00854ff4 != (int *)0x0) {
    do {
      if (piVar1[0xe] < 0) {
        piVar2 = (int *)*piVar1;
        FUN_006b98c0((int *)&DAT_00854ff4,piVar1);
        FUN_006a5e90(piVar1);
      }
      else {
        if ((piVar1[0xd] <= param_1) && (param_1 <= piVar1[0xe])) {
          local_8 = 1;
          break;
        }
        piVar2 = (int *)*piVar1;
      }
      piVar1 = piVar2;
      if (piVar2 == (int *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
        return 0;
      }
    } while( true );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  return local_8;
}

