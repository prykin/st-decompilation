
/* [STVTableApplier] Virtual slot 0079DB3C+0x1C
   
   [STVTableApplier] Virtual slot 007A1390+0x1C
   
   [STVTableApplier] Virtual slot 007A15A8+0x1C */

undefined4 FUN_00749db2(int param_1,DWORD param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  DWORD DVar2;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    DVar2 = FUN_0074dcf0(*(undefined4 *)(param_1 + 0x50),param_2,(HWND)0x0,0);
    *param_3 = *(undefined4 *)(param_1 + 8);
    if (DVar2 == 0x102) {
      uVar1 = 0x40237;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

