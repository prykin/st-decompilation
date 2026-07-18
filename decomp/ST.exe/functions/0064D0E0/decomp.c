
void __thiscall
FUN_0064d0e0(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  LPCSTR pCVar2;
  int iVar3;
  CHAR local_404 [1024];
  
  if (DAT_0080734a != '\0') {
    if (param_1 < 0x12d) {
      if (param_1 < -300) {
        param_1 = -300;
      }
    }
    else {
      param_1 = 300;
    }
    uVar1 = FUN_006b0140(0x1d4c - param_1,DAT_00807618);
    pCVar2 = (LPCSTR)FUN_006b0140(0x1b5f,DAT_00807618);
    wsprintfA(local_404,pCVar2,param_1,uVar1,param_2);
    if (DAT_008016d8 != (void *)0x0) {
      thunk_FUN_0052d320(DAT_008016d8,local_404,8);
    }
    thunk_FUN_0064a5b0(local_404);
    if (param_4 < 0) {
      iVar3 = (int)this + 0x92;
      pCVar2 = (LPCSTR)FUN_006b0140(0x1b60,DAT_00807618);
      wsprintfA(local_404,pCVar2,iVar3,param_3);
    }
    else {
      iVar3 = (int)this + 0x92;
      pCVar2 = (LPCSTR)FUN_006b0140(0x1b61,DAT_00807618);
      wsprintfA(local_404,pCVar2,iVar3,param_3,param_4);
    }
    if (DAT_008016d8 != (void *)0x0) {
      thunk_FUN_0052d320(DAT_008016d8,local_404,8);
    }
    thunk_FUN_0064a5b0(local_404);
    thunk_FUN_0064a5b0(&DAT_007d2a00);
  }
  return;
}

