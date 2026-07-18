
int FUN_006c1ce0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_008568b4 == 0) {
    return -0x34;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  if (((param_1 < 0) || (0x1f < param_1)) || (((&DAT_00854ff8)[param_1 * 0xc4] & 1) == 0)) {
    iVar2 = -4;
  }
  else {
    piVar1 = (int *)(&DAT_00855004)[param_1 * 0x31];
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,param_2);
    }
    *(undefined4 *)(&DAT_00855028 + param_1 * 0xc4) = param_2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  if ((iVar2 != -4) && (iVar2 != 0)) {
    FUN_006a5e40(iVar2,DAT_007ed77c,0x7ede14,0x526);
  }
  return iVar2;
}

