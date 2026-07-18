
void __cdecl FUN_00719c60(MCIDEVICEID *param_1)

{
  MCIDEVICEID mciId;
  MCIDEVICEID *pMVar1;
  
  pMVar1 = param_1;
  mciId = *param_1;
  if (mciId != 0) {
    param_1 = (MCIDEVICEID *)0x0;
    mciSendCommandA(mciId,0x804,2,(DWORD_PTR)&param_1);
    *pMVar1 = 0;
  }
  return;
}

