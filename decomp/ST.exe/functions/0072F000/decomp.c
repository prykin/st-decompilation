
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0072f000(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint uVar1;
  UINT uExitCode;
  int *local_8;
  
  if (DAT_00857190 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_0085718c = 1;
  DAT_00857188 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_0085a5f4 != (int *)0x0) {
      local_8 = DAT_0085a5f0;
      while (local_8 = local_8 + -1, DAT_0085a5f4 <= local_8) {
        if (*local_8 != 0) {
          (*(code *)*local_8)();
        }
      }
    }
    __initterm((int *)&DAT_007a4644,(int *)&DAT_007a484c);
  }
  __initterm((int *)&DAT_007a4950,(int *)&DAT_007a4a54);
  if ((DAT_00857194 == 0) && (uVar1 = thunk_FUN_006a5530(-1), (uVar1 & 0x20) != 0)) {
    DAT_00857194 = 1;
    thunk_FUN_006a5cd0();
  }
  if (param_3 == 0) {
    DAT_00857190 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  return;
}

