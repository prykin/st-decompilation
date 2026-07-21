
undefined4 __cdecl
FUN_006a1bb0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
            undefined *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;

  if (((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) && (param_4 < 6)) {
    piVar3 = &DAT_007df82c;
    do {
      iVar1 = piVar3[-1] + param_2;
      iVar2 = *piVar3 + param_3;
      if (((-1 < iVar1) && (iVar1 < *param_1)) &&
         ((-1 < iVar2 &&
          ((iVar2 < param_1[1] &&
           (iVar1 = thunk_FUN_006a19d0(param_1,iVar1,iVar2,param_4,param_5,param_6,param_7,param_8),
           iVar1 == 0)))))) {
        return 0;
      }
      piVar3 = piVar3 + 2;
    } while ((int)piVar3 < 0x7df86c);
  }
  return 1;
}

