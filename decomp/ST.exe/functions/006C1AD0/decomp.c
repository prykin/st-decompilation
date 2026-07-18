
int FUN_006c1ad0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  iVar2 = 0;
  if (DAT_008568b4 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    if (param_1 == 0xff) {
      uVar3 = 0;
      pbVar4 = &DAT_00854ff8;
      do {
        if (((*pbVar4 & 1) != 0) && (iVar1 = FUN_006c19d0(param_2,uVar3), iVar2 == 0)) {
          iVar2 = iVar1;
        }
        pbVar4 = pbVar4 + 0xc4;
        uVar3 = uVar3 + 1;
      } while ((int)pbVar4 < 0x856878);
    }
    else if ((((int)param_1 < 0) || (0x1f < (int)param_1)) ||
            (((&DAT_00854ff8)[param_1 * 0xc4] & 1) == 0)) {
      iVar2 = -4;
    }
    else {
      iVar2 = FUN_006c19d0(param_2,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    if ((iVar2 != -4) && (iVar2 != 0)) {
      FUN_006a5e40(iVar2,DAT_007ed77c,0x7ede14,0x4d9);
    }
    return iVar2;
  }
  return -0x34;
}

