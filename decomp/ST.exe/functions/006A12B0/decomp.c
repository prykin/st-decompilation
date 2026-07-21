
undefined4 __cdecl
FUN_006a12b0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6)

{
  bool bVar1;
  int iVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar3;
  int *piVar4;

  if (((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) && (param_4 < 6)) {
    piVar4 = &DAT_007df82c;
    do {
      iVar2 = piVar4[-1] + param_2;
      iVar3 = *piVar4 + param_3;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((-1 < iVar2) && (iVar2 < *param_1)) &&
         ((-1 < iVar3 &&
          ((iVar3 < param_1[1] &&
           (bVar1 = thunk_FUN_006a1100(param_1,iVar2,iVar3,param_4,param_5,param_6),
           CONCAT31(extraout_var,bVar1) == 0)))))) {
        return 0;
      }
      piVar4 = piVar4 + 2;
    } while ((int)piVar4 < 0x7df86c);
  }
  return 1;
}

