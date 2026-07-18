
int FUN_004e5990(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) &&
     (((int)param_2 < 0x9b && (-1 < param_3)))) {
    bVar1 = thunk_FUN_004e5910(param_1,param_2);
    iVar3 = CONCAT31(extraout_var,bVar1);
    if (iVar3 != 0) {
      uVar2 = thunk_FUN_004e6140(param_1,param_2);
      if (CONCAT31(extraout_var_00,uVar2) < param_3) {
        iVar3 = 0;
      }
    }
    return iVar3;
  }
  return 0;
}

