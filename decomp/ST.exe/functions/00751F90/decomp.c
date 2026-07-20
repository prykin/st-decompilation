
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00751F90 -> EXTERNAL:00000075 @ 00751FA2
   
   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00751F90 -> EXTERNAL:00000075 @ 00751FA2 */

UINT FUN_00751f90(int param_1,LPVOID lpBuffer,UINT uBytes)

{
  UINT UVar1;
  
  UVar1 = _lread(*(HFILE *)(param_1 + 0x26),lpBuffer,uBytes);
  if (UVar1 == 0xffffffff) {
    UVar1 = 0xfffffff4;
  }
  return UVar1;
}

