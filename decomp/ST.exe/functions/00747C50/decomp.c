
/* [STVTableApplier] Virtual slot 0079DCBC+0x8
   
   [STVTableApplier] Virtual slot 0079DED8+0x8
   
   [STVTableApplier] Virtual slot 007A1510+0x8
   
   [STVTableApplier] Virtual slot 007A17C8+0x8
   
   [STVTableApplier] Virtual slot 007A1868+0x8
   
   [STVTableApplier] Virtual slot 007A1950+0x8
   
   [STVTableApplier] Virtual slot 007A19F0+0x8 */

void FUN_00747c50(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x70) + 0xc);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}

