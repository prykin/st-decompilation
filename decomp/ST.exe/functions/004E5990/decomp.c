
int FUN_004e5990(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) &&
     (((int)param_2 < 0x9b && (-1 < param_3)))) {

    iVar1 = thunk_FUN_004e5910(param_1,param_2);
    if (iVar1 != 0) {

      iVar2 = thunk_FUN_004e6140(param_1,param_2);
      if (iVar2 < param_3) {
        iVar1 = 0;
      }
    }
    return iVar1;
  }
  return 0;
}

