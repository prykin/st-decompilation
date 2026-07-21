
void FUN_006d0460(HDC param_1,int param_2,int param_3,BITMAPINFO *param_4,void *param_5,int param_6,
                 int param_7,DWORD param_8,DWORD param_9)

{
  int iVar1;
  int iVar2;
  RGBQUAD *pRVar3;
  UINT cLines;
  BITMAPINFO *pBVar4;
  UINT ColorUse;
  BITMAPINFO local_22c [12];

  if (param_5 == (void *)0x0) {
    param_5 = (void *)FUN_006b4fa0((int)param_4);
  }
  cLines = (param_4->bmiHeader).biHeight;
  iVar1 = FUN_006b4fe0((int)param_4);
  if (((iVar1 == 0) || (0x100 < iVar1)) || ((param_4->bmiHeader).biCompression != 0)) {
    ColorUse = 0;
    if (-1 < (int)cLines) {
      SetDIBitsToDevice(param_1,param_2,param_3,param_8,param_9,param_6,(cLines - param_7) - param_9
                        ,0,cLines,param_5,param_4,0);
      return;
    }
  }
  else {
    pBVar4 = local_22c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      (pBVar4->bmiHeader).biSize = (param_4->bmiHeader).biSize;
      param_4 = (BITMAPINFO *)&(param_4->bmiHeader).biWidth;
      pBVar4 = (BITMAPINFO *)&(pBVar4->bmiHeader).biWidth;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      pRVar3 = local_22c[0].bmiColors;
      do {
        pRVar3->rgbBlue = (char)(short)iVar2;
        pRVar3->rgbGreen = (char)((ushort)(short)iVar2 >> 8);
        iVar2 = iVar2 + 1;
        pRVar3 = (RGBQUAD *)&pRVar3->rgbRed;
      } while (iVar2 < iVar1);
    }
    ColorUse = 1;
    if (-1 < (int)cLines) {
      param_4 = local_22c;
      param_7 = (cLines - param_7) - param_9;
      goto LAB_006d050e;
    }
    param_4 = local_22c;
  }
  cLines = -cLines;
LAB_006d050e:
  SetDIBitsToDevice(param_1,param_2,param_3,param_8,param_9,param_6,param_7,0,cLines,param_5,param_4
                    ,ColorUse);
  return;
}

