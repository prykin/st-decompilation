
/* [STVTableApplier] Virtual slot 0079DB78+0x4
   
   [STVTableApplier] Virtual slot 0079DDEC+0x4
   
   [STVTableApplier] Virtual slot 007A11C8+0x4
   
   [STVTableApplier] Virtual slot 007A13D0+0x4
   
   [STVTableApplier] Virtual slot 007A15E8+0x4
   
   [STVTableApplier] Virtual slot 007A1C08+0x4
   
   [STVTableApplier] Virtual slot 007A1CB8+0x4
   
   [STVTableApplier] Virtual slot 007A1D88+0x4 */

uint FUN_0074b84e(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  InterlockedIncrement((LONG *)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = 1;
  if (1 < uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}

