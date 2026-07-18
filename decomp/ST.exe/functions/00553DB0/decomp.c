
void __cdecl FUN_00553db0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar1 = 0, 0 < param_3)) {
    do {
      iVar2 = 0;
      if (0 < param_2) {
        do {
          thunk_FUN_00553390(iVar2,iVar1,param_1,param_2,param_3,0);
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}

