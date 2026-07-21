
int FUN_004e5990(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) &&
     (((int)param_2 < 0x9b && (-1 < param_3)))) {
    iVar2 = thunk_FUN_004e5910(param_1,param_2);
    if (iVar2 != 0) {
      uVar1 = thunk_FUN_004e6140(param_1,param_2);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var,uVar1) < param_3) {
        iVar2 = 0;
      }
    }
    return iVar2;
  }
  return 0;
}

