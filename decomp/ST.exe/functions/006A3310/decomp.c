
int __cdecl FUN_006a3310(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = -1;
  iVar2 = 1;
  do {
    if ((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
       (((param_3 < param_1[1] && (-1 < iVar2)) && (iVar2 < 6)))) {
      iVar1 = thunk_FUN_006a20e0(param_1,param_2,param_3,iVar2,0xff);
      if (iVar1 == 0) {
        local_8 = iVar2;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return local_8;
}

