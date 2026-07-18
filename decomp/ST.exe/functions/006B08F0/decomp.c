
int FUN_006b08f0(undefined4 *param_1,int param_2,UINT param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  LOGPALETTE local_40c [128];
  int local_8;
  
  iVar3 = 0;
  local_8 = 0;
  if ((param_1 != (undefined4 *)0x0) && (param_1[0x10] != 0)) {
    if (((param_1[2] & 0x20000001) == 0) && ((int)param_1[9] < 9)) {
      if ((int)param_3 < 10) {
        iVar3 = 10 - param_3;
        param_3 = 10;
        param_4 = param_4 - iVar3;
      }
      if (0xf6 < (int)(param_3 + param_4)) {
        param_4 = 0xf6 - param_3;
      }
    }
    if ((param_2 != 0) && (0 < param_4)) {
      if ((param_1[2] & 0x4000000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
      }
      bVar2 = FUN_006b06a0(param_1,local_40c,param_2 + iVar3 * 4,param_3,param_4);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        iVar3 = -0xfd;
      }
      else {
        piVar1 = (int *)param_1[0xf];
        iVar3 = local_8;
        if (piVar1 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,0,0,0x100,local_40c[0].palPalEntry);
          local_8 = iVar3;
        }
      }
      if ((param_1[2] & 0x4000000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
      }
      if (((iVar3 != -0x7789fdc4) && (iVar3 != -0x7789fdb3)) && (iVar3 != -0x7fffbfff)) {
        return iVar3;
      }
    }
  }
  return 0;
}

