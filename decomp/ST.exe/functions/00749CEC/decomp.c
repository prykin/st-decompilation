
/* [STVTableApplier] Virtual slot 0079DB78+0x28
   
   [STVTableApplier] Virtual slot 007A13D0+0x28
   
   [STVTableApplier] Virtual slot 007A15E8+0x28 */

undefined4 __thiscall FUN_00749cec(int param_1,int param_2)

{
  if (param_2 == 1) {
    ResetEvent(*(HANDLE *)(param_1 + 0x58));
  }
  else {
    SetEvent(*(HANDLE *)(param_1 + 0x58));
  }
  return 0;
}

