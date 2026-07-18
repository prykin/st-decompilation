
void FUN_006d03e0(HDC param_1,int param_2,int param_3,BITMAPINFO *param_4,void *param_5,int param_6,
                 int param_7,DWORD param_8,DWORD param_9)

{
  UINT cLines;
  
  if (param_5 == (void *)0x0) {
    param_5 = (void *)FUN_006b4fa0((int)param_4);
  }
  cLines = (param_4->bmiHeader).biHeight;
  if (-1 < (int)cLines) {
    SetDIBitsToDevice(param_1,param_2,param_3,param_8,param_9,param_6,(cLines - param_7) - param_9,0
                      ,cLines,param_5,param_4,0);
    return;
  }
  SetDIBitsToDevice(param_1,param_2,param_3,param_8,param_9,param_6,param_7,0,-cLines,param_5,
                    param_4,0);
  return;
}

