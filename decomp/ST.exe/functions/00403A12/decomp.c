
int __fastcall thunk_FUN_006300e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x1e5);
  iVar3 = 5;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      iVar1 = iVar1 + *(int *)*piVar2;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

