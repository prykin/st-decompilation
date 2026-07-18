
int FUN_004e5e30(int param_1,uint *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if ((-1 < param_1) && (param_1 < 8)) {
    uVar3 = 0;
    do {
      bVar1 = thunk_FUN_004e5c40(param_1,uVar3);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        *param_2 = uVar3;
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x9b);
    return iVar2;
  }
  return 0;
}

