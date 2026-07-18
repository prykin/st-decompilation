
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006c2220(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5,
                float param_6)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (DAT_008568b4 == 0) {
    return -0x34;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  if ((((param_1 < 0) || (0x1f < param_1)) ||
      (iVar4 = param_1 * 0xc4, ((&DAT_00854ff8)[iVar4] & 1) == 0)) ||
     (((&DAT_00854ffc)[param_1 * 0x31] & 0x1000) == 0)) {
    iVar3 = -4;
  }
  else {
    piVar1 = (int *)(&DAT_00855008)[param_1 * 0x31];
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar1 + 0x4c))(piVar1,param_2,param_3,param_4,1);
      if (iVar3 != 0) goto LAB_006c235d;
      if (_DAT_0079034c <= param_5) {
        iVar3 = (**(code **)(*(int *)(&DAT_00855008)[param_1 * 0x31] + 0x44))
                          ((int *)(&DAT_00855008)[param_1 * 0x31],param_5,1);
        if (iVar3 != 0) goto LAB_006c235d;
      }
      if (_DAT_0079034c <= param_6) {
        iVar3 = (**(code **)(*(int *)(&DAT_00855008)[param_1 * 0x31] + 0x40))
                          ((int *)(&DAT_00855008)[param_1 * 0x31],param_6,1);
        if (iVar3 != 0) goto LAB_006c235d;
      }
      iVar3 = (**(code **)(*DAT_008568bc + 0x44))(DAT_008568bc);
    }
    bVar2 = _DAT_0079034c <= param_5;
    *(undefined4 *)(&DAT_00855030 + iVar4) = param_2;
    *(undefined4 *)(&DAT_00855034 + iVar4) = param_3;
    *(undefined4 *)(&DAT_00855038 + iVar4) = param_4;
    if (bVar2) {
      *(float *)(&DAT_0085503c + iVar4) = param_5;
    }
    if (_DAT_0079034c <= param_6) {
      *(float *)(&DAT_00855040 + iVar4) = param_6;
    }
  }
LAB_006c235d:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  if ((iVar3 != -4) && (iVar3 != 0)) {
    FUN_006a5e40(iVar3,DAT_007ed77c,0x7ede2c,0x40);
  }
  return iVar3;
}

