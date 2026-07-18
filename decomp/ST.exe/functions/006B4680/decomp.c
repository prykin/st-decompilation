
int FUN_006b4680(int *param_1,int param_2,int param_3,BITMAPINFO *param_4,uint *param_5,int param_6,
                int param_7,DWORD param_8,DWORD param_9,uint param_10)

{
  int *piVar1;
  BITMAPINFO *pBVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int local_28;
  DWORD local_24;
  DWORD local_20;
  int local_1c;
  int local_18;
  DWORD local_14;
  DWORD local_10;
  uint local_c;
  uint local_8;
  
  piVar1 = param_1;
  if ((((param_1[3] & 0x1100U) != 0x100) && (iVar5 = 0, 0 < (int)param_8)) && (0 < (int)param_9)) {
    param_10 = param_10 & 0xffffff;
    if ((param_1[2] & 0x4000000U) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
    }
    pBVar2 = param_4;
    param_1 = (int *)0x0;
    if ((piVar1[8] < 0x11) && ((param_4->bmiHeader).biBitCount == 8)) {
      iVar5 = FUN_006bb8b0((int)piVar1);
      if (iVar5 == 0) {
        iVar5 = FUN_006d0cf0((int)piVar1,param_2,param_3,(int)pBVar2,(int)param_5,param_6,param_7,
                             param_8,param_9,(byte)param_10);
        FUN_006bb980((int)piVar1);
      }
      if ((iVar5 == -0x7789ff60) || (iVar5 == -0x7789fe52)) {
        iVar5 = 0;
      }
    }
    else {
      if (param_5 == (uint *)0x0) {
        param_5 = (uint *)FUN_006b4fa0((int)param_4);
      }
      iVar4 = param_2 + piVar1[4];
      param_3 = param_3 + piVar1[5];
      local_14 = param_8;
      local_10 = param_9;
      local_1c = iVar4;
      local_18 = param_3;
      iVar3 = FUN_006cfeb0(&local_1c,&local_1c,piVar1 + 0x121);
      pBVar2 = param_4;
      if (iVar3 != 0) {
        local_2c = (local_1c - iVar4) + param_6;
        piVar1[0x14] = piVar1[6];
        local_28 = (local_18 - param_3) + param_7;
        local_24 = local_14;
        local_20 = local_10;
        iVar3 = FUN_006d0680((int)(piVar1 + 0x13),&local_1c,&local_c,(int)param_4,&local_2c,&local_8
                            );
        if (iVar3 != 0) {
          iVar5 = FUN_006bb6c0((int)piVar1,&param_1,local_14,local_10,param_10,0);
          if (iVar5 == 0) {
            iVar5 = FUN_006d0a20((uint)piVar1,param_1,0,0,pBVar2,param_5,local_2c,local_28,local_14,
                                 local_10);
            if (iVar5 == 0) {
              iVar5 = FUN_006bb9d0((int)piVar1,local_1c,local_18,local_14,local_10,param_1,local_14,
                                   local_10,0x8000);
            }
          }
        }
      }
    }
    if ((piVar1[2] & 0x4000000U) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x13c));
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    if (iVar5 != 0) {
      FUN_006a5e40(iVar5,DAT_007ed77c,0x7edb08,0x4c);
      return iVar5;
    }
  }
  return 0;
}

