
void FUN_006c2050(void)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_008568b4 != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    FUN_006b9890(&DAT_00854ff4);
    if (DAT_008568c0 != (HANDLE)0x0) {
      TerminateThread(DAT_008568c0,0);
      DAT_008568c0 = (HANDLE)0x0;
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    piVar2 = &DAT_00855008;
    do {
      if ((piVar2[-4] & 1U) != 0) {
        piVar2[-4] = piVar2[-4] & 0xfffffff7;
        piVar1 = (int *)piVar2[-1];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x48))(piVar1);
          piVar1 = (int *)*piVar2;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *piVar2 = 0;
          }
          (**(code **)(*(int *)piVar2[-1] + 8))((int *)piVar2[-1]);
        }
      }
      piVar2 = piVar2 + 0x31;
    } while ((int)piVar2 < 0x856888);
    if (DAT_008568b8 != (int *)0x0) {
      (**(code **)(*DAT_008568b8 + 0x48))(DAT_008568b8);
      (**(code **)(*DAT_008568b8 + 8))(DAT_008568b8);
      DAT_008568b8 = (int *)0x0;
    }
    (**(code **)(*DAT_008568b4 + 8))(DAT_008568b4);
    DAT_008568b4 = (int *)0x0;
    DAT_00856878 = 0;
    FUN_006ab060(&DAT_008568b0);
  }
  return;
}

