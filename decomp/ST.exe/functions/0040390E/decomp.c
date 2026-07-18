
undefined4 __cdecl
thunk_FUN_004b2390(uint param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5,
                  int param_6)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  if ((((-1 < param_2) && (param_2 < DAT_007fb240)) && (-1 < param_3)) && (param_3 < DAT_007fb242))
  {
    sVar3 = (short)param_2;
    if (-1 < sVar3) {
      sVar1 = (short)param_3;
      sVar4 = (short)param_4;
      if (((((DAT_007fb240 <= sVar3) || (sVar1 < 0)) ||
           ((DAT_007fb242 <= sVar1 || ((sVar4 < 0 || (DAT_007fb244 <= sVar4)))))) ||
          (*(int *)(DAT_007fb248 +
                   ((int)DAT_007fb246 * (int)sVar4 + (int)sVar1 * (int)DAT_007fb240 + (int)sVar3) *
                   8) == 0)) &&
         (((((sVar3 < DAT_007fb240 && (-1 < sVar1)) && (sVar1 < DAT_007fb242)) &&
           ((-1 < sVar4 && (sVar4 < DAT_007fb244)))) &&
          (((*(short *)(DAT_007fb280 +
                       ((int)DAT_007fb278 * (int)sVar1 + (int)DAT_007fb27e * (int)sVar4 + (int)sVar3
                       ) * 2) == 0 &&
            ((uStack_8 = 1, param_6 != 0 && (DAT_00802a88 != (void *)0x0)))) &&
           (iVar2 = thunk_FUN_0055b1c0(DAT_00802a88,param_2,param_3,param_4,param_1), iVar2 != 0))))
         )) {
        uStack_8 = 0;
        *param_5 = 1;
      }
    }
    return uStack_8;
  }
  return 0;
}

