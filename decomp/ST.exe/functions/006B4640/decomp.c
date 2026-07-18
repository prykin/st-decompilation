
void FUN_006b4640(uint param_1,int param_2,int param_3,BITMAPINFO *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_4->bmiHeader).biHeight;
  uVar2 = (int)uVar1 >> 0x1f;
  FUN_006b42d0(param_1,param_2,param_3,param_4,param_5,0,0,(param_4->bmiHeader).biWidth,
               (uVar1 ^ uVar2) - uVar2);
  return;
}

