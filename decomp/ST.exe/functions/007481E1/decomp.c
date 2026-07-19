
/* [STVTableApplier] Virtual slot 0079DC74+0x24
   
   [STVTableApplier] Virtual slot 0079DE90+0x24
   
   [STVTableApplier] Virtual slot 007A14C8+0x24
   
   [STVTableApplier] Virtual slot 007A1780+0x24
   
   [STVTableApplier] Virtual slot 007A1820+0x24
   
   [STVTableApplier] Virtual slot 007A1908+0x24
   
   [STVTableApplier] Virtual slot 007A19A8+0x24 */

undefined4 FUN_007481e1(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x58);
    uVar1 = 0;
  }
  return uVar1;
}

