
void FUN_006d03e0(HDC param_1,int param_2,int param_3,BITMAPINFO *param_4,void *param_5,int param_6,
                 int param_7,DWORD param_8,DWORD param_9)

{
  UINT cLines;

  if (param_5 == nullptr) {

    param_5 = STPointerBoundaryCast<void *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)param_4));
  }
  cLines = (param_4->bmiHeader).biHeight;
  if (-1 < (int)cLines) {
    /* ST_CALLSITE[006D0422]: CALL dword ptr [0x0085babc] */
    SetDIBitsToDevice(param_1,param_2,param_3,param_8,param_9,param_6,(cLines - param_7) - param_9,0
                      ,cLines,param_5,param_4,0);
    return;
  }
  /* ST_CALLSITE[006D044E]: CALL dword ptr [0x0085babc] */
  SetDIBitsToDevice(param_1,param_2,param_3,param_8,param_9,param_6,param_7,0,-cLines,param_5,
                    param_4,0);
  return;
}

