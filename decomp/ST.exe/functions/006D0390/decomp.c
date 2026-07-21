
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006D0390 -> EXTERNAL:000000B7 @ 006D03CA

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006D0390 -> EXTERNAL:000000B7 @ 006D03CA

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006D0390 -> EXTERNAL:000000B7 @ 006D03CA */

void FUN_006d0390(HDC hdc,int xDest,int yDest,BITMAPINFO *param_4,void *param_5)

{
  uint uVar1;
  DWORD h;
  uint uVar2;

  if (param_5 == (void *)0x0) {
    param_5 = (void *)FUN_006b4fa0((int)param_4);
  }
  uVar1 = (param_4->bmiHeader).biHeight;
  uVar2 = (int)uVar1 >> 0x1f;
  h = (uVar1 ^ uVar2) - uVar2;
  SetDIBitsToDevice(hdc,xDest,yDest,(param_4->bmiHeader).biWidth,h,0,0,0,h,param_5,param_4,0);
  return;
}

