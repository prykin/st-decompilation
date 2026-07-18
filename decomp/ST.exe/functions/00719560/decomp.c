
undefined4 __cdecl FUN_00719560(MCIDEVICEID *param_1)

{
  MCIDEVICEID mciId;
  MCIDEVICEID *pMVar1;
  MCIERROR MVar2;
  
  pMVar1 = param_1;
  mciId = *param_1;
  if (mciId == 0) {
    return 1;
  }
  param_1 = (MCIDEVICEID *)0x0;
  MVar2 = mciSendCommandA(mciId,0x808,2,(DWORD_PTR)&param_1);
  if (MVar2 != 0) {
    FUN_00719c90(MVar2,pMVar1);
    return 1;
  }
  return 0;
}

