
void FUN_006d0390(HDC param_1,int param_2,int param_3,BITMAPINFO *param_4,void *param_5)

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
  SetDIBitsToDevice(param_1,param_2,param_3,(param_4->bmiHeader).biWidth,h,0,0,0,h,param_5,param_4,0
                   );
  return;
}

