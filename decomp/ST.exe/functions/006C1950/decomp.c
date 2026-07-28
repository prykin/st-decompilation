
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=006C1994 MOV ECX,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 FUN_006c1950(int param_1,byte param_2)

{
  if (DAT_008568b4 == 0) {
    return 0xffffffcc;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  if (((-1 < param_1) && (param_1 < 0x20)) && (((&DAT_00854ff8)[param_1 * 0xc4] & 1) != 0)) {
    (&DAT_00855024)[param_1 * 0x31] = (uint)param_2;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    return 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  return 0xfffffffc;
}

