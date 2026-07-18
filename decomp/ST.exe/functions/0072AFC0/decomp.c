
void FUN_0072afc0(void)

{
  if (DAT_0085713c != (HANDLE)0x0) {
    if (DAT_00857134 != (int *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(*DAT_00857134 + 0x4f0));
      CloseHandle(*(HANDLE *)(*DAT_00857134 + 0x508));
      *(undefined4 *)(*DAT_00857134 + 0x508) = 0;
    }
    TerminateThread(DAT_0085713c,0);
    DAT_0085713c = (HANDLE)0x0;
    if (DAT_00857134 == (int *)0x0) {
      DAT_0085713c = (HANDLE)0x0;
      return;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*DAT_00857134 + 0x4f0));
  }
  if (DAT_00857134 != (int *)0x0) {
    FUN_006b3bb0(DAT_00857134,DAT_007f1080);
    DAT_007f1080 = 0xffffffff;
    DAT_00857134 = (int *)0x0;
  }
  return;
}

