
int FUN_004e5cc0(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) &&
     (((int)param_2 < 0x9b && (-1 < param_3)))) {
    bVar1 = thunk_FUN_004e5c40(param_1,param_2);
    iVar3 = CONCAT31(extraout_var,bVar1);
    if (iVar3 != 0) {
      iVar2 = thunk_FUN_004e60d0(param_1,param_2);
      if (param_3 != iVar2 + 1) {
        iVar3 = 0;
      }
    }
    return iVar3;
  }
  return 0;
}

